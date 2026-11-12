#include "006f7ad0_006f8008.h"



undefined1 fn_006f8008(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0xa4))(param_1);
  if (iVar2 == 0) {
    iVar2 = param_1[0x4b];
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    iVar2 = ((200 - iVar2) * param_1[0x4b]) / 100;
  }
  uVar1 = fn_00300f74(param_1[99] * 100,iVar2);
  return uVar1;
}



undefined1 fn_006f7fec(int param_1,int param_2)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x80) + param_2 * 0xc + 4);
}



uint fn_006f7fcc(uint param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x1a4);
  }
  bVar3 = bVar2 && iVar1 == 0;
  if (bVar2 && iVar1 == 0) {
    param_1 = (uint)*(byte *)(param_1 + 0x1e4);
    bVar3 = param_1 == 0;
  }
  if (!bVar3) {
    param_1 = 1;
  }
  return param_1;
}



void fn_006f7e48(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = 0;
  for (piVar3 = (int *)param_1[0x3a]; piVar3 != (int *)param_1[0x3b]; piVar3 = piVar3 + 1) {
    iVar4 = iVar4 + (uint)*(byte *)(*piVar3 + 0x56);
  }
  if (param_1[0x3f] != 0) {
    iVar4 = iVar4 + 3;
  }
  uVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
  bVar5 = uVar1 == 0;
  if (bVar5) {
    uVar1 = (uint)*(byte *)(param_1 + 0x4a);
  }
  fVar8 = 0.01;
  if (!bVar5) {
    iVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    fVar7 = (float)VectorSignedToFloat(iVar2 + 100,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x4a),(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToUnsigned(fVar7 * fVar6 * fVar8,3);
    uVar1 = uVar1 & 0xff;
  }
  VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  iVar4 = (**(code **)(*param_1 + 0xa4))(param_1);
  if (iVar4 == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x4a);
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
    fVar6 = (float)VectorSignedToFloat(iVar4 + 100,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x4a),(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToUnsigned(fVar6 * fVar7 * fVar8,3);
    uVar1 = uVar1 & 0xff;
  }
  VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_006f7df8(void)

{
  return;
}



int fn_006f7de8(int param_1)

{
  return *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2;
}



undefined4 fn_006f7da4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a8730();
  if (iVar1 == 1) {
    uVar2 = *(uint *)(param_1 + 0x1ac);
    if ((int)uVar2 < 1) {
      uVar2 = (uint)*(byte *)(param_1 + 0x156);
    }
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006f7d84(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) - (int)*(undefined4 **)(param_1 + 8) >> 3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  return uVar1;
}



bool fn_006f7d68(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x4c) != '\0';
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x14);
  }
  return bVar1 && param_1 != 0;
}



uint fn_006f7c8c(undefined4 param_1,uint param_2)

{
  if (param_2 != 0) {
    if ((param_2 & 0x10000) != 0) {
      param_2 = param_2 & 0x10000;
    }
    if ((param_2 & 0x20000) != 0) {
      param_2 = param_2 & 0x20000;
    }
    if ((param_2 & 0x40000) != 0) {
      param_2 = param_2 & 0x40000;
    }
    if ((param_2 & 0x80000) != 0) {
      param_2 = param_2 & 0x80000;
    }
    if ((param_2 & 0x100000) != 0) {
      param_2 = param_2 & 0x100000;
    }
    if ((param_2 & 0x200000) != 0) {
      param_2 = param_2 & 0x200000;
    }
    if ((param_2 & 0xfff) != 0) {
      param_2 = param_2 & 0xfff;
    }
    if ((param_2 & 0xf000) != 0) {
      param_2 = param_2 & 0xf000;
    }
    if ((param_2 & 0x400000) != 0) {
      param_2 = param_2 & 0x400000;
    }
    if ((param_2 & 0x1000000) != 0) {
      param_2 = param_2 & 0x1000000;
    }
    if ((param_2 & 0x800000) != 0) {
      param_2 = param_2 & 0x800000;
    }
  }
  return param_2;
}



int fn_006f7c6c(int param_1)

{
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x150;
}



int fn_006f7c20(int param_1,uint param_2)

{
  if (((int)param_2 < 0) ||
     ((uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x150) <= param_2)) {
    return 0;
  }
  return *(int *)(param_1 + 8) + param_2 * 0x150;
}



int fn_006f7c00(int param_1)

{
  return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18;
}



int fn_006f7bbc(int param_1,uint param_2)

{
  if (((int)param_2 < 0) ||
     ((uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18) <= param_2)) {
    return 0;
  }
  return *(int *)(param_1 + 0x14) + param_2 * 0x18;
}



int fn_006f7b9c(int param_1)

{
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x6c;
}



int fn_006f7b58(int param_1,uint param_2)

{
  if (((int)param_2 < 0) ||
     ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x6c) <= param_2)) {
    return param_1 + 0x10;
  }
  return *(int *)(param_1 + 4) + param_2 * 0x6c;
}



undefined4 fn_006f7ad0(undefined4 param_1,uint param_2,uint param_3)

{
  if ((param_2 & ~param_3) == 0) {
    if ((param_3 & ~param_2) == 0) {
      if ((((param_2 & param_3) != 0) &&
          (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
         (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
        return 1;
      }
    }
    else if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      return 1;
    }
  }
  else if (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) {
    return 1;
  }
  return 0;
}


