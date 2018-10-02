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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Rosswell/Documents/460/Counter_Tramelblaze/debounce.v";
static int ng1[] = {999999, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {13U, 0U};
static unsigned int ng12[] = {15U, 0U};
static unsigned int ng13[] = {7U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1472);
    t5 = (t2 + 36U);
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
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 2692);
    t42 = (t41 + 32U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 2624);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_30_1(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2632);
    *((int *)t2) = 1;
    t3 = (t0 + 2168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 20, t4, 20, t5, 20);
    t11 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 20, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 20, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 20, 0LL);
    goto LAB10;

}

static void Always_39_2(char *t0)
{
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

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2640);
    *((int *)t2) = 1;
    t3 = (t0 + 2312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);

LAB8:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

}

static void Always_52_3(char *t0)
{
    char t9[8];
    char t10[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
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

LAB0:    t1 = (t0 + 2428U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2648);
    *((int *)t2) = 1;
    t3 = (t0 + 2456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 1, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t11) != 0)
        goto LAB28;

LAB29:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB30;

LAB31:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t19) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t10) > 0)
        goto LAB36;

LAB37:    memcpy(t9, t28, 8);

LAB38:    t29 = (t0 + 1380);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 1);
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t9, 1, 0, 3);
    goto LAB25;

LAB9:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t3) != 0)
        goto LAB41;

LAB42:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB43;

LAB44:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t7) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t10) > 0)
        goto LAB49;

LAB50:    memcpy(t9, t29, 8);

LAB51:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    t45 = (t0 + 1288);
    xsi_vlogvar_assign_value(t45, t9, 1, 0, 3);
    goto LAB25;

LAB11:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t3) != 0)
        goto LAB67;

LAB68:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB69;

LAB70:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t7) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t10) > 0)
        goto LAB75;

LAB76:    memcpy(t9, t29, 8);

LAB77:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    t45 = (t0 + 1288);
    xsi_vlogvar_assign_value(t45, t9, 1, 0, 3);
    goto LAB25;

LAB13:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t3) != 0)
        goto LAB93;

LAB94:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB95;

LAB96:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t7) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t10) > 0)
        goto LAB101;

LAB102:    memcpy(t9, t29, 8);

LAB103:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    t45 = (t0 + 1288);
    xsi_vlogvar_assign_value(t45, t9, 1, 0, 3);
    goto LAB25;

LAB15:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t3) != 0)
        goto LAB119;

LAB120:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB121;

LAB122:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t7) > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t10) > 0)
        goto LAB127;

LAB128:    memcpy(t9, t12, 8);

LAB129:    t18 = (t0 + 1380);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 1);
    t19 = (t0 + 1288);
    xsi_vlogvar_assign_value(t19, t9, 1, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t3) != 0)
        goto LAB132;

LAB133:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB134;

LAB135:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t7) > 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t10) > 0)
        goto LAB140;

LAB141:    memcpy(t9, t31, 8);

LAB142:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    t45 = (t0 + 1288);
    xsi_vlogvar_assign_value(t45, t9, 1, 0, 3);
    goto LAB25;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t3) != 0)
        goto LAB158;

LAB159:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB160;

LAB161:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t7) > 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t10) > 0)
        goto LAB166;

LAB167:    memcpy(t9, t31, 8);

LAB168:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    t45 = (t0 + 1288);
    xsi_vlogvar_assign_value(t45, t9, 1, 0, 3);
    goto LAB25;

LAB21:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t3) != 0)
        goto LAB184;

LAB185:    t7 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB186;

LAB187:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t7) > 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t10) > 0)
        goto LAB192;

LAB193:    memcpy(t9, t31, 8);

LAB194:    t30 = (t0 + 1380);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    t45 = (t0 + 1288);
    xsi_vlogvar_assign_value(t45, t9, 1, 0, 3);
    goto LAB25;

LAB26:    *((unsigned int *)t10) = 1;
    goto LAB29;

LAB28:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB29;

LAB30:    t23 = ((char*)((ng4)));
    goto LAB31;

LAB32:    t28 = ((char*)((ng3)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t9, 4, t23, 4, t28, 4);
    goto LAB38;

LAB36:    memcpy(t9, t23, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB41:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB42;

LAB43:    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t12 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t26 & t25);
    t33 = (t27 & 1U);
    if (t33 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t11) != 0)
        goto LAB54;

LAB55:    t19 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t19);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB56;

LAB57:    t37 = *((unsigned int *)t32);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t19) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t32) > 0)
        goto LAB62;

LAB63:    memcpy(t31, t28, 8);

LAB64:    goto LAB44;

LAB45:    t29 = ((char*)((ng3)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t9, 4, t31, 4, t29, 4);
    goto LAB51;

LAB49:    memcpy(t9, t31, 8);
    goto LAB51;

LAB52:    *((unsigned int *)t32) = 1;
    goto LAB55;

LAB54:    t18 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB55;

LAB56:    t23 = ((char*)((ng5)));
    goto LAB57;

LAB58:    t28 = ((char*)((ng4)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t31, 4, t23, 4, t28, 4);
    goto LAB64;

LAB62:    memcpy(t31, t23, 8);
    goto LAB64;

LAB65:    *((unsigned int *)t10) = 1;
    goto LAB68;

LAB67:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB68;

LAB69:    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t12 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t26 & t25);
    t33 = (t27 & 1U);
    if (t33 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t11) != 0)
        goto LAB80;

LAB81:    t19 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t19);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB82;

LAB83:    t37 = *((unsigned int *)t32);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t19) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t32) > 0)
        goto LAB88;

LAB89:    memcpy(t31, t28, 8);

LAB90:    goto LAB70;

LAB71:    t29 = ((char*)((ng3)));
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t9, 4, t31, 4, t29, 4);
    goto LAB77;

LAB75:    memcpy(t9, t31, 8);
    goto LAB77;

LAB78:    *((unsigned int *)t32) = 1;
    goto LAB81;

LAB80:    t18 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB81;

LAB82:    t23 = ((char*)((ng6)));
    goto LAB83;

LAB84:    t28 = ((char*)((ng5)));
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t31, 4, t23, 4, t28, 4);
    goto LAB90;

LAB88:    memcpy(t31, t23, 8);
    goto LAB90;

LAB91:    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB93:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB94;

LAB95:    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    memset(t32, 0, 8);
    t11 = (t12 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t26 & t25);
    t33 = (t27 & 1U);
    if (t33 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t11) != 0)
        goto LAB106;

LAB107:    t19 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t19);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB108;

LAB109:    t37 = *((unsigned int *)t32);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t19) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t32) > 0)
        goto LAB114;

LAB115:    memcpy(t31, t28, 8);

LAB116:    goto LAB96;

LAB97:    t29 = ((char*)((ng3)));
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t9, 4, t31, 4, t29, 4);
    goto LAB103;

LAB101:    memcpy(t9, t31, 8);
    goto LAB103;

LAB104:    *((unsigned int *)t32) = 1;
    goto LAB107;

LAB106:    t18 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB107;

LAB108:    t23 = ((char*)((ng8)));
    goto LAB109;

LAB110:    t28 = ((char*)((ng6)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t31, 4, t23, 4, t28, 4);
    goto LAB116;

LAB114:    memcpy(t31, t23, 8);
    goto LAB116;

LAB117:    *((unsigned int *)t10) = 1;
    goto LAB120;

LAB119:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB120;

LAB121:    t11 = ((char*)((ng8)));
    goto LAB122;

LAB123:    t12 = ((char*)((ng9)));
    goto LAB124;

LAB125:    xsi_vlog_unsigned_bit_combine(t9, 4, t11, 4, t12, 4);
    goto LAB129;

LAB127:    memcpy(t9, t11, 8);
    goto LAB129;

LAB130:    *((unsigned int *)t10) = 1;
    goto LAB133;

LAB132:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB133;

LAB134:    t11 = ((char*)((ng8)));
    goto LAB135;

LAB136:    t12 = (t0 + 876U);
    t18 = *((char **)t12);
    memset(t32, 0, 8);
    t12 = (t18 + 4);
    t33 = *((unsigned int *)t12);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t12) != 0)
        goto LAB145;

LAB146:    t23 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB147;

LAB148:    t41 = *((unsigned int *)t32);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t23) > 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t32) > 0)
        goto LAB153;

LAB154:    memcpy(t31, t29, 8);

LAB155:    goto LAB137;

LAB138:    xsi_vlog_unsigned_bit_combine(t9, 4, t11, 4, t31, 4);
    goto LAB142;

LAB140:    memcpy(t9, t11, 8);
    goto LAB142;

LAB143:    *((unsigned int *)t32) = 1;
    goto LAB146;

LAB145:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB146;

LAB147:    t28 = ((char*)((ng11)));
    goto LAB148;

LAB149:    t29 = ((char*)((ng9)));
    goto LAB150;

LAB151:    xsi_vlog_unsigned_bit_combine(t31, 4, t28, 4, t29, 4);
    goto LAB155;

LAB153:    memcpy(t31, t28, 8);
    goto LAB155;

LAB156:    *((unsigned int *)t10) = 1;
    goto LAB159;

LAB158:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB159;

LAB160:    t11 = ((char*)((ng8)));
    goto LAB161;

LAB162:    t12 = (t0 + 876U);
    t18 = *((char **)t12);
    memset(t32, 0, 8);
    t12 = (t18 + 4);
    t33 = *((unsigned int *)t12);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t12) != 0)
        goto LAB171;

LAB172:    t23 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB173;

LAB174:    t41 = *((unsigned int *)t32);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t23) > 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t32) > 0)
        goto LAB179;

LAB180:    memcpy(t31, t29, 8);

LAB181:    goto LAB163;

LAB164:    xsi_vlog_unsigned_bit_combine(t9, 4, t11, 4, t31, 4);
    goto LAB168;

LAB166:    memcpy(t9, t11, 8);
    goto LAB168;

LAB169:    *((unsigned int *)t32) = 1;
    goto LAB172;

LAB171:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB172;

LAB173:    t28 = ((char*)((ng12)));
    goto LAB174;

LAB175:    t29 = ((char*)((ng11)));
    goto LAB176;

LAB177:    xsi_vlog_unsigned_bit_combine(t31, 4, t28, 4, t29, 4);
    goto LAB181;

LAB179:    memcpy(t31, t28, 8);
    goto LAB181;

LAB182:    *((unsigned int *)t10) = 1;
    goto LAB185;

LAB184:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB185;

LAB186:    t11 = ((char*)((ng8)));
    goto LAB187;

LAB188:    t12 = (t0 + 876U);
    t18 = *((char **)t12);
    memset(t32, 0, 8);
    t12 = (t18 + 4);
    t33 = *((unsigned int *)t12);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t12) != 0)
        goto LAB197;

LAB198:    t23 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB199;

LAB200:    t41 = *((unsigned int *)t32);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t23) > 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t32) > 0)
        goto LAB205;

LAB206:    memcpy(t31, t29, 8);

LAB207:    goto LAB189;

LAB190:    xsi_vlog_unsigned_bit_combine(t9, 4, t11, 4, t31, 4);
    goto LAB194;

LAB192:    memcpy(t9, t11, 8);
    goto LAB194;

LAB195:    *((unsigned int *)t32) = 1;
    goto LAB198;

LAB197:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB198;

LAB199:    t28 = ((char*)((ng3)));
    goto LAB200;

LAB201:    t29 = ((char*)((ng12)));
    goto LAB202;

LAB203:    xsi_vlog_unsigned_bit_combine(t31, 4, t28, 4, t29, 4);
    goto LAB207;

LAB205:    memcpy(t31, t28, 8);
    goto LAB207;

}


extern void work_m_00000000001004200444_1832158028_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Always_30_1,(void *)Always_39_2,(void *)Always_52_3};
	xsi_register_didat("work_m_00000000001004200444_1832158028", "isim/Top_Level_tb_isim_beh.exe.sim/work/m_00000000001004200444_1832158028.didat");
	xsi_register_executes(pe);
}
