#include "004d05c4_004d0ef8.h"



uint fn_004d0ef8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r7;
  bool bVar6;
  uint local_20;
  int local_1c;
  
  bVar6 = *(int *)(param_1 + 0x40) != 0;
  if (bVar6) {
    param_2 = *(int *)(param_1 + 0x44);
  }
  if ((bVar6 && param_2 != 0) && (iVar1 = fn_004c7eb8(), iVar1 == 0)) {
    puVar2 = (uint *)fn_004f0ce8();
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = (uint)((ulonglong)uVar3 * 30000);
    local_20 = 0;
    local_1c = 0;
    fn_004f01f4(&local_20);
    bVar6 = CARRY4(local_20,uVar5);
    local_20 = local_20 + uVar5;
    local_1c = local_1c + uVar4 * 30000 + (int)((ulonglong)uVar3 * 30000 >> 0x20) + (uint)bVar6;
    *(int *)(param_1 + 0x4c) = local_1c;
    *(uint *)(param_1 + 0x48) = local_20;
    iVar1 = fn_004c8130(*(undefined4 *)(param_1 + 0x40));
    *(int *)(param_1 + 0x50) = iVar1;
    if (-1 < iVar1) {
      if (*(int *)(*(int *)(param_1 + 0x40) + 0x7c) == 0) {
        *(undefined4 *)(param_1 + 0x50) = 0xd8a148c3;
      }
      else {
        fn_004c7e78();
      }
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(char **)(param_1 + 0x2c) = "NatServerAddressResolveJob::StepComplete";
  *(code **)(param_1 + 0x24) = fn_004d10ac;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r7 & 0xff00 | 6;
}



int fn_004d0c6c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[0x25];
  *param_1 = &DAT_00856240;
  while (iVar1 != 0) {
    puVar2 = param_1 + 0x22;
    if (param_1[0x25] != 0) {
      puVar2 = (undefined4 *)param_1[0x23];
    }
    if (param_1[0x25] != 0 && puVar2 != (undefined4 *)0x0) {
      puVar2 = puVar2 + 2;
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    (**(code **)*puVar2)();
    fn_004f0c1c(param_1 + 0x22,puVar2 + -2);
    fn_004f0ab4(param_1 + 0x26,param_1 + 0x27,param_1[0x2a] + (int)(puVar2 + -2));
    iVar1 = param_1[0x25];
  }
  iVar1 = param_1[0x32];
  while (iVar1 != 0) {
    puVar2 = param_1 + 0x2f;
    if (param_1[0x32] != 0) {
      puVar2 = (undefined4 *)param_1[0x30];
    }
    if (param_1[0x32] != 0 && puVar2 != (undefined4 *)0x0) {
      puVar2 = puVar2 + 2;
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    (**(code **)*puVar2)();
    fn_004f0c1c(param_1 + 0x2f,puVar2 + -2);
    fn_004f0ab4(param_1 + 0x33,param_1 + 0x34,param_1[0x37] + (int)(puVar2 + -2));
    iVar1 = param_1[0x32];
  }
  iVar1 = param_1[0x3f];
  while (iVar1 != 0) {
    puVar2 = param_1 + 0x3c;
    if (param_1[0x3f] != 0) {
      puVar2 = (undefined4 *)param_1[0x3d];
    }
    if (param_1[0x3f] != 0 && puVar2 != (undefined4 *)0x0) {
      puVar2 = puVar2 + 2;
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    (**(code **)*puVar2)();
    fn_004f0c1c(param_1 + 0x3c,puVar2 + -2);
    fn_004f0ab4(param_1 + 0x40,param_1 + 0x41,param_1[0x44] + (int)(puVar2 + -2));
    iVar1 = param_1[0x3f];
  }
  iVar1 = param_1[0x4c];
  while (iVar1 != 0) {
    puVar2 = param_1 + 0x49;
    if (param_1[0x4c] != 0) {
      puVar2 = (undefined4 *)param_1[0x4a];
    }
    if (param_1[0x4c] != 0 && puVar2 != (undefined4 *)0x0) {
      puVar2 = puVar2 + 2;
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    fn_0050d178();
    fn_004f0c1c(param_1 + 0x49,puVar2 + -2);
    fn_004f0ab4(param_1 + 0x4d,param_1 + 0x4e,param_1[0x51] + (int)(puVar2 + -2));
    iVar1 = param_1[0x4c];
  }
  if (DAT_008bf4f4 != 0) {
    *(undefined4 *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0) = 0;
  }
  iVar1 = fn_0050d178(param_1 + 0x133);
  *(undefined **)(iVar1 + -0x3ac) = &DAT_00856158;
  puVar2 = *(undefined4 **)(iVar1 + -0x3a0);
  while (puVar2 != (undefined4 *)(iVar1 + -0x3a4)) {
    puVar3 = (undefined4 *)puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    fn_004f0ab4(iVar1 + -0x398,iVar1 + -0x394,*(int *)(iVar1 + -0x388) + (int)puVar2);
    puVar2 = puVar3;
  }
  fn_004f0c04(iVar1 + -0x3a8);
  iVar1 = fn_004cb994(iVar1 + -0x3e0);
  iVar1 = fn_004cb994(iVar1 + -0x34);
  iVar1 = fn_004c77dc(iVar1 + -0x34);
  iVar1 = fn_0050d178(iVar1 + -0x40);
  iVar1 = fn_0050d178(iVar1 + -0x28);
  return iVar1 + -0x1c;
}



int fn_004d0990(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_00856240;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  iVar2 = fn_0013d5c4(puVar1 + 7);
  iVar2 = fn_0013d5c4(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  iVar2 = fn_004ed164(iVar2 + 0x2c);
  iVar2 = fn_004c76a4(iVar2 + 0x14);
  iVar2 = fn_004cb860(iVar2 + 0x34);
  iVar2 = fn_004cb860(iVar2 + 0x34);
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  fn_004f0c04(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  fn_004f0c04(iVar2 + 0x48);
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  if (iVar2 + 100 != 0) {
    uVar4 = 0;
    *(int *)(iVar2 + 0x5c) = iVar2 + 100;
    *(undefined4 *)(iVar2 + 0x60) = 0xc;
    do {
      puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x5c) + uVar4 * 0x48);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      fn_004f0b78(iVar2 + 0x48,iVar2 + 0x4c,
                   *(int *)(iVar2 + 0x58) + *(int *)(iVar2 + 0x5c) + uVar4 * 0x48);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xc);
  }
  *(undefined **)(iVar2 + 0x34) = &DAT_00856158;
  puVar1 = *(undefined4 **)(iVar2 + 0x40);
  while (puVar1 != (undefined4 *)(iVar2 + 0x3c)) {
    puVar3 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(iVar2 + 0x48,iVar2 + 0x4c,*(int *)(iVar2 + 0x58) + (int)puVar1);
    puVar1 = puVar3;
  }
  fn_004f0c04(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x3c4) = 0;
  *(undefined4 *)(iVar2 + 0x3c8) = 0;
  *(undefined4 *)(iVar2 + 0x3cc) = 0;
  *(undefined4 *)(iVar2 + 0x3d0) = 0;
  *(undefined1 *)(iVar2 + 0x3d4) = 0;
  *(undefined1 *)(iVar2 + 0x3d5) = 0;
  *(undefined1 *)(iVar2 + 0x3d6) = 0;
  *(undefined1 *)(iVar2 + 0x3d7) = 0;
  *(undefined1 *)(iVar2 + 0x3d8) = 0;
  *(undefined1 *)(iVar2 + 0x3d9) = 0;
  *(undefined4 *)(iVar2 + 0x3dc) = 0;
  iVar2 = fn_0013d5c4(iVar2 + 0x3e0);
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  puVar1 = *(undefined4 **)(iVar2 + -0x43c);
  while (puVar1 != (undefined4 *)(iVar2 + -0x440)) {
    puVar3 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(iVar2 + -0x434,iVar2 + -0x430,*(int *)(iVar2 + -0x424) + (int)puVar1);
    puVar1 = puVar3;
  }
  fn_004f0c04(iVar2 + -0x444);
  puVar1 = *(undefined4 **)(iVar2 + -0x408);
  while (puVar1 != (undefined4 *)(iVar2 + -0x40c)) {
    puVar3 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(iVar2 + -0x400,iVar2 + -0x3fc,*(int *)(iVar2 + -0x3f0) + (int)puVar1);
    puVar1 = puVar3;
  }
  fn_004f0c04(iVar2 + -0x410);
  puVar1 = *(undefined4 **)(iVar2 + -0x3d4);
  while (puVar1 != (undefined4 *)(iVar2 + -0x3d8)) {
    puVar3 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(iVar2 + -0x3cc,iVar2 + -0x3c8,*(int *)(iVar2 + -0x3bc) + (int)puVar1);
    puVar1 = puVar3;
  }
  fn_004f0c04(iVar2 + -0x3dc);
  puVar1 = *(undefined4 **)(iVar2 + -0x3a0);
  while (puVar1 != (undefined4 *)(iVar2 + -0x3a4)) {
    puVar3 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(iVar2 + -0x398,iVar2 + -0x394,*(int *)(iVar2 + -0x388) + (int)puVar1);
    puVar1 = puVar3;
  }
  fn_004f0c04(iVar2 + -0x3a8);
  return iVar2 + -0x4cc;
}



undefined4 * fn_004d07ac(int param_1,char param_2,int *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [36];
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  char local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined1 auStack_44 [8];
  uint local_3c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  short local_1c;
  
  fn_004c6d54(auStack_60);
  local_5c = *(undefined4 *)(param_1 + 0x18);
  local_50 = *param_4;
  uStack_4c = param_4[1];
  local_58 = param_2;
  (**(code **)(*param_3 + 0x14))(param_3,*(code **)(*param_3 + 0x14),0x8000,0);
  uVar4 = 1;
  if (local_58 == '\x01') {
    uVar4 = 2;
  }
  iVar1 = fn_006d4258(auStack_60,auStack_38,auStack_28,0x10);
  if (iVar1 < 0) {
    puVar3 = &DAT_008c0630;
    if (DAT_008c0630 != (undefined4 *)0x0) {
      puVar3 = DAT_008c0630;
    }
    return puVar3;
  }
  fn_0050d0fc(auStack_88,param_3);
  pcVar2 = (char *)fn_004c9edc();
  if (*pcVar2 != '\0') {
    fn_004ed7b8(&local_48,param_3 + 1);
    fn_004ed440(auStack_20,auStack_44);
    local_1c = local_1c + 10;
    fn_004ed700(&local_48,auStack_20);
    fn_0050d060(auStack_88,&local_48);
    local_48 = &DAT_00856c94;
  }
  local_3c = uVar4 | 0x4000000;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),&local_3c,auStack_84,0x10,1);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    if (param_5 != 0) {
      *(char *)(iVar1 + 0xcc) = (char)param_5;
    }
    fn_001694d4(iVar1,auStack_38);
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
  puVar3 = (undefined4 *)fn_0050d178(auStack_88);
  return puVar3;
}



undefined1 * fn_004d05c4(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_18;
  uint uStack_14;
  
  if (*(char *)(DAT_008bf4f4 + 0x30) == '\0') {
    puVar5 = &DAT_e0a14827;
  }
  else {
    puVar2 = (undefined4 *)fn_00509574(*(undefined4 *)(param_1 + 0x10),0x400);
    (**(code **)(*(int *)*puVar2 + 0x28))();
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x2c))();
    while (iVar3 == 0) {
      uVar4 = fn_006d9a38(puVar2);
      fn_004ce7b0(param_1,uVar4);
      (**(code **)(*(int *)*puVar2 + 0x30))();
      iVar3 = (**(code **)(*(int *)*puVar2 + 0x2c))();
    }
    local_18 = 0;
    uStack_14 = 0;
    fn_004f01f4(&local_18);
    uVar8 = DAT_008c06c0;
    if (*(uint *)(param_1 + 0x4b4) <= uStack_14 &&
        (uint)(local_18 <= *(uint *)(param_1 + 0x4b0)) <= *(uint *)(param_1 + 0x4b4) - uStack_14) {
      puVar6 = (uint *)fn_004f0ce8();
      uVar9 = *puVar6;
      uVar7 = puVar6[1];
      lVar1 = (ulonglong)uVar8 * (ulonglong)uVar9;
      uVar10 = (uint)lVar1;
      *(uint *)(param_1 + 0x4b0) = uVar10 + local_18;
      *(uint *)(param_1 + 0x4b4) =
           uVar9 * ((int)uVar8 >> 0x1f) + uVar7 * uVar8 + (int)((ulonglong)lVar1 >> 0x20) +
           uStack_14 + (uint)CARRY4(uVar10,local_18);
      if ((*(char *)(param_1 + 0x4f4) != '\0') &&
         (*(uint *)(param_1 + 0x4fc) <= uStack_14 &&
          (uint)(local_18 <= *(uint *)(param_1 + 0x4f8)) <= *(uint *)(param_1 + 0x4fc) - uStack_14))
      {
        fn_004ced00(param_1,param_1 + 0x44,0,3);
        puVar6 = (uint *)fn_004f0ce8();
        uVar7 = *puVar6;
        uVar9 = puVar6[1];
        uVar8 = (uint)((ulonglong)uVar7 * 15000);
        *(uint *)(param_1 + 0x4f8) = uVar8 + local_18;
        *(uint *)(param_1 + 0x4fc) =
             uVar9 * 15000 + (int)((ulonglong)uVar7 * 15000 >> 0x20) + uStack_14 +
             (uint)CARRY4(uVar8,local_18);
      }
      puVar5 = (undefined1 *)fn_004ce3c0(param_1,&local_18);
      return puVar5;
    }
    puVar5 = (undefined1 *)0x0;
  }
  return puVar5;
}


