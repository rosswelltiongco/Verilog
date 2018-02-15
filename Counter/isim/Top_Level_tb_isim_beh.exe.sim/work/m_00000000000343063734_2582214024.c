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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Rosswell/Documents/Verilog/Counter/counter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_19_0(char *t0)
{
    char t13[8];
    char t46[8];
    char t64[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t65;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
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
        goto LAB8;

LAB9:
LAB10:    t36 = (t13 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;

LAB17:    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB19;

LAB18:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t46) = t25;
    t19 = (t3 + 4);
    t36 = (t13 + 4);
    t42 = (t46 + 4);
    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t36);
    t30 = (t26 | t27);
    *((unsigned int *)t42) = t30;
    t31 = *((unsigned int *)t42);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB20;

LAB21:
LAB22:    t45 = (t46 + 4);
    t56 = *((unsigned int *)t45);
    t57 = (~(t56));
    t58 = *((unsigned int *)t46);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB13:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(20, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB7;

LAB8:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB10;

LAB11:    xsi_set_current_line(21, ng0);
    t42 = (t0 + 1928);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 8, t44, 8, t45, 8);
    t47 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 8, 0LL);
    goto LAB13;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB19:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t18 | t20);
    goto LAB18;

LAB20:    t33 = *((unsigned int *)t46);
    t34 = *((unsigned int *)t42);
    *((unsigned int *)t46) = (t33 | t34);
    t43 = (t3 + 4);
    t44 = (t13 + 4);
    t35 = *((unsigned int *)t3);
    t37 = (~(t35));
    t38 = *((unsigned int *)t43);
    t39 = (~(t38));
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t28 = (t37 & t39);
    t29 = (t41 & t49);
    t50 = (~(t28));
    t51 = (~(t29));
    t52 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t52 & t50);
    t53 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t53 & t51);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & t50);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & t51);
    goto LAB22;

LAB23:    xsi_set_current_line(22, ng0);
    t47 = (t0 + 1928);
    t61 = (t47 + 56U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng2)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_minus(t64, 8, t62, 8, t63, 8);
    t65 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t65, t64, 0, 0, 8, 0LL);
    goto LAB25;

}


extern void work_m_00000000000343063734_2582214024_init()
{
	static char *pe[] = {(void *)Always_19_0};
	xsi_register_didat("work_m_00000000000343063734_2582214024", "isim/Top_Level_tb_isim_beh.exe.sim/work/m_00000000000343063734_2582214024.didat");
	xsi_register_executes(pe);
}
