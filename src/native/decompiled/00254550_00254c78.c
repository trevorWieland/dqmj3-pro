#include "00254550_00254c78.h"



/* WARNING: Removing unreachable block (ram,0x00254df8) */
/* WARNING: Removing unreachable block (ram,0x00254e20) */
/* WARNING: Removing unreachable block (ram,0x00254d4c) */

bool fn_00254c78(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  
  uVar1 = fn_00174864(DAT_008977e4);
  local_68 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20);
  fVar13 = 40.743664;
  local_70 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18);
  fStack_6c = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 8) * 40.743664;
  fn_00525abc();
  fVar13 = (fVar4 * DAT_008909a4 - DAT_008909a4 * 0.5) * fVar13;
  in_fpscr = in_fpscr & 0xfffffff;
  for (fVar4 = ABS(fVar13); 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar5 = VectorFloatToUnsigned(0,3);
  uVar6 = VectorFloatToUnsigned(fVar4,3);
  uVar7 = VectorFloatToUnsigned(0,3);
  uVar2 = uVar5 & 0xff;
  uVar3 = uVar7 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = uVar6 & 0xff;
  fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)(&DAT_007d6f20)[uVar2 * 4] + (0.0 - fVar12) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar2 * 4] + (0.0 - fVar12) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar12 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f28)[uVar5 * 4];
  local_38 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar4 - fVar11) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar11 = (float)(&DAT_007d6f24)[uVar3 * 4] + (0.0 - fVar8) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  fVar4 = (float)(&DAT_007d6f20)[uVar3 * 4] + (0.0 - fVar8) * (float)(&DAT_007d6f28)[uVar3 * 4];
  if (fVar13 < 0.0) {
    fVar12 = -fVar12;
  }
  local_60 = fVar11 * local_38;
  local_40 = -fVar12;
  local_50 = fVar4 * local_38;
  local_3c = fVar9 * local_38;
  local_38 = fVar10 * local_38;
  local_5c = fVar9 * fVar11 * fVar12 - fVar10 * fVar4;
  local_48 = fVar10 * fVar4 * fVar12 - fVar9 * fVar11;
  local_58 = fVar9 * fVar4 + fVar10 * fVar11 * fVar12;
  local_4c = fVar10 * fVar11 + fVar9 * fVar4 * fVar12;
  local_54 = 0;
  local_44 = 0;
  local_34 = 0;
  fn_0016947c(&local_70,&local_60);
  local_30 = *(float *)(param_1 + 0x18) + local_70;
  local_2c = *(float *)(param_1 + 0x1c) + fStack_6c;
  fStack_28 = *(float *)(param_1 + 0x20) + local_68;
  fn_00204158(uVar1,&local_30);
  fVar4 = *(float *)(param_1 + 8) + 0.01;
  *(float *)(param_1 + 8) = fVar4;
  if (0x3fc90fdb < (int)fVar4) {
    *(undefined4 *)(param_1 + 8) = 0x3fc90fdb;
  }
  return 0x3fc90fdb < (int)fVar4;
}



undefined4 * fn_00254808(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint local_30;
  uint local_2c [2];
  
  puVar12 = param_1 + 4;
  *param_1 = &DAT_0081d778;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_30 = 10;
  if ((uint)((int)(param_1[6] - param_1[4]) >> 2) < 10) {
    uVar13 = (int)(param_1[5] - param_1[4]) >> 2;
    local_2c[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_2c[0] < uVar13 + 0x20) {
      local_2c[0] = uVar13 + 0x20;
    }
    puVar1 = local_2c;
    if (local_2c[0] < 0xb) {
      puVar1 = &local_30;
    }
    uVar13 = *puVar1;
    puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar11 = (undefined4 *)param_1[5];
    puVar9 = puVar2;
    for (puVar6 = (undefined4 *)*puVar12; puVar6 != puVar11; puVar6 = puVar6 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar6;
      }
      puVar9 = puVar9 + 1;
    }
    uVar7 = *puVar12;
    uVar8 = uVar7;
    if ((uint)param_1[5] < uVar7) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != param_1[5]);
    }
    fn_001008c4(uVar7,(int)(param_1[6] - uVar7) >> 2,0);
    uVar8 = *puVar12;
    param_1[4] = puVar2;
    param_1[5] = (param_1[5] - uVar8 & 0xfffffffc) + (int)puVar2;
    param_1[6] = puVar2 + uVar13;
  }
  local_30 = 0x20;
  puVar12 = param_1 + 1;
  if ((uint)((int)(param_1[3] - param_1[1]) >> 2) < 0x20) {
    uVar13 = (int)(param_1[2] - param_1[1]) >> 2;
    local_2c[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_2c[0] < uVar13 + 0x20) {
      local_2c[0] = uVar13 + 0x20;
    }
    puVar1 = local_2c;
    if (local_2c[0] < 0x21) {
      puVar1 = &local_30;
    }
    uVar13 = *puVar1;
    puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar11 = (undefined4 *)param_1[2];
    puVar9 = puVar2;
    for (puVar6 = (undefined4 *)*puVar12; puVar6 != puVar11; puVar6 = puVar6 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar6;
      }
      puVar9 = puVar9 + 1;
    }
    uVar7 = *puVar12;
    uVar8 = uVar7;
    if ((uint)param_1[2] < uVar7) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != param_1[2]);
    }
    fn_001008c4(uVar7,(int)(param_1[3] - uVar7) >> 2,0);
    uVar8 = *puVar12;
    param_1[1] = puVar2;
    param_1[2] = (param_1[2] - uVar8 & 0xfffffffc) + (int)puVar2;
    param_1[3] = puVar2 + uVar13;
  }
  uVar13 = 0;
  do {
    uVar3 = fn_001639b8((&DAT_008902c0)[uVar13]);
    puVar6 = (undefined4 *)param_1[2];
    puVar12 = param_1 + 1;
    if (puVar6 == (undefined4 *)param_1[3]) {
      uVar8 = (int)((int)puVar6 - *puVar12) >> 2;
      if (uVar8 < (uint)((int)((int)param_1[3] - *puVar12) >> 2)) {
        param_1[2] = puVar6 + 1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = puVar6[-1];
        }
        puVar9 = puVar6 + -1;
        puVar2 = puVar6;
        if (puVar6 < puVar9) {
          iVar4 = (int)puVar9 - (int)puVar6;
          if (0 < iVar4) {
            if (iVar4 * 0x20000000 < 0) {
              puVar9 = puVar6 + -2;
              puVar2 = puVar6 + -1;
              *puVar2 = *puVar9;
            }
            for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2[-1] = puVar9[-1];
              puVar9 = puVar9 + -2;
              puVar2 = puVar2 + -2;
              *puVar2 = *puVar9;
            }
          }
        }
        else {
          while (puVar6 != puVar9) {
            puVar9 = puVar9 + -1;
            puVar2[-1] = *puVar9;
            puVar2 = puVar2 + -1;
          }
        }
        *puVar6 = uVar3;
      }
      else {
        uVar7 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (uVar7 < uVar8 + 0x20) {
          uVar7 = uVar8 + 0x20;
        }
        puVar11 = (undefined4 *)fn_00100fc6(uVar7 << 2,0);
        puVar2 = puVar11;
        for (puVar9 = (undefined4 *)*puVar12; puVar9 != puVar6; puVar9 = puVar9 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar9;
          }
          puVar2 = puVar2 + 1;
        }
        puVar9 = (undefined4 *)(((int)puVar6 - *puVar12 & 0xfffffffc) + (int)puVar11);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uVar3;
        }
        puVar2 = (undefined4 *)param_1[2];
        puVar9 = (undefined4 *)(((int)puVar6 - *puVar12 & 0xfffffffc) + (int)puVar11);
        for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
          puVar9 = puVar9 + 1;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar6;
          }
        }
        uVar5 = *puVar12;
        uVar10 = param_1[2];
        uVar8 = uVar5;
        if (uVar10 < uVar5) {
          do {
            uVar8 = uVar8 + 4;
          } while (uVar8 != uVar10);
        }
        fn_001008c4(uVar5,(int)(param_1[3] - uVar5) >> 2,0);
        param_1[3] = puVar11 + uVar7;
        param_1[2] = puVar11 + ((int)(uVar10 - uVar5) >> 2) + 1;
        *puVar12 = (uint)puVar11;
      }
    }
    else {
      param_1[2] = puVar6 + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = uVar3;
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x20);
  return param_1;
}



undefined4 fn_0025472c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_14;
  
  iVar3 = param_1;
  local_14 = param_2;
  iVar1 = fn_006a7b6c(DAT_008977e4);
  if (iVar1 != 1) {
    piVar2 = *(int **)(param_1 + 4);
    while( true ) {
      if (*(int **)(param_1 + 8) == piVar2) {
        return 0x21;
      }
      if (*piVar2 == param_2) break;
      piVar2 = piVar2 + 1;
    }
  }
  piVar2 = *(int **)(param_1 + 0x10);
  while( true ) {
    if (*(int **)(param_1 + 0x14) == piVar2) {
      piVar2 = *(int **)(param_1 + 0x14);
      if (piVar2 == *(int **)(param_1 + 0x18)) {
        fn_0079df24(param_1 + 0x10,piVar2,&local_14,*(int **)(param_1 + 0x18),iVar3);
      }
      else {
        *(int **)(param_1 + 0x14) = piVar2 + 1;
        if (piVar2 != (int *)0x0) {
          *piVar2 = local_14;
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (*piVar2 == local_14) break;
    piVar2 = piVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002546e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  return;
}



void fn_002545a4(undefined4 *param_1)

{
  *param_1 = &DAT_0081d768;
  fn_0012154c(param_1);
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  fn_00100414(param_1 + 7,fn_0078bba4,0xc);
  fn_00241ddc(param_1);
  fn_002feef8();
  return;
}



int fn_00254550(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_001129d0(param_1,0x2c);
  *puVar1 = &DAT_0081d768;
  iVar2 = fn_00101a1c(puVar1 + 7,&LAB_001ad784,0xc);
  iVar3 = fn_00145b00(4,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00120ca8();
  }
  *(undefined4 *)(iVar2 + 0x90) = uVar4;
  return iVar2 + -0x1c;
}


