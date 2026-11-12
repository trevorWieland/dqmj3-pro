#include "0018a9fc_0018b078.h"



void fn_0018b078(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x30) != in_s0) {
    *(float *)(param_1 + 0x30) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018b010(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar2 * 4) != 0) {
          fn_0018a33c();
          *(undefined4 *)(param_1 + iVar2 * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
    uVar1 = fn_0018b794();
    fn_001960ec(uVar1,param_1);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



void fn_0018afa8(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  float in_s0;
  
  if (1.0 < in_s0) {
    in_s0 = 1.0;
  }
  else if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  bVar2 = *(byte *)(param_1 + 0x22) != param_2;
  if (bVar2) {
    *(char *)(param_1 + 0x22) = (char)param_2;
  }
  bVar1 = *(float *)(param_1 + 0x3c) != in_s0;
  if (bVar1) {
    *(float *)(param_1 + 0x3c) = in_s0;
  }
  if (bVar1 || bVar2) {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x20;
  }
  return;
}



void fn_0018af84(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x34) != in_s0) {
    *(float *)(param_1 + 0x34) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018af40(int param_1)

{
  float in_s0;
  float fVar1;
  
  fVar1 = in_s0 + 1.0;
  if (in_s0 + 1.0 < 0.0) {
    fVar1 = 0.0;
  }
  if (*(float *)(param_1 + 0x44) != fVar1) {
    *(float *)(param_1 + 0x44) = fVar1;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018af1c(int param_1)

{
  float in_s0;
  
  if (*(float *)(param_1 + 0x38) != in_s0) {
    *(float *)(param_1 + 0x38) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
  }
  return;
}



void fn_0018aec4(void)

{
  return;
}



void fn_0018ad98(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0xbff < 0xbff - param_1) {
    iVar1 = (0xbff - param_1) / 0xc00;
    iVar2 = -iVar1;
    param_1 = param_1 + iVar1 * 0xc00;
  }
  if (-param_1 / 0xc00 != 0 && -1 < -(-param_1 / 0xc00)) {
    iVar2 = iVar2 + param_1 / 0xc00;
  }
  if (0 < iVar2) {
    for (iVar2 = iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    iVar2 = 0;
  }
  if (iVar2 != 0 && -1 < -iVar2) {
    for (iVar2 = -iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
  }
  return;
}



undefined2 fn_0018ad00(void)

{
  undefined2 uVar1;
  float in_s0;
  float fVar2;
  
  fVar2 = 1.0;
  if ((1.0 < in_s0) || ((0.0 <= in_s0 && (fVar2 = in_s0, 0x3e0ade7e < (int)in_s0)))) {
    if ((int)fVar2 < 0x3f666666) {
      return *(undefined2 *)(&DAT_00807ce8 + (int)((fVar2 - 0.13561438) * 29.999998) * 2);
    }
    uVar1 = 16000;
  }
  else {
    uVar1 = 0x50;
  }
  return uVar1;
}



void fn_0018abf0(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float in_s1;
  float fVar5;
  
  switch(*param_1) {
  case 0:
    param_2 = param_2 + 1;
    if (1 < param_2) {
      in_s1 = *(float *)(param_1 + 0x10);
    }
    iVar3 = 1;
    if (1 < param_2) {
      while (fVar4 = *(float *)(param_1 + 4), *(float *)(param_1 + 4) = fVar4 * in_s1,
            0xbcffffff < (uint)(fVar4 * in_s1)) {
        iVar3 = iVar3 + 1;
        if (param_2 <= iVar3) {
          return;
        }
      }
      sVar2 = *(short *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 4) = 0;
      *param_1 = 1;
LAB_0018ac54:
      *(short *)(param_1 + 0x16) = sVar2;
      return;
    }
    break;
  case 1:
    uVar1 = *(ushort *)(param_1 + 0x16);
    if (param_2 < (int)(uint)uVar1) {
      sVar2 = uVar1 - (short)param_2;
      goto LAB_0018ac54;
    }
    *(undefined2 *)(param_1 + 0x16) = 0;
    param_2 = param_2 - (uint)uVar1;
    *param_1 = 2;
  case 2:
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = *(float *)(param_1 + 4) - *(float *)(param_1 + 8) * fVar4;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(&DAT_00812868 + (uint)(byte)param_1[0x18] * 2
                                                      ),(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 4) = fVar4;
    if (fVar4 < fVar5) {
      *(float *)(param_1 + 4) = fVar5;
      *param_1 = 3;
      return;
    }
    break;
  case 4:
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xc) * fVar4;
    return;
  }
  return;
}



undefined4 * fn_0018a9fc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar1 = (undefined4 *)fn_00194db0();
  *puVar1 = &PTR_FUN_00857d6c;
  puVar1[0x29] = 0;
  puVar1[0x2a] = *(undefined4 *)(param_2 + 0xa8);
  puVar1 = (undefined4 *)fn_00101a1c(puVar1 + 0x2b,fn_0017d8f8,4,2,param_4);
  puVar1[2] = *(undefined4 *)(param_2 + 0xb4);
  puVar1[3] = *(undefined4 *)(param_2 + 0xb8);
  puVar1[4] = *(undefined4 *)(param_2 + 0xbc);
  puVar1[5] = *(undefined4 *)(param_2 + 0xc0);
  puVar1[6] = *(undefined4 *)(param_2 + 0xc4);
  puVar1[7] = *(undefined4 *)(param_2 + 200);
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined2 *)((int)puVar1 + 0x22) = 0;
  *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined1 *)((int)puVar1 + 0x25) = *(undefined1 *)(param_2 + 0xd1);
  puVar1[10] = *(undefined4 *)(param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0xdc);
  puVar1[0xb] = *(undefined4 *)(param_2 + 0xd8);
  puVar1[0xc] = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0xe4);
  puVar1[0xd] = *(undefined4 *)(param_2 + 0xe0);
  puVar1[0xe] = uVar4;
  puVar1[0xf] = *(undefined4 *)(param_2 + 0xe8);
  puVar1[0x10] = *(undefined4 *)(param_2 + 0xec);
  puVar1[0x11] = *(undefined4 *)(param_2 + 0xf0);
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *puVar1 = *(undefined4 *)(param_2 + 0xac);
  puVar1[1] = *(undefined4 *)(param_2 + 0xb0);
  if (*(int *)(param_2 + 0xfc) != 0) {
    puVar2 = (undefined4 *)fn_00194ee4(0x18,4);
    puVar1[0x14] = puVar2;
    puVar5 = *(undefined4 **)(param_2 + 0xfc);
    uVar4 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    uVar11 = puVar5[4];
    uVar12 = puVar5[5];
    *puVar2 = *puVar5;
    puVar2[1] = uVar4;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    puVar2[4] = uVar11;
    puVar2[5] = uVar12;
    *(undefined4 *)(puVar1[0x14] + 8) = 0;
  }
  if ((*(short *)(param_2 + 0xcc) != 0) && (*(short *)(param_2 + 0xcc) != 1)) {
    if (*(int *)(param_2 + 0xf8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_2 + 0xf8) + 0x10);
    }
    fn_00195080(puVar1 + -0x2b);
    uVar3 = puVar1[2];
    bVar8 = uVar3 != 0;
    if (bVar8) {
      iVar6 = puVar1[-2];
    }
    if (bVar8 && iVar6 != 0) {
      uVar3 = (uint)*(ushort *)(puVar1 + 8);
    }
    if (((bVar8 && iVar6 != 0) && uVar3 != 0) && (uVar3 = uVar3 - 1 & 0xffff, uVar3 != 0)) {
      uVar7 = (uint)*(ushort *)(param_2 + 0xce);
      if (uVar3 < *(ushort *)(param_2 + 0xce)) {
        uVar7 = uVar3;
      }
      fn_001694e4(iVar6,*(undefined4 *)(param_2 + 0xa4),uVar7 << 1);
      if (*(short *)puVar1[-2] == 0) {
        *(undefined2 *)((int)puVar1 + 0x22) = 0;
      }
      else {
        *(short *)((int)puVar1 + 0x22) = (short)uVar7;
      }
      *(undefined2 *)(puVar1[-2] + (uint)*(ushort *)((int)puVar1 + 0x22) * 2) = 0;
      *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 4;
    }
  }
  uVar9 = *(undefined4 *)(param_2 + 0xf4);
  iVar6 = fn_00194ee4(0x84,4);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = fn_0019533c(iVar6,uVar9);
  }
  puVar1[0x12] = uVar4;
  return puVar1 + -0x2b;
}


