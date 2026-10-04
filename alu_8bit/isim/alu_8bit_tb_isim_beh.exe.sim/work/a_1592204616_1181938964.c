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
static const char *ng0 = "/home/ise/VLSI/computer/Computer_22201088/alu_8bit.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1592204616_1181938964_p_0(char *t0)
{
    char t11[16];
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10647);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB13:    t23 = (t0 + 10662);
    t25 = (t0 + 6784);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t23, 8U);
    xsi_driver_first_trans_fast(t25);

LAB2:    t30 = (t0 + 6624);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 10655);
    t12 = ((IEEE_P_2592010699) + 4000);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 6;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (6 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t10 = xsi_base_array_concat(t10, t11, t12, (char)97, t8, t13, (char)99, (unsigned char)3, (char)101);
    t17 = (7U + 1U);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    t15 = (t0 + 6784);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_size_not_matching(8U, t17, 0);
    goto LAB12;

LAB14:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_1(char *t0)
{
    char t6[16];
    char t8[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 10670);
    t3 = (t0 + 3752U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 6;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (6 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t3 = xsi_base_array_concat(t3, t6, t7, (char)97, t1, t8, (char)99, t5, (char)101);
    t12 = (7U + 1U);
    t13 = (8U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 6848);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 8U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t18 = (t0 + 6640);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t12, 0);
    goto LAB6;

}

static void work_a_1592204616_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6656);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 10677);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:    t15 = (t0 + 1512U);
    t16 = *((char **)t15);
    t15 = (t0 + 10680);
    t18 = 1;
    if (3U == 3U)
        goto LAB13;

LAB14:    t18 = 0;

LAB15:    if (t18 != 0)
        goto LAB11;

LAB12:
LAB19:    t29 = (t0 + 6976);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)2;
    xsi_driver_first_trans_fast(t29);

LAB2:    t34 = (t0 + 6672);
    *((int *)t34) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 6976);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    t22 = (t0 + 3752U);
    t23 = *((char **)t22);
    t24 = *((unsigned char *)t23);
    t22 = (t0 + 6976);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t24;
    xsi_driver_first_trans_fast(t22);
    goto LAB2;

LAB13:    t19 = 0;

LAB16:    if (t19 < 3U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t20 = (t16 + t19);
    t21 = (t15 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB14;

LAB18:    t19 = (t19 + 1);
    goto LAB16;

LAB20:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7040);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 10683);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 7104);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 6704);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 7104);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_1592204616_1181938964_init()
{
	static char *pe[] = {(void *)work_a_1592204616_1181938964_p_0,(void *)work_a_1592204616_1181938964_p_1,(void *)work_a_1592204616_1181938964_p_2,(void *)work_a_1592204616_1181938964_p_3,(void *)work_a_1592204616_1181938964_p_4,(void *)work_a_1592204616_1181938964_p_5};
	xsi_register_didat("work_a_1592204616_1181938964", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1592204616_1181938964.didat");
	xsi_register_executes(pe);
}
