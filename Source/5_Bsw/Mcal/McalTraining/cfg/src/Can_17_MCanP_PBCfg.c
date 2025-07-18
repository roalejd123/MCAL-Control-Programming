/*******************************************************************************
**                                                                            **
** Copyright (C) Infineon Technologies (2013)                                 **
**                                                                            **
** All rights reserved.                                                       **
**                                                                            **
** This document contains proprietary information belonging to Infineon       **
** Technologies. Passing on and copying of this document, and communication   **
** of its contents is not permitted without prior written authorization.      **
**                                                                            **
********************************************************************************
**                                                                            **
**  $FILENAME   : Can_17_MCanP_PBCfg.c $                                     **
**                                                                            **
**  $CC VERSION : \main\dev_tc23x_as4.0.3\36 $                               **
**                                                                            **
**  DATE, TIME: 2021-11-03, 08:11:03                                      **
**                                                                            **
**  GENERATOR : Build b141014-0350                                          **
**                                                                            **
**  AUTHOR    : DL-AUTOSAR-Engineering                                        **
**                                                                            **
**  VENDOR    : Infineon Technologies                                         **
**                                                                            **
**  DESCRIPTION  : CAN configuration generated out of ECU configuration       **
**                   file(Can_17_MCanP.bmd)                                   **
**                                                                            **
**  MAY BE CHANGED BY USER [yes/no]: No                                       **
**                                                                            **
*******************************************************************************/

/**  TRACEABILITY: [cover parentID=DS_NAS_CAN_PR69_PR469_PR122,DS_NAS_CAN_PR446,
            DS_NAS_CAN_PR700,DS_NAS_CAN_PR701,DS_NAS_CAN_PR704,DS_NAS_CAN_PR707,
            DS_NAS_CAN_PR708,DS_NAS_CAN_PR712,DS_NAS_CAN_PR713,DS_NAS_CAN_PR714,
            DS_NAS_CAN_PR716,DS_NAS_CAN_PR717,DS_NAS_CAN_PR723,DS_NAS_CAN_PR724,
            DS_NAS_CAN_PR728,DS_NAS_CAN_PR709,SAS_AS4XX_CAN_PR680]
                     [/cover]                                                **/

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/

/* Include CAN Driver Header File */
#include "Can_17_MCanP.h"

/*******************************************************************************
**                      Private Macro Definitions                             **
*******************************************************************************/

/*******************************************************************************
**                      Imported Compiler Switch Check                        **
*******************************************************************************/
/*******************************************************************************
**                      Private Type Definitions                              **
*******************************************************************************/
/*******************************************************************************
**                      Private Function Declarations                         **
*******************************************************************************/
/*******************************************************************************
**                      Global Constant Definitions                           **
*******************************************************************************/
#define CAN_17_MCANP_START_SEC_POSTBUILDCFG
#include "MemMap.h"


/******************************************************************************/
                /* CAN Controller Baudrate Configurations */
/******************************************************************************/
                          /* Baudrate Setting */
   /* (uint16)((DIV8 << 15)|(TSEG2 << 12)|(TSEG1 << 8)|(SJW << 6)|(BRP)) */
   /* SJW   -> CanControllerSyncJumpWidth - 1                            */
   /* TSEG1 -> CanControllerPropSeg + CanControllerSeg1 - 1              */
   /* TSEG2 -> CanControllerSeg2 - 1                                     */
/******************************************************************************/


/* CanConfigSet_0 -> CanController_0 Baudrate Configuration */

static const Can_17_MCanP_ControllerBaudrateConfigType Can_kBaudrateConfig_0_0[] =
{
  {
    /* Configured Baudrate -> 500 kbps */
    /* Actual Baudrate     -> 500.0 kbps */
    /* BRP   -> 3 */
    /* SJW   -> 2  */
    /* TSEG1 -> 14  */
    /* TSEG2 -> 3  */
    /* DIV8  -> 0  */
    0x3e83U,
    500U
  }
};

static const Can_BaudrateConfigPtrType Can_kBaudrateConfig_0[] =
{
  { &Can_kBaudrateConfig_0_0[0] },
};



/******************************************************************************/
            /* Loopback and receive input pin selection setting */
/******************************************************************************/

/* Config 0 */
static const struct Can_NPCRValueType Can_kNPCR_0[] =
{
  /* LoopBack Disabled, RXDCANxB */
  { 1U },
};


/*******************************************************************************
               Transmit / Receive Hardware Object Configurations
********************************************************************************
 Tx Object -> { HW MO Id, [No. of Multiplexed MOs,] Hw Controller Id, Id Type }
        Rx Object -> { Mask, Msg Id, HW MO Id, Hw Controller Id, [Id Type] }
********************************************************************************
       Note: [1] If the associated CAN Controller is not activated then,
                   Hw Controller Id -> 255
             [2] If CanFilterMaskRef is not configured then,
                   Mask -> 0x7ff - for STANDARD Msg Id Type
                           0x1fffffff - for EXTENDED/MIXED Msg Id Type
*******************************************************************************/

/* CanConfigSet_0 -> Transmit Hardware Object Configuration */
static const Can_TxHwObjectConfigType Can_kTxHwObjectConfig_0[] =
{
  { 4U, 0U },
  { 5U, 0U },
  { 6U, 0U },
  { 7U, 0U },
  { 8U, 0U },
  { 9U, 0U },
  { 10U, 0U },
  { 11U, 0U },
  { 12U, 0U },
  { 13U, 0U },
  { 14U, 0U }
};
/* CanConfigSet_0 -> Receive Hardware Object Configuration */
static const Can_RxHwObjectConfigType Can_kRxHwObjectConfig_0[] =
{
  { 0x7ffU, 0x7d3U, 0U, 0U },
  { 0x7ffU, 0x7dfU, 1U, 0U },
  { 0x7ffU, 0x770U, 2U, 0U },
  { 0x7ffU, 0x100U, 3U, 0U }
};

/*******************************************************************************
     CAN Hardware object Id <-> CAN Transmit/Recieve Object Handle Mapping
*******************************************************************************/
/* CanConfigSet_0 -> Kernal 0 CAN Hw Object ID - CAN Hth Mapping */
static const uint8 Can_kTxObjectHthKer0Map_0[] =
{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

/* CanConfigSet_0 -> Kernal 0 CAN Hw Object ID - CAN Hrh Mapping */
static const uint8 Can_kRxObjectHrhKer0Map_0[] =
{ 0, 1, 2, 3 };



/*******************************************************************************
              CAN Controller <-> CAN Hardware Object Mapping
********************************************************************************
        { First Rx Hardware Object, No. of Rx Hardware Objects,
          First Tx Hardware Object, No. of Tx Hardware Objects }
********************************************************************************
           Note: If the CAN controller is not activated then,
                 { 0U, 0U, 0U, 0U } will be generated
*******************************************************************************/

/* CanConfigSet_0 -> CAN Controller - CAN Hardware Object Mapping */
static const Can_ControllerMOMapConfigType Can_kControllerMOMapConfig_0[] =
{

  { { 0U, 4U, 4U, 11U } }
};



/*******************************************************************************
              CAN Controller Handling of Events : Interrupt/Polling
********************************************************************************
        { CanBusoffProcessing, CanRxProcessing,
          CanTxProcessing, CanWakeupProcessing }
********************************************************************************
           Note: If the CAN controller is not activated then,
                 { 0U, 0U, 0U, 0U } will be generated
*******************************************************************************/

/* CanConfigSet_0 -> CAN Controller - Handling of Events */
static const Can_EventHandlingType Can_kEventHandlingConfig_0[] =
{
 { { (CAN_INTERRUPT),(CAN_INTERRUPT),(CAN_INTERRUPT),(CAN_INTERRUPT)} }
};



/*******************************************************************************
              CAN Controller <-> Default Baudrate Mapping
********************************************************************************
          { NBTR Register Settings, Default Baudrate in kbps }
*******************************************************************************/

/* CanConfigSet_0 -> CAN Controller - default baudrate mapping */
static const Can_17_MCanP_ControllerBaudrateConfigType Can_kDefaultBaudrateConfig_0[] =
{
  /* CAN Controller 0 :
     Configured Baudrate -> 500 kbps
     Actual Baudrate     -> 500.0 kbps */
  { 0x3e83U, 500U }
};




/******************************************************************************/
                      /* CAN Configuration Pointer */
/******************************************************************************/
      /* Over all CAN configurations in the array, pointer to one of the
           configuration is passed as parameter to Can_Init API */
/******************************************************************************/

const Can_17_MCanP_ConfigType Can_17_MCanP_ConfigRoot[] =
{
  {
    /* Pointer to Loopback and receive input pin selection setting */
    &Can_kNPCR_0[0],

    /* Pointer to CAN Controller <-> Hardware Objects Mapping */
    &Can_kControllerMOMapConfig_0[0],

    /* Pointer to CAN Controller Handling of Events : Interrupt/Polling */
    &Can_kEventHandlingConfig_0[0],

    /* Pointer to Controller Baudrate Configuration */
    &Can_kBaudrateConfig_0[0],

    /* Pointer to default baudrate configuration */
    &Can_kDefaultBaudrateConfig_0[0],



   /* Pointer to Configuration of transmit hardware objects */
    &Can_kTxHwObjectConfig_0[0],

    /* Pointer to Configuration of receive hardware objects */
    &Can_kRxHwObjectConfig_0[0],


    /* Pointer to Configuration of Kernal0 Hth Mapping */
    &Can_kTxObjectHthKer0Map_0[0],


    /* Pointer to Configuration of Hrh Mapping */
    &Can_kRxObjectHrhKer0Map_0[0],


    /* CAN Module clock configuration : Fractional Divider Register setting */
    /* NORMAL_DIVIDER - Bit 14 is set */
    /* CanClockStepValue 1023 (0x3ff) is assigned to bit 0-9. */
    0x43ffU,

    /* Number of configured CAN controllers */
    1U,

    /* CanControllerId --> CanHwControllerId (MultiCAN+ Controller Id) */
    { 0U },

    /* CAN Controller-wise number of baudrate configurations */
    { 1U },

    /* Total number of Transmit Hardware Objects */
    11U,

    /* Total number of Receive Hardware Objects */
    4U,

    /* Number of Receive Rx MOs + Rx FIFO MOs */
    4U,

    /* Transmit Hardware Objects Offset Kernel wise */
    { 4U, 0U },

    /* Receive Hardware Objects Offset Kernel wise */
    { 0U, 0U },

    /* Number of Rx FIFO MOs Kernel wise*/
    { 0U, 0U },

    /* Last MSPND register to be scanned for Rx MOs */
    0U,

    /* First MSPND register to be scanned for Tx MOs */
    0U,

    /* Last MSPND register to be scanned for Tx MOs */
    0U,

  }
};

#define CAN_17_MCANP_STOP_SEC_POSTBUILDCFG
/*IFX_MISRA_RULE_19_01_STATUS=File inclusion after pre-processor directive is
 allowed only for MemMap.h*/
#include "MemMap.h"

/*******************************************************************************
**                      Global Variable Definitions                           **
*******************************************************************************/
/*******************************************************************************
**                      Private Constant Definitions                          **
*******************************************************************************/
/*******************************************************************************
**                      Private Variable Definitions                          **
*******************************************************************************/
/*******************************************************************************
**                      Global Function Definitions                           **
*******************************************************************************/
/*******************************************************************************
**                      Private Function Definitions                          **
*******************************************************************************/
