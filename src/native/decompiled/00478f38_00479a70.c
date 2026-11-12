#include "00478f38_00479a70.h"



void fn_00479a70(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  int local_18;
  int iStack_14;
  
  fn_004b301c(param_1,3);
  fn_0013d0fc(&local_18);
  param_1[0x10] = local_18;
  param_1[0x11] = iStack_14;
  iVar2 = param_2[2];
  param_1[0x14] = param_2[1];
  param_1[0x15] = iVar2;
  param_1[0x16] = param_2[3];
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  puVar3 = (uint *)(param_1 + 1);
  do {
    uVar1 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar1;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(param_1 + 2);
  }
  if (bVar4 && uVar1 == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x00479b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}



void fn_00479614(void)

{
  int iVar1;
  
  iVar1 = fn_00479644();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00479634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_00479238(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  puVar3 = (undefined4 *)fn_004693c0();
  *puVar3 = &PTR_FUN_008534b4;
  puVar3[0x51] = 0;
  puVar3[0x52] = 0;
  puVar3[0x53] = 0;
  fn_0079a8b8(puVar3 + 0x51,2);
  puVar3[0x55] = 0;
  puVar3[0x58] = &DAT_00855b14;
  puVar3[0x56] = 0;
  puVar3[0x57] = &DAT_008529d4;
  puVar3[0x59] = 0;
  puVar3[0x5a] = 0;
  puVar3[0x5b] = 0;
  puVar3[0x5e] = &DAT_00855b24;
  puVar3[0x5c] = 0;
  puVar3[0x5f] = 0;
  puVar3[0x60] = 0;
  puVar3[0x61] = 0;
  puVar3[0x62] = 0;
  iVar4 = fn_00466dcc(puVar3 + 100,L"Transport Job",1000,&DAT_004795d4);
  iVar5 = fn_004b5afc(iVar4 + 0x74);
  *(undefined4 *)(iVar5 + 0x10) = &DAT_00855a08;
  *(undefined1 *)(iVar5 + 0x18) = 0;
  *(undefined1 *)(iVar5 + 0x19) = 0;
  *(undefined **)(iVar5 + 0x20) = &DAT_008528bc;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x25) = 2;
  puVar3 = (undefined4 *)fn_0015ece0(0x50);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00855a78;
    *(undefined1 *)(puVar3 + 1) = 0xb;
    iVar4 = fn_004b616c();
    *(uint *)(iVar4 + 4) = (uint)*(byte *)(puVar3 + 1);
    *puVar3 = &DAT_00852a30;
    puVar3[2] = 0;
    iVar4 = fn_004b616c(1);
    iVar6 = fn_0045e880(puVar3 + 4,*(int *)(iVar4 + 0x6c) * 3);
    iVar4 = iVar6 + -0x10;
    *(undefined4 *)(iVar6 + 0x30) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x38) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0;
  }
  *(int *)(iVar5 + 0x14) = iVar4;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  iVar6 = iVar5 + -0x204;
  fn_00170704(&DAT_008e7794);
  fn_004746b0();
  iVar4 = fn_001249d0();
  if (iVar4 == 0) {
    iVar4 = fn_0015ece0(0x78);
    if (iVar4 != 0) {
      fn_004b3cbc();
    }
  }
  else {
    iVar4 = fn_001249d0();
    piVar8 = (int *)(iVar4 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = *piVar8 + 1;
  }
  fn_001707b4(&DAT_008e7794);
  if (DAT_008b6389 == '\0') {
    puVar3 = (undefined4 *)fn_0015ece0(0x18);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &DAT_008529d4;
      puVar3[1] = &DAT_00855b14;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    *(undefined4 **)(iVar5 + -0x90) = puVar3;
  }
  else {
    puVar3 = (undefined4 *)fn_0015ece0(0x1c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar4 = fn_001249d0();
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0xc);
      }
      puVar3[2] = 0;
      puVar3[1] = &DAT_00855b14;
      puVar3[3] = 0;
      *puVar3 = &DAT_00853d18;
      puVar3[6] = iVar4 + 0x50;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    *(undefined4 **)(iVar5 + -0x90) = puVar3;
  }
  *(undefined1 *)(iVar5 + -0xb4) = 0;
  *(undefined4 *)(iVar5 + -0xcc) = 0;
  *(undefined4 *)(iVar5 + -200) = 0;
  uVar7 = 0;
  if (DAT_008b637e != '\0') {
    puVar3 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar7 = *puVar3;
  }
  *(undefined4 *)(iVar5 + -4) = uVar7;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  if (*(char *)(iVar5 + 5) != '\0') {
    iVar4 = *(int *)(*(int *)(iVar5 + 0xc) + 0xa8);
    if (iVar4 != 0) {
      iVar4 = fn_0049599c(iVar4 + 0x94,*(undefined1 *)(*(int *)(iVar5 + 0xc) + 4),1);
      *(bool *)(iVar5 + 5) = iVar4 == 0;
    }
  }
  *(int *)(*(int *)(iVar5 + 0xc) + 0xa8) = iVar6;
  if (*(char *)(iVar5 + 4) != '\0') {
    uVar2 = fn_004955f0(iVar5 + -0x170,*(undefined4 *)(iVar5 + 0xc),1,0);
    *(undefined1 *)(iVar5 + 5) = uVar2;
  }
  if (*(char *)(iVar5 + 0x19) != '\0') {
    iVar4 = *(int *)(*(int *)(iVar5 + 0x14) + 8);
    if (iVar4 != 0) {
      iVar4 = fn_0049599c(iVar4 + 0x94,*(undefined1 *)(*(int *)(iVar5 + 0x14) + 4),0xf);
      *(bool *)(iVar5 + 0x19) = iVar4 == 0;
    }
    fn_004b4a60((undefined4 *)(iVar5 + 0x10));
  }
  *(int *)(*(int *)(iVar5 + 0x14) + 8) = iVar6;
  if (*(char *)(iVar5 + 0x18) != '\0') {
    uVar2 = fn_004955f0(iVar5 + -0x170,*(undefined4 *)(iVar5 + 0x14),0xf,0);
    *(undefined1 *)(iVar5 + 0x19) = uVar2;
  }
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  DAT_008e6a84 = 0;
  DAT_008e6a88 = 0;
  DAT_008e6a8c = 0;
  DAT_008e6a90 = 0;
  return iVar6;
}



undefined4 fn_004790ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_004790f8();
  if (iVar1 != 0) {
    uVar2 = fn_00478a24(param_1,iVar1,param_3,param_4);
  }
  return uVar2;
}



undefined4
fn_00478f38(int param_1,undefined4 param_2,int param_3,byte param_4,byte param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_90 [4];
  int local_8c;
  char local_2c;
  byte local_28 [4];
  
  if (*(char *)(param_1 + 0xfe) != '\0') {
    return 0;
  }
  param_4 = param_4 | (byte)(param_3 << 4);
  local_28[0] = param_4;
  iVar1 = fn_00495d00(param_1 + 0x94,local_28);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = fn_001249d0();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  piVar3 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = fn_004790f8(param_1,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    fn_0013ce04(auStack_90);
    fn_00455394(auStack_90,param_6 + 0xdc);
    iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 8))
                      (*(int **)(param_1 + 0xac),auStack_90,param_2);
    if (local_2c == '\0') {
      fn_0014ea80(auStack_90);
    }
    uVar4 = *(undefined4 *)(local_8c + 8);
    uVar5 = *(undefined4 *)(local_8c + 0xc);
    uVar6 = *(undefined4 *)(local_8c + 0x10);
    uVar7 = *(undefined4 *)(local_8c + 0x14);
    uVar8 = *(undefined4 *)(local_8c + 0x18);
    uVar9 = *(undefined4 *)(local_8c + 0x1c);
    *(undefined4 *)(param_6 + 0xe0) = *(undefined4 *)(local_8c + 4);
    *(undefined4 *)(param_6 + 0xe4) = uVar4;
    *(undefined4 *)(param_6 + 0xe8) = uVar5;
    *(undefined4 *)(param_6 + 0xec) = uVar6;
    *(undefined4 *)(param_6 + 0xf0) = uVar7;
    *(undefined4 *)(param_6 + 0xf4) = uVar8;
    *(undefined4 *)(param_6 + 0xf8) = uVar9;
    fn_0013ce98(auStack_90);
    if (iVar1 != 0) goto LAB_00479048;
  }
  uVar4 = DAT_008b6514;
  *(undefined4 *)(param_6 + 0x100) = DAT_008b6510;
  *(undefined4 *)(param_6 + 0x104) = uVar4;
  local_28[0] = param_5 | (byte)(param_3 << 4);
  *(byte *)(param_6 + 0x25) = param_4;
  *(byte *)(param_6 + 0x26) = local_28[0];
  *(short *)(param_6 + 0x86) = (short)param_2;
  (**(code **)(**(int **)(param_1 + 0x174) + 0xc))(*(int **)(param_1 + 0x174),param_6,1);
LAB_00479048:
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_004790f8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  bool bVar9;
  
  param_2 = param_2 & 0xffff;
  if (DAT_008b6389 == '\0') {
    puVar5 = *(ushort **)(param_1 + 0x144);
    puVar8 = *(ushort **)(param_1 + 0x148);
    uVar1 = (int)puVar8 - (int)puVar5 >> 3;
    while (uVar6 = uVar1, 0 < (int)uVar6) {
      uVar1 = (int)uVar6 / 2;
      if (puVar5[uVar1 * 4] < param_2) {
        puVar5 = puVar5 + uVar1 * 4 + 4;
        uVar1 = (uVar6 - uVar1) - 1;
      }
    }
    bVar9 = puVar5 <= puVar8;
    if (puVar8 != puVar5) {
      uVar6 = (uint)*puVar5;
      bVar9 = param_2 <= uVar6;
    }
    if (bVar9 && (puVar8 != puVar5 && uVar6 != param_2)) {
      puVar5 = puVar8;
    }
    if (puVar8 == puVar5) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(puVar5 + 2);
    }
    return uVar7;
  }
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  puVar5 = *(ushort **)(param_1 + 0x144);
  puVar8 = *(ushort **)(param_1 + 0x148);
  uVar1 = (int)puVar8 - (int)puVar5 >> 3;
  while (uVar6 = uVar1, 0 < (int)uVar6) {
    uVar1 = (int)uVar6 / 2;
    if (puVar5[uVar1 * 4] < param_2) {
      puVar5 = puVar5 + uVar1 * 4 + 4;
      uVar1 = (uVar6 - uVar1) - 1;
    }
  }
  bVar9 = puVar5 <= puVar8;
  if (puVar8 != puVar5) {
    uVar6 = (uint)*puVar5;
    bVar9 = param_2 <= uVar6;
  }
  if (bVar9 && (puVar8 != puVar5 && uVar6 != param_2)) {
    puVar5 = puVar8;
  }
  if (puVar8 == puVar5) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return 0;
  }
  uVar7 = *(undefined4 *)(puVar5 + 2);
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return uVar7;
}


