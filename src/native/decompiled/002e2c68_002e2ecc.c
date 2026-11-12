#include "002e2c68_002e2ecc.h"



void fn_002e2ecc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *unaff_r6;
  uint uVar5;
  
  if (0 < param_2) {
    unaff_r6 = &DAT_007c44f4;
  }
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 4) + 8;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      uVar5 = (uint)(char)iVar1;
      iVar3 = 0;
      if ((-1 < (int)uVar5) && (uVar5 < 7)) {
        iVar3 = *(int *)(unaff_r6 + uVar5 * 4);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + iVar3;
    } while (iVar1 < param_2);
  }
  uVar5 = (uint)(iVar2 + param_3) >> 5;
  *(uint *)(iVar4 + uVar5 * 4) = *(uint *)(iVar4 + uVar5 * 4) | 1 << (iVar2 + param_3 & 0x1fU);
  return;
}



void fn_002e2ea4(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x58;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}



uint fn_002e2e44(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x44 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



void fn_002e2e20(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x54;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}



void fn_002e2df0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = ((int)param_2 >> 5) * 4 + 0x3c;
  *(uint *)(*(int *)(param_1 + 4) + iVar1) =
       *(uint *)(*(int *)(param_1 + 4) + iVar1) | 1 << (param_2 & 0x1f);
  return;
}



bool fn_002e2dc8(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + ((int)param_2 >> 5) * 4 + 0x3c) & 1 << (param_2 & 0x1f))
         != 0;
}



void fn_002e2d98(int param_1,uint param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(param_1 + 4) + 0x40 + (param_2 >> 4 & 0xfff) * 2);
  *puVar1 = *puVar1 | (ushort)(1 << (param_2 & 0xf));
  return;
}



void fn_002e2d84(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4 + 0x30) = param_3;
  return;
}



void fn_002e2d78(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



void fn_002e2c68(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  int unaff_r6;
  int iVar4;
  int unaff_r8;
  int iVar5;
  int unaff_r10;
  int unaff_r11;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar7 = *piVar1;
  if (iVar7 != param_2) {
    unaff_r10 = piVar1[1];
  }
  if (iVar7 != param_2 && unaff_r10 != param_2) {
    iVar5 = piVar1[2];
    if (iVar5 != param_2) {
      unaff_r8 = piVar1[3];
    }
    if (iVar5 != param_2 && unaff_r8 != param_2) {
      iVar4 = piVar1[4];
      if (iVar4 != param_2) {
        unaff_r6 = piVar1[5];
      }
      if (iVar4 != param_2 && unaff_r6 != param_2) {
        iVar3 = piVar1[6];
        if (iVar3 != param_2) {
          unaff_r4 = piVar1[7];
        }
        if (iVar3 != param_2 && unaff_r4 != param_2) {
          iVar6 = piVar1[8];
          if (iVar6 != param_2) {
            param_4 = piVar1[9];
          }
          if (iVar6 != param_2 && param_4 != param_2) {
            iVar2 = piVar1[10];
            if (iVar2 != param_2) {
              unaff_r11 = piVar1[0xb];
            }
            if (iVar2 != param_2 && unaff_r11 != param_2) {
              if (iVar7 == 0) {
                *piVar1 = param_2;
              }
              else if (unaff_r10 == 0) {
                piVar1[1] = param_2;
              }
              else if (iVar5 == 0) {
                piVar1[2] = param_2;
              }
              else if (unaff_r8 == 0) {
                piVar1[3] = param_2;
              }
              else if (iVar4 == 0) {
                piVar1[4] = param_2;
              }
              else if (unaff_r6 == 0) {
                piVar1[5] = param_2;
              }
              else if (iVar3 == 0) {
                piVar1[6] = param_2;
              }
              else if (unaff_r4 == 0) {
                piVar1[7] = param_2;
              }
              else if (iVar6 == 0) {
                piVar1[8] = param_2;
              }
              else if (param_4 == 0) {
                piVar1[9] = param_2;
              }
              else if (iVar2 == 0) {
                piVar1[10] = param_2;
              }
              else if (unaff_r11 == 0) {
                piVar1[0xb] = param_2;
              }
            }
          }
        }
      }
    }
  }
  return;
}


