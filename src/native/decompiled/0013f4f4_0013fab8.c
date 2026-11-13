#include "0013f4f4_0013fab8.h"



void fn_0013fab8(int param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = fn_002febd8(param_2);
  pcVar4 = (char *)(param_1 + 0xc);
  uVar6 = 0;
  if ((0xfe < uVar1) || (uVar1 != 0)) {
    pcVar2 = param_2;
    pcVar5 = pcVar4;
    do {
      uVar6 = uVar6 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      uVar7 = uVar1;
      if (0xfe < uVar1) {
        uVar7 = 0xff;
      }
      pcVar5 = pcVar4;
    } while (uVar6 < uVar7);
  }
  *pcVar4 = '\0';
  if (param_2[uVar1 - 1] != '/') {
    iVar3 = param_1 + uVar1;
    uVar1 = uVar1 + 1;
    *(undefined1 *)(iVar3 + 0xc) = 0x2f;
  }
  *(undefined1 *)(param_1 + uVar1 + 0xc) = 0;
  return;
}



void fn_0013fa94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = fn_00156618(param_2);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  fn_0013c500(param_1 + 0x110);
  return;
}



int fn_0013fa84(void)

{
  return (int)DAT_008c0605;
}



/* WARNING: Removing unreachable block (ram,0x0013fa2c) */

void fn_0013f8d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 != (int *)(param_1 + 0x28)) {
    do {
      piVar6 = (int *)*piVar5;
      if ((char)piVar5[-1] == '\x02') {
        fn_0017d90c(param_1 + 0x24);
        fn_0017d948(param_1 + 0x18,param_1 + 0x1c,piVar5);
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_1 + 0x28));
  }
  piVar5 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
    do {
      piVar6 = (int *)*piVar5;
      fn_0013fd24(piVar5 + -0x40);
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_1 + 4));
  }
  if (1 < *(uint *)(param_1 + 0xc)) {
    if (((DAT_008c0600 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c0600), iVar1 != 0)) {
      fn_00101a1c(&DAT_008ed148,&LAB_00158814,0xc,0x80);
    }
    while (*(int *)(param_1 + 0xc) != 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      fn_00150c1c(param_1 + 0xc);
      iVar2 = (uint)*(byte *)(iVar3 + -0x6b) + *(int *)(iVar3 + -0xb8);
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      fn_0017d948(&DAT_008ed148 + iVar1 * 3,&DAT_008ed14c + iVar1 * 3,iVar3);
    }
    iVar1 = 0;
    do {
      while ((&DAT_008ed148)[iVar1 * 3] != 0) {
        uVar4 = (&DAT_008ed14c)[iVar1 * 3];
        fn_00150c1c();
        fn_0017d948(param_1 + 0xc,param_1 + 0x10,uVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
  }
  return;
}



undefined4 * fn_0013f86c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00151944();
  *puVar1 = &DAT_00857b38;
  puVar1[1] = 0;
  puVar1[2] = puVar1 + 2;
  puVar1[3] = puVar1 + 2;
  puVar1[4] = 0;
  puVar1[5] = puVar1 + 5;
  puVar1[6] = puVar1 + 5;
  puVar1[7] = 0;
  puVar1[8] = puVar1 + 8;
  puVar1[9] = puVar1 + 8;
  return puVar1;
}



undefined4 fn_0013f814(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = fn_001517f0(param_1 + 8);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar5 = 0;
    pcVar2 = (char *)(param_1 + 0x24);
    do {
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar2 + 1;
      *pcVar2 = *param_3;
      param_3 = param_3 + 1;
      bVar7 = *param_3 == '\0';
      uVar6 = 0;
      if (!bVar7) {
        uVar6 = 0x3f;
      }
      pcVar2 = pcVar3;
    } while ((bVar7 || uVar5 <= uVar6) && (!bVar7 && uVar6 != uVar5));
    *pcVar3 = '\0';
    uVar4 = 1;
  }
  return uVar4;
}



uint fn_0013f638(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_20;
  uint local_1c;
  
  uVar4 = 0;
  if (((((param_3[2] & 0xf) != 0) || ((param_3[3] & 0x7f) != 0)) || ((param_3[4] & 0x7f) != 0)) ||
     (((param_3[6] & 3) != 0 || ((param_3[7] & 0xf) != 0)))) {
    uVar4 = 0x80000020;
  }
  if (*param_2 != 0x484342) {
    uVar4 = uVar4 | 0x80000040;
  }
  if (0x22 < *(byte *)(param_2 + 1)) {
    uVar4 = uVar4 | 0x80000002;
  }
  if (*(byte *)((int)param_2 + 5) < 0x23) {
    uVar4 = uVar4 | 0x80000004;
  }
  if ((*(byte *)(param_2 + 0x10) & 2) != 0) {
    uVar4 = uVar4 | 0x80000008;
  }
  if (-1 < (int)uVar4) {
    local_38 = param_3[6];
    local_34 = local_38 + param_2[0xe];
    local_30 = param_3[9];
    if (local_30 == 0) {
      local_30 = param_3[7];
    }
    local_2c = local_30 + param_2[0xf];
    fn_0015158c(&local_20,param_1,param_3[5],(uint)param_2[0xd] >> 2,param_3,param_2,&local_38);
    if ((int)local_1c < 0) {
      uVar4 = local_1c | uVar4;
    }
    else {
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      uVar9 = param_3[4];
      uVar10 = param_3[5];
      uVar11 = param_3[6];
      uVar12 = param_3[7];
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      param_1[4] = uVar9;
      param_1[5] = uVar10;
      param_1[6] = uVar11;
      param_1[7] = uVar12;
      uVar6 = param_3[9];
      param_1[8] = param_3[8];
      param_1[9] = uVar6;
      param_1[10] = local_20;
      param_1[0xb] = param_2;
      param_1[0xc] = uVar5;
      fn_00151170(param_1,&local_38,&local_30,uVar6,uVar12);
      if ((param_3[8] == 0) && (uVar1 = 0, *(short *)(param_1[0xc] + 0x10) != 0)) {
        do {
          uVar2 = uVar1 + 1;
          iVar3 = *(int *)(*(int *)(param_1[0xc] + 0xc) + uVar1 * 4);
          *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) | 0x40;
          uVar1 = uVar2;
        } while (uVar2 < *(ushort *)(param_1[0xc] + 0x10));
      }
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
    }
  }
  return uVar4;
}



undefined4 fn_0013f624(undefined4 param_1)

{
  fn_00150be0();
  return param_1;
}



undefined4 fn_0013f598(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  puVar3 = (undefined4 *)(iVar1 + 3U & 0xfffffffc);
  puVar2 = puVar3 + 4;
  if (puVar2 <= *(undefined4 **)(param_1 + 0x2c)) {
    fn_0016048c(param_1,iVar1,(int)puVar2 - iVar1);
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = 0;
      puVar3[1] = iVar1;
      *puVar3 = param_2;
      puVar3[3] = 0;
      puVar3[2] = *(undefined4 *)(param_1 + 0x2c);
      puVar3[3] = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 **)(param_1 + 0x30) = puVar3;
      return 1;
    }
  }
  return 0;
}



undefined4 fn_0013f4f4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (param_2 == 0) {
LAB_0013f534:
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[1];
      iVar3 = *(int *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x28) = iVar2;
      *(int *)(param_1 + 0x2c) = piVar1[2];
      *(int *)(param_1 + 0x30) = piVar1[3];
      fn_00150bb4(param_1,iVar2,iVar3 - iVar2);
      fn_00150bb4(param_1,iVar4,*(int *)(param_1 + 0x2c) - iVar4);
      return 1;
    }
  }
  else {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      if (*piVar1 == param_2) goto LAB_0013f534;
    }
  }
  return 0;
}


