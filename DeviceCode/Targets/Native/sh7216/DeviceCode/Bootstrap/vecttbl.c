/***********************************************************************/
/*                                                                     */
/*  FILE        :vecttbl.c                                             */
/*  DATE        :Thu, Mar 04, 2010                                     */
/*  DESCRIPTION :Initialize of Vector Table                            */
/*  CPU TYPE    :SH2A                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  


#include "vect.h"

#pragma section VECTTBL

void (*RESET_Vectors[])(void) = {
//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
    (void*) PowerON_Reset_PC,                                                                                                                
//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP
    __secend("S"),
//;<<VECTOR DATA START (MANUAL RESET)>>
//;2 Manual Reset PC
    (void*) Manual_Reset_PC,                                                                                                                 
//;<<VECTOR DATA END (MANUAL RESET)>>
// 3 Manual Reset SP
    __secend("S")
};