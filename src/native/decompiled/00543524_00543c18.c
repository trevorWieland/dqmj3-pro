#include "00543524_00543c18.h"



void fn_00543c18(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00857788;
    puVar1[1] = param_2;
  }
  return;
}



void fn_00543bdc(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00857778;
    puVar1[1] = param_1;
  }
  return;
}



void fn_00543ba0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00857768;
    puVar1[1] = param_2;
  }
  return;
}



undefined4 * fn_0054389c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *param_1 = &DAT_00857734;
  puVar5 = (undefined4 *)param_1[0x4c];
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)puVar5[3];
    for (puVar3 = (undefined4 *)puVar5[2]; puVar3 != puVar7; puVar3 = puVar3 + 1) {
      piVar6 = (int *)*puVar3;
      piVar4 = (int *)piVar6[1];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
        (**(code **)(*piVar4 + 0xc))(piVar4,piVar6);
      }
    }
    puVar5[3] = puVar5[2];
    if ((int *)puVar5[1] != (int *)0x0 && puVar5[2] != 0) {
      (**(code **)(*(int *)puVar5[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,puVar5);
    param_1[0x4c] = 0;
    param_2 = extraout_r1;
  }
  *param_1 = &DAT_00857920;
  iVar8 = param_1[3];
  if (iVar8 != 0) {
    puVar5 = *(undefined4 **)(iVar8 + 0x18);
    puVar3 = *(undefined4 **)(iVar8 + 0x1c);
    while( true ) {
      if (puVar5 != puVar3) {
        param_4 = (undefined4 *)*puVar5;
      }
      if (puVar5 == puVar3 || param_4 == param_1) break;
      puVar5 = puVar5 + 1;
    }
    if (puVar5 != puVar3) {
      puVar7 = puVar5 + 1;
      if (puVar7 < puVar3) {
        iVar1 = (int)puVar3 - (int)puVar7;
        if (0 < iVar1) {
          puVar3 = puVar5;
          if (iVar1 * 0x20000000 < 0) {
            puVar2 = (undefined4 *)*puVar7;
            puVar7 = puVar5 + 2;
            if (puVar2 != param_1) {
              puVar3 = puVar5 + 1;
              *puVar5 = puVar2;
            }
          }
          puVar5 = puVar3;
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar3 = puVar5;
            if ((undefined4 *)*puVar7 != param_1) {
              puVar3 = puVar5 + 1;
              *puVar5 = (undefined4 *)*puVar7;
            }
            puVar2 = puVar7 + 1;
            puVar7 = puVar7 + 2;
            puVar5 = puVar3;
            if ((undefined4 *)*puVar2 != param_1) {
              puVar5 = puVar3 + 1;
              *puVar3 = (undefined4 *)*puVar2;
            }
          }
        }
      }
      else {
        while (puVar7 != puVar3) {
          puVar2 = (undefined4 *)*puVar7;
          puVar7 = puVar7 + 1;
          if (puVar2 != param_1) {
            *puVar5 = puVar2;
            puVar5 = puVar5 + 1;
          }
        }
      }
    }
    puVar3 = *(undefined4 **)(iVar8 + 0x1c);
    *(undefined4 **)(iVar8 + 0x1c) = puVar5;
    param_2 = 0;
    if (puVar3 != puVar5) {
      param_2 = 0;
      param_1[3] = 0;
    }
  }
  puVar5 = (undefined4 *)param_1[0xd];
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)puVar5[3];
    for (puVar3 = (undefined4 *)puVar5[2]; puVar3 != puVar7; puVar3 = puVar3 + 1) {
      piVar6 = (int *)*puVar3;
      piVar4 = (int *)piVar6[1];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
        (**(code **)(*piVar4 + 0xc))(piVar4,piVar6);
      }
    }
    puVar5[3] = puVar5[2];
    if ((int *)puVar5[1] != (int *)0x0 && puVar5[2] != 0) {
      (**(code **)(*(int *)puVar5[1] + 0xc))();
    }
    (**(code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,puVar5);
    param_1[0xd] = 0;
    param_2 = extraout_r1_00;
  }
  puVar5 = (undefined4 *)param_1[10];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xb) != '\0')) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
    param_2 = extraout_r1_01;
  }
  piVar4 = (int *)param_1[6];
  piVar6 = (int *)param_1[7];
  if (piVar4 < piVar6) {
    param_2 = 1;
    iVar8 = (int)piVar6 - (int)piVar4 >> 2;
    if (1 < iVar8 + 1) {
      do {
        iVar1 = *piVar4;
        param_2 = param_2 + 1;
        piVar4 = piVar4 + 1;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
      } while (param_2 < iVar8 + 1);
    }
  }
  else {
    while (piVar4 != piVar6) {
      param_2 = *piVar4;
      piVar4 = piVar4 + 1;
      if (param_2 != 0) {
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
    }
  }
  param_1[7] = param_1[6];
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    param_2 = param_1[6];
  }
  if (piVar4 != (int *)0x0 && param_2 != 0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  return param_1;
}



undefined4 * fn_00543524(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  *param_1 = &DAT_00857920;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 3;
  param_1[0xd] = 0;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar7 = param_4[3];
  param_1[3] = 0;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar7;
  if (param_3 != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_3 + 0x18) & 1;
  }
  *param_1 = &DAT_00857734;
  uVar1 = fn_00171688();
  fn_001781f0(param_1 + 0x13,uVar1);
  uVar2 = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x801;
  uVar1 = fn_00171688();
  fn_001781f0(param_1 + 0x2f,uVar1);
  param_1[0x3b] = uVar2;
  param_1[0x3c] = uVar2;
  param_1[0x3d] = uVar2;
  param_1[0x3e] = 0x801;
  uVar1 = fn_00171688();
  fn_001781f0(param_1 + 0x3f,uVar1);
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  param_1[0x4e] = *param_4;
  param_1[0x4f] = uVar1;
  param_1[0x50] = uVar2;
  param_1[0x51] = uVar3;
  if (param_3 == 0) {
    uVar1 = fn_00171688();
    fn_001781f0(param_1 + 0x23,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    param_1[0x1f] = *(undefined4 *)(param_3 + 0x30);
    param_1[0x20] = uVar1;
    param_1[0x21] = uVar2;
    fVar11 = *(float *)(param_3 + 0x3c) * 40.743664;
    fVar9 = *(float *)(param_3 + 0x40) * 40.743664;
    fVar18 = *(float *)(param_3 + 0x44) * 40.743664;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar12 = ABS(fVar9);
    fVar10 = ABS(fVar18);
    for (fVar13 = ABS(fVar11); 0x477fffff < (int)fVar13; fVar13 = fVar13 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
    }
    uVar14 = VectorFloatToUnsigned(fVar13,3);
    uVar15 = VectorFloatToUnsigned(fVar12,3);
    uVar4 = uVar14 & 0xff;
    uVar16 = VectorFloatToUnsigned(fVar10,3);
    fVar20 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar14 = uVar15 & 0xff;
    fVar21 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar15 = uVar16 & 0xff;
    fVar22 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)(&DAT_007d6f20)[uVar4 * 4] +
             (fVar13 - fVar20) * (float)(&DAT_007d6f28)[uVar4 * 4];
    fVar19 = (float)(&DAT_007d6f24)[uVar4 * 4] +
             (fVar13 - fVar20) * (float)(&DAT_007d6f2c)[uVar4 * 4];
    fVar20 = (float)(&DAT_007d6f24)[uVar14 * 4] +
             (fVar12 - fVar21) * (float)(&DAT_007d6f2c)[uVar14 * 4];
    fVar13 = (float)(&DAT_007d6f20)[uVar14 * 4] +
             (fVar12 - fVar21) * (float)(&DAT_007d6f28)[uVar14 * 4];
    if (fVar11 < 0.0) {
      fVar17 = -fVar17;
    }
    fVar11 = (float)(&DAT_007d6f20)[uVar15 * 4] +
             (fVar10 - fVar22) * (float)(&DAT_007d6f28)[uVar15 * 4];
    fVar12 = (float)(&DAT_007d6f24)[uVar15 * 4] +
             (fVar10 - fVar22) * (float)(&DAT_007d6f2c)[uVar15 * 4];
    if (fVar9 < 0.0) {
      fVar13 = -fVar13;
    }
    if (fVar18 < 0.0) {
      fVar11 = -fVar11;
    }
    param_1[0x13] = fVar12 * fVar20;
    param_1[0x17] = fVar11 * fVar20;
    param_1[0x1c] = fVar17 * fVar20;
    param_1[0x1d] = fVar19 * fVar20;
    param_1[0x14] = fVar17 * fVar12 * fVar13 - fVar19 * fVar11;
    param_1[0x19] = fVar19 * fVar11 * fVar13 - fVar17 * fVar12;
    param_1[0x15] = fVar17 * fVar11 + fVar19 * fVar12 * fVar13;
    param_1[0x18] = fVar19 * fVar12 + fVar17 * fVar11 * fVar13;
    param_1[0x1b] = -fVar13;
    param_1[0x16] = 0;
    param_1[0x1a] = 0;
    param_1[0x1e] = 0;
    uVar1 = *(undefined4 *)(param_3 + 0x4c);
    uVar2 = *(undefined4 *)(param_3 + 0x50);
    param_1[0x16] = *(undefined4 *)(param_3 + 0x48);
    param_1[0x1a] = uVar1;
    param_1[0x1e] = uVar2;
    param_1[0x22] = param_1[0x22] | 0x800;
    uVar1 = *(undefined4 *)(param_3 + 0x88);
    uVar2 = *(undefined4 *)(param_3 + 0x8c);
    uVar3 = *(undefined4 *)(param_3 + 0x90);
    uVar7 = *(undefined4 *)(param_3 + 0x94);
    uVar5 = *(undefined4 *)(param_3 + 0x98);
    uVar6 = *(undefined4 *)(param_3 + 0x9c);
    uVar8 = *(undefined4 *)(param_3 + 0xa0);
    param_1[0x23] = *(undefined4 *)(param_3 + 0x84);
    param_1[0x24] = uVar1;
    param_1[0x25] = uVar2;
    param_1[0x26] = uVar3;
    param_1[0x27] = uVar7;
    param_1[0x28] = uVar5;
    param_1[0x29] = uVar6;
    param_1[0x2a] = uVar8;
    uVar1 = *(undefined4 *)(param_3 + 0xa8);
    uVar2 = *(undefined4 *)(param_3 + 0xac);
    uVar3 = *(undefined4 *)(param_3 + 0xb0);
    param_1[0x2b] = *(undefined4 *)(param_3 + 0xa4);
    param_1[0x2c] = uVar1;
    param_1[0x2d] = uVar2;
    param_1[0x2e] = uVar3;
  }
  return param_1;
}


