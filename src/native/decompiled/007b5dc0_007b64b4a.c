#include "007b5dc0_007b64b4a.h"



void fn_007b6138(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return;
  }
  do {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = *param_3;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_3 + 2);
      fn_0017821c(param_1 + 4,param_3 + 4,0x12);
      iVar1 = *(int *)(param_3 + 0x18);
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
        *(undefined4 **)(param_1 + 0x18) = puVar3 + 3;
        fn_00301a9c(puVar3 + 3,*(undefined4 *)(param_3 + 0x18),uVar5 << 1);
      }
      else {
        piVar2 = (int *)(iVar1 + -0xc);
        *(int *)(param_1 + 0x18) = iVar1;
        if (piVar2 != &DAT_008f9ce8) {
          *piVar2 = *piVar2 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
      fn_0017821c(param_1 + 0x20,param_3 + 0x20,100);
      *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(param_3 + 0x84);
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 0x88;
  } while (param_2 != 0);
  return;
}



void fn_007b5fa4(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      fn_0078742c(param_1);
      iVar4 = param_1[2];
      param_1[2] = iVar4 + 0xc;
      param_1[4] = iVar4;
      *(int *)iVar4 = iVar4;
      *(int *)(param_1[4] + 4) = param_1[4];
      piVar7 = *(int **)(param_3 + 0x10);
      iVar4 = *(int *)param_1[4];
      for (piVar6 = (int *)*piVar7; piVar6 != piVar7; piVar6 = (int *)*piVar6) {
        piVar1 = (int *)param_1[1];
        if (piVar1 == (int *)0x0) {
          if (param_1[2] == param_1[3]) {
            if (*param_1 == 0) {
              uVar5 = 0x20;
            }
            else {
              uVar2 = *(uint *)(*param_1 + 4);
              uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar5 < uVar2 + 0x20) {
                uVar5 = uVar2 + 0x20;
              }
            }
            piVar1 = (int *)fn_00100fc6(0xc,0);
            iVar3 = fn_00100fc6(uVar5 * 0xc,0);
            piVar1[2] = iVar3;
            *piVar1 = *param_1;
            piVar1[1] = uVar5;
            *param_1 = (int)piVar1;
            iVar3 = piVar1[2];
            param_1[2] = iVar3;
            param_1[3] = iVar3 + uVar5 * 0xc;
          }
          piVar1 = (int *)param_1[2];
          param_1[2] = (int)(piVar1 + 3);
        }
        else {
          param_1[1] = *piVar1;
        }
        if (piVar1 + 2 != (int *)0x0) {
          piVar1[2] = piVar6[2];
        }
        *piVar1 = iVar4;
        piVar1[1] = *(int *)(iVar4 + 4);
        **(undefined4 **)(iVar4 + 4) = piVar1;
        *(int **)(iVar4 + 4) = piVar1;
        param_1[5] = param_1[5] + 1;
      }
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 0x18);
    }
    param_1 = param_1 + 7;
  }
  return;
}



int * fn_007b5ea0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    do {
      if (param_3 != (int *)0x0) {
        iVar1 = *param_1;
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
            puVar3[2] = uVar5;
            *puVar3 = 0;
            if (puVar4 != (undefined2 *)0x0) {
              *puVar4 = 0;
            }
          }
          *param_3 = (int)(puVar3 + 3);
          fn_00301a9c(puVar3 + 3,*param_1,uVar5 << 1);
        }
        else {
          *param_3 = iVar1;
          piVar2 = (int *)(iVar1 + -0xc);
          if (piVar2 != &DAT_008f9ce8) {
            *piVar2 = *piVar2 + 1;
          }
        }
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 != param_2);
  }
  return param_3;
}



int * fn_007b5dc0(int *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint local_28 [3];
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      local_28[0] = param_1[1] - *param_1 >> 2;
      puVar1 = local_28;
      if (local_28[0] < 0x20) {
        puVar1 = local_28 + 1;
      }
      local_28[1] = 0x20;
      uVar5 = *puVar1;
      puVar2 = (undefined4 *)fn_00100fc6(uVar5 << 2,0);
      *param_3 = (int)puVar2;
      puVar3 = (undefined4 *)param_1[1];
      for (puVar4 = (undefined4 *)*param_1; puVar4 != puVar3; puVar4 = puVar4 + 1) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
        puVar2 = puVar2 + 1;
      }
      param_3[1] = (param_1[1] - *param_1 & 0xfffffffcU) + *param_3;
      param_3[2] = *param_3 + uVar5 * 4;
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}


