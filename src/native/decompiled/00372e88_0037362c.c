#include "00372e88_0037362c.h"



undefined4 fn_0037362c(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar5 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    uVar9 = 0x3dcccccd;
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar1,uVar5 & 0xff);
      iVar4 = fn_00156f30(iVar3,0);
      if ((iVar4 != *(char *)(iVar2 + 0x219)) && (iVar4 = fn_006f8074(iVar3), iVar4 != 0)) {
        iVar3 = *(int *)(iVar3 + 0xfc);
        uVar1 = fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6f3c(uVar1,param_2,0);
        fVar6 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
        fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
        fVar7 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
        if ((int)(SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) * (float)uVar9) < 0x41a00001)
        {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar5 < iVar3);
  }
  return 0;
}



undefined4 fn_003734f4(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar5 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    uVar9 = 0x3dcccccd;
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar1,uVar5 & 0xff);
      iVar4 = fn_00156f30(iVar3,0);
      if ((iVar4 != *(char *)(iVar2 + 0x219)) && (iVar4 = fn_006f8074(iVar3), iVar4 != 0)) {
        iVar3 = *(int *)(iVar3 + 0xfc);
        uVar1 = fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6f3c(uVar1,param_2,0);
        fVar6 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
        fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
        fVar7 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
        if ((int)(SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) * (float)uVar9) < 0x41200001)
        {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar5 < iVar3);
  }
  return 0;
}



undefined4 fn_00373444(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  iVar3 = fn_006f8074();
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar2 + 0xfc);
    uVar1 = fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6f3c(uVar1,param_2,0);
    fVar5 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
    fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar4 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
    if ((int)(SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 0.1) < 0x42200001) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00373394(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  iVar3 = fn_006f8074();
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar2 + 0xfc);
    uVar1 = fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6f3c(uVar1,param_2,0);
    fVar5 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
    fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar4 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
    if ((int)(SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 0.1) < 0x41f00001) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_003732e4(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  iVar3 = fn_006f8074();
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar2 + 0xfc);
    uVar1 = fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6f3c(uVar1,param_2,0);
    fVar5 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
    fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar4 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
    if ((int)(SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 0.1) < 0x41a00001) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00373234(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  iVar3 = fn_006f8074();
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar2 + 0xfc);
    uVar1 = fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6f3c(uVar1,param_2,0);
    fVar5 = *(float *)(iVar2 + 8) - *(float *)(iVar3 + 8);
    fVar6 = *(float *)(iVar2 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar4 = *(float *)(iVar2 + 0x10) - *(float *)(iVar3 + 0x10);
    if ((int)(SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 0.1) < 0x41200001) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00373180(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if ((iVar3 != *(char *)(iVar2 + 0x219)) && (*(byte *)(param_1 + uVar4 + 0x20) < 0x33)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}



undefined4 fn_003730cc(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if ((iVar3 != *(char *)(iVar2 + 0x219)) && (*(byte *)(param_1 + uVar4 + 0x20) < 0x1f)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}



undefined4 fn_00373018(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if ((iVar3 != *(char *)(iVar2 + 0x219)) && (*(byte *)(param_1 + uVar4 + 0x20) < 0x15)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}



undefined4 fn_00372f64(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if ((iVar3 != *(char *)(iVar2 + 0x219)) && (*(byte *)(param_1 + uVar4 + 0x20) < 0xb)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}



undefined4 fn_00372e88(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      uVar1 = fn_006b71a8(uVar1,uVar4 & 0xff);
      iVar3 = fn_00156f30(uVar1,0);
      if (iVar3 != *(char *)(iVar2 + 0x219)) {
        uVar1 = fn_0014481c(DAT_008977e8);
        fn_006b71a8(uVar1,uVar4 & 0xff);
        iVar3 = fn_006f8074();
        if (iVar3 != 0) {
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}


