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
static const char *ng0 = "/home/luorix/Desktop/DLD2/Digital-Logic-Design-F2023/parking_lot_top.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
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



static void Always_48_0(char *t0)
{
    char t4[8];
    char t14[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
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
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3800);
    *((int *)t2) = 1;
    t3 = (t0 + 3512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 65535U);
    memset(t24, 0, 8);
    t25 = (t4 + 4);
    t26 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB9;

LAB6:    if (t36 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t24) = 1;

LAB9:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB17;

LAB14:    if (t36 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t24) = 1;

LAB17:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB25;

LAB22:    if (t36 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t24) = 1;

LAB25:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB33;

LAB30:    if (t36 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t24) = 1;

LAB33:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB41;

LAB38:    if (t36 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t24) = 1;

LAB41:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB49;

LAB46:    if (t36 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t24) = 1;

LAB49:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB57;

LAB54:    if (t36 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t24) = 1;

LAB57:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB65;

LAB62:    if (t36 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t24) = 1;

LAB65:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1848U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB73;

LAB70:    if (t36 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t24) = 1;

LAB73:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 1848U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB81;

LAB78:    if (t36 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t24) = 1;

LAB81:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB89;

LAB86:    if (t36 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t24) = 1;

LAB89:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB97;

LAB94:    if (t36 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t24) = 1;

LAB97:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB105;

LAB102:    if (t36 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t24) = 1;

LAB105:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    memset(t24, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t14);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t17);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB113;

LAB110:    if (t36 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t24) = 1;

LAB113:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(105, ng0);

LAB118:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB116:
LAB108:
LAB100:
LAB92:
LAB84:
LAB76:
LAB68:
LAB60:
LAB52:
LAB44:
LAB36:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB8:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t46 = ((char*)((ng1)));
    t47 = (t0 + 2568);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 4);
    goto LAB12;

LAB16:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(53, ng0);

LAB21:    xsi_set_current_line(54, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB20;

LAB24:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(57, ng0);

LAB29:    xsi_set_current_line(58, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB28;

LAB32:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(61, ng0);

LAB37:    xsi_set_current_line(62, ng0);
    t39 = ((char*)((ng4)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB36;

LAB40:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(65, ng0);

LAB45:    xsi_set_current_line(66, ng0);
    t39 = ((char*)((ng5)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB44;

LAB48:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(69, ng0);

LAB53:    xsi_set_current_line(70, ng0);
    t39 = ((char*)((ng6)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB52;

LAB56:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(73, ng0);

LAB61:    xsi_set_current_line(74, ng0);
    t39 = ((char*)((ng7)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB60;

LAB64:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(77, ng0);

LAB69:    xsi_set_current_line(78, ng0);
    t39 = ((char*)((ng8)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB68;

LAB72:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(81, ng0);

LAB77:    xsi_set_current_line(82, ng0);
    t39 = ((char*)((ng9)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB76;

LAB80:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(85, ng0);

LAB85:    xsi_set_current_line(86, ng0);
    t39 = ((char*)((ng10)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB84;

LAB88:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(89, ng0);

LAB93:    xsi_set_current_line(90, ng0);
    t39 = ((char*)((ng11)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB92;

LAB96:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(93, ng0);

LAB101:    xsi_set_current_line(94, ng0);
    t39 = ((char*)((ng12)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB100;

LAB104:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(97, ng0);

LAB109:    xsi_set_current_line(98, ng0);
    t39 = ((char*)((ng13)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB108;

LAB112:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(101, ng0);

LAB117:    xsi_set_current_line(102, ng0);
    t39 = ((char*)((ng14)));
    t40 = (t0 + 2568);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    goto LAB116;

}


extern void work_m_03267735639596482609_3540894680_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_03267735639596482609_3540894680", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_03267735639596482609_3540894680.didat");
	xsi_register_executes(pe);
}
