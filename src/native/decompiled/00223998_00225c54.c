#include "00223998_00225c54.h"



void fn_00225c54(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x90] != '\0') {
    return;
  }
  switch((char)param_1[0x83]) {
  case '\x02':
  case '\x03':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
    break;
  default:
    switch(*(undefined1 *)((int)param_1 + 0x20e)) {
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      break;
    default:
      fn_0031975c(param_1[0x7d]);
    }
  }
  iVar2 = fn_006f7358(DAT_008977e0);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = (char)param_1[0x83];
  }
  if (iVar2 != 0 && cVar1 != '\x0e') {
    iVar2 = fn_006f7358(DAT_008977e0);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = (char)param_1[0x83];
    }
    if (iVar2 != 0 && cVar1 != '\x0e') {
      param_1[0x4e] = param_1[0x4e] | 4;
      (**(code **)(*param_1 + 0x58))(param_1,0);
      if ((char)param_1[0x65] != -1) {
        fn_00223e50(param_1);
      }
      fn_00224680(param_1,0);
      *(undefined1 *)((int)param_1 + 0x20e) = 0xe;
    }
  }
  fn_00224908(param_1,1);
  fn_00224704(param_1);
  fn_00222460(param_1);
  if (((char)param_1[0x16] != '\0') &&
     (iVar2 = fn_006f7a84(DAT_008977e0), (char)param_1[0x91] != *(char *)(iVar2 + 0x58))) {
    fn_00221500(param_1);
  }
  if ((char)param_1[0x91] != '\0') {
    iVar2 = fn_006f7358(DAT_008977e0);
    if (iVar2 != 0) {
      *(undefined1 *)((int)param_1 + 0x242) = 0;
    }
    uVar3 = fn_006f7a5c(DAT_008977e0);
    iVar2 = fn_006a91c4(uVar3,param_1 + 8);
    if (*(char *)((int)param_1 + 0x242) != iVar2) {
      fn_00221500(param_1,iVar2);
      *(char *)((int)param_1 + 0x242) = (char)iVar2;
    }
  }
  if ((char)param_1[0x65] != -1) {
    iVar2 = fn_006ec1d8(param_1[0x61]);
    if (iVar2 != 0) {
      if (*(char *)((int)param_1 + 0x241) == '\0') {
        if (*(char *)((int)param_1 + 0x242) != '\0') {
          *(undefined1 *)((int)param_1 + 0x241) = 1;
        }
      }
      else {
        fn_005ef16c(param_1[0x61],0);
      }
      goto LAB_00225ea4;
    }
    if ((char)param_1[0x65] != -1) goto LAB_00225ea4;
  }
  iVar2 = fn_006ec1d8(param_1[0x61]);
  if (iVar2 == 0) {
    fn_005ef16c(param_1[0x61],1);
    *(undefined1 *)((int)param_1 + 0x241) = 0;
  }
LAB_00225ea4:
  fn_001db0c4(param_1);
  return;
}



void fn_00225b04(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  *(undefined1 *)(param_1 + 0x194) = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    if (param_2 != 0) {
      fn_00223e50(param_1);
    }
    fn_00223ff8(param_1,0,1);
  }
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x194) == -1) {
      fn_00226784(param_1,0xf,param_1 + 0x20);
      fn_00225a6c(param_1,0x10009cd);
    }
    else {
      fn_00226784(param_1,5,param_1 + 0x20);
      fn_00225a6c(param_1,0x10009ce);
    }
  }
  if (param_2 == 0) {
    return;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    fn_00223cd4(param_1);
    iVar1 = fn_00223ff8(param_1,1);
  }
  bVar3 = *(int *)(param_1 + 400) != 0;
  if (bVar3) {
    iVar1 = (int)*(char *)(param_1 + 0x194);
  }
  if (bVar3 && iVar1 != -1) {
    iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar1 = (int)*(short *)(iVar1 + 0x1c);
  }
  else {
    iVar1 = 0;
  }
  uVar2 = fn_00242bd4(iVar1);
  fn_0022455c(param_1,*(undefined4 *)(param_1 + 0x180),uVar2,*(undefined4 *)(param_1 + 0x198));
  fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
  fn_00221828(param_1);
  fn_00259728(param_1 + 0x1c4,1);
  return;
}



void fn_00224704(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0xf8) < 0x3f800000) || (*(char *)(param_1 + 0x23c) == '\0')) {
    if (-1 < *(int *)(param_1 + 0x1c8)) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
    }
    if (-1 < *(int *)(param_1 + 0x1cc)) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      *(undefined4 *)(param_1 + 0x1cc) = 0xffffffff;
    }
  }
  else {
    switch(*(undefined1 *)(param_1 + 0x20c)) {
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      break;
    default:
      switch(*(undefined1 *)(param_1 + 0x20e)) {
      case 2:
      case 3:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        break;
      default:
        if ((*(int *)(param_1 + 0x1cc) < 0) &&
           (iVar1 = fn_006be78c(*(undefined4 *)(param_1 + 500)), iVar1 != 0)) {
          if (-1 < *(int *)(param_1 + 0x1c8)) {
            (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
            *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
          }
          iVar1 = fn_006f7358(DAT_008977e0);
          if (iVar1 == 0) {
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
            if (iVar1 != 1) {
              local_28 = 0x40400000;
              local_24 = 0x40c00000;
            }
            if (*(char *)(param_1 + 0x243) == '\0') {
              uVar2 = *(undefined4 *)(param_1 + 0x184);
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 0x17c);
            }
            uVar2 = fn_0017fde4(uVar2);
            uVar2 = fn_00179bfc(*(undefined4 *)(DAT_008977e0 + 0x2c),0x756c,uVar2,1,&local_2c);
            *(undefined4 *)(param_1 + 0x1cc) = uVar2;
            return;
          }
        }
      }
    }
  }
  return;
}



undefined4 fn_00224444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c,param_3,param_4,param_4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar4 = *(int **)(param_1 + 0x184);
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x184) = piVar2;
  }
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 1;
  uVar3 = fn_002266b4(param_1,1,param_2);
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0x184),uVar3,0);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x184));
    fn_0017fc28(uVar3,1);
    *(undefined4 *)(param_1 + 0xe0) = param_2;
    fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    uVar3 = fn_001caca8();
    fn_0022455c(param_1,*(undefined4 *)(param_1 + 0x184),uVar3,*(undefined4 *)(param_1 + 0xe0),1);
    iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar1 != 1) {
      uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x184));
      fn_002cd6b0(uVar3,1);
    }
    uVar3 = 1;
  }
  return uVar3;
}



void fn_00223a90(int *param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  if (-1 < param_1[0x72]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x72] = -1;
  }
  if (-1 < param_1[0x73]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x73] = -1;
  }
  fn_006f7a84(DAT_008977e0);
  fn_001ea9c0();
  piVar2 = (int *)fn_006f7a84(DAT_008977e0);
  iVar3 = fn_006a99b0(param_1[0x8a]);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  (**(code **)(*piVar2 + 0x44))(piVar2,uVar5,4,0);
  iVar3 = fn_006a9938(param_1);
  bVar6 = true;
  if (iVar3 == 0) {
    iVar3 = fn_006a99b0(param_1);
    bVar6 = iVar3 != 0;
    if (!bVar6) goto LAB_00223bf4;
  }
  fVar7 = *(float *)(param_2 + 0x20) - (float)param_1[8];
  fn_00525bd0();
  param_1[0x7b] = (int)(fVar7 * 0.024543693);
  fVar8 = ABS((float)param_1[0xc] - fVar7 * 0.024543693);
  fVar7 = 50.0;
  fn_0017fe34();
  if (fVar7 < fVar8) {
    iVar3 = fn_006a99b0(param_1);
    if (iVar3 == 0) {
      uVar5 = 6;
    }
    else {
      uVar5 = 5;
    }
    (**(code **)(*param_1 + 0x44))(param_1,uVar5,4,0);
  }
  fn_001c7160(param_1);
LAB_00223bf4:
  iVar3 = fn_00163d44(0);
  iVar4 = fn_00163d44(0x32);
  uVar5 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  if (((iVar3 == 0x32 && iVar4 == 0x10) &&
      (iVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar3 != 1)) &&
     (iVar3 = fn_00212310(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar5), iVar3 != 0)) {
    fn_00698fb8(DAT_008977e0,1);
    fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0x13,0);
    *(undefined1 *)((int)param_1 + 0x20e) = 9;
  }
  else {
    fn_006b2180(param_1);
    *(undefined1 *)((int)param_1 + 0x20e) = 2;
  }
  if (bVar6) {
    iVar3 = fn_006a99b0(param_1);
    if (iVar3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)((int)param_1 + 0x21e) = uVar1;
  }
  return;
}



void fn_00223998(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(DAT_008977e0 + 0x2c);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  iVar2 = fn_006b4cbc(uVar3,*(undefined4 *)(param_1 + 0x1c4));
  if ((iVar2 == param_2) || (fn_00259728(param_1 + 0x1c4,0), *(int *)(param_1 + 0x1c4) != -1)) {
    return;
  }
  uVar1 = fn_00179bfc(uVar3,param_2,uVar1,param_3);
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  if (param_5 == 0xffffffff) {
    if (*(char *)(param_1 + 0x194) == -1) {
      iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      param_5 = (uint)(iVar2 != 1);
    }
    else {
      param_5 = fn_0025988c(*(undefined4 *)(param_1 + 400));
    }
  }
  fn_002cd59c(param_5);
  fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
  return;
}


