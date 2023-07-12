#pragma once
/******************************************************************************/
/* File   : infSwcApplStartUpCfgSwcServiceStartUp.h                           */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SwcServiceStartUp.h"

#include "LibAutosar_StateMachine.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallFailsafeUpdater_Entry             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUp_Entry           (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUpInitCmac_Entry   (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUpInitKey_Entry    (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUpStayInBoot_Entry (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallTarget_Entry                      (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckApplStartFlag                    (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckKeyAvailability                  (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckReprogFlag                       (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckReprogLbt                        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpLbt             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpMacErased       (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpValidity        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpVerification    (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventDefault                               (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFail_Entry                            (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFailsafeUpdaterCheck                  (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFailsafeUpdaterSearchInit             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFailsafeUpdaterSearchNext             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventInit_Entry                            (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventPowerOn_Entry                         (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventTargetCheck                           (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventTargetListInit                        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);
extern FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventTargetListNext                        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

