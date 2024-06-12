#pragma once
/******************************************************************************/
/* File   : infSwcApplStartUpCfgSwcServiceStartUp.h                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

