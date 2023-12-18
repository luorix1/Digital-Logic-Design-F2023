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
static const char *ng1 = "Elevator module state transition %d -> %d";
static const char *ng2 = "Elevator module same state %d -> %d";
static int ng3[] = {0, 0};
static const char *ng4 = "from STATE_RESET : todo_in is %d";
static const char *ng5 = "in STATE_CAR_IN";
static const char *ng6 = "target_floor = %d";
static const char *ng7 = "current_floor = %d";
static const char *ng8 = "moving = %d%d%d%d";
static const char *ng9 = "in plate_type change";
static const char *ng10 = "in boarding car";
static const char *ng11 = "todo_license_plate first digit : %d";
static int ng12[] = {15, 0};
static int ng13[] = {12, 0};
static int ng14[] = {11, 0};
static int ng15[] = {8, 0};
static int ng16[] = {7, 0};
static int ng17[] = {4, 0};
static int ng18[] = {3, 0};
static const char *ng19 = "moving first digit : %d";
static int ng20[] = {1, 0};
static unsigned int ng21[] = {1U, 0U};
static int ng22[] = {31, 0};
static int ng23[] = {16, 0};
static unsigned int ng24[] = {2U, 0U};
static const char *ng25 = "2nd floor car in checkpoint #1";
static const char *ng26 = "2nd floor car in checkpoint #2";
static const char *ng27 = "parked_2[15:0] = %d, moving[15:0] = %d";
static unsigned int ng28[] = {3U, 0U};
static unsigned int ng29[] = {4U, 0U};
static unsigned int ng30[] = {5U, 0U};
static unsigned int ng31[] = {6U, 0U};
static unsigned int ng32[] = {7U, 0U};
static const char *ng33 = "todo_leak_move: %b";
static const char *ng34 = "park_change = %d, new_car = %d, moving = %d";
static const char *ng35 = "in STATE_CAR_OUT";
static const char *ng36 = "remove car at this stage!";
static const char *ng37 = "in STATE_NO_ORDER";
static const char *ng38 = "ERROR: Must not reach this case!";
static const char *ng39 = "in default state";



static void Cont_572_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(572, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7976);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_576_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(576, ng0);
    t2 = (t0 + 7992);
    *((int *)t2) = 1;
    t3 = (t0 + 7440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(576, ng0);

LAB5:    xsi_set_current_line(577, ng0);
    t4 = (t0 + 5928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB9:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(578, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t0, (char)118, t4, 3, (char)118, t7, 3);

LAB12:    xsi_set_current_line(580, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(587, ng0);

LAB17:    xsi_set_current_line(588, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(589, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB15:    goto LAB2;

LAB7:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB8:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(577, ng0);
    t32 = (t0 + 5928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 6088);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t0, (char)118, t34, 3, (char)118, t37, 3);
    goto LAB12;

LAB13:    xsi_set_current_line(580, ng0);

LAB16:    xsi_set_current_line(581, ng0);
    t4 = (t0 + 5288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(582, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB15;

}

static void Always_594_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t27[8];
    char t28[8];
    char t69[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
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
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    char *t70;
    char *t71;
    int t72;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;

LAB0:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(594, ng0);
    t2 = (t0 + 8008);
    *((int *)t2) = 1;
    t3 = (t0 + 7688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(594, ng0);

LAB5:    xsi_set_current_line(595, ng0);
    t4 = (t0 + 5928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 5288);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = xsi_vlog_unsigned_case_compare(t6, 3, t9, 3);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t10 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 3);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 5608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = xsi_vlog_unsigned_case_compare(t6, 3, t5, 3);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 5768);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t10 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(908, ng0);

LAB765:    xsi_set_current_line(909, ng0);
    xsi_vlogfile_write(1, 0, 0, ng39, 1, t0);
    xsi_set_current_line(910, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 4808);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);
    xsi_set_current_line(911, ng0);
    t2 = (t0 + 5288);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6088);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(598, ng0);

LAB18:    xsi_set_current_line(599, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    xsi_set_current_line(601, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(602, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(603, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t3);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t2) != 0)
        goto LAB21;

LAB22:    t5 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB23;

LAB24:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t5) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t14) > 0)
        goto LAB29;

LAB30:    memcpy(t13, t27, 8);

LAB31:    t49 = (t0 + 6088);
    xsi_vlogvar_assign_value(t49, t13, 0, 0, 3);
    xsi_set_current_line(604, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(605, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB17;

LAB9:    xsi_set_current_line(609, ng0);

LAB45:    xsi_set_current_line(610, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(611, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 3);
    xsi_set_current_line(612, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 3);
    xsi_set_current_line(613, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t7 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 12);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 12);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 15U);
    t8 = (t0 + 4328);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t34 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (t21 >> 8);
    *((unsigned int *)t14) = t22;
    t23 = *((unsigned int *)t34);
    t24 = (t23 >> 8);
    *((unsigned int *)t12) = t24;
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 15U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 15U);
    t35 = (t0 + 4328);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t27, 0, 8);
    t41 = (t27 + 4);
    t46 = (t40 + 4);
    t29 = *((unsigned int *)t40);
    t30 = (t29 >> 4);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t46);
    t32 = (t31 >> 4);
    *((unsigned int *)t41) = t32;
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t33 & 15U);
    t36 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t36 & 15U);
    t47 = (t0 + 4328);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t28, 0, 8);
    t50 = (t28 + 4);
    t51 = (t49 + 4);
    t37 = *((unsigned int *)t49);
    t38 = (t37 >> 0);
    *((unsigned int *)t28) = t38;
    t42 = *((unsigned int *)t51);
    t43 = (t42 >> 0);
    *((unsigned int *)t50) = t43;
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 15U);
    t45 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t45 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng8, 5, t0, (char)118, t13, 4, (char)118, t14, 4, (char)118, t27, 4, (char)118, t28, 4);
    xsi_set_current_line(614, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t3 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB49;

LAB46:    if (t24 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t13) = 1;

LAB49:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(695, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB239;

LAB238:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB239;

LAB242:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB240;

LAB241:    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB243;

LAB244:    xsi_set_current_line(701, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB287;

LAB286:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB287;

LAB290:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB288;

LAB289:    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB291;

LAB292:
LAB293:
LAB245:
LAB52:    goto LAB17;

LAB11:    xsi_set_current_line(710, ng0);

LAB334:    xsi_set_current_line(711, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    xsi_set_current_line(712, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB338;

LAB335:    if (t24 != 0)
        goto LAB337;

LAB336:    *((unsigned int *)t13) = 1;

LAB338:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB339;

LAB340:    xsi_set_current_line(794, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    t2 = (t0 + 4168);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB530;

LAB529:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB530;

LAB533:    if (*((unsigned int *)t5) > *((unsigned int *)t8))
        goto LAB531;

LAB532:    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB534;

LAB535:    xsi_set_current_line(799, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    t2 = (t0 + 4168);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB539;

LAB538:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB539;

LAB542:    if (*((unsigned int *)t5) < *((unsigned int *)t8))
        goto LAB540;

LAB541:    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB543;

LAB544:
LAB545:
LAB536:
LAB341:    goto LAB17;

LAB13:    xsi_set_current_line(810, ng0);

LAB555:    xsi_set_current_line(811, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t0 + 4808);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(812, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(813, ng0);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2328U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB559;

LAB556:    if (t24 != 0)
        goto LAB558;

LAB557:    *((unsigned int *)t13) = 1;

LAB559:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB560;

LAB561:    xsi_set_current_line(897, ng0);
    t2 = (t0 + 2328U);
    t7 = *((char **)t2);
    t2 = (t0 + 4168);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    t11 = (t7 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB748;

LAB747:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB748;

LAB751:    if (*((unsigned int *)t7) > *((unsigned int *)t9))
        goto LAB749;

LAB750:    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB752;

LAB753:    xsi_set_current_line(901, ng0);
    t2 = (t0 + 2328U);
    t7 = *((char **)t2);
    t2 = (t0 + 4168);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    t11 = (t7 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB757;

LAB756:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB757;

LAB760:    if (*((unsigned int *)t7) < *((unsigned int *)t9))
        goto LAB758;

LAB759:    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB761;

LAB762:
LAB763:
LAB754:
LAB562:    goto LAB17;

LAB19:    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB21:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB23:    t7 = (t0 + 5448);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    goto LAB24;

LAB25:    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t28, 0, 8);
    t11 = (t12 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t11) != 0)
        goto LAB34;

LAB35:    t35 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB36;

LAB37:    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t35);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t35) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t28) > 0)
        goto LAB42;

LAB43:    memcpy(t27, t48, 8);

LAB44:    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t13, 3, t9, 3, t27, 3);
    goto LAB31;

LAB29:    memcpy(t13, t9, 8);
    goto LAB31;

LAB32:    *((unsigned int *)t28) = 1;
    goto LAB35;

LAB34:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB35;

LAB36:    t39 = (t0 + 5608);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    goto LAB37;

LAB38:    t46 = (t0 + 5288);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t27, 3, t41, 3, t48, 3);
    goto LAB44;

LAB42:    memcpy(t27, t41, 8);
    goto LAB44;

LAB48:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(614, ng0);

LAB53:    xsi_set_current_line(615, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    t39 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t40 = (t35 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t35);
    t37 = *((unsigned int *)t39);
    t38 = (t36 ^ t37);
    t42 = *((unsigned int *)t40);
    t43 = *((unsigned int *)t41);
    t44 = (t42 ^ t43);
    t45 = (t38 | t44);
    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t41);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t45 & t55);
    if (t56 != 0)
        goto LAB57;

LAB54:    if (t54 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t14) = 1;

LAB57:    t47 = (t14 + 4);
    t57 = *((unsigned int *)t47);
    t58 = (~(t57));
    t59 = *((unsigned int *)t14);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(635, ng0);

LAB83:    xsi_set_current_line(636, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);

LAB84:    t2 = ((char*)((ng21)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng24)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng31)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t10 == 1)
        goto LAB97;

LAB98:
LAB100:
LAB99:    xsi_set_current_line(682, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3048);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB193;

LAB194:
LAB101:    xsi_set_current_line(684, ng0);
    t2 = ((char*)((ng20)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(685, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 4968);
    xsi_vlogvar_assign_value(t9, t13, 0, 0, 16);
    xsi_set_current_line(686, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 5128);
    t5 = (t0 + 5128);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng18)));
    t11 = ((char*)((ng20)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t8)), 2, t9, 32, 1, t11, 32, 1);
    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t10 = (!(t15));
    t34 = (t14 + 4);
    t16 = *((unsigned int *)t34);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t35 = (t27 + 4);
    t17 = *((unsigned int *)t35);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB195;

LAB196:    xsi_set_current_line(687, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 5128);
    t5 = (t0 + 5128);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t8, 2, t9, 32, 1);
    t11 = (t13 + 4);
    t15 = *((unsigned int *)t11);
    t10 = (!(t15));
    if (t10 == 1)
        goto LAB197;

LAB198:    xsi_set_current_line(688, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4328);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(689, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6248);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    xsi_set_current_line(690, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng33, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(691, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB199;

LAB200:    if (*((unsigned int *)t2) != 0)
        goto LAB201;

LAB202:    t7 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB203;

LAB204:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB205;

LAB206:    if (*((unsigned int *)t7) > 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t14) > 0)
        goto LAB209;

LAB210:    memcpy(t13, t27, 8);

LAB211:    t79 = (t0 + 6088);
    xsi_vlogvar_assign_value(t79, t13, 0, 0, 3);
    xsi_set_current_line(692, ng0);
    t2 = (t0 + 4808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4968);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t0 + 4328);
    t12 = (t11 + 56U);
    t34 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng34, 4, t0, (char)118, t5, 1, (char)118, t9, 16, (char)118, t34, 16);

LAB60:    goto LAB52;

LAB56:    t46 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(615, ng0);

LAB61:    xsi_set_current_line(616, ng0);
    t48 = ((char*)((ng3)));
    t49 = (t0 + 4808);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 1);
    xsi_set_current_line(617, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t5) = t20;
    memset(t14, 0, 8);
    t9 = (t4 + 4);
    t11 = (t13 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t13);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t11);
    t26 = (t24 ^ t25);
    t29 = (t23 | t26);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t11);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t36 = (t29 & t33);
    if (t36 != 0)
        goto LAB63;

LAB62:    if (t32 != 0)
        goto LAB64;

LAB65:    t34 = (t14 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t42 = *((unsigned int *)t14);
    t43 = (t42 & t38);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(623, ng0);

LAB74:    xsi_set_current_line(624, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(625, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 12);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 12);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t13, 4);
    xsi_set_current_line(626, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 12);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 12);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 15U);
    t5 = (t0 + 4328);
    t7 = (t0 + 4328);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t14 + 4);
    t21 = *((unsigned int *)t34);
    t10 = (!(t21));
    t35 = (t27 + 4);
    t22 = *((unsigned int *)t35);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(627, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 8);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 8);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 15U);
    t5 = (t0 + 4328);
    t7 = (t0 + 4328);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng14)));
    t12 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t14 + 4);
    t21 = *((unsigned int *)t34);
    t10 = (!(t21));
    t35 = (t27 + 4);
    t22 = *((unsigned int *)t35);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(628, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 4);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 4);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 15U);
    t5 = (t0 + 4328);
    t7 = (t0 + 4328);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng16)));
    t12 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t14 + 4);
    t21 = *((unsigned int *)t34);
    t10 = (!(t21));
    t35 = (t27 + 4);
    t22 = *((unsigned int *)t35);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB79;

LAB80:    xsi_set_current_line(629, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 15U);
    t5 = (t0 + 4328);
    t7 = (t0 + 4328);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng18)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t14 + 4);
    t21 = *((unsigned int *)t34);
    t10 = (!(t21));
    t35 = (t27 + 4);
    t22 = *((unsigned int *)t35);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(630, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t7 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 12);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 12);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 15U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)118, t13, 4);
    xsi_set_current_line(631, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t7 = (t0 + 6248);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 3);
    xsi_set_current_line(632, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB68:    goto LAB60;

LAB63:    *((unsigned int *)t14) = 1;
    goto LAB65;

LAB64:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(617, ng0);

LAB69:    xsi_set_current_line(618, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(619, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t5) == 0)
        goto LAB70;

LAB72:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;

LAB73:    t8 = (t0 + 4488);
    xsi_vlogvar_assign_value(t8, t13, 0, 0, 1);
    xsi_set_current_line(620, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(621, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB68;

LAB70:    *((unsigned int *)t13) = 1;
    goto LAB73;

LAB75:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t13, t66, *((unsigned int *)t27), t68);
    goto LAB76;

LAB77:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t13, t66, *((unsigned int *)t27), t68);
    goto LAB78;

LAB79:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t13, t66, *((unsigned int *)t27), t68);
    goto LAB80;

LAB81:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t13, t66, *((unsigned int *)t27), t68);
    goto LAB82;

LAB85:    xsi_set_current_line(637, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB105;

LAB102:    if (t24 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t13) = 1;

LAB105:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(640, ng0);

LAB112:    xsi_set_current_line(641, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3048);
    t11 = (t0 + 3048);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB113;

LAB114:
LAB108:    goto LAB101;

LAB87:    xsi_set_current_line(643, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB118;

LAB115:    if (t24 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t13) = 1;

LAB118:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(647, ng0);

LAB125:    xsi_set_current_line(648, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(649, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3208);
    t11 = (t0 + 3208);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB126;

LAB127:    xsi_set_current_line(650, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 4328);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t34 = (t14 + 4);
    t35 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t14) = t22;
    t23 = *((unsigned int *)t35);
    t24 = (t23 >> 0);
    *((unsigned int *)t34) = t24;
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 65535U);
    t26 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t26 & 65535U);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t0, (char)118, t13, 16, (char)118, t14, 16);

LAB121:    goto LAB101;

LAB89:    xsi_set_current_line(652, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB131;

LAB128:    if (t24 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t13) = 1;

LAB131:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(655, ng0);

LAB138:    xsi_set_current_line(656, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3368);
    t11 = (t0 + 3368);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB139;

LAB140:
LAB134:    goto LAB101;

LAB91:    xsi_set_current_line(658, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB144;

LAB141:    if (t24 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t13) = 1;

LAB144:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(661, ng0);

LAB151:    xsi_set_current_line(662, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3528);
    t11 = (t0 + 3528);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB152;

LAB153:
LAB147:    goto LAB101;

LAB93:    xsi_set_current_line(664, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB157;

LAB154:    if (t24 != 0)
        goto LAB156;

LAB155:    *((unsigned int *)t13) = 1;

LAB157:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(667, ng0);

LAB164:    xsi_set_current_line(668, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB165;

LAB166:
LAB160:    goto LAB101;

LAB95:    xsi_set_current_line(670, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB170;

LAB167:    if (t24 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t13) = 1;

LAB170:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB171;

LAB172:    xsi_set_current_line(673, ng0);

LAB177:    xsi_set_current_line(674, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3848);
    t11 = (t0 + 3848);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB178;

LAB179:
LAB173:    goto LAB101;

LAB97:    xsi_set_current_line(676, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB183;

LAB180:    if (t24 != 0)
        goto LAB182;

LAB181:    *((unsigned int *)t13) = 1;

LAB183:    t11 = (t13 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB184;

LAB185:    xsi_set_current_line(679, ng0);

LAB190:    xsi_set_current_line(680, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 4008);
    t11 = (t0 + 4008);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng12)));
    t39 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB191;

LAB192:
LAB186:    goto LAB101;

LAB104:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(637, ng0);

LAB109:    xsi_set_current_line(638, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t40);
    t42 = (t38 >> 0);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 65535U);
    t41 = (t0 + 3048);
    t46 = (t0 + 3048);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng22)));
    t50 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t27, t28, t69, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t45 = *((unsigned int *)t51);
    t62 = (!(t45));
    t70 = (t28 + 4);
    t52 = *((unsigned int *)t70);
    t63 = (!(t52));
    t64 = (t62 && t63);
    t71 = (t69 + 4);
    t53 = *((unsigned int *)t71);
    t65 = (!(t53));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB110;

LAB111:    goto LAB108;

LAB110:    t54 = *((unsigned int *)t69);
    t67 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t28);
    t68 = (t55 - t56);
    t72 = (t68 + 1);
    xsi_vlogvar_assign_value(t41, t14, t67, *((unsigned int *)t28), t72);
    goto LAB111;

LAB113:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB114;

LAB117:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(643, ng0);

LAB122:    xsi_set_current_line(644, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    xsi_set_current_line(645, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 65535U);
    t9 = (t0 + 3208);
    t11 = (t0 + 3208);
    t12 = (t11 + 72U);
    t34 = *((char **)t12);
    t35 = ((char*)((ng22)));
    t39 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t14, t27, t28, ((int*)(t34)), 2, t35, 32, 1, t39, 32, 1);
    t40 = (t14 + 4);
    t21 = *((unsigned int *)t40);
    t10 = (!(t21));
    t41 = (t27 + 4);
    t22 = *((unsigned int *)t41);
    t62 = (!(t22));
    t63 = (t10 && t62);
    t46 = (t28 + 4);
    t23 = *((unsigned int *)t46);
    t64 = (!(t23));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB123;

LAB124:    goto LAB121;

LAB123:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB124;

LAB126:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB127;

LAB130:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(652, ng0);

LAB135:    xsi_set_current_line(653, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t40);
    t42 = (t38 >> 0);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 65535U);
    t41 = (t0 + 3368);
    t46 = (t0 + 3368);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng22)));
    t50 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t27, t28, t69, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t45 = *((unsigned int *)t51);
    t62 = (!(t45));
    t70 = (t28 + 4);
    t52 = *((unsigned int *)t70);
    t63 = (!(t52));
    t64 = (t62 && t63);
    t71 = (t69 + 4);
    t53 = *((unsigned int *)t71);
    t65 = (!(t53));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB136;

LAB137:    goto LAB134;

LAB136:    t54 = *((unsigned int *)t69);
    t67 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t28);
    t68 = (t55 - t56);
    t72 = (t68 + 1);
    xsi_vlogvar_assign_value(t41, t14, t67, *((unsigned int *)t28), t72);
    goto LAB137;

LAB139:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB140;

LAB143:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(658, ng0);

LAB148:    xsi_set_current_line(659, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t40);
    t42 = (t38 >> 0);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 65535U);
    t41 = (t0 + 3528);
    t46 = (t0 + 3528);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng22)));
    t50 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t27, t28, t69, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t45 = *((unsigned int *)t51);
    t62 = (!(t45));
    t70 = (t28 + 4);
    t52 = *((unsigned int *)t70);
    t63 = (!(t52));
    t64 = (t62 && t63);
    t71 = (t69 + 4);
    t53 = *((unsigned int *)t71);
    t65 = (!(t53));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB149;

LAB150:    goto LAB147;

LAB149:    t54 = *((unsigned int *)t69);
    t67 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t28);
    t68 = (t55 - t56);
    t72 = (t68 + 1);
    xsi_vlogvar_assign_value(t41, t14, t67, *((unsigned int *)t28), t72);
    goto LAB150;

LAB152:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB153;

LAB156:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB157;

LAB158:    xsi_set_current_line(664, ng0);

LAB161:    xsi_set_current_line(665, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t40);
    t42 = (t38 >> 0);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 65535U);
    t41 = (t0 + 3688);
    t46 = (t0 + 3688);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng22)));
    t50 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t27, t28, t69, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t45 = *((unsigned int *)t51);
    t62 = (!(t45));
    t70 = (t28 + 4);
    t52 = *((unsigned int *)t70);
    t63 = (!(t52));
    t64 = (t62 && t63);
    t71 = (t69 + 4);
    t53 = *((unsigned int *)t71);
    t65 = (!(t53));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB162;

LAB163:    goto LAB160;

LAB162:    t54 = *((unsigned int *)t69);
    t67 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t28);
    t68 = (t55 - t56);
    t72 = (t68 + 1);
    xsi_vlogvar_assign_value(t41, t14, t67, *((unsigned int *)t28), t72);
    goto LAB163;

LAB165:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB166;

LAB169:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB170;

LAB171:    xsi_set_current_line(670, ng0);

LAB174:    xsi_set_current_line(671, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t40);
    t42 = (t38 >> 0);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 65535U);
    t41 = (t0 + 3848);
    t46 = (t0 + 3848);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng22)));
    t50 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t27, t28, t69, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t45 = *((unsigned int *)t51);
    t62 = (!(t45));
    t70 = (t28 + 4);
    t52 = *((unsigned int *)t70);
    t63 = (!(t52));
    t64 = (t62 && t63);
    t71 = (t69 + 4);
    t53 = *((unsigned int *)t71);
    t65 = (!(t53));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB175;

LAB176:    goto LAB173;

LAB175:    t54 = *((unsigned int *)t69);
    t67 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t28);
    t68 = (t55 - t56);
    t72 = (t68 + 1);
    xsi_vlogvar_assign_value(t41, t14, t67, *((unsigned int *)t28), t72);
    goto LAB176;

LAB178:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB179;

LAB182:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB183;

LAB184:    xsi_set_current_line(676, ng0);

LAB187:    xsi_set_current_line(677, ng0);
    t12 = (t0 + 4328);
    t34 = (t12 + 56U);
    t35 = *((char **)t34);
    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t40);
    t42 = (t38 >> 0);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 65535U);
    t41 = (t0 + 4008);
    t46 = (t0 + 4008);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng22)));
    t50 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t27, t28, t69, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t27 + 4);
    t45 = *((unsigned int *)t51);
    t62 = (!(t45));
    t70 = (t28 + 4);
    t52 = *((unsigned int *)t70);
    t63 = (!(t52));
    t64 = (t62 && t63);
    t71 = (t69 + 4);
    t53 = *((unsigned int *)t71);
    t65 = (!(t53));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB188;

LAB189:    goto LAB186;

LAB188:    t54 = *((unsigned int *)t69);
    t67 = (t54 + 0);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t28);
    t68 = (t55 - t56);
    t72 = (t68 + 1);
    xsi_vlogvar_assign_value(t41, t14, t67, *((unsigned int *)t28), t72);
    goto LAB189;

LAB191:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB192;

LAB193:    t24 = *((unsigned int *)t28);
    t66 = (t24 + 0);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t27);
    t67 = (t25 - t26);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t9, t13, t66, *((unsigned int *)t27), t68);
    goto LAB194;

LAB195:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t2, t4, t66, *((unsigned int *)t14), t68);
    goto LAB196;

LAB197:    xsi_vlogvar_assign_value(t2, t4, 0, *((unsigned int *)t13), 1);
    goto LAB198;

LAB199:    *((unsigned int *)t14) = 1;
    goto LAB202;

LAB201:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB202;

LAB203:    t8 = (t0 + 5448);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    goto LAB204;

LAB205:    t12 = (t0 + 1528U);
    t34 = *((char **)t12);
    memset(t28, 0, 8);
    t12 = (t34 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t12) != 0)
        goto LAB214;

LAB215:    t39 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB216;

LAB217:    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t39);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t39) > 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t28) > 0)
        goto LAB222;

LAB223:    memcpy(t27, t69, 8);

LAB224:    goto LAB206;

LAB207:    xsi_vlog_unsigned_bit_combine(t13, 3, t11, 3, t27, 3);
    goto LAB211;

LAB209:    memcpy(t13, t11, 8);
    goto LAB211;

LAB212:    *((unsigned int *)t28) = 1;
    goto LAB215;

LAB214:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB215;

LAB216:    t40 = (t0 + 5608);
    t41 = (t40 + 56U);
    t46 = *((char **)t41);
    goto LAB217;

LAB218:    t47 = (t0 + 1688U);
    t48 = *((char **)t47);
    memset(t73, 0, 8);
    t47 = (t48 + 4);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t48);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB225;

LAB226:    if (*((unsigned int *)t47) != 0)
        goto LAB227;

LAB228:    t50 = (t73 + 4);
    t57 = *((unsigned int *)t73);
    t58 = *((unsigned int *)t50);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB229;

LAB230:    t60 = *((unsigned int *)t73);
    t61 = (~(t60));
    t74 = *((unsigned int *)t50);
    t75 = (t61 || t74);
    if (t75 > 0)
        goto LAB231;

LAB232:    if (*((unsigned int *)t50) > 0)
        goto LAB233;

LAB234:    if (*((unsigned int *)t73) > 0)
        goto LAB235;

LAB236:    memcpy(t69, t78, 8);

LAB237:    goto LAB219;

LAB220:    xsi_vlog_unsigned_bit_combine(t27, 3, t46, 3, t69, 3);
    goto LAB224;

LAB222:    memcpy(t27, t46, 8);
    goto LAB224;

LAB225:    *((unsigned int *)t73) = 1;
    goto LAB228;

LAB227:    t49 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB228;

LAB229:    t51 = (t0 + 5608);
    t70 = (t51 + 56U);
    t71 = *((char **)t70);
    goto LAB230;

LAB231:    t76 = (t0 + 5768);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    goto LAB232;

LAB233:    xsi_vlog_unsigned_bit_combine(t69, 3, t71, 3, t78, 3);
    goto LAB237;

LAB235:    memcpy(t69, t71, 8);
    goto LAB237;

LAB239:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB241;

LAB240:    *((unsigned int *)t13) = 1;
    goto LAB241;

LAB243:    xsi_set_current_line(695, ng0);

LAB246:    xsi_set_current_line(696, ng0);
    t34 = ((char*)((ng3)));
    t35 = (t0 + 4808);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    xsi_set_current_line(697, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng20)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 3, t7, 32);
    t8 = (t0 + 6248);
    xsi_vlogvar_assign_value(t8, t13, 0, 0, 3);
    xsi_set_current_line(699, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB247;

LAB248:    if (*((unsigned int *)t2) != 0)
        goto LAB249;

LAB250:    t7 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB251;

LAB252:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB253;

LAB254:    if (*((unsigned int *)t7) > 0)
        goto LAB255;

LAB256:    if (*((unsigned int *)t14) > 0)
        goto LAB257;

LAB258:    memcpy(t13, t27, 8);

LAB259:    t79 = (t0 + 6088);
    xsi_vlogvar_assign_value(t79, t13, 0, 0, 3);
    goto LAB245;

LAB247:    *((unsigned int *)t14) = 1;
    goto LAB250;

LAB249:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB250;

LAB251:    t8 = (t0 + 5448);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    goto LAB252;

LAB253:    t12 = (t0 + 1528U);
    t34 = *((char **)t12);
    memset(t28, 0, 8);
    t12 = (t34 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB260;

LAB261:    if (*((unsigned int *)t12) != 0)
        goto LAB262;

LAB263:    t39 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB264;

LAB265:    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t39);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB266;

LAB267:    if (*((unsigned int *)t39) > 0)
        goto LAB268;

LAB269:    if (*((unsigned int *)t28) > 0)
        goto LAB270;

LAB271:    memcpy(t27, t69, 8);

LAB272:    goto LAB254;

LAB255:    xsi_vlog_unsigned_bit_combine(t13, 3, t11, 3, t27, 3);
    goto LAB259;

LAB257:    memcpy(t13, t11, 8);
    goto LAB259;

LAB260:    *((unsigned int *)t28) = 1;
    goto LAB263;

LAB262:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB263;

LAB264:    t40 = (t0 + 5608);
    t41 = (t40 + 56U);
    t46 = *((char **)t41);
    goto LAB265;

LAB266:    t47 = (t0 + 1688U);
    t48 = *((char **)t47);
    memset(t73, 0, 8);
    t47 = (t48 + 4);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t48);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB273;

LAB274:    if (*((unsigned int *)t47) != 0)
        goto LAB275;

LAB276:    t50 = (t73 + 4);
    t57 = *((unsigned int *)t73);
    t58 = *((unsigned int *)t50);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB277;

LAB278:    t60 = *((unsigned int *)t73);
    t61 = (~(t60));
    t74 = *((unsigned int *)t50);
    t75 = (t61 || t74);
    if (t75 > 0)
        goto LAB279;

LAB280:    if (*((unsigned int *)t50) > 0)
        goto LAB281;

LAB282:    if (*((unsigned int *)t73) > 0)
        goto LAB283;

LAB284:    memcpy(t69, t78, 8);

LAB285:    goto LAB267;

LAB268:    xsi_vlog_unsigned_bit_combine(t27, 3, t46, 3, t69, 3);
    goto LAB272;

LAB270:    memcpy(t27, t46, 8);
    goto LAB272;

LAB273:    *((unsigned int *)t73) = 1;
    goto LAB276;

LAB275:    t49 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB276;

LAB277:    t51 = (t0 + 5608);
    t70 = (t51 + 56U);
    t71 = *((char **)t70);
    goto LAB278;

LAB279:    t76 = (t0 + 5768);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    goto LAB280;

LAB281:    xsi_vlog_unsigned_bit_combine(t69, 3, t71, 3, t78, 3);
    goto LAB285;

LAB283:    memcpy(t69, t71, 8);
    goto LAB285;

LAB287:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB289;

LAB288:    *((unsigned int *)t13) = 1;
    goto LAB289;

LAB291:    xsi_set_current_line(701, ng0);

LAB294:    xsi_set_current_line(702, ng0);
    t34 = ((char*)((ng3)));
    t35 = (t0 + 4808);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    xsi_set_current_line(703, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng20)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 3, t7, 32);
    t8 = (t0 + 6248);
    xsi_vlogvar_assign_value(t8, t13, 0, 0, 3);
    xsi_set_current_line(705, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB295;

LAB296:    if (*((unsigned int *)t2) != 0)
        goto LAB297;

LAB298:    t7 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB299;

LAB300:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB301;

LAB302:    if (*((unsigned int *)t7) > 0)
        goto LAB303;

LAB304:    if (*((unsigned int *)t14) > 0)
        goto LAB305;

LAB306:    memcpy(t13, t27, 8);

LAB307:    t79 = (t0 + 6088);
    xsi_vlogvar_assign_value(t79, t13, 0, 0, 3);
    goto LAB293;

LAB295:    *((unsigned int *)t14) = 1;
    goto LAB298;

LAB297:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB298;

LAB299:    t8 = (t0 + 5448);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    goto LAB300;

LAB301:    t12 = (t0 + 1528U);
    t34 = *((char **)t12);
    memset(t28, 0, 8);
    t12 = (t34 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB308;

LAB309:    if (*((unsigned int *)t12) != 0)
        goto LAB310;

LAB311:    t39 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB312;

LAB313:    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t39);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB314;

LAB315:    if (*((unsigned int *)t39) > 0)
        goto LAB316;

LAB317:    if (*((unsigned int *)t28) > 0)
        goto LAB318;

LAB319:    memcpy(t27, t69, 8);

LAB320:    goto LAB302;

LAB303:    xsi_vlog_unsigned_bit_combine(t13, 3, t11, 3, t27, 3);
    goto LAB307;

LAB305:    memcpy(t13, t11, 8);
    goto LAB307;

LAB308:    *((unsigned int *)t28) = 1;
    goto LAB311;

LAB310:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB311;

LAB312:    t40 = (t0 + 5608);
    t41 = (t40 + 56U);
    t46 = *((char **)t41);
    goto LAB313;

LAB314:    t47 = (t0 + 1688U);
    t48 = *((char **)t47);
    memset(t73, 0, 8);
    t47 = (t48 + 4);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t48);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB321;

LAB322:    if (*((unsigned int *)t47) != 0)
        goto LAB323;

LAB324:    t50 = (t73 + 4);
    t57 = *((unsigned int *)t73);
    t58 = *((unsigned int *)t50);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB325;

LAB326:    t60 = *((unsigned int *)t73);
    t61 = (~(t60));
    t74 = *((unsigned int *)t50);
    t75 = (t61 || t74);
    if (t75 > 0)
        goto LAB327;

LAB328:    if (*((unsigned int *)t50) > 0)
        goto LAB329;

LAB330:    if (*((unsigned int *)t73) > 0)
        goto LAB331;

LAB332:    memcpy(t69, t78, 8);

LAB333:    goto LAB315;

LAB316:    xsi_vlog_unsigned_bit_combine(t27, 3, t46, 3, t69, 3);
    goto LAB320;

LAB318:    memcpy(t27, t46, 8);
    goto LAB320;

LAB321:    *((unsigned int *)t73) = 1;
    goto LAB324;

LAB323:    t49 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB324;

LAB325:    t51 = (t0 + 5608);
    t70 = (t51 + 56U);
    t71 = *((char **)t70);
    goto LAB326;

LAB327:    t76 = (t0 + 5768);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    goto LAB328;

LAB329:    xsi_vlog_unsigned_bit_combine(t69, 3, t71, 3, t78, 3);
    goto LAB333;

LAB331:    memcpy(t69, t71, 8);
    goto LAB333;

LAB337:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB338;

LAB339:    xsi_set_current_line(712, ng0);

LAB342:    xsi_set_current_line(713, ng0);
    t34 = (t0 + 4328);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    t40 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t41 = (t39 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t39);
    t37 = *((unsigned int *)t40);
    t38 = (t36 ^ t37);
    t42 = *((unsigned int *)t41);
    t43 = *((unsigned int *)t46);
    t44 = (t42 ^ t43);
    t45 = (t38 | t44);
    t52 = *((unsigned int *)t41);
    t53 = *((unsigned int *)t46);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t45 & t55);
    if (t56 != 0)
        goto LAB344;

LAB343:    if (t54 != 0)
        goto LAB345;

LAB346:    t48 = (t14 + 4);
    t57 = *((unsigned int *)t48);
    t58 = (~(t57));
    t59 = *((unsigned int *)t14);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB347;

LAB348:    xsi_set_current_line(720, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t2);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB393;

LAB390:    if (t24 != 0)
        goto LAB392;

LAB391:    *((unsigned int *)t13) = 1;

LAB393:    t9 = (t13 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB394;

LAB395:    xsi_set_current_line(726, ng0);

LAB404:    xsi_set_current_line(727, ng0);
    xsi_vlogfile_write(1, 0, 0, ng36, 1, t0);
    xsi_set_current_line(728, ng0);
    t2 = ((char*)((ng20)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(729, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(730, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t13, 4, 4, 2U, t5, 3, t4, 1);
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 4);
    xsi_set_current_line(731, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);

LAB405:    t2 = ((char*)((ng21)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB406;

LAB407:    t2 = ((char*)((ng24)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB408;

LAB409:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB410;

LAB411:    t2 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB412;

LAB413:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB414;

LAB415:    t2 = ((char*)((ng31)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB416;

LAB417:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t10 == 1)
        goto LAB418;

LAB419:
LAB421:
LAB420:    xsi_set_current_line(788, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3048);
    t7 = (t0 + 3048);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB514;

LAB515:
LAB422:    xsi_set_current_line(790, ng0);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 6248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(791, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t5 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB516;

LAB517:    if (*((unsigned int *)t2) != 0)
        goto LAB518;

LAB519:    t8 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t8);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB520;

LAB521:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB522;

LAB523:    if (*((unsigned int *)t8) > 0)
        goto LAB524;

LAB525:    if (*((unsigned int *)t14) > 0)
        goto LAB526;

LAB527:    memcpy(t13, t39, 8);

LAB528:    t40 = (t0 + 6088);
    xsi_vlogvar_assign_value(t40, t13, 0, 0, 3);

LAB396:
LAB349:    goto LAB341;

LAB344:    *((unsigned int *)t14) = 1;
    goto LAB346;

LAB345:    t47 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB346;

LAB347:    xsi_set_current_line(713, ng0);

LAB350:    xsi_set_current_line(714, ng0);
    t49 = ((char*)((ng3)));
    t50 = (t0 + 4808);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 1);
    xsi_set_current_line(715, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4328);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 16);
    xsi_set_current_line(716, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6248);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    xsi_set_current_line(717, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB351;

LAB352:    if (*((unsigned int *)t2) != 0)
        goto LAB353;

LAB354:    t7 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB355;

LAB356:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB357;

LAB358:    if (*((unsigned int *)t7) > 0)
        goto LAB359;

LAB360:    if (*((unsigned int *)t14) > 0)
        goto LAB361;

LAB362:    memcpy(t13, t27, 8);

LAB363:    t79 = (t0 + 6088);
    xsi_vlogvar_assign_value(t79, t13, 0, 0, 3);
    goto LAB349;

LAB351:    *((unsigned int *)t14) = 1;
    goto LAB354;

LAB353:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB354;

LAB355:    t8 = (t0 + 5448);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    goto LAB356;

LAB357:    t12 = (t0 + 1528U);
    t34 = *((char **)t12);
    memset(t28, 0, 8);
    t12 = (t34 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB364;

LAB365:    if (*((unsigned int *)t12) != 0)
        goto LAB366;

LAB367:    t39 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t39);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB368;

LAB369:    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t39);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB370;

LAB371:    if (*((unsigned int *)t39) > 0)
        goto LAB372;

LAB373:    if (*((unsigned int *)t28) > 0)
        goto LAB374;

LAB375:    memcpy(t27, t69, 8);

LAB376:    goto LAB358;

LAB359:    xsi_vlog_unsigned_bit_combine(t13, 3, t11, 3, t27, 3);
    goto LAB363;

LAB361:    memcpy(t13, t11, 8);
    goto LAB363;

LAB364:    *((unsigned int *)t28) = 1;
    goto LAB367;

LAB366:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB367;

LAB368:    t40 = (t0 + 5608);
    t41 = (t40 + 56U);
    t46 = *((char **)t41);
    goto LAB369;

LAB370:    t47 = (t0 + 1688U);
    t48 = *((char **)t47);
    memset(t73, 0, 8);
    t47 = (t48 + 4);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t48);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB377;

LAB378:    if (*((unsigned int *)t47) != 0)
        goto LAB379;

LAB380:    t50 = (t73 + 4);
    t57 = *((unsigned int *)t73);
    t58 = *((unsigned int *)t50);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB381;

LAB382:    t60 = *((unsigned int *)t73);
    t61 = (~(t60));
    t74 = *((unsigned int *)t50);
    t75 = (t61 || t74);
    if (t75 > 0)
        goto LAB383;

LAB384:    if (*((unsigned int *)t50) > 0)
        goto LAB385;

LAB386:    if (*((unsigned int *)t73) > 0)
        goto LAB387;

LAB388:    memcpy(t69, t78, 8);

LAB389:    goto LAB371;

LAB372:    xsi_vlog_unsigned_bit_combine(t27, 3, t46, 3, t69, 3);
    goto LAB376;

LAB374:    memcpy(t27, t46, 8);
    goto LAB376;

LAB377:    *((unsigned int *)t73) = 1;
    goto LAB380;

LAB379:    t49 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB380;

LAB381:    t51 = (t0 + 5608);
    t70 = (t51 + 56U);
    t71 = *((char **)t70);
    goto LAB382;

LAB383:    t76 = (t0 + 5768);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    goto LAB384;

LAB385:    xsi_vlog_unsigned_bit_combine(t69, 3, t71, 3, t78, 3);
    goto LAB389;

LAB387:    memcpy(t69, t71, 8);
    goto LAB389;

LAB392:    t8 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB393;

LAB394:    xsi_set_current_line(720, ng0);

LAB397:    xsi_set_current_line(721, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 4808);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(722, ng0);
    t2 = (t0 + 4488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB401;

LAB399:    if (*((unsigned int *)t7) == 0)
        goto LAB398;

LAB400:    t8 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t8) = 1;

LAB401:    t9 = (t13 + 4);
    t11 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    *((unsigned int *)t13) = t21;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB403;

LAB402:    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 1U);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t29 & 1U);
    t12 = (t0 + 4488);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    xsi_set_current_line(723, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6248);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    xsi_set_current_line(724, ng0);
    t2 = (t0 + 5608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 6088);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB396;

LAB398:    *((unsigned int *)t13) = 1;
    goto LAB401;

LAB403:    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t22 | t23);
    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t11);
    *((unsigned int *)t9) = (t24 | t25);
    goto LAB402;

LAB406:    xsi_set_current_line(732, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB426;

LAB423:    if (t24 != 0)
        goto LAB425;

LAB424:    *((unsigned int *)t13) = 1;

LAB426:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB427;

LAB428:    xsi_set_current_line(736, ng0);

LAB433:    xsi_set_current_line(737, ng0);
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(738, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3048);
    t7 = (t0 + 3048);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB434;

LAB435:
LAB429:    goto LAB422;

LAB408:    xsi_set_current_line(740, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB439;

LAB436:    if (t24 != 0)
        goto LAB438;

LAB437:    *((unsigned int *)t13) = 1;

LAB439:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB440;

LAB441:    xsi_set_current_line(744, ng0);

LAB446:    xsi_set_current_line(745, ng0);
    t2 = (t0 + 3208);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(746, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3208);
    t7 = (t0 + 3208);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB447;

LAB448:
LAB442:    goto LAB422;

LAB410:    xsi_set_current_line(748, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB452;

LAB449:    if (t24 != 0)
        goto LAB451;

LAB450:    *((unsigned int *)t13) = 1;

LAB452:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB453;

LAB454:    xsi_set_current_line(752, ng0);

LAB459:    xsi_set_current_line(753, ng0);
    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(754, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3368);
    t7 = (t0 + 3368);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB460;

LAB461:
LAB455:    goto LAB422;

LAB412:    xsi_set_current_line(756, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB465;

LAB462:    if (t24 != 0)
        goto LAB464;

LAB463:    *((unsigned int *)t13) = 1;

LAB465:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB466;

LAB467:    xsi_set_current_line(760, ng0);

LAB472:    xsi_set_current_line(761, ng0);
    t2 = (t0 + 3528);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(762, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3528);
    t7 = (t0 + 3528);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB473;

LAB474:
LAB468:    goto LAB422;

LAB414:    xsi_set_current_line(764, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB478;

LAB475:    if (t24 != 0)
        goto LAB477;

LAB476:    *((unsigned int *)t13) = 1;

LAB478:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB479;

LAB480:    xsi_set_current_line(768, ng0);

LAB485:    xsi_set_current_line(769, ng0);
    t2 = (t0 + 3688);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(770, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3688);
    t7 = (t0 + 3688);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB486;

LAB487:
LAB481:    goto LAB422;

LAB416:    xsi_set_current_line(772, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB491;

LAB488:    if (t24 != 0)
        goto LAB490;

LAB489:    *((unsigned int *)t13) = 1;

LAB491:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB492;

LAB493:    xsi_set_current_line(776, ng0);

LAB498:    xsi_set_current_line(777, ng0);
    t2 = (t0 + 3848);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(778, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3848);
    t7 = (t0 + 3848);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB499;

LAB500:
LAB494:    goto LAB422;

LAB418:    xsi_set_current_line(780, ng0);
    t5 = (t0 + 2488U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t9 = (t5 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB504;

LAB501:    if (t24 != 0)
        goto LAB503;

LAB502:    *((unsigned int *)t13) = 1;

LAB504:    t12 = (t13 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB505;

LAB506:    xsi_set_current_line(784, ng0);

LAB511:    xsi_set_current_line(785, ng0);
    t2 = (t0 + 4008);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    t11 = (t0 + 4328);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 16);
    xsi_set_current_line(786, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4008);
    t7 = (t0 + 4008);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng12)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB512;

LAB513:
LAB507:    goto LAB422;

LAB425:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB426;

LAB427:    xsi_set_current_line(732, ng0);

LAB430:    xsi_set_current_line(733, ng0);
    t34 = (t0 + 3048);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(734, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3048);
    t7 = (t0 + 3048);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB431;

LAB432:    goto LAB429;

LAB431:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB432;

LAB434:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB435;

LAB438:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB439;

LAB440:    xsi_set_current_line(740, ng0);

LAB443:    xsi_set_current_line(741, ng0);
    t34 = (t0 + 3208);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(742, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3208);
    t7 = (t0 + 3208);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB444;

LAB445:    goto LAB442;

LAB444:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB445;

LAB447:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB448;

LAB451:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB452;

LAB453:    xsi_set_current_line(748, ng0);

LAB456:    xsi_set_current_line(749, ng0);
    t34 = (t0 + 3368);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(750, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3368);
    t7 = (t0 + 3368);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB457;

LAB458:    goto LAB455;

LAB457:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB458;

LAB460:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB461;

LAB464:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB465;

LAB466:    xsi_set_current_line(756, ng0);

LAB469:    xsi_set_current_line(757, ng0);
    t34 = (t0 + 3528);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(758, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3528);
    t7 = (t0 + 3528);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB470;

LAB471:    goto LAB468;

LAB470:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB471;

LAB473:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB474;

LAB477:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB478;

LAB479:    xsi_set_current_line(764, ng0);

LAB482:    xsi_set_current_line(765, ng0);
    t34 = (t0 + 3688);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(766, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3688);
    t7 = (t0 + 3688);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB483;

LAB484:    goto LAB481;

LAB483:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB484;

LAB486:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB487;

LAB490:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB491;

LAB492:    xsi_set_current_line(772, ng0);

LAB495:    xsi_set_current_line(773, ng0);
    t34 = (t0 + 3848);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(774, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3848);
    t7 = (t0 + 3848);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB496;

LAB497:    goto LAB494;

LAB496:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB497;

LAB499:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB500;

LAB503:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB504;

LAB505:    xsi_set_current_line(780, ng0);

LAB508:    xsi_set_current_line(781, ng0);
    t34 = (t0 + 4008);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    memset(t14, 0, 8);
    t40 = (t14 + 4);
    t41 = (t39 + 4);
    t36 = *((unsigned int *)t39);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t41);
    t42 = (t38 >> 16);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t44 & 65535U);
    t46 = (t0 + 4328);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 16);
    xsi_set_current_line(782, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4008);
    t7 = (t0 + 4008);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng22)));
    t12 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t9)), 2, t11, 32, 1, t12, 32, 1);
    t34 = (t13 + 4);
    t15 = *((unsigned int *)t34);
    t10 = (!(t15));
    t35 = (t14 + 4);
    t16 = *((unsigned int *)t35);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t39 = (t27 + 4);
    t17 = *((unsigned int *)t39);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB509;

LAB510:    goto LAB507;

LAB509:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB510;

LAB512:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB513;

LAB514:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t5, t2, t66, *((unsigned int *)t14), t68);
    goto LAB515;

LAB516:    *((unsigned int *)t14) = 1;
    goto LAB519;

LAB518:    t7 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB519;

LAB520:    t9 = (t0 + 5448);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    goto LAB521;

LAB522:    t34 = (t0 + 5608);
    t35 = (t34 + 56U);
    t39 = *((char **)t35);
    goto LAB523;

LAB524:    xsi_vlog_unsigned_bit_combine(t13, 3, t12, 3, t39, 3);
    goto LAB528;

LAB526:    memcpy(t13, t12, 8);
    goto LAB528;

LAB530:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB532;

LAB531:    *((unsigned int *)t13) = 1;
    goto LAB532;

LAB534:    xsi_set_current_line(794, ng0);

LAB537:    xsi_set_current_line(795, ng0);
    t35 = ((char*)((ng3)));
    t39 = (t0 + 4808);
    xsi_vlogvar_assign_value(t39, t35, 0, 0, 1);
    xsi_set_current_line(796, ng0);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng20)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t7, 3, t8, 32);
    t9 = (t0 + 6248);
    xsi_vlogvar_assign_value(t9, t13, 0, 0, 3);
    xsi_set_current_line(797, ng0);
    t2 = (t0 + 5608);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 6088);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB536;

LAB539:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB541;

LAB540:    *((unsigned int *)t13) = 1;
    goto LAB541;

LAB543:    xsi_set_current_line(799, ng0);

LAB546:    xsi_set_current_line(800, ng0);
    t35 = ((char*)((ng3)));
    t39 = (t0 + 4808);
    xsi_vlogvar_assign_value(t39, t35, 0, 0, 1);
    xsi_set_current_line(801, ng0);
    t2 = (t0 + 4168);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng20)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t7, 3, t8, 32);
    t9 = (t0 + 6248);
    xsi_vlogvar_assign_value(t9, t13, 0, 0, 3);
    xsi_set_current_line(802, ng0);
    t2 = (t0 + 6248);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 2328U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    t8 = (t7 + 4);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB550;

LAB547:    if (t24 != 0)
        goto LAB549;

LAB548:    *((unsigned int *)t13) = 1;

LAB550:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB551;

LAB552:
LAB553:    xsi_set_current_line(805, ng0);
    t2 = (t0 + 5608);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 6088);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB545;

LAB549:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB550;

LAB551:    xsi_set_current_line(802, ng0);

LAB554:    xsi_set_current_line(803, ng0);
    t35 = ((char*)((ng20)));
    t39 = (t0 + 4648);
    xsi_vlogvar_assign_value(t39, t35, 0, 0, 1);
    goto LAB553;

LAB558:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB559;

LAB560:    xsi_set_current_line(813, ng0);

LAB563:    xsi_set_current_line(815, ng0);
    t35 = (t0 + 2008U);
    t39 = *((char **)t35);
    t35 = (t0 + 4168);
    t40 = (t35 + 56U);
    t41 = *((char **)t40);
    t46 = (t0 + 2168U);
    t47 = *((char **)t46);
    memset(t14, 0, 8);
    t46 = (t41 + 4);
    t48 = (t47 + 4);
    t36 = *((unsigned int *)t41);
    t37 = *((unsigned int *)t47);
    t38 = (t36 ^ t37);
    t42 = *((unsigned int *)t46);
    t43 = *((unsigned int *)t48);
    t44 = (t42 ^ t43);
    t45 = (t38 | t44);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t48);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t45 & t55);
    if (t56 != 0)
        goto LAB567;

LAB564:    if (t54 != 0)
        goto LAB566;

LAB565:    *((unsigned int *)t14) = 1;

LAB567:    t57 = *((unsigned int *)t39);
    t58 = *((unsigned int *)t14);
    t59 = (t57 & t58);
    *((unsigned int *)t27) = t59;
    t50 = (t39 + 4);
    t51 = (t14 + 4);
    t70 = (t27 + 4);
    t60 = *((unsigned int *)t50);
    t61 = *((unsigned int *)t51);
    t74 = (t60 | t61);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t80 = (t75 != 0);
    if (t80 == 1)
        goto LAB568;

LAB569:
LAB570:    t77 = (t27 + 4);
    t97 = *((unsigned int *)t77);
    t98 = (~(t97));
    t99 = *((unsigned int *)t27);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB571;

LAB572:    xsi_set_current_line(892, ng0);

LAB707:    xsi_set_current_line(893, ng0);
    t2 = (t0 + 4168);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6248);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    xsi_set_current_line(894, ng0);
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t7 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t7);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB708;

LAB709:    if (*((unsigned int *)t2) != 0)
        goto LAB710;

LAB711:    t9 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t9);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB712;

LAB713:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB714;

LAB715:    if (*((unsigned int *)t9) > 0)
        goto LAB716;

LAB717:    if (*((unsigned int *)t14) > 0)
        goto LAB718;

LAB719:    memcpy(t13, t27, 8);

LAB720:    t103 = (t0 + 6088);
    xsi_vlogvar_assign_value(t103, t13, 0, 0, 3);

LAB573:    goto LAB562;

LAB566:    t49 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB567;

LAB568:    t81 = *((unsigned int *)t27);
    t82 = *((unsigned int *)t70);
    *((unsigned int *)t27) = (t81 | t82);
    t71 = (t39 + 4);
    t76 = (t14 + 4);
    t83 = *((unsigned int *)t39);
    t84 = (~(t83));
    t85 = *((unsigned int *)t71);
    t86 = (~(t85));
    t87 = *((unsigned int *)t14);
    t88 = (~(t87));
    t89 = *((unsigned int *)t76);
    t90 = (~(t89));
    t10 = (t84 & t86);
    t62 = (t88 & t90);
    t91 = (~(t10));
    t92 = (~(t62));
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t94 & t92);
    t95 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t95 & t91);
    t96 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t96 & t92);
    goto LAB570;

LAB571:    xsi_set_current_line(815, ng0);

LAB574:    xsi_set_current_line(816, ng0);
    t78 = (t0 + 4328);
    t79 = (t78 + 56U);
    t102 = *((char **)t79);
    t103 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t104 = (t102 + 4);
    t105 = (t103 + 4);
    t106 = *((unsigned int *)t102);
    t107 = *((unsigned int *)t103);
    t108 = (t106 ^ t107);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = (t108 | t111);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t105);
    t115 = (t113 | t114);
    t116 = (~(t115));
    t117 = (t112 & t116);
    if (t117 != 0)
        goto LAB578;

LAB575:    if (t115 != 0)
        goto LAB577;

LAB576:    *((unsigned int *)t28) = 1;

LAB578:    t119 = (t28 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t28);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB579;

LAB580:    xsi_set_current_line(886, ng0);

LAB706:    xsi_set_current_line(887, ng0);
    xsi_vlogfile_write(1, 0, 0, ng38, 1, t0);

LAB581:    goto LAB573;

LAB577:    t118 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB578;

LAB579:    xsi_set_current_line(816, ng0);

LAB582:    xsi_set_current_line(817, ng0);
    t125 = ((char*)((ng20)));
    t126 = (t0 + 4808);
    xsi_vlogvar_assign_value(t126, t125, 0, 0, 1);
    xsi_set_current_line(818, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4968);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 16);
    xsi_set_current_line(819, ng0);
    t2 = (t0 + 2488U);
    t5 = *((char **)t2);
    t2 = (t0 + 2328U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t13, 4, 4, 2U, t7, 3, t5, 1);
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 4);
    xsi_set_current_line(820, ng0);
    t2 = (t0 + 2328U);
    t5 = *((char **)t2);

LAB583:    t2 = ((char*)((ng21)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB584;

LAB585:    t2 = ((char*)((ng24)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB586;

LAB587:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB588;

LAB589:    t2 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB590;

LAB591:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB592;

LAB593:    t2 = ((char*)((ng31)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB594;

LAB595:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t10 == 1)
        goto LAB596;

LAB597:
LAB599:
LAB598:    xsi_set_current_line(877, ng0);

LAB692:    xsi_set_current_line(878, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 4328);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 16);

LAB600:    xsi_set_current_line(881, ng0);
    t2 = (t0 + 4168);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6248);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    xsi_set_current_line(882, ng0);
    t2 = (t0 + 1688U);
    t7 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t7 + 4);
    t15 = *((unsigned int *)t2);
    t16 = (~(t15));
    t17 = *((unsigned int *)t7);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB693;

LAB694:    if (*((unsigned int *)t2) != 0)
        goto LAB695;

LAB696:    t9 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t9);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB697;

LAB698:    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB699;

LAB700:    if (*((unsigned int *)t9) > 0)
        goto LAB701;

LAB702:    if (*((unsigned int *)t14) > 0)
        goto LAB703;

LAB704:    memcpy(t13, t40, 8);

LAB705:    t41 = (t0 + 6088);
    xsi_vlogvar_assign_value(t41, t13, 0, 0, 3);
    goto LAB581;

LAB584:    xsi_set_current_line(821, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB604;

LAB601:    if (t24 != 0)
        goto LAB603;

LAB602:    *((unsigned int *)t13) = 1;

LAB604:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB605;

LAB606:    xsi_set_current_line(825, ng0);

LAB611:    xsi_set_current_line(826, ng0);
    t2 = (t0 + 3048);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(827, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3048);
    t8 = (t0 + 3048);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB612;

LAB613:
LAB607:    goto LAB600;

LAB586:    xsi_set_current_line(829, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB617;

LAB614:    if (t24 != 0)
        goto LAB616;

LAB615:    *((unsigned int *)t13) = 1;

LAB617:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB618;

LAB619:    xsi_set_current_line(833, ng0);

LAB624:    xsi_set_current_line(834, ng0);
    t2 = (t0 + 3208);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(835, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3208);
    t8 = (t0 + 3208);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB625;

LAB626:
LAB620:    goto LAB600;

LAB588:    xsi_set_current_line(837, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB630;

LAB627:    if (t24 != 0)
        goto LAB629;

LAB628:    *((unsigned int *)t13) = 1;

LAB630:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB631;

LAB632:    xsi_set_current_line(841, ng0);

LAB637:    xsi_set_current_line(842, ng0);
    t2 = (t0 + 3368);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(843, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3368);
    t8 = (t0 + 3368);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB638;

LAB639:
LAB633:    goto LAB600;

LAB590:    xsi_set_current_line(845, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB643;

LAB640:    if (t24 != 0)
        goto LAB642;

LAB641:    *((unsigned int *)t13) = 1;

LAB643:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB644;

LAB645:    xsi_set_current_line(849, ng0);

LAB650:    xsi_set_current_line(850, ng0);
    t2 = (t0 + 3528);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(851, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3528);
    t8 = (t0 + 3528);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB651;

LAB652:
LAB646:    goto LAB600;

LAB592:    xsi_set_current_line(853, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB656;

LAB653:    if (t24 != 0)
        goto LAB655;

LAB654:    *((unsigned int *)t13) = 1;

LAB656:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB657;

LAB658:    xsi_set_current_line(857, ng0);

LAB663:    xsi_set_current_line(858, ng0);
    t2 = (t0 + 3688);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(859, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3688);
    t8 = (t0 + 3688);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB664;

LAB665:
LAB659:    goto LAB600;

LAB594:    xsi_set_current_line(861, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB669;

LAB666:    if (t24 != 0)
        goto LAB668;

LAB667:    *((unsigned int *)t13) = 1;

LAB669:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB670;

LAB671:    xsi_set_current_line(865, ng0);

LAB676:    xsi_set_current_line(866, ng0);
    t2 = (t0 + 3848);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(867, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3848);
    t8 = (t0 + 3848);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB677;

LAB678:
LAB672:    goto LAB600;

LAB596:    xsi_set_current_line(869, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t9 = (t8 + 4);
    t11 = (t7 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t11);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB682;

LAB679:    if (t24 != 0)
        goto LAB681;

LAB680:    *((unsigned int *)t13) = 1;

LAB682:    t34 = (t13 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB683;

LAB684:    xsi_set_current_line(873, ng0);

LAB689:    xsi_set_current_line(874, ng0);
    t2 = (t0 + 4008);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 65535U);
    t12 = (t0 + 4328);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 16);
    xsi_set_current_line(875, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 4008);
    t8 = (t0 + 4008);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng12)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB690;

LAB691:
LAB685:    goto LAB600;

LAB603:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB604;

LAB605:    xsi_set_current_line(821, ng0);

LAB608:    xsi_set_current_line(822, ng0);
    t35 = (t0 + 3048);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(823, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3048);
    t8 = (t0 + 3048);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB609;

LAB610:    goto LAB607;

LAB609:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB610;

LAB612:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB613;

LAB616:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB617;

LAB618:    xsi_set_current_line(829, ng0);

LAB621:    xsi_set_current_line(830, ng0);
    t35 = (t0 + 3208);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(831, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3208);
    t8 = (t0 + 3208);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB622;

LAB623:    goto LAB620;

LAB622:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB623;

LAB625:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB626;

LAB629:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB630;

LAB631:    xsi_set_current_line(837, ng0);

LAB634:    xsi_set_current_line(838, ng0);
    t35 = (t0 + 3368);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(839, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3368);
    t8 = (t0 + 3368);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB635;

LAB636:    goto LAB633;

LAB635:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB636;

LAB638:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB639;

LAB642:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB643;

LAB644:    xsi_set_current_line(845, ng0);

LAB647:    xsi_set_current_line(846, ng0);
    t35 = (t0 + 3528);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(847, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3528);
    t8 = (t0 + 3528);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB648;

LAB649:    goto LAB646;

LAB648:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB649;

LAB651:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB652;

LAB655:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB656;

LAB657:    xsi_set_current_line(853, ng0);

LAB660:    xsi_set_current_line(854, ng0);
    t35 = (t0 + 3688);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(855, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3688);
    t8 = (t0 + 3688);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB661;

LAB662:    goto LAB659;

LAB661:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB662;

LAB664:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB665;

LAB668:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB669;

LAB670:    xsi_set_current_line(861, ng0);

LAB673:    xsi_set_current_line(862, ng0);
    t35 = (t0 + 3848);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(863, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3848);
    t8 = (t0 + 3848);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB674;

LAB675:    goto LAB672;

LAB674:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB675;

LAB677:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB678;

LAB681:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB682;

LAB683:    xsi_set_current_line(869, ng0);

LAB686:    xsi_set_current_line(870, ng0);
    t35 = (t0 + 4008);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    memset(t14, 0, 8);
    t41 = (t14 + 4);
    t46 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (t36 >> 16);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t46);
    t42 = (t38 >> 16);
    *((unsigned int *)t41) = t42;
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & 65535U);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 65535U);
    t47 = (t0 + 4328);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 16);
    xsi_set_current_line(871, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 4008);
    t8 = (t0 + 4008);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng22)));
    t34 = ((char*)((ng23)));
    xsi_vlog_convert_partindices(t13, t14, t27, ((int*)(t11)), 2, t12, 32, 1, t34, 32, 1);
    t35 = (t13 + 4);
    t15 = *((unsigned int *)t35);
    t10 = (!(t15));
    t39 = (t14 + 4);
    t16 = *((unsigned int *)t39);
    t62 = (!(t16));
    t63 = (t10 && t62);
    t40 = (t27 + 4);
    t17 = *((unsigned int *)t40);
    t64 = (!(t17));
    t65 = (t63 && t64);
    if (t65 == 1)
        goto LAB687;

LAB688:    goto LAB685;

LAB687:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB688;

LAB690:    t18 = *((unsigned int *)t27);
    t66 = (t18 + 0);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t67 = (t19 - t20);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t7, t2, t66, *((unsigned int *)t14), t68);
    goto LAB691;

LAB693:    *((unsigned int *)t14) = 1;
    goto LAB696;

LAB695:    t8 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB696;

LAB697:    t11 = (t0 + 5448);
    t12 = (t11 + 56U);
    t34 = *((char **)t12);
    goto LAB698;

LAB699:    t35 = (t0 + 5608);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    goto LAB700;

LAB701:    xsi_vlog_unsigned_bit_combine(t13, 3, t34, 3, t40, 3);
    goto LAB705;

LAB703:    memcpy(t13, t34, 8);
    goto LAB705;

LAB708:    *((unsigned int *)t14) = 1;
    goto LAB711;

LAB710:    t8 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB711;

LAB712:    t11 = (t0 + 5448);
    t12 = (t11 + 56U);
    t34 = *((char **)t12);
    goto LAB713;

LAB714:    t35 = (t0 + 1528U);
    t39 = *((char **)t35);
    memset(t28, 0, 8);
    t35 = (t39 + 4);
    t29 = *((unsigned int *)t35);
    t30 = (~(t29));
    t31 = *((unsigned int *)t39);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB721;

LAB722:    if (*((unsigned int *)t35) != 0)
        goto LAB723;

LAB724:    t41 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t41);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB725;

LAB726:    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB727;

LAB728:    if (*((unsigned int *)t41) > 0)
        goto LAB729;

LAB730:    if (*((unsigned int *)t28) > 0)
        goto LAB731;

LAB732:    memcpy(t27, t69, 8);

LAB733:    goto LAB715;

LAB716:    xsi_vlog_unsigned_bit_combine(t13, 3, t34, 3, t27, 3);
    goto LAB720;

LAB718:    memcpy(t13, t34, 8);
    goto LAB720;

LAB721:    *((unsigned int *)t28) = 1;
    goto LAB724;

LAB723:    t40 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB724;

LAB725:    t46 = (t0 + 5608);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    goto LAB726;

LAB727:    t49 = (t0 + 1688U);
    t50 = *((char **)t49);
    memset(t73, 0, 8);
    t49 = (t50 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB734;

LAB735:    if (*((unsigned int *)t49) != 0)
        goto LAB736;

LAB737:    t70 = (t73 + 4);
    t57 = *((unsigned int *)t73);
    t58 = *((unsigned int *)t70);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB738;

LAB739:    t60 = *((unsigned int *)t73);
    t61 = (~(t60));
    t74 = *((unsigned int *)t70);
    t75 = (t61 || t74);
    if (t75 > 0)
        goto LAB740;

LAB741:    if (*((unsigned int *)t70) > 0)
        goto LAB742;

LAB743:    if (*((unsigned int *)t73) > 0)
        goto LAB744;

LAB745:    memcpy(t69, t102, 8);

LAB746:    goto LAB728;

LAB729:    xsi_vlog_unsigned_bit_combine(t27, 3, t48, 3, t69, 3);
    goto LAB733;

LAB731:    memcpy(t27, t48, 8);
    goto LAB733;

LAB734:    *((unsigned int *)t73) = 1;
    goto LAB737;

LAB736:    t51 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB737;

LAB738:    t71 = (t0 + 5608);
    t76 = (t71 + 56U);
    t77 = *((char **)t76);
    goto LAB739;

LAB740:    t78 = (t0 + 5768);
    t79 = (t78 + 56U);
    t102 = *((char **)t79);
    goto LAB741;

LAB742:    xsi_vlog_unsigned_bit_combine(t69, 3, t77, 3, t102, 3);
    goto LAB746;

LAB744:    memcpy(t69, t77, 8);
    goto LAB746;

LAB748:    t34 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB750;

LAB749:    *((unsigned int *)t13) = 1;
    goto LAB750;

LAB752:    xsi_set_current_line(897, ng0);

LAB755:    xsi_set_current_line(898, ng0);
    t39 = (t0 + 4168);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t46 = ((char*)((ng20)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t41, 3, t46, 32);
    t47 = (t0 + 6248);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 3);
    xsi_set_current_line(899, ng0);
    t2 = (t0 + 5768);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6088);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB754;

LAB757:    t34 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB759;

LAB758:    *((unsigned int *)t13) = 1;
    goto LAB759;

LAB761:    xsi_set_current_line(901, ng0);

LAB764:    xsi_set_current_line(902, ng0);
    t39 = (t0 + 4168);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t46 = ((char*)((ng20)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t41, 3, t46, 32);
    t47 = (t0 + 6248);
    xsi_vlogvar_assign_value(t47, t14, 0, 0, 3);
    xsi_set_current_line(903, ng0);
    t2 = (t0 + 5768);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6088);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB763;

}


extern void work_m_06173803168946389515_3092705115_init()
{
	static char *pe[] = {(void *)Cont_572_0,(void *)Always_576_1,(void *)Always_594_2};
	xsi_register_didat("work_m_06173803168946389515_3092705115", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_06173803168946389515_3092705115.didat");
	xsi_register_executes(pe);
}
