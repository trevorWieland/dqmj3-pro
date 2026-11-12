#include "001dc088_001dcb88.h"



undefined4 fn_001dcb88(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_001e56f4();
  fn_001e5b80(param_1,1);
  fn_001ea9c0(param_1);
  iVar1 = fn_006f733c(DAT_008977e0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x44))(param_1,0,0,1);
  }
  else {
    (**(code **)(*param_1 + 0x44))(param_1,0x38);
  }
  iVar1 = param_1[0xac];
  iVar3 = param_1[0x9c];
  if (iVar1 != 0) {
    uVar2 = fn_006f7388(DAT_008977e0);
    iVar1 = fn_006b4240(uVar2,iVar1);
    if ((iVar1 != 0) && (iVar1 = fn_006bab38(iVar1,(int)(short)iVar3), iVar1 == 10 || iVar1 == 0xd)
       ) {
      fn_0024026c(param_1[0xd0]);
    }
  }
  iVar1 = fn_006a9938(param_1);
  if ((((iVar1 != 0) || (iVar1 = fn_006a99b0(param_1), iVar1 != 0)) ||
      (iVar1 = fn_006a9960(param_1), iVar1 != 0)) || (*(char *)(param_1[100] + 0x3c) != '\0')) {
    param_1[0x8a] = 0;
  }
  return 1;
}



void fn_001dcb00(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x261) = param_2;
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_001747e8();
    if (*(char *)(param_1 + 0x208) != -1) {
      fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
    }
    if ((*(char *)(param_1 + 0x1b0) != -1) &&
       (*(int *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x17c) != 0)) {
      fn_001747e8();
      return;
    }
  }
  return;
}



void fn_001dc9d8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1ec) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  }
  fn_00259728(param_1 + 0x1e8,1);
  if (-1 < *(int *)(param_1 + 0x300)) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  if (-1 < *(int *)(param_1 + 0x20c)) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
  }
  if (-1 < *(int *)(param_1 + 0x210)) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
  }
  if (*(int *)(param_1 + 0x40c) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x40c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1f0) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 500) = 0;
  uVar1 = 0;
  uVar2 = *(undefined4 *)(DAT_008977e0 + 0x2c);
  do {
    fn_0023d3f4(uVar2,(&DAT_007be740)[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x18);
  return;
}



void fn_001dc46c(int *param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if (param_2[1] == 0.0) {
    fn_006aa538(param_1,(int)(char)param_1[0x82]);
    fn_00242b0c();
  }
  fn_001747e8(param_1[0x39]);
  fVar3 = *param_2;
  bVar1 = fVar3 == fVar4;
  if (bVar1) {
    fVar3 = param_2[1];
  }
  bVar2 = false;
  if (bVar1 && (bVar1 && fVar3 == fVar4)) {
    fVar3 = param_2[2];
    bVar2 = fVar3 == fVar4;
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x44))(param_1,4,4,0);
    fn_001da640(param_1);
    return;
  }
  fn_006b4ef8(param_1[100]);
  if ((int)fVar3 < 0x3f800001) {
    (**(code **)(*param_1 + 0x44))(param_1,5,4,0);
    fn_001da640(param_1);
    return;
  }
  (**(code **)(*param_1 + 0x44))(param_1,2,8,0);
  fn_001da640(param_1);
  return;
}



void fn_001dc1e8(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = fn_006a99b0();
  if (iVar3 != 0) {
    param_1[0x8a] = 0;
  }
  iVar3 = fn_006aab6c(param_1);
  bVar1 = param_1[0x8a] < iVar3;
  cVar2 = *(char *)(param_1[100] + 0x3c);
  if (cVar2 == '\0') {
    iVar3 = fn_006a9960(param_1);
    if (((iVar3 != 0) || (iVar3 = fn_006aab6c(param_1), iVar3 != 1)) ||
       ((*(char *)(param_1[100] + 0x3c) == '\0' &&
        ((iVar3 = fn_006a9938(param_1), iVar3 != 0 || (iVar3 = fn_006a99b0(param_1), iVar3 != 0)))
        ))) goto LAB_001dc330;
  }
  else {
    fVar4 = (float)param_1[0x99] - ((float)param_1[9] + (float)param_1[0x43]);
    if (((uint)fVar4 < 0xbf000000) && ((int)fVar4 < 0x41800001)) {
      fn_001e1698(param_1);
      *(undefined4 *)(param_1[100] + 0x1c) = 0x41000000;
      *(undefined1 *)(param_1[100] + 0x3c) = 0;
      fn_0023f454(param_1[100]);
      param_1[0x4d] = param_1[0x4d] & 0xfffffffb;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  bVar1 = false;
LAB_001dc330:
  if (cVar2 != '\0') {
    fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
    fn_0023f040(param_1[100]);
  }
  if (!bVar1) {
    *(undefined1 *)(param_1 + 0xbf) = 0;
    return;
  }
  *(int *)(param_1[100] + 0x18) = param_1[0x109];
  fn_0023f040(param_1[100]);
  iVar3 = fn_006aab6c(param_1);
  if (param_1[0x8a] < iVar3) {
    param_1[0x8a] = param_1[0x8a] + 1;
  }
  iVar3 = fn_006a99b0(param_1);
  if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 0xf0))(param_1), iVar3 == 0)) {
    *(undefined1 *)((int)param_1 + 0x2fd) = 1;
  }
  *(undefined1 *)(param_1 + 0x100) = 1;
  if ((char)param_1[0x82] != -1) {
    fn_006aa538(param_1);
    fn_00242b4c();
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 * fn_001dc08c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *param_1 = &DAT_0081be7c;
  fn_002feca8(param_1[0x56]);
  param_1[0x56] = 0;
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 4))();
  }
  uVar5 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar3 = uVar5;
  if (uVar5 < uVar4) {
    iVar7 = 1;
    if (1 < (int)(uVar4 - uVar5) / 0xc + 1) {
      iVar1 = (int)(uVar4 - uVar5) >> 0x1f;
      uVar4 = (int)(uVar4 - uVar5) / 0xc + iVar1;
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)((uVar4 - iVar1) + 1));
    }
  }
  else {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0xc) {
    }
  }
  param_1[0x54] = uVar5;
  piVar2 = (int *)param_1[0x52];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x53];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
    uVar4 = extraout_r1;
  }
  uVar6 = param_1[0x40];
  uVar5 = param_1[0x41];
  uVar3 = uVar6;
  if (uVar6 < uVar5) {
    iVar7 = ((int)(uVar5 - uVar6) >> 4) + 1;
    if (1 < iVar7) {
      uVar3 = uVar5 - uVar6;
    }
    uVar4 = 1;
    if (1 < iVar7) {
      do {
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < ((int)uVar3 >> 4) + 1);
    }
  }
  else {
    for (; uVar3 != uVar5; uVar3 = uVar3 + 0x10) {
    }
  }
  param_1[0x41] = uVar6;
  piVar2 = (int *)param_1[0x3f];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x40];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar7 = 0;
  *param_1 = &DAT_0081bab4;
  do {
    iVar1 = iVar7 * 4;
    piVar2 = (int *)param_1[iVar1 + 0x1a];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = iVar7 + 1;
    param_1[iVar1 + 0x1a] = 0;
  } while (iVar7 < 8);
  *param_1 = &DAT_00850e30;
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0,uVar3,unaff_r4,in_lr);
  return param_1;
}



undefined4 * fn_001dc088(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *param_1 = &DAT_0081be7c;
  fn_002feca8(param_1[0x56]);
  param_1[0x56] = 0;
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 4))();
  }
  uVar5 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar3 = uVar5;
  if (uVar5 < uVar4) {
    iVar7 = 1;
    if (1 < (int)(uVar4 - uVar5) / 0xc + 1) {
      iVar1 = (int)(uVar4 - uVar5) >> 0x1f;
      uVar4 = (int)(uVar4 - uVar5) / 0xc + iVar1;
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)((uVar4 - iVar1) + 1));
    }
  }
  else {
    for (; uVar3 != uVar4; uVar3 = uVar3 + 0xc) {
    }
  }
  param_1[0x54] = uVar5;
  piVar2 = (int *)param_1[0x52];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x53];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
    uVar4 = extraout_r1;
  }
  uVar6 = param_1[0x40];
  uVar5 = param_1[0x41];
  uVar3 = uVar6;
  if (uVar6 < uVar5) {
    iVar7 = ((int)(uVar5 - uVar6) >> 4) + 1;
    if (1 < iVar7) {
      uVar3 = uVar5 - uVar6;
    }
    uVar4 = 1;
    if (1 < iVar7) {
      do {
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < ((int)uVar3 >> 4) + 1);
    }
  }
  else {
    for (; uVar3 != uVar5; uVar3 = uVar3 + 0x10) {
    }
  }
  param_1[0x41] = uVar6;
  piVar2 = (int *)param_1[0x3f];
  if (piVar2 != (int *)0x0) {
    uVar4 = param_1[0x40];
  }
  if (piVar2 != (int *)0x0 && uVar4 != 0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar7 = 0;
  *param_1 = &DAT_0081bab4;
  do {
    iVar1 = iVar7 * 4;
    piVar2 = (int *)param_1[iVar1 + 0x1a];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = iVar7 + 1;
    param_1[iVar1 + 0x1a] = 0;
  } while (iVar7 < 8);
  *param_1 = &DAT_00850e30;
  uVar3 = param_1[5];
  uVar4 = uVar3;
  if ((uint)param_1[6] < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[6]);
  }
  fn_001008c4(uVar3,(int)(param_1[7] - uVar3) >> 3,0,uVar3,unaff_r4,in_lr);
  return param_1;
}


