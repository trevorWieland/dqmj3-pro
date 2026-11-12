#include "002f2800_002f3278.h"



bool fn_002f3278(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,5);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



bool fn_002f31ec(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f31cc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,0);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



bool fn_002f3140(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f3120(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,4);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



bool fn_002f3094(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f3074(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,1);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



void fn_002f3064(void)

{
  fn_002f1c5c();
  fn_002feef8();
  return;
}



undefined4 fn_002f2fc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x60) == 0) || (iVar1 = fn_006f8444(), iVar1 != 0)) ||
     (iVar1 = fn_006f8074(*(undefined4 *)(param_1 + 0x60)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_002f2e38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = fn_006bd170();
  if (iVar1 != 0) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6bc4();
    if (0 < iVar1) {
      do {
        uVar2 = fn_0014481c(DAT_008977e8);
        piVar3 = (int *)fn_006b71a8(uVar2,uVar4 & 0xff);
        iVar1 = (**(code **)(*piVar3 + 0x98))(piVar3);
        if ((((iVar1 != 0) || (iVar1 = (**(code **)(*piVar3 + 0x9c))(piVar3), iVar1 != 0)) &&
            (*(char *)(param_2 + uVar4 + 0x24) != '\0')) &&
           (iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 4), iVar1 = fn_00156f30(piVar3,0),
           iVar1 != *(char *)(iVar5 + 0x219))) {
          uVar2 = fn_0014481c(DAT_008977e8);
          uVar2 = fn_006b71a8(uVar2,uVar4 & 0xff);
          *(undefined4 *)(param_1 + 0x60) = uVar2;
          break;
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar1 = fn_006b6bc4();
      } while ((int)uVar4 < iVar1);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      return 1;
    }
  }
  uVar4 = 0;
  do {
    if (*(char *)(param_2 + uVar4 + 0x24) != '\0') {
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      uVar2 = fn_0014481c(DAT_008977e8);
      uVar2 = fn_006b71a8(uVar2,uVar4 & 0xff);
      iVar1 = fn_00156f30(uVar2,0);
      if (iVar1 != *(char *)(iVar5 + 0x219)) {
        uVar2 = fn_0014481c(DAT_008977e8);
        uVar2 = fn_006b71a8(uVar2,uVar4 & 0xff);
        *(undefined4 *)(param_1 + 0x60) = uVar2;
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 0;
}



bool fn_002f2dac(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0068c570(*(undefined4 *)(param_1 + 0x60));
  return iVar1 == 0;
}



bool fn_002f2d8c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002f1ae4(param_1,6);
  *(int *)(param_1 + 0x60) = iVar1;
  return iVar1 != 0;
}



void fn_002f2d7c(void)

{
  fn_002f1c5c();
  fn_002feef8();
  return;
}



undefined4 fn_002f2ce0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar1 = fn_006f7de8();
    if ((*(int *)(param_1 + 100) <= iVar1) && (*(int *)(param_1 + 100) != 0)) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_002f2a54(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = 0;
  fVar11 = 10000.0;
  iVar1 = fn_006bd170();
  if (iVar1 != 0) {
    uVar4 = 0;
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6bc4();
    if (0 < iVar1) {
      do {
        uVar2 = fn_0014481c(DAT_008977e8);
        piVar3 = (int *)fn_006b71a8(uVar2,uVar4 & 0xff);
        iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
        iVar1 = fn_00156f30(piVar3,0);
        if ((iVar1 != *(char *)(iVar6 + 0x219)) &&
           ((iVar1 = (**(code **)(*piVar3 + 0x98))(piVar3), iVar1 != 0 ||
            (iVar1 = (**(code **)(*piVar3 + 0x9c))(piVar3), iVar1 != 0)))) {
          iVar6 = param_2 + (uint)*(byte *)(piVar3 + 0x41) * 0xc;
          iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
          fVar10 = *(float *)(iVar6 + 0x28) - *(float *)(iVar1 + 8);
          fVar8 = *(float *)(iVar6 + 0x2c) - *(float *)(iVar1 + 0xc);
          fVar9 = *(float *)(iVar6 + 0x30) - *(float *)(iVar1 + 0x10);
          fVar8 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
          if ((fVar8 < fVar11) &&
             (*(char *)(param_2 + (uint)*(byte *)(piVar3 + 0x41) + 0x18) != '\0')) {
            *(int **)(param_1 + 0x60) = piVar3;
            uVar2 = fn_006f7de8(piVar3);
            *(undefined4 *)(param_1 + 100) = uVar2;
            fVar11 = fVar8;
          }
        }
        uVar4 = uVar4 + 1;
        fn_0014481c(DAT_008977e8);
        iVar1 = fn_006b6bc4();
      } while ((int)uVar4 < iVar1);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      return 1;
    }
  }
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b71a8(uVar2,uVar4 & 0xff);
      iVar7 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      iVar6 = fn_00156f30(iVar1,0);
      if (iVar6 != *(char *)(iVar7 + 0x219)) {
        iVar7 = param_2 + (uint)*(byte *)(iVar1 + 0x104) * 0xc;
        iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
        fVar10 = *(float *)(iVar7 + 0x28) - *(float *)(iVar6 + 8);
        fVar8 = *(float *)(iVar7 + 0x2c) - *(float *)(iVar6 + 0xc);
        fVar9 = *(float *)(iVar7 + 0x30) - *(float *)(iVar6 + 0x10);
        fVar8 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
        if ((fVar8 < fVar11) && (*(char *)(param_2 + (uint)*(byte *)(iVar1 + 0x104) + 0x18) != '\0')
           ) {
          iVar5 = iVar1;
          fVar11 = fVar8;
        }
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
    } while ((int)uVar4 < iVar1);
  }
  *(int *)(param_1 + 0x60) = iVar5;
  if (iVar5 != 0) {
    uVar2 = fn_006f7de8(iVar5);
    *(undefined4 *)(param_1 + 100) = uVar2;
    if (*(int *)(param_1 + 0x60) != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_002f2954(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 != 0) {
    bVar3 = *(int *)(uVar1 + 0x54) == 0;
    if (bVar3) {
      uVar1 = (uint)*(byte *)(uVar1 + 0x5c);
    }
    if (bVar3 && uVar1 == 0) {
      iVar2 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 100) == 0) {
        return 1;
      }
    }
    fn_00232a60(*(undefined4 *)(param_1 + 100),param_1 + 0x60);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return 1;
}



undefined4 fn_002f2800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x60) == 0) ||
      (iVar1 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), iVar1 != 0)) ||
     (iVar1 = fn_006f8074(*(undefined4 *)(param_1 + 0x60)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


