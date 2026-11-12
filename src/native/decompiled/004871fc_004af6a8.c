#include "004871fc_004af6a8.h"



undefined4
fn_004af6a8(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [68];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_78,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,6);
  (**(code **)(*DAT_008c3dd0 + 8))(DAT_008c3dd0,auStack_78,*(undefined4 *)(param_3 + 4));
  fn_0045f6f0(auStack_78,param_5);
  fn_0015ef4c(auStack_78,param_7,2);
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_28);
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e678c = fn_004b07e0;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



undefined4
fn_004a768c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [64];
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_78,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  local_38 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_78,&local_38,4);
  local_38 = 2;
  fn_0015ef4c(auStack_78,&local_38,4);
  fn_0045f6f0(auStack_78,local_28);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_9 + 4));
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_2c);
    fn_0048ca64(param_2,param_5);
    fn_0048ca64(param_2,param_6);
    fn_0048ca64(param_2,param_7);
    fn_0048ca64(param_2,param_8);
  }
  DAT_008e954c = fn_004a7bf4;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



undefined8 fn_004a0cc0(int param_1)

{
  uint uVar1;
  int iStack_10;
  
  if ((param_1 == 0) || (DAT_008a646c == '\0')) {
    return 0;
  }
  iStack_10 = param_1;
  uVar1 = (**(code **)(*DAT_008a6470 + 0x14))(DAT_008a6470,&iStack_10,4);
  return CONCAT44(uVar1 >> 0x12,param_1);
}



void fn_0048cc04(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)fn_004565fc();
  *puVar2 = &DAT_00853b6c;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  if (param_2 != 0) {
    piVar3 = (int *)(param_2 + 4);
    puVar2[0x1d] = param_2;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
  }
  return;
}



int fn_004896f4(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  (**(code **)(DAT_008e69b0 + 8))();
  (**(code **)(*param_2 + 0xc))(auStack_28,param_2);
  iVar1 = fn_006d23bc(param_1,auStack_28);
  fn_00170f54(auStack_28);
  if (iVar1 != 0) {
    (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*piVar2 + 0xc))(auStack_28,piVar2);
  (**(code **)(*param_2 + 0xc))(auStack_30,param_2);
  iVar1 = fn_004b626c(local_24,local_2c);
  fn_00170f54(auStack_30);
  fn_00170f54(auStack_28);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = DAT_008aec6c;
  if (iVar1 != 0) {
    piVar3 = (int *)DAT_008aec6c[1];
    iVar7 = DAT_008aec6c[4];
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)DAT_008aec6c[2];
      if (piVar3 == (int *)DAT_008aec6c[3]) {
        if (*DAT_008aec6c == 0) {
          uVar6 = 0x20;
        }
        else {
          uVar4 = *(uint *)(*DAT_008aec6c + 4);
          uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar6 < uVar4 + 0x20) {
            uVar6 = uVar4 + 0x20;
          }
        }
        piVar3 = (int *)fn_0015ece0(0xc);
        iVar5 = fn_0015ece0(uVar6 * 0xc);
        piVar3[2] = iVar5;
        *piVar3 = *piVar2;
        piVar3[1] = uVar6;
        *piVar2 = (int)piVar3;
        piVar3 = (int *)piVar3[2];
        piVar2[2] = (int)piVar3;
        piVar2[3] = (int)(piVar3 + uVar6 * 3);
      }
      piVar2[2] = (int)(piVar3 + 3);
    }
    else {
      DAT_008aec6c[1] = *piVar3;
    }
    if (piVar3 + 2 != (int *)0x0) {
      piVar3[2] = (int)param_2;
    }
    *piVar3 = iVar7;
    piVar3[1] = *(int *)(iVar7 + 4);
    **(undefined4 **)(iVar7 + 4) = piVar3;
    *(int **)(iVar7 + 4) = piVar3;
    piVar2[5] = piVar2[5] + 1;
  }
  (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
  return iVar1;
}



void fn_004871fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  
  if (DAT_008bad44 == (int *)0x0) {
    DAT_008bad44 = &DAT_008e9404;
  }
  if (DAT_008bad40 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004872d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_008bad44 + 8))(param_1,DAT_008bad44,param_2,param_3);
    return;
  }
  fn_004b3294(auStack_48);
  iVar1 = fn_004b9f98(DAT_008bad40,param_2,param_3,auStack_48);
  if (iVar1 == 0) {
    (**(code **)(*DAT_008bad44 + 8))(auStack_30,DAT_008bad44,param_2,param_3);
    fn_0015ed58(auStack_48,auStack_30);
    fn_0014f2b0(auStack_30);
    fn_004ba13c(DAT_008bad40,param_2,param_3,auStack_48);
  }
  fn_004b31c4(param_1,auStack_48);
  fn_0014f2b0(auStack_48);
  return;
}


