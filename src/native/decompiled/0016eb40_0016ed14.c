#include "0016eb40_0016ed14.h"



void fn_0016eb40(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_2 + 4);
  *(char *)(param_1 + 3) = (char)uVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  iVar3 = 0;
  piVar1 = (int *)(param_2 + 8);
  for (uVar2 = uVar2 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1[iVar3 + 4] = *piVar1 + param_2;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  }
  param_1[0x24] = piVar1[2] + (int)piVar1;
  param_1[0x25] = piVar1[3];
  iVar4 = piVar1[4];
  param_1[0x27] = piVar1[5];
  fn_0016ed14(param_1,param_5);
  iVar3 = param_1[0x27];
  if (iVar3 != 0) {
    iVar5 = 0;
    puVar6 = (undefined4 *)(iVar4 + (int)piVar1);
    do {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(param_1[0x26] + iVar5 * 4) = *puVar6;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar3 != 0);
  }
  iVar3 = param_1[0x28];
  fn_0016fb98(param_1);
  fn_0016f8fc(param_1);
  *param_1 = param_3;
  param_1[1] = param_4;
  uVar2 = 0;
  iVar4 = 0;
  param_1[2] = *(int *)(param_1[0x31] + param_4 * 4 + 4) + *(int *)(param_1[0x31] + param_3 * 4 + 4)
  ;
  if (-1 < param_4) {
    *(undefined1 *)(param_1 + 0x28) = 3;
  }
  uVar8 = 0;
  if ((char)param_1[3] != '\0') {
    do {
      if (*(char *)(param_1[uVar8 + 4] + 6) == '\0') {
        param_1[1] = -1;
        fn_0016ef1c(param_1,param_1[0x2b] + iVar4 * 4,uVar8,0xffffffff);
        uVar7 = 0;
        iVar5 = uVar2 * 4;
        uVar2 = uVar2 + 1 & 0xff;
        iVar4 = iVar4 + *(int *)(param_1[0x2c] + iVar5);
        if ((char)param_1[3] != '\0') {
          do {
            if (*(char *)(param_1[uVar7 + 4] + 6) != '\0') {
              param_1[1] = uVar7;
              fn_0016ef1c(param_1,param_1[0x2b] + iVar4 * 4,uVar8,uVar7);
              iVar5 = uVar2 * 4;
              uVar2 = uVar2 + 1 & 0xff;
              iVar4 = iVar4 + *(int *)(param_1[0x2c] + iVar5);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(byte *)(param_1 + 3));
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 3));
  }
  param_1[1] = param_4;
  if (param_4 < 0) {
    *(char *)(param_1 + 0x28) = (char)iVar3;
  }
  return;
}



void fn_0016ed14(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  
  uVar8 = 0;
  *(int *)(param_1 + 0x98) = param_2;
  param_2 = param_2 + *(int *)(param_1 + 0x9c) * 4;
  *(int *)(param_1 + 0xb8) = param_2;
  param_2 = param_2 + (uint)*(byte *)(param_1 + 0xc) * 4;
  *(int *)(param_1 + 0xb4) = param_2;
  if (*(byte *)(param_1 + 0xc) != 0) {
    do {
      iVar4 = 0;
      iVar2 = *(int *)(param_1 + uVar8 * 4 + 0x10);
      uVar3 = 0;
      if (*(uint *)(iVar2 + 0x1c) != 0) {
        do {
          sVar1 = *(short *)(*(int *)(iVar2 + 0x18) + iVar2 + uVar3 * 0x14);
          if (sVar1 != 0) {
            if (sVar1 == 1) {
              iVar4 = iVar4 + 2;
            }
            else if (sVar1 == 2) {
              iVar4 = iVar4 + 6;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar2 + 0x1c));
      }
      param_2 = param_2 + iVar4 * 4;
      *(int *)(*(int *)(param_1 + 0xb8) + uVar8 * 4) = iVar4;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0xc));
  }
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0xc);
  if (uVar3 != 0) {
    do {
      iVar2 = uVar8 * 4;
      uVar8 = uVar8 + 1 & 0xff;
      *(uint *)(param_1 + 0xbc) =
           *(int *)(param_1 + 0xbc) + (uint)*(byte *)(*(int *)(param_1 + iVar2 + 0x10) + 6);
    } while (uVar8 < uVar3);
  }
  *(int *)(param_1 + 0xb0) = param_2;
  uVar8 = 0;
  uVar7 = 0;
  uVar9 = (uVar3 - *(int *)(param_1 + 0xbc)) * (*(int *)(param_1 + 0xbc) + 1);
  if (uVar3 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + uVar7 * 4 + 0x10) + 6) == '\0') {
        iVar2 = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xb0) + uVar8 * 4) = 0x26;
        uVar3 = (uint)*(byte *)(param_1 + 0xc);
        uVar8 = uVar8 + 1 & 0xff;
        do {
          iVar4 = *(int *)(param_1 + iVar2 * 4 + 0x10);
          if (*(char *)(iVar4 + 6) != '\0') {
            if (*(char *)(iVar4 + 0x14) == '\x01') {
              uVar10 = 0x32;
            }
            else {
              uVar10 = 0x30;
            }
            *(undefined4 *)(*(int *)(param_1 + 0xb0) + uVar8 * 4) = uVar10;
            uVar8 = uVar8 + 1 & 0xff;
          }
          uVar3 = uVar3 - 1;
          iVar2 = iVar2 + 1;
        } while (0 < (int)uVar3);
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 0xc));
  }
  param_2 = param_2 + uVar9 * 4;
  *(int *)(param_1 + 0xac) = param_2;
  if (uVar9 != 0) {
    piVar5 = *(int **)(param_1 + 0xb0);
    piVar6 = piVar5 + -1;
    if ((uVar9 & 1) != 0) {
      param_2 = param_2 + *piVar5 * 4;
      piVar6 = piVar5;
    }
    for (uVar8 = (uVar9 & 0x1ff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1 & 0xff) {
      piVar5 = piVar6 + 1;
      piVar11 = piVar6 + 2;
      piVar6 = piVar6 + 2;
      param_2 = param_2 + *piVar5 * 4 + *piVar11 * 4;
    }
  }
  *(int *)(param_1 + 0xc0) = param_2;
  param_2 = param_2 + (uint)*(byte *)(param_1 + 0xc) * 4;
  *(int *)(param_1 + 0xc4) = param_2;
  *(uint *)(param_1 + 200) = param_2 + (uint)*(byte *)(param_1 + 0xc) * 4 + 4;
  return;
}


