/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00663164001697157208_3229836915_init();
    work_m_03643471966070937028_2083636940_init();
    work_m_04650478959988445363_3540894680_init();
    work_m_06173803168946389515_3092705115_init();
    work_m_09660020718520536999_3032825142_init();
    work_m_16666153935221518083_1540219875_init();
    work_m_12148097070905953469_1764046456_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_12148097070905953469_1764046456");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
