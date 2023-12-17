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
    work_m_00000000001560039512_3229836915_init();
    work_m_00000000002087547721_2083636940_init();
    work_m_00000000001187760805_3092705115_init();
    work_m_00000000000478267937_3032825142_init();
    work_m_00000000001198043850_1540219875_init();
    work_m_00000000002206122330_1764046456_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002206122330_1764046456");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
