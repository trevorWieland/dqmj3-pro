#include "0069e48c_0069eb10.h"



void fn_0069eb10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_18;
  
  uVar3 = 0;
  local_18 = param_4;
  iVar1 = fn_006eb378(param_2);
  if (iVar1 != 0) {
    do {
      fn_005e8b54(&local_18,param_2,uVar3);
      fn_005eefe8(param_1,&local_18);
      uVar3 = uVar3 + 1;
      uVar2 = fn_006eb378(param_2);
    } while (uVar3 < uVar2);
  }
  iVar1 = fn_006eb378(param_2);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,0);
  }
  uVar3 = 0;
  iVar1 = fn_006eb368(param_2);
  if (iVar1 != 0) {
    do {
      fn_005e8b38(&local_18,param_2,uVar3);
      fn_005eef64(param_1,&local_18);
      uVar3 = uVar3 + 1;
      uVar2 = fn_006eb368(param_2);
    } while (uVar3 < uVar2);
  }
  iVar1 = fn_006eb368(param_2);
  if (iVar1 != 0) {
    fn_0017fd38(param_1,0,param_3);
  }
  uVar3 = 0;
  iVar1 = fn_006eb388(param_2);
  if (iVar1 != 0) {
    do {
      fn_005e8fb8(&local_18,param_2,uVar3);
      fn_005ef050(param_1,&local_18);
      uVar3 = uVar3 + 1;
      uVar2 = fn_006eb388(param_2);
    } while (uVar3 < uVar2);
  }
  iVar1 = fn_006eb388(param_2);
  if (iVar1 == 0) {
    return;
  }
  fn_005ef0b8(param_1,0);
  return;
}



void fn_0069eb00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008514d4;
  fn_0068ad5c();
  return;
}



undefined4 * fn_0069eaa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_008514d4;
  puVar1[0x1a] = 0;
  puVar1[0x19] = &DAT_00859420;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  return puVar1;
}



void fn_0069e9ec(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[3] == '\x03') {
    if (param_1[0x1e] == 0) {
      (**(code **)(*param_1 + 0x108))(param_1,0);
    }
    (**(code **)(*param_1 + 0x108))(param_1,1);
    if (param_1[0x1c] != param_1[0x1a]) {
      (**(code **)(*param_1 + 0x108))(param_1,2);
    }
    iVar1 = param_1[0x1a];
    param_1[0x1d] = param_1[0x1d] + 1;
    param_1[0x1a] = param_1[0x1c];
    param_1[0x1b] = iVar1;
    if (iVar1 == param_1[0x1c]) {
      iVar1 = param_1[0x1e] + 1;
    }
    else {
      iVar1 = 0;
    }
    param_1[0x1e] = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0069ea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,3);
  return;
}



void fn_0069e8c8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  bVar2 = 0x15;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0x100094b) {
    bVar3 = 0;
  }
  else {
    iVar1 = 1;
    do {
      if ((&DAT_007c67f8)[iVar1 * 2] == iVar4) {
        bVar3 = (&DAT_007c67fc)[iVar1 * 8];
        goto LAB_0069e930;
      }
      if ((&DAT_007c6800)[iVar1 * 2] == iVar4) {
        bVar3 = (&DAT_007c6804)[iVar1 * 8];
        goto LAB_0069e930;
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0x15);
    bVar3 = 0x15;
  }
LAB_0069e930:
  if (param_2 == 0x100094b) {
    bVar2 = 0;
  }
  else {
    iVar4 = 1;
    do {
      if ((&DAT_007c67f8)[iVar4 * 2] == param_2) {
        bVar2 = (&DAT_007c67fc)[iVar4 * 8];
        break;
      }
      if ((&DAT_007c6800)[iVar4 * 2] == param_2) {
        bVar2 = (&DAT_007c6804)[iVar4 * 8];
        break;
      }
      iVar4 = iVar4 + 2;
    } while (iVar4 < 0x15);
  }
  if (bVar2 < bVar3) {
    *(int *)(param_1 + 4) = param_2;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_0069e82c(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0(*(undefined4 *)(param_1 + 0x40));
  }
  return;
}



void fn_0069e814(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0069e80c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0(*(undefined4 *)(param_1 + 0x40));
}



void fn_0069e808(void)

{
  return;
}



undefined4 fn_0069e804(undefined4 param_1)

{
  return param_1;
}



void fn_0069e7cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006896e0();
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *puVar1 = &DAT_00851494;
  puVar1[4] = param_5;
  return;
}



int fn_0069e774(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x14))();
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x24) + 4))();
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return param_1;
}



void fn_0069e63c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1[5] != 0) {
    puVar2 = param_1;
  }
  *param_1 = &DAT_00851468;
  if (param_1[5] != 0) {
    fn_0069dd00(puVar2);
  }
  uVar3 = param_1[0x10];
  uVar1 = uVar3;
  if ((uint)param_1[0x11] <= uVar3) {
    for (; uVar1 != param_1[0x11]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[0x12] - uVar3) >> 2,0);
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  uVar3 = param_1[2];
  uVar1 = uVar3;
  if ((uint)param_1[3] <= uVar3) {
    for (; uVar1 != param_1[3]; uVar1 = uVar1 + 8) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[4] - uVar3) >> 3,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0069e48c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = (undefined4 *)fn_006896e0();
  *puVar3 = &DAT_00851468;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  uVar8 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar8;
    DAT_008f9e30 = uVar8;
    DAT_008f9e34 = uVar8;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[7] = DAT_008f9e2c;
  puVar3[8] = uVar1;
  puVar3[9] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar8;
    DAT_008f9e30 = uVar8;
    DAT_008f9e34 = uVar8;
  }
  uVar1 = DAT_008f9e34;
  uVar8 = DAT_008f9e30;
  puVar3[10] = DAT_008f9e2c;
  puVar3[0xb] = uVar8;
  puVar3[0xc] = uVar1;
  if (((DAT_008c62f8 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62f8), iVar4 != 0)) {
    DAT_008f9e20 = 0x3f800000;
    DAT_008f9e24 = 0x3f800000;
    DAT_008f9e28 = 0x3f800000;
  }
  uVar1 = DAT_008f9e28;
  uVar8 = DAT_008f9e24;
  puVar3[0xd] = DAT_008f9e20;
  puVar3[0xe] = uVar8;
  puVar3[0xf] = uVar1;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *(undefined1 *)((int)puVar3 + 0x4d) = 0;
  puVar3[0x14] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  puVar3[0x16] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x2f) = 0;
  *(undefined1 *)(puVar3 + 0x31) = 0;
  *(undefined1 *)(puVar3 + 0x33) = 0;
  *(undefined1 *)(puVar3 + 0x35) = 0;
  *(undefined1 *)((int)puVar3 + 0xd6) = 0;
  uVar6 = puVar3[3];
  uVar7 = puVar3[2];
  if (uVar7 != uVar6) {
    uVar5 = uVar7;
    if (uVar6 <= uVar7) {
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar6);
    }
    puVar3[3] = uVar6 - (uVar6 - uVar7 & 0xfffffff8);
  }
  return puVar3;
}


