#include "00755860_00755e38.h"



void fn_00755e38(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((char)param_1[0x2c] == '\0') {
    uVar7 = 1;
    do {
      puVar4 = param_1 + uVar7 * 4;
      uVar7 = uVar7 + 1;
      uVar11 = *puVar4;
      uVar12 = ((uVar11 & 0x80808080) >> 7) * 0x1b ^ (uVar11 & ~(uVar11 & 0x80808080)) << 1;
      *puVar4 = uVar12 ^ (uVar11 >> 0x18 | uVar11 << 8) ^ (uVar11 >> 0x10 | uVar11 << 0x10) ^
                         (uVar11 >> 8 | uVar11 << 0x18) ^ (uVar12 >> 8 | uVar12 << 0x18);
      uVar11 = puVar4[1];
      uVar12 = ((uVar11 & 0x80808080) >> 7) * 0x1b ^ (uVar11 & ~(uVar11 & 0x80808080)) << 1;
      puVar4[1] = uVar12 ^ (uVar11 >> 0x18 | uVar11 << 8) ^ (uVar11 >> 0x10 | uVar11 << 0x10) ^
                           (uVar11 >> 8 | uVar11 << 0x18) ^ (uVar12 >> 8 | uVar12 << 0x18);
      uVar11 = puVar4[2];
      uVar12 = ((uVar11 & 0x80808080) >> 7) * 0x1b ^ (uVar11 & ~(uVar11 & 0x80808080)) << 1;
      puVar4[2] = uVar12 ^ (uVar11 >> 0x18 | uVar11 << 8) ^ (uVar11 >> 0x10 | uVar11 << 0x10) ^
                           (uVar11 >> 8 | uVar11 << 0x18) ^ (uVar12 >> 8 | uVar12 << 0x18);
      uVar11 = puVar4[3];
      uVar12 = ((uVar11 & 0x80808080) >> 7) * 0x1b ^ (uVar11 & ~(uVar11 & 0x80808080)) << 1;
      puVar4[3] = uVar12 ^ (uVar11 >> 0x18 | uVar11 << 8) ^ (uVar11 >> 0x10 | uVar11 << 0x10) ^
                           (uVar11 >> 8 | uVar11 << 0x18) ^ (uVar12 >> 8 | uVar12 << 0x18);
    } while (uVar7 < 10);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  uVar13 = param_3[1] ^ param_1[1];
  uVar7 = *param_3 ^ *param_1;
  iVar8 = 9;
  uVar11 = param_3[2] ^ param_1[2];
  uVar12 = param_3[3] ^ param_1[3];
  puVar4 = param_1 + 4;
  do {
    puVar3 = puVar4;
    uVar10 = uVar11 & 0xff00;
    uVar9 = uVar11 & 0xff0000;
    iVar8 = iVar8 + -1;
    uVar1 = uVar7 >> 0x18;
    uVar5 = uVar7 & 0xff00;
    uVar6 = uVar13 & 0xff0000;
    uVar2 = uVar11 >> 0x18;
    uVar11 = puVar3[2] ^
             *(uint *)(&DAT_007d665c + (uVar11 & 0xff) * 4) ^
             (*(uint *)(&DAT_007d665c + ((uVar12 & 0xff00) >> 6)) >> 0x18 |
             *(uint *)(&DAT_007d665c + ((uVar12 & 0xff00) >> 6)) << 8) ^
             (*(uint *)(&DAT_007d665c + ((uVar7 & 0xff0000) >> 0xe)) >> 0x10 |
             *(uint *)(&DAT_007d665c + ((uVar7 & 0xff0000) >> 0xe)) << 0x10) ^
             (*(uint *)(&DAT_007d665c + (uVar13 >> 0x18) * 4) >> 8 |
             *(uint *)(&DAT_007d665c + (uVar13 >> 0x18) * 4) << 0x18);
    uVar7 = *puVar3 ^ *(uint *)(&DAT_007d665c + (uVar7 & 0xff) * 4) ^
                      (*(uint *)(&DAT_007d665c + ((uVar13 & 0xff00) >> 6)) >> 0x18 |
                      *(uint *)(&DAT_007d665c + ((uVar13 & 0xff00) >> 6)) << 8) ^
                      (*(uint *)(&DAT_007d665c + (uVar9 >> 0xe)) >> 0x10 |
                      *(uint *)(&DAT_007d665c + (uVar9 >> 0xe)) << 0x10) ^
                      (*(uint *)(&DAT_007d665c + (uVar12 >> 0x18) * 4) >> 8 |
                      *(uint *)(&DAT_007d665c + (uVar12 >> 0x18) * 4) << 0x18);
    uVar13 = puVar3[1] ^
             *(uint *)(&DAT_007d665c + (uVar13 & 0xff) * 4) ^
             (*(uint *)(&DAT_007d665c + (uVar10 >> 6)) >> 0x18 |
             *(uint *)(&DAT_007d665c + (uVar10 >> 6)) << 8) ^
             (*(uint *)(&DAT_007d665c + ((uVar12 & 0xff0000) >> 0xe)) >> 0x10 |
             *(uint *)(&DAT_007d665c + ((uVar12 & 0xff0000) >> 0xe)) << 0x10) ^
             (*(uint *)(&DAT_007d665c + uVar1 * 4) >> 8 |
             *(uint *)(&DAT_007d665c + uVar1 * 4) << 0x18);
    uVar12 = *(uint *)(&DAT_007d665c + (uVar12 & 0xff) * 4) ^
             (*(uint *)(&DAT_007d665c + (uVar5 >> 6)) >> 0x18 |
             *(uint *)(&DAT_007d665c + (uVar5 >> 6)) << 8) ^
             (*(uint *)(&DAT_007d665c + (uVar6 >> 0xe)) >> 0x10 |
             *(uint *)(&DAT_007d665c + (uVar6 >> 0xe)) << 0x10) ^
             (*(uint *)(&DAT_007d665c + uVar2 * 4) >> 8 |
             *(uint *)(&DAT_007d665c + uVar2 * 4) << 0x18) ^ puVar3[3];
    puVar4 = puVar3 + 4;
  } while (iVar8 != 0);
  *param_2 = ((uint)(byte)(&DAT_007d643c)[(uVar11 & 0xffffff) >> 0x10] << 0x10 |
              (uint)(byte)(&DAT_007d643c)[uVar12 >> 0x18] << 0x18 |
             (uint)CONCAT11((&DAT_007d643c)[(uVar13 & 0xffff) >> 8],(&DAT_007d643c)[uVar7 & 0xff]))
             ^ puVar3[4];
  param_2[1] = ((uint)(byte)(&DAT_007d643c)[(uVar12 & 0xffffff) >> 0x10] << 0x10 |
                (uint)(byte)(&DAT_007d643c)[uVar7 >> 0x18] << 0x18 |
               (uint)CONCAT11((&DAT_007d643c)[(uVar11 & 0xffff) >> 8],(&DAT_007d643c)[uVar13 & 0xff]
                             )) ^ puVar3[5];
  param_2[2] = ((uint)(byte)(&DAT_007d643c)[(uVar7 & 0xffffff) >> 0x10] << 0x10 |
                (uint)(byte)(&DAT_007d643c)[uVar13 >> 0x18] << 0x18 |
               (uint)CONCAT11((&DAT_007d643c)[(uVar12 & 0xffff) >> 8],(&DAT_007d643c)[uVar11 & 0xff]
                             )) ^ puVar3[6];
  param_2[3] = ((uint)(byte)(&DAT_007d643c)[(uVar13 & 0xffffff) >> 0x10] << 0x10 |
                (uint)(byte)(&DAT_007d643c)[uVar11 >> 0x18] << 0x18 |
               (uint)CONCAT11((&DAT_007d643c)[(uVar7 & 0xffff) >> 8],(&DAT_007d643c)[uVar12 & 0xff])
               ) ^ puVar3[7];
  return;
}



void fn_00755b58(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uVar6 = 1;
    do {
      uVar3 = 0;
      iVar4 = param_1 + uVar6 * 0x10;
      do {
        uVar13 = *(uint *)(iVar4 + uVar3 * 4);
        uVar8 = ((uVar13 & 0x808080ff) >> 7) * 0x1b ^ (uVar13 & 0xff7f7f7f) << 1;
        uVar7 = ((uVar8 & 0x808080ff) >> 7) * 0x1b ^ (uVar8 & 0xff7f7f7f) << 1;
        uVar12 = ((uVar7 & 0x808080ff) >> 7) * 0x1b ^ (uVar7 & 0xff7f7f7f) << 1 ^ uVar13;
        uVar12 = uVar7 ^ (uVar12 >> 8 | uVar12 << 0x18) ^ uVar12;
        uVar12 = uVar12 ^ uVar8 ^ (uVar12 >> 8 | uVar12 << 0x18);
        *(uint *)(iVar4 + uVar3 * 4) = uVar13 ^ (uVar12 >> 8 | uVar12 << 0x18) ^ uVar12;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 10);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  uVar6 = param_3[1] ^ *(uint *)(param_1 + 0xa4);
  iVar4 = 9;
  uVar12 = *(uint *)(param_1 + 0xa0) ^ *param_3;
  uVar3 = param_3[2] ^ *(uint *)(param_1 + 0xa8);
  uVar7 = param_3[3] ^ *(uint *)(param_1 + 0xac);
  puVar1 = (uint *)(param_1 + 0x90);
  do {
    puVar2 = puVar1;
    uVar9 = uVar12 & 0xff00;
    uVar11 = uVar6 & 0xff00;
    iVar4 = iVar4 + -1;
    uVar13 = uVar6 & 0xff0000;
    uVar5 = uVar3 & 0xff00;
    uVar10 = uVar12 & 0xff0000;
    uVar8 = uVar12 >> 0x18;
    uVar12 = *puVar2 ^ *(uint *)(&DAT_007d6a5c + (uVar12 & 0xff) * 4) ^
                       (*(uint *)(&DAT_007d6a5c + ((uVar7 & 0xff00) >> 6)) >> 0x18 |
                       *(uint *)(&DAT_007d6a5c + ((uVar7 & 0xff00) >> 6)) << 8) ^
                       (*(uint *)(&DAT_007d6a5c + ((uVar3 & 0xff0000) >> 0xe)) >> 0x10 |
                       *(uint *)(&DAT_007d6a5c + ((uVar3 & 0xff0000) >> 0xe)) << 0x10) ^
                       (*(uint *)(&DAT_007d6a5c + (uVar6 >> 0x18) * 4) >> 8 |
                       *(uint *)(&DAT_007d6a5c + (uVar6 >> 0x18) * 4) << 0x18);
    uVar6 = puVar2[1] ^
            *(uint *)(&DAT_007d6a5c + (uVar6 & 0xff) * 4) ^
            (*(uint *)(&DAT_007d6a5c + (uVar9 >> 6)) >> 0x18 |
            *(uint *)(&DAT_007d6a5c + (uVar9 >> 6)) << 8) ^
            (*(uint *)(&DAT_007d6a5c + ((uVar7 & 0xff0000) >> 0xe)) >> 0x10 |
            *(uint *)(&DAT_007d6a5c + ((uVar7 & 0xff0000) >> 0xe)) << 0x10) ^
            (*(uint *)(&DAT_007d6a5c + (uVar3 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_007d6a5c + (uVar3 >> 0x18) * 4) << 0x18);
    uVar3 = puVar2[2] ^
            *(uint *)(&DAT_007d6a5c + (uVar3 & 0xff) * 4) ^
            (*(uint *)(&DAT_007d6a5c + (uVar11 >> 6)) >> 0x18 |
            *(uint *)(&DAT_007d6a5c + (uVar11 >> 6)) << 8) ^
            (*(uint *)(&DAT_007d6a5c + (uVar10 >> 0xe)) >> 0x10 |
            *(uint *)(&DAT_007d6a5c + (uVar10 >> 0xe)) << 0x10) ^
            (*(uint *)(&DAT_007d6a5c + (uVar7 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_007d6a5c + (uVar7 >> 0x18) * 4) << 0x18);
    uVar7 = *(uint *)(&DAT_007d6a5c + (uVar7 & 0xff) * 4) ^
            (*(uint *)(&DAT_007d6a5c + (uVar5 >> 6)) >> 0x18 |
            *(uint *)(&DAT_007d6a5c + (uVar5 >> 6)) << 8) ^
            (*(uint *)(&DAT_007d6a5c + (uVar13 >> 0xe)) >> 0x10 |
            *(uint *)(&DAT_007d6a5c + (uVar13 >> 0xe)) << 0x10) ^
            (*(uint *)(&DAT_007d6a5c + uVar8 * 4) >> 8 |
            *(uint *)(&DAT_007d6a5c + uVar8 * 4) << 0x18) ^ puVar2[3];
    puVar1 = puVar2 + -4;
  } while (iVar4 != 0);
  *param_2 = (uint)(byte)(&DAT_007d653c)[(uVar3 & 0xffffff) >> 0x10] << 0x10 ^
             (uint)(byte)(&DAT_007d653c)[uVar6 >> 0x18] << 0x18 ^
             (uint)CONCAT11((&DAT_007d653c)[(uVar7 & 0xffff) >> 8],(&DAT_007d653c)[uVar12 & 0xff]) ^
             puVar2[-4];
  param_2[1] = (uint)CONCAT11((&DAT_007d653c)[(uVar12 & 0xffff) >> 8],(&DAT_007d653c)[uVar6 & 0xff])
               ^ (uint)(byte)(&DAT_007d653c)[(uVar7 & 0xffffff) >> 0x10] << 0x10 ^
                 (uint)(byte)(&DAT_007d653c)[uVar3 >> 0x18] << 0x18 ^ puVar2[-3];
  param_2[2] = (uint)(byte)(&DAT_007d653c)[(uVar12 & 0xffffff) >> 0x10] << 0x10 ^
               (uint)(byte)(&DAT_007d653c)[uVar7 >> 0x18] << 0x18 ^
               (uint)CONCAT11((&DAT_007d653c)[(uVar6 & 0xffff) >> 8],(&DAT_007d653c)[uVar3 & 0xff])
               ^ puVar2[-2];
  param_2[3] = puVar2[-1] ^
               (uint)(byte)(&DAT_007d653c)[(uVar6 & 0xffffff) >> 0x10] << 0x10 ^
               (uint)(byte)(&DAT_007d653c)[uVar12 >> 0x18] << 0x18 ^
               (uint)CONCAT11((&DAT_007d653c)[(uVar3 & 0xffff) >> 8],(&DAT_007d653c)[uVar7 & 0xff]);
  return;
}



void fn_00755a98(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0x10) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  uVar2 = 4;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  do {
    uVar3 = fn_00169f1c(uVar2,4);
    if ((int)((ulonglong)uVar3 >> 0x20) == 0) {
      uVar1 = (uint)(byte)(&DAT_007d663b)[(int)uVar3] ^
              (uint)(byte)(&DAT_007d643c)[(uVar1 & 0xffff) >> 8] ^
              (uint)(byte)(&DAT_007d643c)[uVar1 & 0xff] << 0x18 ^
              (uint)(byte)(&DAT_007d643c)[(uVar1 & 0xffffff) >> 0x10] << 8 ^
              (uint)(byte)(&DAT_007d643c)[uVar1 >> 0x18] << 0x10;
    }
    uVar1 = uVar1 ^ param_1[uVar2 - 4];
    param_1[uVar2] = uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2c);
  return;
}



void fn_00755a90(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  if (param_3 != 0x10) {
    return;
  }
  *(undefined1 *)(param_1 + 0xb4) = 1;
  uVar3 = 4;
  *puVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  uVar2 = param_2[3];
  *(uint *)(param_1 + 0x10) = uVar2;
  do {
    uVar4 = fn_00169f1c(uVar3,4);
    if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
      uVar2 = (uint)(byte)(&DAT_007d663b)[(int)uVar4] ^
              (uint)(byte)(&DAT_007d643c)[(uVar2 & 0xffff) >> 8] ^
              (uint)(byte)(&DAT_007d643c)[uVar2 & 0xff] << 0x18 ^
              (uint)(byte)(&DAT_007d643c)[(uVar2 & 0xffffff) >> 0x10] << 8 ^
              (uint)(byte)(&DAT_007d643c)[uVar2 >> 0x18] << 0x10;
    }
    uVar2 = uVar2 ^ puVar1[uVar3 - 4];
    puVar1[uVar3] = uVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x2c);
  return;
}



void fn_00755a78(int param_1)

{
  fn_007562f0(param_1 + 4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0075591c) */

void fn_00755904(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar6 = param_3[6];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar7 = param_3[8];
  fVar8 = param_3[9];
  fVar9 = param_3[10];
  fVar16 = param_2[8];
  fVar17 = param_2[9];
  fVar18 = param_2[10];
  *param_1 = fVar1 * fVar10 + fVar4 * fVar11 + fVar7 * fVar12;
  param_1[1] = fVar2 * fVar10 + fVar5 * fVar11 + fVar8 * fVar12;
  param_1[2] = fVar3 * fVar10 + fVar6 * fVar11 + fVar9 * fVar12;
  param_1[4] = fVar1 * fVar13 + fVar4 * fVar14 + fVar7 * fVar15;
  param_1[5] = fVar2 * fVar13 + fVar5 * fVar14 + fVar8 * fVar15;
  param_1[6] = fVar3 * fVar13 + fVar6 * fVar14 + fVar9 * fVar15;
  param_1[8] = fVar1 * fVar16 + fVar4 * fVar17 + fVar7 * fVar18;
  param_1[9] = fVar2 * fVar16 + fVar5 * fVar17 + fVar8 * fVar18;
  param_1[10] = fVar3 * fVar16 + fVar6 * fVar17 + fVar9 * fVar18;
  return;
}



int * fn_00755860(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = fn_004ed2e8();
  piVar2 = (int *)fn_00656e14(0x18,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar3 = (int *)fn_0015ece0(0xc);
    iVar4 = fn_0015ece0(0x70);
    piVar3[2] = iVar4;
    *piVar3 = *piVar2;
    piVar3[1] = 1;
    *piVar2 = (int)piVar3;
    iVar4 = piVar3[2];
    piVar2[2] = iVar4;
    piVar2[3] = iVar4 + 0x70;
    iVar4 = piVar2[2];
    piVar2[4] = iVar4;
    piVar2[2] = iVar4 + 0x70;
    *(int *)iVar4 = iVar4;
    *(int *)(piVar2[4] + 4) = piVar2[4];
  }
  return piVar2;
}


