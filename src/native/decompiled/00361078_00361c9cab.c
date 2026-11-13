#include "00361078_00361c9cab.h"



void fn_003617b8(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  
  iVar3 = fn_002fb61c();
  if ((iVar3 == 0) && (iVar3 = fn_00341260(0xffffffff), iVar3 == 0)) {
    iVar3 = *(int *)(DAT_008977e0 + 0xa8);
    if ((**(int **)(DAT_008977e0 + 0x40) != 0) && (iVar4 = fn_006f6fc4(), iVar4 != 0)) {
      uVar5 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
      iVar4 = fn_006c89fc();
      if (iVar4 == 4) {
        fn_006c89bc(uVar5,param_1 + 0x1c);
      }
      else {
        fn_003d5b48(uVar5);
      }
    }
    iVar10 = 0;
    iVar4 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28;
    if (0 < iVar4) {
      uVar15 = 0;
      do {
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10 * 0x28);
        if (puVar9[9] == iVar3) {
          uVar5 = *puVar9;
          if ((**(int **)(DAT_008977e0 + 0x40) != 0) && (iVar6 = fn_006f6fc4(), iVar6 != 0)) {
            uVar7 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
            iVar6 = fn_006c89fc();
            if ((iVar6 != 4) || (iVar6 = fn_006c8cb8(uVar7,uVar5), iVar6 != 0)) goto LAB_003619b4;
          }
          iVar6 = fn_006f7a84(DAT_008977e0);
          iVar8 = *(int *)(puVar9[5] + 8);
          fVar13 = *(float *)(iVar8 + 0x14) - *(float *)(iVar6 + 0x20);
          fVar12 = *(float *)(iVar8 + 0x18) - *(float *)(iVar6 + 0x24);
          fVar11 = *(float *)(iVar8 + 0x1c) - *(float *)(iVar6 + 0x28);
          fVar14 = (float)uVar15;
          bVar1 = fVar13 == fVar14;
          fVar2 = *(float *)(iVar8 + 0x14);
          if (bVar1) {
            fVar2 = fVar12;
          }
          if (((!bVar1 || (!bVar1 || fVar2 != fVar14)) || fVar11 != fVar14) &&
             (0x461c3fff < (int)(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11))) {
            iVar8 = fn_00145b00(0x1b8,&DAT_00812c8c);
            iVar6 = 0;
            if (iVar8 != 0) {
              iVar6 = fn_002dcc34(iVar8,puVar9 + 1,*puVar9);
            }
            uVar5 = fn_002ff310(2);
            *(undefined4 *)(iVar6 + 0x13c) = uVar5;
            uVar5 = fn_006f7a70(DAT_008977e0);
            fn_002fe310(uVar5,iVar6,0xffffffff);
          }
        }
LAB_003619b4:
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar4);
    }
  }
  return;
}



void fn_003615e0(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *unaff_r11;
  
  uVar2 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
  iVar11 = *(int *)(DAT_008977e0 + 0xa8);
  sVar1 = *(short *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 8) + 8);
  uVar3 = fn_006f7a70();
  iVar4 = fn_006f7a0c(DAT_008977e0);
  piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x50) + 0x38))();
  iVar4 = piVar5[1];
  iVar9 = *piVar5;
  uVar6 = fn_006c958c(uVar2);
  uVar2 = fn_006c9504(uVar2,uVar6);
  uVar6 = fn_006f7a9c(DAT_008977e0);
  uVar6 = fn_002792b4(uVar6,uVar2);
  uVar7 = fn_006f7a9c(DAT_008977e0);
  uVar7 = fn_00279550(uVar7,uVar2);
  fn_0066173c(uVar2);
  fn_002cd59c();
  iVar4 = (iVar4 - iVar9) / 0x2c + -1;
  if (0 < iVar4) {
    unaff_r11 = &DAT_007bec20;
  }
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      if (*(int *)(*piVar5 + iVar9 * 0x2c + 0x28) == iVar11) {
        iVar8 = fn_00145b00(0x1cc,&DAT_00812c8c);
        if (iVar8 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)fn_0035d66c(iVar8,iVar9);
        }
        (**(code **)(*piVar10 + 0xd0))(piVar10,*piVar5 + iVar9 * 0x2c + 4);
        piVar10[0xc] = *(int *)(*piVar5 + iVar9 * 0x2c + 0x14);
        (**(code **)(*piVar10 + 0x20))(piVar10);
        fn_002fe310(uVar3,piVar10,uVar6);
        fn_0035d2c8(piVar10,uVar7);
        (**(code **)(*piVar10 + 0x44))(piVar10,2,*unaff_r11,0);
        if (iVar9 <= sVar1) {
          (**(code **)(*piVar10 + 0x54))(piVar10,1);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  return;
}


