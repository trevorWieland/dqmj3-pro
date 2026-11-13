#include "001e1c54_001e2420.h"



bool fn_001e2420(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a48(DAT_008977e0);
  return *(char *)(iVar1 + 4) == '\x04';
}



void fn_001e2308(int param_1)

{
  fn_0018367c(*(undefined4 *)(param_1 + 0x18c));
  if ((*(char *)(param_1 + 0x1b0) != -1) &&
     (*(int *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x17c) != 0)) {
    fn_00764608();
    fn_0017fde4(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x17c));
    fn_0017fc3c();
  }
  if ((*(char *)(param_1 + 0x208) == -1) ||
     (*(int *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c) == 0)) {
    return;
  }
  fn_00764608();
  fn_0017fde4(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c));
  fn_0017fc3c();
  fn_005deb64(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c),param_1 + 0x20,
               param_1 + 0x2c,param_1 + 0x38);
  return;
}



void fn_001e22a4(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  if (*(int *)(param_1 + 0x308) != -1) {
    *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
    if (*(char *)(param_1 + 0x208) != -1) {
      fn_006aa538(param_1);
      iVar1 = fn_00242910();
      if (iVar1 != 0) {
        fVar2 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar1 + 8),(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(*(int *)(param_1 + 400) + 0x28) = fVar2 * 0.1;
      }
    }
  }
  return;
}



void fn_001e21b0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = (uint)*(byte *)(param_1 + param_2 + 0x3bc);
  if (uVar3 != 0) {
    iVar8 = *(int *)(param_1 + 0x194);
    uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + param_2 * 4 + 0x17c));
    puVar2 = *(uint **)(iVar8 + 0x18);
    puVar6 = *(uint **)(iVar8 + 0x1c);
    while( true ) {
      if (puVar2 != puVar6) {
        uVar3 = *puVar2;
      }
      if (puVar2 == puVar6 || uVar3 == uVar1) break;
      puVar2 = puVar2 + 1;
    }
    if (puVar2 != puVar6) {
      puVar4 = puVar2 + 1;
      if (puVar4 < puVar6) {
        iVar7 = (int)puVar6 - (int)puVar4;
        if (0 < iVar7) {
          puVar6 = puVar2;
          if (iVar7 * 0x20000000 < 0) {
            uVar3 = *puVar4;
            puVar4 = puVar2 + 2;
            if (uVar3 != uVar1) {
              puVar6 = puVar2 + 1;
              *puVar2 = uVar3;
            }
          }
          puVar2 = puVar6;
          for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar6 = puVar2;
            if (*puVar4 != uVar1) {
              puVar6 = puVar2 + 1;
              *puVar2 = *puVar4;
            }
            puVar5 = puVar4 + 1;
            puVar4 = puVar4 + 2;
            puVar2 = puVar6;
            if (*puVar5 != uVar1) {
              puVar2 = puVar6 + 1;
              *puVar6 = *puVar5;
            }
          }
        }
      }
      else {
        while (puVar4 != puVar6) {
          uVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          if (uVar3 != uVar1) {
            *puVar2 = uVar3;
            puVar2 = puVar2 + 1;
          }
        }
      }
    }
    puVar6 = *(uint **)(iVar8 + 0x1c);
    *(uint **)(iVar8 + 0x1c) = puVar2;
    if (puVar6 != puVar2) {
      *(undefined4 *)(uVar1 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + param_2 + 0x3bc) = 0;
  }
  return;
}



undefined4 fn_001e1f28(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  float local_24;
  undefined4 uStack_20;
  
  if (*(char *)(DAT_008977e0 + 0x170) == '\0') {
    return 0;
  }
  if ((*(char *)(DAT_008977e0 + 0x170) != '\x01') && (iVar1 = fn_006aba20(param_1), iVar1 == 0)) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006f7c6c(*(undefined4 *)(iVar1 + 0x3c));
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = fn_006f7a0c(DAT_008977e0);
        iVar2 = fn_006f7c20(*(undefined4 *)(iVar2 + 0x3c),iVar7);
        if (**(int **)(DAT_008977e0 + 0x40) == 0) {
code_r0x001e1fec:
          puVar6 = (undefined4 *)fn_00171634();
          local_28 = *puVar6;
          local_24 = (float)puVar6[1];
          uStack_20 = puVar6[2];
          if ((*(char *)(iVar2 + 0x12d) != '\0') &&
             (iVar5 = fn_0065fd34(iVar2 + 0x24,param_1[0x59],&local_28), iVar5 != 0)) {
            if (*(float *)(iVar2 + 4) < local_24) {
              fn_00699b18(DAT_008977e0,*(undefined4 *)(iVar2 + 0x120),
                           *(undefined4 *)(iVar2 + 0x124),*(undefined4 *)(DAT_008977e0 + 0xa8));
              if (((*(char *)(param_1[100] + 0x3c) != '\0') ||
                  ((iVar1 = fn_006a9938(param_1), iVar1 == 0 &&
                   (iVar1 = fn_006a99b0(param_1), iVar1 == 0)))) &&
                 (*(char *)(param_1[100] + 0x3c) == '\0')) {
                local_34 = param_1[8];
                iStack_30 = param_1[9];
                iStack_2c = param_1[10];
                uVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
                uVar4 = fn_006f7388(DAT_008977e0);
                iVar1 = fn_0023b858(uVar4,uVar3,&local_34,&local_34,0);
                if (iVar1 != 0) {
                  (**(code **)(*param_1 + 0x10))(param_1,&local_34);
                }
              }
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
          }
        }
        else {
          uVar3 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                               *(undefined4 *)(DAT_008977e0 + 0xa8));
          uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(iVar2 + 0x120));
          iVar5 = fn_00147e6c(uVar3,uVar4,3);
          if (iVar5 == 0) goto code_r0x001e1fec;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  return 0;
}



undefined4 fn_001e1cec(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  
  fVar11 = *(float *)(param_1 + 0x44);
  uVar16 = 0;
  bVar10 = fVar11 == 0.0;
  if (bVar10) {
    fVar11 = *(float *)(param_1 + 0x48);
  }
  bVar9 = false;
  if (bVar10 && (bVar10 && fVar11 == 0.0)) {
    bVar9 = *(float *)(param_1 + 0x4c) == 0.0;
  }
  if (!bVar9) {
    uVar1 = (uint)*(char *)(param_1 + 0x208);
    bVar10 = uVar1 == 0xffffffff;
    if (bVar10) {
      uVar1 = (uint)*(byte *)(param_1 + 0x1b1);
    }
    if (bVar10 && uVar1 == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x22d);
      bVar10 = uVar1 == 0;
      if (bVar10) {
        uVar1 = *(uint *)(param_1 + 0x378);
      }
      if ((bVar10 && uVar1 == 0) && (iVar2 = fn_006a9938(param_1), iVar2 != 0)) {
        iVar2 = fn_006f7a0c(DAT_008977e0);
        iVar2 = fn_006f7c00(*(undefined4 *)(iVar2 + 0x3c));
        iVar8 = 0;
        if (0 < iVar2) {
          fVar11 = 1.0;
          uVar17 = 0x42b40000;
          do {
            iVar3 = fn_006f7a0c(DAT_008977e0);
            pfVar4 = (float *)fn_006f7bbc(*(undefined4 *)(iVar3 + 0x3c),iVar8);
            fVar15 = *pfVar4 - *(float *)(param_1 + 0x20);
            fVar12 = *(float *)(*(int *)(param_1 + 0x100) + 0xc) + fVar11;
            fVar14 = pfVar4[1] - *(float *)(param_1 + 0x24);
            fVar13 = pfVar4[2] - *(float *)(param_1 + 0x28);
            if (fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13 < fVar12 * fVar12) {
              if (((DAT_008917d8 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008917d8), iVar3 != 0)) {
                uVar6 = (undefined4)uVar17;
                fn_0017fe34();
                DAT_008917dc = uVar6;
              }
              iVar3 = fn_006aa22c(param_1,pfVar4);
              if (iVar3 != 0) {
                *(undefined1 *)(param_1 + 0x1d4) = 0;
                *(int *)(param_1 + 0x1d8) = iVar8;
                if (*(int *)(param_1 + 400) != 0) {
                  fn_0023f3dc();
                }
                puVar5 = (undefined4 *)fn_00171634();
                uVar6 = puVar5[1];
                uVar7 = puVar5[2];
                *(undefined4 *)(param_1 + 0x344) = *puVar5;
                *(undefined4 *)(param_1 + 0x348) = uVar6;
                *(undefined4 *)(param_1 + 0x34c) = uVar7;
                puVar5 = (undefined4 *)fn_00171634();
                uVar6 = puVar5[1];
                uVar7 = puVar5[2];
                *(undefined4 *)(param_1 + 0x368) = *puVar5;
                *(undefined4 *)(param_1 + 0x36c) = uVar6;
                *(undefined4 *)(param_1 + 0x370) = uVar7;
                *(undefined1 *)(param_1 + 0x374) = 0;
                *(undefined4 *)(param_1 + 0x44) = uVar16;
                *(undefined4 *)(param_1 + 0x48) = uVar16;
                *(undefined4 *)(param_1 + 0x4c) = uVar16;
                fn_00259728(param_1 + 0x1e8,1);
                fn_001ea890(param_1,2);
                iVar2 = fn_006f7a5c(DAT_008977e0);
                *(undefined1 *)(iVar2 + 0xf1) = 1;
                uVar16 = fn_006f7a48(DAT_008977e0);
                fn_00128744(uVar16,1);
                return 1;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar2);
        }
      }
    }
  }
  return 0;
}



void fn_001e1c54(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = 1.0;
  if (*(char *)(param_1 + 0x208) != -1) {
    fn_006aa538();
    iVar1 = fn_00242b6c();
    if (iVar1 != 0) goto LAB_001e1cbc;
  }
  if ((param_2 != 0) &&
     ((iVar1 = (int)*(char *)(param_1 + 0x208), iVar1 == -1 || iVar1 == 4 ||
      (iVar1 = fn_0025988c(*(undefined4 *)(param_1 + iVar1 * 4 + 0x1f8)), iVar1 != 3 && iVar1 != 4)
      ))) {
    fVar3 = 0.5;
  }
LAB_001e1cbc:
  *(char *)(*(int *)(param_1 + 400) + 0x55) = (char)param_2;
  iVar1 = *(int *)(param_1 + 400);
  bVar2 = iVar1 == 0;
  if (!bVar2) {
    bVar2 = *(float *)(iVar1 + 0x38) == fVar3;
  }
  if (!bVar2) {
    *(float *)(iVar1 + 0x38) = fVar3;
  }
  return;
}


