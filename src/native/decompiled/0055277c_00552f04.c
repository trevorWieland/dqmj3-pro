#include "0055277c_00552f04.h"



void fn_00552f04(int param_1)

{
  int iVar1;
  
  fn_00195768(param_1 + 0xb8);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x7c) = *(byte *)(iVar1 + 0x7c) & 0xf7;
  }
  return;
}



void fn_00552ea4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xa4);
  if (puVar1 != param_2) {
    if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x1f) & 1) == 0)) {
      (**(code **)*puVar1)(puVar1);
      fn_0019fb94(puVar1);
    }
    *(undefined4 **)(param_1 + 0xa4) = param_2;
    if (param_2 != (undefined4 *)0x0) {
      *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) & 0xf7;
    }
  }
  return;
}



void fn_00552ddc(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = &PTR_FUN_00857cb0;
  iVar4 = param_1[0x34];
  bVar1 = *(byte *)((int)param_1 + 0xcd);
  if (iVar4 != 0) {
    uVar2 = 0;
    if (bVar1 != 0) {
      do {
        iVar3 = iVar4 + uVar2 * 8;
        puVar5 = *(undefined4 **)(iVar3 + 4);
        if ((puVar5 != (undefined4 *)0x0) && ((*(byte *)(puVar5 + 0x1f) & 1) == 0)) {
          (**(code **)*puVar5)(puVar5);
          fn_0019fb94(puVar5);
        }
        uVar2 = uVar2 + 1;
        *(undefined4 *)(iVar3 + 4) = 0;
      } while (uVar2 < bVar1);
    }
    fn_0019fb94(iVar4);
  }
  puVar5 = (undefined4 *)param_1[0x35];
  if ((puVar5 != (undefined4 *)0x0) && ((*(byte *)(puVar5 + 0x1f) & 1) == 0)) {
    (**(code **)*puVar5)(puVar5);
    fn_0019fb94(puVar5);
    param_1[0x35] = 0;
  }
  fn_00555718(param_1 + 0x31);
  fn_0054d158(param_1);
  return;
}



void fn_00552d08(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = &PTR_FUN_00857cb0;
  iVar4 = param_1[0x34];
  bVar1 = *(byte *)((int)param_1 + 0xcd);
  if (iVar4 != 0) {
    uVar2 = 0;
    if (bVar1 != 0) {
      do {
        iVar3 = iVar4 + uVar2 * 8;
        puVar5 = *(undefined4 **)(iVar3 + 4);
        if ((puVar5 != (undefined4 *)0x0) && ((*(byte *)(puVar5 + 0x1f) & 1) == 0)) {
          (**(code **)*puVar5)(puVar5);
          fn_0019fb94(puVar5);
        }
        uVar2 = uVar2 + 1;
        *(undefined4 *)(iVar3 + 4) = 0;
      } while (uVar2 < bVar1);
    }
    fn_0019fb94(iVar4);
  }
  puVar5 = (undefined4 *)param_1[0x35];
  if ((puVar5 != (undefined4 *)0x0) && ((*(byte *)(puVar5 + 0x1f) & 1) == 0)) {
    (**(code **)*puVar5)(puVar5);
    fn_0019fb94(puVar5);
    param_1[0x35] = 0;
  }
  fn_00555718(param_1 + 0x31);
  fn_0054d158(param_1);
  fn_002feef8();
  return;
}



int fn_00552c9c(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  puVar1 = (undefined4 *)fn_0018a6d4();
  *puVar1 = &PTR_FUN_00857cb0;
  iVar2 = fn_00101a1c(puVar1 + 0x2d,fn_0017d8f8,4);
  iVar2 = fn_001957e0(iVar2 + 0x10);
  *(undefined1 *)(iVar2 + 8) = 0;
  *(undefined1 *)(iVar2 + 10) = 0;
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,param_3);
  fn_005525fc(iVar2 + -0xc4,param_2,&local_18,1);
  return iVar2 + -0xc4;
}



byte * fn_00552894(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  bool bVar17;
  uint in_fpscr;
  int local_28;
  
  puVar3 = (undefined4 *)fn_0054ce60(param_1,param_2,param_4);
  *puVar3 = &PTR_FUN_00857cb0;
  iVar4 = fn_00101a1c(puVar3 + 0x2d,fn_0017d8f8,4);
  pbVar5 = (byte *)fn_001957e0(iVar4 + 0x10);
  pbVar5[8] = 0;
  pbVar5[10] = 0;
  if ((param_3 == 0) || (*(short *)(param_4 + 0x2c) != 0)) {
    iVar4 = param_2;
  }
  else {
    iVar4 = param_3;
  }
  pbVar5[8] = (byte)((*(byte *)(iVar4 + 0x65) & 0xf) >> 2);
  if ((*(byte *)(iVar4 + 0x65) & 2) != 0) {
    pbVar5[10] = 1;
  }
  if ((*(byte *)(iVar4 + 0x65) & 1) != 0) {
    pbVar5[10] = pbVar5[10] | 2;
  }
  if ((*(byte *)(iVar4 + 0x65) & 0x10) != 0) {
    pbVar5[10] = pbVar5[10] | 4;
  }
  iVar14 = *(int *)(iVar4 + 0x68) + iVar4;
  bVar16 = *(byte *)(iVar14 + 0x12);
  if (3 < bVar16) {
    bVar16 = 3;
  }
  if (bVar16 != 0) {
    fn_0019559c(pbVar5);
  }
  *(undefined2 *)(pbVar5 + -0x20) = *(undefined2 *)(iVar4 + 0x54);
  *(undefined2 *)(pbVar5 + -0x1e) = *(undefined2 *)(iVar4 + 0x56);
  *(undefined2 *)(pbVar5 + -0x1c) = *(undefined2 *)(iVar4 + 0x58);
  sVar2 = *(short *)(iVar4 + 0x5a);
  *(short *)(pbVar5 + -0x1a) = sVar2;
  sVar1 = *(short *)(pbVar5 + -0x20);
  bVar17 = sVar1 == 0;
  if (bVar17) {
    sVar1 = *(short *)(pbVar5 + -0x1e);
  }
  if ((!bVar17 || sVar1 != 0) || (*(short *)(pbVar5 + -0x1c) != 0 || sVar2 != 0)) {
    pbVar5[10] = pbVar5[10] | 8;
  }
  if (pbVar5[8] == 1) {
    *(undefined2 *)(pbVar5 + -0x18) = *(undefined2 *)(iVar4 + 0x5c);
    *(undefined2 *)(pbVar5 + -0x16) = *(undefined2 *)(iVar4 + 0x5e);
    pbVar5[-0xffffffff00000014] = 0;
    pbVar5[-0xffffffff00000013] = 0;
    pbVar5[-0xffffffff00000012] = 0;
    pbVar5[-0xffffffff00000011] = 0;
    uVar7 = VectorUnsignedToFloat((uint)*(ushort *)(iVar4 + 0x60),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(pbVar5 + -0x84) = uVar7;
    pbVar5[-0x80] = pbVar5[-0x80] & 0xef | 0x10;
  }
  else if (pbVar5[8] == 2) {
    uVar7 = VectorFloatToUnsigned(*(undefined4 *)(pbVar5 + -0x88),3);
    *(short *)(pbVar5 + -0x18) = (short)uVar7 - *(short *)(iVar4 + 0x5e);
    *(undefined2 *)(pbVar5 + -0x16) = *(undefined2 *)(iVar4 + 0x5e);
    pbVar5[-0xffffffff00000014] = 0;
    pbVar5[-0xffffffff00000013] = 0;
    pbVar5[-0xffffffff00000012] = 0;
    pbVar5[-0xffffffff00000011] = 0;
    uVar7 = VectorUnsignedToFloat((uint)*(ushort *)(iVar4 + 0x60),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(pbVar5 + -0x84) = uVar7;
    pbVar5[-0x80] = pbVar5[-0x80] & 0xef | 0x10;
  }
  else {
    *(undefined2 *)(pbVar5 + -0x18) = *(undefined2 *)(iVar4 + 0x5c);
    *(undefined2 *)(pbVar5 + -0x16) = *(undefined2 *)(iVar4 + 0x5e);
    *(undefined2 *)(pbVar5 + -0x14) = *(undefined2 *)(iVar4 + 0x60);
    *(undefined2 *)(pbVar5 + -0x12) = *(undefined2 *)(iVar4 + 0x62);
  }
  uVar6 = 0;
  do {
    iVar13 = uVar6 * 4;
    iVar15 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(undefined4 *)(pbVar5 + -0xc4 + iVar15 + 0xb4) = *(undefined4 *)(iVar14 + iVar13);
  } while ((int)uVar6 < 4);
  if (bVar16 != 0) {
    uVar6 = (uint)*pbVar5;
  }
  if (bVar16 != 0 && uVar6 != 0) {
    fn_00555670(pbVar5,iVar14 + 0x14,bVar16);
  }
  uVar7 = fn_00555744(*(undefined4 *)(param_4 + 0x20),
                       *(undefined2 *)(*(int *)(param_2 + 0x68) + param_2 + 0x10));
  uVar8 = 0;
  if (param_3 != 0) {
    uVar8 = fn_00555744(*(undefined4 *)(param_4 + 0x24),
                         *(undefined2 *)(*(int *)(param_3 + 0x68) + param_3 + 0x10));
  }
  iVar14 = fn_00194ee4(0x84,4);
  uVar9 = 0;
  if (iVar14 != 0) {
    uVar9 = fn_00554a30(iVar14,uVar7,uVar8,param_4);
  }
  *(undefined4 *)(pbVar5 + 0x10) = uVar9;
  pbVar5[9] = 0;
  pbVar5[0xc] = 0;
  pbVar5[0xd] = 0;
  pbVar5[0xe] = 0;
  pbVar5[0xf] = 0;
  bVar16 = *(byte *)(iVar4 + 100);
  uVar6 = (uint)bVar16;
  if (uVar6 != 0) {
    iVar14 = fn_00194ee4(uVar6 << 3,4);
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      uVar11 = 0;
      if (uVar6 != 0) {
        do {
          puVar12 = (undefined1 *)(iVar14 + uVar11 * 8);
          uVar11 = uVar11 + 1;
          if (puVar12 != (undefined1 *)0x0) {
            *puVar12 = 0;
            *(undefined4 *)(puVar12 + 4) = 0;
          }
        } while (uVar11 < uVar6);
      }
    }
    *(int *)(pbVar5 + 0xc) = iVar14;
    if (iVar14 != 0) {
      pbVar5[9] = bVar16;
    }
    iVar13 = *(int *)(iVar4 + 0x6c);
    iVar14 = *(int *)(param_2 + 0x6c);
    local_28 = 0;
    if (param_3 != 0) {
      local_28 = *(int *)(param_3 + 0x6c) + param_3;
    }
    iVar15 = 0;
    if (pbVar5[9] != 0) {
      do {
        *(undefined1 *)(*(int *)(pbVar5 + 0xc) + iVar15 * 8) =
             *(undefined1 *)(*(int *)(iVar13 + iVar4 + iVar15 * 4) + iVar4 + 2);
        uVar7 = fn_00555744(*(undefined4 *)(param_4 + 0x20),
                             *(undefined2 *)(param_2 + *(int *)(iVar14 + param_2 + iVar15 * 4)));
        uVar8 = 0;
        if (param_3 != 0) {
          uVar8 = fn_00555744(*(undefined4 *)(param_4 + 0x24),
                               *(undefined2 *)(*(int *)(local_28 + iVar15 * 4) + param_3));
        }
        iVar10 = fn_00194ee4(0x84,4);
        uVar9 = 0;
        if (iVar10 != 0) {
          uVar9 = fn_00554a30(iVar10,uVar7,uVar8,param_4);
        }
        iVar10 = iVar15 * 8;
        iVar15 = iVar15 + 1;
        *(undefined4 *)(*(int *)(pbVar5 + 0xc) + iVar10 + 4) = uVar9;
      } while (iVar15 < (int)(uint)pbVar5[9]);
    }
  }
  return pbVar5 + -0xc4;
}



int fn_0055277c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0xd4);
  if (iVar3 != 0) {
    iVar2 = 0;
    while (cVar1 = *(char *)(*(int *)(iVar3 + 0x80) + iVar2), cVar1 == *(char *)(param_2 + iVar2)) {
      if ((cVar1 == '\0') || (iVar2 = iVar2 + 1, 0x1b < iVar2)) {
        return iVar3;
      }
    }
  }
  iVar3 = 0;
  if (*(byte *)(param_1 + 0xcd) != 0) {
    do {
      iVar2 = 0;
      while (cVar1 = *(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0xd0) + iVar3 * 8 + 4) + 0x80) +
                              iVar2), cVar1 == *(char *)(param_2 + iVar2)) {
        if ((cVar1 == '\0') || (iVar2 = iVar2 + 1, 0x1b < iVar2)) {
          return *(int *)(*(int *)(param_1 + 0xd0) + iVar3 * 8 + 4);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0xcd));
  }
  if (param_3 != 0) {
    for (piVar4 = *(int **)(param_1 + 0x14); piVar4 != (int *)(param_1 + 0x14);
        piVar4 = (int *)*piVar4) {
      iVar3 = (**(code **)(piVar4[-1] + 0x30))(piVar4 + -1,param_2,param_3);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  return 0;
}


