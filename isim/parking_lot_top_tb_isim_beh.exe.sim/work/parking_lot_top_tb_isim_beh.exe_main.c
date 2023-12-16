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
    work_m_12497578277590627145_2083636940_init();
    work_m_11438837930046138219_3092705115_init();
    work_m_10042154045612870177_3032825142_init();
    work_m_06969594162012987068_1540219875_init();
    work_m_17362382191410761244_1764046456_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_17362382191410761244_1764046456");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
