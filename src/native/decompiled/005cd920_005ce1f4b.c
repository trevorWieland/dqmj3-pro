#include "005cd920_005ce1f4b.h"



void fn_005ce1f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ed51c(param_1,param_2,0);
  puVar1[4] = 0;
  *puVar1 = &DAT_0084be90;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  puVar1[6] = param_3;
  return;
}



void fn_005cdf10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_e0 [2];
  undefined4 local_d8 [22];
  undefined4 local_80 [2];
  undefined4 local_78 [8];
  undefined4 local_58 [14];
  
  puVar5 = local_e0;
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 != 0) {
    return;
  }
  fn_003ed4ac(param_1);
  piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4);
  if (*(int *)(param_1 + 4) == 2) {
    iVar1 = piVar8[2];
    uVar3 = fn_0066eb80(DAT_00898840,0xb);
    fn_00101a1c(local_e0,fn_0067408c,0xc,8);
    fn_00674f6c(uVar3,local_e0,8);
    puVar7 = local_78;
    puVar6 = local_d8;
    puVar2 = local_58;
    iVar4 = 8;
    do {
      iVar4 = iVar4 + -1;
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
      uVar3 = *puVar6;
      puVar6 = puVar6 + 3;
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar4 != 0);
    fn_003dcd3c(iVar1,local_78,2);
    if (*(char *)(DAT_00898840 + 0x4d) == '\0') {
      iVar4 = fn_006ce5b8(piVar8,2);
      if (iVar4 == 0) {
        return;
      }
      uVar3 = fn_006cb1d0(iVar1,0);
      fn_005a740c(*(undefined4 *)(param_1 + 0x18),uVar3);
      if (*(char *)(param_1 + 0x15) != '\0') goto LAB_005ce0d0;
    }
    else {
      iVar1 = fn_00443e84();
      if (iVar1 == 0) {
        return;
      }
      fn_005a740c(*(undefined4 *)(param_1 + 0x18),local_78);
      if (*(char *)(param_1 + 0x15) != '\0') {
        *(undefined1 *)(param_1 + 0x15) = 0;
        uVar3 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4) + 8);
        if (*(char *)(DAT_00898840 + 0x4d) != '\0') {
          local_80[0] = fn_00615e64();
          fn_003dccb4(uVar3,local_80,3);
          fn_00338248(*(undefined4 *)(DAT_00897840 + 0x28),local_80[0]);
        }
LAB_005ce0d0:
        *(undefined4 *)(param_1 + 4) = 3;
        return;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 3) {
      return;
    }
    iVar1 = fn_0077f778(piVar8);
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)(DAT_00898840 + 0x4d) == '\0') {
      uVar3 = (**(code **)(*piVar8 + 4))(piVar8);
      iVar1 = piVar8[2];
      iVar4 = fn_006b6530(iVar1,3,uVar3);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)fn_006cb164(iVar1,uVar3);
        local_d8[0] = *puVar5;
        fn_003dccb4(iVar1,local_d8,3);
      }
      if (*(char *)(param_1 + 0x14) == '\0') {
        iVar4 = fn_00252280(piVar8,3,0);
        *(char *)(param_1 + 0x14) = (char)iVar4;
        if (iVar4 == 0) {
          return;
        }
        puVar5 = (undefined4 *)fn_006cb164(iVar1,uVar3);
        *(undefined4 *)(param_1 + 0x10) = *puVar5;
        if (*(char *)(param_1 + 0x14) == '\0') {
          return;
        }
      }
      fn_00338248(*(undefined4 *)(DAT_00897840 + 0x28),*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 4) = 999;
      return;
    }
    iVar1 = fn_00252280(piVar8,3,1);
    if (iVar1 == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 4) = 999;
  return;
}



void fn_005cdeb8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  *param_1 = &DAT_0084be80;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



int fn_005cde64(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_1[2];
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  if (0 < param_3) {
    fn_00301a9c(param_2,*param_1 + param_1[2],param_3);
    param_1[2] = param_1[2] + param_3;
  }
  return param_3;
}



void fn_005cddd4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 == 0) || (DAT_0089a508 == '\0')) {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_2);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x005cde14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,param_2);
  return;
}



void fn_005cdcf8(undefined4 param_1,int param_2)

{
  if ((param_2 == 0) || ((DAT_0089a508 & DAT_0089a509) == 0)) {
    return;
  }
  fn_0014e774(&DAT_008e3000,param_2);
  fn_00170704(&DAT_008e3058);
  fn_0015e5c0(&DAT_008e3000,param_2);
  fn_001707b4(&DAT_008e3058);
  return;
}



undefined1 fn_005cdc80(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}


