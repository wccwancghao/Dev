/*******************************************************************************
**                                                                            **
**  Copyright (C) AUTOSarZs olc (2019)		                                  **
**                                                                            **
**  All rights reserved.                                                      **
**                                                                            **
**  This document contains proprietary information belonging to AUTOSarZs     **
**  olc . Passing on and copying of this document, and communication          **
**  of its contents is not permitted without prior written authorization.     **
**                                                                            **
********************************************************************************
**                                                                            **
**  FILENAME     : CanIf			                                      **
**                                                                            **
**  VERSION      : 1.0.0                                                      **
**                                                                            **
**  DATE         : 2019-10-20                                                 **
**                                                                            **
**  VARIANT      : Variant PB                                                 **
**                                                                            **
**  PLATFORM     : TIVA C		                                              **
**                                                                            **
**  AUTHOR       : AUTOSarZs-DevTeam	                                      **
**                                                                            **
**  VENDOR       : AUTOSarZs OLC	                                          **
**                                                                            **
**                                                                            **
**  DESCRIPTION  : CAN Interface source file                                  **
**                                                                            **
**  SPECIFICATION(S) : Specification of CAN Interface, AUTOSAR Release 4.3.1   **
**                                                                            **
**  MAY BE CHANGED BY USER : no                                               **
**                                                                            **
*******************************************************************************/
#ifndef __CANIF_H__
#define __CANIF_H__

//#include "CanIf_Types.h"
#include "CanIf_Cfg.h"
#include "Can.h"
#include "CanIf_Types.h"
/* CAN Module Id */
#define CANIF_MODULE_ID    (60U)
/* CAN Instance Id */
#define CANIF_INSTANCE_ID  (0U)
/* Can_DetErrorType ENUM */
//typedef uint8 Can_DetErrorType;

#define CANIF_E_PARAM_CONTROLLERID 		((Can_DetErrorType)0x0F)
#define CANIF_E_PARAM_POINTER			((Can_DetErrorType)0x14)
#define CANIF_E_INVALID_TXPDUID         ((Can_DetErrorType)0x32)

/* Can_ServiceId ENUM  */
//t typedef uint8 Can_ServiceId;
#define CanIf_GetControllerMode_Id 		((Can_ServiceId)0x04)
#define CanIf_CancelTransmit_Id         ((Can_ServiceId)0x4A)
#define CanIf_TRansmit_Id               ((Can_ServiceId)0x49)
Std_ReturnType CanIf_GetControllerMode(uint8 ControllerId,Can_ControllerStateType* ControllerModePtr);

#endif /* __CANIF_H__ */
