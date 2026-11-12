#include "003c922c_003ca00c.h"



undefined4 * fn_003ca00c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_00830a88;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0x14,0);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[0xc];
  piVar2[1] = 1;
  puVar1[0xc] = piVar2;
  iVar3 = piVar2[2];
  puVar1[0xe] = iVar3;
  puVar1[0xf] = iVar3 + 0x14;
  puVar1[0x10] = iVar3;
  puVar1[0xe] = iVar3 + 0x14;
  *(int *)iVar3 = iVar3;
  piVar4 = puVar1 + 0x16;
  iVar3 = puVar1[0x10];
  *(int *)(iVar3 + 4) = iVar3;
  *piVar4 = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0x14,0);
  piVar2[2] = iVar3;
  *piVar2 = *piVar4;
  piVar2[1] = 1;
  *piVar4 = (int)piVar2;
  iVar3 = piVar2[2];
  puVar1[0x18] = iVar3;
  puVar1[0x19] = iVar3 + 0x14;
  puVar1[0x1a] = iVar3;
  puVar1[0x18] = iVar3 + 0x14;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[0x1a] + 4) = puVar1[0x1a];
  *(undefined1 *)(puVar1 + 0x20) = 0;
  puVar1[0x21] = 0;
  return puVar1;
}



void fn_003c9e90(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)param_2[1];
  iVar5 = param_2[4];
  if (piVar1 == (int *)0x0) {
    if (param_2[2] == param_2[3]) {
      if (*param_2 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 4);
        uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar4 < uVar2 + 0x20) {
          uVar4 = uVar2 + 0x20;
        }
      }
      piVar1 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar4 * 0x14,0);
      piVar1[2] = iVar3;
      *piVar1 = *param_2;
      piVar1[1] = uVar4;
      *param_2 = (int)piVar1;
      iVar3 = piVar1[2];
      param_2[2] = iVar3;
      param_2[3] = iVar3 + uVar4 * 0x14;
    }
    piVar1 = (int *)param_2[2];
    param_2[2] = (int)(piVar1 + 5);
  }
  else {
    param_2[1] = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    iVar3 = param_3[1];
    iVar6 = param_3[2];
    piVar1[2] = *param_3;
    piVar1[3] = iVar3;
    piVar1[4] = iVar6;
  }
  *piVar1 = iVar5;
  piVar1[1] = *(int *)(iVar5 + 4);
  **(undefined4 **)(iVar5 + 4) = piVar1;
  *(int **)(iVar5 + 4) = piVar1;
  iVar5 = param_2[5];
  param_2[5] = iVar5 + 1U;
  *(undefined1 *)(param_2 + 9) = 0;
  if ((5 < iVar5 + 1U) && (piVar1 = *(int **)param_2[4], piVar1 != (int *)param_2[4])) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    param_2[5] = param_2[5] + -1;
    *piVar1 = param_2[1];
    param_2[1] = (int)piVar1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x003c9aa0) */
/* WARNING: Removing unreachable block (ram,0x003c9aa8) */
/* WARNING: Removing unreachable block (ram,0x003c9ab4) */
/* WARNING: Removing unreachable block (ram,0x003c9ad4) */
/* WARNING: Removing unreachable block (ram,0x003c9af0) */
/* WARNING: Removing unreachable block (ram,0x003c9ac8) */
/* WARNING: Removing unreachable block (ram,0x003c9af4) */
/* WARNING: Removing unreachable block (ram,0x003c9b0c) */
/* WARNING: Removing unreachable block (ram,0x003c9b20) */
/* WARNING: Removing unreachable block (ram,0x003c9b40) */

undefined4 * fn_003c9808(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_2b8 [88];
  undefined1 auStack_260 [220];
  uint local_184 [4];
  uint local_174;
  undefined1 auStack_16c [300];
  undefined4 *local_40;
  undefined4 local_3c;
  uint local_38 [5];
  
  local_40 = param_1;
  puVar1 = (uint *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    fn_00301f50(auStack_2b8,300);
    fn_00101a1c(auStack_260,&DAT_002efb20,0x14,10);
    fn_0017821c(auStack_16c,auStack_2b8,300);
    uVar2 = *puVar1;
    uVar5 = puVar1[1];
    uVar9 = (int)(uVar5 - uVar2) / 300;
    if (uVar9 < 0x32) {
      iVar8 = 0x32 - uVar9;
      if (iVar8 != 0) {
        if ((uint)((int)(puVar1[2] - uVar2) / 300) < (uint)((int)(uVar5 - uVar2) / 300 + iVar8)) {
          local_184[0] = (int)(uVar5 - *puVar1) / 300 + iVar8;
          uVar9 = (int)(puVar1[1] - *puVar1) / 300;
          local_38[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (local_38[0] < uVar9 + 0x20) {
            local_38[0] = uVar9 + 0x20;
          }
          puVar3 = local_38;
          if (local_38[0] <= local_184[0]) {
            puVar3 = local_184;
          }
          local_174 = *puVar3;
          uVar7 = fn_00100fc6(local_174 * 300,0);
          uVar2 = uVar7;
          for (uVar9 = *puVar1; uVar9 != uVar5; uVar9 = uVar9 + 300) {
            if (uVar2 != 0) {
              fn_0017821c(uVar2,uVar9,300);
            }
            uVar2 = uVar2 + 300;
          }
          iVar10 = uVar7 + ((int)(uVar5 - *puVar1) / 300) * 300;
          for (iVar4 = iVar8; iVar4 != 0; iVar4 = iVar4 + -1) {
            if (iVar10 != 0) {
              fn_0017821c(iVar10,auStack_16c,300);
            }
            iVar10 = iVar10 + 300;
          }
          uVar9 = puVar1[1];
          iVar4 = uVar7 + ((int)(uVar5 - *puVar1) / 300 + iVar8) * 300;
          for (; uVar5 != uVar9; uVar5 = uVar5 + 300) {
            if (iVar4 != 0) {
              fn_0017821c(iVar4,uVar5,300);
            }
            iVar4 = iVar4 + 300;
          }
          uVar5 = *puVar1;
          uVar2 = puVar1[1];
          uVar9 = uVar5;
          if (uVar2 < uVar5) {
            do {
              uVar9 = uVar9 + 300;
            } while (uVar9 != uVar2);
          }
          fn_001008c4(uVar5,(int)(puVar1[2] - uVar5) / 300,0);
          *puVar1 = uVar7;
          puVar1[1] = uVar7 + ((int)(uVar2 - uVar5) / 300) * 300 + iVar8 * 300;
          puVar1[2] = uVar7 + local_174 * 300;
        }
        else {
          uVar9 = uVar5 + iVar8 * 300;
          puVar1[1] = uVar5 + iVar8 * 300;
          if (uVar9 < uVar5) {
            uVar6 = uVar5 + iVar8 * -300;
            uVar2 = uVar5;
            for (uVar7 = uVar6; uVar7 != uVar5; uVar7 = uVar7 + 300) {
              if (uVar2 != 0) {
                fn_0017821c(uVar2,uVar7,300);
              }
              uVar2 = uVar2 + 300;
            }
            if (uVar6 < uVar5) {
              uVar7 = 299;
            }
            uVar2 = uVar5;
            if (uVar5 < uVar6) {
              iVar8 = uVar6 - uVar5;
              uVar7 = 1;
              if (1 < iVar8 / 300 + 1) {
                do {
                  uVar6 = uVar6 - 300;
                  uVar2 = uVar2 - 300;
                  fn_0017821c(uVar2,uVar6,299);
                  uVar7 = uVar7 + 1;
                } while ((int)uVar7 < iVar8 / 300 + 1);
              }
            }
            else {
              while (uVar5 != uVar6) {
                uVar6 = uVar6 - 300;
                fn_0017821c(uVar2 - 300,uVar6,uVar7);
                uVar2 = uVar2 - 300;
              }
            }
            if (uVar9 < uVar5) {
              uVar7 = 299;
            }
            if (uVar5 < uVar9) {
              iVar8 = uVar9 - uVar5;
              iVar4 = 1;
              if (1 < iVar8 / 300 + 1) {
                do {
                  fn_0017821c(uVar5,auStack_16c,299);
                  iVar4 = iVar4 + 1;
                  uVar5 = uVar5 + 300;
                } while (iVar4 < iVar8 / 300 + 1);
              }
            }
            else {
              for (; uVar5 != uVar9; uVar5 = uVar5 + 300) {
                fn_0017821c(uVar5,auStack_16c,uVar7);
              }
            }
          }
          else {
            local_3c = 0;
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              if (uVar5 != 0) {
                fn_0017821c(uVar5,auStack_16c,300);
              }
              uVar5 = uVar5 + 300;
            }
          }
        }
      }
    }
    else if ((0x32 < uVar9) && (uVar9 = uVar2 + 15000, uVar2 != uVar5)) {
      uVar2 = uVar9;
      if (uVar5 <= uVar9) {
        for (; uVar2 != uVar5; uVar2 = uVar2 + 300) {
        }
      }
      puVar1[1] = uVar5 + ((int)(uVar5 - uVar9) / 300) * -300;
    }
    iVar8 = 0;
    do {
      iVar4 = iVar8 + 1;
      *(undefined1 *)(*puVar1 + iVar8 * 300 + 0x12a) = 0;
      iVar8 = iVar4;
    } while (iVar4 < 0x32);
  }
  *local_40 = puVar1;
  return local_40;
}



void fn_003c92c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(int *)*param_1 + ((int *)*param_1)[3] * 300);
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6c88();
  if (0 < iVar1) {
    uVar2 = fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6b3c(uVar2,0);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      *puVar4 = *(undefined4 *)(iVar1 + 8);
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
      *(bool *)((int)puVar4 + 0xe) = *(int *)(iVar1 + 0x54) == 0;
      goto LAB_003c9350;
    }
  }
  *puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 0xe) = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
LAB_003c9350:
  fn_00144810(DAT_008977e8);
                    /* WARNING: Subroutine does not return */
  fn_006a8660();
}



int fn_003c922c(undefined1 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  uVar1 = fn_00144810(DAT_008977e8);
  iVar2 = fn_006a8a34(uVar1,param_1);
  uVar1 = fn_00144810(DAT_008977e8);
  uVar1 = fn_006a873c(uVar1,0);
  uVar3 = fn_00144810(DAT_008977e8);
  iVar4 = fn_006a8a34(uVar3,uVar1);
  local_1c = (100 - param_2) + (iVar2 - iVar4) * 4;
  piVar5 = &local_20;
  if (local_20 < local_1c) {
    piVar5 = &local_1c;
  }
  return *piVar5 / 2;
}


