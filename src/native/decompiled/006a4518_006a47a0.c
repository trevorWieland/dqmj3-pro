#include "006a4518_006a47a0.h"



void fn_006a47a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  int local_50;
  int local_4c;
  undefined1 *local_38;
  
  iVar2 = -1;
  uVar7 = 0;
  iVar11 = param_1[0x3b] - param_1[0x3a];
  uVar6 = iVar11 >> 2;
  if (uVar6 != 0) {
    do {
      iVar11 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar11 = *(int *)(*(int *)(param_1[0x3a] + iVar11) + 0x94);
      if (iVar2 <= iVar11) {
        iVar2 = iVar11;
      }
    } while (uVar7 < uVar6);
  }
  iVar8 = param_1[0x3f];
  bVar16 = iVar8 != 0;
  iVar15 = 0;
  if (bVar16) {
    iVar11 = *(int *)(iVar8 + 0x58);
    iVar15 = iVar11 - iVar2;
  }
  bVar1 = iVar15 < 0 != (bVar16 && SBORROW4(iVar11,iVar2));
  if (iVar2 < 0) {
    if ((!bVar16 || iVar11 == iVar2) || bVar1) goto LAB_006a4aa4;
  }
  else if ((!bVar16 || iVar11 == iVar2) || bVar1) {
    iVar11 = *(int *)(param_1[0x3b] + -4);
    fn_002d0724(iVar11);
    puVar14 = (uint *)(param_1 + 0x34);
    param_1[0x3b] = param_1[0x3b] + -4;
    local_4c = CONCAT31(((unsigned int)(local_4c) >> 8) & 0xffffff,0x2d);
    piVar13 = (int *)param_1[0x35];
    local_50 = iVar11;
    if (piVar13 == (int *)param_1[0x36]) {
      uVar6 = (int)((int)piVar13 - *puVar14) >> 3;
      if (uVar6 < (uint)((int)(param_1[0x36] - *puVar14) >> 3)) {
        param_1[0x35] = (int)(piVar13 + 2);
        if (piVar13 != (int *)0x0) {
          *piVar13 = piVar13[-2];
          piVar13[1] = piVar13[-1];
        }
        piVar12 = piVar13 + -2;
        piVar9 = piVar13;
        local_38 = (undefined1 *)&local_50;
        if (piVar13 < piVar12) {
          iVar15 = 1;
          iVar2 = (int)piVar12 - (int)piVar13 >> 3;
          local_38 = (undefined1 *)&local_50;
          if (1 < iVar2 + 1) {
            local_38 = (undefined1 *)&local_50;
            do {
              piVar12 = piVar12 + -2;
              piVar9 = piVar9 + -2;
              fn_00176fb0(piVar9,piVar12);
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar2 + 1);
          }
        }
        else {
          while (piVar13 != piVar12) {
            piVar12 = piVar12 + -2;
            fn_00176fb0(piVar9 + -2,piVar12);
            piVar9 = piVar9 + -2;
          }
        }
        fn_00176fb0(piVar13,local_38);
      }
      else {
        uVar7 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar7 < uVar6 + 0x20) {
          uVar7 = uVar6 + 0x20;
        }
        local_38 = (undefined1 *)&local_50;
        piVar3 = (int *)fn_00100fc6(uVar7 << 3,0);
        piVar12 = piVar3;
        for (piVar9 = (int *)*puVar14; piVar9 != piVar13; piVar9 = piVar9 + 2) {
          if (piVar12 != (int *)0x0) {
            iVar2 = piVar9[1];
            *piVar12 = *piVar9;
            piVar12[1] = iVar2;
          }
          piVar12 = piVar12 + 2;
        }
        piVar9 = (int *)(((int)piVar13 - *puVar14 & 0xfffffff8) + (int)piVar3);
        if (piVar9 != (int *)0x0) {
          *piVar9 = local_50;
          piVar9[1] = local_4c;
        }
        piVar12 = (int *)param_1[0x35];
        piVar9 = (int *)(((int)piVar13 - *puVar14 & 0xfffffff8) + (int)piVar3);
        for (; piVar13 != piVar12; piVar13 = piVar13 + 2) {
          piVar4 = piVar9 + 2;
          if (piVar4 != (int *)0x0) {
            iVar2 = piVar13[1];
            *piVar4 = *piVar13;
            piVar9[3] = iVar2;
          }
          piVar9 = piVar4;
        }
        uVar5 = *puVar14;
        uVar10 = param_1[0x35];
        uVar6 = uVar5;
        if (uVar10 < uVar5) {
          do {
            uVar6 = uVar6 + 8;
          } while (uVar6 != uVar10);
        }
        fn_001008c4(uVar5,(int)(param_1[0x36] - uVar5) >> 3,0);
        param_1[0x36] = (int)(piVar3 + uVar7 * 2);
        param_1[0x35] = (int)(piVar3 + ((int)(uVar10 - uVar5) >> 3) * 2 + 2);
        *puVar14 = (uint)piVar3;
      }
    }
    else {
      param_1[0x35] = (int)(piVar13 + 2);
      if (piVar13 != (int *)0x0) {
        *piVar13 = iVar11;
        piVar13[1] = local_4c;
      }
    }
    fn_0014481c(DAT_008977e8);
    iVar2 = fn_00263814();
    fn_00660790(5,iVar2 + 8,iVar11 + 8);
    goto LAB_006a4aa4;
  }
  fn_002334f0(iVar8);
  iVar11 = param_1[0x3f];
  param_1[0x37] = iVar11;
  param_1[0x38] = 0x2d;
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  fn_00660790(5,iVar2 + 8,iVar11 + 8);
  param_1[0x3f] = 0;
LAB_006a4aa4:
  iVar11 = param_1[0x3b] - param_1[0x3a] >> 2;
  bVar16 = iVar11 == 0;
  if (bVar16) {
    iVar11 = param_1[0x3f];
  }
  if ((bVar16 && iVar11 == 0) && (param_1[0x3e] != -1)) {
    piVar13 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar13 + 0xc))(piVar13,param_1[0x3e]);
    param_1[0x3e] = -1;
  }
  fn_00144810(DAT_008977e8);
  iVar11 = fn_006a8714();
  if ((iVar11 == 0) || (iVar11 = (**(code **)(*param_1 + 0x98))(param_1), iVar11 == 0)) {
    return;
  }
  fn_0034fcd0(DAT_008977e8);
  return;
}



void fn_006a470c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x65] != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1[0x65]);
    param_1[0x65] = -1;
  }
  *(undefined1 *)(param_1 + 0x67) = 1;
  iVar2 = (**(code **)(*param_1 + 0x44))(param_1,0x9c4a,0);
  param_1[0x65] = iVar2;
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  fn_00660790(6,iVar2 + 8,param_1 + 2);
  return;
}



void fn_006a4518(int param_1,float *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_30;
  float local_2c;
  
  fVar7 = 2.0;
  fVar5 = 0.0;
  fVar6 = 1.0;
  fVar4 = *param_2;
  if (*(int *)(param_1 + 0xa4) < 1) {
    if (*(char *)(param_1 + 0x1dc) == '\0') {
      fVar5 = param_2[1];
      *(float *)(param_1 + 0x98) = fVar4;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(float *)(param_1 + 0xa0) = fVar5;
    }
    else {
      fVar5 = param_2[1];
      *(float *)(param_1 + 0x98) = -fVar4;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(float *)(param_1 + 0xa0) = -fVar5;
    }
  }
  else {
    bVar1 = fVar4 == 0.0;
    if (bVar1) {
      fVar4 = param_2[1];
    }
    if (!bVar1 || (!bVar1 || fVar4 != 0.0)) {
      fVar6 = 1.0;
      if (*(char *)(param_1 + 0x1dc) == '\0') {
        fn_00525bd0();
      }
      else {
        fn_00525bd0();
      }
      fn_00525bd0();
      fn_005df8f8();
      puVar3 = (undefined1 *)(uint)DAT_00896d54;
      if ((DAT_00896d54 & 1) == 0) {
        fVar4 = fVar7;
        iVar2 = fn_00303afc(&DAT_00896d54);
        puVar3 = (undefined1 *)0x0;
        fVar7 = fVar4;
        if (iVar2 != 0) {
          fn_0017fe34();
          puVar3 = &DAT_00896d54;
          DAT_00896d58 = fVar4;
        }
      }
      fn_005df8f8(puVar3);
      local_30 = fVar5;
      local_2c = fVar6;
      fn_005f2d30(&local_30);
      if (*(char *)(param_1 + 0x1dc) == '\0') {
        *(float *)(param_1 + 0x98) = local_30;
        *(float *)(param_1 + 0x9c) = fVar5;
        *(float *)(param_1 + 0xa0) = local_2c;
      }
      else {
        *(float *)(param_1 + 0x98) = -local_30;
        *(float *)(param_1 + 0x9c) = fVar5;
        *(float *)(param_1 + 0xa0) = -local_2c;
      }
    }
  }
  fn_00144810(DAT_008977e8);
  iVar2 = fn_006b551c();
  if (iVar2 == 4) {
    fVar6 = fVar7;
  }
  *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) * fVar6;
  *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) * fVar6;
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) * fVar6;
  return;
}


