/******************************************************************************/
/* File   : SwcApplStartUp.c                                                  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"

#include "SwcApplStartUp.h"
#include "infSwcApplStartUpCfgSwcServiceStartUp.h"

#include "CfgSwcServiceStartUp.h"
#include "infSwcServiceDetSwcServiceStartUp.h"
#include "infMcalMcuSwcApplStartUp.h"
#include "infMcalFlsSwcApplStartUp.h"
#include "infMcalWdgSwcApplStartUp.h"
#include "SwcServiceOs.h"

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
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallFailsafeUpdater_Entry             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUp_Entry           (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUpInitCmac_Entry   (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUpInitKey_Entry    (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallSwcServiceStartUpStayInBoot_Entry (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCallTarget_Entry                      (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckApplStartFlag                    (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckKeyAvailability                  (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckReprogFlag                       (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckReprogLbt                        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpLbt             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpMacErased       (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpValidity        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventCheckSwcServiceStartUpVerification    (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventDefault                               (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFail_Entry                            (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFailsafeUpdaterCheck                  (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFailsafeUpdaterSearchInit             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventFailsafeUpdaterSearchNext             (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventInit_Entry                            (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}

FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventPowerOn_Entry(
      Type_LibAutosarStateMachine_tptrContext const ctptrContext
   ,  Type_LibAutosarStateMachine_eEvent            leEvent
){
   UNUSED(ctptrContext);
   UNUSED(leEvent);

   if(
         0
      == infMcalMcuSwcApplStartUp_u32GetWakeupFactor()
   ){
      infMcalMcuSwcApplStartUp_vSetWakeupFactor();
   }

   SwcServiceOs_mInterruptDisable();

   if(
         (const Type_SwcServiceStartUp_stHeader*)CfgSwcServiceStartUp_dAddressHeader
      != (const Type_SwcServiceStartUp_stHeader*)(&CfgSwcServiceStartUp_cstHeader)
   ){
      SwcServiceDet_tReportError(
            SwcServiceDet_eIdModuleSwcServiceStartUp
         ,  infSwcServiceDetSwcServiceStartUp_dIdInstance_TBD
         ,  infSwcServiceDetSwcServiceStartUp_dIdApi_TBD
         ,  SwcServiceStartUp_eError_ParameterOutOfRange
      );
   }

   infMcalWdgSwcApplStartUp_vClrFlagInit();
   infMcalFlsSwcApplStartUp_vInitPowerOn();

   return LibAutosarStateMachine_eGaurdTrue;
}

FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventTargetCheck                           (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventTargetListInit                        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}
FUNC(Type_LibAutosarStateMachine_eGaurd, SWCSERVICESTARTUP_CODE) SwcApplStartUp_eHandlerEventTargetListNext                        (Type_LibAutosarStateMachine_tptrContext const ctptrContext, Type_LibAutosarStateMachine_eEvent leEvent){UNUSED(ctptrContext); UNUSED(leEvent); return LibAutosarStateMachine_eGaurdTrue;}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

