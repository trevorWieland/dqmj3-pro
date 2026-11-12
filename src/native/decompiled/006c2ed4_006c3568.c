#include "006c2ed4_006c3568.h"



undefined4 fn_006c3568(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_s0;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)in_s0;
  iVar4 = *(int *)(param_2 + 8);
  if (*(int *)(iVar4 + 0xdc) == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + 0x100)) {
    do {
      piVar1 = (int *)fn_006bb544(iVar4,iVar3);
      if ((float)uVar5 <= (float)piVar1[9]) {
        return 0;
      }
      iVar2 = fn_00242b6c((int)*(short *)((int)piVar1 + 0x16a));
      if (iVar2 == 1) {
        return 0;
      }
      iVar2 = (**(code **)(*piVar1 + 0x1ac))(piVar1);
      if (iVar2 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar4 + 0x100));
  }
  return 1;
}



undefined4 fn_006c3494(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  ulonglong uVar7;
  
  iVar5 = *(int *)(param_2 + 8);
  if (*(int *)(iVar5 + 0xdc) == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x100)) {
    iVar4 = fn_006bb544(iVar5,0,param_3,0);
    iVar4 = (int)*(short *)(iVar4 + 0x16a);
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))
                    (*(int **)(param_1 + 0x24),(int)*(char *)(param_2 + 0x1e),
                     (int)*(short *)(param_2 + 6),iVar4);
  iVar4 = 0;
  fVar6 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = (ulonglong)(uint)(fVar6 * fVar6);
  if (0 < *(int *)(iVar5 + 0x100)) {
    do {
      piVar2 = (int *)fn_006bb544(iVar5,iVar4);
      if ((float)piVar2[0x62] <= (float)uVar7) {
        return 0;
      }
      iVar3 = (**(code **)(*piVar2 + 0x1b8))();
      if (iVar3 != 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar5 + 0x100));
  }
  return 1;
}



int fn_006c3414(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar2 = (*(int *)(param_1 + 0x30) - iVar4) / 0x34;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      psVar5 = (short *)(iVar4 + iVar3 * 0x34);
      psVar1 = psVar5 + 1;
      if (*psVar1 == param_3) {
        psVar5 = (short *)(int)*psVar5;
      }
      if (*psVar1 == param_3 && psVar5 == param_2) {
        return (int)*(short *)(iVar4 + iVar3 * 0x34 + 0xc);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return -1;
}



bool fn_006c3400(undefined4 param_1,int param_2)

{
  return param_2 - 700U < 0x17;
}



int fn_006c3380(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar2 = (*(int *)(param_1 + 0x30) - iVar4) / 0x34;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      psVar5 = (short *)(iVar4 + iVar3 * 0x34);
      psVar1 = psVar5 + 1;
      if (*psVar1 == param_3) {
        psVar5 = (short *)(int)*psVar5;
      }
      if (*psVar1 == param_3 && psVar5 == param_2) {
        return (int)*(short *)(iVar4 + iVar3 * 0x34 + 10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return -1;
}



undefined4 fn_006c32a8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = fn_002fb61c();
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = fn_00341260(0xffffffff);
  }
  else {
    if (0x7ff < param_2) {
      return 0;
    }
    if (0x16 < param_2 - 700U) {
      iVar1 = fn_002fb61c();
      if (iVar1 == 0) {
        iVar1 = fn_00341260(0xffffffff);
        if (iVar1 == 0) {
          iVar1 = fn_00154ac8(param_2);
          if (iVar1 == 0) {
            return 0;
          }
          return 1;
        }
        iVar1 = fn_003411d8(0xffffffff);
      }
      else {
        iVar1 = fn_002fb6a8();
      }
      if (iVar1 == param_2) {
        return 1;
      }
      return 0;
    }
    iVar1 = fn_00154ac8(param_2);
  }
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}



undefined4 fn_006c328c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (param_2 < 0x800)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006c31cc(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_s0;
  ulonglong uVar5;
  
  iVar4 = *(int *)(param_2 + 8);
  if (*(int *)(iVar4 + 0xdc) == 0) {
    return 0;
  }
  fn_006afb84(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  uVar5 = (ulonglong)in_s0;
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + 0x100)) {
    do {
      piVar1 = (int *)fn_006bb544(iVar4,iVar3);
      if ((float)uVar5 <= (float)piVar1[9]) {
        return 0;
      }
      iVar2 = fn_00242b6c((int)*(short *)((int)piVar1 + 0x16a));
      if (iVar2 == 1) {
        return 0;
      }
      iVar2 = (**(code **)(*piVar1 + 0x1ac))(piVar1);
      if (iVar2 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar4 + 0x100));
  }
  return 1;
}



undefined4 fn_006c3130(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_008977e0 + 0xa8);
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31ac);
  if ((((iVar1 == iVar3) ||
       (iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31b4), iVar1 == iVar3)) ||
      (iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31bc), iVar1 == iVar3)) ||
     (iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31c4), iVar1 == iVar3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006c2fc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fVar5 = *(float *)(iVar1 + 0x30) - *(float *)(*(int *)(param_1 + 4) + 0x30);
  fn_005df8f8();
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x178))();
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 4);
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar6 = *(float *)(iVar4 + 0x20) - *(float *)(iVar1 + 0x20);
    fVar8 = 0.024543693;
    fVar3 = *(float *)(*(int *)(param_1 + 4) + 8);
    fVar7 = fVar6;
    if (fVar3 != 2.8026e-45) {
      iVar1 = fn_006f7a84(DAT_008977e0);
      fn_00525bd0();
      fVar6 = fVar6 * fVar8 - *(float *)(iVar1 + 0x30);
      fn_005df8f8();
      fVar3 = fVar6;
      if (((((uint)fVar6 < 0xbfc90fdc) && (fVar3 = 1.5707964, (int)fVar6 < 0x3fc90fdc)) &&
          ((uint)fVar5 < 0xbfc90fdc)) && ((int)fVar5 < 0x3fc90fdc)) {
        return 1;
      }
    }
    fVar7 = -fVar7;
    iVar1 = *(int *)(param_1 + 4);
    fn_00525bd0(fVar3);
    fVar3 = fVar7 * fVar8 - *(float *)(iVar1 + 0x30);
    fn_005df8f8();
    if ((((uint)fVar3 < 0xbf490fdc) && ((int)fVar3 < 0x3f490fdc)) &&
       (((uint)fVar5 < 0xbf060a93 && ((int)fVar5 < 0x3f060a93)))) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



undefined4 fn_006c2f34(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  iVar1 = fn_006a9938(param_2);
  if (iVar1 != 0) {
    fVar2 = 30.0;
    fVar3 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
    fn_001a4a80();
    if (fVar3 < fVar2) {
      return 1;
    }
  }
  return 0;
}



undefined1 fn_006c2ed4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      iVar3 = *(int *)(param_1 + 0x10) + iVar2 * 9;
      iVar1 = fn_00147e6c(iVar3,param_2,8);
      if (iVar1 == 0) {
        return *(undefined1 *)(iVar3 + 8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return 0;
}


