#include "005ee114_005ee778ab.h"



void fn_005ee43c(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 unaff_r4;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int in_r12;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 != 0) {
      in_r12 = *(int *)(iVar6 + 0xc);
    }
    if (iVar6 != 0 && in_r12 != 0) {
      piVar1 = *(int **)(in_r12 + 0x18);
      piVar7 = *(int **)(in_r12 + 0x1c);
      while( true ) {
        if (piVar1 != piVar7) {
          param_2 = *piVar1;
        }
        if (piVar1 == piVar7 || param_2 == iVar6) break;
        piVar1 = piVar1 + 1;
      }
      if (piVar1 != piVar7) {
        piVar3 = piVar1 + 1;
        if (piVar3 < piVar7) {
          iVar9 = (int)piVar7 - (int)piVar3;
          if (0 < iVar9) {
            piVar7 = piVar1;
            if (iVar9 * 0x20000000 < 0) {
              iVar10 = *piVar3;
              piVar3 = piVar1 + 2;
              if (iVar10 != iVar6) {
                piVar7 = piVar1 + 1;
                *piVar1 = iVar10;
              }
            }
            piVar1 = piVar7;
            for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
              piVar7 = piVar1;
              if (*piVar3 != iVar6) {
                piVar7 = piVar1 + 1;
                *piVar1 = *piVar3;
              }
              piVar4 = piVar3 + 1;
              piVar3 = piVar3 + 2;
              piVar1 = piVar7;
              if (*piVar4 != iVar6) {
                piVar1 = piVar7 + 1;
                *piVar7 = *piVar4;
              }
            }
          }
        }
        else {
          while (piVar3 != piVar7) {
            iVar9 = *piVar3;
            piVar3 = piVar3 + 1;
            if (iVar9 != iVar6) {
              *piVar1 = iVar9;
              piVar1 = piVar1 + 1;
            }
          }
        }
      }
      piVar7 = *(int **)(in_r12 + 0x1c);
      *(int **)(in_r12 + 0x1c) = piVar1;
      if (piVar7 != piVar1) {
        *(undefined4 *)(iVar6 + 0xc) = 0;
      }
      fn_00162d44(*(undefined4 *)(param_1 + 8));
    }
    iVar9 = 0;
    iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
    if (0 < iVar6) {
      do {
        puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x20) + iVar9 * 4);
        if (puVar11 != (undefined4 *)0x0) {
          piVar7 = (int *)puVar11[7];
          for (piVar1 = (int *)puVar11[6]; piVar1 != piVar7; piVar1 = piVar1 + 1) {
            if (*piVar1 != 0) {
              *(undefined4 *)(*piVar1 + 0xc) = 0;
              fn_005472e0(*piVar1);
              *piVar1 = 0;
            }
          }
          (**(code **)*puVar11)(puVar11);
          (**(code **)(*(int *)puVar11[1] + 0xc))((int *)puVar11[1],puVar11);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar5 = *(uint *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar6 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = uVar8;
  if (uVar5 < uVar8) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar5);
  }
  fn_001008c4(uVar8,(int)(iVar6 - uVar8) >> 2,0);
  for (piVar1 = *(int **)(param_1 + 0x14); *(int **)(param_1 + 0x18) != piVar1; piVar1 = piVar1 + 1)
  {
    fn_005f08dc(*(undefined4 *)(param_1 + 4),*piVar1);
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))();
    }
    *piVar1 = 0;
  }
  uVar8 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar5 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar6 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar2 = uVar8;
  if (uVar5 < uVar8) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uVar5);
  }
  fn_002feef8(uVar8,(int)(iVar6 - uVar8) >> 2,0,uVar8,unaff_r4,in_lr);
  return;
}



void fn_005ee1e8(int param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  *(float *)(param_1 + 0x48) = param_2[2];
  *(float *)(param_1 + 0x40) = fVar4;
  *(float *)(param_1 + 0x44) = fVar5;
  iVar3 = *(int *)(param_1 + 0x38);
  fVar4 = fVar4 * 40.743664;
  fVar5 = fVar5 * 40.743664;
  fVar10 = *(float *)(param_1 + 0x48) * 40.743664;
  uVar17 = *(undefined4 *)(iVar3 + 0x58);
  uVar18 = *(undefined4 *)(iVar3 + 0x68);
  uVar19 = *(undefined4 *)(iVar3 + 0x78);
  uVar1 = in_fpscr & 0xfffffff;
  fVar8 = ABS(fVar5);
  fVar7 = ABS(fVar10);
  for (fVar9 = ABS(fVar4); 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar11 = VectorFloatToUnsigned(fVar9,3);
  uVar12 = VectorFloatToUnsigned(fVar8,3);
  uVar13 = VectorFloatToUnsigned(fVar7,3);
  uVar6 = uVar12 & 0xff;
  uVar2 = uVar11 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar20 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar11 = uVar13 & 0xff;
  fVar21 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar9 - fVar16) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar15 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar9 - fVar16) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar16 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar8 - fVar20) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  fVar9 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar8 - fVar20) * (float)(&DAT_007d6f28)[uVar6 * 4];
  if (fVar4 < 0.0) {
    fVar14 = -fVar14;
  }
  fVar8 = (float)(&DAT_007d6f20)[uVar11 * 4] + (fVar7 - fVar21) * (float)(&DAT_007d6f28)[uVar11 * 4]
  ;
  fVar7 = (float)(&DAT_007d6f24)[uVar11 * 4] + (fVar7 - fVar21) * (float)(&DAT_007d6f2c)[uVar11 * 4]
  ;
  if (fVar5 < 0.0) {
    fVar9 = -fVar9;
  }
  if (fVar10 < 0.0) {
    fVar8 = -fVar8;
  }
  *(float *)(iVar3 + 0x4c) = fVar7 * fVar16;
  *(float *)(iVar3 + 0x5c) = fVar8 * fVar16;
  *(float *)(iVar3 + 0x70) = fVar14 * fVar16;
  *(float *)(iVar3 + 0x74) = fVar15 * fVar16;
  *(float *)(iVar3 + 0x50) = fVar14 * fVar7 * fVar9 - fVar15 * fVar8;
  *(float *)(iVar3 + 100) = fVar15 * fVar8 * fVar9 - fVar14 * fVar7;
  *(float *)(iVar3 + 0x54) = fVar14 * fVar8 + fVar15 * fVar7 * fVar9;
  *(float *)(iVar3 + 0x60) = fVar15 * fVar7 + fVar14 * fVar8 * fVar9;
  *(float *)(iVar3 + 0x6c) = -fVar9;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x58) = uVar17;
  *(undefined4 *)(iVar3 + 0x68) = uVar18;
  *(undefined4 *)(iVar3 + 0x78) = uVar19;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  return;
}


