#include "00234424_00234c60b.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


undefined4 * fn_00234c60(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081d0bc;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    fn_002feca8(*(undefined4 *)(iVar1 + 0x410));
    *(undefined4 *)(iVar1 + 0x410) = 0;
    fn_002feef8(iVar1);
    param_1[1] = 0;
  }
  return param_1;
}



undefined4 * fn_00234b60(undefined4 *param_1,short param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_0081d0bc;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x418,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_005260cc();
    puVar1[5] = 1;
    *puVar1 = 2;
    puVar1[1] = 1;
    *(short *)(puVar1 + 8) = param_2;
    *(undefined1 *)((int)puVar1 + 0x112) = 0;
    *(undefined1 *)((int)puVar1 + 0x113) = 0;
    *(undefined1 *)(puVar1 + 0x47) = 1;
    *(undefined1 *)(puVar1 + 0x45) = 1;
    *(undefined1 *)((int)puVar1 + 0x115) = 0;
    uVar2 = fn_005261a8(puVar1,0);
    puVar1[0x101] = uVar2;
    puVar1[0x102] = 0;
    puVar1[0x103] = 0;
    *(ushort *)(puVar1 + 0x105) = param_2 + 1U;
    uVar2 = fn_001287d4((uint)(ushort)(param_2 + 1U) << 1,&DAT_00812c8c);
    puVar1[0x104] = uVar2;
    fn_00158f6c(uVar2,(uint)*(ushort *)(puVar1 + 0x105) << 1);
  }
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      fn_002feca8(puVar3[0x104]);
      puVar3[0x104] = 0;
      fn_002feef8(puVar3);
    }
    param_1[1] = puVar1;
  }
  return param_1;
}



int fn_00234948(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint unaff_r7;
  int *piVar4;
  char local_50 [4];
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint uStack_3c;
  char *local_38;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined *local_28;
  undefined *local_24;
  
  local_50[0] = '\0';
  iVar1 = fn_00145b00(0x400,&DAT_00812c8c);
  if (iVar1 != 0) {
    fn_00301f50(iVar1,0x400);
  }
  *(int *)(*(int *)(param_1 + 4) + 0x40c) = iVar1;
  puVar2 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  local_38 = local_50;
  *(undefined4 **)(*(int *)(param_1 + 4) + 0x408) = puVar2;
  local_48 = *(int *)(param_1 + 4);
  local_4c = local_48 + 0x400;
  local_40 = *(undefined4 *)(local_48 + 0x410);
  uStack_44 = *(undefined4 *)(local_48 + 0x404);
  uStack_3c = unaff_r7 & 0xffff0000 | (uint)*(ushort *)(local_48 + 0x414);
  local_30 = 0x18;
  local_2c = &LAB_0074a124;
  local_28 = &DAT_0074a27c;
  local_24 = &DAT_0074a1d0;
  iVar1 = fn_0014e2f4(puVar2,&local_30,&DAT_001b4004,&local_4c,
                       *(int *)(*(int *)(param_1 + 4) + 0x40c) + 0x400,0x10,0xfffffffe,0);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  while (uVar3 = **(uint **)(*(int *)(param_1 + 4) + 0x408), uVar3 != 0) {
    svc_0x24();
    if ((int)uVar3 < 0) {
      fn_0015e294();
    }
    if ((uVar3 & 0x3ff) != 0x3fe) break;
    fn_0012d6a4(1000000000,0);
  }
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x408);
  svc_0x24();
  if (*piVar4 < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(piVar4 + 1) = 1;
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x408);
  fn_0015e304(piVar4);
  if (*piVar4 != 0) {
    svc_0x23();
    *piVar4 = 0;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 0x408);
  if (piVar4 != (int *)0x0) {
    fn_0015e304(piVar4);
    if (*piVar4 != 0) {
      svc_0x23();
      *piVar4 = 0;
    }
    fn_002feef8(piVar4);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x408) = 0;
  fn_002feef8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x40c));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40c) = 0;
  return (int)local_50[0];
}



void fn_0023487c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_0081d0a4;
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if ((uint)param_1[2] < uVar2) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != param_1[2]);
  }
  fn_001008c4(uVar2,(int)(param_1[3] - uVar2) / 0xc,0);
  fn_002feef8(param_1);
  return;
}



void fn_00234690(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  fVar7 = 0.0;
  uVar11 = CONCAT44(param_1[8],0x3f800000);
  if (*(char *)((int)param_1 + 0x2d) != '\0') {
    iVar2 = param_1[7];
    if (iVar2 == 0) {
      param_1[5] = 0x3f800000;
    }
    else if (param_1[0xd] < iVar2) {
      if (param_1[0xe] < iVar2) {
        fVar10 = (float)VectorSignedToFloat(param_1[0xf],(byte)(in_fpscr >> 0x16) & 3);
        fVar6 = (float)param_1[5] - (float)param_1[4] / fVar10;
        param_1[5] = (int)fVar6;
        fVar10 = fVar7;
        if (0.0 < fVar6) {
          fVar10 = fVar6;
        }
        param_1[5] = (int)fVar10;
      }
      else {
        param_1[5] = param_1[4];
      }
    }
    else {
      fVar10 = (float)VectorSignedToFloat(param_1[0xd],(byte)(in_fpscr >> 0x16) & 3);
      param_1[5] = (int)((float)param_1[5] + (float)param_1[4] / fVar10);
    }
  }
  fVar10 = (float)param_1[5];
  do {
    pfVar1 = (float *)(param_1[1] + param_1[6] * 0xc);
    fVar9 = *pfVar1 - (float)param_1[8];
    fVar6 = pfVar1[1] - (float)param_1[9];
    fVar8 = pfVar1[2] - (float)param_1[10];
    fVar12 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8);
    if (fVar10 < fVar12) {
      fVar12 = (float)uVar11 / SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8);
      param_1[8] = (int)((float)param_1[8] + fVar9 * fVar12 * fVar10);
      param_1[9] = (int)((float)param_1[9] + fVar6 * fVar12 * fVar10);
      param_1[10] = (int)((float)param_1[10] + fVar8 * fVar12 * fVar10);
      param_1[7] = param_1[7] + 1;
      fVar10 = fVar7;
    }
    else {
      piVar3 = (int *)(param_1[1] + param_1[6] * 0xc);
      iVar2 = *piVar3;
      iVar4 = piVar3[1];
      iVar5 = piVar3[2];
      param_1[6] = param_1[6] + 1;
      param_1[8] = iVar2;
      param_1[9] = iVar4;
      param_1[10] = iVar5;
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
      if (iVar2 != 0) break;
      fVar10 = fVar10 - fVar12;
    }
  } while (fVar7 < fVar10);
  if ((char)param_1[0xb] != '\0') {
    fVar7 = (float)param_1[8] - (float)((ulonglong)uVar11 >> 0x20);
    fn_00525bd0();
    fVar7 = fVar7 * 0.024543693;
    fn_00163890();
    param_1[0xc] = (int)fVar7;
  }
  return;
}


