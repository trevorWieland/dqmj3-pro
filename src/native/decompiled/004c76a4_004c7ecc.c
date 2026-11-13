#include "004c76a4_004c7ecc.h"



undefined1 * fn_004c7ecc(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [36];
  undefined1 auStack_28 [12];
  
  if ((DAT_008bf4e0 == 0) || (iVar2 = fn_006d92b8(), iVar2 == 0)) {
    if (DAT_008edb36 == -1) {
      DAT_008edb36 = 1;
    }
    else {
      DAT_008edb36 = DAT_008edb36 + 1;
    }
  }
  if (DAT_008ee154 == -1) {
    DAT_008ee154 = 1;
  }
  else {
    DAT_008ee154 = DAT_008ee154 + 1;
  }
  fn_00468fb0();
  uVar1 = fn_004c5e5c();
  *(undefined2 *)(param_1 + 0xaa) = uVar1;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(undefined1 *)(param_1 + 0xa8) = 3;
    fn_004c8f28(param_1,0);
    return (undefined1 *)0x0;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    return &DAT_e0a14827;
  }
  fn_0013d5c4(auStack_50);
  fn_004ed714(auStack_4c);
  iVar2 = param_1 + 0x8b8;
  fn_004ed130(iVar2,&DAT_004c8f1c,param_1);
  fn_004ed454(auStack_28,0,*(undefined2 *)(param_1 + 0xaa));
  iVar3 = fn_004cac58(param_1 + 0xb0,iVar2,auStack_28,auStack_50,auStack_50,
                       *(undefined4 *)(param_1 + 0xa0),0);
  if (iVar3 < 0) {
    fn_004ed098(iVar2,iVar3);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 3;
    fn_004efce8(param_1 + 0xb0);
  }
  fn_0050d178(auStack_50);
  return (undefined1 *)0x0;
}



int fn_004c7eb8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 4) + 0x10);
  }
  return iVar1;
}



undefined4 fn_004c7e78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xa0) - 0x100000U < 0x3ff00000) &&
     (iVar1 = fn_004d0110(*(int *)(param_1 + 0xa0),param_1 + 0xb0), -1 < iVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_004c7e40(int param_1,int *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_20;
  int local_1c;
  
  if (param_2[7] == 0) {
                    /* WARNING: Could not recover jumptable at 0x004c7e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),1,0);
    return;
  }
  iVar8 = *(int *)(param_1 + 0xa0);
  iVar3 = fn_004d04cc(iVar8,param_2[7]);
  if ((iVar3 != 0) && (*(int *)(iVar8 + 0x4c8) == param_2[7])) {
    if (*(char *)(iVar8 + 0x4c1) != '\0') {
      *(undefined4 *)(iVar8 + 0x4c8) = 0;
      *(undefined1 *)(iVar8 + 0x4c1) = 0;
      *(undefined1 *)(iVar8 + 0x4c0) = 0;
    }
    if (*(char *)(iVar8 + 0x4c2) != '\0') {
      *(undefined4 *)(iVar8 + 0x4c8) = 0;
      *(undefined1 *)(iVar8 + 0x4c2) = 0;
      *(undefined1 *)(iVar8 + 0x4c0) = 0;
    }
    if (*(char *)(iVar8 + 0x70) == '\x01') {
      fn_004cf878(iVar8);
    }
    *(undefined1 *)(iVar8 + 0x4c4) = 0;
  }
  if (param_3 != 0) {
    fn_004c71f0(iVar8 + 0x84,param_2);
    fn_004cc2e0(iVar8 + 0x120,param_2);
    return;
  }
  piVar4 = (int *)fn_004c6fb8(iVar8 + 0x84,param_2[7]);
  if ((piVar4 == (int *)0x0) || (piVar4[0x11] == -1)) {
    fn_004c708c(iVar8 + 0x84,param_2[7]);
    fn_004cc2e0(iVar8 + 0x120,param_2);
    return;
  }
  *(undefined1 *)((int)piVar4 + 0x41) = 1;
  piVar4[0x13] = 1;
  uVar2 = DAT_008c3624;
  puVar5 = (uint *)fn_004f0ce8();
  uVar7 = *puVar5;
  uVar6 = puVar5[1];
  lVar1 = (ulonglong)uVar2 * (ulonglong)uVar7;
  uVar9 = (uint)lVar1;
  local_20 = 0;
  local_1c = 0;
  fn_004f01f4(&local_20);
  piVar4[0xf] = local_1c +
                uVar7 * ((int)uVar2 >> 0x1f) + uVar6 * uVar2 + (int)((ulonglong)lVar1 >> 0x20) +
                (uint)CARRY4(local_20,uVar9);
  piVar4[0xe] = local_20 + uVar9;
                    /* WARNING: Could not recover jumptable at 0x004cf568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 8))(piVar4,*(code **)(*piVar4 + 8),0x8000,0);
  return;
}



undefined1 * fn_004c7bd4(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_e0a14827;
  if ((((*(char *)(param_1 + 0xa8) == '\0') && (iVar1 = fn_004b7748(), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x90) != 0)) &&
     ((*(int *)(param_1 + 4) - 0x100000U < 0x3ff00000 &&
      (iVar1 = fn_006d897c(param_1 + 0x20), iVar1 == 0)))) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    fn_004ed130(param_1 + 0x890,&DAT_004c95c0,param_1);
    puVar2 = (undefined1 *)fn_004d1160(param_1 + 0x20,param_1 + 0x890,param_1);
    if (-1 < (int)puVar2) {
      fn_004efcf4(param_1 + 0x20,1);
      return (undefined1 *)0x0;
    }
  }
  return puVar2;
}



undefined1 * fn_004c7b30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_008bf4d4;
  uVar2 = 0;
  if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
    iVar5 = DAT_008bf4d4 + 0x10;
    if (*(char *)(DAT_008bf4d4 + 0x28) == '\0') {
      iVar4 = fn_0050c68c(iVar5,0x508);
      uVar2 = 0;
      if (iVar4 != 0) {
        uVar2 = fn_004d0990();
      }
      uVar2 = fn_0050c920(iVar5,uVar2,0x4000000);
    }
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    uVar2 = fn_0050c6d8(iVar1 + 0x10,uVar2,0x400);
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = &DAT_e0a14827;
  }
  return puVar3;
}



void fn_004c7890(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint local_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    return;
  }
  if (DAT_008bf4f0 != '\0') goto LAB_004c7ac0;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar3 = *(uint *)(param_1 + 0x68);
    iVar5 = *(int *)(param_1 + 0x6c);
    local_28 = 0;
    iStack_24 = 0;
    fn_004f01f4(&local_28);
    iVar4 = uVar3 - local_28;
    iVar2 = iStack_24 + (uint)(uVar3 < local_28);
    puVar1 = (undefined4 *)fn_004f0ce8();
    iVar2 = fn_0011c134(iVar4,iVar5 - iVar2,*puVar1,puVar1[1]);
    iVar2 = (iVar2 + 1) / 5;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (15000 < iVar2) {
      iVar2 = 15000;
    }
    iVar4 = 0;
    do {
      if (DAT_008c0630 != 0) {
        fn_006d897c(param_1 + 0x20,2);
      }
      fn_004edd1c(param_1 + 0x20,5);
      iVar5 = fn_006d897c(param_1 + 0x20);
      bVar6 = iVar5 != 0;
      iVar5 = 0;
      if (bVar6) {
        iVar4 = iVar4 + 1;
        iVar5 = iVar2 - iVar4;
      }
    } while ((bVar6 && iVar2 != iVar4) && iVar5 < 0 == (bVar6 && SBORROW4(iVar2,iVar4)));
  }
  if (*(char *)(param_1 + 0xa8) == '\x02') {
    fn_004edd08(param_1 + 0x4c8);
  }
  if (*(char *)(param_1 + 0xa8) == '\x03') {
    if (*(int *)(param_1 + 0xa0) != 0) {
      fn_004edd08(param_1 + 0xb0);
      goto LAB_004c7a98;
    }
  }
  else {
LAB_004c7a98:
    if (*(int *)(param_1 + 0xa0) != 0) {
      fn_004d0294();
    }
  }
  if (*(int *)(param_1 + 4) - 0x100000U < 0x3ff00000) {
    fn_004ed068();
    *(undefined4 *)(param_1 + 4) = 0;
  }
LAB_004c7ac0:
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}



undefined4 * fn_004c77dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &DAT_00855f0c;
  if (param_1[0xc] - 0x100000 < 0x3ff00000) {
    if (param_1[10] != 0) {
      puVar1 = (undefined4 *)param_1[3];
      while (puVar1 != param_1 + 2) {
        puVar2 = (undefined4 *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        fn_004f0ab4(param_1 + 5,param_1 + 6,param_1[9] + (int)puVar1);
        puVar1 = puVar2;
      }
      fn_004f0c04(param_1 + 1);
    }
    iVar3 = param_1[0xc];
    if (iVar3 != 0) {
      fn_00656b0c(iVar3);
      fn_00656b7c(iVar3);
    }
    param_1[0xc] = 0;
  }
  return param_1;
}



undefined4 * fn_004c76a4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  param_1[2] = 0;
  param_1[3] = 0;
  fn_004f0c04();
  param_1[6] = 0;
  param_1[7] = 0;
  fn_004f0c04(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *param_1 = &DAT_00855f0c;
  param_1[0xc] = 0;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x9c0,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar5 = (undefined1 *)(iVar2 + uVar4);
      uVar4 = uVar4 + 1;
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
    } while (uVar4 < 0x9c0);
  }
  param_1[0xc] = iVar2;
  if (iVar2 != 0) {
    uVar4 = 0;
    param_1[10] = iVar2;
    param_1[0xb] = 0x18;
    do {
      puVar3 = (undefined4 *)(param_1[10] + uVar4 * 0x68);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      fn_004f0b78(param_1 + 5,param_1 + 6,param_1[9] + param_1[10] + uVar4 * 0x68);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x18);
  }
  puVar3 = (undefined4 *)param_1[3];
  while (puVar3 != param_1 + 2) {
    puVar6 = (undefined4 *)puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    fn_004f0ab4(param_1 + 5,param_1 + 6,param_1[9] + (int)puVar3);
    puVar3 = puVar6;
  }
  fn_004f0c04(param_1 + 1);
  return param_1;
}


