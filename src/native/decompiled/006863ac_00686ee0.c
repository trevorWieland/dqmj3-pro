#include "006863ac_00686ee0.h"



void fn_00686ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_r9;
  
  if ((char)param_1[0x62] != '\0') {
    fn_006f7a5c(DAT_008977e0);
    fn_001d8a20();
    piVar3 = (int *)fn_006f7a84(DAT_008977e0);
    (**(code **)(*piVar3 + 0x54))(piVar3,1);
  }
  param_1[0x6a] = -1;
  param_1[0x6b] = -1;
  if ((param_1[0x72] != 0) && (param_1[0x72] == 1)) {
    param_1[0x6a] = 1;
    param_1[0x6b] = 3;
    param_1[0x6d] = param_1[8];
    param_1[0x6e] = param_1[9];
    param_1[0x71] = 0;
    param_1[0x6f] = param_1[10];
  }
  fn_001c5244(param_1,param_1[0x39]);
  (**(code **)(*param_1 + 200))(param_1,0);
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7545);
  param_1[0x73] = -1;
  iVar4 = 0;
  if (0 < (param_1[0xbb] - param_1[0xba]) / 0x14) {
    do {
      unaff_r9 = iVar4 * 5;
      if (-1 < *(int *)(param_1[0xba] + iVar4 * 0x14 + 8)) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        *(undefined4 *)(param_1[0xba] + iVar4 * 0x14 + 8) = 0xffffffff;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (param_1[0xbb] - param_1[0xba]) / 0x14);
  }
  iVar5 = 0;
  iVar1 = param_1[0xbb] - param_1[0xba] >> 0x1f;
  iVar4 = (param_1[0xbb] - param_1[0xba]) / 0x14 + iVar1;
  iVar2 = iVar4 - iVar1;
  if (iVar4 != iVar1 && -1 < iVar2) {
    unaff_r9 = 0;
  }
  if (0 < iVar2) {
    do {
      if (-1 < *(int *)(param_1[0xba] + iVar5 * 0x14 + 4)) {
        fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c));
        piVar3 = (int *)(param_1[0xba] + iVar5 * 0x14);
        *piVar3 = unaff_r9;
        piVar3[1] = -1;
        piVar3[2] = -1;
        piVar3[3] = -1;
        *(char *)(piVar3 + 4) = (char)unaff_r9;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (param_1[0xbb] - param_1[0xba]) / 0x14);
  }
  return;
}



void fn_00686d58(int param_1)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = 0;
  if (0 < (*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8)) / 0x14) {
    do {
      if (-1 < *(int *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14 + 4)) {
        pfVar3 = (float *)fn_006f7770(DAT_008977e0);
        fVar8 = *pfVar3 - *(float *)(param_1 + 0x20);
        fVar9 = pfVar3[1] - *(float *)(param_1 + 0x24);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14);
        fVar10 = pfVar3[2] - *(float *)(param_1 + 0x28);
        fVar9 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
        fVar8 = (float)VectorSignedToFloat(*puVar4,(byte)(in_fpscr >> 0x16) & 3);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar9) << 0x1f |
                (uint)(fVar8 == fVar9) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          if (*(char *)(puVar4 + 4) == '\0') {
            if (-1 < (int)puVar4[2]) {
              (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
            }
            uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14 + 0xc);
            uVar5 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
            uVar5 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),
                                 *(undefined4 *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14 + 4),uVar5
                                 ,uVar7);
            *(undefined4 *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14 + 8) = uVar5;
            *(undefined1 *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14 + 0x10) = 1;
          }
        }
        else if (*(char *)(puVar4 + 4) != '\0') {
          fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),puVar4[2],0);
          *(undefined1 *)(*(int *)(param_1 + 0x2e8) + iVar6 * 0x14 + 0x10) = 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8)) / 0x14);
  }
  return;
}



void fn_0068655c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_2;
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  return;
}



void fn_00686554(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1dc) = param_2;
  return;
}



void fn_006863ac(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar2 = 0;
  if ((DAT_008c92d0 - DAT_008c92cc) / 0x60 < 1) {
    return;
  }
  do {
    puVar4 = (undefined *)(DAT_008c92cc + iVar2 * 0x60);
    iVar3 = iVar2;
    while( true ) {
      uVar1 = fn_006f7a9c(DAT_008977e0);
      iVar2 = fn_006b776c(uVar1,puVar4);
      if (iVar2 == param_2) {
        *(int *)(param_1 + 0x1cc) = iVar3;
        return;
      }
      if (iVar3 == -1) {
        puVar4 = &DAT_00891e48;
      }
      else {
        puVar4 = (undefined *)(DAT_008c92cc + iVar3 * 0x60);
      }
      uVar1 = fn_006f7a9c(DAT_008977e0);
      iVar2 = fn_006b7948(uVar1,puVar4);
      if (iVar2 == param_2) {
        *(int *)(param_1 + 0x1cc) = iVar3;
        iVar2 = fn_003035b0(puVar4,DAT_00891ea8);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891eac);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891eb0);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891eb4);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891eb8);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891ebc);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891ec0);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        iVar2 = fn_003035b0(puVar4,DAT_00891ec4);
        if (iVar2 == 0) {
          *param_3 = 1;
        }
        return;
      }
      iVar2 = iVar3 + 1;
      if ((DAT_008c92d0 - DAT_008c92cc) / 0x60 <= iVar2) {
        return;
      }
      if (iVar3 != -2) break;
      puVar4 = &DAT_00891e48;
      iVar3 = iVar2;
    }
  } while( true );
}


