#include "00593dd0_00596038ba.h"



void fn_00595124(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005952cc(iVar1,param_1);
  return;
}



void fn_00595090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_005950f0,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    *(undefined **)(param_1 + 0xc4) = &DAT_0059508c;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



undefined4 * fn_00594be4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008450fc;
  puVar1[0x19] = &DAT_00859140;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return puVar1;
}


