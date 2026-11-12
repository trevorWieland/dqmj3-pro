#include "002cb584_002cbcb8.h"



void fn_002cbcb8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_58 [14];
  
  iVar3 = *(int *)(param_1 + param_2 * 4 + 0x38);
  uVar5 = 0;
  local_58[0] = 8;
  local_58[1] = 2;
  local_58[2] = 7;
  local_58[3] = 3;
  local_58[4] = 6;
  local_58[5] = 4;
  local_58[6] = 5;
  local_58[7] = 5;
  local_58[8] = 4;
  local_58[9] = 6;
  local_58[10] = 9;
  local_58[0xb] = 7;
  local_58[0xc] = 10;
  local_58[0xd] = 8;
  do {
    uVar6 = local_58[uVar5 * 2];
    uVar1 = *(int *)(iVar3 + 0x6c) - *(int *)(iVar3 + 0x68) >> 2;
    if (uVar1 <= uVar6) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar6,uVar1);
    }
    iVar2 = uVar5 * 2;
    uVar5 = uVar5 + 1;
    iVar4 = *(int *)(*(int *)(iVar3 + 0x68) + uVar6 * 4);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | local_58[iVar2 + 1] == param_3;
  } while (uVar5 < 7);
  return;
}



void fn_002cbb14(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x30);
  bVar6 = iVar1 != iVar3;
  if (bVar6) {
    iVar3 = *(int *)(param_1 + 100);
  }
  if (bVar6 && iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
  }
  if ((bVar6 && iVar3 != 0) && iVar1 != 0) {
    fn_00151954();
    fn_0018a69c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 100));
  }
  fn_002cb584(param_1,0);
  in_fpscr = in_fpscr & 0xfffffff;
  if (((*(float *)(param_1 + 0x38) != *(float *)(param_1 + 0x44)) ||
      (*(float *)(param_1 + 0x3c) != *(float *)(param_1 + 0x48))) ||
     (*(float *)(param_1 + 0x40) != *(float *)(param_1 + 0x4c))) {
    iVar3 = *(int *)(param_1 + 100);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar3 + 0x20) = uVar4;
    *(undefined4 *)(iVar3 + 0x24) = uVar5;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  }
  if (*(byte *)(param_1 + 0x60) != *(byte *)(param_1 + 0x61)) {
    *(byte *)(*(int *)(param_1 + 100) + 0x44) =
         *(byte *)(param_1 + 0x61) | *(byte *)(*(int *)(param_1 + 100) + 0x44) & 0xfe;
  }
  fn_002cb7ac(param_1,0);
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4) != -1) {
      piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      if (iVar3 < 4) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
        (**(code **)(*piVar2 + 0x14))(piVar2);
      }
      else {
        iVar1 = VectorSignedToFloat(DAT_00895f40,(byte)(in_fpscr >> 0x16) & 3);
        piVar2[4] = iVar1;
        (**(code **)(*piVar2 + 0x14))(piVar2);
        uVar4 = fn_00176970(piVar2);
        iVar1 = DAT_00895f3c;
        if (DAT_00895f3c == 0) {
          fn_00300f74(DAT_00895f40 + 1,uVar4);
          DAT_00895f40 = extraout_r1;
        }
        fn_00300f74(iVar1 + 1,DAT_00895f38);
        DAT_00895f3c = extraout_r1_00;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  fn_002cb664(param_1);
  return;
}



void fn_002cba5c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  fn_00151954(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc));
  fn_0068af3c(param_1);
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) != -1) {
      if (3 < iVar1) {
        DAT_00895f38 = DAT_00895f38 + -1;
      }
      fn_00159f34(*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4) = 0xffffffff;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



void fn_002cb84c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),DAT_00895f44,&DAT_002cba4c,1,1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    uVar1 = fn_001c8abc(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                         DAT_00895f48);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  iVar5 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar5 * 4) == -1) {
      uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x14),(&DAT_00895f58)[iVar5],
                           *(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5 * 4) = uVar1;
      piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14),uVar1);
      if (iVar5 < 4) {
        (**(code **)(*piVar2 + 0x50))(piVar2,1);
      }
      else {
        iVar3 = VectorSignedToFloat(DAT_00895f40,(byte)(in_fpscr >> 0x16) & 3);
        piVar2[4] = iVar3;
        DAT_00895f38 = DAT_00895f38 + 1;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = *(int **)(iVar5 + 0x10);
  *(int **)(param_1 + 100) = piVar2;
  fn_0018a69c(*(undefined4 *)(param_1 + 0x30),piVar2);
  iVar5 = 0;
  do {
    iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,(&DAT_00895f88)[iVar5],1);
    *(int *)(*(int *)(param_1 + 0x68) + iVar5 * 4) = iVar3;
    if (7 < iVar5 - 0x22U) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x2a);
  iVar5 = *(int *)(param_1 + 100);
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 0xc);
  }
  if (iVar5 != 0 && iVar3 != 0) {
    fn_00151954();
    fn_0018a69c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 100));
  }
  fn_002cb584(param_1,1);
  iVar5 = *(int *)(param_1 + 100);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar5 + 0x20) = uVar1;
  *(undefined4 *)(iVar5 + 0x24) = uVar4;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  *(byte *)(*(int *)(param_1 + 100) + 0x44) =
       *(byte *)(param_1 + 0x61) | *(byte *)(*(int *)(param_1 + 100) + 0x44) & 0xfe;
  fn_002cb7ac(param_1,1);
  fn_002cb664(param_1);
  *(undefined1 *)(param_1 + 0x10) = 1;
  fn_0068aeac(param_1,param_2);
  return;
}



void fn_002cb7ac(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)*(char *)(param_1 + 99);
  if (param_2 == 0) {
    param_3 = (int)*(char *)(param_1 + 0x62);
  }
  if (param_2 != 0 || param_3 != iVar2) {
    if (iVar2 == -1) {
      *(byte *)(**(int **)(param_1 + 0x68) + 0x44) =
           *(byte *)(**(int **)(param_1 + 0x68) + 0x44) & 0xfe;
      iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 4);
      bVar1 = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    else {
      iVar3 = **(int **)(param_1 + 0x68);
      *(byte *)(iVar3 + 0x44) = iVar2 != 0 | *(byte *)(iVar3 + 0x44) & 0xfe;
      iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 4);
      bVar1 = iVar2 == 0 | *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    *(byte *)(iVar3 + 0x44) = bVar1;
  }
  return;
}



void fn_002cb664(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x35);
  }
  if (((*(float *)(param_1 + 0x38) != *(float *)(param_1 + 0x44)) ||
      (*(float *)(param_1 + 0x3c) != *(float *)(param_1 + 0x48))) ||
     (*(float *)(param_1 + 0x40) != *(float *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x4c);
  }
  if ((*(float *)(param_1 + 0x50) != *(float *)(param_1 + 0x58)) ||
     (*(float *)(param_1 + 0x54) != *(float *)(param_1 + 0x5c))) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
  }
  if (*(char *)(param_1 + 0x60) != *(char *)(param_1 + 0x61)) {
    *(char *)(param_1 + 0x60) = *(char *)(param_1 + 0x61);
  }
  if (*(char *)(param_1 + 0x62) != *(char *)(param_1 + 99)) {
    *(char *)(param_1 + 0x62) = *(char *)(param_1 + 99);
  }
  return;
}



void fn_002cb584(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint in_fpscr;
  
  bVar2 = param_2 == 0;
  iVar1 = (int)*(char *)(param_1 + 0x35);
  if (bVar2) {
    param_2 = (int)*(char *)(param_1 + 0x34);
  }
  if (((bVar2 && param_2 == iVar1) &&
      (in_fpscr = in_fpscr & 0xfffffff, *(float *)(param_1 + 0x50) == *(float *)(param_1 + 0x58)))
     && (*(float *)(param_1 + 0x54) == *(float *)(param_1 + 0x5c))) {
    return;
  }
  if (iVar1 == -1) {
    fn_002cb728(param_1,0x22);
    fn_002cb728(param_1,0x26);
    return;
  }
  VectorSignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
  fn_002cb728(param_1,0x22);
  fn_002cb728(param_1,0x26);
  return;
}



void fn_002cb728(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + param_2 * 4);
  fVar3 = *(float *)(iVar1 + 0x1c);
  fVar5 = *(float *)(iVar1 + 0x20);
  fVar4 = fVar3 + in_s0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + (param_2 + 1) * 4);
  fVar2 = fVar5 - in_s1;
  *(float *)(iVar1 + 0x1c) = fVar4;
  *(float *)(iVar1 + 0x20) = fVar5;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + (param_2 + 2) * 4);
  *(float *)(iVar1 + 0x1c) = fVar3;
  *(float *)(iVar1 + 0x20) = fVar2;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + (param_2 + 3) * 4);
  *(float *)(iVar1 + 0x1c) = fVar4;
  *(float *)(iVar1 + 0x20) = fVar2;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}


