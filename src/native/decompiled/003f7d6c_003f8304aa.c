#include "003f7d6c_003f8304aa.h"



void fn_003f7e80(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0x40000) == 0) {
    if (((param_2 & 0x80000) != 0) &&
       (iVar1 = *(int *)(param_1 + 0x1c) + 1, *(int *)(param_1 + 0x1c) = iVar1, 2 < iVar1)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



void fn_003f7e0c(int param_1,uint param_2)

{
  int iVar1;
  uint in_s0;
  float fVar2;
  
  if ((int)in_s0 < 0x3f400001) {
    if (in_s0 < 0xbf400001) {
      if ((param_2 & 0x40000) != 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        return;
      }
      if ((param_2 & 0x80000) == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x1c) + 1;
      *(int *)(param_1 + 0x1c) = iVar1;
      if (2 < iVar1) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      return;
    }
    fVar2 = *(float *)(param_1 + 0x14) - 0.06981317;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x14) + 0.06981317;
  }
  *(float *)(param_1 + 0x14) = fVar2;
  return;
}



void fn_003f7dd4(int param_1)

{
  if ((*(char *)(param_1 + 0x10) == -1) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_003f7d6c(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return;
  }
  iVar5 = fn_00145b00(0x94,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    piVar6 = (int *)fn_00370a5c();
  }
  piVar9 = *(int **)(param_1 + 0x20);
  if (piVar9 != piVar6) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0x20) = piVar6;
  }
  iVar7 = *(int *)(param_1 + 0x20);
  iVar5 = fn_0011c1b4(L"rom:/data/Parameter/ColorChangeSelectColorTbl.tp");
  if (iVar5 == 0) {
    return;
  }
  iVar3 = fn_00145aac();
  if (iVar3 == 1) {
    iVar3 = fn_00145ac0(iVar5);
    iVar8 = 0;
    do {
      iVar10 = iVar7 + iVar8 * 6;
      psVar4 = (short *)(iVar3 + 4 + iVar8 * 6);
      uVar12 = (uint)*psVar4;
      iVar13 = (int)((longlong)(int)uVar12 * -0x49f49f49 + ((ulonglong)uVar12 << 0x20) >> 0x20);
      iVar13 = uVar12 + ((iVar13 >> 8) - (iVar13 >> 0x1f)) * -0x168;
      if (iVar13 < 0xb4) {
        fVar14 = (float)VectorSignedToFloat(iVar13 * 0x78,(byte)(in_fpscr >> 0x16) & 3);
        uVar11 = (undefined1)(int)(fVar14 * 0.0055555557);
      }
      else {
        fVar14 = (float)VectorSignedToFloat((short)(0x168 - (short)iVar13) * -0x78,
                                            (byte)(in_fpscr >> 0x16) & 3);
        uVar11 = (undefined1)(int)(fVar14 * 0.0055555557);
      }
      sVar1 = psVar4[1];
      sVar2 = psVar4[2];
      *(undefined1 *)(iVar10 + 5) = uVar11;
      iVar8 = iVar8 + 1;
      fVar14 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x16) & 3);
      *(short *)(iVar10 + 6) = (short)(int)(fVar14 * 2.55);
      *(short *)(iVar10 + 8) = (short)(int)(fVar15 * 2.55);
    } while (iVar8 < 0x18);
  }
  fn_0012d73c(iVar5);
  return;
}


