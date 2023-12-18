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
static const char *ng0 = "/home/luorix/Desktop/Digital-Logic-Design-F2023-jjoon0-patch-2/parking_lot_top_tb.v";
static int ng1[] = {0, 0};
static const char *ng2 = "%d %d %d %d is onboard elevator. Current floor : %d\n";
static const char *ng3 = "%b %b";
static const char *ng4 = "%d %d %d %d is getting out of elevator. Current floor : %d\n";
static const char *ng5 = "Parking fee = %d cents\n";
static const char *ng6 = "Elevator position: %d --> %d\n";
static const char *ng7 = "Leakage at floor %d!\n";
static int ng8[] = {1, 0};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {37923U, 0U};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {34644U, 0U};
static unsigned int ng13[] = {22357U, 0U};
static unsigned int ng14[] = {14417U, 0U};
static unsigned int ng15[] = {38178U, 0U};
static unsigned int ng16[] = {38194U, 0U};
static const char *ng17 = "Start Simulation!!!\n";
static const char *ng18 = "Reset Simulation!!! \n";
static const char *ng19 = "\n-----------------";
static const char *ng20 = "clock count : %d ";
static const char *ng21 = "license_plate  :  %d %d %d %d ";
static const char *ng22 = "in_mode : %d ";
static const char *ng23 = "out_mode : %d ";
static const char *ng24 = "current leakage:  %b ";
static const char *ng25 = "current leakage_floor:  %b ";
static const char *ng26 = "current todo_exists  :  %b ";
static const char *ng27 = "current todo_in  :  %b ";
static const char *ng28 = "current todo_out  :  %b ";
static const char *ng29 = "current todo_leak_move  :  %b ";
static const char *ng30 = "current todo_license_plate  :  %b ";
static const char *ng31 = "current target_floor  :  %d";
static const char *ng32 = "current target_place  :  %b";
static const char *ng33 = "floor 7  : %b | %d %d %d %d | %d %d %d %d";
static int ng34[] = {7, 0};
static const char *ng35 = "floor 6  : %b | %d %d %d %d | %d %d %d %d";
static int ng36[] = {6, 0};
static const char *ng37 = "floor 5  : %b | %d %d %d %d | %d %d %d %d";
static int ng38[] = {5, 0};
static const char *ng39 = "floor 4  : %b | %d %d %d %d | %d %d %d %d";
static int ng40[] = {4, 0};
static const char *ng41 = "floor 3  : %b | %d %d %d %d | %d %d %d %d";
static int ng42[] = {3, 0};
static const char *ng43 = "floor 2  : %b | %d %d %d %d | %d %d %d %d";
static int ng44[] = {2, 0};
static const char *ng45 = "floor 1  : %b | %d %d %d %d | %d %d %d %d";
static const char *ng46 = "floor 0  : %b";
static const char *ng47 = "moving  :  %d %d %d %d";
static const char *ng48 = "plate type  :  %b ";
static const char *ng49 = "fee leakage:  %b ";
static const char *ng50 = "------------------------------------------\n";



static int sp_check_in(char *t1, char *t2)
{
    char t11[8];
    char t31[8];
    char t35[8];
    char t73[8];
    char t85[8];
    char t97[8];
    char t109[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
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
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(315, ng0);

LAB5:    xsi_set_current_line(316, ng0);
    t5 = (t1 + 10216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10376);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t7 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB9:    t27 = (t1 + 10376);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB11;

LAB10:    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t29) > *((unsigned int *)t30))
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t11);
    t37 = *((unsigned int *)t31);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t39 = (t11 + 4);
    t40 = (t31 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB15;

LAB16:
LAB17:    t67 = (t35 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t35);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB11:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB15:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t11 + 4);
    t50 = (t31 + 4);
    t51 = *((unsigned int *)t11);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t31);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    goto LAB17;

LAB18:    xsi_set_current_line(316, ng0);

LAB21:    xsi_set_current_line(317, ng0);
    t74 = (t1 + 10376);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t73, 0, 8);
    t77 = (t73 + 4);
    t78 = (t76 + 4);
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 12);
    *((unsigned int *)t73) = t80;
    t81 = *((unsigned int *)t78);
    t82 = (t81 >> 12);
    *((unsigned int *)t77) = t82;
    t83 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t83 & 15U);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 & 15U);
    t86 = (t1 + 10376);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memset(t85, 0, 8);
    t89 = (t85 + 4);
    t90 = (t88 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (t91 >> 8);
    *((unsigned int *)t85) = t92;
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 8);
    *((unsigned int *)t89) = t94;
    t95 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t95 & 15U);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t96 & 15U);
    t98 = (t1 + 10376);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    memset(t97, 0, 8);
    t101 = (t97 + 4);
    t102 = (t100 + 4);
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 4);
    *((unsigned int *)t97) = t104;
    t105 = *((unsigned int *)t102);
    t106 = (t105 >> 4);
    *((unsigned int *)t101) = t106;
    t107 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t107 & 15U);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t108 & 15U);
    t110 = (t1 + 10376);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memset(t109, 0, 8);
    t113 = (t109 + 4);
    t114 = (t112 + 4);
    t115 = *((unsigned int *)t112);
    t116 = (t115 >> 0);
    *((unsigned int *)t109) = t116;
    t117 = *((unsigned int *)t114);
    t118 = (t117 >> 0);
    *((unsigned int *)t113) = t118;
    t119 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t119 & 15U);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t120 & 15U);
    t121 = (t1 + 10536);
    t122 = (t121 + 56U);
    t123 = *((char **)t122);
    t124 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t124, (char)118, t73, 4, (char)118, t85, 4, (char)118, t97, 4, (char)118, t109, 4, (char)118, t123, 3);
    goto LAB20;

}

static int sp_check_out(char *t1, char *t2)
{
    char t12[8];
    char t30[8];
    char t46[8];
    char t84[8];
    char t96[8];
    char t108[8];
    char t120[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
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
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
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
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(324, ng0);

LAB5:    xsi_set_current_line(325, ng0);
    t5 = (t1 + 10696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 10856);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t11, (char)118, t7, 16, (char)118, t10, 16);
    xsi_set_current_line(326, ng0);
    t4 = (t1 + 10696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t12, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB9:    t26 = (t1 + 10856);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB13;

LAB10:    if (t42 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t30) = 1;

LAB13:    t47 = *((unsigned int *)t12);
    t48 = *((unsigned int *)t30);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t12 + 4);
    t51 = (t30 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB14;

LAB15:
LAB16:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    t25 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB12:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB13;

LAB14:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t12 + 4);
    t61 = (t30 + 4);
    t62 = *((unsigned int *)t12);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t30);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB16;

LAB17:    xsi_set_current_line(326, ng0);

LAB20:    xsi_set_current_line(327, ng0);
    t85 = (t1 + 10696);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t84, 0, 8);
    t88 = (t84 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (t90 >> 12);
    *((unsigned int *)t84) = t91;
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 12);
    *((unsigned int *)t88) = t93;
    t94 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t94 & 15U);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t95 & 15U);
    t97 = (t1 + 10696);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    memset(t96, 0, 8);
    t100 = (t96 + 4);
    t101 = (t99 + 4);
    t102 = *((unsigned int *)t99);
    t103 = (t102 >> 8);
    *((unsigned int *)t96) = t103;
    t104 = *((unsigned int *)t101);
    t105 = (t104 >> 8);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t106 & 15U);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t107 & 15U);
    t109 = (t1 + 10696);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memset(t108, 0, 8);
    t112 = (t108 + 4);
    t113 = (t111 + 4);
    t114 = *((unsigned int *)t111);
    t115 = (t114 >> 4);
    *((unsigned int *)t108) = t115;
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 4);
    *((unsigned int *)t112) = t117;
    t118 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t118 & 15U);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t119 & 15U);
    t121 = (t1 + 10696);
    t122 = (t121 + 56U);
    t123 = *((char **)t122);
    memset(t120, 0, 8);
    t124 = (t120 + 4);
    t125 = (t123 + 4);
    t126 = *((unsigned int *)t123);
    t127 = (t126 >> 0);
    *((unsigned int *)t120) = t127;
    t128 = *((unsigned int *)t125);
    t129 = (t128 >> 0);
    *((unsigned int *)t124) = t129;
    t130 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t130 & 15U);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t131 & 15U);
    t132 = (t1 + 11016);
    t133 = (t132 + 56U);
    t134 = *((char **)t133);
    t135 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t135, (char)118, t84, 4, (char)118, t96, 4, (char)118, t108, 4, (char)118, t120, 4, (char)118, t134, 3);
    xsi_set_current_line(328, ng0);
    t4 = (t1 + 11016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB24;

LAB21:    if (t22 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t12) = 1;

LAB24:    t11 = (t12 + 4);
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t35 = *((unsigned int *)t12);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB19;

LAB23:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(328, ng0);

LAB28:    xsi_set_current_line(329, ng0);
    t25 = (t1 + 11176);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t28, (char)118, t27, 8);
    goto LAB27;

}

static int sp_check_moving_elevator(char *t1, char *t2)
{
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(337, ng0);

LAB5:    xsi_set_current_line(338, ng0);
    t5 = (t1 + 11336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 11496);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t7 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(338, ng0);

LAB13:    xsi_set_current_line(339, ng0);
    t33 = (t1 + 11336);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 11496);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t39, (char)118, t35, 3, (char)118, t38, 3);
    goto LAB12;

}

static int sp_check_leakage(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(346, ng0);

LAB5:    xsi_set_current_line(347, ng0);
    t5 = (t1 + 11656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(347, ng0);

LAB9:    xsi_set_current_line(348, ng0);
    t14 = (t1 + 11816);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 2144);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t17, (char)118, t16, 3);
    goto LAB8;

}

static void Initial_104_0(char *t0)
{
    char t4[8];
    char t32[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;

LAB0:    t1 = (t0 + 12728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);

LAB4:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(107, ng0);

LAB6:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 12536);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 7336);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 7336);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7336);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t4) = 1;

LAB17:    t15 = (t4 + 4);
    t23 = *((unsigned int *)t15);
    t25 = (~(t23));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB16:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(109, ng0);

LAB21:    xsi_set_current_line(110, ng0);
    t24 = (t0 + 10056);
    t29 = (t24 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng8)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 8, t31, 32);
    t33 = (t0 + 10056);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 8);
    goto LAB20;

LAB22:    goto LAB1;

}

static void Initial_116_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 12976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);

LAB4:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 7176);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 7176);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 70000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 70000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 70000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 70000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 70000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 7496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 12784);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(230, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_234_2(char *t0)
{
    char t8[8];
    char t28[8];
    char t44[8];
    char t85[8];
    char t86[8];
    char t95[8];
    char t96[8];
    char t100[8];
    char t134[8];
    char t135[8];
    char t136[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;

LAB0:    t1 = (t0 + 13224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 13792);
    *((int *)t2) = 1;
    t3 = (t0 + 13256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(234, ng0);

LAB5:    xsi_set_current_line(237, ng0);
    t4 = (t0 + 7176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t0 + 8296);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng8)));
    memset(t28, 0, 8);
    t29 = (t26 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB13;

LAB10:    if (t40 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t28) = 1;

LAB13:    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t28);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t8 + 4);
    t49 = (t28 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB14;

LAB15:
LAB16:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 7176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB24;

LAB21:    if (t20 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t8) = 1;

LAB24:    t10 = (t0 + 8296);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t27 = (t25 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t27);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t27);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB28;

LAB25:    if (t40 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t28) = 1;

LAB28:    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t28);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t30 = (t8 + 4);
    t43 = (t28 + 4);
    t48 = (t44 + 4);
    t51 = *((unsigned int *)t30);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t48);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB29;

LAB30:
LAB31:    t58 = (t44 + 4);
    t77 = *((unsigned int *)t58);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4056U);
    t6 = *((char **)t5);
    t5 = (t0 + 3896U);
    t7 = *((char **)t5);
    t5 = (t0 + 13032);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t5, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t23 = (t0 + 10216);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 16);
    t24 = (t0 + 10376);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 16);
    t25 = (t0 + 10536);
    xsi_vlogvar_assign_value(t25, t7, 0, 0, 3);

LAB38:    t26 = (t0 + 13128);
    t27 = *((char **)t26);
    t29 = (t27 + 80U);
    t30 = *((char **)t29);
    t43 = (t30 + 272U);
    t48 = *((char **)t43);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t68 = ((int  (*)(char *, char *))t50)(t0, t27);

LAB40:    if (t68 != 0)
        goto LAB41;

LAB36:    t27 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t27);

LAB37:    t58 = (t0 + 13128);
    t59 = *((char **)t58);
    t58 = (t0 + 848);
    t76 = (t0 + 13032);
    t82 = 0;
    xsi_delete_subprogram_invocation(t58, t59, t0, t76, t82);
    xsi_set_current_line(247, ng0);
    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4056U);
    t6 = *((char **)t5);
    t5 = (t0 + 3896U);
    t7 = *((char **)t5);
    t5 = (t0 + 4376U);
    t9 = *((char **)t5);
    t5 = (t0 + 13032);
    t10 = (t0 + 1280);
    t23 = xsi_create_subprogram_invocation(t5, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t23);
    t24 = (t0 + 10696);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 16);
    t25 = (t0 + 10856);
    xsi_vlogvar_assign_value(t25, t6, 0, 0, 16);
    t26 = (t0 + 11016);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 3);
    t27 = (t0 + 11176);
    xsi_vlogvar_assign_value(t27, t9, 0, 0, 8);

LAB44:    t29 = (t0 + 13128);
    t30 = *((char **)t29);
    t43 = (t30 + 80U);
    t48 = *((char **)t43);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t58 = (t50 + 0U);
    t59 = *((char **)t58);
    t68 = ((int  (*)(char *, char *))t59)(t0, t30);

LAB46:    if (t68 != 0)
        goto LAB47;

LAB42:    t30 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t30);

LAB43:    t76 = (t0 + 13128);
    t82 = *((char **)t76);
    t76 = (t0 + 1280);
    t83 = (t0 + 13032);
    t84 = 0;
    xsi_delete_subprogram_invocation(t76, t82, t0, t83, t84);
    xsi_set_current_line(248, ng0);
    t2 = (t0 + 9576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3896U);
    t6 = *((char **)t5);
    t5 = (t0 + 13032);
    t7 = (t0 + 1712);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 11336);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);
    t23 = (t0 + 11496);
    xsi_vlogvar_assign_value(t23, t6, 0, 0, 3);

LAB50:    t24 = (t0 + 13128);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t29 = (t27 + 272U);
    t30 = *((char **)t29);
    t43 = (t30 + 0U);
    t48 = *((char **)t43);
    t68 = ((int  (*)(char *, char *))t48)(t0, t25);

LAB52:    if (t68 != 0)
        goto LAB53;

LAB48:    t25 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t25);

LAB49:    t49 = (t0 + 13128);
    t50 = *((char **)t49);
    t49 = (t0 + 1712);
    t58 = (t0 + 13032);
    t59 = 0;
    xsi_delete_subprogram_invocation(t49, t50, t0, t58, t59);
    xsi_set_current_line(249, ng0);
    t2 = (t0 + 7976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 13032);
    t10 = (t0 + 2144);
    t23 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t23);
    t24 = (t0 + 11656);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    t25 = (t0 + 11816);
    xsi_vlogvar_assign_value(t25, t7, 0, 0, 3);

LAB56:    t26 = (t0 + 13128);
    t27 = *((char **)t26);
    t29 = (t27 + 80U);
    t30 = *((char **)t29);
    t43 = (t30 + 272U);
    t48 = *((char **)t43);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t68 = ((int  (*)(char *, char *))t50)(t0, t27);

LAB58:    if (t68 != 0)
        goto LAB59;

LAB54:    t27 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t27);

LAB55:    t58 = (t0 + 13128);
    t59 = *((char **)t58);
    t58 = (t0 + 2144);
    t76 = (t0 + 13032);
    t82 = 0;
    xsi_delete_subprogram_invocation(t58, t59, t0, t76, t82);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 8296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB63;

LAB60:    if (t20 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t8) = 1;

LAB63:    t10 = (t0 + 7176);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    t27 = (t25 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t27);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t27);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB67;

LAB64:    if (t40 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t28) = 1;

LAB67:    t45 = *((unsigned int *)t8);
    t46 = *((unsigned int *)t28);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t30 = (t8 + 4);
    t43 = (t28 + 4);
    t48 = (t44 + 4);
    t51 = *((unsigned int *)t30);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t48);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB68;

LAB69:
LAB70:    t58 = (t44 + 4);
    t77 = *((unsigned int *)t58);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(261, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 10056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t4, 8);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 7496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 12);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 15U);
    t7 = (t0 + 7496);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t28, 0, 8);
    t23 = (t28 + 4);
    t24 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 8);
    *((unsigned int *)t28) = t18;
    t19 = *((unsigned int *)t24);
    t20 = (t19 >> 8);
    *((unsigned int *)t23) = t20;
    t21 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t21 & 15U);
    t22 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t22 & 15U);
    t25 = (t0 + 7496);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t44, 0, 8);
    t29 = (t44 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 4);
    *((unsigned int *)t44) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 4);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t35 & 15U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 15U);
    t43 = (t0 + 7496);
    t48 = (t43 + 56U);
    t49 = *((char **)t48);
    memset(t85, 0, 8);
    t50 = (t85 + 4);
    t58 = (t49 + 4);
    t37 = *((unsigned int *)t49);
    t38 = (t37 >> 0);
    *((unsigned int *)t85) = t38;
    t39 = *((unsigned int *)t58);
    t40 = (t39 >> 0);
    *((unsigned int *)t50) = t40;
    t41 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t41 & 15U);
    t42 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t42 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng21, 5, t0, (char)118, t8, 4, (char)118, t28, 4, (char)118, t44, 4, (char)118, t85, 4);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 7656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 7816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 7976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)118, t4, 1);
    xsi_set_current_line(267, ng0);
    t2 = (t0 + 8136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)118, t4, 3);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 6136U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 6296U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng27, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 6456U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng28, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 6616U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng29, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 6776U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 5816U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng31, 2, t0, (char)118, t3, 3);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 5976U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(279, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng34)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB95;

LAB92:    if (t20 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t44) = 1;

LAB95:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t7) != 0)
        goto LAB98;

LAB99:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB100;

LAB101:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t10) > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t28) > 0)
        goto LAB106;

LAB107:    memcpy(t8, t24, 8);

LAB108:    t25 = (t0 + 3736U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 3736U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 3736U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 3736U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 3736U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 3736U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 3736U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 3736U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng33, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng36)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB112;

LAB109:    if (t20 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t44) = 1;

LAB112:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t7) != 0)
        goto LAB115;

LAB116:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB117;

LAB118:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t10) > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t28) > 0)
        goto LAB123;

LAB124:    memcpy(t8, t24, 8);

LAB125:    t25 = (t0 + 3576U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 3576U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 3576U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 3576U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 3576U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 3576U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 3576U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 3576U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng35, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng38)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB129;

LAB126:    if (t20 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t44) = 1;

LAB129:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t7) != 0)
        goto LAB132;

LAB133:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB134;

LAB135:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t10) > 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t28) > 0)
        goto LAB140;

LAB141:    memcpy(t8, t24, 8);

LAB142:    t25 = (t0 + 3416U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 3416U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 3416U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 3416U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 3416U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 3416U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 3416U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 3416U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng37, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng40)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB146;

LAB143:    if (t20 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t44) = 1;

LAB146:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t7) != 0)
        goto LAB149;

LAB150:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB151;

LAB152:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t10) > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t28) > 0)
        goto LAB157;

LAB158:    memcpy(t8, t24, 8);

LAB159:    t25 = (t0 + 3256U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 3256U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 3256U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 3256U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 3256U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 3256U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 3256U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 3256U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng39, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng42)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB163;

LAB160:    if (t20 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t44) = 1;

LAB163:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t7) != 0)
        goto LAB166;

LAB167:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB168;

LAB169:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t10) > 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t28) > 0)
        goto LAB174;

LAB175:    memcpy(t8, t24, 8);

LAB176:    t25 = (t0 + 3096U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 3096U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 3096U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 3096U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 3096U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 3096U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 3096U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 3096U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng41, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng44)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB180;

LAB177:    if (t20 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t44) = 1;

LAB180:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t7) != 0)
        goto LAB183;

LAB184:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB185;

LAB186:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t10) > 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t28) > 0)
        goto LAB191;

LAB192:    memcpy(t8, t24, 8);

LAB193:    t25 = (t0 + 2936U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 2936U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 2936U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 2936U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 2936U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 2936U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 2936U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 2936U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng43, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(285, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB197;

LAB194:    if (t20 != 0)
        goto LAB196;

LAB195:    *((unsigned int *)t44) = 1;

LAB197:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB198;

LAB199:    if (*((unsigned int *)t7) != 0)
        goto LAB200;

LAB201:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB202;

LAB203:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t10) > 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t28) > 0)
        goto LAB208;

LAB209:    memcpy(t8, t24, 8);

LAB210:    t25 = (t0 + 2776U);
    t26 = *((char **)t25);
    memset(t85, 0, 8);
    t25 = (t85 + 4);
    t27 = (t26 + 4);
    t45 = *((unsigned int *)t26);
    t46 = (t45 >> 28);
    *((unsigned int *)t85) = t46;
    t47 = *((unsigned int *)t27);
    t51 = (t47 >> 28);
    *((unsigned int *)t25) = t51;
    t52 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t52 & 15U);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t53 & 15U);
    t29 = (t0 + 2776U);
    t30 = *((char **)t29);
    memset(t86, 0, 8);
    t29 = (t86 + 4);
    t43 = (t30 + 4);
    t54 = *((unsigned int *)t30);
    t55 = (t54 >> 24);
    *((unsigned int *)t86) = t55;
    t56 = *((unsigned int *)t43);
    t57 = (t56 >> 24);
    *((unsigned int *)t29) = t57;
    t60 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t60 & 15U);
    t61 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t61 & 15U);
    t48 = (t0 + 2776U);
    t49 = *((char **)t48);
    memset(t95, 0, 8);
    t48 = (t95 + 4);
    t50 = (t49 + 4);
    t62 = *((unsigned int *)t49);
    t63 = (t62 >> 20);
    *((unsigned int *)t95) = t63;
    t64 = *((unsigned int *)t50);
    t65 = (t64 >> 20);
    *((unsigned int *)t48) = t65;
    t66 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t66 & 15U);
    t67 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t67 & 15U);
    t58 = (t0 + 2776U);
    t59 = *((char **)t58);
    memset(t96, 0, 8);
    t58 = (t96 + 4);
    t76 = (t59 + 4);
    t70 = *((unsigned int *)t59);
    t71 = (t70 >> 16);
    *((unsigned int *)t96) = t71;
    t72 = *((unsigned int *)t76);
    t73 = (t72 >> 16);
    *((unsigned int *)t58) = t73;
    t74 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t74 & 15U);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & 15U);
    t82 = (t0 + 2776U);
    t83 = *((char **)t82);
    memset(t100, 0, 8);
    t82 = (t100 + 4);
    t84 = (t83 + 4);
    t77 = *((unsigned int *)t83);
    t78 = (t77 >> 12);
    *((unsigned int *)t100) = t78;
    t79 = *((unsigned int *)t84);
    t80 = (t79 >> 12);
    *((unsigned int *)t82) = t80;
    t81 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t81 & 15U);
    t101 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t101 & 15U);
    t87 = (t0 + 2776U);
    t88 = *((char **)t87);
    memset(t134, 0, 8);
    t87 = (t134 + 4);
    t89 = (t88 + 4);
    t102 = *((unsigned int *)t88);
    t103 = (t102 >> 8);
    *((unsigned int *)t134) = t103;
    t107 = *((unsigned int *)t89);
    t108 = (t107 >> 8);
    *((unsigned int *)t87) = t108;
    t109 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t109 & 15U);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & 15U);
    t90 = (t0 + 2776U);
    t91 = *((char **)t90);
    memset(t135, 0, 8);
    t90 = (t135 + 4);
    t92 = (t91 + 4);
    t111 = *((unsigned int *)t91);
    t112 = (t111 >> 4);
    *((unsigned int *)t135) = t112;
    t113 = *((unsigned int *)t92);
    t116 = (t113 >> 4);
    *((unsigned int *)t90) = t116;
    t117 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t117 & 15U);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & 15U);
    t93 = (t0 + 2776U);
    t94 = *((char **)t93);
    memset(t136, 0, 8);
    t93 = (t136 + 4);
    t97 = (t94 + 4);
    t120 = *((unsigned int *)t94);
    t121 = (t120 >> 0);
    *((unsigned int *)t136) = t121;
    t122 = *((unsigned int *)t97);
    t124 = (t122 >> 0);
    *((unsigned int *)t93) = t124;
    t125 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t125 & 15U);
    t126 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t126 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng45, 10, t0, (char)118, t8, 1, (char)118, t85, 4, (char)118, t86, 4, (char)118, t95, 4, (char)118, t96, 4, (char)118, t100, 4, (char)118, t134, 4, (char)118, t135, 4, (char)118, t136, 4);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t44, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB214;

LAB211:    if (t20 != 0)
        goto LAB213;

LAB212:    *((unsigned int *)t44) = 1;

LAB214:    memset(t28, 0, 8);
    t7 = (t44 + 4);
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB215;

LAB216:    if (*((unsigned int *)t7) != 0)
        goto LAB217;

LAB218:    t10 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t10);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB219;

LAB220:    t39 = *((unsigned int *)t28);
    t40 = (~(t39));
    t41 = *((unsigned int *)t10);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t10) > 0)
        goto LAB223;

LAB224:    if (*((unsigned int *)t28) > 0)
        goto LAB225;

LAB226:    memcpy(t8, t24, 8);

LAB227:    xsi_vlogfile_write(1, 0, 0, ng46, 2, t0, (char)118, t8, 1);
    xsi_set_current_line(287, ng0);
    t2 = (t0 + 4056U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 12);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 12);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = (t0 + 4056U);
    t6 = *((char **)t5);
    memset(t28, 0, 8);
    t5 = (t28 + 4);
    t7 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 8);
    *((unsigned int *)t28) = t18;
    t19 = *((unsigned int *)t7);
    t20 = (t19 >> 8);
    *((unsigned int *)t5) = t20;
    t21 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t21 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t9 = (t0 + 4056U);
    t10 = *((char **)t9);
    memset(t44, 0, 8);
    t9 = (t44 + 4);
    t23 = (t10 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (t31 >> 4);
    *((unsigned int *)t44) = t32;
    t33 = *((unsigned int *)t23);
    t34 = (t33 >> 4);
    *((unsigned int *)t9) = t34;
    t35 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t35 & 15U);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & 15U);
    t24 = (t0 + 4056U);
    t25 = *((char **)t24);
    memset(t85, 0, 8);
    t24 = (t85 + 4);
    t26 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t38 = (t37 >> 0);
    *((unsigned int *)t85) = t38;
    t39 = *((unsigned int *)t26);
    t40 = (t39 >> 0);
    *((unsigned int *)t24) = t40;
    t41 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t41 & 15U);
    t42 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t42 & 15U);
    xsi_vlogfile_write(1, 0, 0, ng47, 5, t0, (char)118, t8, 4, (char)118, t28, 4, (char)118, t44, 4, (char)118, t85, 4);
    xsi_set_current_line(288, ng0);
    t2 = (t0 + 4216U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng48, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(289, ng0);
    t2 = (t0 + 4376U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng49, 2, t0, (char)118, t3, 8);
    xsi_set_current_line(290, ng0);
    xsi_vlogfile_write(1, 0, 0, ng50, 1, t0);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB12:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB13;

LAB14:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t8 + 4);
    t59 = (t28 + 4);
    t60 = *((unsigned int *)t8);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t28);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB16;

LAB17:    xsi_set_current_line(237, ng0);

LAB20:    xsi_set_current_line(238, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB19;

LAB23:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB24;

LAB27:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB28;

LAB29:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t44) = (t56 | t57);
    t49 = (t8 + 4);
    t50 = (t28 + 4);
    t60 = *((unsigned int *)t8);
    t61 = (~(t60));
    t62 = *((unsigned int *)t49);
    t63 = (~(t62));
    t64 = *((unsigned int *)t28);
    t65 = (~(t64));
    t66 = *((unsigned int *)t50);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB31;

LAB32:    xsi_set_current_line(242, ng0);

LAB35:    xsi_set_current_line(243, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB34;

LAB39:;
LAB41:    t26 = (t0 + 13224U);
    *((char **)t26) = &&LAB38;
    goto LAB1;

LAB45:;
LAB47:    t29 = (t0 + 13224U);
    *((char **)t29) = &&LAB44;
    goto LAB1;

LAB51:;
LAB53:    t24 = (t0 + 13224U);
    *((char **)t24) = &&LAB50;
    goto LAB1;

LAB57:;
LAB59:    t26 = (t0 + 13224U);
    *((char **)t26) = &&LAB56;
    goto LAB1;

LAB62:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB66:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB67;

LAB68:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t44) = (t56 | t57);
    t49 = (t8 + 4);
    t50 = (t28 + 4);
    t60 = *((unsigned int *)t8);
    t61 = (~(t60));
    t62 = *((unsigned int *)t49);
    t63 = (~(t62));
    t64 = *((unsigned int *)t28);
    t65 = (~(t64));
    t66 = *((unsigned int *)t50);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB70;

LAB71:    xsi_set_current_line(251, ng0);

LAB74:    xsi_set_current_line(252, ng0);
    t59 = (t0 + 3896U);
    t76 = *((char **)t59);
    t59 = (t0 + 9576);
    t82 = (t59 + 56U);
    t83 = *((char **)t82);
    t84 = ((char*)((ng8)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 32, t83, 3, t84, 32);
    memset(t86, 0, 8);
    t87 = (t76 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB76;

LAB75:    t88 = (t85 + 4);
    if (*((unsigned int *)t88) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t76) > *((unsigned int *)t85))
        goto LAB77;

LAB78:    t90 = (t0 + 3896U);
    t91 = *((char **)t90);
    t90 = (t0 + 9576);
    t92 = (t90 + 56U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng8)));
    memset(t95, 0, 8);
    xsi_vlog_unsigned_minus(t95, 32, t93, 3, t94, 32);
    memset(t96, 0, 8);
    t97 = (t91 + 4);
    if (*((unsigned int *)t97) != 0)
        goto LAB81;

LAB80:    t98 = (t95 + 4);
    if (*((unsigned int *)t98) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t91) < *((unsigned int *)t95))
        goto LAB82;

LAB83:    t101 = *((unsigned int *)t86);
    t102 = *((unsigned int *)t96);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t104 = (t86 + 4);
    t105 = (t96 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB85;

LAB86:
LAB87:    t128 = (t100 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t100);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB73;

LAB76:    t89 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB78;

LAB77:    *((unsigned int *)t86) = 1;
    goto LAB78;

LAB81:    t99 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB83;

LAB82:    *((unsigned int *)t96) = 1;
    goto LAB83;

LAB85:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t86 + 4);
    t115 = (t96 + 4);
    t116 = *((unsigned int *)t114);
    t117 = (~(t116));
    t118 = *((unsigned int *)t86);
    t119 = (t118 & t117);
    t120 = *((unsigned int *)t115);
    t121 = (~(t120));
    t122 = *((unsigned int *)t96);
    t123 = (t122 & t121);
    t124 = (~(t119));
    t125 = (~(t123));
    t126 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t126 & t124);
    t127 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t127 & t125);
    goto LAB87;

LAB88:    xsi_set_current_line(252, ng0);

LAB91:    goto LAB90;

LAB94:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t28) = 1;
    goto LAB99;

LAB98:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB99;

LAB100:    t23 = ((char*)((ng11)));
    goto LAB101;

LAB102:    t24 = ((char*)((ng9)));
    goto LAB103;

LAB104:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB108;

LAB106:    memcpy(t8, t23, 8);
    goto LAB108;

LAB111:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t28) = 1;
    goto LAB116;

LAB115:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB116;

LAB117:    t23 = ((char*)((ng11)));
    goto LAB118;

LAB119:    t24 = ((char*)((ng9)));
    goto LAB120;

LAB121:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB125;

LAB123:    memcpy(t8, t23, 8);
    goto LAB125;

LAB128:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB129;

LAB130:    *((unsigned int *)t28) = 1;
    goto LAB133;

LAB132:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB133;

LAB134:    t23 = ((char*)((ng11)));
    goto LAB135;

LAB136:    t24 = ((char*)((ng9)));
    goto LAB137;

LAB138:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB142;

LAB140:    memcpy(t8, t23, 8);
    goto LAB142;

LAB145:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB146;

LAB147:    *((unsigned int *)t28) = 1;
    goto LAB150;

LAB149:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB150;

LAB151:    t23 = ((char*)((ng11)));
    goto LAB152;

LAB153:    t24 = ((char*)((ng9)));
    goto LAB154;

LAB155:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB159;

LAB157:    memcpy(t8, t23, 8);
    goto LAB159;

LAB162:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB163;

LAB164:    *((unsigned int *)t28) = 1;
    goto LAB167;

LAB166:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB167;

LAB168:    t23 = ((char*)((ng11)));
    goto LAB169;

LAB170:    t24 = ((char*)((ng9)));
    goto LAB171;

LAB172:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB176;

LAB174:    memcpy(t8, t23, 8);
    goto LAB176;

LAB179:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB180;

LAB181:    *((unsigned int *)t28) = 1;
    goto LAB184;

LAB183:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB184;

LAB185:    t23 = ((char*)((ng11)));
    goto LAB186;

LAB187:    t24 = ((char*)((ng9)));
    goto LAB188;

LAB189:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB193;

LAB191:    memcpy(t8, t23, 8);
    goto LAB193;

LAB196:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB197;

LAB198:    *((unsigned int *)t28) = 1;
    goto LAB201;

LAB200:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB201;

LAB202:    t23 = ((char*)((ng11)));
    goto LAB203;

LAB204:    t24 = ((char*)((ng9)));
    goto LAB205;

LAB206:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB210;

LAB208:    memcpy(t8, t23, 8);
    goto LAB210;

LAB213:    t6 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB214;

LAB215:    *((unsigned int *)t28) = 1;
    goto LAB218;

LAB217:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB218;

LAB219:    t23 = ((char*)((ng11)));
    goto LAB220;

LAB221:    t24 = ((char*)((ng9)));
    goto LAB222;

LAB223:    xsi_vlog_unsigned_bit_combine(t8, 1, t23, 1, t24, 1);
    goto LAB227;

LAB225:    memcpy(t8, t23, 8);
    goto LAB227;

}

static void Always_298_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 13472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 13808);
    *((int *)t2) = 1;
    t3 = (t0 + 13504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(298, ng0);

LAB5:    xsi_set_current_line(299, ng0);
    t4 = (t0 + 7176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 8296);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t0 + 8456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(301, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 8616);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(302, ng0);
    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    t2 = (t0 + 8776);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = (t0 + 3256U);
    t3 = *((char **)t2);
    t2 = (t0 + 8936);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = (t0 + 3416U);
    t3 = *((char **)t2);
    t2 = (t0 + 9096);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 3576U);
    t3 = *((char **)t2);
    t2 = (t0 + 9256);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 3736U);
    t3 = *((char **)t2);
    t2 = (t0 + 9416);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = (t0 + 9576);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = (t0 + 4056U);
    t3 = *((char **)t2);
    t2 = (t0 + 9736);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 4216U);
    t3 = *((char **)t2);
    t2 = (t0 + 9896);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB2;

}


extern void work_m_07778738604132853327_1764046456_init()
{
	static char *pe[] = {(void *)Initial_104_0,(void *)Initial_116_1,(void *)Always_234_2,(void *)Always_298_3};
	static char *se[] = {(void *)sp_check_in,(void *)sp_check_out,(void *)sp_check_moving_elevator,(void *)sp_check_leakage};
	xsi_register_didat("work_m_07778738604132853327_1764046456", "isim/parking_lot_top_tb_isim_beh.exe.sim/work/m_07778738604132853327_1764046456.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
