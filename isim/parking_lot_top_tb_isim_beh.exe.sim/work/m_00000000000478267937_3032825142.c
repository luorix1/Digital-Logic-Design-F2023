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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Xilinx_projects/Digital-Logic-Design-F2023/parking_lot_top.v";
static unsigned int ng1[] = {0U, 0U};
static const char *ng2 = "Enqueue";
static int ng3[] = {1, 0};
static const char *ng4 = "Dequeue";



static void Always_248_0(char *t0)
{
    char t13[8];
    char t38[8];
    char t47[8];
    char t49[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(248, ng0);

LAB5:    xsi_set_current_line(249, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(260, ng0);

LAB10:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB11;

LAB12:
LAB13:    t32 = (t13 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t19 = (t4 + 4);
    t32 = (t12 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t19);
    t10 = *((unsigned int *)t32);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t32);
    t18 = (t16 | t17);
    t20 = (~(t18));
    t21 = (t15 & t20);
    if (t21 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t13) = 1;

LAB25:    t40 = (t0 + 3368);
    xsi_vlogvar_assign_value(t40, t13, 0, 0, 1);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t2) != 0)
        goto LAB28;

LAB29:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB30;

LAB31:    memcpy(t49, t13, 8);

LAB32:    t69 = (t49 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t49);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(249, ng0);

LAB9:    xsi_set_current_line(252, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 1);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB8;

LAB11:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & t28);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    goto LAB13;

LAB14:    xsi_set_current_line(261, ng0);

LAB17:    xsi_set_current_line(262, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t19 = (t12 + 64U);
    t32 = *((char **)t19);
    t39 = (t0 + 3208);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    xsi_vlog_generic_convert_array_indices(t13, t38, t11, t32, 2, 1, t41, 3, 2);
    t42 = (t13 + 4);
    t6 = *((unsigned int *)t42);
    t23 = (!(t6));
    t43 = (t38 + 4);
    t7 = *((unsigned int *)t43);
    t27 = (!(t7));
    t44 = (t23 && t27);
    if (t44 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t4, 1, t3, 1);
    t2 = (t0 + 2888);
    t5 = (t0 + 2888);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t19 = (t0 + 2888);
    t32 = (t19 + 64U);
    t39 = *((char **)t32);
    t40 = (t0 + 3208);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_array_indices(t38, t47, t12, t39, 2, 1, t42, 3, 2);
    t43 = (t38 + 4);
    t6 = *((unsigned int *)t43);
    t23 = (!(t6));
    t48 = (t47 + 4);
    t7 = *((unsigned int *)t48);
    t27 = (!(t7));
    t44 = (t23 && t27);
    if (t44 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    goto LAB16;

LAB18:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t38);
    t45 = (t8 - t9);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t38), t46);
    goto LAB19;

LAB20:    t8 = *((unsigned int *)t38);
    t9 = *((unsigned int *)t47);
    t45 = (t8 - t9);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t2, t13, 0, *((unsigned int *)t47), t46);
    goto LAB21;

LAB24:    t39 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB28:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    memset(t38, 0, 8);
    t32 = (t19 + 4);
    t17 = *((unsigned int *)t32);
    t18 = (~(t17));
    t20 = *((unsigned int *)t19);
    t21 = (t20 & t18);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t32) == 0)
        goto LAB33;

LAB35:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;

LAB36:    memset(t47, 0, 8);
    t40 = (t38 + 4);
    t24 = *((unsigned int *)t40);
    t25 = (~(t24));
    t26 = *((unsigned int *)t38);
    t28 = (t26 & t25);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t40) != 0)
        goto LAB39;

LAB40:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t47);
    t33 = (t30 & t31);
    *((unsigned int *)t49) = t33;
    t42 = (t13 + 4);
    t43 = (t47 + 4);
    t48 = (t49 + 4);
    t34 = *((unsigned int *)t42);
    t35 = *((unsigned int *)t43);
    t36 = (t34 | t35);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t48);
    t50 = (t37 != 0);
    if (t50 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB33:    *((unsigned int *)t38) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t47) = 1;
    goto LAB40;

LAB39:    t41 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB40;

LAB41:    t51 = *((unsigned int *)t49);
    t52 = *((unsigned int *)t48);
    *((unsigned int *)t49) = (t51 | t52);
    t53 = (t13 + 4);
    t54 = (t47 + 4);
    t55 = *((unsigned int *)t13);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t47);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t23 = (t56 & t58);
    t27 = (t60 & t62);
    t63 = (~(t23));
    t64 = (~(t27));
    t65 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t65 & t63);
    t66 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t66 & t64);
    t67 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t67 & t63);
    t68 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t68 & t64);
    goto LAB43;

LAB44:    xsi_set_current_line(271, ng0);

LAB47:    xsi_set_current_line(272, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t19 = (t0 + 2888);
    t32 = (t19 + 64U);
    t39 = *((char **)t32);
    t40 = (t0 + 3048);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t13, 2, t4, t12, t39, 2, 1, t42, 3, 2);
    t43 = (t0 + 2248);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 1);
    t48 = (t0 + 2408);
    xsi_vlogvar_assign_value(t48, t13, 1, 0, 1);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t19 = (t0 + 2728);
    t32 = (t19 + 64U);
    t39 = *((char **)t32);
    t40 = (t0 + 3048);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t39, 2, 1, t42, 3, 2);
    t43 = (t0 + 2568);
    xsi_vlogvar_assign_value(t43, t13, 0, 0, 16);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    goto LAB46;

}


extern void work_m_00000000000478267937_3032825142_init()
{
	static char *pe[] = {(void *)Always_248_0};
	xsi_register_didat("work_m_00000000000478267937_3032825142", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_00000000000478267937_3032825142.didat");
	xsi_register_executes(pe);
}
