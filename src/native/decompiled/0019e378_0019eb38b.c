#include "0019e378_0019eb38b.h"



undefined4 fn_0019eb38(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  fn_00170704(param_1 + 0x44);
  iVar1 = param_1 + param_2 * 8;
  if (*(int *)(iVar1 + 0x34) != 0) {
    fn_0019f1b0();
  }
  if (*(int *)(iVar1 + 0x38) != 0) {
    fn_0019f1fc();
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  fn_0019ed20(&DAT_008f34bc,param_2,0);
  fn_001707b4(param_1 + 0x44);
  fn_00170704(param_1 + 0x44);
  *(int *)(iVar1 + 0x38) = param_3;
  fn_001a3d48(param_3);
  fn_0019ed20(&DAT_008f34bc,param_2,1);
  fn_001707b4(param_1 + 0x44);
  return 1;
}



undefined4 fn_0019ea94(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  fn_00170704(param_1 + 0x44);
  iVar1 = param_1 + param_2 * 8;
  if (*(int *)(iVar1 + 0x34) != 0) {
    fn_0019f1b0();
  }
  if (*(int *)(iVar1 + 0x38) != 0) {
    fn_0019f1fc();
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  fn_0019ed20(&DAT_008f34bc,param_2,0);
  fn_001707b4(param_1 + 0x44);
  fn_00170704(param_1 + 0x44);
  *(int *)(iVar1 + 0x34) = param_3;
  fn_001a3ca0(param_3);
  fn_0019ed20(&DAT_008f34bc,param_2,1);
  fn_001707b4(param_1 + 0x44);
  return 1;
}



void fn_0019ea78(char *param_1,int param_2,int param_3)

{
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  if (*param_1 == '\0') {
    return;
  }
  if (DAT_008f34bc == '\0') {
    return;
  }
  fn_00170704(&DAT_008f34f0);
  param_2 = param_2 * 4;
  if (*(int *)(&DAT_008f34d0 + param_2) != 0) {
    local_24 = param_3 + 0x280;
    iStack_20 = param_3 + 0x500;
    iStack_1c = param_3 + 0x780;
    local_28 = param_3;
    (**(code **)(&DAT_008f34d0 + param_2))(&local_28,0xa0,*(undefined4 *)(&DAT_008f34d8 + param_2));
  }
  fn_001707b4(&DAT_008f34f0);
  return;
}



void fn_0019e9c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*param_1 & 1 << (*param_2 & 0xff)) == 0) {
    return;
  }
  if ((char)param_2[1] != '\x01') {
    fn_0019f2a8(param_2,1);
  }
  fn_00170704();
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  if (uVar1 == 0 && uVar2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((uVar2 != 0) && (*(uint *)(uVar2 + 0x24) = uVar1, uVar1 == 0)) {
      param_1[1] = uVar2;
    }
    if ((uVar1 != 0) && (uVar2 = param_2[10], *(uint *)(uVar1 + 0x28) = uVar2, uVar2 == 0)) {
      param_1[2] = uVar1;
    }
  }
  *param_1 = *param_1 & ~(1 << (*param_2 & 0xff));
  *(short *)(param_1 + 3) = (short)param_1[3] + -1;
  fn_001707b4(param_1 + 4);
  return;
}


