#include "003e6b8c_003e783cba.h"



void fn_003e7384(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00833360;
  fn_002feef8(param_1[0x3b]);
  fn_00397a78(param_1);
  fn_002feef8();
  return;
}



void fn_003e734c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &PTR_LAB_00833360;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  return;
}



void fn_003e7084(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_c;
  
  uVar1 = fn_002ea524((int)*(short *)(param_2 + 0xa72));
  fn_002317d8(&local_c,uVar1,0);
  fn_0015b0dc(local_c);
  uVar1 = fn_0022f584((char *)&DAT_003e7158,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,0,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  if (local_c != &DAT_008f9cf4) {
    piVar2 = local_c + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_c + -3,local_c[-2] + 8,0);
    }
  }
  return;
}


