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
static const char *ng0 = "Function to_s ended without a return statement";
static const char *ng1 = "Function b2s ended without a return statement";
static const char *ng2 = "/home/ise/VLSI/computer/Computer_22201088/alu8bit_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1331119578910941685_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342005737211399_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342006247660547_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342006639014477_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1338682107848933845_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_4758460051581457611_1035706684(char *, char *, char *, char *);


int work_a_1444978779_3212880686_sub_387541861881183365_3057020925(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;
    int t7;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 > 127);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = t2;

LAB1:    return t0;
LAB2:    t7 = (t2 - 256);
    t0 = t7;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

unsigned char work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    if (t2 != 0)
        goto LAB2;

LAB4:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)3;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void work_a_1444978779_3212880686_p_0(char *t0)
{
    char t29[16];
    char t39[16];
    char t41[16];
    char t44[16];
    char t45[16];
    char t48[16];
    char t53[16];
    char t58[16];
    char t60[16];
    char t63[16];
    char t68[16];
    char t73[16];
    char t75[16];
    char t78[16];
    char t83[16];
    char t88[16];
    char t90[16];
    char t94[16];
    char t101[16];
    char t106[16];
    char t108[16];
    char t112[16];
    char t118[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    int t30;
    int t31;
    unsigned char t32;
    unsigned char t33;
    int t34;
    int t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t40;
    int64 t42;
    unsigned char t43;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t57;
    char *t59;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t72;
    char *t74;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t87;
    char *t89;
    char *t91;
    char *t92;
    int t93;
    char *t95;
    char *t96;
    int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t105;
    char *t107;
    char *t109;
    char *t110;
    int t111;
    char *t113;
    char *t114;
    int t115;
    char *t116;
    char *t117;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng2);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(49, ng2);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(51, ng2);
    t2 = (t0 + 8762);
    *((int *)t2) = 0;
    t3 = (t0 + 8766);
    *((int *)t3) = 7;
    t4 = 0;
    t5 = 7;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(102, ng2);
    t2 = (t0 + 8827);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 3128U);
    t10 = *((char **)t7);
    t4 = *((int *)t10);
    t7 = xsi_int_to_mem(t4);
    t11 = xsi_string_variable_get_image(t29, t6, t7);
    t15 = ((STD_STANDARD) + 984);
    t18 = (t41 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 15;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (15 - 1);
    t22 = (t5 * 1);
    t22 = (t22 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t22;
    t14 = xsi_base_array_concat(t14, t39, t15, (char)97, t2, t41, (char)97, t11, t29, (char)101);
    t19 = (t0 + 8842);
    t28 = ((STD_STANDARD) + 984);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 1;
    t47 = (t46 + 4U);
    *((int *)t47) = 9;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t8 = (9 - 1);
    t22 = (t8 * 1);
    t22 = (t22 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t22;
    t27 = xsi_base_array_concat(t27, t44, t28, (char)97, t14, t39, (char)97, t19, t45, (char)101);
    t47 = ((STD_STANDARD) + 384);
    t49 = (t0 + 3008U);
    t50 = *((char **)t49);
    t9 = *((int *)t50);
    t49 = xsi_int_to_mem(t9);
    t51 = xsi_string_variable_get_image(t48, t47, t49);
    t54 = ((STD_STANDARD) + 984);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t27, t44, (char)97, t51, t48, (char)101);
    t55 = (t0 + 8851);
    t59 = ((STD_STANDARD) + 984);
    t61 = (t60 + 0U);
    t62 = (t61 + 0U);
    *((int *)t62) = 1;
    t62 = (t61 + 4U);
    *((int *)t62) = 7;
    t62 = (t61 + 8U);
    *((int *)t62) = 1;
    t12 = (7 - 1);
    t22 = (t12 * 1);
    t22 = (t22 + 1);
    t62 = (t61 + 12U);
    *((unsigned int *)t62) = t22;
    t57 = xsi_base_array_concat(t57, t58, t59, (char)97, t52, t53, (char)97, t55, t60, (char)101);
    t62 = (t29 + 12U);
    t22 = *((unsigned int *)t62);
    t23 = (15U + t22);
    t24 = (t23 + 9U);
    t64 = (t48 + 12U);
    t122 = *((unsigned int *)t64);
    t123 = (t24 + t122);
    t124 = (t123 + 7U);
    xsi_report(t57, t124, (unsigned char)0);
    xsi_set_current_line(104, ng2);

LAB68:    *((char **)t1) = &&LAB69;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng2);
    t6 = (t0 + 8770);
    *((int *)t6) = 0;
    t7 = (t0 + 8774);
    *((int *)t7) = 1;
    t8 = 0;
    t9 = 1;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:
LAB6:    t2 = (t0 + 8762);
    t4 = *((int *)t2);
    t3 = (t0 + 8766);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB65:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 8762);
    *((int *)t6) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(53, ng2);
    t10 = (t0 + 8778);
    *((int *)t10) = 0;
    t11 = (t0 + 8782);
    *((int *)t11) = 12;
    t12 = 0;
    t13 = 12;

LAB12:    if (t12 <= t13)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 8770);
    t8 = *((int *)t2);
    t3 = (t0 + 8774);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB64:    t12 = (t8 + 1);
    t8 = t12;
    t6 = (t0 + 8770);
    *((int *)t6) = t8;
    goto LAB8;

LAB13:    xsi_set_current_line(54, ng2);
    t14 = (t0 + 8786);
    *((int *)t14) = 0;
    t15 = (t0 + 8790);
    *((int *)t15) = 12;
    t16 = 0;
    t17 = 12;

LAB16:    if (t16 <= t17)
        goto LAB17;

LAB19:
LAB14:    t2 = (t0 + 8778);
    t12 = *((int *)t2);
    t3 = (t0 + 8782);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB15;

LAB63:    t16 = (t12 + 1);
    t12 = t16;
    t6 = (t0 + 8778);
    *((int *)t6) = t12;
    goto LAB12;

LAB17:    xsi_set_current_line(56, ng2);
    t18 = (t0 + 2288U);
    t19 = *((char **)t18);
    t18 = (t0 + 8778);
    t20 = *((int *)t18);
    t21 = (t20 - 0);
    t22 = (t21 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t25 = (t19 + t24);
    t26 = *((int *)t25);
    t27 = (t0 + 2408U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    *((int *)t27) = t26;
    xsi_set_current_line(56, ng2);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t2 = (t0 + 8786);
    t20 = *((int *)t2);
    t21 = (t20 - 0);
    t22 = (t21 * 1);
    t23 = (4U * t22);
    t24 = (0 + t23);
    t6 = (t3 + t24);
    t26 = *((int *)t6);
    t7 = (t0 + 2528U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t26;
    xsi_set_current_line(56, ng2);
    t2 = (t0 + 8770);
    t3 = (t0 + 2648U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    *((int *)t3) = *((int *)t2);
    xsi_set_current_line(57, ng2);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t29, t20, 8);
    t6 = (t0 + 3488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t10 = (t29 + 12U);
    t22 = *((unsigned int *)t10);
    t22 = (t22 * 1U);
    memcpy(t6, t2, t22);
    xsi_set_current_line(57, ng2);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t29, t20, 8);
    t6 = (t0 + 3608U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t10 = (t29 + 12U);
    t22 = *((unsigned int *)t10);
    t22 = (t22 * 1U);
    memcpy(t6, t2, t22);
    xsi_set_current_line(58, ng2);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(58, ng2);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(60, ng2);
    t2 = (t0 + 8762);
    if (*((int *)t2) == 0)
        goto LAB21;

LAB29:    if (*((int *)t2) == 1)
        goto LAB22;

LAB30:    if (*((int *)t2) == 2)
        goto LAB23;

LAB31:    if (*((int *)t2) == 3)
        goto LAB24;

LAB32:    if (*((int *)t2) == 4)
        goto LAB25;

LAB33:    if (*((int *)t2) == 5)
        goto LAB26;

LAB34:    if (*((int *)t2) == 6)
        goto LAB27;

LAB35:
LAB28:    xsi_set_current_line(76, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t6 = (t0 + 3608U);
    t7 = *((char **)t6);
    t6 = (t0 + 8576U);
    t10 = ieee_p_1242562249_sub_1331342006247660547_1035706684(IEEE_P_1242562249, t29, t3, t2, t7, t6);
    t11 = (t0 + 3728U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    t15 = (t29 + 12U);
    t22 = *((unsigned int *)t15);
    t23 = (1U * t22);
    memcpy(t11, t10, t23);
    xsi_set_current_line(76, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t20;

LAB20:    xsi_set_current_line(79, ng2);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t32 = (t20 == 0);
    t33 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t32);
    t2 = (t0 + 2888U);
    t6 = *((char **)t2);
    t21 = *((int *)t6);
    t36 = (t21 >= 128);
    t37 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t36);
    t7 = ((IEEE_P_2592010699) + 4000);
    t2 = xsi_base_array_concat(t2, t29, t7, (char)99, t33, (char)99, t37, (char)101);
    t10 = (t0 + 3368U);
    t11 = *((char **)t10);
    t38 = *((unsigned char *)t11);
    t14 = ((IEEE_P_2592010699) + 4000);
    t10 = xsi_base_array_concat(t10, t39, t14, (char)97, t2, t29, (char)99, t38, (char)101);
    t15 = (t0 + 3248U);
    t18 = *((char **)t15);
    t40 = *((unsigned char *)t18);
    t19 = ((IEEE_P_2592010699) + 4000);
    t15 = xsi_base_array_concat(t15, t41, t19, (char)97, t10, t39, (char)99, t40, (char)101);
    t25 = (t0 + 3848U);
    t27 = *((char **)t25);
    t25 = (t27 + 0);
    t22 = (1U + 1U);
    t23 = (t22 + 1U);
    t24 = (t23 + 1U);
    memcpy(t25, t15, t24);
    xsi_set_current_line(81, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 5208);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng2);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 5272);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng2);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t32 = (t20 == 1);
    t33 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t32);
    t2 = (t0 + 5336);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng2);
    t2 = (t0 + 8762);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t29, *((int *)t2), 3);
    t6 = (t0 + 5400);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t3, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(85, ng2);
    t42 = (10 * 1000LL);
    t2 = (t0 + 4632);
    xsi_process_wait(t2, t42);

LAB45:    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB18:    t2 = (t0 + 8786);
    t16 = *((int *)t2);
    t3 = (t0 + 8790);
    t17 = *((int *)t3);
    if (t16 == t17)
        goto LAB19;

LAB62:    t20 = (t16 + 1);
    t16 = t20;
    t6 = (t0 + 8786);
    *((int *)t6) = t16;
    goto LAB16;

LAB21:    xsi_set_current_line(62, ng2);
    t3 = (t0 + 2408U);
    t6 = *((char **)t3);
    t20 = *((int *)t6);
    t3 = (t0 + 2528U);
    t7 = *((char **)t3);
    t21 = *((int *)t7);
    t26 = (t20 + t21);
    t3 = (t0 + 2648U);
    t10 = *((char **)t3);
    t30 = *((int *)t10);
    t31 = (t26 + t30);
    t3 = (t0 + 2768U);
    t11 = *((char **)t3);
    t3 = (t11 + 0);
    *((int *)t3) = t31;
    xsi_set_current_line(62, ng2);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t21 = xsi_vhdl_mod(t20, 256);
    t2 = (t0 + 2888U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t21;
    xsi_set_current_line(63, ng2);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t32 = (t20 > 255);
    t33 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t32);
    t2 = (t0 + 3248U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((unsigned char *)t2) = t33;
    xsi_set_current_line(64, ng2);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t21 = work_a_1444978779_3212880686_sub_387541861881183365_3057020925(t0, t20);
    t2 = (t0 + 2528U);
    t6 = *((char **)t2);
    t26 = *((int *)t6);
    t30 = work_a_1444978779_3212880686_sub_387541861881183365_3057020925(t0, t26);
    t31 = (t21 + t30);
    t2 = (t0 + 2648U);
    t7 = *((char **)t2);
    t34 = *((int *)t7);
    t35 = (t31 + t34);
    t2 = (t0 + 2768U);
    t10 = *((char **)t2);
    t2 = (t10 + 0);
    *((int *)t2) = t35;
    xsi_set_current_line(65, ng2);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t33 = (t20 > 127);
    if (t33 == 1)
        goto LAB37;

LAB38:    t2 = (t0 + 2768U);
    t6 = *((char **)t2);
    t21 = *((int *)t6);
    t26 = (-(128));
    t36 = (t21 < t26);
    t32 = t36;

LAB39:    t37 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t32);
    t2 = (t0 + 3368U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((unsigned char *)t2) = t37;
    goto LAB20;

LAB22:    xsi_set_current_line(67, ng2);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t2 = (t0 + 2528U);
    t6 = *((char **)t2);
    t21 = *((int *)t6);
    t26 = (t20 - t21);
    t2 = (t0 + 2768U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t26;
    xsi_set_current_line(67, ng2);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t21 = (t20 + 256);
    t26 = xsi_vhdl_mod(t21, 256);
    t2 = (t0 + 2888U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t26;
    xsi_set_current_line(68, ng2);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t2 = (t0 + 2528U);
    t6 = *((char **)t2);
    t21 = *((int *)t6);
    t32 = (t20 < t21);
    t33 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t32);
    t2 = (t0 + 3248U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((unsigned char *)t2) = t33;
    xsi_set_current_line(69, ng2);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t21 = work_a_1444978779_3212880686_sub_387541861881183365_3057020925(t0, t20);
    t2 = (t0 + 2528U);
    t6 = *((char **)t2);
    t26 = *((int *)t6);
    t30 = work_a_1444978779_3212880686_sub_387541861881183365_3057020925(t0, t26);
    t31 = (t21 - t30);
    t2 = (t0 + 2768U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t31;
    xsi_set_current_line(70, ng2);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t33 = (t20 > 127);
    if (t33 == 1)
        goto LAB40;

LAB41:    t2 = (t0 + 2768U);
    t6 = *((char **)t2);
    t21 = *((int *)t6);
    t26 = (-(128));
    t36 = (t21 < t26);
    t32 = t36;

LAB42:    t37 = work_a_1444978779_3212880686_sub_9052814149481224075_3057020925(t0, t32);
    t2 = (t0 + 3368U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((unsigned char *)t2) = t37;
    goto LAB20;

LAB23:    xsi_set_current_line(71, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t6 = (t0 + 3608U);
    t7 = *((char **)t6);
    t6 = (t0 + 8576U);
    t10 = ieee_p_1242562249_sub_1331342005737211399_1035706684(IEEE_P_1242562249, t29, t3, t2, t7, t6);
    t11 = (t0 + 3728U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    t15 = (t29 + 12U);
    t22 = *((unsigned int *)t15);
    t23 = (1U * t22);
    memcpy(t11, t10, t23);
    xsi_set_current_line(71, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t20;
    goto LAB20;

LAB24:    xsi_set_current_line(72, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t6 = (t0 + 3608U);
    t7 = *((char **)t6);
    t6 = (t0 + 8576U);
    t10 = ieee_p_1242562249_sub_1331119578910941685_1035706684(IEEE_P_1242562249, t29, t3, t2, t7, t6);
    t11 = (t0 + 3728U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    t15 = (t29 + 12U);
    t22 = *((unsigned int *)t15);
    t23 = (1U * t22);
    memcpy(t11, t10, t23);
    xsi_set_current_line(72, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t20;
    goto LAB20;

LAB25:    xsi_set_current_line(73, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t6 = (t0 + 3608U);
    t7 = *((char **)t6);
    t6 = (t0 + 8576U);
    t10 = ieee_p_1242562249_sub_1331342006639014477_1035706684(IEEE_P_1242562249, t29, t3, t2, t7, t6);
    t11 = (t0 + 3728U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    t15 = (t29 + 12U);
    t22 = *((unsigned int *)t15);
    t23 = (1U * t22);
    memcpy(t11, t10, t23);
    xsi_set_current_line(73, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t20;
    goto LAB20;

LAB26:    xsi_set_current_line(74, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t6 = ieee_p_1242562249_sub_4758460051581457611_1035706684(IEEE_P_1242562249, t29, t3, t2);
    t7 = (t0 + 3728U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    t11 = (t29 + 12U);
    t22 = *((unsigned int *)t11);
    t23 = (1U * t22);
    memcpy(t7, t6, t23);
    xsi_set_current_line(74, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t20;
    goto LAB20;

LAB27:    xsi_set_current_line(75, ng2);
    t2 = (t0 + 3488U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t6 = (t0 + 3608U);
    t7 = *((char **)t6);
    t6 = (t0 + 8576U);
    t10 = ieee_p_1242562249_sub_1338682107848933845_1035706684(IEEE_P_1242562249, t29, t3, t2, t7, t6);
    t11 = (t0 + 3728U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    t15 = (t29 + 12U);
    t22 = *((unsigned int *)t15);
    t23 = (1U * t22);
    memcpy(t11, t10, t23);
    xsi_set_current_line(75, ng2);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t0 + 8576U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t20;
    goto LAB20;

LAB36:;
LAB37:    t32 = (unsigned char)1;
    goto LAB39;

LAB40:    t32 = (unsigned char)1;
    goto LAB42;

LAB43:    xsi_set_current_line(87, ng2);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t20 = *((int *)t3);
    t21 = (t20 + 1);
    t2 = (t0 + 3128U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t21;
    xsi_set_current_line(88, ng2);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 8512U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2888U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t36 = (t20 != t21);
    if (t36 == 1)
        goto LAB53;

LAB54:    t6 = (t0 + 1672U);
    t10 = *((char **)t6);
    t37 = *((unsigned char *)t10);
    t6 = (t0 + 3248U);
    t11 = *((char **)t6);
    t38 = *((unsigned char *)t11);
    t40 = (t37 != t38);
    t33 = t40;

LAB55:    if (t33 == 1)
        goto LAB50;

LAB51:    t6 = (t0 + 1992U);
    t14 = *((char **)t6);
    t6 = (t0 + 3848U);
    t15 = *((char **)t6);
    t43 = 1;
    if (4U == 4U)
        goto LAB56;

LAB57:    t43 = 0;

LAB58:    t32 = (!(t43));

LAB52:    if (t32 != 0)
        goto LAB47;

LAB49:
LAB48:    goto LAB18;

LAB44:    goto LAB43;

LAB46:    goto LAB44;

LAB47:    xsi_set_current_line(90, ng2);
    t19 = (t0 + 3008U);
    t25 = *((char **)t19);
    t26 = *((int *)t25);
    t30 = (t26 + 1);
    t19 = (t0 + 3008U);
    t27 = *((char **)t19);
    t19 = (t27 + 0);
    *((int *)t19) = t30;
    xsi_set_current_line(91, ng2);
    t2 = (t0 + 8794);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 8762);
    t10 = xsi_int_to_mem(*((int *)t7));
    t11 = xsi_string_variable_get_image(t29, t6, t10);
    t15 = ((STD_STANDARD) + 984);
    t18 = (t41 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 8;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (8 - 1);
    t22 = (t20 * 1);
    t22 = (t22 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t22;
    t14 = xsi_base_array_concat(t14, t39, t15, (char)97, t2, t41, (char)97, t11, t29, (char)101);
    t19 = (t0 + 8802);
    t28 = ((STD_STANDARD) + 984);
    t46 = (t45 + 0U);
    t47 = (t46 + 0U);
    *((int *)t47) = 1;
    t47 = (t46 + 4U);
    *((int *)t47) = 5;
    t47 = (t46 + 8U);
    *((int *)t47) = 1;
    t21 = (5 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t47 = (t46 + 12U);
    *((unsigned int *)t47) = t22;
    t27 = xsi_base_array_concat(t27, t44, t28, (char)97, t14, t39, (char)97, t19, t45, (char)101);
    t47 = ((STD_STANDARD) + 384);
    t49 = (t0 + 2648U);
    t50 = *((char **)t49);
    t26 = *((int *)t50);
    t49 = xsi_int_to_mem(t26);
    t51 = xsi_string_variable_get_image(t48, t47, t49);
    t54 = ((STD_STANDARD) + 984);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t27, t44, (char)97, t51, t48, (char)101);
    t55 = (t0 + 8807);
    t59 = ((STD_STANDARD) + 984);
    t61 = (t60 + 0U);
    t62 = (t61 + 0U);
    *((int *)t62) = 1;
    t62 = (t61 + 4U);
    *((int *)t62) = 3;
    t62 = (t61 + 8U);
    *((int *)t62) = 1;
    t30 = (3 - 1);
    t22 = (t30 * 1);
    t22 = (t22 + 1);
    t62 = (t61 + 12U);
    *((unsigned int *)t62) = t22;
    t57 = xsi_base_array_concat(t57, t58, t59, (char)97, t52, t53, (char)97, t55, t60, (char)101);
    t62 = ((STD_STANDARD) + 384);
    t64 = (t0 + 2408U);
    t65 = *((char **)t64);
    t31 = *((int *)t65);
    t64 = xsi_int_to_mem(t31);
    t66 = xsi_string_variable_get_image(t63, t62, t64);
    t69 = ((STD_STANDARD) + 984);
    t67 = xsi_base_array_concat(t67, t68, t69, (char)97, t57, t58, (char)97, t66, t63, (char)101);
    t70 = (t0 + 8810);
    t74 = ((STD_STANDARD) + 984);
    t76 = (t75 + 0U);
    t77 = (t76 + 0U);
    *((int *)t77) = 1;
    t77 = (t76 + 4U);
    *((int *)t77) = 3;
    t77 = (t76 + 8U);
    *((int *)t77) = 1;
    t34 = (3 - 1);
    t22 = (t34 * 1);
    t22 = (t22 + 1);
    t77 = (t76 + 12U);
    *((unsigned int *)t77) = t22;
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t67, t68, (char)97, t70, t75, (char)101);
    t77 = ((STD_STANDARD) + 384);
    t79 = (t0 + 2528U);
    t80 = *((char **)t79);
    t35 = *((int *)t80);
    t79 = xsi_int_to_mem(t35);
    t81 = xsi_string_variable_get_image(t78, t77, t79);
    t84 = ((STD_STANDARD) + 984);
    t82 = xsi_base_array_concat(t82, t83, t84, (char)97, t72, t73, (char)97, t81, t78, (char)101);
    t85 = (t0 + 8813);
    t89 = ((STD_STANDARD) + 984);
    t91 = (t90 + 0U);
    t92 = (t91 + 0U);
    *((int *)t92) = 1;
    t92 = (t91 + 4U);
    *((int *)t92) = 7;
    t92 = (t91 + 8U);
    *((int *)t92) = 1;
    t93 = (7 - 1);
    t22 = (t93 * 1);
    t22 = (t22 + 1);
    t92 = (t91 + 12U);
    *((unsigned int *)t92) = t22;
    t87 = xsi_base_array_concat(t87, t88, t89, (char)97, t82, t83, (char)97, t85, t90, (char)101);
    t92 = ((STD_STANDARD) + 384);
    t95 = (t0 + 1352U);
    t96 = *((char **)t95);
    t95 = (t0 + 8512U);
    t97 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t96, t95);
    t98 = xsi_int_to_mem(t97);
    t99 = xsi_string_variable_get_image(t94, t92, t98);
    t102 = ((STD_STANDARD) + 984);
    t100 = xsi_base_array_concat(t100, t101, t102, (char)97, t87, t88, (char)97, t99, t94, (char)101);
    t103 = (t0 + 8820);
    t107 = ((STD_STANDARD) + 984);
    t109 = (t108 + 0U);
    t110 = (t109 + 0U);
    *((int *)t110) = 1;
    t110 = (t109 + 4U);
    *((int *)t110) = 7;
    t110 = (t109 + 8U);
    *((int *)t110) = 1;
    t111 = (7 - 1);
    t22 = (t111 * 1);
    t22 = (t22 + 1);
    t110 = (t109 + 12U);
    *((unsigned int *)t110) = t22;
    t105 = xsi_base_array_concat(t105, t106, t107, (char)97, t100, t101, (char)97, t103, t108, (char)101);
    t110 = ((STD_STANDARD) + 384);
    t113 = (t0 + 2888U);
    t114 = *((char **)t113);
    t115 = *((int *)t114);
    t113 = xsi_int_to_mem(t115);
    t116 = xsi_string_variable_get_image(t112, t110, t113);
    t119 = ((STD_STANDARD) + 984);
    t117 = xsi_base_array_concat(t117, t118, t119, (char)97, t105, t106, (char)97, t116, t112, (char)101);
    t120 = (t29 + 12U);
    t22 = *((unsigned int *)t120);
    t23 = (8U + t22);
    t24 = (t23 + 5U);
    t121 = (t48 + 12U);
    t122 = *((unsigned int *)t121);
    t123 = (t24 + t122);
    t124 = (t123 + 3U);
    t125 = (t63 + 12U);
    t126 = *((unsigned int *)t125);
    t127 = (t124 + t126);
    t128 = (t127 + 3U);
    t129 = (t78 + 12U);
    t130 = *((unsigned int *)t129);
    t131 = (t128 + t130);
    t132 = (t131 + 7U);
    t133 = (t94 + 12U);
    t134 = *((unsigned int *)t133);
    t135 = (t132 + t134);
    t136 = (t135 + 7U);
    t137 = (t112 + 12U);
    t138 = *((unsigned int *)t137);
    t139 = (t136 + t138);
    xsi_report(t117, t139, (unsigned char)2);
    goto LAB48;

LAB50:    t32 = (unsigned char)1;
    goto LAB52;

LAB53:    t33 = (unsigned char)1;
    goto LAB55;

LAB56:    t22 = 0;

LAB59:    if (t22 < 4U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t6 = (t14 + t22);
    t18 = (t15 + t22);
    if (*((unsigned char *)t6) != *((unsigned char *)t18))
        goto LAB57;

LAB61:    t22 = (t22 + 1);
    goto LAB59;

LAB66:    goto LAB2;

LAB67:    goto LAB66;

LAB69:    goto LAB67;

}


extern void work_a_1444978779_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1444978779_3212880686_p_0};
	static char *se[] = {(void *)work_a_1444978779_3212880686_sub_387541861881183365_3057020925,(void *)work_a_1444978779_3212880686_sub_9052814149481224075_3057020925};
	xsi_register_didat("work_a_1444978779_3212880686", "isim/alu8bit_tb_isim_beh.exe.sim/work/a_1444978779_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
