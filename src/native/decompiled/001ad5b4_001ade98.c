#include "001ad5b4_001ade98.h"

static void svc_0x27(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x27 }
#endif
}

static void svc_0x29(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x29 }
#endif
}

static void svc_0xb(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xb }
#endif
}


int fn_001ade98(undefined4 param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  undefined1 auStack_130 [288];
  
  iVar1 = fn_001b0b6c(auStack_130);
  if (iVar1 == 0) {
    fn_001b0ee4(auStack_130);
    fn_001af464(param_1,auStack_130,in_stack_00000000);
  }
  return iVar1;
}



void fn_001adcbc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r6;
  int iVar6;
  int iVar7;
  code *local_38;
  code *local_34 [4];
  
  iVar6 = *(int *)(param_1 + 0x6c);
  if (*(int *)(iVar6 + 0x694) != 0) {
    fn_0012b6ec(1,iVar6 + 0x694);
    *(undefined4 *)(iVar6 + 0x694) = 0;
  }
  if (*(int *)(iVar6 + 0x6b0) != 0) {
    fn_0012b6ec(1,iVar6 + 0x6b0);
    *(undefined4 *)(iVar6 + 0x6b0) = 0;
  }
  fn_002399ec(iVar6 + 0x414);
  fn_002399ec(iVar6 + 0x4b0);
  fn_002399ec(iVar6 + 0x47c);
  fn_002399ec(iVar6 + 0x448);
  iVar3 = 8;
  do {
    iVar4 = iVar6 + iVar3 * 0x74;
    if (*(int *)(iVar4 + 0x68) != 0) {
      iVar7 = *(int *)(iVar4 + 4);
      if (iVar7 != 0) {
        if (*(int *)(iVar4 + 0x10) != 0) {
          uVar1 = *(undefined4 *)(iVar4 + 0xc);
          uVar2 = *(undefined4 *)(iVar4 + 8);
          fn_00191540(0,&local_38);
          (*local_38)(uVar1,0x102,iVar7,uVar2);
        }
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
      iVar7 = *(int *)(iVar4 + 0x54);
      unaff_r6 = (undefined4 *)(iVar4 + 0x54);
      if (iVar7 != 0) {
        if (*(int *)(iVar4 + 0x60) != 0) {
          uVar1 = *(undefined4 *)(iVar4 + 0x5c);
          uVar2 = *(undefined4 *)(iVar4 + 0x58);
          fn_00191540(0,&local_38);
          (*local_38)(uVar1,0x102,iVar7,uVar2);
        }
        *unaff_r6 = 0;
        *(undefined4 *)(iVar4 + 0x60) = 0;
      }
      *(undefined4 *)(iVar4 + 0x68) = 0;
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar6 = 0x12;
  do {
    puVar5 = *(undefined4 **)(param_1 + iVar6 * 4 + 0x70);
    if (puVar5 != (undefined4 *)0x0) {
      unaff_r6 = (undefined4 *)*puVar5;
    }
    if (puVar5 != (undefined4 *)0x0 && unaff_r6 != (undefined4 *)0x0) {
      if (puVar5[0xc] != 0) {
        uVar1 = puVar5[10];
        uVar2 = puVar5[0xb];
        fn_00191540(0,local_34);
        (*local_34[0])(uVar2,0x101,unaff_r6,uVar1);
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[0xc] = 0;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}



int fn_001adb24(int param_1,char *param_2)

{
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_40 = DAT_008e996c | 0x80000000;
  if (DAT_008e994c == '\0') {
    local_3c = 0xf02c0;
    puStack_34 = &DAT_007f02c1;
    uStack_14 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x39000000;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x39000000;
    local_18 = 0;
    fn_00301a9c(param_1,&local_40,0x30);
  }
  else {
    local_3c = 0xf02c0;
    puStack_34 = &DAT_007f02c1;
    uStack_14 = 0;
    local_38 = 0x39000000;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0x39000000;
    local_1c = 0;
    local_18 = 0;
    fn_00301a9c(param_1,&local_40,0x30);
  }
  fn_00301a9c(param_1 + 0x30,&DAT_007e0d64,0xa0);
  if (*param_2 == '\0') {
    fn_00301a9c(param_1 + 0xd0,&DAT_007e0e04,0x10);
    return param_1 + 0xe0;
  }
  fn_00301a9c(param_1 + 0xd0,&DAT_007e0e14,0x10);
  return param_1 + 0xe0;
}



int fn_001adaac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001bb620(param_1,DAT_008e9964,param_2,DAT_008e994c);
  if ((param_2 + 0x30 != 0) && (DAT_008e9968 != DAT_008e9964)) {
    iVar1 = fn_001bb620(iVar1,DAT_008e9968,param_2 + 0x30,DAT_008e994c);
  }
  iVar2 = *(int *)(param_2 + 0x6c);
  fn_00301a9c(iVar1,*(undefined4 *)(iVar2 + 0x6b4),*(undefined4 *)(iVar2 + 0x6b8));
  return (*(uint *)(iVar2 + 0x6b8) & 0xfffffffc) + iVar1;
}



int fn_001ada38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001bb620(param_1,DAT_008e9964,param_2,DAT_008e994c);
  if ((param_2 + 0x30 != 0) && (DAT_008e9968 != DAT_008e9964)) {
    iVar1 = fn_001bb620(iVar1,DAT_008e9968,param_2 + 0x30,DAT_008e994c);
  }
  iVar2 = *(int *)(param_2 + 0x6c);
  fn_00301a9c(iVar1,*(undefined4 *)(iVar2 + 0x698),*(undefined4 *)(iVar2 + 0x69c));
  return (*(uint *)(iVar2 + 0x69c) & 0xfffffffc) + iVar1;
}



undefined4 fn_001ad9c4(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = param_1 != 0;
  if (bVar3) {
    param_4 = (uint)*(ushort *)(param_1 + 2);
  }
  uVar1 = 2;
  uVar2 = param_4;
  if (bVar3 && param_4 != param_2) {
    uVar2 = param_2;
  }
  if (bVar3 && param_4 < param_2) {
    uVar2 = param_2 - 1 & 0xffff;
  }
  if ((bVar3 && param_4 != param_2) && ((int)uVar2 < (int)(*(byte *)(param_1 + 1) - 1))) {
    param_1 = param_1 + ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1b)) >> 5) * 4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~(1 << ((int)param_2 % 0x20 & 0xffU));
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & ~(1 << ((int)param_2 % 0x20 & 0xffU));
    uVar1 = 0;
  }
  return uVar1;
}



int fn_001ad654(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  puVar7 = (uint *)((int)param_1 + param_3 + -1);
  puVar5 = param_2;
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while( true ) {
      uVar6 = *puVar5;
      bVar9 = param_1 + 1 == puVar7;
      if (param_1 + 1 <= puVar7) {
        cVar1 = UnsignedSaturate('\x01' - (char)uVar6,0x10);
        sVar2 = UnsignedSaturate('\x01' - (char)(uVar6 >> 8),0x10);
        sVar3 = UnsignedSaturate('\x01' - (char)(uVar6 >> 0x10),0x10);
        uVar4 = UnsignedSaturate('\x01' - (char)(uVar6 >> 0x18),0x10);
        bVar9 = (((uVar4 & 0xff) == 0 && sVar3 == 0) && sVar2 == 0) && cVar1 == '\0';
      }
      if (!bVar9) break;
      puVar5 = puVar5 + 1;
      *param_1 = uVar6;
      param_1 = param_1 + 1;
    }
    do {
      uVar8 = *puVar5;
      cVar1 = UnsignedSaturate('\x01' - (char)uVar8,0x10);
      sVar2 = UnsignedSaturate('\x01' - (char)(uVar8 >> 8),0x10);
      sVar3 = UnsignedSaturate('\x01' - (char)(uVar8 >> 0x10),0x10);
      uVar4 = UnsignedSaturate('\x01' - (char)(uVar8 >> 0x18),0x10);
      bVar9 = (uVar4 & 0xff) == 0;
      if (((bVar9 && sVar3 == 0) && sVar2 == 0) && cVar1 == '\0') {
        puVar5 = puVar5 + 1;
      }
    } while (((bVar9 && sVar3 == 0) && sVar2 == 0) && cVar1 == '\0');
    for (; (char)*puVar5 != '\0'; puVar5 = (uint *)((int)puVar5 + 1)) {
    }
    do {
      if (param_1 == puVar7) {
        *(char *)param_1 = '\0';
      }
      if (puVar7 <= param_1) break;
      bVar9 = (uVar6 & 0xff) != 0;
      uVar8 = uVar6;
      if (bVar9) {
        uVar8 = uVar6 >> 8;
      }
      *(char *)param_1 = (char)uVar6;
      param_1 = (uint *)((int)param_1 + 1);
      uVar6 = uVar8;
    } while (bVar9);
  }
  else {
    for (; (param_1 < puVar7 && ((char)*puVar5 != '\0')); puVar5 = (uint *)((int)puVar5 + 1)) {
      *(char *)param_1 = (char)*puVar5;
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (param_1 <= puVar7) {
      *(char *)param_1 = '\0';
    }
    for (; (char)*puVar5 != '\0'; puVar5 = (uint *)((int)puVar5 + 1)) {
    }
  }
  return (int)puVar5 - (int)param_2;
}



void fn_001ad63c(undefined4 *param_1,undefined4 param_2)

{
  svc_0xb();
  *param_1 = param_2;
  return;
}



void fn_001ad620(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  svc_0x29();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void fn_001ad608(undefined4 *param_1,undefined4 param_2)

{
  svc_0x27();
  *param_1 = param_2;
  return;
}



void fn_001ad5b4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar15 = param_2[0xe];
  uVar16 = param_2[0xf];
  param_1[1] = param_3;
  param_1[4] = uVar1;
  param_1[3] = uVar2;
  param_1[2] = uVar3;
  *param_1 = uVar4;
  param_1[8] = uVar5;
  param_1[7] = uVar6;
  param_1[6] = uVar7;
  param_1[5] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar10;
  param_1[10] = uVar11;
  param_1[9] = uVar12;
  param_1[0x10] = uVar13;
  param_1[0xf] = uVar14;
  param_1[0xe] = uVar15;
  param_1[0xd] = uVar16;
  return;
}


