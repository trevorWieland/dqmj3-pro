#include "single_00289bac_r.h"


extern undefined4 u_rom__data_Layout_flag_flag_arc_008c5002;

undefined4 fn_00289bac(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = fn_001481c8(param_2,u_rom__data_Layout_flag_flag_arc_008c5002,&DAT_008c5040,1,1);
  *piVar2 = iVar1;
  if (-1 < iVar1) {
    iVar1 = fn_001923e0(param_2,s_flag_bflyt_008c5042,1,1,0);
    piVar2[1] = iVar1;
    if (-1 < iVar1) {
      iVar1 = fn_00178f9c(param_2);
      piVar2[2] = iVar1;
      iVar1 = fn_001828f0(iVar1,&DAT_008c504d);
      if (iVar1 != 0) {
        *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      }
      piVar2[3] = param_2;
      return 1;
    }
  }
  return 0;
}


