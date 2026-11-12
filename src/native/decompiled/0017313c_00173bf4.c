#include "0017313c_00173bf4.h"



int fn_00173bf4(ushort *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  iVar3 = 0;
  bVar2 = false;
  param_3 = param_3 + -1;
  while( true ) {
    uVar5 = (uint)*param_1;
    if ((uVar5 == 0 || param_3 == 0) || (bVar2)) break;
    bVar1 = (byte)*param_1;
    if (uVar5 < 0x80) {
      param_3 = param_3 + -1;
      iVar3 = iVar3 + 1;
      *param_2 = bVar1;
      param_2 = param_2 + 1;
    }
    else if (uVar5 < 0x800) {
      pbVar4 = param_2 + 1;
      *param_2 = (byte)((int)uVar5 >> 6) | 0xc0;
      param_3 = param_3 + -2;
      iVar3 = iVar3 + 2;
      param_2 = param_2 + 2;
      *pbVar4 = bVar1 & 0x3f | 0x80;
    }
    else if (uVar5 < 0x10000) {
      *param_2 = (byte)((int)uVar5 >> 0xc) | 0xe0;
      pbVar4 = param_2 + 2;
      param_2[1] = (byte)((uVar5 & 0xfff) >> 6) | 0x80;
      param_3 = param_3 + -3;
      iVar3 = iVar3 + 3;
      param_2 = param_2 + 3;
      *pbVar4 = bVar1 & 0x3f | 0x80;
    }
    else {
      bVar2 = true;
    }
    param_1 = param_1 + 1;
  }
  *param_2 = 0;
  return iVar3;
}



void fn_00173b98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
  bVar5 = *(char *)(iVar2 + 0x4c) != param_2;
  if (bVar5) {
    *(char *)(iVar2 + 0x4c) = (char)param_2;
  }
  if (bVar5 && param_2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x50);
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + -1;
        iVar1 = iVar4 * 0xc;
        iVar4 = iVar4 + 1;
        *(undefined1 *)(iVar2 + iVar1 + 0x20) = 0;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined1 *)(iVar2 + 0x4d) = 1;
  }
  return;
}



int fn_00173a34(int *param_1,int param_2)

{
  int iVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  *param_1 = iVar1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_38 = 0;
  if (*(int *)(param_2 + 0x20) != 0) {
    local_38 = *(int *)(param_2 + 8) + param_2;
  }
  local_34 = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    local_34 = *(int *)(param_2 + 0xc) + param_2;
  }
  local_30 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    local_30 = *(int *)(param_2 + 0x10) + param_2;
  }
  local_2c = 0;
  if (*(int *)(param_2 + 0x2c) != 0) {
    local_2c = *(int *)(param_2 + 0x14) + param_2;
  }
  local_28 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    local_28 = *(int *)(param_2 + 0x18) + param_2;
  }
  if (*(int *)(param_2 + 0x34) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(param_2 + 0x1c) + param_2;
  }
  local_20 = 0;
  local_1c = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    local_20 = fn_001287dc(*(int *)(param_2 + 0x38),4);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    local_1c = fn_00143ac8(*(int *)(param_2 + 0x3c),0x10);
  }
  iVar1 = fn_0013f638(*param_1,param_2,&local_38);
  iVar1 = (iVar1 >> 0x1f) + 1;
  if (iVar1 != 0) {
    param_1[1] = local_24;
    param_1[7] = *(int *)(*param_1 + 0x18);
    param_1[8] = *(int *)(*param_1 + 0x1c);
  }
  return iVar1;
}



void fn_001735cc(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00101a1c(param_1,fn_0017d8f8,4,2);
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2e) = 0;
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0xff;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



int fn_001735bc(void)

{
  int iVar1;
  
  iVar1 = fn_00127a60();
  return iVar1 + 0x48;
}



undefined4 * fn_00173460(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0017e758();
  *puVar1 = &DAT_00858374;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return puVar1;
}



void fn_001733d4(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      fn_0017e7a0(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      fn_0017e80c(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      fn_0017eab4(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}



undefined4 * fn_00173340(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0017eca4();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x11] = &DAT_0085830c;
  puVar1[0x14] = &DAT_00858320;
  *puVar1 = &DAT_008582dc;
  puVar1[0x16] = 0;
  fn_0017df94(puVar1 + 0x1e);
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)((int)puVar1 + 0x8d) = 0;
  *(undefined1 *)((int)puVar1 + 0x8e) = 0;
  *(undefined1 *)((int)puVar1 + 0x8f) = 0;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  *(undefined1 *)((int)puVar1 + 0xa1) = 0;
  *(undefined1 *)((int)puVar1 + 0xa2) = 0;
  *(undefined1 *)((int)puVar1 + 0xa3) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xffffffff;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  return puVar1;
}



void fn_0017313c(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  uVar8 = 0;
  uVar13 = 0x3f80000000000000;
  do {
    iVar7 = param_1 + uVar8 * 0x10;
    iVar3 = *(int *)(iVar7 + 0x40);
    bVar1 = iVar3 < *(int *)(iVar7 + 0x3c);
    if (bVar1) {
      *(int *)(iVar7 + 0x40) = iVar3 + 1;
    }
    if (*(int *)(iVar7 + 0x20) < *(int *)(iVar7 + 0x1c)) {
      iVar3 = *(int *)(iVar7 + 0x20) + 1;
      *(int *)(iVar7 + 0x20) = iVar3;
      if (*(int *)(iVar7 + 0x1c) <= iVar3) {
        fn_0018b588(param_1,uVar8 & 0xff);
      }
LAB_001731b8:
      fVar14 = (float)((ulonglong)uVar13 >> 0x20);
      if (*(int *)(iVar7 + 0x40) < *(int *)(iVar7 + 0x3c)) {
        fVar12 = (float)VectorSignedToFloat(*(int *)(iVar7 + 0x40),(byte)(in_fpscr >> 0x16) & 3);
        fVar11 = (float)VectorSignedToFloat(*(int *)(iVar7 + 0x3c),(byte)(in_fpscr >> 0x16) & 3);
        fVar11 = ((*(float *)(iVar7 + 0x38) - *(float *)(iVar7 + 0x34)) * fVar12) / fVar11 +
                 *(float *)(iVar7 + 0x34);
      }
      else {
        fVar11 = *(float *)(iVar7 + 0x38);
      }
      uVar9 = in_fpscr & 0xfffffff;
      uVar10 = uVar9 | (uint)(fVar11 < fVar14) << 0x1f | (uint)(fVar11 == fVar14) << 0x1e;
      bVar2 = (byte)(uVar10 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar11) || NAN(fVar14))) {
        if (fVar11 < (float)uVar13) {
        }
      }
      else {
        uVar9 = uVar10;
      }
      if (*(int *)(iVar7 + 0x20) < *(int *)(iVar7 + 0x1c)) {
        fVar12 = (float)VectorSignedToFloat(*(int *)(iVar7 + 0x20),(byte)(uVar9 >> 0x16) & 3);
        fVar11 = (float)VectorSignedToFloat(*(int *)(iVar7 + 0x1c),(byte)(uVar9 >> 0x16) & 3);
        fVar11 = ((*(float *)(iVar7 + 0x18) - *(float *)(iVar7 + 0x14)) * fVar12) / fVar11 +
                 *(float *)(iVar7 + 0x14);
      }
      else {
        fVar11 = *(float *)(iVar7 + 0x18);
      }
      in_fpscr = uVar9 & 0xfffffff;
      uVar9 = in_fpscr | (uint)(fVar11 < fVar14) << 0x1f | (uint)(fVar11 == fVar14) << 0x1e;
      uVar10 = uVar9 | (uint)(NAN(fVar11) || NAN(fVar14)) << 0x1c;
      bVar2 = (byte)(uVar9 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar10 >> 0x1c) & 1)) {
        if (fVar11 < (float)uVar13) {
        }
      }
      else {
        in_fpscr = uVar10;
      }
      fn_00193fc0((int)(char)uVar8);
    }
    else if (bVar1) goto LAB_001731b8;
    iVar3 = 0;
    do {
      iVar6 = iVar7 + iVar3 * 8;
      if ((*(int *)(iVar6 + 0x290) != 0) && (*(char *)(iVar6 + 0x294) == '\x02')) {
        if (iVar3 == 0) {
          iVar4 = fn_0017cdc0();
        }
        else {
          if (iVar3 != 1) goto LAB_001732ec;
          iVar4 = fn_0017ce0c();
        }
        if (iVar4 == 0) {
          *(int *)(iVar6 + 0x290) = 0;
          *(undefined1 *)(iVar6 + 0x294) = 0;
        }
      }
LAB_001732ec:
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    uVar8 = uVar8 + 1;
    if (1 < (int)uVar8) {
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        uVar5 = fn_0018b794();
        fn_0018b7fc(uVar5,0x40);
        return;
      }
      return;
    }
  } while( true );
}


