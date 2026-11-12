#include "00421cdc_004bd6e4.h"



void fn_004bd6e4(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (DAT_008b638b == '\0') {
    fn_004bcf50(param_1);
    return;
  }
  if (DAT_008b637e == '\0') {
    uVar5 = 0;
  }
  else {
    puVar2 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar5 = *puVar2;
  }
  (**(code **)(DAT_008e778c + 8))();
  if (DAT_008e76e4 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (DAT_008e76e4[1] - *DAT_008e76e4 >> 2) - 1;
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  uVar3 = 0;
  do {
    (**(code **)(DAT_008e778c + 8))();
    if ((uVar3 == 0) ||
       ((uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) &&
        (*(int *)(*DAT_008e76e4 + uVar3 * 4) != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
    if (bVar1) {
      fn_00477090(uVar3);
      fn_004bcf50(param_1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 <= uVar4);
  fn_00477090(uVar5);
  return;
}



undefined4
fn_004b1984(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_68,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,0xf);
  local_28 = *(undefined4 *)(param_3 + 0x14);
  fn_0015ef4c(auStack_68,&local_28,4);
  piVar6 = *(int **)(param_3 + 0x10);
  for (piVar5 = (int *)*piVar6; piVar5 != piVar6; piVar5 = (int *)*piVar5) {
    fn_004b2b88(auStack_68,piVar5 + 2);
  }
  (**(code **)(*DAT_008c3dd0 + 8))(DAT_008c3dd0,auStack_68,*(undefined4 *)(param_4 + 4));
  fn_0045f6f0(auStack_68,param_6);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_5);
  }
  DAT_008e67b0 = fn_004b1bc8;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar4;
}



undefined4
fn_004ab7f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

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
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
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
  local_38 = 4;
  fn_0015ef4c(auStack_78,&local_38,4);
  fn_0074ccc0(auStack_78,param_4);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_7 + 4));
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_2c);
    fn_0048ca64(param_2,param_5);
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e9570 = fn_004abdec;
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



undefined8 fn_004a0d18(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_18;
  
  uVar2 = param_2;
  if ((param_1 != 0 || param_2 != 0) && (uVar2 = -param_1 - 1, param_2 < 0x4000)) {
    if ((param_1 == 0) || (DAT_008a646c == '\0')) {
      iVar1 = 0;
      uVar2 = 0;
    }
    else {
      local_18 = param_1;
      uVar2 = (**(code **)(*DAT_008a6470 + 0x14))(DAT_008a6470,&local_18,4);
      uVar2 = uVar2 >> 0x12;
      iVar1 = param_1;
    }
    uVar2 = uVar2 ^ param_2;
    if (iVar1 == param_1 && uVar2 == 0) goto LAB_004a0d9c;
  }
  param_1 = 0;
LAB_004a0d9c:
  return CONCAT44(uVar2,param_1);
}



void fn_00483634(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint local_20;
  int local_1c;
  
  uVar3 = *(uint *)(param_1 + 0x98);
  if (uVar3 == 0xffffffff) {
    iVar1 = 0;
    iVar2 = iVar1;
  }
  else {
    fn_0013d0fc(&local_20);
    if ((int)uVar3 < 0) {
      iVar1 = local_20 + uVar3;
      iVar2 = local_1c - (((int)-uVar3 >> 0x1f) + (uint)(local_20 < -uVar3));
    }
    else {
      iVar1 = local_20 + uVar3;
      iVar2 = local_1c + ((int)uVar3 >> 0x1f) + (uint)CARRY4(local_20,uVar3);
    }
  }
  *(int *)(param_1 + 0x170) = iVar1;
  *(int *)(param_1 + 0x174) = iVar2;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    fn_00483f4c(param_1);
  }
  (**(code **)(*DAT_008b6404 + 0xc))(DAT_008b6404,param_1 + 0x118,*(int *)(param_1 + 0x1ac) + 8);
  pcVar4 = fn_00483e24;
  uVar5 = 0;
  fn_0013d0fc(&local_20);
  *(uint *)(param_1 + 0x40) = local_20;
  *(int *)(param_1 + 0x44) = local_1c;
  *(code **)(param_1 + 0x50) = pcVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined **)(param_1 + 0x58) = &DAT_00483704;
  return;
}



void fn_00421cdc(int param_1,char *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  byte abStack_dc [52];
  undefined1 auStack_a8 [136];
  
  psVar1 = *(short **)(param_1 + 0x7c);
  if (((psVar1 == (short *)0x0) || (*psVar1 < 1)) || (*(char *)((int)psVar1 + 0x67) != '\0')) {
LAB_004220ac:
    fn_00421b00(param_1,0);
    return;
  }
  bVar9 = (char)psVar1[0x3b] != '\0';
  if (!bVar9) {
    psVar1 = (short *)(uint)*(byte *)(psVar1 + 0x34);
  }
  if ((bVar9 || psVar1 != (short *)0x0) || (iVar2 = fn_0026a960(param_3), iVar2 == 0))
  goto LAB_004220ac;
  iVar8 = 0;
  iVar2 = fn_00163a00(param_3);
  if (iVar2 != 7) {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar8 = iVar2 + *param_2 * 0x418 + -0x4080;
  }
  fn_006f3bdc(*(undefined4 *)(param_1 + 0x7c),abStack_dc);
  if (iVar8 != 0) {
    fn_006f38c0(iVar8,param_3,abStack_dc);
  }
  if (0x2ba < param_3 - 1U) {
LAB_00422028:
    fn_00421b00(param_1,1);
    iVar2 = 0;
    do {
      piVar7 = (int *)(param_1 + iVar2 * 0x20);
      iVar2 = iVar2 + 1;
      *(byte *)(piVar7[6] + 0x44) = *(byte *)(piVar7[6] + 0x44) & 0xfe;
      *(byte *)(*piVar7 + 0x44) = *(byte *)(*piVar7 + 0x44) & 0xfe;
      *(byte *)(piVar7[1] + 0x44) = *(byte *)(piVar7[1] + 0x44) & 0xfe;
      *(undefined1 *)(piVar7 + 2) = 0;
      *(byte *)(piVar7[3] + 0x44) = *(byte *)(piVar7[3] + 0x44) & 0xfe;
      *(byte *)(piVar7[4] + 0x44) = *(byte *)(piVar7[4] + 0x44) & 0xfe;
      *(undefined1 *)(piVar7 + 5) = 0;
      *(undefined1 *)(piVar7 + 7) = 0;
    } while (iVar2 < 3);
    return;
  }
  iVar2 = fn_00691860(param_3);
  iVar8 = fn_0069187c(param_3);
  if (iVar2 == 0) goto LAB_00422028;
  if (iVar8 != 0) {
    iVar3 = fn_0069180c(iVar2);
    iVar4 = fn_0069180c(iVar8);
    if (iVar3 == 0) {
      if ((iVar4 != 0) || (abStack_dc[iVar8] < abStack_dc[iVar2])) goto LAB_00421e2c;
    }
    else if (!(iVar4 == 0 || abStack_dc[iVar2] <= abStack_dc[iVar8])) {
LAB_00421e2c:
      iVar2 = iVar8;
    }
  }
  *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 0x1c) = 1;
  fn_00421b00(param_1,1);
  fn_004220f4(param_1);
  iVar8 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20);
  *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe | 1;
  iVar8 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 4);
  *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe | 1;
  *(char *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 8) = (char)iVar2;
  fn_00301f50(auStack_a8,0x80);
  uVar6 = DAT_00897800;
  uVar5 = fn_00421b3c(param_1,iVar2);
  uVar6 = fn_00192cb4(uVar6,uVar5,1);
  iVar8 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar8 + 0x39c) == '\0') {
    uVar10 = fn_00174828(DAT_008977e4);
    iVar8 = fn_006f4868((int)uVar10 + 0xe8,(int)((ulonglong)uVar10 >> 0x20),0x100,0);
    if ((iVar8 != 0) && (iVar2 == 8)) goto LAB_00421f78;
    uVar5 = fn_0022f584((&PTR_s_status_m_Hyouka0_007bb3cc)[abStack_dc[iVar2]],0);
    fn_00101a50(auStack_a8,0x40,L"%ls%ls",uVar6,uVar5);
    fn_00190d50(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 4),auStack_a8);
    if (1 < abStack_dc[iVar2]) {
      fn_00688e80(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 4));
      goto LAB_00421fd4;
    }
    if (abStack_dc[iVar2] == 0) {
      fn_00688e60(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 4));
      goto LAB_00421fd4;
    }
  }
  else {
LAB_00421f78:
    uVar5 = fn_0022f584((char *)&DAT_004220e0,0);
    fn_00101a50(auStack_a8,0x40,L"%ls%ls",uVar6,uVar5);
    fn_00190d50(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 4),auStack_a8);
  }
  fn_00688fd8(*(undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 4));
LAB_00421fd4:
  iVar2 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 0xc);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 0x10);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  return;
}


