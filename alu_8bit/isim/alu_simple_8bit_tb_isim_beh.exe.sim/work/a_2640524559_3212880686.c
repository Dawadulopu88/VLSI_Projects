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
static const char *ng0 = "Function b2s ended without a return statement";
static const char *ng1 = "/home/ise/VLSI/computer/Computer_22201088/alu_simple_8bit_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1331119578910941685_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342005737211399_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342006247660547_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1331342006639014477_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1338682107848933845_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_4758460051581457611_1035706684(char *, char *, char *, char *);


unsigned char work_a_2640524559_3212880686_sub_9052814149481224075_3057020925(char *t1, unsigned char t2)
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

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void work_a_2640524559_3212880686_p_0(char *t0)
{
    char t37[16];
    char t46[16];
    char t47[16];
    char t48[16];
    char t49[16];
    char t50[16];
    char t53[16];
    char t58[16];
    char t60[16];
    char t63[16];
    char t68[16];
    char t73[16];
    char t75[16];
    char t78[16];
    char t84[16];
    char t89[16];
    char t91[16];
    char t94[16];
    char t100[16];
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
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    int t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    int t29;
    unsigned char t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    int t35;
    unsigned char t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    int64 t45;
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
    char *t83;
    char *t85;
    char *t86;
    char *t88;
    char *t90;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    int t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng1);
    t2 = (t0 + 7260);
    *((int *)t2) = 0;
    t3 = (t0 + 7264);
    *((int *)t3) = 7;
    t4 = 0;
    t5 = 7;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(77, ng1);
    t2 = (t0 + 7309);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 2968U);
    t10 = *((char **)t7);
    t4 = *((int *)t10);
    t7 = xsi_int_to_mem(t4);
    t11 = xsi_string_variable_get_image(t37, t6, t7);
    t20 = ((STD_STANDARD) + 984);
    t23 = (t47 + 0U);
    t28 = (t23 + 0U);
    *((int *)t28) = 1;
    t28 = (t23 + 4U);
    *((int *)t28) = 15;
    t28 = (t23 + 8U);
    *((int *)t28) = 1;
    t5 = (15 - 1);
    t43 = (t5 * 1);
    t43 = (t43 + 1);
    t28 = (t23 + 12U);
    *((unsigned int *)t28) = t43;
    t17 = xsi_base_array_concat(t17, t46, t20, (char)97, t2, t47, (char)97, t11, t37, (char)101);
    t28 = (t0 + 7324);
    t38 = ((STD_STANDARD) + 984);
    t39 = (t49 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 9;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t8 = (9 - 1);
    t43 = (t8 * 1);
    t43 = (t43 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t43;
    t34 = xsi_base_array_concat(t34, t48, t38, (char)97, t17, t46, (char)97, t28, t49, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t41 = (t0 + 2848U);
    t42 = *((char **)t41);
    t9 = *((int *)t42);
    t41 = xsi_int_to_mem(t9);
    t51 = xsi_string_variable_get_image(t50, t40, t41);
    t54 = ((STD_STANDARD) + 984);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t34, t48, (char)97, t51, t50, (char)101);
    t55 = (t0 + 7333);
    t59 = ((STD_STANDARD) + 984);
    t61 = (t60 + 0U);
    t62 = (t61 + 0U);
    *((int *)t62) = 1;
    t62 = (t61 + 4U);
    *((int *)t62) = 7;
    t62 = (t61 + 8U);
    *((int *)t62) = 1;
    t12 = (7 - 1);
    t43 = (t12 * 1);
    t43 = (t43 + 1);
    t62 = (t61 + 12U);
    *((unsigned int *)t62) = t43;
    t57 = xsi_base_array_concat(t57, t58, t59, (char)97, t52, t53, (char)97, t55, t60, (char)101);
    t62 = (t37 + 12U);
    t43 = *((unsigned int *)t62);
    t44 = (15U + t43);
    t103 = (t44 + 9U);
    t64 = (t50 + 12U);
    t105 = *((unsigned int *)t64);
    t106 = (t103 + t105);
    t107 = (t106 + 7U);
    xsi_report(t57, t107, (unsigned char)0);
    xsi_set_current_line(79, ng1);

LAB75:    *((char **)t1) = &&LAB76;

LAB1:    return;
LAB5:    xsi_set_current_line(40, ng1);
    t6 = (t0 + 7268);
    *((int *)t6) = 0;
    t7 = (t0 + 7272);
    *((int *)t7) = 255;
    t8 = 0;
    t9 = 255;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:
LAB6:    t2 = (t0 + 7260);
    t4 = *((int *)t2);
    t3 = (t0 + 7264);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB72:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 7260);
    *((int *)t6) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(41, ng1);
    t10 = (t0 + 7276);
    *((int *)t10) = 0;
    t11 = (t0 + 7280);
    *((int *)t11) = 255;
    t12 = 0;
    t13 = 255;

LAB12:    if (t12 <= t13)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 7268);
    t8 = *((int *)t2);
    t3 = (t0 + 7272);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB71:    t12 = (t8 + 1);
    t8 = t12;
    t6 = (t0 + 7268);
    *((int *)t6) = t8;
    goto LAB8;

LAB13:    xsi_set_current_line(42, ng1);
    t17 = (t0 + 7268);
    t18 = xsi_vhdl_mod(*((int *)t17), 7);
    t19 = (t18 == 0);
    if (t19 == 1)
        goto LAB25;

LAB26:    t20 = (t0 + 7268);
    t21 = *((int *)t20);
    t22 = (t21 > 250);
    t16 = t22;

LAB27:    if (t16 == 1)
        goto LAB22;

LAB23:    t23 = (t0 + 7268);
    t24 = *((int *)t23);
    t25 = (t24 < 4);
    t15 = t25;

LAB24:    if (t15 == 1)
        goto LAB19;

LAB20:    t14 = (unsigned char)0;

LAB21:    if (t14 != 0)
        goto LAB16;

LAB18:
LAB17:
LAB14:    t2 = (t0 + 7276);
    t12 = *((int *)t2);
    t3 = (t0 + 7280);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB15;

LAB70:    t18 = (t12 + 1);
    t12 = t18;
    t6 = (t0 + 7276);
    *((int *)t6) = t12;
    goto LAB12;

LAB16:    xsi_set_current_line(43, ng1);
    t38 = (t0 + 7268);
    t39 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t37, *((int *)t38), 8);
    t40 = (t0 + 2128U);
    t41 = *((char **)t40);
    t40 = (t41 + 0);
    t42 = (t37 + 12U);
    t43 = *((unsigned int *)t42);
    t43 = (t43 * 1U);
    memcpy(t40, t39, t43);
    xsi_set_current_line(43, ng1);
    t2 = (t0 + 7276);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t37, *((int *)t2), 8);
    t6 = (t0 + 2248U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t10 = (t37 + 12U);
    t43 = *((unsigned int *)t10);
    t43 = (t43 * 1U);
    memcpy(t6, t3, t43);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(45, ng1);
    t2 = (t0 + 7260);
    if (*((int *)t2) == 0)
        goto LAB35;

LAB43:    if (*((int *)t2) == 1)
        goto LAB36;

LAB44:    if (*((int *)t2) == 2)
        goto LAB37;

LAB45:    if (*((int *)t2) == 3)
        goto LAB38;

LAB46:    if (*((int *)t2) == 4)
        goto LAB39;

LAB47:    if (*((int *)t2) == 5)
        goto LAB40;

LAB48:    if (*((int *)t2) == 6)
        goto LAB41;

LAB49:
LAB42:    xsi_set_current_line(55, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t6 = (t0 + 2248U);
    t7 = *((char **)t6);
    t6 = (t0 + 7160U);
    t10 = ieee_p_1242562249_sub_1331342006247660547_1035706684(IEEE_P_1242562249, t37, t3, t2, t7, t6);
    t11 = (t0 + 2368U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    t20 = (t37 + 12U);
    t43 = *((unsigned int *)t20);
    t44 = (1U * t43);
    memcpy(t11, t10, t44);
    xsi_set_current_line(55, ng1);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t18;

LAB34:    xsi_set_current_line(58, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 4392);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng1);
    t2 = (t0 + 7260);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t37, *((int *)t2), 3);
    t6 = (t0 + 4456);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t3, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(61, ng1);
    t45 = (10 * 1000LL);
    t2 = (t0 + 3752);
    xsi_process_wait(t2, t45);

LAB59:    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB19:    t28 = (t0 + 7276);
    t29 = xsi_vhdl_mod(*((int *)t28), 11);
    t30 = (t29 == 0);
    if (t30 == 1)
        goto LAB31;

LAB32:    t31 = (t0 + 7276);
    t32 = *((int *)t31);
    t33 = (t32 > 250);
    t27 = t33;

LAB33:    if (t27 == 1)
        goto LAB28;

LAB29:    t34 = (t0 + 7276);
    t35 = *((int *)t34);
    t36 = (t35 < 4);
    t26 = t36;

LAB30:    t14 = t26;
    goto LAB21;

LAB22:    t15 = (unsigned char)1;
    goto LAB24;

LAB25:    t16 = (unsigned char)1;
    goto LAB27;

LAB28:    t26 = (unsigned char)1;
    goto LAB30;

LAB31:    t27 = (unsigned char)1;
    goto LAB33;

LAB35:    xsi_set_current_line(46, ng1);
    t3 = (t0 + 7268);
    t6 = (t0 + 7276);
    t18 = *((int *)t3);
    t21 = *((int *)t6);
    t24 = (t18 + t21);
    t7 = (t0 + 2728U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t24;
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t18 = *((int *)t3);
    t21 = xsi_vhdl_mod(t18, 256);
    t2 = (t0 + 2488U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t21;
    xsi_set_current_line(47, ng1);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t18 = *((int *)t3);
    t14 = (t18 > 255);
    if (t14 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB34;

LAB36:    xsi_set_current_line(48, ng1);
    t2 = (t0 + 7268);
    t3 = (t0 + 7276);
    t18 = *((int *)t2);
    t21 = *((int *)t3);
    t24 = (t18 - t21);
    t29 = (t24 + 256);
    t32 = xsi_vhdl_mod(t29, 256);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t32;
    xsi_set_current_line(49, ng1);
    t2 = (t0 + 7268);
    t3 = (t0 + 7276);
    t18 = *((int *)t2);
    t21 = *((int *)t3);
    t14 = (t18 < t21);
    if (t14 != 0)
        goto LAB54;

LAB56:
LAB55:    goto LAB34;

LAB37:    xsi_set_current_line(50, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t6 = (t0 + 2248U);
    t7 = *((char **)t6);
    t6 = (t0 + 7160U);
    t10 = ieee_p_1242562249_sub_1331342005737211399_1035706684(IEEE_P_1242562249, t37, t3, t2, t7, t6);
    t11 = (t0 + 2368U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    t20 = (t37 + 12U);
    t43 = *((unsigned int *)t20);
    t44 = (1U * t43);
    memcpy(t11, t10, t44);
    xsi_set_current_line(50, ng1);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t18;
    goto LAB34;

LAB38:    xsi_set_current_line(51, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t6 = (t0 + 2248U);
    t7 = *((char **)t6);
    t6 = (t0 + 7160U);
    t10 = ieee_p_1242562249_sub_1331119578910941685_1035706684(IEEE_P_1242562249, t37, t3, t2, t7, t6);
    t11 = (t0 + 2368U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    t20 = (t37 + 12U);
    t43 = *((unsigned int *)t20);
    t44 = (1U * t43);
    memcpy(t11, t10, t44);
    xsi_set_current_line(51, ng1);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t18;
    goto LAB34;

LAB39:    xsi_set_current_line(52, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t6 = (t0 + 2248U);
    t7 = *((char **)t6);
    t6 = (t0 + 7160U);
    t10 = ieee_p_1242562249_sub_1331342006639014477_1035706684(IEEE_P_1242562249, t37, t3, t2, t7, t6);
    t11 = (t0 + 2368U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    t20 = (t37 + 12U);
    t43 = *((unsigned int *)t20);
    t44 = (1U * t43);
    memcpy(t11, t10, t44);
    xsi_set_current_line(52, ng1);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t18;
    goto LAB34;

LAB40:    xsi_set_current_line(53, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t6 = ieee_p_1242562249_sub_4758460051581457611_1035706684(IEEE_P_1242562249, t37, t3, t2);
    t7 = (t0 + 2368U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    t11 = (t37 + 12U);
    t43 = *((unsigned int *)t11);
    t44 = (1U * t43);
    memcpy(t7, t6, t44);
    xsi_set_current_line(53, ng1);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t18;
    goto LAB34;

LAB41:    xsi_set_current_line(54, ng1);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t6 = (t0 + 2248U);
    t7 = *((char **)t6);
    t6 = (t0 + 7160U);
    t10 = ieee_p_1242562249_sub_1338682107848933845_1035706684(IEEE_P_1242562249, t37, t3, t2, t7, t6);
    t11 = (t0 + 2368U);
    t17 = *((char **)t11);
    t11 = (t17 + 0);
    t20 = (t37 + 12U);
    t43 = *((unsigned int *)t20);
    t44 = (1U * t43);
    memcpy(t11, t10, t44);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = t18;
    goto LAB34;

LAB50:;
LAB51:    xsi_set_current_line(47, ng1);
    t2 = (t0 + 2608U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = 1;
    goto LAB52;

LAB54:    xsi_set_current_line(49, ng1);
    t6 = (t0 + 2608U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(63, ng1);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t18 = *((int *)t3);
    t21 = (t18 + 1);
    t2 = (t0 + 2968U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t21;
    xsi_set_current_line(64, ng1);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7128U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t16 = (t18 != t21);
    if (t16 == 1)
        goto LAB67;

LAB68:    t6 = (t0 + 1832U);
    t10 = *((char **)t6);
    t19 = *((unsigned char *)t10);
    t6 = (t0 + 2608U);
    t11 = *((char **)t6);
    t24 = *((int *)t11);
    t22 = (t24 == 1);
    t25 = work_a_2640524559_3212880686_sub_9052814149481224075_3057020925(t0, t22);
    t26 = (t19 != t25);
    t15 = t26;

LAB69:    if (t15 == 1)
        goto LAB64;

LAB65:    t6 = (t0 + 1672U);
    t17 = *((char **)t6);
    t27 = *((unsigned char *)t17);
    t6 = (t0 + 2488U);
    t20 = *((char **)t6);
    t29 = *((int *)t20);
    t30 = (t29 == 0);
    t33 = work_a_2640524559_3212880686_sub_9052814149481224075_3057020925(t0, t30);
    t36 = (t27 != t33);
    t14 = t36;

LAB66:    if (t14 != 0)
        goto LAB61;

LAB63:
LAB62:    goto LAB17;

LAB58:    goto LAB57;

LAB60:    goto LAB58;

LAB61:    xsi_set_current_line(66, ng1);
    t6 = (t0 + 2848U);
    t23 = *((char **)t6);
    t32 = *((int *)t23);
    t35 = (t32 + 1);
    t6 = (t0 + 2848U);
    t28 = *((char **)t6);
    t6 = (t28 + 0);
    *((int *)t6) = t35;
    xsi_set_current_line(67, ng1);
    t2 = (t0 + 7284);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t0 + 7260);
    t10 = xsi_int_to_mem(*((int *)t7));
    t11 = xsi_string_variable_get_image(t37, t6, t10);
    t20 = ((STD_STANDARD) + 984);
    t23 = (t47 + 0U);
    t28 = (t23 + 0U);
    *((int *)t28) = 1;
    t28 = (t23 + 4U);
    *((int *)t28) = 9;
    t28 = (t23 + 8U);
    *((int *)t28) = 1;
    t18 = (9 - 1);
    t43 = (t18 * 1);
    t43 = (t43 + 1);
    t28 = (t23 + 12U);
    *((unsigned int *)t28) = t43;
    t17 = xsi_base_array_concat(t17, t46, t20, (char)97, t2, t47, (char)97, t11, t37, (char)101);
    t28 = (t0 + 7293);
    t38 = ((STD_STANDARD) + 984);
    t39 = (t49 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 3;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t21 = (3 - 1);
    t43 = (t21 * 1);
    t43 = (t43 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t43;
    t34 = xsi_base_array_concat(t34, t48, t38, (char)97, t17, t46, (char)97, t28, t49, (char)101);
    t40 = ((STD_STANDARD) + 384);
    t41 = (t0 + 7268);
    t42 = xsi_int_to_mem(*((int *)t41));
    t51 = xsi_string_variable_get_image(t50, t40, t42);
    t54 = ((STD_STANDARD) + 984);
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t34, t48, (char)97, t51, t50, (char)101);
    t55 = (t0 + 7296);
    t59 = ((STD_STANDARD) + 984);
    t61 = (t60 + 0U);
    t62 = (t61 + 0U);
    *((int *)t62) = 1;
    t62 = (t61 + 4U);
    *((int *)t62) = 3;
    t62 = (t61 + 8U);
    *((int *)t62) = 1;
    t24 = (3 - 1);
    t43 = (t24 * 1);
    t43 = (t43 + 1);
    t62 = (t61 + 12U);
    *((unsigned int *)t62) = t43;
    t57 = xsi_base_array_concat(t57, t58, t59, (char)97, t52, t53, (char)97, t55, t60, (char)101);
    t62 = ((STD_STANDARD) + 384);
    t64 = (t0 + 7276);
    t65 = xsi_int_to_mem(*((int *)t64));
    t66 = xsi_string_variable_get_image(t63, t62, t65);
    t69 = ((STD_STANDARD) + 984);
    t67 = xsi_base_array_concat(t67, t68, t69, (char)97, t57, t58, (char)97, t66, t63, (char)101);
    t70 = (t0 + 7299);
    t74 = ((STD_STANDARD) + 984);
    t76 = (t75 + 0U);
    t77 = (t76 + 0U);
    *((int *)t77) = 1;
    t77 = (t76 + 4U);
    *((int *)t77) = 5;
    t77 = (t76 + 8U);
    *((int *)t77) = 1;
    t29 = (5 - 1);
    t43 = (t29 * 1);
    t43 = (t43 + 1);
    t77 = (t76 + 12U);
    *((unsigned int *)t77) = t43;
    t72 = xsi_base_array_concat(t72, t73, t74, (char)97, t67, t68, (char)97, t70, t75, (char)101);
    t77 = ((STD_STANDARD) + 384);
    t79 = (t0 + 1352U);
    t80 = *((char **)t79);
    t79 = (t0 + 7128U);
    t32 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t80, t79);
    t81 = xsi_int_to_mem(t32);
    t82 = xsi_string_variable_get_image(t78, t77, t81);
    t85 = ((STD_STANDARD) + 984);
    t83 = xsi_base_array_concat(t83, t84, t85, (char)97, t72, t73, (char)97, t82, t78, (char)101);
    t86 = (t0 + 7304);
    t90 = ((STD_STANDARD) + 984);
    t92 = (t91 + 0U);
    t93 = (t92 + 0U);
    *((int *)t93) = 1;
    t93 = (t92 + 4U);
    *((int *)t93) = 5;
    t93 = (t92 + 8U);
    *((int *)t93) = 1;
    t35 = (5 - 1);
    t43 = (t35 * 1);
    t43 = (t43 + 1);
    t93 = (t92 + 12U);
    *((unsigned int *)t93) = t43;
    t88 = xsi_base_array_concat(t88, t89, t90, (char)97, t83, t84, (char)97, t86, t91, (char)101);
    t93 = ((STD_STANDARD) + 384);
    t95 = (t0 + 2488U);
    t96 = *((char **)t95);
    t97 = *((int *)t96);
    t95 = xsi_int_to_mem(t97);
    t98 = xsi_string_variable_get_image(t94, t93, t95);
    t101 = ((STD_STANDARD) + 984);
    t99 = xsi_base_array_concat(t99, t100, t101, (char)97, t88, t89, (char)97, t98, t94, (char)101);
    t102 = (t37 + 12U);
    t43 = *((unsigned int *)t102);
    t44 = (9U + t43);
    t103 = (t44 + 3U);
    t104 = (t50 + 12U);
    t105 = *((unsigned int *)t104);
    t106 = (t103 + t105);
    t107 = (t106 + 3U);
    t108 = (t63 + 12U);
    t109 = *((unsigned int *)t108);
    t110 = (t107 + t109);
    t111 = (t110 + 5U);
    t112 = (t78 + 12U);
    t113 = *((unsigned int *)t112);
    t114 = (t111 + t113);
    t115 = (t114 + 5U);
    t116 = (t94 + 12U);
    t117 = *((unsigned int *)t116);
    t118 = (t115 + t117);
    xsi_report(t99, t118, (unsigned char)2);
    goto LAB62;

LAB64:    t14 = (unsigned char)1;
    goto LAB66;

LAB67:    t15 = (unsigned char)1;
    goto LAB69;

LAB73:    goto LAB2;

LAB74:    goto LAB73;

LAB76:    goto LAB74;

}


extern void work_a_2640524559_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2640524559_3212880686_p_0};
	static char *se[] = {(void *)work_a_2640524559_3212880686_sub_9052814149481224075_3057020925};
	xsi_register_didat("work_a_2640524559_3212880686", "isim/alu_simple_8bit_tb_isim_beh.exe.sim/work/a_2640524559_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
