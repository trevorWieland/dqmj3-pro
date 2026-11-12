#include "006e00a0_006e09a0.h"



void fn_006e09a0(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  float in_s0;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    bVar1 = **(byte **)(param_1 + 0x14) & 1;
    if ((**(byte **)(param_1 + 0x14) & 1) == 0) goto LAB_006e0a2c;
  }
  else {
    fn_006df72c((float *)(param_1 + 8));
    in_s0 = in_s0 - *(float *)(param_1 + 8);
    if (*(float *)(param_1 + 0xc) == in_s0) {
      uVar2 = *(int *)(param_1 + 0x18) - 1;
      uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x14) + (uVar2 >> 3)) & 1 << (uVar2 & 7);
      bVar1 = (byte)uVar2;
    }
    else {
      uVar2 = VectorFloatToUnsigned(in_s0,3);
      uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x14) + (uVar2 >> 3)) & 1 << (uVar2 & 7);
      bVar1 = (byte)uVar2;
    }
    if (uVar2 == 0) goto LAB_006e0a2c;
  }
  bVar1 = 1;
LAB_006e0a2c:
  *param_2 = bVar1;
  return;
}



void fn_006e0868(int param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint in_s0;
  float fVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  uVar9 = (ulonglong)in_s0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(*param_3 + uVar6 * 2) != -1) {
        fVar8 = (float)uVar9;
        iVar7 = *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 4);
        if (*(int *)(iVar7 + 0x18) == 1) {
          if ((**(byte **)(iVar7 + 0x14) & 1) != 0) goto LAB_006e0938;
LAB_006e0940:
          cVar4 = '\0';
        }
        else {
          fn_006df72c((float *)(iVar7 + 8));
          fVar8 = fVar8 - *(float *)(iVar7 + 8);
          if (*(float *)(iVar7 + 0xc) != fVar8) {
            uVar3 = VectorFloatToUnsigned(fVar8,3);
            if (((uint)*(byte *)(*(int *)(iVar7 + 0x14) + (uVar3 >> 3)) & 1 << (uVar3 & 7)) != 0)
            goto LAB_006e0938;
            goto LAB_006e0940;
          }
          uVar3 = *(int *)(iVar7 + 0x18) - 1;
          if (((uint)*(byte *)(*(int *)(iVar7 + 0x14) + (uVar3 >> 3)) & 1 << (uVar3 & 7)) == 0)
          goto LAB_006e0940;
LAB_006e0938:
          cVar4 = '\x01';
        }
        if (*(short *)(iVar7 + 4) == 0x32) {
          uVar1 = *(ushort *)(*param_3 + uVar6 * 2);
          bVar5 = *(byte *)(*param_2 + (uint)(uVar1 >> 3));
          bVar2 = (byte)(1 << (uVar1 & 7));
          if (cVar4 == '\0') {
            bVar5 = bVar5 & ~bVar2;
          }
          else {
            bVar5 = bVar5 | bVar2;
          }
          *(byte *)(*param_2 + (uint)(uVar1 >> 3)) = bVar5;
        }
        else {
          *(char *)(param_2 + 2) = cVar4;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x10));
  }
  return;
}



void fn_006e0670(int param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  param_3 = param_3 & 0xffff;
  iVar1 = *param_2 + param_3 * 0x278;
  iVar4 = iVar1 + 4;
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined1 *)(iVar4 + param_4 + 0x164) = 0;
  }
  else {
    iVar2 = iVar4 + param_4;
    *(undefined1 *)(iVar2 + 0x164) = 1;
    if (*(char *)(param_1 + 0x28) == '\v') {
      *(undefined1 *)(iVar2 + 0x16c) = 1;
      *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 0x238) =
           *(undefined4 *)(param_1 + 0x50);
      *(byte *)(iVar1 + 0x1a0) = *(byte *)(param_1 + 0x2b) & 0xf;
      *(byte *)(iVar1 + 0x1a2) = *(byte *)(param_1 + 0x2b) >> 4;
      *(byte *)(iVar1 + 0x1a1) = **(byte **)(param_1 + 0x50) & 1;
    }
    else {
      *(undefined1 *)(iVar2 + 0x16c) = 0;
      *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 0x238) = 0;
    }
    if ((*(byte *)(param_1 + 0x2a) & 2) == 0) {
      *(undefined1 *)(iVar2 + 0x174) = 0;
      *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 600) = 0;
    }
    else {
      *(undefined1 *)(iVar2 + 0x174) = 1;
      iVar2 = iVar4 + param_4 * 0x2c;
      fVar5 = 1.0 / (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x54));
      fVar6 = -(*(float *)(param_1 + 0x54) * fVar5);
      iVar1 = 0;
      if ((ABS(fVar5) == 0.0) || (iVar1 = ((uint)ABS(fVar5) >> 0x17) - 0x40, -1 < iVar1)) {
        uVar3 = ((uint)fVar5 & 0x7fffff) >> 0xb | iVar1 << 0xc | ((uint)fVar5 >> 0x1f) << 0x13;
      }
      else {
        uVar3 = ((uint)fVar5 >> 0x1f) << 0x13;
      }
      *(uint *)(iVar2 + 0x24) = uVar3;
      iVar1 = 0;
      if ((ABS(fVar6) == 0.0) || (iVar1 = ((uint)ABS(fVar6) >> 0x17) - 0x40, -1 < iVar1)) {
        uVar3 = ((uint)fVar6 & 0x7fffff) >> 0xb | iVar1 << 0xc | ((uint)fVar6 >> 0x1f) << 0x13;
      }
      else {
        uVar3 = ((uint)fVar6 >> 0x1f) << 0x13;
      }
      *(uint *)(iVar2 + 0x20) = uVar3;
      *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 600) =
           *(undefined4 *)(param_1 + 0x4c);
    }
    iVar4 = iVar4 + param_4 * 0x2c;
    if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
      *(undefined1 *)(iVar4 + 5) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 5) = 1;
    }
    *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1b4) =
         *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1b8) =
         *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1bc) =
         *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1c0) =
         *(undefined4 *)(param_1 + 0x3c);
  }
  return;
}



void fn_006e02e0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar5 = *(int *)(param_4 + 0xcc);
  fn_0044ee24(param_2,*(undefined4 *)(iVar5 + 0xc),*(int *)(iVar5 + 0x10) << 2);
  puVar1 = (undefined4 *)*param_2;
  *puVar1 = 0;
  puVar1[1] = 0xf004e;
  *param_2 = (int)(puVar1 + 2);
  fVar10 = *(float *)(param_4 + 0xb8);
  fVar12 = *(float *)(param_4 + 0xb4);
  fVar6 = *(float *)(param_3 + 4);
  fVar7 = *(float *)(param_3 + 8);
  uVar8 = *(undefined4 *)(param_3 + 0xc);
  puVar1[2] = *(byte *)(iVar5 + 0x2e) | 0x80000000;
  puVar1[3] = 0x804f0290;
  puVar1[4] = 0;
  puVar1[5] = uVar8;
  puVar1[6] = (fVar6 * fVar12) / fVar10;
  puVar1[7] = fVar6;
  *param_2 = (int)(puVar1 + 8);
  puVar1[8] = *(byte *)(iVar5 + 0x3e) | 0x80000000;
  puVar1[9] = 0x804f0290;
  puVar1[10] = 2.0 / fVar7;
  puVar1[0xb] = fVar12 / fVar10;
  puVar1[0xc] = fVar10 / fVar7;
  puVar1[0xd] = fVar12 / fVar7;
  *param_2 = (int)(puVar1 + 0xe);
  uVar2 = *(uint *)(param_3 + 0x10);
  uVar3 = *(uint *)(param_3 + 0x14);
  fVar12 = (float)VectorSignedToFloat(uVar2 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat((uVar2 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorSignedToFloat((uVar2 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(uVar2 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)VectorSignedToFloat(uVar3 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)VectorSignedToFloat((uVar3 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat((uVar3 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(uVar3 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
  puVar4 = (uint *)*param_2;
  *puVar4 = *(byte *)(iVar5 + 0x36) | 0x80000000;
  puVar4[1] = 0x804f0290;
  puVar4[2] = (uint)(fVar6 * 0.003921569);
  puVar4[3] = (uint)(fVar7 * 0.003921569);
  puVar4[4] = (uint)(fVar10 * 0.003921569);
  puVar4[5] = (uint)(fVar12 * 0.003921569);
  *param_2 = (int)(puVar4 + 6);
  puVar4[6] = *(byte *)(iVar5 + 0x46) | 0x80000000;
  puVar4[7] = 0x804f0290;
  puVar4[8] = (uint)(fVar11 * 0.003921569);
  puVar4[9] = (uint)(fVar9 * 0.003921569);
  puVar4[10] = (uint)(fVar13 * 0.003921569);
  puVar4[0xb] = (uint)(fVar14 * 0.003921569);
  *param_2 = (int)(puVar4 + 0xc);
  return;
}



undefined4
fn_006e0218(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int unaff_r7;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  uVar1 = (*(byte *)(param_5 + 2) & 0xf) >> 2;
  if (uVar1 == 1) {
    piVar6 = (int *)param_4[1];
  }
  else if (uVar1 == 2) {
    piVar6 = (int *)param_4[2];
  }
  else {
    piVar6 = (int *)*param_4;
  }
  bVar7 = *param_3 == *piVar6;
  if (bVar7) {
    unaff_r7 = (int)(short)param_3[1];
  }
  uVar4 = 0;
  bVar8 = unaff_r7 == (short)piVar6[8];
  bVar9 = bVar7 && bVar8;
  if (bVar7 && bVar8) {
    bVar9 = *(short *)((int)param_3 + 6) == *(short *)((int)piVar6 + 0x22);
  }
  if (!bVar9) {
    if (*param_3 == *piVar6) {
      if ((*(short *)((int)piVar6 + 0x22) == -1) == (*(short *)((int)param_3 + 6) == -1)) {
        piVar5 = piVar6 + 4;
      }
      else {
        piVar5 = piVar6 + 6;
      }
    }
    else {
      piVar5 = piVar6 + 2;
    }
    fn_0044ee24(param_2,*piVar5,piVar5[1] << 2);
    iVar3 = piVar6[8];
    uVar2 = *(undefined2 *)((int)piVar6 + 0x22);
    *param_3 = *piVar6;
    *(short *)(param_3 + 1) = (short)iVar3;
    uVar4 = 1;
    *(undefined2 *)((int)param_3 + 6) = uVar2;
  }
  return uVar4;
}



void fn_006e00a0(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      uVar1 = (uint)*(ushort *)(*param_3 + uVar3 * 2);
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
      if (uVar1 == 0xffff) goto switchD_006e00ec_caseD_0;
      puVar2 = (ushort *)(*param_2 + uVar1 * 0x158);
      switch(*(undefined2 *)(iVar5 + 4)) {
      default:
        goto switchD_006e00ec_caseD_0;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        *puVar2 = *puVar2 | 0x200;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        uVar1 = *(ushort *)(iVar5 + 4) - 1;
        if (uVar1 < 0xb) {
          uVar1 = uVar1 & 0xffff;
        }
        else {
          uVar1 = 0;
        }
        uVar6 = 0;
        do {
          if ((*(uint *)(puVar2 + 4) >> ((uVar6 & 0x3f) << 2) & 0xf) == uVar1) {
            *puVar2 = *puVar2 | 0x400;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 6);
        goto switchD_006e00ec_caseD_0;
      case 0xc:
      case 0xe:
      case 0x10:
        uVar4 = *puVar2 | 0x8000;
        break;
      case 0x12:
        uVar4 = *puVar2 | 0x800;
        break;
      case 0x13:
      case 0x14:
      case 0x15:
        uVar4 = *puVar2 | 0x1000;
        break;
      case 0x16:
      case 0x17:
      case 0x18:
        uVar4 = *puVar2 | 0x2000;
        break;
      case 0x19:
      case 0x1a:
      case 0x1b:
        *puVar2 = *puVar2 | 0x4000;
        goto switchD_006e00ec_caseD_0;
      }
      *puVar2 = uVar4;
switchD_006e00ec_caseD_0:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  return;
}


