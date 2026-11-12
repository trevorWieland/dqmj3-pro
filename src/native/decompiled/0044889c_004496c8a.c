#include "0044889c_004496c8a.h"



int fn_00448c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  
  uVar12 = *(undefined4 *)(DAT_00897804 + 0x5c);
  iVar1 = fn_006bc7fc(uVar12,param_2,param_3,param_4,param_1);
  iVar11 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006bc840(uVar12,param_2,iVar11);
      if (iVar2 != 0) {
        piVar9 = *(int **)(param_1 + 0xfc);
        puVar10 = (uint *)(param_1 + 0xf8);
        if (piVar9 == *(int **)(param_1 + 0x100)) {
          uVar5 = (int)((int)piVar9 - *puVar10) >> 2;
          if (uVar5 < (uint)((int)((int)*(int **)(param_1 + 0x100) - *puVar10) >> 2)) {
            *(int **)(param_1 + 0xfc) = piVar9 + 1;
            if (piVar9 != (int *)0x0) {
              *piVar9 = piVar9[-1];
            }
            piVar6 = piVar9 + -1;
            piVar7 = piVar9;
            if (piVar9 < piVar6) {
              iVar2 = (int)piVar6 - (int)piVar9;
              if (0 < iVar2) {
                if (iVar2 * 0x20000000 < 0) {
                  piVar6 = piVar9 + -2;
                  piVar7 = piVar9 + -1;
                  *piVar7 = *piVar6;
                }
                for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                  piVar7[-1] = piVar6[-1];
                  piVar6 = piVar6 + -2;
                  piVar7 = piVar7 + -2;
                  *piVar7 = *piVar6;
                }
              }
            }
            else {
              while (piVar9 != piVar6) {
                piVar6 = piVar6 + -1;
                piVar7[-1] = *piVar6;
                piVar7 = piVar7 + -1;
              }
            }
            *piVar9 = iVar11;
          }
          else {
            uVar13 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
            if (uVar13 < uVar5 + 0x20) {
              uVar13 = uVar5 + 0x20;
            }
            piVar3 = (int *)fn_00100fc6(uVar13 << 2,0);
            piVar7 = piVar3;
            for (piVar6 = (int *)*puVar10; piVar6 != piVar9; piVar6 = piVar6 + 1) {
              if (piVar7 != (int *)0x0) {
                *piVar7 = *piVar6;
              }
              piVar7 = piVar7 + 1;
            }
            piVar6 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar3);
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar11;
            }
            piVar7 = *(int **)(param_1 + 0xfc);
            piVar6 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar3);
            for (; piVar9 != piVar7; piVar9 = piVar9 + 1) {
              piVar6 = piVar6 + 1;
              if (piVar6 != (int *)0x0) {
                *piVar6 = *piVar9;
              }
            }
            uVar4 = *puVar10;
            uVar8 = *(uint *)(param_1 + 0xfc);
            uVar5 = uVar4;
            if (uVar8 < uVar4) {
              do {
                uVar5 = uVar5 + 4;
              } while (uVar5 != uVar8);
            }
            fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x100) - uVar4) >> 2,0);
            *(int **)(param_1 + 0x100) = piVar3 + uVar13;
            *(int **)(param_1 + 0xfc) = piVar3 + ((int)(uVar8 - uVar4) >> 2) + 1;
            *puVar10 = (uint)piVar3;
          }
        }
        else {
          *(int **)(param_1 + 0xfc) = piVar9 + 1;
          if (piVar9 != (int *)0x0) {
            *piVar9 = iVar11;
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar1);
  }
  return *(int *)(param_1 + 0xfc) - *(int *)(param_1 + 0xf8) >> 2;
}



void fn_00448b54(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0083e8fc;
  if ((int *)param_1[0x38] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x38] + 4))();
  }
  fn_003bc2c8(param_1);
  fn_002feef8();
  return;
}



void fn_00448aa4(int param_1)

{
  fn_0022cf90();
  if (*(int *)(param_1 + 0xd8) == -1) {
    return;
  }
  fn_002b1b54(*(undefined4 *)(param_1 + 0xdc),*(int *)(param_1 + 0xd8),0);
  return;
}



void fn_004488dc(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint in_fpscr;
  float local_18;
  float local_14;
  float local_10;
  
  iVar2 = fn_0022cdf0();
  if (iVar2 != 0) {
    fn_003bbdc0(param_1);
    fn_006890bc(param_1[0x38]);
    iVar2 = (**(code **)(*param_1 + 0x11c))(param_1);
    if ((iVar2 != (short)param_1[0x2a]) ||
       (iVar2 = fn_001f890c(param_1 + 0x31,param_1[0x26] + 0xac), iVar2 != 0)) {
      fn_00448558(param_1);
    }
    if ((param_1[0x36] != -1) && ((char)param_1[0x3b] == '\0')) {
      iVar2 = param_1[0x3a];
      local_18 = *(float *)(iVar2 + 0x1c) + (float)param_1[0x2e] + DAT_008cbdbc;
      local_14 = *(float *)(iVar2 + 0x20) + (float)param_1[0x2f] + DAT_008cbdc0;
      local_10 = *(float *)(iVar2 + 0x24) + (float)param_1[0x30] + DAT_008cbdc4;
      fn_002b18e8(param_1[0x37],param_1[0x36],&local_18);
      (**(code **)(*param_1 + 0x130))(param_1);
      (**(code **)(*param_1 + 0x134))(param_1);
      VectorUnsignedToFloat((uint)*(byte *)(param_1[0x3a] + 0x46),(byte)(in_fpscr >> 0x16) & 3);
      fn_0069e2d0(param_1[0x37],param_1[0x36]);
    }
    *(undefined1 *)(param_1 + 0x3b) = 0;
    bVar1 = *(byte *)(param_1[0x26] + 0x54c);
    if (bVar1 != *(byte *)((int)param_1 + 0xed)) {
      iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                        (*(int **)(iVar2 + 0x10),(char *)&DAT_004487b8,1);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar1;
      *(byte *)((int)param_1 + 0xed) = bVar1;
    }
  }
  return;
}



void fn_0044889c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00448adc(iVar1,param_1);
  return;
}



undefined4 * fn_00448adc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_003bc118();
  *puVar1 = &PTR_LAB_0083e8fc;
  *(undefined2 *)(puVar1 + 0x2a) = 0;
  *(undefined1 *)((int)puVar1 + 0xaa) = 0;
  puVar1[0x36] = 0xffffffff;
  puVar1[0x37] = *(undefined4 *)(param_2 + 0x20);
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00689144();
  }
  puVar1[0x38] = uVar3;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3b) = 1;
  *(undefined1 *)((int)puVar1 + 0xed) = 0;
  return puVar1;
}


