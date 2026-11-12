#include "00289518_00289cc0baba.h"



void fn_00289ad0(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_38 [36];
  
  if (param_3 == 0xf1) {
    param_3 = 0x270e;
  }
  else if (param_3 == 0xf2) {
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe;
    return;
  }
  iVar2 = fn_006e1ee8(param_2);
  fn_001028d4(auStack_38,s_w__04d_bflim_008c4ff5,param_3);
  piVar3 = (int *)fn_001924ec(param_1[3],*param_1);
  iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,auStack_38);
  if (*(int *)(iVar4 + 0x10) == 0) {
    bVar1 = *(byte *)(param_2 + 0x44) & 0xfe;
  }
  else {
    fn_0019501c(*(undefined4 *)(iVar2 + 0x78),iVar4);
    *(byte *)(iVar2 + 0x7c) = *(byte *)(iVar2 + 0x7c) & 0xf7;
    fn_0019fbb0(*(undefined4 *)(iVar2 + 0x78),0);
    *(byte *)(iVar2 + 0x7c) = *(byte *)(iVar2 + 0x7c) & 0xf7;
    bVar1 = *(byte *)(param_2 + 0x44) & 0xfe | 1;
  }
  *(byte *)(param_2 + 0x44) = bVar1;
  return;
}


