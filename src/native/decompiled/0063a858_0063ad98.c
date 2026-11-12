#include "0063a858_0063ad98.h"



bool fn_0063ad98(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 0xc;
  if (*pbVar1 == 1) {
    param_1 = (byte *)(uint)*param_1;
  }
  return *pbVar1 == 1 && param_1 == (byte *)0x0;
}



void fn_0063ac14(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  bVar8 = false;
  bVar9 = false;
  bVar1 = false;
  uVar5 = (uint)*(byte *)(param_1 + 0x180389);
  bVar7 = uVar5 != 9;
  if ((((bVar7) && (bVar8 = uVar5 == 10, !bVar8)) && (bVar9 = uVar5 == 0xb, !bVar9)) &&
     (uVar5 == 0xc)) {
    bVar1 = true;
  }
  iVar6 = 0x10;
  do {
    cVar2 = (char)iVar6;
    if (*(char *)(param_1 + 0x180483) != '\0') {
      uVar4 = iVar6 - 0x10;
      if (uVar4 >= 8) {
        uVar5 = iVar6 - 0x18;
      }
      if (uVar4 < 8 || uVar5 < 8) {
        bVar10 = uVar4 < 4;
        if (!bVar10) {
          uVar4 = iVar6 - 0x18;
        }
        if ((bVar10 || uVar4 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
          cVar3 = cVar2 + '\x04';
        }
        else {
          cVar3 = cVar2 + -4;
        }
        iVar6 = (int)cVar3;
      }
      else if (iVar6 - 0x20U < 2) {
        if (iVar6 == 0x20 || iVar6 == 0x22) {
          iVar6 = 0x21;
        }
        else {
          iVar6 = 0x20;
        }
      }
      else if (iVar6 - 0x22U < 2) {
        if (iVar6 == 0x20 || iVar6 == 0x22) {
          iVar6 = 0x23;
        }
        else {
          iVar6 = 0x22;
        }
      }
      else {
        iVar6 = 0;
      }
    }
    iVar6 = param_1 + iVar6 * 0x418;
    uVar5 = (uint)*(short *)(iVar6 + 0x17c308);
    if (0 < (int)uVar5) {
      uVar5 = (uint)*(byte *)(iVar6 + 0x17c36f);
      bVar10 = uVar5 == 0;
      if (bVar10) {
        uVar5 = (uint)*(byte *)(iVar6 + 0x17c37e);
      }
      bVar11 = bVar10 && uVar5 == 0;
      if (bVar10 && uVar5 == 0) {
        uVar5 = (uint)*(byte *)(iVar6 + 0x17c370);
        bVar11 = uVar5 == 0;
      }
      if (bVar11) {
        if (bVar7) {
          *(undefined2 *)((int)&DAT_0017c344 + iVar6) = 0;
        }
        if (!bVar8) {
          *(undefined2 *)((int)&DAT_0017c344 + iVar6 + 2) = 0;
        }
        if (!bVar9) {
          *(undefined2 *)((int)&DAT_0017c348 + iVar6) = 0;
        }
        if (!bVar1) {
          *(undefined2 *)((int)&DAT_0017c348 + iVar6 + 2) = 0;
        }
      }
    }
    iVar6 = (int)(char)(cVar2 + '\x01');
  } while (iVar6 < 0x18);
  return;
}



void fn_0063aab8(char *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  cVar2 = *param_1;
  if ('\0' < cVar2) {
    cVar2 = param_1[1];
  }
  if ('\0' < cVar2) {
    iVar6 = 0;
    do {
      iVar3 = param_2 + 0x180388 + param_1[iVar6] * 0x418;
      if ((iVar3 + -0x4080 != 0) && (iVar4 = fn_006f447c(iVar3 + -0x4080), iVar4 != 0)) {
        uVar5 = 0;
        do {
          if ('\0' < *(char *)(iVar3 + -0x4025 + (uint)(byte)(&DAT_007e195c)[uVar5])) {
            bVar1 = (&DAT_007e195c)[uVar5];
            *(undefined1 *)(iVar3 + -0x4025 + (uint)bVar1) = 0;
            *(undefined1 *)(iVar3 + -0x4025 + (uint)bVar1 + 0x61) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xb);
      }
      *(undefined2 *)(iVar3 + -0x3e00) = 0;
      *(undefined2 *)(iVar3 + -0x3dfe) = 0;
      iVar6 = (int)(char)((char)iVar6 + '\x01');
    } while (iVar6 < 2);
  }
  cVar2 = param_1[3];
  if ('\0' < cVar2) {
    cVar2 = param_1[4];
  }
  if ('\0' < cVar2) {
    iVar6 = 0;
    do {
      iVar3 = param_2 + 0x180388 + param_1[iVar6 + 3] * 0x418;
      if ((iVar3 + -0x4080 != 0) && (iVar4 = fn_006f447c(iVar3 + -0x4080), iVar4 != 0)) {
        uVar5 = 0;
        do {
          if ('\0' < *(char *)(iVar3 + -0x4025 + (uint)(byte)(&DAT_007e195c)[uVar5])) {
            bVar1 = (&DAT_007e195c)[uVar5];
            *(undefined1 *)(iVar3 + -0x4025 + (uint)bVar1) = 0;
            *(undefined1 *)(iVar3 + -0x4025 + (uint)bVar1 + 0x61) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xb);
      }
      *(undefined2 *)(iVar3 + -0x3e00) = 0;
      *(undefined2 *)(iVar3 + -0x3dfe) = 0;
      iVar6 = (int)(char)((char)iVar6 + '\x01');
    } while (iVar6 < 2);
  }
  return;
}



int fn_0063a858(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  uint local_48 [9];
  
  uVar10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_48[0] = 0;
  local_48[1] = 1;
  local_48[2] = 2;
  local_48[3] = 3;
  local_48[4] = 4;
  local_48[5] = 5;
  local_48[6] = 6;
  local_48[7] = 7;
  do {
    uVar12 = local_48[uVar10];
    uVar3 = fn_0063a5a4();
    uVar6 = local_48[uVar3 & 7];
    local_48[uVar10] = uVar6;
    uVar10 = uVar10 + 1;
    local_48[uVar3 & 7] = uVar12;
  } while (uVar10 < 8);
  iVar13 = 0;
  iVar11 = 0x10;
  do {
    cVar1 = (char)iVar11;
    if (*(char *)(param_3 + 0x180483) != '\0') {
      uVar10 = iVar11 - 0x10;
      if (uVar10 >= 8) {
        uVar6 = iVar11 - 0x18;
      }
      if (uVar10 < 8 || uVar6 < 8) {
        bVar18 = uVar10 < 4;
        if (!bVar18) {
          uVar10 = iVar11 - 0x18;
        }
        if ((bVar18 || uVar10 < 4) || (iVar11 == 0x20 || iVar11 == 0x22)) {
          cVar2 = cVar1 + '\x04';
        }
        else {
          cVar2 = cVar1 + -4;
        }
        iVar11 = (int)cVar2;
      }
      else if (iVar11 - 0x20U < 2) {
        if (iVar11 == 0x20 || iVar11 == 0x22) {
          iVar11 = 0x21;
        }
        else {
          iVar11 = 0x20;
        }
      }
      else if (iVar11 - 0x22U < 2) {
        if (iVar11 == 0x20 || iVar11 == 0x22) {
          iVar11 = 0x23;
        }
        else {
          iVar11 = 0x22;
        }
      }
      else {
        iVar11 = 0;
      }
    }
    iVar4 = param_3 + 0x180388 + iVar11 * 0x418;
    uVar6 = (uint)*(short *)(iVar4 + -0x4080);
    if (0 < (int)uVar6) {
      uVar6 = (uint)*(byte *)(iVar4 + -0x4019);
      bVar18 = uVar6 == 0;
      if (bVar18) {
        uVar6 = (uint)*(byte *)(iVar4 + -0x400a);
      }
      bVar19 = bVar18 && uVar6 == 0;
      if (bVar18 && uVar6 == 0) {
        bVar19 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar19) {
        iVar4 = iVar13 * 2;
        *(char *)(param_1 + iVar4) = (char)iVar11;
        iVar11 = fn_00620b48(iVar11,param_3 + 0x180388);
        uVar6 = local_48[iVar13];
        iVar13 = iVar13 + 1;
        (param_1 + iVar4)[1] = uVar6 + iVar11 * 10;
      }
    }
    iVar11 = (int)(char)(cVar1 + '\x01');
  } while (iVar11 < 0x18);
  iVar11 = iVar13 + -1;
  if (*(char *)(param_3 + 0x180389) == '\x01') {
    iVar4 = -1;
  }
  else {
    iVar4 = 1;
  }
  iVar5 = 0;
  if (0 < iVar11) {
    do {
      puVar17 = param_1 + iVar5 * 2;
      iVar8 = puVar17[1];
      for (iVar7 = iVar11; iVar5 < iVar7; iVar7 = iVar7 + -1) {
        puVar9 = param_1 + iVar7 * 2;
        if (iVar8 * iVar4 < puVar9[1] * iVar4) {
          uVar16 = *puVar9;
          uVar14 = *puVar17;
          uVar15 = puVar17[1];
          puVar17[1] = puVar9[1];
          *puVar17 = uVar16;
          *puVar9 = uVar14;
          puVar9[1] = uVar15;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar11);
  }
  return iVar13;
}


