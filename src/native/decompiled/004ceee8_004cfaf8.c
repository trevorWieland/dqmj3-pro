#include "004ceee8_004cfaf8.h"



uint fn_004cfaf8(int param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_f8;
  int local_f4;
  undefined *local_f0;
  undefined1 auStack_ec [40];
  undefined1 auStack_c4 [108];
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined1 auStack_2c [28];
  
  if (param_5 != 0) {
    fn_004ed050(param_4);
    uVar3 = fn_004ce228(*(undefined4 *)(param_1 + 0xa0),param_2);
    return uVar3 ^ 1;
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  bVar13 = *(int *)(iVar4 + 0x6c) != 0;
  uVar3 = 0;
  if (bVar13) {
    uVar3 = param_2[7];
  }
  if (bVar13 && uVar3 != 0) {
    fn_0050d0fc(auStack_58);
    pcVar5 = (char *)fn_004c9edc();
    if (*pcVar5 != '\0') {
      fn_004ed7b8(&local_30,param_2 + 1);
      fn_004ed440(&local_f8,auStack_2c);
      local_f4 = CONCAT22(((unsigned int)(local_f4) >> 16) & 0xffff,(short)local_f4 + 10);
      fn_004ed700(&local_30,&local_f8);
      fn_0050d060(auStack_58,&local_30);
      local_30 = &DAT_00856c94;
    }
    local_f8 = param_4;
    fn_004cae1c(&local_f0,auStack_58,param_3,1);
    iVar6 = fn_004c717c(iVar4 + 0x84,param_2,0x20000,0);
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 0x44);
    }
    iVar8 = fn_004c7124(iVar4 + 0x84,param_2);
    uVar3 = DAT_008c362c;
    cVar1 = '\0';
    if (iVar8 != 0) {
      cVar1 = *(char *)(iVar8 + 0x41);
    }
    if ((iVar8 == 0 || cVar1 == '\0') && (iVar6 == 0 || iVar7 == -1)) {
      fn_004ceb44(iVar4,&local_f0);
      local_f0 = &DAT_00855fc4;
      fn_0051811c(auStack_c4);
      fn_0050d178(auStack_ec);
      fn_0050d178(auStack_58);
      return 1;
    }
    puVar9 = (uint *)fn_004f0ce8();
    uVar10 = *puVar9;
    uVar11 = puVar9[1];
    lVar2 = (ulonglong)uVar3 * (ulonglong)uVar10;
    uVar12 = (uint)lVar2;
    local_f8 = 0;
    local_f4 = 0;
    fn_004f01f4(&local_f8);
    *(uint *)(iVar8 + 0x3c) =
         local_f4 + uVar10 * ((int)uVar3 >> 0x1f) + uVar11 * uVar3 + (int)((ulonglong)lVar2 >> 0x20)
         + (uint)CARRY4(local_f8,uVar12);
    *(undefined4 *)(iVar8 + 0x4c) = 0;
    *(uint *)(iVar8 + 0x38) = local_f8 + uVar12;
    *(undefined1 *)(iVar8 + 0x41) = 0;
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x20000,0);
    local_f0 = &DAT_00855fc4;
    fn_0051811c(auStack_c4);
    fn_0050d178(auStack_ec);
    fn_0050d178(auStack_58);
    uVar3 = 0;
  }
  return uVar3;
}



void fn_004cf90c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x94);
  while (iVar1 != 0) {
    iVar1 = param_1 + 0x88;
    bVar3 = *(int *)(param_1 + 0x94) != 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x8c);
    }
    if (bVar3 && iVar1 != 0) {
      puVar2 = (undefined4 *)(iVar1 + 8);
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    (**(code **)*puVar2)();
    fn_004f0c1c(param_1 + 0x88,puVar2 + -2);
    fn_004f0ab4(param_1 + 0x98,param_1 + 0x9c,*(int *)(param_1 + 0xa8) + (int)(puVar2 + -2));
    iVar1 = *(int *)(param_1 + 0x94);
  }
  iVar1 = *(int *)(param_1 + 200);
  while (iVar1 != 0) {
    iVar1 = param_1 + 0xbc;
    bVar3 = *(int *)(param_1 + 200) != 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0xc0);
    }
    if (bVar3 && iVar1 != 0) {
      puVar2 = (undefined4 *)(iVar1 + 8);
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    (**(code **)*puVar2)();
    fn_004f0c1c(param_1 + 0xbc,puVar2 + -2);
    fn_004f0ab4(param_1 + 0xcc,param_1 + 0xd0,*(int *)(param_1 + 0xdc) + (int)(puVar2 + -2));
    iVar1 = *(int *)(param_1 + 200);
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  while (iVar1 != 0) {
    iVar1 = param_1 + 0xf0;
    bVar3 = *(int *)(param_1 + 0xfc) != 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0xf4);
    }
    if (bVar3 && iVar1 != 0) {
      puVar2 = (undefined4 *)(iVar1 + 8);
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    (**(code **)*puVar2)();
    fn_004f0c1c(param_1 + 0xf0,puVar2 + -2);
    fn_004f0ab4(param_1 + 0x100,param_1 + 0x104,*(int *)(param_1 + 0x110) + (int)(puVar2 + -2));
    iVar1 = *(int *)(param_1 + 0xfc);
  }
  iVar1 = *(int *)(param_1 + 0x130);
  while (iVar1 != 0) {
    iVar1 = param_1 + 0x124;
    bVar3 = *(int *)(param_1 + 0x130) != 0;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 0x128);
    }
    if (bVar3 && iVar1 != 0) {
      iVar1 = iVar1 + 8;
    }
    else {
      iVar1 = 0;
    }
    fn_0050d178();
    fn_004f0c1c(param_1 + 0x124,iVar1 + -8);
    fn_004f0ab4(param_1 + 0x134,param_1 + 0x138,*(int *)(param_1 + 0x144) + iVar1 + -8);
    iVar1 = *(int *)(param_1 + 0x130);
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    fn_004cf878(param_1);
  }
  fn_004ed13c(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  *(undefined1 *)(param_1 + 0x4c2) = 0;
  *(undefined1 *)(param_1 + 0x4c3) = 0;
  *(undefined1 *)(param_1 + 0x4c4) = 0;
  *(undefined1 *)(param_1 + 0x4c5) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined1 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  return;
}



void fn_004cf878(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x70) != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x500) != 0) {
    if (DAT_008c0630 != 0) {
      param_3 = 0;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0x500) + 0x2c);
    (*pcVar1)(*(int **)(param_1 + 0x500),pcVar1,param_3);
    if (*(char *)(param_1 + 0x70) != '\x01') {
      return;
    }
  }
  fn_004ed068(param_1 + 0x70);
  return;
}



void fn_004cf144(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined2 uVar8;
  uint uVar9;
  bool bVar10;
  uint local_48;
  int local_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined1 auStack_38 [16];
  undefined1 local_28;
  
  bVar10 = *(char *)((int)param_3 + 0x26) == '\0';
  (**(code **)(*param_3 + 0x14))(param_3,*(code **)(*param_3 + 0x14),0x8000,0);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(bool *)(param_2 + 0x26) = bVar10;
  iVar1 = fn_004d5ad0(param_2);
  if ((iVar1 == 0) || (iVar1 = fn_004d4edc(param_1 + 0x1c), iVar1 == 0)) {
    uVar8 = 0;
    iVar1 = fn_004d5ad0(param_2);
    iVar5 = *(int *)(DAT_008bf4f4 + 0x20);
    if (iVar1 == 0) {
      if (iVar5 - 0x100000U < 0x3ff00000) {
        uVar8 = *(undefined2 *)(iVar5 + 0xaa);
      }
    }
    else {
      uVar8 = *(undefined2 *)(iVar5 + 0xe);
    }
    *(undefined2 *)(param_2 + 0xc) = uVar8;
    piVar7 = *(int **)(param_1 + 0x6c);
    if (piVar7 + -0x40000 < (int *)0x3ff00000) {
                    /* WARNING: Could not recover jumptable at 0x004cf400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar7 + 0xc))(piVar7,param_3,param_2);
      return;
    }
  }
  else {
    if (bVar10) {
      *(int *)(param_1 + 0x4c8) = param_3[7];
      *(undefined1 *)(param_1 + 0x4c1) = 1;
      *(undefined1 *)(param_1 + 0x4c0) = 1;
      puVar2 = (uint *)fn_004f0ce8();
      uVar3 = *puVar2;
      uVar6 = puVar2[1];
      uVar9 = (uint)((ulonglong)uVar3 * 15000);
      local_48 = 0;
      local_44 = 0;
      fn_004f01f4(&local_48);
      bVar10 = CARRY4(local_48,uVar9);
      local_48 = local_48 + uVar9;
      local_44 = local_44 + uVar6 * 15000 + (int)((ulonglong)uVar3 * 15000 >> 0x20) + (uint)bVar10;
      *(uint *)(param_1 + 0x4b8) = local_48;
      *(int *)(param_1 + 0x4bc) = local_44;
    }
    else {
      *(undefined1 *)(param_1 + 0x4c2) = 1;
      *(int *)(param_1 + 0x4c8) = param_3[7];
      puVar2 = (uint *)fn_004f0ce8();
      uVar3 = *puVar2;
      uVar6 = puVar2[1];
      uVar9 = (uint)((ulonglong)uVar3 * 15000);
      local_48 = 0;
      local_44 = 0;
      fn_004f01f4(&local_48);
      bVar10 = CARRY4(local_48,uVar9);
      local_48 = local_48 + uVar9;
      local_44 = local_44 + uVar6 * 15000 + (int)((ulonglong)uVar3 * 15000 >> 0x20) + (uint)bVar10;
      *(uint *)(param_1 + 0x4b8) = local_48;
      *(int *)(param_1 + 0x4bc) = local_44;
    }
    if (*(char *)(*(int *)(DAT_008bf4f4 + 0x20) + 0x18) != '\0') {
      fn_0050d0fc(&local_48,param_3);
      local_3c = 0x8237;
      local_28 = 3;
      fn_004ced00(param_1,&local_48,4,5);
      fn_0050d178(&local_48);
    }
    if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
      DAT_008edb36 = DAT_008edb36 + 1;
    }
    DAT_008ee154 = DAT_008ee154 + 1;
    fn_004ed130(param_1 + 0x70,fn_004d40b4,param_1);
    piVar7 = *(int **)(param_1 + 0x500);
    uVar4 = fn_0015f180(auStack_38);
    uStack_40 = 1;
    local_48 = param_2;
    local_44 = param_1;
    iVar1 = (**(code **)(*piVar7 + 0x30))(piVar7,param_1 + 0x70,uVar4,param_3);
    if (iVar1 < 0) {
      fn_004ed098(param_1 + 0x70,iVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x500) + 0x28))();
    fn_0050d1a0(param_1 + 0x4cc,param_3);
  }
  return;
}



void fn_004ceee8(int param_1)

{
  if (*(int **)(param_1 + 0x6c) + -0x40000 < (int *)0x3ff00000) {
                    /* WARNING: Could not recover jumptable at 0x004cef04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
    return;
  }
  return;
}


