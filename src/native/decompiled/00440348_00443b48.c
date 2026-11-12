#include "00440348_00443b48.h"



void fn_00443b48(int param_1)

{
  undefined4 uVar1;
  
  fn_0022de40(param_1 + 0xb4,(&DAT_007c4da2)[*(int *)(param_1 + 0xc0) * 2]);
  uVar1 = fn_00231cb8((&DAT_007c4da3)[*(int *)(param_1 + 0xc0) * 2]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  fn_003f59b4(param_1,3);
  fn_003f5990(param_1);
  return;
}



void fn_00442e8c(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint local_3c;
  uint uStack_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  
  iVar6 = *(int *)(param_1 + 0x7c);
  iVar11 = *(int *)(param_1 + 0x78);
  iVar7 = fn_006ba284(param_1);
  uVar14 = (iVar6 - iVar11 >> 2) * iVar7 + param_2;
  uVar8 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
  if (uVar8 <= uVar14) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar14,uVar8);
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0xb4) + uVar14 * 2);
  local_30 = (int)sVar1;
  local_2c = (int)*(short *)(*(int *)(param_1 + 0xc4) + 0x1c);
  *(short *)(*(int *)(param_1 + 0xc4) + 0x1c) = sVar1;
  fn_002317d8(&local_34,local_30,0);
  puVar4 = local_34;
  piVar15 = (int *)(*(int *)(param_1 + 0xc4) + 0x20);
  uVar8 = fn_00100b58(local_34);
  puVar16 = &DAT_008f9ce8;
  puVar9 = (undefined4 *)*piVar15;
  if (uVar8 == 0) {
    piVar10 = puVar9 + -3;
    iVar6 = *piVar10;
    if (iVar6 != 0) {
      if ((puVar9 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(*piVar15 + -0xc,*(int *)(*piVar15 + -8) + 8,0);
      }
      *piVar15 = (int)&DAT_008f9cf4;
      goto LAB_0044313c;
    }
    puVar9[-1] = 0;
    puVar13 = (undefined2 *)*piVar15;
  }
  else {
    if (((1 < puVar9[-3] + 1) || ((uint)puVar9[-2] < uVar8)) ||
       ((puVar4 != (undefined4 *)0x0 &&
        ((puVar9 <= puVar4 && (puVar4 < (undefined4 *)((int)puVar9 + puVar9[-1] * 2))))))) {
      uVar14 = puVar9[-1];
      local_3c = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (local_3c < uVar14 + 0x80) {
        local_3c = uVar14 + 0x80;
      }
      puVar12 = &uStack_38;
      if (uVar8 <= local_3c) {
        puVar12 = &local_3c;
      }
      uStack_38 = uVar8;
      uVar14 = *puVar12;
      if (0xfffffff1 < uVar14) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14,0xfffffff1);
      }
      if (uVar14 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,uVar14);
      }
      if (uVar14 != 0) {
        puVar16 = (undefined4 *)fn_00100fc6((uVar14 + 8) * 2,0);
        if (puVar16 != (undefined4 *)0x0) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
        }
        puVar13 = (undefined2 *)((int)puVar16 + uVar8 * 2 + 0xc);
        *puVar16 = 0;
        puVar16[1] = uVar14;
        puVar16[2] = uVar8;
        if (puVar13 != (undefined2 *)0x0) {
          *puVar13 = 0;
        }
      }
      fn_00301a9c(puVar16 + 3,puVar4,uVar8 << 1);
      if ((undefined4 *)*piVar15 != &DAT_008f9cf4) {
        piVar10 = (undefined4 *)*piVar15 + -3;
        iVar6 = *piVar10;
        if ((iVar6 == -1) || ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar15 + -0xc,*(int *)(*piVar15 + -8) + 8,0);
        }
      }
      *piVar15 = (int)(puVar16 + 3);
      goto LAB_0044313c;
    }
    fn_001006ac(puVar9,puVar4,uVar8);
    *(uint *)(*piVar15 + -4) = uVar8;
    puVar13 = (undefined2 *)(*piVar15 + uVar8 * 2);
  }
  *puVar13 = 0;
LAB_0044313c:
  uVar5 = fn_00661714(local_30);
  *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x25) = uVar5;
  fn_005d2adc(*(undefined4 *)(param_1 + 0xc4),local_30);
  fn_005d2aac(*(undefined4 *)(param_1 + 0xc4));
  uVar5 = 1;
  iVar6 = fn_0028bcf4(local_30);
  if ((iVar6 != 0) || (iVar6 = fn_0028bbc0(local_30), iVar6 != 0)) {
    uVar5 = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x32f) = uVar5;
  if (*(int *)(*(int *)(param_1 + 0xc4) + 0x550) == 0xe3) {
    bVar3 = 0;
    iVar6 = fn_0028bcf4(local_2c);
    if ((iVar6 != 0) || (iVar6 = fn_0028bbc0(local_2c), iVar6 != 0)) {
      bVar3 = 1;
    }
    bVar2 = 0;
    iVar6 = fn_0028bcf4(local_30);
    if ((iVar6 != 0) || (iVar6 = fn_0028bbc0(local_30), iVar6 != 0)) {
      bVar2 = 1;
    }
    if (!(bool)(bVar3 & bVar2)) {
      if ((bool)(bVar3 & ~bVar2)) {
        *(undefined1 *)(param_1 + 0xcc) = 0;
        *(undefined1 *)(param_1 + 0xcd) = 1;
      }
      else if ((bool)(bVar2 & ~bVar3)) {
        *(undefined1 *)(param_1 + 0xcc) = 1;
      }
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar15 = local_34 + -3;
    iVar6 = *piVar15;
    if ((iVar6 == -1) || ((piVar15 != &DAT_008f9ce8 && (*piVar15 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return;
}



void fn_00442cd0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,10);
  iVar2 = 0;
  *puVar1 = &DAT_0083de54;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  if (param_3 != (char *)0x0) {
    iVar2 = (int)*param_3;
  }
  if (iVar2 < 0) {
    *(undefined1 *)(puVar1 + 0x17) = 1;
    puVar1[0x16] = -(int)*param_3;
  }
  else {
    puVar1[0x16] = iVar2;
  }
  return;
}



void fn_00442b74(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xc);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_0083de2c;
  *(undefined2 *)(puVar1 + 0x17) = *param_3;
  return;
}



void fn_0044273c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,0x21);
  *puVar1 = &DAT_0083ddc8;
  return;
}



void fn_00441e34(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x10);
  *puVar1 = &DAT_0083dd3c;
  if (param_3 == (byte *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}



void fn_00441974(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002b24f4();
  *puVar1 = &DAT_0083dba0;
  return;
}



void fn_004418d0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  fn_002b2234();
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) <= param_2) {
    fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_2);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
    do {
      if (puVar1 == &DAT_008938a4) goto LAB_00441950;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00441950:
  fn_0031ce7c(piVar2,0);
  fn_0031cf50(piVar2,0xffffffff);
  return;
}



undefined4 fn_00440bdc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008946d4) goto LAB_00440c24;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00440c24:
  *(undefined4 **)(param_1 + 100) = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  uVar3 = fn_0022f750(DAT_00898940);
  fn_003212cc(*(undefined4 *)(param_1 + 100),uVar3);
  *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 0;
  return 1;
}



undefined4 fn_00440348(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  wchar16 *pwStack_78;
  char *pcStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  fn_00397774(&pwStack_78);
  puVar5 = (undefined4 *)0x0;
  local_44 = 2;
  local_40 = 0;
  uVar1 = fn_0022f750((char *)&DAT_00440520);
  fn_00147974(auStack_38,uVar1);
  uVar1 = fn_0022f750((char *)&DAT_0044053c);
  fn_00147974(auStack_30,uVar1);
  local_70 = 3;
  uStack_6c = 0;
  local_64 = 3;
  local_68 = 0;
  pwStack_78 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_74 = (char *)&DAT_0044055c;
  uVar1 = fn_0022f750((char *)&DAT_00440570);
  fn_00147974(auStack_5c,uVar1);
  fn_00147974(auStack_58,"");
  fn_00147974(auStack_54,"");
  fn_00147974(auStack_50,"");
  local_4c = 1;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0;
  fn_00397618(param_1,&pwStack_78);
  iVar4 = 0;
  do {
    if (iVar4 < *(int *)(DAT_0089783c + 0x30)) {
      fn_0015b0dc(*(int *)(DAT_0089783c + 0x2c) + iVar4 * 0x128 + 0x24);
    }
    uVar1 = fn_0022f750((&DAT_007c7a44)[iVar4]);
    fn_0031b78c(param_1,iVar4,0,uVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xc4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895c24) {
        puVar5 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar5[2] = 1;
  fn_00689930(param_1,0xc4,0);
  fn_00100414(auStack_3c,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_50);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return 1;
}


