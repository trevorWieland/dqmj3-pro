#include "005506e0_0055a000.h"



void fn_0055a000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined4 local_38 [2];
  char local_30;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  
  fn_00140dd8(auStack_18,param_1);
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  fn_0014594c(auStack_18,&local_50,param_2,0);
  iVar1 = fn_006e3b8c(param_4,local_50);
  if (iVar1 != 0) {
    local_38[0] = 0xffffffff;
    local_30 = '\0';
    fn_00156328(param_3,local_50,local_38);
    fn_00162118(auStack_28,iVar1,(int)local_30);
    fn_001566bc(auStack_28,local_4c);
  }
  return;
}



void fn_00559538(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  param_1[4] = 0;
  *param_1 = &DAT_00858178;
  param_1[6] = param_3;
  param_1[7] = 0;
  return;
}



int fn_00558858(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar4 = *(int *)(param_1 + 0x34);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) + 4) & 0xfffffffe;
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    iVar4 = fn_0044d7bc(uVar1);
    iVar5 = 1;
    if (iVar4 < 0) {
      fn_0015e590(iVar4,0x5588a4);
    }
  }
  else {
    uVar6 = fn_0044d7bc(uVar1);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(int *)(iVar4 + 0x18) = (int)uVar6;
    iVar5 = ((int)uVar6 >> 0x1f) + 1;
    if (iVar5 == 0) {
      pcVar3 = *(code **)(param_1 + 0x48);
      if (pcVar3 != (code *)0x0) {
        uVar2 = *(undefined4 *)(param_1 + 0x4c);
      }
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18),uVar2);
      }
    }
  }
  return iVar5;
}



void fn_005548fc(void)

{
  fn_0019fdf4();
  return;
}



int fn_00553f04(undefined4 param_1,int param_2,int param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  
  puVar7 = (undefined4 *)fn_0054ce60(param_1,param_2,param_4);
  *puVar7 = &PTR_FUN_00857d6c;
  iVar8 = fn_00101a1c(puVar7 + 0x2b,fn_0017d8f8,4,2);
  iVar17 = iVar8 + -0xac;
  uVar14 = 0xffffffff;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  *(undefined4 *)(iVar8 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar8 + 0x40) = 0xffffffff;
  iVar18 = param_2;
  iVar19 = param_2;
  if (param_3 == 0) {
    local_48 = *(int *)(param_4 + 0x20);
    local_44 = local_48;
  }
  else {
    uVar5 = *(ushort *)(param_4 + 0x28);
    if (uVar5 == 0) {
      uVar14 = (uint)*(ushort *)(param_4 + 0x2c);
    }
    if (uVar5 == 0 && uVar14 == 0) {
      local_44 = *(int *)(param_4 + 0x24);
      iVar18 = param_3;
      local_48 = local_44;
    }
    else {
      local_48 = *(int *)(param_4 + 0x20);
      if ((uVar5 & 1) == 0) {
        local_44 = local_48;
        goto LAB_00553fcc;
      }
      local_44 = *(int *)(param_4 + 0x24);
    }
    iVar19 = param_3;
  }
LAB_00553fcc:
  fn_00553bf8(iVar17);
  bVar3 = *(byte *)(iVar18 + 0x5e);
  local_40 = (uint)(*(ushort *)(iVar18 + 0x54) >> 1);
  if (local_40 != 0) {
    local_40 = local_40 - 1;
  }
  local_3c = (uint)(*(ushort *)(iVar19 + 0x56) >> 1);
  if (local_3c != 0) {
    local_3c = local_3c - 1;
  }
  iVar9 = 0;
  do {
    iVar1 = iVar9 * 4;
    iVar16 = iVar9 * 4;
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar17 + iVar16 + 0xac) = *(undefined4 *)(iVar18 + iVar1 + 0x68);
  } while (iVar9 < 2);
  *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar18 + 0x70);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar18 + 0x74);
  *(undefined1 *)(iVar8 + 0x25) = *(undefined1 *)(iVar18 + 0x5c);
  bVar4 = *(byte *)(iVar8 + 0x24);
  bVar13 = *(byte *)(iVar18 + 0x5d) & 3;
  *(byte *)(iVar8 + 0x24) = bVar4 & 0xfc | bVar13;
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar18 + 0x78);
  *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar18 + 0x7c);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar18 + 0x60);
  *(byte *)(iVar8 + 0x24) = bVar4 & 0xf4 | bVar13 | (bVar3 & 1) << 3;
  uVar15 = *(undefined4 *)(iVar18 + 0x88);
  *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar18 + 0x84);
  *(undefined4 *)(iVar8 + 0x30) = uVar15;
  uVar15 = *(undefined4 *)(iVar18 + 0x90);
  *(undefined4 *)(iVar8 + 0x34) = *(undefined4 *)(iVar18 + 0x8c);
  *(undefined4 *)(iVar8 + 0x38) = uVar15;
  *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(iVar18 + 0x94);
  *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar18 + 0x98);
  *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(iVar18 + 0x9c);
  bVar3 = *(byte *)(iVar8 + 0x24);
  uVar14 = (*(byte *)(iVar18 + 0x5e) & 4) << 2;
  bVar4 = (byte)uVar14;
  *(byte *)(iVar8 + 0x24) = bVar3 & 0xef | bVar4;
  uVar2 = (*(byte *)(iVar18 + 0x5e) & 8) << 2;
  *(byte *)(iVar8 + 0x24) = bVar3 & 0xcf | bVar4 | (byte)uVar2;
  uVar14 = bVar3 & 0xffffff4f | uVar14 | uVar2 | (*(byte *)(iVar18 + 0x5e) & 0x10) << 3 | 0x40;
  bVar6 = (*(byte *)(iVar18 + 0x5e) & 0x10) != 0;
  *(char *)(iVar8 + 0x24) = (char)uVar14;
  if (bVar6) {
    uVar14 = *(uint *)(iVar18 + 0xa0);
  }
  if (bVar6 && uVar14 != 0) {
    puVar7 = (undefined4 *)(uVar14 + iVar18);
    puVar20 = (undefined4 *)0x0;
    iVar9 = 0x18;
    if (*(char *)((int)puVar7 + 10) != '\0') {
      puVar20 = puVar7 + 3;
      if (*(byte *)(puVar7 + 4) != 0) {
        iVar9 = (uint)*(byte *)(puVar7 + 4) * 8 + 0x10;
      }
    }
    puVar10 = (undefined4 *)fn_00194ee4(iVar9,4);
    *(undefined4 **)(iVar8 + 0x50) = puVar10;
    *puVar10 = *puVar7;
    *(undefined4 *)(*(int *)(iVar8 + 0x50) + 4) = puVar7[1];
    *(undefined4 *)(*(int *)(iVar8 + 0x50) + 8) = 0;
    *(undefined1 *)(*(int *)(iVar8 + 0x50) + 0xc) = *(undefined1 *)(puVar7 + 2);
    *(undefined1 *)(*(int *)(iVar8 + 0x50) + 0xd) = *(undefined1 *)((int)puVar7 + 9);
    if (puVar20 == (undefined4 *)0x0) {
      *(undefined1 *)(*(int *)(iVar8 + 0x50) + 0xe) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(iVar8 + 0x50) + 0xe) = *(undefined1 *)(puVar20 + 1);
      iVar9 = 0;
      if (*(char *)(puVar20 + 1) != '\0') {
        do {
          iVar16 = puVar20[iVar9 + 2];
          *(int *)(*(int *)(iVar8 + 0x50) + iVar9 * 8 + 0x10) = iVar16 + (int)puVar20;
          iVar1 = iVar9 * 8;
          iVar9 = iVar9 + 1;
          *(undefined1 *)(*(int *)(iVar8 + 0x50) + iVar1 + 0x14) =
               *(undefined1 *)(iVar16 + (int)puVar20 + 1);
        } while (iVar9 < (int)(uint)*(byte *)(puVar20 + 1));
      }
    }
  }
  iVar9 = *(int *)(local_48 + 4) + 0xc;
  uVar15 = (**(code **)(**(int **)(local_48 + 0xc) + 0x10))
                     (*(int **)(local_48 + 0xc),
                      *(int *)(iVar9 + (uint)*(ushort *)(iVar18 + 0x5a) * 4) + iVar9);
  *(undefined4 *)(iVar8 + 8) = uVar15;
  uVar15 = fn_00555744(*(undefined4 *)(param_4 + 0x20),*(undefined2 *)(param_2 + 0x58));
  uVar11 = 0;
  if (param_3 != 0) {
    uVar11 = fn_00555744(*(undefined4 *)(param_4 + 0x24),*(undefined2 *)(param_3 + 0x58));
  }
  iVar9 = fn_00194ee4(0x84,4);
  uVar12 = 0;
  if (iVar9 != 0) {
    uVar12 = fn_00554a30(iVar9,uVar15,uVar11,param_4);
  }
  *(undefined4 *)(iVar8 + 0x48) = uVar12;
  if (*(int *)(iVar19 + 0x80) != 0) {
    *(int *)(iVar8 + -4) = *(int *)(iVar19 + 0x80) + iVar19;
  }
  *param_5 = *(undefined1 *)(iVar18 + 0x5e);
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(local_44 + 0x10);
  *(int *)(param_5 + 8) = *(int *)(iVar19 + 100) + iVar19;
  *(uint *)(param_5 + 0xc) = local_40;
  *(uint *)(param_5 + 0x10) = local_3c;
  return iVar17;
}



void fn_00551b70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [136];
  undefined1 auStack_20 [20];
  
  fn_0017d96c(auStack_a8,0x88,0x87,(char *)&DAT_007d8878,*(undefined4 *)(param_1 + 0x20),param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x616e696d,auStack_a8,0);
  fn_0017dcb0(auStack_20,uVar1);
  fn_0018a794(param_1,auStack_20,param_3);
  return;
}



void fn_005506e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint local_54;
  float local_50 [12];
  uint local_20;
  
  uVar1 = fn_0054e7a0();
  local_54 = *(ushort *)(param_3 + 0x76) & 3;
  puVar4 = &local_54;
  if (3 < local_54) {
    puVar4 = &local_20;
  }
  local_20 = 3;
  uVar6 = *puVar4;
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar5 = *(int *)(param_3 + 0x78) + uVar2 * 0x20;
      uVar3 = uVar2 + 1;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar5 + 4),(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar5 + 4),(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar5 + 0x12),(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar5 + 6),(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar5 + 6),(byte)(in_fpscr >> 0x16) & 3);
      local_50[uVar2 * 4] = 1.0 / fVar12;
      local_50[uVar2 * 4 + 1] = 1.0 / fVar9;
      local_50[uVar2 * 4 + 2] = fVar7 / fVar10;
      local_50[uVar2 * 4 + 3] = fVar8 / fVar11;
      uVar2 = uVar3;
    } while (uVar3 < uVar6);
  }
  fn_00560750(param_1,uVar1,local_50,6,uVar6);
  return;
}


