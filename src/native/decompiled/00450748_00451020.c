#include "00450748_00451020.h"



undefined1 * fn_00451020(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  int local_90;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_00170704(&DAT_008e323c);
  fn_00450058();
  DAT_0089a619 = '\x01';
  *(undefined4 *)(param_1 + 4) = param_2;
  puVar1 = (undefined1 *)fn_006cfc9c(param_1,auStack_98,param_2);
  if ((int)puVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    fn_00451214(param_1,1);
    if (DAT_0089a619 != '\0') {
      fn_0044ff38(0);
    }
    fn_001707b4(&DAT_008e323c);
    return puVar1;
  }
  if (local_90 != param_3) {
    *(undefined4 *)(param_1 + 4) = 0;
    fn_00451214(param_1,1);
    if (DAT_0089a619 != '\0') {
      fn_0044ff38(0);
    }
    fn_001707b4(&DAT_008e323c);
    return &DAT_c8810bea;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  fn_0017821c(param_1 + 0x19c,auStack_98,0x60);
  local_a0 = 0;
  puVar1 = (undefined1 *)
           fn_00450148(param_1,param_1 + 0x1fc,param_1 + 0x21c,*(undefined4 *)(param_1 + 0x3a8));
  if ((int)puVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    fn_00451214(param_1,1);
  }
  else {
    local_a0 = 1;
    puVar1 = (undefined1 *)
             fn_00450148(param_1,param_1 + 0x3ac,param_1 + 0x3cc,*(undefined4 *)(param_1 + 0x558));
    if (-1 < (int)puVar1) {
      fn_004514a0(param_1);
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      *(undefined1 *)(param_1 + 0x1dd) = 0;
      fn_00114248(&local_a0);
      local_38 = local_a0;
      uStack_34 = uStack_9c;
      fn_006d02f4(&local_30,&local_38);
      *(undefined4 *)(param_1 + 0x1d0) = local_30;
      *(undefined4 *)(param_1 + 0x1d4) = uStack_2c;
      *(undefined4 *)(param_1 + 0x1d8) = uStack_28;
      DAT_0089a618 = 1;
      fn_001707b4(&DAT_008e323c);
      return (undefined1 *)0x0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    fn_00451214(param_1,1);
  }
  if (DAT_0089a619 != '\0') {
    fn_0044ff38(0);
  }
  fn_001707b4(&DAT_008e323c);
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x00450fc8) */
/* WARNING: Removing unreachable block (ram,0x00450fd4) */
/* WARNING: Removing unreachable block (ram,0x00450fe8) */
/* WARNING: Removing unreachable block (ram,0x00450e90) */
/* WARNING: Removing unreachable block (ram,0x00450e9c) */
/* WARNING: Removing unreachable block (ram,0x00450eb0) */
/* WARNING: Removing unreachable block (ram,0x00450f60) */
/* WARNING: Removing unreachable block (ram,0x00450f6c) */
/* WARNING: Removing unreachable block (ram,0x00450f80) */
/* WARNING: Removing unreachable block (ram,0x00450ee4) */
/* WARNING: Removing unreachable block (ram,0x00450ef0) */
/* WARNING: Removing unreachable block (ram,0x00450f04) */

undefined1 * fn_00450d24(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  fn_00170704(&DAT_008e323c);
  if (param_1[1] == 0) {
    fn_001707b4(&DAT_008e323c);
    return &DAT_c8810bea;
  }
  if (param_2 == 1) {
    iVar1 = fn_006cfa74(param_1,1,param_3);
    if (iVar1 != -1) {
      fn_006cf9a4(param_1,1,iVar1);
    }
    puVar2 = (undefined1 *)(**(code **)(*param_1 + 0x24))(param_1,param_1[1],7,1,param_3,8);
    if (-1 < (int)puVar2) {
      puVar2 = (undefined1 *)fn_00450670(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
      if ((int)puVar2 < 0) goto LAB_00450fb0;
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],param_3,8,3);
      if (-1 < iVar1) {
        fn_004514a0(param_1);
      }
      goto LAB_00451004;
    }
    piVar5 = param_1 + 0xf3;
    piVar4 = param_1 + 0xeb;
    uVar3 = 1;
  }
  else {
    iVar1 = fn_006cfa74(param_1,param_2,param_3);
    if (iVar1 != -1) {
      fn_006cf9a4(param_1,param_2,iVar1);
    }
    puVar2 = (undefined1 *)(**(code **)(*param_1 + 0x24))(param_1,param_1[1],6,param_2,param_3,8);
    if (-1 < (int)puVar2) {
      puVar2 = (undefined1 *)fn_00450670(param_1,0,param_1 + 0x7f,param_1 + 0x87);
      if ((int)puVar2 < 0) {
LAB_00450fb0:
        fn_001707b4(&DAT_008e323c);
        return puVar2;
      }
      goto LAB_00451004;
    }
    piVar5 = param_1 + 0x87;
    piVar4 = param_1 + 0x7f;
    uVar3 = 0;
  }
  fn_00450670(param_1,uVar3,piVar4,piVar5);
LAB_00451004:
  fn_001707b4(&DAT_008e323c);
  return puVar2;
}



undefined1 * fn_00450748(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 local_f8;
  int iStack_f4;
  undefined1 *puStack_f0;
  int *piStack_ec;
  undefined1 auStack_e0 [96];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int local_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  fn_00170704(&DAT_008e323c);
  bVar13 = false;
  fn_00453ab4(auStack_70);
  local_5c = 0;
  local_60 = 0;
  if ((*(char *)((int)param_1 + 9) == '\0') &&
     (puVar2 = (undefined1 *)fn_00452200(param_1), (int)puVar2 < 0)) goto LAB_00450948;
  if (param_1[1] == 0) {
    fn_001707b4(&DAT_008e323c);
    return &DAT_c8810bea;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_004507e0:
    fn_001707b4(&DAT_008e323c);
    return (undefined1 *)0xc8810bef;
  }
  local_58 = 0;
  iVar3 = fn_006cff90(param_2,2,auStack_38,&local_58);
  if (iVar3 < 0) goto LAB_004507e0;
  if (param_1[1] != *(int *)(param_2 + 0x10)) {
    fn_001707b4(&DAT_008e323c);
    return (undefined1 *)0xc8e1086b;
  }
  fn_00453a20(&local_f8,param_2,auStack_70);
  fn_006d00f4(param_2,auStack_e0);
  iVar3 = fn_006d0108(auStack_70);
  if (iVar3 == 0) {
    puVar8 = auStack_70;
    iVar3 = fn_006cfa74(param_1,param_3 != 0);
    bVar13 = iVar3 != -1;
  }
  else {
    fn_00114248(&local_48);
    local_50 = local_48;
    local_4c = local_44;
    fn_006d02f4(&local_f8,&local_50);
    local_80 = local_f8;
    uStack_7c = iStack_f4;
    puStack_78 = puStack_f0;
    puVar8 = puStack_f0;
  }
  bVar1 = *(byte *)(param_2 + 0x6c);
  if (1 < bVar1) {
    bVar1 = *(byte *)(param_2 + 0x6d);
  }
  if (1 < bVar1) {
    fn_001707b4(&DAT_008e323c);
    return (undefined1 *)0xe0e10bee;
  }
  local_54 = param_1 + 0x224;
  local_48 = param_1 + 0x222;
  local_44 = param_1 + 0x22c;
  puVar2 = (undefined1 *)0xc8e10869;
  local_50 = param_1 + 0x22a;
  if (param_3 == 0) {
    if (*(char *)((int)param_1 + 10) == '\0') {
      puVar9 = (uint *)(param_1 + 0x81);
      local_3c = param_1[0x84];
    }
    else {
      puVar9 = (uint *)(param_1 + 0x221);
      local_3c = param_1[0x224];
    }
    uVar10 = *puVar9;
    uVar11 = puVar9[1];
    uVar12 = puVar9[2];
    puVar7 = (undefined1 *)param_1[0x86];
    bVar14 = puVar7 == (undefined1 *)0x0;
    if (!bVar14) {
      puVar8 = *(undefined1 **)(param_2 + 4);
    }
    if ((bVar14 || puVar7 <= puVar8) && (!bVar14 && puVar8 != puVar7)) goto LAB_00450948;
  }
  else {
    if (*(char *)((int)param_1 + 0xb) == '\0') {
      puVar9 = (uint *)(param_1 + 0xed);
      local_3c = param_1[0xf0];
    }
    else {
      puVar9 = (uint *)(param_1 + 0x229);
      local_3c = param_1[0x22c];
    }
    uVar10 = *puVar9;
    uVar11 = puVar9[1];
    uVar12 = puVar9[2];
    puVar7 = (undefined1 *)param_1[0xf2];
    if (puVar7 != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_2 + 4);
    }
    if (puVar7 != (undefined1 *)0x0 && puVar7 < puVar8) {
LAB_00450948:
      fn_001707b4(&DAT_008e323c);
      return puVar2;
    }
  }
  if (bVar13) {
    iVar3 = fn_006cfa74(param_1,param_3,auStack_70);
    if (iVar3 != -1) {
      iVar4 = fn_006cf9a4(param_1,param_3,iVar3);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 4);
      }
      if ((uVar10 != 0) && (uVar10 < *(int *)(param_2 + 4) + (uVar11 - iVar3))) goto LAB_004509f0;
      local_5c = *(int *)(param_2 + 4) - iVar3;
    }
  }
  else {
    if ((uVar10 != 0) && (uVar10 < *(int *)(param_2 + 4) + uVar11)) {
LAB_004509f0:
      fn_001707b4(&DAT_008e323c);
      return (undefined1 *)0xc8e10865;
    }
    local_5c = *(int *)(param_2 + 4);
  }
  if (uVar12 == 0) {
    if (!bVar13) goto LAB_00450a74;
  }
  else if (!bVar13) {
    if (uVar12 < local_3c + 1U) {
      fn_001707b4(&DAT_008e323c);
      return (undefined1 *)0xc8e10866;
    }
LAB_00450a74:
    local_60 = 1;
  }
  local_4c = (int *)fn_00453ac8(*(undefined4 *)(param_2 + 4),4);
  if (local_4c == (int *)0x0) {
    fn_001707b4(&DAT_008e323c);
    return (undefined1 *)0xc8610bf3;
  }
  fn_006d003c(param_2,local_4c);
  fn_00301a9c(local_4c,auStack_e0,0x70);
  local_68 = 0;
  local_64 = 0;
  iVar3 = fn_006d0108(auStack_70);
  if (iVar3 == 0) {
    fn_006d0170(auStack_70,&local_68);
  }
  puStack_f0 = *(undefined1 **)(param_2 + 4);
  piStack_ec = param_1 + 0x6b;
  local_f8 = 8;
  iStack_f4 = (int)local_4c;
  puVar2 = (undefined1 *)(**(code **)(*param_1 + 0x20))(param_1,param_1[1],param_3,&local_68);
  if (param_5 == 0) {
    if (param_3 == 1) {
      if (*(char *)((int)param_1 + 0xb) == '\0') {
        param_1[0x227] = param_1[0xeb];
        param_1[0x228] = param_1[0xec];
        param_1[0x229] = param_1[0xed];
        param_1[0x22a] = param_1[0xee];
        param_1[0x22b] = param_1[0xef];
        param_1[0x22c] = param_1[0xf0];
        param_1[0x22d] = param_1[0xf1];
        param_1[0x22e] = param_1[0xf2];
      }
      *(undefined1 *)((int)param_1 + 0xb) = 1;
      if ((int)puVar2 < 0) goto LAB_00450ce0;
      *local_50 = param_1[0x22a] + local_5c;
      iVar3 = param_1[0x22c];
      piVar5 = local_44;
    }
    else {
      if (*(char *)((int)param_1 + 10) == '\0') {
        param_1[0x21f] = param_1[0x7f];
        param_1[0x220] = param_1[0x80];
        param_1[0x221] = param_1[0x81];
        param_1[0x222] = param_1[0x82];
        param_1[0x223] = param_1[0x83];
        param_1[0x224] = param_1[0x84];
        param_1[0x225] = param_1[0x85];
        param_1[0x226] = param_1[0x86];
      }
      *(undefined1 *)((int)param_1 + 10) = 1;
      if ((int)puVar2 < 0) goto LAB_00450ce0;
      *local_48 = param_1[0x222] + local_5c;
      iVar3 = param_1[0x224];
      piVar5 = local_54;
    }
    *piVar5 = iVar3 + local_60;
  }
  else {
    if (param_3 == 1) {
      puVar8 = (undefined1 *)fn_00450670(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
    }
    else {
      puVar8 = (undefined1 *)fn_00450670(param_1,0,param_1 + 0x7f,param_1 + 0x87);
    }
    if ((int)puVar8 < 0) {
      fn_004539f4(local_4c);
      fn_001707b4(&DAT_008e323c);
      return puVar8;
    }
    if ((int)puVar2 < 0) goto LAB_00450ce0;
  }
  iVar3 = fn_006d0108(auStack_70);
  if (iVar3 != 0) {
    uVar6 = fn_00453a8c(&local_f8,&local_68);
    fn_00166824(auStack_70,uVar6);
    fn_00166824(local_28,auStack_70);
  }
  if (param_3 == 1 && !bVar13) {
    local_f8 = 2;
    iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],auStack_70,8);
    if (-1 < iVar3) {
      fn_004514a0(param_1);
    }
  }
LAB_00450ce0:
  fn_004539f4(local_4c);
  fn_001707b4(&DAT_008e323c);
  return puVar2;
}


