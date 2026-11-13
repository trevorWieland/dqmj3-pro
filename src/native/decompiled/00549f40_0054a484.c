#include "00549f40_0054a484.h"



int fn_0054a484(int param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  uint in_r12;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar3 = (int)param_2 < 0;
  bVar4 = param_2 == 0;
  if (!bVar3) {
    in_r12 = *(uint *)(param_1 + 0xc);
    bVar4 = in_r12 == param_2;
  }
  bVar5 = in_r12 < param_2;
  if (bVar4 || (bVar3 || (int)in_r12 < (int)param_2)) {
    return 0;
  }
  if ((bVar3 || !bVar5) && !bVar4) {
    unaff_r4 = *(int *)(param_1 + 0x10);
  }
  if (!bVar3 && bVar5 || bVar4) {
    param_4 = *(int *)(param_1 + 0x10);
  }
  if ((bVar3 || !bVar5) && !bVar4) {
    param_4 = unaff_r4 + param_2 * 0x10;
  }
  uVar2 = *(uint *)(param_4 + 8);
  if (param_3 != (uint *)0x0) {
    if (param_2 < in_r12) {
      iVar1 = *(int *)(param_1 + 0x10) + param_2 * 0x10;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
    }
    if (*(uint *)(iVar1 + 0xc) < uVar2) {
      return 0;
    }
    param_3[1] = *(uint *)(iVar1 + 0xc) - uVar2;
    *param_3 = uVar2;
  }
  return *(int *)(param_1 + 0x14) + uVar2;
}



undefined4 fn_0054a338(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int unaff_r7;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  iVar12 = *(int *)(param_2 + param_3 + -4);
  iVar8 = param_2 + (iVar12 + 3U & 0xfffffffc);
  fn_001718c4(iVar8,0x4d494c46,0x7020100,1);
  piVar9 = (int *)0x0;
  piVar5 = (int *)0x0;
  bVar13 = *(short *)(iVar8 + 0x10) != 0;
  if (bVar13) {
    unaff_r7 = -0x67616d69;
  }
  iVar6 = 0;
  if (bVar13) {
    do {
      piVar5 = (int *)fn_0052dbd8(iVar8,piVar5);
      iVar6 = iVar6 + 1;
      if (*piVar5 + unaff_r7 == 0) {
        piVar9 = piVar5;
      }
    } while (iVar6 < (int)(uint)*(ushort *)(iVar8 + 0x10));
    if (piVar9 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar9 + 0xe);
      uVar10 = (uint)*(ushort *)(piVar9 + 2);
      uVar3 = piVar9[2];
      uVar11 = (uint)*(ushort *)((int)piVar9 + 10);
      uVar7 = *(uint *)(&DAT_007ea958 + (uint)bVar1 * 0x14) & 0xffff;
      do {
        bVar13 = uVar7 == 0;
        bVar14 = uVar10 != uVar7;
        bVar15 = uVar7 <= uVar10;
        if (!bVar13 && uVar7 < uVar10) {
          uVar7 = (uVar7 & 0x7fff) << 1;
        }
      } while ((bVar13 || bVar15) && (!bVar13 && bVar14));
      uVar10 = *(uint *)(&DAT_007ea958 + (uint)bVar1 * 0x14) & 0xffff;
      do {
        bVar13 = uVar10 == 0;
        bVar14 = uVar11 != uVar10;
        bVar15 = uVar10 <= uVar11;
        if (!bVar13 && uVar10 < uVar11) {
          uVar10 = (uVar10 & 0x7fff) << 1;
        }
      } while ((bVar13 || bVar15) && (!bVar13 && bVar14));
      fn_0015fa54(param_2,iVar12);
      uVar4 = fn_0015fa88(param_2);
      bVar2 = *(byte *)((int)piVar9 + 0xf);
      param_1[4] = uVar4;
      *param_1 = 0;
      param_1[1] = uVar3;
      param_1[3] = uVar7 | uVar10 << 0x10;
      *(byte *)(param_1 + 2) = bVar1;
      *(char *)((int)param_1 + 9) = (char)((bVar2 & 0xf) >> 2);
      return 1;
    }
  }
  return 0;
}



void fn_0054a2d4(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  *param_1 = param_2 + 0x1c;
  param_1[1] = *(int *)(param_2 + 8) + param_2;
  uVar1 = *(ushort *)(param_2 + 0x10);
  *(ushort *)(param_1 + 2) = uVar1;
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(param_2 + 0x12);
  param_1[3] = *(int *)(param_2 + 0xc) + param_2;
  param_1[4] = *(int *)(param_2 + 0xc) + (uint)uVar1 * 0x18 + param_2;
  param_1[5] = *(int *)(param_2 + 0x14) + param_2;
  param_1[6] = param_2 + *(int *)(param_2 + 0x18);
  param_1[7] = param_3;
  return;
}



void fn_00549f9c(int param_1,float *param_2,uint param_3,undefined2 param_4)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  
  switch(param_4) {
  default:
    puVar1 = (uint *)0x0;
    break;
  case 1:
    puVar1 = (uint *)(param_1 + 0x24);
    break;
  case 2:
    puVar1 = (uint *)(param_1 + 0x28);
    break;
  case 3:
    puVar1 = (uint *)(param_1 + 0x2c);
    break;
  case 4:
    puVar1 = (uint *)(param_1 + 0x30);
    break;
  case 5:
    puVar1 = (uint *)(param_1 + 0x34);
    break;
  case 6:
    puVar1 = (uint *)(param_1 + 0x38);
    break;
  case 7:
    puVar1 = (uint *)(param_1 + 0x3c);
    break;
  case 8:
    puVar1 = (uint *)(param_1 + 0x40);
    break;
  case 9:
    puVar1 = (uint *)(param_1 + 0x44);
    break;
  case 10:
    puVar1 = (uint *)(param_1 + 0x48);
    break;
  case 0xb:
    puVar1 = (uint *)(param_1 + 0x4c);
    break;
  case 0xc:
    puVar1 = (uint *)(param_1 + 0x134);
    break;
  case 0xe:
    puVar1 = (uint *)(param_1 + 0x138);
    break;
  case 0x10:
    puVar1 = (uint *)(param_1 + 0x13c);
    break;
  case 0x12:
    puVar1 = (uint *)(param_1 + 0x54);
  }
  uVar2 = *puVar1;
  if ((param_3 & 0x10000) != 0) {
    fVar3 = *param_2;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    else if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
    uVar2 = uVar2 & 0xffffff00 | uVar4 & 0xff;
  }
  if ((param_3 & 0x20000) != 0) {
    fVar3 = param_2[1];
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    else if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
    uVar2 = uVar2 & 0xffff00ff | (uVar4 & 0xff) << 8;
  }
  if ((param_3 & 0x40000) != 0) {
    fVar3 = param_2[2];
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    else if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    uVar4 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
    uVar2 = uVar2 & 0xff00ffff | (uVar4 & 0xff) << 0x10;
  }
  if ((param_3 & 0x80000) != 0) {
    fVar3 = param_2[3];
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    else if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    iVar5 = VectorFloatToUnsigned(fVar3 * 255.0 + 0.5,3);
    uVar2 = uVar2 & 0xffffff | iVar5 << 0x18;
  }
  switch(param_4) {
  default:
    return;
  case 1:
    *(uint *)(param_1 + 0x24) = uVar2;
    return;
  case 2:
    *(uint *)(param_1 + 0x28) = uVar2;
    return;
  case 3:
    *(uint *)(param_1 + 0x2c) = uVar2;
    return;
  case 4:
    *(uint *)(param_1 + 0x30) = uVar2;
    return;
  case 5:
    *(uint *)(param_1 + 0x34) = uVar2;
    return;
  case 6:
    *(uint *)(param_1 + 0x38) = uVar2;
    return;
  case 7:
    *(uint *)(param_1 + 0x3c) = uVar2;
    return;
  case 8:
    *(uint *)(param_1 + 0x40) = uVar2;
    return;
  case 9:
    *(uint *)(param_1 + 0x44) = uVar2;
    return;
  case 10:
    *(uint *)(param_1 + 0x48) = uVar2;
    return;
  case 0xb:
    *(uint *)(param_1 + 0x4c) = uVar2;
    return;
  case 0xc:
    break;
  case 0xe:
    param_1 = param_1 + 4;
    break;
  case 0x10:
    param_1 = param_1 + 8;
    break;
  case 0x12:
    *(uint *)(param_1 + 0x54) = uVar2;
    return;
  }
  *(uint *)(param_1 + 0x134) = uVar2;
  return;
}



void fn_00549f40(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if ((*param_2 & 1) == 0) {
    return;
  }
  iVar2 = param_3 + *(int *)(param_3 + 0x48) * 0x20;
  piVar3 = (int *)(iVar2 + 8);
  if (*(short *)(*piVar3 + (uint)param_2[0x10] * 4 + 2) != 0) {
    puVar1 = (ushort *)(*piVar3 + (uint)param_2[0x10] * 4);
    bVar4 = *(char *)(param_3 + 0x4c) == '\0';
    if (bVar4) {
      piVar3 = *(int **)(iVar2 + 0x10);
    }
    if (!bVar4) {
      piVar3 = (int *)piVar3[3];
    }
    fn_0044ee24(param_1,(uint)*puVar1 + (int)piVar3,puVar1[1]);
  }
  return;
}


