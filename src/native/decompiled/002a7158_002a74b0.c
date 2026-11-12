#include "002a7158_002a74b0.h"



void fn_002a74b0(undefined4 param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar1 = fn_00147e6c(param_3,DAT_0089192c,4,param_4,param_4);
  if (iVar1 == 0) {
    iVar12 = 0;
    iVar1 = (param_4 + -4) / 0xc;
    if (0 < iVar1) {
      do {
        puVar10 = (undefined4 *)param_2[1];
        iVar2 = param_3 + iVar12 * 0xc;
        puVar13 = (undefined4 *)(iVar2 + 4);
        if (puVar10 == (undefined4 *)param_2[2]) {
          uVar7 = (int)((int)puVar10 - *param_2) / 0xc;
          if (uVar7 < (uint)((int)((int)param_2[2] - *param_2) / 0xc)) {
            param_2[1] = (uint)(puVar10 + 3);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = puVar10[-3];
              puVar10[1] = puVar10[-2];
              puVar10[2] = puVar10[-1];
            }
            puVar8 = puVar10 + -3;
            puVar11 = puVar10;
            if (puVar10 < puVar8) {
              if (0 < (int)puVar8 - (int)puVar10) {
                uVar7 = ((int)puVar8 - (int)puVar10) / 0xc;
                if ((uVar7 & 1) != 0) {
                  puVar8 = puVar10 + -6;
                  puVar11 = puVar10 + -3;
                  *puVar11 = *puVar8;
                  puVar10[-2] = puVar10[-5];
                  puVar10[-1] = puVar10[-4];
                }
                for (iVar3 = (int)uVar7 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                  puVar11[-3] = puVar8[-3];
                  puVar11[-2] = puVar8[-2];
                  puVar11[-1] = puVar8[-1];
                  puVar11[-6] = puVar8[-6];
                  puVar11[-5] = puVar8[-5];
                  puVar11[-4] = puVar8[-4];
                  puVar8 = puVar8 + -6;
                  puVar11 = puVar11 + -6;
                }
              }
            }
            else {
              while (puVar10 != puVar8) {
                puVar11[-3] = puVar8[-3];
                puVar11[-2] = puVar8[-2];
                puVar11[-1] = puVar8[-1];
                puVar11 = puVar11 + -3;
                puVar8 = puVar8 + -3;
              }
            }
            *puVar10 = *puVar13;
            puVar10[1] = *(undefined4 *)(iVar2 + 8);
            puVar10[2] = *(undefined4 *)(iVar2 + 0xc);
          }
          else {
            uVar4 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
            if (uVar4 < uVar7 + 0x20) {
              uVar4 = uVar7 + 0x20;
            }
            puVar5 = (undefined4 *)fn_00100fc6(uVar4 * 0xc,0);
            puVar11 = puVar5;
            for (puVar8 = (undefined4 *)*param_2; puVar8 != puVar10; puVar8 = puVar8 + 3) {
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = *puVar8;
                puVar11[1] = puVar8[1];
                puVar11[2] = puVar8[2];
              }
              puVar11 = puVar11 + 3;
            }
            puVar8 = puVar5 + ((int)((int)puVar10 - *param_2) / 0xc) * 3;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar13;
              puVar8[1] = *(undefined4 *)(iVar2 + 8);
              puVar8[2] = *(undefined4 *)(iVar2 + 0xc);
            }
            puVar8 = (undefined4 *)param_2[1];
            puVar13 = puVar5 + ((int)((int)puVar10 - *param_2) / 0xc) * 3;
            for (; puVar10 != puVar8; puVar10 = puVar10 + 3) {
              puVar11 = puVar13 + 3;
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = *puVar10;
                puVar13[4] = puVar10[1];
                puVar13[5] = puVar10[2];
              }
              puVar13 = puVar11;
            }
            uVar6 = *param_2;
            uVar9 = param_2[1];
            uVar7 = uVar6;
            if (uVar9 < uVar6) {
              do {
                uVar7 = uVar7 + 0xc;
              } while (uVar7 != uVar9);
            }
            fn_001008c4(uVar6,(int)(param_2[2] - uVar6) / 0xc,0);
            *param_2 = (uint)puVar5;
            param_2[1] = (uint)(puVar5 + ((int)(uVar9 - uVar6) / 0xc) * 3 + 3);
            param_2[2] = (uint)(puVar5 + uVar4 * 3);
          }
        }
        else {
          param_2[1] = (uint)(puVar10 + 3);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar13;
            puVar10[1] = *(undefined4 *)(iVar2 + 8);
            puVar10[2] = *(undefined4 *)(iVar2 + 0xc);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar1);
    }
  }
  return;
}



void fn_002a747c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002dc338();
  *puVar1 = &DAT_0081e800;
  *(undefined1 *)((int)puVar1 + 0x1b5) = 0;
  return;
}



void fn_002a741c(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001daac0(param_1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_002a73c8(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = fn_002dc0b8();
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x41200000;
  iVar3 = fn_00163868(100);
  if (iVar3 < 0x46) {
    uVar1 = 1;
  }
  else if (iVar3 < 99) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 0x1b5) = uVar1;
  return uVar2;
}



int fn_002a726c(int param_1)

{
  if (*(int *)(DAT_008977e0 + 0x3c) != 0) {
    fn_00682cb8(*(int *)(DAT_008977e0 + 0x3c),1);
  }
  fn_0033d198(*(undefined4 *)(param_1 + 0x1c));
  fn_001218d4(DAT_00897800,L"rom:/data/Message/DiscMessage.mes");
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_0033d89c();
    fn_002feef8();
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  }
  return param_1;
}



undefined1 * fn_002a7158(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0033d7e0();
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  param_1[0x20] = 0;
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)fn_001c7e78();
  }
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x14) = piVar3;
  }
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00318dec();
  }
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0x18) = piVar3;
  }
  fn_00121838(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",1);
  fn_0033d214(*(undefined4 *)(param_1 + 0x1c));
  return param_1;
}


