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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000696425111_1236451890_init();
    work_m_00000000001349097790_2759085270_init();
    work_m_00000000003515478105_1832158028_init();
    work_m_00000000002707153165_2454040096_init();
    work_m_00000000000343063734_2582214024_init();
    work_m_00000000000478759783_2182062593_init();
    work_m_00000000003771540050_2927697330_init();
    work_m_00000000001864562687_2796870997_init();
    work_m_00000000002094130090_3458245300_init();
    work_m_00000000001100789982_3641386436_init();
    work_m_00000000003844552066_0107964981_init();
    work_m_00000000000307824536_1997765250_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000307824536_1997765250");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
