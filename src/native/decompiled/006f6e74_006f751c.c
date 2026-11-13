#include "006f6e74_006f751c.h"



undefined4 fn_006f751c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0xa0) * 4);
}



undefined4 fn_006f7508(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 100) * 4);
}



undefined4 fn_006f74f4(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x6c) * 4);
}



void fn_006f74ac(int param_1)

{
  if (*(int *)(param_1 + 0x60) != -1) {
    fn_002fed6c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4)
                );
  }
  if (*(int *)(param_1 + 0x5c) == -1) {
    return;
  }
  fn_002ea95c(DAT_00897848);
  return;
}



undefined4 fn_006f73a0(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 & ~param_3) == 0) {
    if ((param_3 & ~param_2) == 0) {
      if ((param_2 & param_3) == 0) {
        return 0;
      }
      if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
        return 0;
      }
      if (*(char *)(DAT_00897808 + 0x1c) == '\0') {
        return 0;
      }
      if (*(uint *)(DAT_00897808 + 0x18) >> 0x18 != 0xff) {
        return 0;
      }
      if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
        return 0;
      }
      if (*(char *)(DAT_0089780c + 0x1c) == '\0') {
        return 0;
      }
      uVar1 = *(uint *)(DAT_0089780c + 0x18);
    }
    else {
      if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
        return 0;
      }
      if (*(char *)(DAT_0089780c + 0x1c) == '\0') {
        return 0;
      }
      uVar1 = *(uint *)(DAT_0089780c + 0x18);
    }
  }
  else {
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    if (*(char *)(DAT_00897808 + 0x1c) == '\0') {
      return 0;
    }
    uVar1 = *(uint *)(DAT_00897808 + 0x18);
  }
  if (uVar1 >> 0x18 == 0xff) {
    return 1;
  }
  return 0;
}



undefined4 fn_006f7388(int param_1)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4) + 0x40);
}



bool fn_006f7370(void)

{
  return *(int *)(*(int *)(DAT_008977e0 + 0x1c) + 0x2c) == *(int *)(DAT_008977e0 + 0xa8);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_006f72f4(void)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 auStack_c [12];
  
  uVar1 = fn_001603f8(auStack_c,0);
  local_10 = _DAT_008912cc;
  fn_0068866c(DAT_00897808,uVar1,&local_10,5);
  return;
}



undefined4 fn_006f72e0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4);
}



undefined4 fn_006f72c8(int param_1)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 8);
}



undefined4 fn_006f72b4(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x84) * 4);
}



undefined4 fn_006f72a0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x68) * 4);
}



void fn_006f718c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(short *)(param_1 + 0x16a) == 1000) {
    fn_0025ba9c(*(undefined4 *)(DAT_00897804 + 8),(int)*(short *)(param_1 + 0x16c));
    return;
  }
  iVar1 = fn_00660ec0();
  if (iVar1 == 0x21) {
    fn_00241f00(*(undefined4 *)(DAT_00897804 + 0x18),(int)*(short *)(param_1 + 0x16a));
    return;
  }
  if (iVar1 != 0x22) {
    fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(param_1 + 0x16a),
                 (int)*(short *)(param_1 + 0x16c));
    return;
  }
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (iVar1 < 100) {
    fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),(int)*(short *)(param_1 + 0x16a),0);
    return;
  }
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = (uint)*(ushort *)(param_1 + 0x16a);
  fn_0028c554(*(undefined4 *)(DAT_008977e0 + 0x28),&local_20);
  uVar2 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar2,6);
  return;
}



undefined4 fn_006f7154(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00660ec0((int)*(short *)(param_1 + 0x16a));
  if (iVar1 == 0x22) {
    uVar2 = fn_006b4ff0(*(undefined4 *)(DAT_00897804 + 0x18));
    return uVar2;
  }
  return 0;
}



undefined4 fn_006f7038(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((char)param_1[0x16] == '\0') ||
      (iVar1 = (**(code **)(*param_1 + 0x134))(param_1), iVar1 == 0)) ||
     (*(char *)((int)param_1 + 0x169) != '\0')) {
    return 0;
  }
  fn_006f7a84(DAT_008977e0);
  fn_006aba74();
  fn_006f7a84(DAT_008977e0);
  fn_006aba74();
  fn_0017fe34();
  uVar2 = fn_006a9c40(param_2,param_1,0);
  return uVar2;
}



undefined1 fn_006f700c(int *param_1)

{
  undefined1 uVar1;
  
  if ((*param_1 == 0) || (uVar1 = 1, *(char *)(*param_1 + 4) != '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006f6fe8(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (*(char *)(*param_1 + 4) != '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006f6fc4(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (*(char *)(*param_1 + 4) != '\x03')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006f6f28(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x50) + 0x3c))();
  iVar4 = *piVar2;
  iVar1 = piVar2[1];
  if (iVar4 == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x006f6f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    return uVar3;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4));
  fn_00169f1c(uVar3,(iVar1 - iVar4) / 0x2c);
  return *(undefined4 *)(*piVar2 + extraout_r1 * 0x2c + 0x28);
}



bool fn_006f6e74(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x50) + 0x3c))();
  iVar4 = *piVar2;
  iVar1 = piVar2[1];
  if (iVar4 != iVar1) {
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4));
    fn_00169f1c(uVar3,(iVar1 - iVar4) / 0x2c);
    iVar5 = *piVar2 + extraout_r1 * 0x2c;
    uVar3 = *(undefined4 *)(iVar5 + 8);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    *param_2 = *(undefined4 *)(iVar5 + 4);
    param_2[1] = uVar3;
    param_2[2] = uVar6;
    iVar5 = *piVar2 + extraout_r1 * 0x2c;
    uVar3 = *(undefined4 *)(iVar5 + 0x14);
    uVar6 = *(undefined4 *)(iVar5 + 0x18);
    *param_3 = *(undefined4 *)(iVar5 + 0x10);
    param_3[1] = uVar3;
    param_3[2] = uVar6;
  }
  return iVar4 != iVar1;
}


