#include "0024fda4_002503cc.h"



void fn_002503cc(void)

{
  int iVar1;
  undefined1 auStack_80 [32];
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [36];
  
  iVar1 = DAT_00897804;
  if (DAT_00897804 != 0) {
    fn_00301a9c(auStack_80,&DAT_0088fcb8,0x20);
    local_60 = **(undefined4 **)(*(int *)(iVar1 + 0xc) + 4);
    uStack_5c = 0;
    local_58 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_54 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_50 = 0;
    local_4c = 0;
    local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_40 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_3c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_38,auStack_80,0x48);
    iVar1 = fn_001010c8(auStack_38,*(undefined4 *)(*(int *)(DAT_00897804 + 0x60) + 4),0x20);
    if (iVar1 != 0) {
      fn_0022983c(*(undefined4 *)(DAT_00897804 + 0x14),0x30);
      fn_0022983c(*(undefined4 *)(DAT_00897804 + 0x14),0x43);
      fn_0025bddc(*(undefined4 *)(DAT_00897804 + 8));
      iVar1 = DAT_00897804;
      if (DAT_00897804 != 0) {
        fn_00301a9c(auStack_80,&DAT_0088fcb8,0x20);
        local_60 = **(undefined4 **)(*(int *)(iVar1 + 0xc) + 4);
        uStack_5c = 0;
        local_58 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
        local_54 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
        uStack_50 = 0;
        local_4c = 0;
        local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
        local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
        local_40 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
        local_3c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
        fn_0013ef80(auStack_38,auStack_80,0x48);
        fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_38);
      }
    }
  }
  return;
}



undefined4 fn_00250388(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(DAT_0088fcd8 + param_1 * 4) != 0) ||
     (iVar1 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc)), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00250280(void)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 auStack_30 [32];
  
  iVar1 = DAT_00897804;
  if (DAT_00897804 != 0) {
    fn_00301a9c(auStack_78,&DAT_0088fcb8,0x20);
    local_58 = **(undefined4 **)(*(int *)(iVar1 + 0xc) + 4);
    uStack_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    local_48 = 0;
    local_44 = 0;
    local_40 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_3c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_38 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_34 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_30,auStack_78,0x48);
    iVar1 = fn_001010c8(auStack_30,*(undefined4 *)(*(int *)(DAT_00897804 + 0x60) + 4),0x20);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00250200) */

undefined4 fn_00250168(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_r11;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar9 = *param_1;
  iVar3 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
  if (0 < iVar3) {
    unaff_r11 = 0x6aa6e2c2;
  }
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      puVar4 = (uint *)fn_002422fc(*(undefined4 *)(DAT_00897804 + 0x18),iVar8);
      uVar5 = *puVar4;
      if ((uVar5 != 0) && (puVar4[1] == uVar9)) {
        uVar1 = puVar4[2];
        uVar2 = puVar4[3];
        local_34 = puVar4[1];
        local_30 = (uint)*(byte *)((int)puVar4 + 9);
        local_2c = (int)*(short *)((int)puVar4 + 10);
        local_38 = uVar5;
        uVar6 = fn_005f5c50(unaff_r11,&local_38,0x10);
        if (((((uint)(byte)uVar1 << ((uVar5 & 1) << 3) & 0xffff) +
              ((uint)(byte)uVar2 << ((~uVar5 & 1) << 3)) & 0xffff) != uVar6 >> 0x10) ||
           (((2 < *(byte *)((int)puVar4 + 9) || (*(short *)((int)puVar4 + 10) < 0)) ||
            (iVar7 = fn_001746f4(), iVar7 < *(short *)((int)puVar4 + 10))))) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return 0;
}



int fn_002500b8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = *(byte *)(param_1 + 0x3e) & 0x7f;
  if (9 < uVar3) {
    uVar3 = 0;
  }
  iVar2 = uVar3 * 5;
  if ((char)(&DAT_007ba008)[iVar2] < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(byte *)(param_1 + 0x38) << (((int)(char)(&DAT_007ba008)[iVar2] & 0x1fU) << 3);
  }
  if ((char)(&DAT_007ba009)[iVar2] < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (uint)*(byte *)(param_1 + 0x39) << (((int)(char)(&DAT_007ba009)[iVar2] & 0x1fU) << 3);
  }
  if ((char)(&DAT_007ba00a)[iVar2] < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)*(byte *)(param_1 + 0x3f) << (((int)(char)(&DAT_007ba00a)[iVar2] & 0x1fU) << 3);
  }
  uVar3 = (uint)(char)(&DAT_007ba00b)[iVar2];
  bVar7 = -1 < (int)uVar3;
  if (bVar7) {
    uVar3 = uVar3 << 3;
  }
  if (bVar7) {
    iVar1 = ((*(uint *)(param_1 + 0x40) & 0x3ff) >> 2) << (uVar3 & 0xff);
  }
  else {
    iVar1 = 0;
  }
  if ((char)(&DAT_007ba00c)[iVar2] < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(uint *)(param_1 + 0x40) >> 0x18) <<
            (((int)(char)(&DAT_007ba00c)[iVar2] & 0x1fU) << 3);
  }
  return iVar2 + iVar6 + iVar4 + iVar5 + iVar1;
}



/* WARNING: Removing unreachable block (ram,0x00250068) */

bool fn_00250030(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_18 = *param_1;
  uVar3 = param_1[2];
  uVar2 = local_18 & 1;
  uVar1 = ~local_18;
  uVar4 = param_1[3];
  local_14 = param_1[1];
  local_10 = (uint)*(byte *)((int)param_1 + 9);
  local_c = (int)*(short *)((int)param_1 + 10);
  uVar5 = fn_005f5c50(0x6aa6e2c2,&local_18,0x10);
  return (((uint)(byte)uVar4 << ((uVar1 & 1) << 3)) + ((uint)(byte)uVar3 << (uVar2 << 3) & 0xffff) &
         0xffff) != uVar5 >> 0x10;
}



undefined4 fn_0024fda4(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_108 [244];
  
  fn_0017821c(auStack_108,param_1,0xf0);
  iVar3 = fn_0020cb7c(auStack_108);
  if (iVar3 < param_2) {
    return 1;
  }
  iVar3 = 0;
  do {
    sVar1 = *(short *)(param_1 + iVar3 * 4 + 0x56);
    if (sVar1 != 0) {
      iVar6 = (6 - iVar3) % 6 + iVar3 + 1;
      iVar5 = iVar3;
      while (iVar5 = iVar5 + 1, iVar5 < iVar6) {
        sVar2 = *(short *)(param_1 + iVar5 * 4 + 0x56);
        if ((sVar2 != 0) && (sVar2 == sVar1)) {
          return 1;
        }
      }
      for (; iVar6 < 7; iVar6 = iVar6 + 6) {
        iVar5 = param_1 + iVar6 * 4;
        if ((*(short *)(iVar5 + 0x56) != 0) && (*(short *)(iVar5 + 0x56) == sVar1)) {
          return 1;
        }
        if ((*(short *)(iVar5 + 0x5a) != 0) && (*(short *)(iVar5 + 0x5a) == sVar1)) {
          return 1;
        }
        if ((*(short *)(iVar5 + 0x5e) != 0) && (*(short *)(iVar5 + 0x5e) == sVar1)) {
          return 1;
        }
        if ((*(short *)(iVar5 + 0x62) != 0) && (*(short *)(iVar5 + 0x62) == sVar1)) {
          return 1;
        }
        if ((*(short *)(iVar5 + 0x66) != 0) && (*(short *)(iVar5 + 0x66) == sVar1)) {
          return 1;
        }
        if ((*(short *)(iVar5 + 0x6a) != 0) && (*(short *)(iVar5 + 0x6a) == sVar1)) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  sVar1 = *(short *)(param_1 + 0x56);
  bVar7 = sVar1 == 0;
  if (bVar7) {
    sVar1 = *(short *)(param_1 + 0x5a);
  }
  if (bVar7 && sVar1 == 0) {
    sVar1 = *(short *)(param_1 + 0x5e);
    bVar7 = sVar1 == 0;
    if (bVar7) {
      sVar1 = *(short *)(param_1 + 0x62);
    }
    if (bVar7 && sVar1 == 0) {
      sVar1 = *(short *)(param_1 + 0x66);
      bVar7 = sVar1 == 0;
      if (bVar7) {
        sVar1 = *(short *)(param_1 + 0x6a);
      }
      bVar8 = bVar7 && sVar1 == 0;
      if (bVar7 && sVar1 == 0) {
        bVar8 = *(short *)(param_1 + 0x6e) == 0;
      }
      if (bVar8) {
        return 1;
      }
    }
  }
  iVar3 = 0;
  while (*(short *)(param_1 + iVar3 * 4 + 0x56) != 0) {
    iVar3 = iVar3 + 1;
    if (6 < iVar3) goto LAB_0024ff3c;
  }
  iVar5 = (6 - iVar3) % 6 + iVar3 + 1;
  while (iVar3 = iVar3 + 1, iVar3 < iVar5) {
    if (*(short *)(param_1 + iVar3 * 4 + 0x56) != 0) {
      return 1;
    }
  }
  for (; iVar5 < 7; iVar5 = iVar5 + 6) {
    uVar4 = param_1 + iVar5 * 4;
    sVar1 = *(short *)(uVar4 + 0x56);
    bVar7 = sVar1 != 0;
    if (!bVar7) {
      sVar1 = *(short *)(uVar4 + 0x5a);
    }
    if (bVar7 || sVar1 != 0) {
      return 1;
    }
    sVar1 = *(short *)(uVar4 + 0x5e);
    bVar7 = sVar1 != 0;
    if (!bVar7) {
      sVar1 = *(short *)(uVar4 + 0x62);
    }
    if (bVar7 || sVar1 != 0) {
      return 1;
    }
    bVar7 = *(short *)(uVar4 + 0x66) != 0;
    if (!bVar7) {
      uVar4 = (uint)*(ushort *)(uVar4 + 0x6a);
    }
    if (bVar7 || uVar4 != 0) {
      return 1;
    }
  }
LAB_0024ff3c:
  iVar3 = 0;
  while ((iVar5 = param_1 + iVar3 * 4, *(short *)(iVar5 + 0x56) == 0 ||
         (uVar4 = fn_0068f6a8(), *(ushort *)(iVar5 + 0x58) <= uVar4))) {
    iVar3 = iVar3 + 1;
    if (6 < iVar3) {
      return 0;
    }
  }
  return 1;
}


