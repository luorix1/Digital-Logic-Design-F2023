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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/luorix/Desktop/Digital-Logic-Design-F2023/parking_lot_top.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};



static void Always_248_0(char *t0)
{
    char t13[8];
    char t40[8];
    char t41[8];
    char t62[8];
    char t81[8];
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
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
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
LAB16:    xsi_set_current_line(268, ng0);
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

LAB25:    t39 = (t0 + 3368);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 1);
    xsi_set_current_line(270, ng0);
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

LAB31:    memcpy(t62, t13, 8);

LAB32:    t48 = (t62 + 4);
    t76 = *((unsigned int *)t48);
    t77 = (~(t76));
    t78 = *((unsigned int *)t62);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
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
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    t38 = (t0 + 2728);
    t42 = (t0 + 2728);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t45 = (t0 + 2728);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 3208);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_convert_array_indices(t40, t41, t44, t47, 2, 1, t50, 3, 2);
    t51 = (t40 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t41 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (!(t55));
    t57 = (t53 && t56);
    if (t57 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(263, ng0);
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
    t38 = *((char **)t32);
    t39 = (t0 + 3208);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_array_indices(t40, t41, t12, t38, 2, 1, t43, 3, 2);
    t44 = (t40 + 4);
    t6 = *((unsigned int *)t44);
    t23 = (!(t6));
    t45 = (t41 + 4);
    t7 = *((unsigned int *)t45);
    t27 = (!(t7));
    t53 = (t23 && t27);
    if (t53 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    goto LAB16;

LAB18:    t58 = *((unsigned int *)t40);
    t59 = *((unsigned int *)t41);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t38, t39, 0, *((unsigned int *)t41), t61);
    goto LAB19;

LAB20:    t8 = *((unsigned int *)t40);
    t9 = *((unsigned int *)t41);
    t56 = (t8 - t9);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t2, t13, 0, *((unsigned int *)t41), t57);
    goto LAB21;

LAB24:    t38 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t38) = 1;
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
    memset(t40, 0, 8);
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

LAB35:    t38 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t38) = 1;

LAB36:    memset(t41, 0, 8);
    t39 = (t40 + 4);
    t24 = *((unsigned int *)t39);
    t25 = (~(t24));
    t26 = *((unsigned int *)t40);
    t28 = (t26 & t25);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t39) != 0)
        goto LAB39;

LAB40:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t41);
    t33 = (t30 & t31);
    *((unsigned int *)t62) = t33;
    t43 = (t13 + 4);
    t44 = (t41 + 4);
    t45 = (t62 + 4);
    t34 = *((unsigned int *)t43);
    t35 = *((unsigned int *)t44);
    t36 = (t34 | t35);
    *((unsigned int *)t45) = t36;
    t37 = *((unsigned int *)t45);
    t52 = (t37 != 0);
    if (t52 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB33:    *((unsigned int *)t40) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t41) = 1;
    goto LAB40;

LAB39:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB40;

LAB41:    t55 = *((unsigned int *)t62);
    t58 = *((unsigned int *)t45);
    *((unsigned int *)t62) = (t55 | t58);
    t46 = (t13 + 4);
    t47 = (t41 + 4);
    t59 = *((unsigned int *)t13);
    t63 = (~(t59));
    t64 = *((unsigned int *)t46);
    t65 = (~(t64));
    t66 = *((unsigned int *)t41);
    t67 = (~(t66));
    t68 = *((unsigned int *)t47);
    t69 = (~(t68));
    t23 = (t63 & t65);
    t27 = (t67 & t69);
    t70 = (~(t23));
    t71 = (~(t27));
    t72 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t72 & t70);
    t73 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t73 & t71);
    t74 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t74 & t70);
    t75 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t75 & t71);
    goto LAB43;

LAB44:    xsi_set_current_line(270, ng0);

LAB47:    xsi_set_current_line(271, ng0);
    t49 = (t0 + 2888);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t54 = (t0 + 2888);
    t82 = (t54 + 72U);
    t83 = *((char **)t82);
    t84 = (t0 + 2888);
    t85 = (t84 + 64U);
    t86 = *((char **)t85);
    t87 = (t0 + 3048);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    xsi_vlog_generic_get_array_select_value(t81, 2, t51, t83, t86, 2, 1, t89, 3, 2);
    t90 = (t0 + 2408);
    xsi_vlogvar_assign_value(t90, t81, 0, 0, 1);
    t91 = (t0 + 2248);
    xsi_vlogvar_assign_value(t91, t81, 1, 0, 1);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t19 = (t0 + 2728);
    t32 = (t19 + 64U);
    t38 = *((char **)t32);
    t39 = (t0 + 3048);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_get_array_select_value(t13, 16, t4, t12, t38, 2, 1, t43, 3, 2);
    t44 = (t0 + 2568);
    xsi_vlogvar_assign_value(t44, t13, 0, 0, 16);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    goto LAB46;

}


extern void work_m_10042154045612870177_3032825142_init()
{
	static char *pe[] = {(void *)Always_248_0};
	xsi_register_didat("work_m_10042154045612870177_3032825142", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_10042154045612870177_3032825142.didat");
	xsi_register_executes(pe);
}
