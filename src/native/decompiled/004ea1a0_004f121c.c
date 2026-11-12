#include "004ea1a0_004f121c.h"



void fn_004f121c(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_40;
  uint uStack_3c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0;
  uStack_1c = 0;
  fn_004f01f4(&local_20);
  *(undefined4 *)(param_1 + 0x30) = local_20;
  *(undefined4 *)(param_1 + 0x34) = uStack_1c;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (param_2 == 0) {
    uVar6 = DAT_008c0640;
    uVar2 = DAT_008c0644;
  }
  else {
    puVar1 = (uint *)fn_004f0ce8();
    uVar2 = (uint)((ulonglong)param_2 * (ulonglong)*puVar1);
    uVar6 = *(uint *)(param_1 + 0x30) + uVar2;
    uVar2 = *(int *)(param_1 + 0x34) +
            puVar1[1] * param_2 + (int)((ulonglong)param_2 * (ulonglong)*puVar1 >> 0x20) +
            (uint)CARRY4(*(uint *)(param_1 + 0x30),uVar2);
  }
  local_40 = 0;
  uStack_3c = 0;
  fn_004edc34();
  while (*(int *)(param_1 + 0x10) != 0) {
    fn_004f01f4(&local_40);
    if (uVar2 <= uStack_3c && (uint)(local_40 <= uVar6) <= uVar2 - uStack_3c) {
      bVar7 = *(int *)(param_1 + 0x10) != 0;
      iVar3 = 0;
      if (bVar7) {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      if (bVar7 && iVar3 != 0) {
        uVar5 = *(uint *)(param_1 + 0x14);
        iVar3 = iVar3 - uVar5;
      }
      else {
        iVar3 = 0;
        uVar5 = uStack_3c;
      }
      iVar4 = fn_004f0a60(param_1 + 0x18,uVar5,uVar2 - (uStack_3c + (local_40 > uVar6)));
      if ((iVar4 == 0) || (iVar4 = iVar4 - *(int *)(param_1 + 0x28), iVar4 == 0)) goto LAB_004f145c;
      goto LAB_004f1310;
    }
    bVar7 = *(int *)(param_1 + 0x10) != 0;
    iVar3 = 0;
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 8);
    }
    if (bVar7 && iVar3 != 0) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x14);
    }
    else {
      iVar3 = 0;
    }
    if (uStack_3c <= *(uint *)(iVar3 + 0x14) &&
        (uint)(*(uint *)(iVar3 + 0x10) <= local_40) <= uStack_3c - *(uint *)(iVar3 + 0x14)) break;
    fn_004f0a20(param_1 + 4);
    fn_004efe44(iVar3,0);
  }
  iVar3 = *(int *)(param_1 + 0x24);
  while (iVar3 != 0) {
    iVar3 = fn_004f0a60();
    if (iVar3 != 0) {
      iVar3 = iVar3 - *(int *)(param_1 + 0x28);
    }
    fn_004f0b78(param_1 + 4,param_1 + 8,*(int *)(param_1 + 0x14) + iVar3);
    iVar3 = *(int *)(param_1 + 0x24);
  }
  goto LAB_004f145c;
LAB_004f1310:
  do {
    if (iVar3 == 0) {
      fn_004f0b78(param_1 + 4,param_1 + 8,*(int *)(param_1 + 0x14) + iVar4);
      iVar4 = fn_004f0a60();
      if (iVar4 == 0) break;
LAB_004f1398:
      iVar4 = iVar4 - *(int *)(param_1 + 0x28);
    }
    else {
      if (*(uint *)(iVar3 + 0x14) < *(uint *)(iVar4 + 0x14) ||
          *(uint *)(iVar4 + 0x14) - *(uint *)(iVar3 + 0x14) <
          (uint)(*(uint *)(iVar3 + 0x10) <= *(uint *)(iVar4 + 0x10))) {
        fn_004f0b78(param_1 + 4,*(int *)(param_1 + 0x14) + iVar3,*(int *)(param_1 + 0x14) + iVar4);
        iVar4 = fn_004f0a60();
        if (iVar4 != 0) goto LAB_004f1398;
        break;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 4);
      if (iVar3 == param_1 + 8) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 - *(int *)(param_1 + 0x14);
      }
    }
  } while (iVar4 != 0);
LAB_004f145c:
  fn_004edc70(param_1 + 0x3c);
  return;
}



void fn_004f11b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_008bf49c;
  if (DAT_008bf49c != (undefined4 *)0x0) {
    piVar1 = DAT_008bf49c + 0x12;
    *DAT_008bf49c = &DAT_00856d7c;
    if (*piVar1 != 0) {
      fn_004ef7ac();
      fn_004ecfd0();
    }
    fn_004ecfd0(puVar2);
    DAT_008bf49c = (undefined4 *)0x0;
  }
  return;
}



void fn_004ed098(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_c;
  
  local_c = param_2;
  if (-1 < param_2) {
    fn_004ed4f8(2,0,&local_c,param_4,param_1);
  }
  *(int *)(param_1 + 4) = local_c;
  *param_1 = 3;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(local_c,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}



void fn_004ea1a0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [36];
  
  iVar4 = *(int *)(DAT_008bf504 + 0x14) + 0x48;
  fn_004edc34(iVar4);
  piVar3 = param_1 + 0x5d;
  fn_004edc34(piVar3);
  uVar2 = 0;
  do {
    if (param_1[uVar2 * 5 + 0xf] != 0) {
      iVar5 = param_1[uVar2 * 5 + 0xe];
      puVar1 = (undefined4 *)fn_004dbe24(auStack_48,*(int *)(DAT_008bf504 + 0x14) + 0x6c,0x5dc);
      *puVar1 = &DAT_00856ae8;
      puVar1[5] = iVar5;
      *(undefined1 *)(puVar1 + 3) = 0x16;
      *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
      (**(code **)(*param_1 + 0x1c))(param_1,auStack_48,param_1 + uVar2 * 5 + 0xd);
      iVar5 = fn_004e21dc(*(undefined4 *)(DAT_008bf504 + 0x14),auStack_48,0xfe);
      if (iVar5 < 0) {
        fn_004edc70(piVar3);
        fn_004edc70(iVar4);
        return;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  fn_004edc70(piVar3);
  fn_004edc70(iVar4);
  return;
}


