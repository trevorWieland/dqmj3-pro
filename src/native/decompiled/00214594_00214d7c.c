#include "00214594_00214d7c.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_00214d7c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x4e) & 4) != 0) {
    return;
  }
  if ((char)param_1[0x16] == '\0') {
LAB_00214de8:
    (**(code **)(*param_1 + 0x5c))(param_1,0);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x158))(param_1);
    if (iVar1 == 0) {
      uVar2 = fn_006f7a5c(DAT_008977e0);
      iVar1 = fn_006a9300(uVar2,param_1);
      if (iVar1 == 0) goto LAB_00214de8;
    }
    (**(code **)(*param_1 + 0x5c))(param_1,1);
  }
  if (((*(char *)((int)param_1 + 0x5a) == '\0') && (0x461c3fff < param_1[99])) ||
     ((float)param_1[0x3e] == 0.0)) {
    (**(code **)(*param_1 + 0x58))(param_1,0);
    iVar1 = param_1[0x39];
    if (iVar1 == 0) goto LAB_00214e60;
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1,1);
    fn_001da640(param_1);
    iVar1 = param_1[0x39];
    if (iVar1 == 0) goto LAB_00214e60;
    uVar2 = 1;
  }
  fn_005ef16c(iVar1,uVar2);
LAB_00214e60:
  uVar3 = 0;
  do {
    if ((param_1[uVar3 * 4 + 0x7b] != -1) &&
       (fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[uVar3 * 4 + 0x7b],
                     (*(byte *)((int)param_1 + 0x59) & *(byte *)((int)param_1 + 0x5a)) != 0),
       *(char *)((int)param_1 + 0x59) != '\0')) {
      fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[uVar3 * 4 + 0x7b]);
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x10);
  return;
}



void fn_00214c4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar1 + 0x1ec) == -1) {
    uVar2 = fn_00215b58(param_1);
    fn_00214c94(param_1,uVar2,param_3,param_4,iVar1 + 0x1e8);
  }
  return;
}



int fn_00214c94(int *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  
  *param_5 = param_2;
  param_5[3] = param_3;
  if (param_1[0x39] != 0) {
    fVar4 = 1.0;
    if (param_4 == 0) {
      param_5[2] = 0x3f800000;
    }
    else {
      fn_002cd59c((int)*(char *)((int)param_1 + 0x1be));
      fVar3 = in_s0;
      (**(code **)(*param_1 + 0x1cc))(param_1);
      in_s0 = in_s0 * fVar3;
      if ((*param_5 - 0x7d14U < 2) && ((int)in_s0 < 0x3f800000)) {
        in_s0 = fVar4 - (fVar4 - in_s0) * 0.2;
      }
      param_5[2] = (int)in_s0;
    }
  }
  uVar1 = fn_0017fde4(param_1[0x39]);
  iVar2 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),*param_5,uVar1,param_5[3]);
  param_5[1] = iVar2;
  fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),iVar2);
  return param_5[1];
}



void fn_00214774(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  float in_s0;
  int local_28;
  int local_24 [3];
  
  bVar6 = *(char *)(DAT_008977e0 + 0x170) == '\x01';
  cVar1 = '\x01';
  if (!bVar6) {
    cVar1 = (char)param_1[0x16];
  }
  if (bVar6 || cVar1 == '\0') {
    return;
  }
  if (0 < param_1[100]) {
    param_1[100] = param_1[100] + -1;
  }
  if (0 < param_1[0x65]) {
    param_1[0x65] = param_1[0x65] + -1;
  }
  (**(code **)(*param_1 + 0x200))(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  iVar2 = fn_00341260(0xffffffff);
  iVar3 = fn_006f7a30(DAT_008977e0);
  if (iVar3 != 0) goto LAB_002149c8;
  fn_006f7a84(DAT_008977e0);
  uVar4 = fn_006aae90();
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = param_1[0xe7];
  }
  if ((!bVar6 || (uVar4 & 0x800) != 0) || (iVar3 = param_1[2], iVar3 == -1)) goto LAB_002149c8;
  uVar4 = (**(code **)(*param_1 + 0x70))(param_1,iVar3);
  if (iVar3 == 0) {
    if ((uVar4 == 3 || uVar4 == 4) || uVar4 == 5) goto LAB_002149c8;
  }
  else if (iVar3 == 1) {
    bVar6 = uVar4 == 0xe;
    if (bVar6) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x59);
    }
    if (bVar6 && uVar4 == 0) goto LAB_002149c8;
  }
  else if (iVar3 == 2) {
    if (uVar4 == 0x16) {
LAB_002148c0:
      fn_006b1130(&local_28,param_1);
      if ((((local_28 == 3) && (0x1e < local_24[0])) && (local_24[0] < 0x23)) &&
         (iVar3 = (**(code **)(*param_1 + 0x178))(param_1), iVar3 == 0)) goto LAB_002149c8;
    }
    else if ((int)uVar4 < 0x17) {
      if (uVar4 == 7 || uVar4 == 8) goto LAB_002149c8;
      if (uVar4 == 0x14 || uVar4 == 0x15) goto LAB_002148c0;
    }
    else if ((uVar4 == 0x18 || uVar4 == 0x1a) || (uVar4 == 0x20 || uVar4 == 0x21))
    goto LAB_002149c8;
  }
  iVar3 = (**(code **)(*param_1 + 0x144))(param_1,iVar2);
  if (iVar3 != 0) {
    if (iVar2 == 0) {
      fn_006f7a84(DAT_008977e0);
      iVar2 = fn_006aa5d8();
      if (iVar2 != 0) {
        fn_006f7a84(DAT_008977e0);
        fn_001ddb20();
      }
      (**(code **)(*(int *)param_1[0x66] + 8))((int *)param_1[0x66],0);
    }
    else {
      fn_00683320(param_1,0xb,0);
      iVar2 = fn_006f7a84(DAT_008977e0);
      if ((*(int *)(iVar2 + 0x44c) != 0) ||
         (iVar2 = fn_006f7a84(DAT_008977e0), *(int *)(iVar2 + 0x450) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      cVar1 = *(char *)((int)param_1 + 0x1be);
      uVar5 = fn_006f7a84(DAT_008977e0);
      fn_001e483c(uVar5,(int)cVar1);
    }
  }
LAB_002149c8:
  if ((((char)param_1[0x44] == '\x01' || (char)param_1[0x44] == '\x06') &&
      (*(char *)((int)param_1 + 0x59) != '\0')) && (iVar2 = fn_006ec1d8(param_1[0x39]), iVar2 != 0)
     ) {
    iVar2 = (**(code **)(*param_1 + 0x100))(param_1);
    if (iVar2 != 0) {
      in_s0 = 250.0;
      iVar2 = fn_001d9a94(param_1,&local_28,local_24);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    fn_006a9984(param_1);
    fn_006fa358();
    uVar7 = (undefined1)(int)in_s0;
  }
  else {
    uVar7 = 0xff;
  }
  *(undefined1 *)((int)param_1 + 0x1bf) = uVar7;
  iVar2 = fn_006f7358(DAT_008977e0);
  if ((iVar2 != 0) || (iVar2 = fn_00242b6c((int)*(short *)((int)param_1 + 0x16a)), iVar2 != 0)) {
    return;
  }
  iVar2 = fn_006a99b0(param_1);
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x130))(param_1), iVar2 != 0)) {
    iVar2 = fn_006a99b0(param_1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = (**(code **)(*param_1 + 0x130))(param_1);
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*param_1 + 300))(param_1,0);
  }
  else {
    (**(code **)(*param_1 + 300))(param_1,1);
  }
  uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00214bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))(param_1,uVar5,4,1);
  return;
}



void fn_0021472c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  uVar2 = (**(code **)(*piVar1 + 0x90))();
  iVar3 = fn_003b2730(uVar2,(int)*(short *)(param_1 + 0x168));
  uVar2 = VectorSignedToFloat((int)*(short *)(iVar3 + 0x3a),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  return;
}



undefined4 fn_00214640(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x78))(piVar1,param_2);
  if (((iVar2 == 0) || (iVar2 = fn_002173e0(param_1), iVar2 == 0)) || ((char)param_1[1] != '\0')) {
    return 0;
  }
  if (param_1[0x73] != -1 && param_1[0x73] != param_2) {
    piVar1 = (int *)fn_006f7508(DAT_008977e0);
    iVar3 = (**(code **)(*piVar1 + 0x78))(piVar1,param_1[0x73]);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1cc) == param_1[0x4f])) {
      *(undefined4 *)(iVar3 + 0x1cc) = 0xffffffff;
    }
  }
  param_1[0x73] = param_2;
  (**(code **)(*param_1 + 0x1dc))(param_1,param_3,param_4,0);
  param_1[0x72] = (int)*(short *)(iVar2 + 6);
  if ((char)param_1[1] == '\0') {
    param_1[3] = 2;
  }
  param_1[0x65] = 0x3c;
  return 1;
}



void fn_00214594(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3a0);
  if (piVar1 != (int *)0x0) {
    svc_0x24();
    if (*piVar1 < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(piVar1 + 1) = 1;
    piVar1 = *(int **)(param_1 + 0x3a0);
    fn_0015e304(piVar1);
    if (*piVar1 != 0) {
      svc_0x23();
      *piVar1 = 0;
    }
    piVar1 = *(int **)(param_1 + 0x3a0);
    if (piVar1 != (int *)0x0) {
      fn_0015e304(piVar1);
      if (*piVar1 != 0) {
        svc_0x23();
        *piVar1 = 0;
      }
      fn_002feef8(piVar1);
      *(undefined4 *)(param_1 + 0x3a0) = 0;
    }
    if (*(int *)(param_1 + 0x3a4) != 0) {
      fn_002feef8();
      *(undefined4 *)(param_1 + 0x3a4) = 0;
    }
  }
  return;
}


