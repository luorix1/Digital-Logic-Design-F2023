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
static const char *ng0 = "/home/luorix/Desktop/Digital-Logic-Design-F2023-jjoon0-patch-2/parking_lot_top.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {13U, 0U};
static unsigned int ng12[] = {12U, 0U};
static unsigned int ng13[] = {15U, 0U};
static unsigned int ng14[] = {14U, 0U};
static unsigned int ng15[] = {0U, 0U};



static void Always_15_0(char *t0)
{
    char t11[8];
    char t21[8];
    char t31[8];
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
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;

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

LAB7:    xsi_set_current_line(73, ng0);

LAB122:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(17, ng0);
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 65535U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 65535U);
    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 65535U);
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 65535U);
    memset(t31, 0, 8);
    t32 = (t11 + 4);
    t33 = (t21 + 4);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t21);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB13;

LAB10:    if (t43 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t31) = 1;

LAB13:    t47 = (t31 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t31);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(21, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1368U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB21;

LAB18:    if (t38 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t31) = 1;

LAB21:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(25, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1528U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB29;

LAB26:    if (t38 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t31) = 1;

LAB29:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(29, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1528U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB37;

LAB34:    if (t38 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t31) = 1;

LAB37:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(33, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1688U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB45;

LAB42:    if (t38 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t31) = 1;

LAB45:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(37, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1688U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB53;

LAB50:    if (t38 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t31) = 1;

LAB53:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(41, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB61;

LAB58:    if (t38 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t31) = 1;

LAB61:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(45, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 1848U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB69;

LAB66:    if (t38 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t31) = 1;

LAB69:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(49, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 2008U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB77;

LAB74:    if (t38 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t31) = 1;

LAB77:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(53, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 2008U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB85;

LAB82:    if (t38 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t31) = 1;

LAB85:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(57, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 2168U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB93;

LAB90:    if (t38 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t31) = 1;

LAB93:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(61, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 2168U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB101;

LAB98:    if (t38 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t31) = 1;

LAB101:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(65, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 2328U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB109;

LAB106:    if (t38 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t31) = 1;

LAB109:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(69, ng0);
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
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = (t0 + 2328U);
    t12 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t13 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 16);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 16);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t20 & 65535U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 65535U);
    memset(t31, 0, 8);
    t14 = (t11 + 4);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t22);
    t34 = (t29 ^ t30);
    t35 = (t28 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t22);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB117;

LAB114:    if (t38 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t31) = 1;

LAB117:    t24 = (t31 + 4);
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t31);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
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

LAB12:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(17, ng0);

LAB17:    xsi_set_current_line(18, ng0);
    t53 = ((char*)((ng1)));
    t54 = (t0 + 2728);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 4);
    goto LAB16;

LAB20:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(21, ng0);

LAB25:    xsi_set_current_line(22, ng0);
    t32 = ((char*)((ng2)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB24;

LAB28:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(25, ng0);

LAB33:    xsi_set_current_line(26, ng0);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB32;

LAB36:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(29, ng0);

LAB41:    xsi_set_current_line(30, ng0);
    t32 = ((char*)((ng4)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB40;

LAB44:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(33, ng0);

LAB49:    xsi_set_current_line(34, ng0);
    t32 = ((char*)((ng5)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB48;

LAB52:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(37, ng0);

LAB57:    xsi_set_current_line(38, ng0);
    t32 = ((char*)((ng6)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB56;

LAB60:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(41, ng0);

LAB65:    xsi_set_current_line(42, ng0);
    t32 = ((char*)((ng7)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB64;

LAB68:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(45, ng0);

LAB73:    xsi_set_current_line(46, ng0);
    t32 = ((char*)((ng8)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB72;

LAB76:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(49, ng0);

LAB81:    xsi_set_current_line(50, ng0);
    t32 = ((char*)((ng9)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB80;

LAB84:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(53, ng0);

LAB89:    xsi_set_current_line(54, ng0);
    t32 = ((char*)((ng10)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB88;

LAB92:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(57, ng0);

LAB97:    xsi_set_current_line(58, ng0);
    t32 = ((char*)((ng11)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB96;

LAB100:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(61, ng0);

LAB105:    xsi_set_current_line(62, ng0);
    t32 = ((char*)((ng12)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB104;

LAB108:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(65, ng0);

LAB113:    xsi_set_current_line(66, ng0);
    t32 = ((char*)((ng13)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB112;

LAB116:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(69, ng0);

LAB121:    xsi_set_current_line(70, ng0);
    t32 = ((char*)((ng14)));
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB120;

}


extern void work_m_04650478959988445363_3540894680_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_04650478959988445363_3540894680", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_04650478959988445363_3540894680.didat");
	xsi_register_executes(pe);
}
