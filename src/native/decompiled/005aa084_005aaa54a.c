#include "005aa084_005aaa54a.h"



void fn_005aa218(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  float fVar11;
  ulonglong uVar12;
  
  puVar7 = *(undefined4 **)(param_1 + 0x84);
  if (*(int *)(param_1 + 0x88) - (int)puVar7 >> 2 != 0) {
    bVar1 = false;
    iVar2 = (**(code **)(*(int *)*puVar7 + 0x24))();
    if (iVar2 != 0) {
      fn_00184068(param_1 + 0x90,puVar7);
      puVar5 = *(undefined4 **)(param_1 + 0x88);
      if (*(undefined4 **)(param_1 + 0x84) != puVar5) {
        puVar3 = puVar7 + 1;
        if (puVar5 != puVar3) {
          if (puVar5 < puVar3) {
            for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
              *puVar7 = *puVar3;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            uVar10 = (int)puVar5 - (int)puVar3;
            if (0 < (int)uVar10) {
              uVar4 = (uVar10 & 7) >> 2;
              if (uVar4 != 0) {
                *puVar7 = *puVar3;
              }
              uVar6 = (uint)(uVar4 != 0);
              for (; (int)uVar4 < (int)uVar10 >> 2; uVar4 = uVar4 + 2) {
                puVar7[uVar6] = puVar3[uVar6];
                puVar7[uVar6 + 1] = puVar3[uVar6 + 1];
                uVar6 = uVar6 + 2;
              }
            }
          }
        }
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -4;
      }
      bVar1 = true;
    }
    piVar9 = *(int **)(param_1 + 0x94);
    if (1 < (uint)(((int)piVar9 - *(int *)(param_1 + 0x90) >> 2) +
                  (*(int *)(param_1 + 0x88) - (int)*(int **)(param_1 + 0x84) >> 2))) {
      if (bVar1) {
        piVar9 = piVar9 + -1;
        iVar2 = *piVar9;
      }
      else {
        iVar2 = **(int **)(param_1 + 0x84);
      }
      fVar11 = *(float *)(*(int *)(iVar2 + 0x1c) + 0x1c);
      if (*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20) >> 2 == 0) {
        fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
      }
      fVar11 = ((fVar11 - **(float **)(iVar2 + 0x20) * 0.5) - *(float *)(iVar2 + 0x58) * 0.5) -
               *(float *)(iVar2 + 0x5c);
      uVar12 = (ulonglong)(uint)fVar11;
      if (fVar11 < 0.0) {
        for (piVar8 = *(int **)(param_1 + 0x90); piVar8 != piVar9; piVar8 = piVar8 + 1) {
          (**(code **)(*(int *)*piVar8 + 0x18))();
          fVar11 = (float)uVar12;
        }
        *(float *)(iVar2 + 0x5c) = *(float *)(iVar2 + 0x5c) + fVar11;
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x9c)) &&
     (iVar2 = *(int *)(param_1 + 0x9c) - (int)*(char *)(param_1 + 0xa2),
     *(int *)(param_1 + 0x9c) = iVar2, iVar2 < 1)) {
    fn_0017f8e0(param_1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  fn_0068a5a8(param_1);
  return;
}



void fn_005aa1e8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005aa6fc(iVar1,param_1);
  return;
}



undefined4 fn_005aa150(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (0 < *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + -4);
    fVar2 = *(float *)(*(int *)(iVar1 + 0x1c) + 0x1c);
    if (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20) >> 2 == 0) {
      fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
    }
    if (*(float *)(iVar1 + 0x3c) < fVar2 - **(float **)(iVar1 + 0x20) * 0.5) {
      return 0;
    }
  }
  return 1;
}



undefined4 * fn_005aa084(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00858848;
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[9]);
  }
  fn_001008c4(uVar1,(int)(param_1[10] - uVar1) >> 2,0);
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] <= uVar1) {
    for (; uVar2 != param_1[5]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) >> 2,0);
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) >> 2,0);
  return param_1;
}


