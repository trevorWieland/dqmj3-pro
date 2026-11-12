#include "001d9700_001d9f6c.h"



undefined4 fn_001d9f6c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c));
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  return 1;
}



void fn_001d9db8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  iVar11 = 0;
  if (0 < param_2) {
    uVar16 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x108);
      uVar6 = uVar2 & 0x3fffffff;
      if (*(int *)(param_1 + 0x104) - *(int *)(param_1 + 0x100) >> 4 < (int)uVar6) {
LAB_001d9f28:
        puVar3 = *(undefined4 **)(param_1 + 0x104);
        if (puVar3 != (undefined4 *)0x0) {
          uVar13 = (undefined4)uVar16;
          *puVar3 = uVar13;
          puVar3[1] = uVar13;
          puVar3[2] = uVar13;
          puVar3[3] = uVar13;
        }
        *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 0x10;
      }
      else {
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = uVar6 << 1;
        }
        if (uVar6 <= (uVar2 & 0x3fffffff)) goto LAB_001d9f28;
        piVar10 = *(int **)(param_1 + 0xfc);
        if (((piVar10 != (int *)0x0) && ((uVar2 & 0xc0000000) == 0x40000000)) &&
           (puVar3 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10,uVar6 << 4,0x20),
           puVar3 != (undefined4 *)0x0)) {
          iVar12 = 0;
          puVar7 = *(undefined4 **)(param_1 + 0x100);
          puVar9 = *(undefined4 **)(param_1 + 0x104);
          puVar4 = puVar3;
          if (puVar7 != puVar9) {
            do {
              if (puVar4 != (undefined4 *)0x0) {
                uVar13 = puVar7[1];
                uVar14 = puVar7[2];
                uVar15 = puVar7[3];
                *puVar4 = *puVar7;
                puVar4[1] = uVar13;
                puVar4[2] = uVar14;
                puVar4[3] = uVar15;
              }
              puVar7 = puVar7 + 4;
              puVar4 = puVar4 + 4;
            } while (puVar7 != puVar9);
            iVar12 = *(int *)(param_1 + 0x104) - *(int *)(param_1 + 0x100) >> 4;
          }
          uVar2 = *(uint *)(param_1 + 0x100);
          if (uVar2 != 0) {
            uVar5 = *(uint *)(param_1 + 0x104);
            uVar1 = uVar2;
            if (uVar2 < uVar5) {
              iVar8 = 1;
              if (1 < ((int)(uVar5 - uVar2) >> 4) + 1) {
                do {
                  iVar8 = iVar8 + 1;
                } while (iVar8 < ((int)(uVar5 - uVar2) >> 4) + 1);
              }
            }
            else {
              for (; uVar1 != uVar5; uVar1 = uVar1 + 0x10) {
              }
            }
            *(uint *)(param_1 + 0x104) = uVar2;
            piVar10 = *(int **)(param_1 + 0xfc);
            (**(code **)(*piVar10 + 0xc))(piVar10,*(undefined4 *)(param_1 + 0x100));
          }
          *(undefined4 **)(param_1 + 0x104) = puVar3 + iVar12 * 4;
          *(undefined4 **)(param_1 + 0x100) = puVar3;
          *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xc0000000 | uVar6;
          goto LAB_001d9f28;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2);
  }
  return;
}



void fn_001d9bc8(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1[0x39] == 0) {
    if (param_1[0x3a] == -1) {
      return;
    }
    if ((*(byte *)(param_1 + 0x4e) & 2) == 0) {
      (**(code **)(*param_1 + 0xf8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x001d9d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))(param_1);
      return;
    }
    return;
  }
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 != 0) goto LAB_001d9cc4;
  uVar3 = param_1[0x4e];
  if ((uVar3 & 2) == 0) {
    (**(code **)(*param_1 + 0xf8))(param_1);
  }
  else {
    bVar6 = (uVar3 & 0x10) != 0;
    if (bVar6) {
      uVar3 = (uint)*(byte *)(param_1 + 0x37);
    }
    if (!bVar6 || uVar3 == 3) goto LAB_001d9cc4;
    piVar4 = (int *)fn_006f72e0(DAT_008977e0);
    iVar2 = (**(code **)(*piVar4 + 0x3c))();
    if (((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0xec))(param_1), iVar2 != 0)) ||
       (0x3f7fffff < param_1[0x3e])) goto LAB_001d9cc4;
    if ((float)param_1[0x3e] == 0.0) {
      param_1[0x4e] = param_1[0x4e] | 2;
      (**(code **)(*param_1 + 0x58))(param_1,1);
    }
  }
  (**(code **)(*param_1 + 0xd8))(param_1);
LAB_001d9cc4:
  fVar10 = (float)param_1[0x58];
  if (param_1[0x3e] == 0x3f800000) {
    bVar6 = (char)param_1[0x37] != '\0';
    bVar1 = 0;
    if (bVar6) {
      bVar1 = *(byte *)(param_1 + 0x4e);
    }
    if (bVar6 && (bVar1 & 0x80) != 0) {
      iVar2 = fn_006f7a5c(DAT_008977e0);
      fVar7 = *(float *)(iVar2 + 0x1c) - (float)param_1[8];
      fVar8 = *(float *)(iVar2 + 0x20) - (float)param_1[9];
      fVar9 = *(float *)(iVar2 + 0x24) - (float)param_1[10];
      if (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 < fVar10 * fVar10) {
        uVar5 = fn_0017fde4(param_1[0x39]);
        fn_0017fc28(uVar5,4);
        return;
      }
      uVar5 = fn_0017fde4(param_1[0x39]);
      fn_0017fcfc(uVar5,4);
      return;
    }
  }
  return;
}



void fn_001d9bb4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x118) = *param_2;
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  return;
}



bool fn_001d9a94(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  fVar4 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x1c);
  fVar5 = 0.0;
  fVar3 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x20);
  fVar2 = 1.0 - SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) / in_s0;
  *param_2 = fVar2;
  if (fVar2 <= 0.0) {
    fVar2 = fVar5;
  }
  *param_2 = fVar2;
  iVar1 = fn_006f7a5c(DAT_008977e0);
  fn_00525bd0();
  fVar2 = fVar4 * 0.024543693 - *(float *)(iVar1 + 0x14);
  fn_005df8f8();
  if ((int)fVar2 < 0x3fc90fdc) {
    if ((uint)fVar2 < 0xbfc90fdc) goto LAB_001d9b68;
    fVar4 = -3.1415927;
  }
  else {
    fVar4 = 3.1415927;
  }
  fVar2 = fVar4 - fVar2;
LAB_001d9b68:
  *param_3 = fVar2 * -0.63661975;
  return fVar5 < *param_2;
}



bool fn_001d99a0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    iVar1 = fn_00145b00(8,&DAT_00812c8c);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = fn_005efdbc();
    }
  }
  else {
    iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = fn_005e846c();
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  if (param_4 == 0) {
    iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0xe4),iVar1,0);
  }
  else {
    iVar1 = fn_0069ee38(*(undefined4 *)(param_1 + 0xe4),iVar1,0);
  }
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xe0) = param_2;
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfffffffe | param_3;
  }
  return iVar1 != 0;
}



void fn_001d9700(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = 1.0;
  if (*(char *)(param_1 + 0xdc) != '\x03') {
    piVar1 = (int *)fn_006f72e0(DAT_008977e0);
    iVar2 = (**(code **)(*piVar1 + 0x3c))();
    if (iVar2 != 0) {
      piVar1 = (int *)fn_006f72e0(DAT_008977e0);
      iVar2 = (**(code **)(*piVar1 + 0x54))();
      if (iVar2 == param_1) {
        return;
      }
    }
  }
  iVar2 = fn_006f7a5c(DAT_008977e0);
  pfVar3 = *(float **)(param_1 + 0x100);
  fVar11 = 0.1;
  fVar9 = *(float *)(iVar2 + 0x1c) - (*(float *)(param_1 + 0x20) + *pfVar3);
  fVar7 = *(float *)(iVar2 + 0x20) - (*(float *)(param_1 + 0x24) + pfVar3[1]);
  fVar8 = *(float *)(iVar2 + 0x24) - (*(float *)(param_1 + 0x28) + pfVar3[2]);
  fVar7 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar8 = SQRT(fVar7);
  if (*(char *)(param_1 + 0xdc) == '\x06') {
LAB_001d97e4:
    fVar10 = *(float *)(param_1 + 0xf8);
    if (fVar8 < *(float *)(param_1 + 0x11c)) {
      bVar4 = *(float *)(param_1 + 0x118) < fVar8;
      if (bVar4) {
        fVar7 = *(float *)(param_1 + 0x120);
      }
      if (bVar4 && (bVar4 && fVar7 < fVar10)) {
        return;
      }
      return;
    }
    if (0x3f7fffff < (int)fVar10) {
      return;
    }
    fVar10 = fVar10 + fVar11;
  }
  else {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      piVar1 = (int *)fn_006f72e0(DAT_008977e0);
      iVar2 = (**(code **)(*piVar1 + 0x68))();
      if (iVar2 != 0) goto LAB_001d97e4;
    }
    if (fVar8 < *(float *)(param_1 + 0x11c)) {
      if (fVar8 <= *(float *)(param_1 + 0x118)) {
        return;
      }
      if (((DAT_0089179c & 1) == 0) && (iVar2 = fn_00303afc(&DAT_0089179c), iVar2 != 0)) {
        DAT_008917a0 = (fVar10 - *(float *)(param_1 + 0x120)) /
                       (*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x118));
      }
      return;
    }
    if ((*(byte *)(param_1 + 0x138) & 8) == 0) {
      return;
    }
    fVar10 = *(float *)(param_1 + 0xf8);
    if (*(float *)(param_1 + 0x124) < fVar8) {
      fVar7 = *(float *)(param_1 + 0x128);
      bVar4 = fVar7 < fVar8;
      bVar5 = fVar7 == fVar8;
      bVar6 = NAN(fVar7) || NAN(fVar8);
      if (!bVar5 && !bVar4) {
        bVar4 = fVar10 < 0.0;
        bVar5 = fVar10 == 0.0;
        bVar6 = NAN(fVar10);
      }
      if (bVar5 || bVar4 != bVar6) {
        return;
      }
      return;
    }
    if (0x3f7fffff < (int)fVar10) {
      return;
    }
    fVar10 = fVar10 + fVar11;
  }
  if ((int)fVar10 < 0x3f800001) {
    return;
  }
  return;
}


