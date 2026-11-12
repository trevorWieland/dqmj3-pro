#include "003b5a28_003b6608.h"



void fn_003b6608(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 8) < 0) {
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    if ((iVar1 < *(int *)(param_1 + 0x20)) ||
       (*(undefined1 *)(param_1 + 0x2c) = 1, *(char *)(param_1 + 0x24) == '\0')) {
      fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
      fVar3 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x28) =
           *(float *)(param_1 + 0x14) +
           (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * (fVar2 / fVar3) *
           (fVar2 / fVar3);
      *(int *)(param_1 + 0x1c) = iVar1 + 1;
    }
    fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
    if (*(char *)(param_1 + 0x2c) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))
                (*(int **)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
  }
  return;
}



void fn_003b64c8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082eaa8;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  DAT_008913e4 = 0;
  uVar1 = param_1[0x19];
  uVar2 = uVar1;
  if ((uint)param_1[0x1a] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1a]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1b] - uVar1) >> 2,0);
  uVar1 = param_1[0x16];
  uVar2 = uVar1;
  if ((uint)param_1[0x17] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x17]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x18] - uVar1) >> 2,0);
  fn_00226f48(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003b6360(undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined4 *)fn_002fdf94(param_1,param_2,0x13);
  *puVar3 = &DAT_0082eaa8;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  *(undefined1 *)(puVar3 + 0x1f) = 0;
  uVar5 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x20] = DAT_008f9e2c;
  puVar3[0x21] = uVar1;
  puVar3[0x22] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x23] = DAT_008f9e2c;
  puVar3[0x24] = uVar1;
  puVar3[0x25] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar1 = DAT_008f9e34;
  uVar5 = DAT_008f9e30;
  puVar3[0x26] = DAT_008f9e2c;
  puVar3[0x27] = uVar5;
  puVar3[0x28] = uVar1;
  DAT_008913e4 = puVar3;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  if (param_3 != (short *)0x0) {
    puVar3[0x1c] = (int)*param_3;
    puVar3[0x1d] = (int)param_3[1];
    puVar3[0x1e] = (int)param_3[2];
  }
  return puVar3;
}



undefined4 fn_003b5f9c(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x18) = 900;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}



undefined4 fn_003b5f3c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    if (param_2 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x84);
      uVar2 = *(undefined4 *)(param_1 + 0x88);
      *param_2 = *(undefined4 *)(param_1 + 0x80);
      param_2[1] = uVar1;
      param_2[2] = uVar2;
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x90);
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      *param_3 = *(undefined4 *)(param_1 + 0x8c);
      param_3[1] = uVar1;
      param_3[2] = uVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x42f00000;
    }
    if (*(char *)(param_1 + 0x7c) != '\0') {
      return 1;
    }
  }
  return 0;
}



int fn_003b5ee4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  if (puVar1 == *(undefined4 **)(param_1 + 0x6c)) {
    local_c = param_2;
    fn_0079ce44(param_1 + 100,puVar1,&local_c,*(undefined4 **)(param_1 + 0x6c),param_1);
  }
  else {
    *(undefined4 **)(param_1 + 0x68) = puVar1 + 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_2;
    }
  }
  return *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 2;
}



undefined4 fn_003b5e30(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 != (float *)0x0) {
    fVar1 = *(float *)(param_1 + 0x8c);
    fVar2 = *(float *)(param_1 + 0x90);
    fVar3 = *(float *)(param_1 + 0x94);
    *param_2 = fVar1;
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    fVar4 = 1.0 / SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
    *param_2 = fVar1 * fVar4;
    param_2[1] = fVar2 * fVar4;
    param_2[2] = fVar3 * fVar4;
  }
  return 1;
}



void fn_003b5a28(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  float in_s0;
  float fVar14;
  float in_s1;
  float fVar15;
  float in_s2;
  float fVar16;
  float fVar17;
  
  *(undefined1 *)(param_1 + 0x7c) = 1;
  iVar6 = *(int *)(param_1 + 0x14);
  fn_006bd414(param_1,iVar6,(char *)&DAT_003b5de8);
  in_s1 = *(float *)(iVar6 + 0x24) + in_s1;
  fVar15 = *(float *)(iVar6 + 0x28) + in_s2;
  *(float *)(param_1 + 0x80) = *(float *)(iVar6 + 0x20) + in_s0;
  *(float *)(param_1 + 0x84) = in_s1;
  *(float *)(param_1 + 0x88) = fVar15;
  iVar6 = *(int *)(param_1 + 0x14);
  fn_006bd414(param_1,iVar6,(char *)&DAT_003b5df4);
  fVar16 = (*(float *)(iVar6 + 0x20) + in_s1) - *(float *)(param_1 + 0x80);
  fVar14 = (*(float *)(iVar6 + 0x28) + in_s2) - *(float *)(param_1 + 0x88);
  fVar15 = (*(float *)(iVar6 + 0x24) + fVar15) - *(float *)(param_1 + 0x84);
  fVar17 = 1.0 / SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
  *(float *)(param_1 + 0x8c) = fVar16 * fVar17;
  *(float *)(param_1 + 0x90) = fVar15 * fVar17;
  *(float *)(param_1 + 0x94) = fVar14 * fVar17;
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  iVar6 = (**(code **)(*piVar1 + 0x70))();
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar11 = *(uint *)(param_1 + 0x5c);
  if (uVar2 != uVar11) {
    uVar7 = uVar2;
    if (uVar11 <= uVar2) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != uVar11);
    }
    *(uint *)(param_1 + 0x5c) = uVar11 - (uVar11 - uVar2 & 0xfffffffc);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    do {
      piVar1 = (int *)fn_006f7508(DAT_008977e0);
      piVar1 = (int *)(**(code **)(*piVar1 + 0x74))(piVar1,iVar12);
      if ((((piVar1[0x4f] != *(int *)(*(int *)(param_1 + 0x14) + 0x13c) && piVar1 != (int *)0x0) &&
           (piVar1[2] == 1)) && (iVar3 = fn_006a99b0(piVar1), iVar3 == 0)) &&
         ((iVar3 = fn_006b06e8(piVar1), iVar3 != 0 &&
          (iVar3 = fn_006aff38(*(undefined4 *)(param_1 + 0x14),piVar1 + 8), iVar3 != 0)))) {
        (**(code **)(*piVar1 + 0x1dc))(piVar1,2,0x2f);
        puVar13 = (uint *)(param_1 + 0x58);
        if ((char)piVar1[1] == '\0') {
          piVar1[3] = 2;
        }
        iVar3 = piVar1[0x4f];
        piVar1 = *(int **)(param_1 + 0x5c);
        if (piVar1 == *(int **)(param_1 + 0x60)) {
          uVar2 = (int)((int)piVar1 - *puVar13) >> 2;
          if (uVar2 < (uint)((int)((int)*(int **)(param_1 + 0x60) - *puVar13) >> 2)) {
            *(int **)(param_1 + 0x5c) = piVar1 + 1;
            if (piVar1 != (int *)0x0) {
              *piVar1 = piVar1[-1];
            }
            piVar8 = piVar1 + -1;
            piVar9 = piVar1;
            if (piVar1 < piVar8) {
              iVar4 = (int)piVar8 - (int)piVar1;
              if (0 < iVar4) {
                if (iVar4 * 0x20000000 < 0) {
                  piVar8 = piVar1 + -2;
                  piVar9 = piVar1 + -1;
                  *piVar9 = *piVar8;
                }
                for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                  piVar9[-1] = piVar8[-1];
                  piVar5 = piVar8 + -2;
                  piVar8 = piVar8 + -2;
                  piVar9[-2] = *piVar5;
                  piVar9 = piVar9 + -2;
                }
              }
            }
            else {
              for (; piVar1 != piVar8; piVar8 = piVar8 + -1) {
                piVar9[-1] = piVar8[-1];
                piVar9 = piVar9 + -1;
              }
            }
            *piVar1 = iVar3;
          }
          else {
            uVar11 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar11 < uVar2 + 0x20) {
              uVar11 = uVar2 + 0x20;
            }
            piVar5 = (int *)fn_00100fc6(uVar11 << 2,0);
            piVar9 = piVar5;
            for (piVar8 = (int *)*puVar13; piVar8 != piVar1; piVar8 = piVar8 + 1) {
              if (piVar9 != (int *)0x0) {
                *piVar9 = *piVar8;
              }
              piVar9 = piVar9 + 1;
            }
            piVar8 = (int *)(((int)piVar1 - *puVar13 & 0xfffffffc) + (int)piVar5);
            if (piVar8 != (int *)0x0) {
              *piVar8 = iVar3;
            }
            piVar9 = *(int **)(param_1 + 0x5c);
            piVar8 = (int *)(((int)piVar1 - *puVar13 & 0xfffffffc) + (int)piVar5);
            for (; piVar1 != piVar9; piVar1 = piVar1 + 1) {
              piVar8 = piVar8 + 1;
              if (piVar8 != (int *)0x0) {
                *piVar8 = *piVar1;
              }
            }
            uVar7 = *puVar13;
            uVar10 = *(uint *)(param_1 + 0x5c);
            uVar2 = uVar7;
            if (uVar10 < uVar7) {
              do {
                uVar2 = uVar2 + 4;
              } while (uVar2 != uVar10);
            }
            fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0x60) - uVar7) >> 2,0);
            *(int **)(param_1 + 0x60) = piVar5 + uVar11;
            *(int **)(param_1 + 0x5c) = piVar5 + ((int)(uVar10 - uVar7) >> 2) + 1;
            *puVar13 = (uint)piVar5;
          }
        }
        else {
          *(int **)(param_1 + 0x5c) = piVar1 + 1;
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar3;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar6);
  }
  fn_00214c4c(*(undefined4 *)(param_1 + 0x14),0xf,1);
                    /* WARNING: Could not recover jumptable at 0x003b5e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x15c))(*(int **)(param_1 + 0x14),1);
  return;
}


