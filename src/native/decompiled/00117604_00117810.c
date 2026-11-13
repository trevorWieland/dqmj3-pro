#include "00117604_00117810.h"



void fn_00117810(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_r1;
  int iVar6;
  
  piVar2 = (int *)(**(code **)(*param_2 + 4))(param_2);
  iVar6 = 0;
  (**(code **)(*param_2 + 4))(param_2);
  uVar3 = fn_0012a1c8();
  fn_00169f1c(*(int *)(param_1 + 0x1c) + param_3,*(undefined4 *)(param_1 + 0x18));
  uVar4 = *(ushort *)(piVar2 + 2) - 0x8056;
  if (uVar4 < 2) {
LAB_001178ac:
    iVar6 = (piVar2[1] - *(int *)(param_1 + 8)) * *piVar2 * 2;
  }
  else if (uVar4 == 2) {
    iVar6 = (piVar2[1] - *(int *)(param_1 + 8)) * *piVar2 * 4;
  }
  else if (*(ushort *)(piVar2 + 2) == 0x8d62) goto LAB_001178ac;
  fn_0012b994();
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 0x501;
      goto LAB_001178f0;
    }
    if (cVar1 == '\x02') {
      uVar5 = 0x502;
      goto LAB_001178f0;
    }
  }
  uVar5 = 0x500;
LAB_001178f0:
  fn_0012b2a4(piVar2[3] + iVar6,*piVar2,*(undefined4 *)(param_1 + 8),(short)piVar2[2],
               *(undefined4 *)(*(int *)(param_1 + 0x24) + extraout_r1 * 4),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x10),uVar5,*(undefined1 *)(param_1 + 0x16),uVar3);
  return;
}



void fn_001177a4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar2 = 0x401;
      goto code_r0x001177d8;
    }
    if (cVar1 == '\x04') {
      uVar2 = 0x410;
      goto code_r0x001177d8;
    }
  }
  uVar2 = 0x400;
code_r0x001177d8:
  fn_0012b274(uVar2);
  fn_0012b458(*(undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4));
  iVar3 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



undefined4 * fn_00117720(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *unaff_r5;
  
  puVar1 = (undefined4 *)fn_00142628();
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_00858ae8;
  puVar2 = (undefined1 *)fn_00145b00(1,&DAT_00812c8c);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    unaff_r5 = puVar2;
  }
  if (puVar2 == (undefined1 *)0x0) {
    unaff_r5 = (undefined1 *)0x0;
  }
  if ((undefined1 *)puVar1[7] != unaff_r5) {
    fn_002feef8();
    puVar1[7] = unaff_r5;
  }
  return puVar1;
}



undefined4 * fn_00117690(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00858ad8;
    puVar1[1] = 0;
    iVar2 = fn_00145b00(0x74,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = fn_00128270(iVar2,param_2);
    }
    iVar2 = puVar1[1];
    if (iVar2 != iVar3) {
      if (iVar2 != 0) {
        fn_0012807c(iVar2 + 8);
        iVar2 = fn_001280b0(iVar2 + 8);
        fn_002feef8(iVar2 + -8);
      }
      puVar1[1] = iVar3;
    }
  }
  return puVar1;
}



void fn_00117688(int param_1)

{
  fn_00128150(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_00117674(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_00128150(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 4),*(undefined4 *)(iVar1 + 0x5c),
               iVar1 + 0x44);
  return;
}



void fn_00117604(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  
  iVar2 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 4) + 4))();
  fn_001280e0(iVar2,param_3);
  *(undefined4 *)(iVar2 + 0x48) = in_s0;
  fn_00128104(iVar2);
  iVar7 = 0;
  fVar12 = 0.0;
  fVar17 = 1.0;
  uVar8 = 0;
  uVar9 = 0;
  if ((param_2 & 1) != 0) {
    fVar13 = *(float *)(iVar2 + 0x24);
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar13 < 0.0) {
      fVar13 = fVar12;
    }
    else if (0x3f800000 < (int)fVar13) {
      fVar13 = fVar17;
    }
    uVar14 = VectorFloatToUnsigned(fVar13 * 255.0 + 0.5,3);
    fVar13 = *(float *)(iVar2 + 0x28);
    uVar6 = uVar14 & 0xff;
    if (fVar13 < 0.0) {
      fVar13 = fVar12;
    }
    else if (0x3f800000 < (int)fVar13) {
      fVar13 = fVar17;
    }
    uVar15 = VectorFloatToUnsigned(fVar13 * 255.0 + 0.5,3);
    fVar13 = *(float *)(iVar2 + 0x2c);
    uVar15 = uVar15 & 0xff;
    if (fVar13 < 0.0) {
      fVar13 = fVar12;
    }
    else if (0x3f800000 < (int)fVar13) {
      fVar13 = fVar17;
    }
    cVar1 = *(char *)(iVar2 + 0x18);
    uVar16 = VectorFloatToUnsigned(fVar13 * 255.0 + 0.5,3);
    uVar3 = uVar16 & 0xff;
    if (cVar1 == '\0') {
      fVar13 = *(float *)(iVar2 + 0x30);
      if (0.0 <= fVar13) {
        if ((int)fVar13 < 0x3f800001) {
          fVar12 = fVar13;
        }
        else {
          fVar12 = fVar17;
        }
      }
      uVar8 = 0x20;
      iVar7 = *(int *)(iVar2 + 0x1c) * *(int *)(iVar2 + 0x20) * 4;
      uVar9 = VectorFloatToUnsigned(fVar12 * 255.0 + 0.5,3);
      uVar9 = uVar14 << 0x18 | uVar15 << 0x10 | uVar3 << 8 | uVar9 & 0xff;
    }
    else if (cVar1 == '\x02') {
      fVar13 = *(float *)(iVar2 + 0x30);
      if (0.0 <= fVar13) {
        if ((int)fVar13 < 0x3f800001) {
          fVar12 = fVar13;
        }
        else {
          fVar12 = fVar17;
        }
      }
      uVar8 = 0x10;
      iVar7 = *(int *)(iVar2 + 0x1c) * *(int *)(iVar2 + 0x20) * 2;
      uVar9 = VectorFloatToUnsigned(fVar12 * 255.0 + 0.5,3);
      uVar9 = (uVar6 >> 3) << 0xb | (uVar15 >> 3) << 6 | (uVar3 >> 3) << 1 |
              (uint)(0x7f < (uVar9 & 0xff));
    }
    else if (cVar1 == '\x03') {
      uVar8 = 0x10;
      uVar9 = (uVar6 >> 3) << 0xb | (uVar15 >> 2) << 5 | uVar3 >> 3;
      iVar7 = *(int *)(iVar2 + 0x1c) * *(int *)(iVar2 + 0x20) * 2;
    }
    else if (cVar1 == '\x04') {
      fVar13 = *(float *)(iVar2 + 0x30);
      if (fVar13 < 0.0) {
      }
      else {
        fVar12 = fVar13;
        if (0x3f800000 < (int)fVar13) {
          fVar12 = fVar17;
        }
      }
      uVar8 = 0x10;
      iVar7 = *(int *)(iVar2 + 0x1c) * *(int *)(iVar2 + 0x20) * 2;
      uVar9 = VectorFloatToUnsigned(fVar12 * 255.0 + 0.5,3);
      uVar9 = (uVar6 >> 4) << 0xc | (uVar15 >> 4) << 8 | uVar16 & 0xf0 | (uVar9 & 0xff) >> 4;
    }
  }
  iVar10 = 0;
  uVar11 = 0;
  uVar6 = 0;
  if ((param_2 & 6) != 0) {
    cVar1 = *(char *)(iVar2 + 0x3c);
    uVar6 = VectorFloatToUnsigned(*(undefined4 *)(iVar2 + 0x48),3);
    uVar14 = 0;
    if (uVar6 < 2) {
      fVar17 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    }
    uVar6 = VectorFloatToUnsigned(fVar17,3);
    if (cVar1 == '\x03') {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      iVar10 = *(int *)(iVar2 + 0x40) * *(int *)(iVar2 + 0x44) * 4;
      if ((0.0 < fVar12) && ((uint)ABS(fVar12) >> 0x17 != 0xff)) {
        if ((int)(fVar12 * 16777216.0) < 0x4b800000) {
          uVar14 = VectorFloatToUnsigned(fVar12 * 16777216.0,3);
        }
        else {
          uVar14 = 0xffffff;
        }
      }
      uVar11 = 0x20;
      uVar6 = uVar14 | (uint)*(byte *)(iVar2 + 0x4c) << 0x18;
    }
    else if (cVar1 == '\0') {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      iVar10 = *(int *)(iVar2 + 0x40) * *(int *)(iVar2 + 0x44) * 2;
      if ((0.0 < fVar12) && ((uint)ABS(fVar12) >> 0x17 != 0xff)) {
        if ((int)(fVar12 * 65536.0) < 0x47800000) {
          uVar14 = VectorFloatToUnsigned(fVar12 * 65536.0,3);
        }
        else {
          uVar14 = 0xffff;
        }
      }
      uVar11 = 0x10;
      uVar6 = uVar14;
    }
    else if (cVar1 == '\x02') {
      fVar12 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      iVar10 = *(int *)(iVar2 + 0x40) * *(int *)(iVar2 + 0x44) * 3;
      if ((0.0 < fVar12) && ((uint)ABS(fVar12) >> 0x17 != 0xff)) {
        if ((int)(fVar12 * 16777216.0) < 0x4b800000) {
          uVar14 = VectorFloatToUnsigned(fVar12 * 16777216.0,3);
        }
        else {
          uVar14 = 0xffffff;
        }
      }
      uVar11 = 0x18;
      uVar6 = uVar14;
    }
  }
  if ((param_2 & 3) != 0) {
    fn_001467fc();
    uVar4 = 0;
    if ((param_2 & 6) != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x38);
    }
    uVar5 = 0;
    if ((param_2 & 1) != 0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x14);
    }
    fn_00157bb0(uVar5,iVar7,uVar9,uVar8,uVar4,iVar10,uVar6,uVar11);
  }
  return;
}


