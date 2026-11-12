#include "001de918_001e0f94.h"



undefined4 fn_001e0f94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float in_s0;
  float in_s1;
  float fVar3;
  
  if (((1 < *(byte *)(DAT_008977e0 + 0x170)) && (iVar1 = fn_006f7358(), iVar1 == 0)) &&
     (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0')) {
    if (*(char *)(param_1 + 0x22d) == '\v') {
      fn_006f751c();
      iVar1 = fn_006c178c();
      if (iVar1 == 0) {
        fVar3 = 100.0;
        fn_006f6988(param_1 + 0x460);
        if (*(float *)(param_1 + 0x24) < in_s1 - fVar3) {
          fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0xe,0);
          fn_006f751c(DAT_008977e0);
          fn_00341a14();
          return 1;
        }
      }
    }
    else {
      uVar2 = *(undefined4 *)(DAT_008977e0 + 0xa8);
      fn_006afb84(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar2);
      fVar3 = in_s0;
      fn_006afad4(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar2);
      if (((*(float *)(param_1 + 0x24) < fVar3) || (in_s0 < ABS(*(float *)(param_1 + 0x20)))) ||
         (in_s0 < ABS(*(float *)(param_1 + 0x28)))) {
        if ((*(int *)(param_1 + 0x42c) == 0) ||
           (iVar1 = fn_006b6178(*(int *)(param_1 + 0x42c),param_1 + 0x20), iVar1 == 0)) {
          uVar2 = fn_006f7a0c(DAT_008977e0);
          iVar1 = fn_006f6394(uVar2,param_1 + 0x20);
          *(int *)(param_1 + 0x42c) = iVar1;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x42c);
        }
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
      }
    }
  }
  return 0;
}



byte fn_001e0e24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int *piVar4;
  bool bVar5;
  
  bVar3 = 0;
  iVar1 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
  if (iVar1 != 0) {
    return 0;
  }
  bVar5 = false;
  piVar4 = (int *)0x0;
  iVar1 = fn_006aba20(param_1);
  if (iVar1 == 0) {
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_002ff1fc(uVar2,param_1);
    if (iVar1 == 0) {
      uVar2 = fn_006f7a70(DAT_008977e0);
      piVar4 = (int *)fn_003003f8(uVar2,param_1);
      if (((piVar4 == (int *)0x0) || (bVar5 = (char)piVar4[0x37] == '\x06', bVar5)) ||
         (iVar1 = (**(code **)(*piVar4 + 0xbc))(piVar4,param_1), iVar1 == 0)) {
        uVar2 = fn_006f7a70(DAT_008977e0);
        iVar1 = fn_002fecf4(uVar2,param_1);
        if (iVar1 == 0) {
          uVar2 = fn_006f7a70(DAT_008977e0);
          iVar1 = fn_002ff33c(uVar2,param_1);
          if (iVar1 == 0) goto LAB_001e0f38;
        }
        bVar5 = false;
        bVar3 = 1;
        goto LAB_001e0f6c;
      }
    }
  }
  else {
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_002fecf4(uVar2,param_1);
    if (iVar1 == 0) {
LAB_001e0f38:
      if (((*(char *)(param_1 + 0x22d) == '\v') && (*(int *)(param_1 + 0x438) != 5)) ||
         (iVar1 = fn_001f1ab0(*(undefined4 *)(DAT_008977e0 + 0x30),param_1), iVar1 == 0))
      goto LAB_001e0f6c;
    }
  }
  bVar3 = 1;
LAB_001e0f6c:
  if ((bVar5 & ~bVar3) != 0) {
    (**(code **)(*piVar4 + 0xbc))(piVar4,param_1);
  }
  return bVar3;
}



void fn_001e0d9c(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_005deb64(*(int *)(param_1 + 0xe4),param_1 + 0x20,param_1 + 0x2c,param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  fn_0023e574(*(undefined4 *)(DAT_008977e0 + 0x2c));
  return;
}



void fn_001dfcf8(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_1 + 0x44);
  if ((char)param_1[0x82] == -1) {
    if (param_1[0xde] == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = 0;
    }
    (*pcVar2)(param_1,uVar1,4,0);
  }
  else if (*(char *)(param_1[100] + 0x3c) == '\0') {
    (*pcVar2)(param_1,0,4,0);
  }
  else {
    (*pcVar2)(param_1,4);
  }
  fn_001ea890(param_1,3);
  return;
}



void fn_001dfa3c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((0x15 < iVar1) && (iVar1 = (**(code **)(*param_1 + 0x50))(param_1), iVar1 < 0x34)) {
    iVar1 = fn_006a99b0(param_1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar1 = fn_006a9938(param_1);
    if ((iVar1 != 0) && (iVar1 = fn_006a7bf8(param_1,param_1[0xe2]), iVar1 != 0)) {
      fn_001dcc90(param_1,param_1[0xac],param_1[0x9c]);
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  switch(uVar2) {
  case 1:
  case 6:
    iVar1 = fn_006a9938(param_1);
    if ((iVar1 != 0) && (iVar1 = fn_006a7bf8(param_1,param_1[0xe2]), iVar1 != 0)) {
      fn_001dcc90(param_1,param_1[0xac],param_1[0x9c]);
      return;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    iVar1 = fn_006a99b0(param_1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (*(char *)(param_1[100] + 0x3c) != '\0') {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    break;
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
    iVar1 = fn_006a7bf8(param_1,param_1[0xe2]);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    return;
  case 0x11:
  case 0x14:
    iVar1 = fn_006f7a0c(DAT_008977e0);
    uVar2 = fn_006f7bbc(*(undefined4 *)(iVar1 + 0x3c),param_1[0x76]);
    fn_001e3404(param_1,auStack_28,uVar2);
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    fn_001da8fc(param_1,auStack_1c,auStack_70,auStack_28,uVar2);
    iVar1 = fn_006a9938(param_1);
    if ((iVar1 != 0) && (iVar1 = fn_006a7bf8(param_1,param_1[0xe2]), iVar1 != 0)) {
      fn_001dcc90(param_1,local_2c,local_6c);
    }
  }
  return;
}



void fn_001deef0(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 0x454) + param_2;
  *(int *)(param_1 + 0x454) = param_2;
  if (3 < param_2) {
    param_2 = 3;
  }
  *(int *)(param_1 + 0x454) = param_2;
  iVar1 = fn_006f751c(DAT_008977e0);
  fn_00342010(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(param_1 + 0x454));
  return;
}



void fn_001deb30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar7 = *(int *)(param_1 + 0x430);
  if (iVar7 < 1) goto LAB_001debe8;
  iVar8 = *(int *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8);
  uVar6 = *(undefined4 *)(DAT_00897804 + 8);
  uVar9 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar2 = fn_002aab5c();
  if (1 < iVar2) {
    iVar7 = iVar7 * iVar2;
  }
  if (*(char *)(param_1 + 0x420) == '\x03') {
    if (iVar2 == 0) {
      iVar2 = 2;
    }
    else {
      iVar2 = iVar2 << 1;
    }
  }
  iVar3 = fn_006b6374(uVar6);
  iVar2 = fn_001e4fe8(param_1,iVar7,uVar9,iVar2);
  if (iVar2 == 0) goto LAB_001debe8;
  if (iVar3 == 3) {
    iVar2 = fn_006b8478(uVar9);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        piVar4 = (int *)fn_0028b074(uVar9,iVar3);
        if (((piVar4 != (int *)0x0) && (uVar5 = fn_0024f870(), *piVar4 != iVar8)) &&
           ((*(byte *)(piVar4 + 0x10) & 2) == 0)) {
          fn_002469ac(piVar4,iVar7,uVar5);
        }
        iVar3 = (int)(short)((short)iVar3 + 1);
      } while (iVar3 < iVar2);
    }
LAB_001debd0:
    fn_0025b504(uVar6,1);
  }
  else if (iVar3 != 0) goto LAB_001debd0;
  fn_002425b4(uVar1,0);
LAB_001debe8:
  *(undefined4 *)(param_1 + 0x430) = 0;
  return;
}



void fn_001de97c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x408) == 0) goto LAB_001deafc;
  if ((*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') &&
     (iVar1 = fn_006a99b0(param_1), iVar1 == 0)) {
    if ((*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') &&
       ((iVar1 = fn_006a9938(param_1), iVar1 != 0 || (iVar1 = fn_006a99b0(param_1), iVar1 != 0))))
    {
      iVar1 = *(int *)(param_1 + 0x2b0);
      uVar4 = *(undefined4 *)(param_1 + 0x270);
      if (iVar1 != 0) {
        uVar2 = fn_006f7388(DAT_008977e0);
        iVar1 = fn_006b4240(uVar2,iVar1);
        if ((iVar1 != 0) &&
           ((iVar1 = fn_006bab38(iVar1,(int)(short)uVar4), iVar1 == 10 || iVar1 == 0xc ||
            (iVar1 == 0xd || iVar1 == 0xe)))) goto LAB_001deaf4;
      }
    }
    if (*(int *)(param_1 + 0x408) != 0) {
      iVar3 = -1;
      uVar2 = *(undefined4 *)(DAT_008977e0 + 0x2c);
      uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
      iVar1 = *(int *)(param_1 + 0x408);
      if (iVar1 == 1) {
        iVar3 = 0x80f5;
      }
      else if (iVar1 == 2) {
        iVar3 = 0x80f6;
      }
      else if (iVar1 == 3) {
        iVar3 = 0x80f7;
      }
      if ((*(int *)(param_1 + 0x40c) != -1) && (iVar1 = fn_006b4cbc(uVar2), iVar1 == iVar3)) {
        return;
      }
      if (*(int *)(param_1 + 0x40c) != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        *(undefined4 *)(param_1 + 0x40c) = 0xffffffff;
      }
      uVar4 = fn_0016a9b0(uVar2,iVar3,uVar4,2);
      *(undefined4 *)(param_1 + 0x40c) = uVar4;
      fn_001e2904(param_1,uVar4,0xffffffff);
      return;
    }
  }
  else {
LAB_001deaf4:
    *(undefined4 *)(param_1 + 0x408) = 0;
  }
LAB_001deafc:
  if (*(int *)(param_1 + 0x40c) != -1) {
    fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x40c),1);
    *(undefined4 *)(param_1 + 0x40c) = 0xffffffff;
  }
  return;
}



void fn_001de918(int param_1)

{
  fn_001d9bc8();
  if (*(int *)(param_1 + 0x40c) != -1) {
    fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
  }
  if (*(int *)(param_1 + 0x414) == -1) {
    return;
  }
  fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
  return;
}


