#include "005ef7ac_005eff40b.h"



void fn_005eff40(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(**(int **)(param_1 + 8) + (uint)*(ushort *)(param_1 + 4) * 0x278);
  bVar2 = *pbVar1;
  if (param_2 == 0) {
    bVar2 = bVar2 & 0xfe;
  }
  else {
    bVar2 = bVar2 | 1;
  }
  *pbVar1 = bVar2;
  return;
}



int fn_005eff2c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1c) + param_2 * 0x54;
}



void fn_005efef8(undefined4 *param_1)

{
  *param_1 = &DAT_00858dfc;
  if (param_1[1] != 0) {
    fn_00125f80();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



void fn_005efee0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_005e6268(*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar1 + 0x5c),iVar1 + 0x44,param_2);
  return;
}



void fn_005efe98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(iVar3 + 0x38);
  }
  else if (param_2 == 1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x40);
  }
  else if (param_2 == 2) {
    uVar2 = *(undefined4 *)(iVar3 + 0x3c);
  }
  uVar1 = fn_00117668(*(undefined4 *)(iVar3 + 0x60));
  fn_00117810(uVar2,uVar1,(int)*(char *)(iVar3 + 0x7d));
  return;
}


