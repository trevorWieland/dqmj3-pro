#include "00693cc0_006941e4.h"



undefined4 * fn_006941e4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *param_1 = &DAT_0081be7c;
  fn_002feca8(param_1[0x56]);
  param_1[0x56] = 0;
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 4))();
  }
  uVar5 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar3 = uVar5;
  if (uVar5 < uVar4) {
    iVar7 = 1;
    if (1 < (int)(uVar4 - uVar5) / 0xc + 1) {
      iVar1 = (int)(uVar4 - uVar5) >> 0x1f;
      uVar4 = (int)(uVar4 - uVar5) / 0xc + iVar1;
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)((uVar4 - iVar1) + 1));
    }
  }
  else {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0xc) {
    }
  }
  param_1[0x54] = uVar5;
  piVar2 = (int *)param_1[0x52];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x53];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
    uVar4 = extraout_r1;
  }
  uVar6 = param_1[0x40];
  uVar5 = param_1[0x41];
  uVar3 = uVar6;
  if (uVar6 < uVar5) {
    iVar7 = ((int)(uVar5 - uVar6) >> 4) + 1;
    if (1 < iVar7) {
      uVar3 = uVar5 - uVar6;
    }
    uVar4 = 1;
    if (1 < iVar7) {
      do {
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < ((int)uVar3 >> 4) + 1);
    }
  }
  else {
    for (; uVar3 != uVar5; uVar3 = uVar3 + 0x10) {
    }
  }
  param_1[0x41] = uVar6;
  piVar2 = (int *)param_1[0x3f];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x40];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar7 = 0;
  *param_1 = &DAT_0081bab4;
  do {
    iVar1 = iVar7 * 4;
    piVar2 = (int *)param_1[iVar1 + 0x1a];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = iVar7 + 1;
    param_1[iVar1 + 0x1a] = 0;
  } while (iVar7 < 8);
  *param_1 = &DAT_00850e30;
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0,uVar3,unaff_r4,in_lr);
  return param_1;
}



undefined4 * fn_00693f00(undefined4 param_1,undefined1 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar2 = (undefined4 *)fn_001dbf48(param_1,4);
  *puVar2 = &PTR_FUN_00851254;
  *(undefined1 *)(puVar2 + 0x5a) = param_2;
  *(undefined1 *)((int)puVar2 + 0x169) = 0;
  *(undefined2 *)((int)puVar2 + 0x16a) = 0;
  *(undefined2 *)(puVar2 + 0x5b) = 0;
  *(undefined2 *)(puVar2 + 0x5c) = 0xffff;
  *(undefined1 *)((int)puVar2 + 0x172) = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  fn_006a9e9c(puVar2,&local_34);
  uVar12 = 2;
  iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
  if (iVar3 < 3) {
    if ((puVar2[0x55] & 0x3fffffff) < 2) {
      piVar4 = (int *)puVar2[0x52];
      if (((piVar4 == (int *)0x0) || ((puVar2[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,0x18),
         puVar5 == (undefined4 *)0x0)) {
        uVar12 = puVar2[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar9 = (undefined4 *)puVar2[0x53];
        puVar10 = (undefined4 *)puVar2[0x54];
        puVar6 = puVar5;
        if (puVar9 != puVar10) {
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar13 = puVar9[1];
              uVar14 = puVar9[2];
              *puVar6 = *puVar9;
              puVar6[1] = uVar13;
              puVar6[2] = uVar14;
            }
            puVar9 = puVar9 + 3;
            puVar6 = puVar6 + 3;
          } while (puVar9 != puVar10);
          iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
        }
        uVar7 = puVar2[0x53];
        if (uVar7 != 0) {
          uVar11 = puVar2[0x54];
          uVar1 = uVar7;
          if (uVar7 < uVar11) {
            iVar8 = 1;
            if (1 < (int)(uVar11 - uVar7) / 0xc + 1) {
              do {
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)(uVar11 - uVar7) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar11; uVar1 = uVar1 + 0xc) {
            }
          }
          puVar2[0x54] = uVar7;
          piVar4 = (int *)puVar2[0x52];
          (**(code **)(*piVar4 + 0xc))(piVar4,puVar2[0x53]);
        }
        puVar2[0x53] = puVar5;
        puVar2[0x54] = puVar5 + iVar3 * 3;
        puVar2[0x55] = puVar2[0x55] & 0xc0000000 | 2;
      }
    }
    for (iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
      puVar5 = (undefined4 *)(puVar2[0x53] + iVar3 * 0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xffffffff;
        puVar5[1] = 0xffffffff;
        puVar5[2] = 0xffffffff;
      }
    }
    iVar3 = puVar2[0x53] + uVar12 * 0xc;
  }
  else {
    do {
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar3);
    iVar3 = puVar2[0x53] + 0x18;
  }
  puVar2[0x54] = iVar3;
  fn_001da490(puVar2,0,0,0,0);
  fn_001da490(puVar2,1,1,1,1);
  puVar2[0x3e] = 0x3f800000;
  return puVar2;
}



undefined4 fn_00693cc0(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_2 + 0xdc) != '\0') {
    return 0;
  }
  if ((char)param_1[0x16] == '\0') {
    return 0;
  }
  if ((char)param_1[0x44] != '\0') {
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x134))(param_1);
  if (iVar3 != 0) {
    fn_006f7a48(DAT_008977e0);
    iVar3 = fn_006a7dc8();
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = (**(code **)(*param_1 + 0xc4))(param_1,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006aba20();
    if (iVar3 != 0) {
      return 0;
    }
    fn_00698fb8(DAT_008977e0,1);
    uVar4 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar4,0xffffffff);
    fn_006f7a84(DAT_008977e0);
    fn_001ea9c0();
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006aba74();
    if (iVar3 == 0) {
      uVar4 = fn_006f7a84(DAT_008977e0);
      fn_001c72c0(uVar4,param_1 + 8);
    }
    fn_006f7a84(DAT_008977e0);
    fn_001dfcf8();
    goto LAB_00693dbc;
  }
  if (*(char *)((int)param_1 + 0x172) == '\0') {
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006aba20();
    if (iVar3 != 0) {
      return 0;
    }
  }
  fVar7 = *(float *)(param_2 + 0x20) - (float)param_1[8];
  cVar1 = *(char *)((int)param_1 + 0x172);
  fVar5 = *(float *)(param_2 + 0x24) - (float)param_1[9];
  fVar6 = *(float *)(param_2 + 0x28) - (float)param_1[10];
  fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
  iVar3 = fn_006f7a84(DAT_008977e0);
  fVar5 = *(float *)(*(int *)(iVar3 + 0x100) + 0xc);
  fn_006f7a84(DAT_008977e0);
  iVar3 = fn_006a9938();
  if (iVar3 == 0) {
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006a99b0();
    if (iVar3 != 0) goto LAB_00693e98;
    bVar2 = true;
  }
  else {
LAB_00693e98:
    bVar2 = false;
  }
  fn_006f7a84(DAT_008977e0);
  iVar3 = fn_006aa6e0();
  if (cVar1 != '\0') {
    fVar5 = fVar5 * 3.0;
  }
  if (iVar3 != 0 || bVar2) {
    fVar5 = fVar5 * 1.5;
  }
  if ((fVar5 + 24.0) * (fVar5 + 24.0) < fVar6) {
    return 0;
  }
LAB_00693dbc:
  (**(code **)(*param_1 + 0x130))(param_1);
  return 1;
}


