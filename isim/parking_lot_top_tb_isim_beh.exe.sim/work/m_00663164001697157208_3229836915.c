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
static const char *ng0 = "/home/luorix/Desktop/Digital-Logic-Design-F2023-1218_w-leakage/parking_lot_top.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {9U, 0U};
static unsigned int ng4[] = {8U, 0U};
static int ng5[] = {2, 0};



static void Always_293_0(char *t0)
{
    char t13[8];
    char t16[8];
    char t37[8];
    char t38[8];
    char t41[8];
    char t60[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(293, ng0);

LAB5:    xsi_set_current_line(295, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(314, ng0);

LAB64:    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(295, ng0);

LAB9:    xsi_set_current_line(296, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB10:    xsi_set_current_line(301, ng0);

LAB13:    xsi_set_current_line(303, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 32, t12, 32);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t5 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB17;

LAB14:    if (t26 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t16) = 1;

LAB17:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t5 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB24;

LAB21:    if (t26 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t16) = 1;

LAB24:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(311, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB47;

LAB46:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB48;

LAB49:    memset(t16, 0, 8);
    t29 = (t37 + 4);
    t6 = *((unsigned int *)t29);
    t7 = (~(t6));
    t8 = *((unsigned int *)t37);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t29) != 0)
        goto LAB53;

LAB54:    t36 = (t16 + 4);
    t15 = *((unsigned int *)t16);
    t17 = *((unsigned int *)t36);
    t18 = (t15 || t17);
    if (t18 > 0)
        goto LAB55;

LAB56:    t19 = *((unsigned int *)t16);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t36) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t16) > 0)
        goto LAB61;

LAB62:    memcpy(t13, t45, 8);

LAB63:    t51 = (t0 + 1928);
    xsi_vlogvar_assign_value(t51, t13, 0, 0, 8);

LAB27:
LAB20:    goto LAB12;

LAB16:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(305, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 1928);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 8);
    goto LAB20;

LAB23:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(308, ng0);
    t35 = (t0 + 2088);
    t36 = (t35 + 56U);
    t39 = *((char **)t36);
    t40 = ((char*)((ng1)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB29;

LAB28:    t43 = (t40 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t39) > *((unsigned int *)t40))
        goto LAB30;

LAB31:    memset(t38, 0, 8);
    t45 = (t41 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t45) != 0)
        goto LAB35;

LAB36:    t52 = (t38 + 4);
    t53 = *((unsigned int *)t38);
    t54 = *((unsigned int *)t52);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB37;

LAB38:    t61 = *((unsigned int *)t38);
    t62 = (~(t61));
    t63 = *((unsigned int *)t52);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t52) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t38) > 0)
        goto LAB43;

LAB44:    memcpy(t37, t65, 8);

LAB45:    t66 = (t0 + 1928);
    xsi_vlogvar_assign_value(t66, t37, 0, 0, 8);
    goto LAB27;

LAB29:    t44 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t41) = 1;
    goto LAB31;

LAB33:    *((unsigned int *)t38) = 1;
    goto LAB36;

LAB35:    t51 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB36;

LAB37:    t56 = (t0 + 2088);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng2)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_minus(t60, 32, t58, 32, t59, 32);
    goto LAB38;

LAB39:    t65 = ((char*)((ng1)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t37, 32, t60, 32, t65, 32);
    goto LAB45;

LAB43:    memcpy(t37, t60, 8);
    goto LAB45;

LAB47:    t14 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t37) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t16) = 1;
    goto LAB54;

LAB53:    t35 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB54;

LAB55:    t39 = (t0 + 2088);
    t40 = (t39 + 56U);
    t42 = *((char **)t40);
    t43 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t42, 32, t43, 32);
    t44 = ((char*)((ng5)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_multiply(t41, 32, t38, 32, t44, 32);
    goto LAB56;

LAB57:    t45 = ((char*)((ng1)));
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t13, 32, t41, 32, t45, 32);
    goto LAB63;

LAB61:    memcpy(t13, t41, 8);
    goto LAB63;

}


extern void work_m_00663164001697157208_3229836915_init()
{
	static char *pe[] = {(void *)Always_293_0};
	xsi_register_didat("work_m_00663164001697157208_3229836915", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_00663164001697157208_3229836915.didat");
	xsi_register_executes(pe);
}
