#include "007b56d0_007b5c70.h"



undefined1 * fn_007b5c70(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = *param_1;
        *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_1 + 2);
        fn_0017821c(param_3 + 4,param_1 + 4,0x12);
        iVar1 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar1 + -0xc) == -1) {
          uVar5 = *(uint *)(iVar1 + -4);
          if (0xfffffff1 < uVar5) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
          }
          puVar3 = &DAT_008f9ce8;
          if (uVar5 != 0) {
            puVar3 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
            }
            puVar3[1] = uVar5;
            puVar4 = (undefined2 *)((int)puVar3 + uVar5 * 2 + 0xc);
            *puVar3 = 0;
            puVar3[2] = uVar5;
            if (puVar4 != (undefined2 *)0x0) {
              *puVar4 = 0;
            }
          }
          *(undefined4 **)(param_3 + 0x18) = puVar3 + 3;
          fn_00301a9c(puVar3 + 3,*(undefined4 *)(param_1 + 0x18),uVar5 << 1);
        }
        else {
          *(int *)(param_3 + 0x18) = iVar1;
          piVar2 = (int *)(iVar1 + -0xc);
          if (piVar2 != &DAT_008f9ce8) {
            *piVar2 = *piVar2 + 1;
          }
        }
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
        fn_0017821c(param_3 + 0x20,param_1 + 0x20,100);
        *(undefined2 *)(param_3 + 0x84) = *(undefined2 *)(param_1 + 0x84);
      }
      param_1 = param_1 + 0x88;
      param_3 = param_3 + 0x88;
    } while (param_1 != param_2);
  }
  return param_3;
}



undefined4 * fn_007b5c2c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    if (param_3 != (undefined4 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      param_3[4] = uVar4;
      param_3[5] = uVar5;
      param_3[6] = uVar6;
      param_3[7] = uVar7;
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar3 = param_1[0xb];
      uVar4 = param_1[0xc];
      param_3[8] = param_1[8];
      param_3[9] = uVar1;
      param_3[10] = uVar2;
      param_3[0xb] = uVar3;
      param_3[0xc] = uVar4;
    }
    param_3 = param_3 + 0xd;
  }
  return param_3;
}



undefined4 * fn_007b5ae8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = 0;
      param_3[5] = 0;
      piVar6 = param_3 + 1;
      param_3[6] = param_1[6];
      *(undefined1 *)(param_3 + 7) = 0;
      *(undefined1 *)((int)param_3 + 0x1d) = *(undefined1 *)((int)param_1 + 0x1d);
      param_3[4] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      piVar1 = (int *)fn_00100fc6(0xc,0);
      iVar2 = fn_00100fc6(0x400,0);
      piVar1[2] = iVar2;
      *piVar1 = *piVar6;
      piVar1[1] = 0x20;
      *piVar6 = (int)piVar1;
      puVar3 = (undefined1 *)piVar1[2];
      param_3[3] = puVar3;
      param_3[4] = puVar3 + 0x400;
      param_3[3] = puVar3 + 0x20;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      param_3[5] = puVar3;
      *puVar3 = 0;
      iVar2 = fn_00772b6c(piVar6,*(undefined4 *)(param_1[5] + 4),param_3[5]);
      *(int *)(param_3[5] + 4) = iVar2;
      iVar5 = param_3[5];
      if (iVar2 == 0) {
        *(int *)(iVar5 + 8) = iVar5;
        *(undefined4 *)(param_3[5] + 0xc) = param_3[5];
      }
      else {
        do {
          iVar4 = iVar2;
          iVar2 = *(int *)(iVar4 + 8);
        } while (iVar2 != 0);
        *(int *)(iVar5 + 8) = iVar4;
        iVar2 = *(int *)(param_3[5] + 4);
        do {
          iVar5 = iVar2;
          iVar2 = *(int *)(iVar5 + 0xc);
        } while (iVar2 != 0);
        *(int *)(param_3[5] + 0xc) = iVar5;
      }
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
    }
    param_3 = param_3 + 10;
  }
  return param_3;
}



undefined4 * fn_007b59b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_1 + 1);
        *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)((int)param_1 + 6);
        param_3[2] = param_1[2];
        iVar1 = param_1[3];
        if (*(int *)(iVar1 + -0xc) == -1) {
          uVar5 = *(uint *)(iVar1 + -4);
          if (0xfffffff1 < uVar5) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
          }
          puVar3 = &DAT_008f9ce8;
          if (uVar5 != 0) {
            puVar3 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
            }
            puVar3[1] = uVar5;
            puVar4 = (undefined2 *)((int)puVar3 + uVar5 * 2 + 0xc);
            *puVar3 = 0;
            puVar3[2] = uVar5;
            if (puVar4 != (undefined2 *)0x0) {
              *puVar4 = 0;
            }
          }
          param_3[3] = puVar3 + 3;
          fn_00301a9c(puVar3 + 3,param_1[3],uVar5 << 1);
        }
        else {
          param_3[3] = iVar1;
          piVar2 = (int *)(iVar1 + -0xc);
          if (piVar2 != &DAT_008f9ce8) {
            *piVar2 = *piVar2 + 1;
          }
        }
        *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
      }
      param_1 = param_1 + 5;
      param_3 = param_3 + 5;
    } while (param_1 != param_2);
  }
  return param_3;
}



int * fn_007b5814(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      fn_0078742c(param_3);
      iVar4 = param_3[2];
      param_3[2] = iVar4 + 0xc;
      param_3[4] = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(param_3[4] + 4) = param_3[4];
      piVar8 = *(int **)(param_1 + 0x10);
      iVar4 = *(int *)param_3[4];
      for (piVar7 = (int *)*piVar8; piVar7 != piVar8; piVar7 = (int *)*piVar7) {
        piVar1 = (int *)param_3[1];
        if (piVar1 == (int *)0x0) {
          if (param_3[2] == param_3[3]) {
            if (*param_3 == 0) {
              uVar6 = 0x20;
            }
            else {
              uVar2 = *(uint *)(*param_3 + 4);
              uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              uVar6 = uVar2 + 0x20;
              if (uVar2 + 0x20 <= uVar5) {
                uVar6 = uVar5;
              }
            }
            piVar1 = (int *)fn_00100fc6(0xc,0);
            iVar3 = fn_00100fc6(uVar6 * 0xc,0);
            piVar1[2] = iVar3;
            *piVar1 = *param_3;
            piVar1[1] = uVar6;
            *param_3 = (int)piVar1;
            iVar3 = piVar1[2];
            param_3[2] = iVar3;
            param_3[3] = iVar3 + uVar6 * 0xc;
          }
          piVar1 = (int *)param_3[2];
          param_3[2] = (int)(piVar1 + 3);
        }
        else {
          param_3[1] = *piVar1;
        }
        if (piVar1 + 2 != (int *)0x0) {
          piVar1[2] = piVar7[2];
        }
        *piVar1 = iVar4;
        piVar1[1] = *(int *)(iVar4 + 4);
        **(undefined4 **)(iVar4 + 4) = piVar1;
        *(int **)(iVar4 + 4) = piVar1;
        param_3[5] = param_3[5] + 1;
      }
      *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_1 + 0x18);
    }
    param_3 = param_3 + 7;
  }
  return param_3;
}



undefined4 * fn_007b56d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = 0;
      param_3[5] = 0;
      piVar6 = param_3 + 1;
      param_3[6] = param_1[6];
      *(undefined1 *)(param_3 + 7) = 0;
      *(undefined1 *)((int)param_3 + 0x1d) = *(undefined1 *)((int)param_1 + 0x1d);
      param_3[4] = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      piVar1 = (int *)fn_00100fc6(0xc,0);
      iVar2 = fn_00100fc6(0x400,0);
      piVar1[2] = iVar2;
      *piVar1 = *piVar6;
      piVar1[1] = 0x20;
      *piVar6 = (int)piVar1;
      puVar3 = (undefined1 *)piVar1[2];
      param_3[3] = puVar3;
      param_3[4] = puVar3 + 0x400;
      param_3[3] = puVar3 + 0x20;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      param_3[5] = puVar3;
      *puVar3 = 0;
      iVar2 = fn_00772b6c(piVar6,*(undefined4 *)(param_1[5] + 4),param_3[5]);
      *(int *)(param_3[5] + 4) = iVar2;
      iVar5 = param_3[5];
      if (iVar2 == 0) {
        *(int *)(iVar5 + 8) = iVar5;
        *(undefined4 *)(param_3[5] + 0xc) = param_3[5];
      }
      else {
        do {
          iVar4 = iVar2;
          iVar2 = *(int *)(iVar4 + 8);
        } while (iVar2 != 0);
        *(int *)(iVar5 + 8) = iVar4;
        iVar2 = *(int *)(param_3[5] + 4);
        do {
          iVar5 = iVar2;
          iVar2 = *(int *)(iVar5 + 0xc);
        } while (iVar2 != 0);
        *(int *)(param_3[5] + 0xc) = iVar5;
      }
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
    }
    param_3 = param_3 + 10;
  }
  return param_3;
}


