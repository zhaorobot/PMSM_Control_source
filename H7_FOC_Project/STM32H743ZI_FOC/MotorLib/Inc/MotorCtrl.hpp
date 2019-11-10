/*
 * MotorCtrl.hpp
 *
 *  Created on: Aug 5, 2019
 *      Author: watashi
 */

#ifndef MOTORCTRL_HPP_
#define MOTORCTRL_HPP_

#include "paramsetting.h" //パラメータのマクロ
#include "MotorLibDefPack.hpp"

// ../SystemLib/Inc/
#include "STM32SystemPack.h"

#include "ADCCtrl.hpp"
#include "TIMCtrl.hpp"
#include "EncoderABZCtrl.hpp"

//#include "GPIOInit.hpp"
//#include "USARTInit.hpp"

#include "MotorInfo.hpp"
#include "UIStatus.hpp"

#include "ArgCtrl.hpp"
#include "MotorMath.hpp"
#include "PID.hpp"
#include "Observer.hpp"
#include <array>

#include "PWM.hpp"
//#include "UART.hpp"

#include "DebugCtrl.hpp"
//#include "DebugOutput.hpp"


class MotorCtrl {
public:

	enum OperationMode { //測定か運転か
		Measure = -1,
		Drive = 1,
	};

	enum ControlMode { //強制転流、FOCなどの動作モード管理
		OpenLoop = 1,
		OpenLoopToFOC,
		FOC,
	};

private:
	MotorInfo mMotorInfo;
	Observer mObserver;

	PID mIdPID, mIqPID;
	PID mIganmaPID, mIdeltaPID;

	PID mVelocityPID;

	ArgCtrl mArgCtrl;

	OperationMode mOperationMode;
	ControlMode mControlMode;

	UIStatus mUIStatus;
	DebugCtrl mDebugCtrl;

public:
	MotorCtrl();
	virtual ~MotorCtrl();
	void SetMotorInfo(MotorInfo pMotorInfo);

	void InitSystem(void);
	void InitMotorControl(void);
	void InitObserver(void);

	void HighFreqTask(void);

	void MotorDrive(void);
	//MotorDrive内呼び出し関数
	void ReadCurrentTask();
	void setIuvw(float pIu, float pIv, float pIw);
	void ReadVoltageTask();

	void ReadAngleTask(void);
	fp_rad GetAngleForOpenLoop();
	fp_rad GetAngleForFOC();

	void clarkTransform(void);
	void parkTransform(void);
	void parkGanmaDelta(void);
	void parkabtogd(void);

	void ObserverTask();

	void CurrentControlTask();
	std::array<float, 2> GetCurrentTarget();
	void CurrentFeedForwardTask();
	void CurrentPITask();
	std::array<float, 2> PIDgd_control(std::array<float, 2> pErrIgd);//どちらかが死にclassになるけど毎回呼ぶ作業でif文使いたくない。
	void setVgd(std::array<float, 2> pVgd);

	std::array<float, 2> getIdq(void);
	std::array<float, 2> getIgd(void);

	void invParkgdtoab(void);
	void invParkGanmaDelta(void);
	void invParkTransform(void);
	void invClarkTransform(void);
	void SVM(void);

	void VoltageOutputTask(void);

	void VelocityPIDTask();
	void GPIODebugTask();

	//Handler
	void ControlModeHandler();

	//Debug
	void JLinkDebug();

	//UI
	void BtnAct(void);
	void BtnActOFF(void);
	void BtnActON(void);

//	//for debug
//	void DbgUart(std::string pStr);
//	void DebugTask(float pIu, float pIv, float pIw, float pArg);

    //void PIDdq_control(std::array<float, 2> pErrIdq);//ここでPID使う？？ライブラリインクルード必要だよね？
	//void setVdq(std::array<float, 2> pVdq);//使ってない使わないのでは
	//void MotorOutputTask(void);

private:
	int mlogcount = 0;
	int mTransitionCountForOpenToFOC = 0;
	int mTransitionCountForOpenToFOC2 = 0;

	int mFOCcount=0;
};

#endif /* MOTORCTRL_HPP_ */
