#include "006855e8_006863a4.h"



void fn_006863a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  return;
}



void fn_00686098(int *param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  piVar3 = (int *)fn_006f72e0(DAT_008977e0);
  if (((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0x3c))(), iVar4 == 0)) ||
     (*(char *)(DAT_008977e0 + 0x170) == -1)) {
    iVar4 = param_1[0x6b];
    pfVar6 = (float *)(param_1 + 8);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        fn_001c7160(param_1);
        (**(code **)(*param_1 + 0x34))(param_1);
      }
      else if (iVar4 == 2) {
        fn_001c7160(param_1);
        (**(code **)(*param_1 + 0x34))(param_1);
      }
      else if (iVar4 == 3) {
        iVar4 = fn_006f7a84(DAT_008977e0);
        fVar10 = *(float *)(iVar4 + 0x20) - *pfVar6;
        fVar8 = *(float *)(iVar4 + 0x24) - (float)param_1[9];
        fVar9 = *(float *)(iVar4 + 0x28) - (float)param_1[10];
        if ((int)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) < 0x451c4001) {
          return;
        }
        param_1[0x6b] = 0;
        fn_001dbc64(param_1,0);
        return;
      }
    }
    fVar9 = ((float)param_1[0x6d] - *pfVar6) * ((float)param_1[0x6d] - *pfVar6) +
            ((float)param_1[0x6e] - (float)param_1[9]) * ((float)param_1[0x6e] - (float)param_1[9])
            + ((float)param_1[0x6f] - (float)param_1[10]) *
              ((float)param_1[0x6f] - (float)param_1[10]);
    fVar8 = (float)param_1[0x6c] * (float)param_1[0x6c];
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
    uVar7 = uVar1 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      param_1[0x71] = 0;
    }
    iVar4 = fn_006f7a84(DAT_008977e0);
    fVar10 = *(float *)(iVar4 + 0x20) - *pfVar6;
    fVar8 = *(float *)(iVar4 + 0x24) - (float)param_1[9];
    fVar9 = *(float *)(iVar4 + 0x28) - (float)param_1[10];
    if ((int)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) < 0x451c4001) {
      (**(code **)(*param_1 + 0x44))(param_1,0,4);
      param_1[0x6b] = 3;
      fn_001dbc64(param_1,1);
      return;
    }
    iVar4 = param_1[0x71];
    param_1[0x71] = iVar4 + -1;
    if (iVar4 + -1 < 1) {
      fVar9 = (float)param_1[0x6d] - *pfVar6;
      fVar8 = (float)param_1[0x6c] * (float)param_1[0x6c];
      fVar9 = fVar9 * fVar9 +
              ((float)param_1[0x6e] - (float)param_1[9]) *
              ((float)param_1[0x6e] - (float)param_1[9]) +
              ((float)param_1[0x6f] - (float)param_1[10]) *
              ((float)param_1[0x6f] - (float)param_1[10]);
      uVar1 = uVar7 & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
      uVar7 = uVar1 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) {
        iVar4 = fn_00163868(0x19);
        if (iVar4 == 0) {
          (**(code **)(*param_1 + 0x44))(param_1,0,4);
          param_1[0x6b] = 0;
        }
        else {
          uVar5 = fn_00163868(0x168);
          iVar4 = VectorSignedToFloat(uVar5,(byte)(uVar7 >> 0x16) & 3);
          fn_0017fe34();
          param_1[0x70] = iVar4;
          (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
          param_1[0x6b] = 1;
        }
      }
      else {
        fVar8 = (float)param_1[0x6d] - *pfVar6;
        fn_00525bd0();
        param_1[0x70] = (int)(fVar8 * 0.024543693);
        (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
        param_1[0x6b] = 2;
      }
      param_1[0x71] = 0x4b;
    }
  }
  return;
}



void fn_00685cf0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  (**(code **)(*param_1 + 200))(param_1,0);
  fn_006f7a84(DAT_008977e0);
  fn_001ea9c0();
  if (param_1[0x6b] == -1) {
    param_1[0x5f] = param_1[0xc];
  }
  if (*(char *)((int)param_1 + 0x189) == '\0') {
    param_1[0x60] = param_1[0xc];
  }
  else {
    fVar1 = *(float *)(param_2 + 0x20) - (float)param_1[8];
    fn_00525bd0();
    param_1[0x60] = (int)(fVar1 * 0.024543693);
    fVar2 = ABS((float)param_1[0xc] - fVar1 * 0.024543693);
    fVar1 = 50.0;
    fn_0017fe34();
    if (fVar1 < fVar2) {
      (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
    }
    fn_001c7160(param_1);
  }
  if (param_1[0x72] == 1) {
    param_1[0x5f] = param_1[0x60];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 1;
  return;
}



void fn_00685c78(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fn_006f7a70(DAT_008977e0);
  iVar4 = 0;
  iVar1 = *(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x24) >> 2;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006f7a70(DAT_008977e0);
      iVar2 = *(int *)(iVar2 + 0x24);
      iVar5 = *(int *)(iVar2 + iVar4 * 4);
      if (iVar5 != 0) {
        iVar2 = *(int *)(iVar5 + 0x2f8);
      }
      if (iVar5 != 0 && iVar2 != -1) {
        uVar3 = fn_006f72b4(DAT_008977e0);
        fn_0021f144(uVar3,*(undefined4 *)(iVar5 + 0x2f8));
        *(undefined4 *)(iVar5 + 0x2f8) = 0xffffffff;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



void fn_00685b20(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  if ((param_1[0x73] != -1) &&
     ((((iVar1 = (**(code **)(*param_1 + 0x50))(param_1), iVar1 == 6 ||
        (iVar1 = (**(code **)(*param_1 + 0x50))(param_1), iVar1 == 1)) &&
       (iVar1 = fn_006a7bf8(param_1,param_1[0x7b]), iVar1 != 0)) &&
      ((iVar1 = fn_006ec1d8(param_1[0x39]), iVar1 != 0 &&
       (iVar1 = fn_001d9a94(param_1,auStack_14,auStack_18), iVar1 != 0)))))) {
    if (param_1[0x73] == -1) {
      puVar2 = &DAT_00891e48;
    }
    else {
      puVar2 = (undefined *)(DAT_008c92cc + param_1[0x73] * 0x60);
    }
    iVar1 = *(int *)(puVar2 + 0x48);
    iVar3 = fn_00242b88((int)(short)param_1[0x7a]);
    if (iVar3 != 0) {
      piVar4 = (int *)fn_00242b4c((int)(short)param_1[0x7a]);
      iVar1 = *piVar4;
    }
    iVar3 = param_1[0x50];
    if ((iVar3 == 0) || (iVar1 = iVar3, iVar3 != -1)) {
      fn_001c5118(param_1,iVar1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}



void fn_006855e8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  switch(param_1[0x6b]) {
  case 0:
    break;
  case 1:
    fn_001c7160(param_1);
    param_1[0x6b] = 2;
    break;
  case 2:
    fn_001c7160(param_1);
    if ((char)param_1[0x62] != '\0') {
      uVar2 = fn_006f7a5c(DAT_008977e0);
      fn_001d68cc(uVar2,2);
      iVar4 = fn_006f7a5c(DAT_008977e0);
      *(char *)(iVar4 + 0xf0) = (char)param_1[99];
      if ((char)param_1[99] == '\x01') {
        fn_006f6628(param_1,&local_58);
        iVar4 = fn_006f7a5c(DAT_008977e0);
        *(undefined4 *)(iVar4 + 0xbc) = local_58;
        *(undefined4 *)(iVar4 + 0xc0) = uStack_54;
        *(undefined4 *)(iVar4 + 0xc4) = uStack_50;
        *(undefined4 *)(iVar4 + 200) = uStack_4c;
        *(undefined4 *)(iVar4 + 0xcc) = uStack_48;
        *(undefined4 *)(iVar4 + 0xd0) = uStack_44;
        *(undefined4 *)(iVar4 + 0xd4) = uStack_40;
        *(undefined4 *)(iVar4 + 0xd8) = uStack_3c;
        *(undefined4 *)(iVar4 + 0xdc) = uStack_38;
        *(undefined4 *)(iVar4 + 0xe0) = uStack_34;
        *(undefined4 *)(iVar4 + 0xe4) = uStack_30;
        *(undefined4 *)(iVar4 + 0xe8) = uStack_2c;
        piVar3 = (int *)fn_006f7a84(DAT_008977e0);
        (**(code **)(*piVar3 + 0x54))(piVar3,0);
      }
    }
    param_1[0x6b] = 3;
    return;
  case 3:
    iVar4 = fn_001c7160(param_1);
    if ((iVar4 != 0) && (param_1[0x6b] = 4, *(char *)((int)param_1 + 0x189) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00685740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,9,4,0);
      return;
    }
    break;
  case 4:
    iVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar4 == 9) {
      iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      cVar1 = '\0';
      if (iVar4 != 0) {
        cVar1 = *(char *)((int)param_1 + 0x189);
      }
      if (iVar4 != 0 && cVar1 != '\0') {
        (**(code **)(*param_1 + 0x44))(param_1,10,4,0);
      }
    }
    iVar4 = fn_006f75ac(DAT_008977e0);
    iVar4 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
    if ((iVar4 == 0) && (iVar4 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30)), iVar4 == 0)) {
      if ((char)param_1[0x62] != '\0') {
        fn_006f7a5c(DAT_008977e0);
        fn_001d8a20();
        piVar3 = (int *)fn_006f7a84(DAT_008977e0);
        (**(code **)(*piVar3 + 0x54))(piVar3,1);
      }
      param_1[0x6b] = 5;
      if (*(char *)((int)param_1 + 0x189) != '\0') {
        fVar6 = ABS((float)param_1[0xc] - (float)param_1[0x5f]);
        fVar5 = 50.0;
        fn_0017fe34();
        if (fVar5 < fVar6) {
                    /* WARNING: Could not recover jumptable at 0x00685868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
          return;
        }
      }
    }
    break;
  case 5:
    iVar4 = fn_001c7160(param_1);
    if (iVar4 != 0) {
      if (*(char *)((int)param_1 + 0x189) != '\0') {
        (**(code **)(*param_1 + 0x44))(param_1,0,4);
      }
      param_1[0x6a] = -1;
      param_1[0x6b] = -1;
      if ((param_1[0x72] != 0) && (param_1[0x72] == 1)) {
        param_1[0x6a] = 1;
        param_1[0x6b] = 3;
        param_1[0x71] = 0;
        param_1[0x6d] = param_1[8];
        param_1[0x6e] = param_1[9];
        param_1[0x6f] = param_1[10];
        return;
      }
    }
    break;
  default:
    param_1[0x6b] = 0;
                    /* WARNING: Could not recover jumptable at 0x00685930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,0,4);
    return;
  }
  return;
}


