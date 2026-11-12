#include "00394e34_00395468aa.h"



void fn_003950e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039525c(iVar1,param_1);
  return;
}



void fn_00395070(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893a00) goto LAB_003950b8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003950b8:
  *(undefined4 **)(param_1 + 0xd0) = puVar1;
  fn_00689efc(param_1,0x41,0);
  fn_00410d04(param_1);
  return;
}



int fn_00394e34(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  
  iVar11 = 0;
  iVar2 = fn_00203e78();
  if (0 < iVar2) {
    do {
      uVar3 = fn_00203fc0((int)(short)iVar11);
      iVar2 = fn_00163940();
      if (((iVar2 != 0) && (iVar2 = fn_00660ec0(uVar3), iVar2 == 0x22)) &&
         (iVar2 = fn_006cd0b0(param_1,uVar3), iVar2 != 0)) {
        puVar10 = *(undefined2 **)(param_1 + 0xc4);
        puVar12 = (uint *)(param_1 + 0xc0);
        uVar1 = (undefined2)uVar3;
        if (puVar10 == *(undefined2 **)(param_1 + 200)) {
          uVar6 = (int)((int)puVar10 - *puVar12) >> 1;
          if (uVar6 < (uint)((int)((int)*(undefined2 **)(param_1 + 200) - *puVar12) >> 1)) {
            *(undefined2 **)(param_1 + 0xc4) = puVar10 + 1;
            if (puVar10 != (undefined2 *)0x0) {
              *puVar10 = puVar10[-1];
            }
            puVar7 = puVar10 + -1;
            puVar8 = puVar10;
            if (puVar10 < puVar7) {
              iVar2 = (int)puVar7 - (int)puVar10;
              if (0 < iVar2) {
                if (iVar2 * 0x40000000 < 0) {
                  puVar7 = puVar10 + -2;
                  puVar8 = puVar10 + -1;
                  *puVar8 = *puVar7;
                }
                for (iVar2 = iVar2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
                  puVar8[-1] = puVar7[-1];
                  puVar7 = puVar7 + -2;
                  puVar8 = puVar8 + -2;
                  *puVar8 = *puVar7;
                }
              }
            }
            else {
              while (puVar10 != puVar7) {
                puVar7 = puVar7 + -1;
                puVar8[-1] = *puVar7;
                puVar8 = puVar8 + -1;
              }
            }
            *puVar10 = uVar1;
          }
          else {
            uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
            if (uVar13 < uVar6 + 0x20) {
              uVar13 = uVar6 + 0x20;
            }
            puVar4 = (undefined2 *)fn_00100fc6(uVar13 << 1,0);
            puVar8 = puVar4;
            for (puVar7 = (undefined2 *)*puVar12; puVar7 != puVar10; puVar7 = puVar7 + 1) {
              if (puVar8 != (undefined2 *)0x0) {
                *puVar8 = *puVar7;
              }
              puVar8 = puVar8 + 1;
            }
            puVar7 = (undefined2 *)(((int)puVar10 - *puVar12 & 0xfffffffe) + (int)puVar4);
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = uVar1;
            }
            puVar8 = *(undefined2 **)(param_1 + 0xc4);
            puVar7 = (undefined2 *)(((int)puVar10 - *puVar12 & 0xfffffffe) + (int)puVar4);
            for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
              puVar7 = puVar7 + 1;
              if (puVar7 != (undefined2 *)0x0) {
                *puVar7 = *puVar10;
              }
            }
            uVar5 = *puVar12;
            uVar9 = *(uint *)(param_1 + 0xc4);
            uVar6 = uVar5;
            if (uVar9 < uVar5) {
              do {
                uVar6 = uVar6 + 2;
              } while (uVar6 != uVar9);
            }
            fn_001008c4(uVar5,(int)(*(int *)(param_1 + 200) - uVar5) >> 1,0);
            *(undefined2 **)(param_1 + 200) = puVar4 + uVar13;
            *(undefined2 **)(param_1 + 0xc4) = puVar4 + ((int)(uVar9 - uVar5) >> 1) + 1;
            *puVar12 = (uint)puVar4;
          }
        }
        else {
          *(undefined2 **)(param_1 + 0xc4) = puVar10 + 1;
          if (puVar10 != (undefined2 *)0x0) {
            *puVar10 = uVar1;
          }
        }
      }
      iVar11 = iVar11 + 1;
      iVar2 = fn_00203e78();
    } while (iVar11 < iVar2);
  }
  return *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 1;
}


