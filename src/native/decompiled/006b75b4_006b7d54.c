#include "006b75b4_006b7d54.h"



int fn_006b7d54(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  iVar1 = fn_0068f7e4();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bc78(uVar2);
      if ((iVar1 != 0) &&
         ((*(uint *)(*(int *)(param_1 + 4) + 0x298 + (uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0))
      {
        iVar3 = iVar3 + 1;
      }
      uVar2 = (uint)(short)((short)uVar2 + 1);
      iVar1 = fn_0068f7e4();
    } while ((int)uVar2 < iVar1);
  }
  return iVar3;
}



uint fn_006b7d34(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x180 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



uint fn_006b7d14(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x7c0 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



int fn_006b7ca4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  iVar1 = fn_001746f4();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bbf4(uVar2);
      if ((iVar1 != 0) &&
         ((*(uint *)(*(int *)(param_1 + 4) + 0x180 + (uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0))
      {
        iVar3 = iVar3 + 1;
      }
      uVar2 = (uint)(short)((short)uVar2 + 1);
      iVar1 = fn_001746f4();
    } while ((int)uVar2 < iVar1);
  }
  return iVar3;
}



int fn_006b7c34(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  iVar1 = fn_00660c48();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bbd8(uVar2);
      if ((iVar1 != 0) &&
         ((*(uint *)(*(int *)(param_1 + 4) + 0x7c0 + (uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0))
      {
        iVar3 = iVar3 + 1;
      }
      uVar2 = (uint)(short)((short)uVar2 + 1);
      iVar1 = fn_00660c48();
    } while ((int)uVar2 < iVar1);
  }
  return iVar3;
}



int fn_006b7bc4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = fn_006924e0();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bc94(iVar2);
      if ((iVar1 != 0) && ((param_2 == 0 || (iVar1 = fn_00163c9c(iVar2), iVar1 != 0)))) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
      iVar1 = fn_006924e0();
    } while (iVar2 < iVar1);
  }
  return iVar3;
}



int fn_006b7b7c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = fn_0068f7e4();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bc78(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
      iVar1 = fn_0068f7e4();
    } while (iVar2 < iVar1);
  }
  return iVar3;
}



bool fn_006b7b54(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + ((int)param_2 >> 5) * 4 + 0x80) & 1 << (param_2 & 0x1f))
         != 0;
}



bool fn_006b7b34(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + ((int)param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
}



int fn_006b7aec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = fn_001746f4();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bbf4(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = (int)(short)((short)iVar2 + 1);
      iVar1 = fn_001746f4();
    } while (iVar2 < iVar1);
  }
  return iVar3;
}



int fn_006b7aa8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = fn_00660c48();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bbd8((int)(short)iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = fn_00660c48();
    } while (iVar2 < iVar1);
  }
  return iVar3;
}



undefined4 fn_006b7aa0(void)

{
  return 0;
}



uint fn_006b7a80(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x20c + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



bool fn_006b77dc(undefined4 param_1,int param_2)

{
  return param_2 - 0xbeU < 0x78;
}



int fn_006b771c(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_2 <= param_3) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x20) + param_2 * 0x14);
      if ((*piVar1 != 0) && (*(short *)((int)piVar1 + 6) == param_4)) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return -1;
}



int fn_006b770c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0xf;
  while ((piVar2 = (int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14), *piVar2 == 0 ||
         (*(short *)((int)piVar2 + 6) != param_2))) {
    iVar1 = iVar1 + 1;
    if (0x5e < iVar1) {
      return -1;
    }
  }
  return iVar1;
}



int fn_006b7674(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  do {
    if (param_3 < param_2) {
      return -1;
    }
    piVar5 = (int *)(*(int *)(param_1 + 0x20) + param_2 * 0x14);
    if (*piVar5 != 0) {
      uVar4 = *(uint *)(piVar5[3] + -4);
      uVar1 = fn_00100b58(param_4);
      uVar2 = *(uint *)(piVar5[3] + -4);
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      iVar3 = fn_001006de(piVar5[3],param_4);
      if (iVar3 == 0 && uVar4 == uVar1) {
        return param_2;
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}



undefined4 fn_006b7604(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 8) == '\x05') {
    fVar4 = *(float *)(iVar1 + 0x10);
    uVar2 = fn_00176970();
    fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar4 == fVar3) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006b75b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 8) == '\x0e') {
    fVar4 = *(float *)(iVar1 + 0x10);
    uVar2 = fn_00176970();
    fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar4 == fVar3) {
      return 1;
    }
  }
  return 0;
}


