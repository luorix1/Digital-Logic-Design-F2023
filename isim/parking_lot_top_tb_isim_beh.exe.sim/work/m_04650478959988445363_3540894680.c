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
static const char *ng0 = "/home/luorix/Downloads/Digital-Logic-Design-F2023-1218_w-leakage/parking_lot_top.v";
static const char *ng1 = "HERE";
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {0U, 0U};



static void Always_15_0(char *t0)
{
    char t11[8];
    char t13[8];
    char t22[8];
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
    unsigned int t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(75, ng0);

LAB122:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(17, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1368U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB13;

LAB10:    if (t34 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t22) = 1;

LAB13:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1368U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB21;

LAB18:    if (t34 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t22) = 1;

LAB21:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1528U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB29;

LAB26:    if (t34 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t22) = 1;

LAB29:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1528U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB37;

LAB34:    if (t34 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t22) = 1;

LAB37:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1688U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB45;

LAB42:    if (t34 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t22) = 1;

LAB45:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1688U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB53;

LAB50:    if (t34 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t22) = 1;

LAB53:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1848U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB61;

LAB58:    if (t34 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t22) = 1;

LAB61:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 1848U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB69;

LAB66:    if (t34 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t22) = 1;

LAB69:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 2008U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB77;

LAB74:    if (t34 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t22) = 1;

LAB77:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 2008U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB85;

LAB82:    if (t34 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t22) = 1;

LAB85:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 2168U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB93;

LAB90:    if (t34 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t22) = 1;

LAB93:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 2168U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB101;

LAB98:    if (t34 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t22) = 1;

LAB101:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 2328U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB109;

LAB106:    if (t34 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t22) = 1;

LAB109:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = (t0 + 2328U);
    t14 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 16);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 65535U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 65535U);
    memset(t22, 0, 8);
    t23 = (t11 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t13);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB117;

LAB114:    if (t34 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t22) = 1;

LAB117:    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB118;

LAB119:
LAB120:
LAB112:
LAB104:
LAB96:
LAB88:
LAB80:
LAB72:
LAB64:
LAB56:
LAB48:
LAB40:
LAB32:
LAB24:
LAB16:    goto LAB8;

LAB12:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(18, ng0);

LAB17:    xsi_set_current_line(19, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB16;

LAB20:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(23, ng0);

LAB25:    xsi_set_current_line(24, ng0);
    t44 = ((char*)((ng3)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB24;

LAB28:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(27, ng0);

LAB33:    xsi_set_current_line(28, ng0);
    t44 = ((char*)((ng4)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB32;

LAB36:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(31, ng0);

LAB41:    xsi_set_current_line(32, ng0);
    t44 = ((char*)((ng5)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB40;

LAB44:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(35, ng0);

LAB49:    xsi_set_current_line(36, ng0);
    t44 = ((char*)((ng6)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB48;

LAB52:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(39, ng0);

LAB57:    xsi_set_current_line(40, ng0);
    t44 = ((char*)((ng7)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB56;

LAB60:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(43, ng0);

LAB65:    xsi_set_current_line(44, ng0);
    t44 = ((char*)((ng8)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB64;

LAB68:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(47, ng0);

LAB73:    xsi_set_current_line(48, ng0);
    t44 = ((char*)((ng9)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB72;

LAB76:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(51, ng0);

LAB81:    xsi_set_current_line(52, ng0);
    t44 = ((char*)((ng10)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB80;

LAB84:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(55, ng0);

LAB89:    xsi_set_current_line(56, ng0);
    t44 = ((char*)((ng11)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB88;

LAB92:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(59, ng0);

LAB97:    xsi_set_current_line(60, ng0);
    t44 = ((char*)((ng12)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB96;

LAB100:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(63, ng0);

LAB105:    xsi_set_current_line(64, ng0);
    t44 = ((char*)((ng13)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB104;

LAB108:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(67, ng0);

LAB113:    xsi_set_current_line(68, ng0);
    t44 = ((char*)((ng14)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB112;

LAB116:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(71, ng0);

LAB121:    xsi_set_current_line(72, ng0);
    t44 = ((char*)((ng15)));
    t45 = (t0 + 2728);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 4);
    goto LAB120;

}


extern void work_m_04650478959988445363_3540894680_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_04650478959988445363_3540894680", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_04650478959988445363_3540894680.didat");
	xsi_register_executes(pe);
}
