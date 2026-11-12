#include "00361cdc_00362448.h"



undefined4 fn_00362448(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (((*(char *)(param_2 + 0xdc) == '\0') && ((char)param_1[0x16] != '\0')) && (param_1[0x5a] == 0)
     ) {
    fVar4 = *(float *)(param_2 + 0x20) - (float)param_1[8];
    fVar2 = *(float *)(param_2 + 0x24) - (float)param_1[9];
    fVar3 = *(float *)(param_2 + 0x28) - (float)param_1[10];
    fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar2 = *(float *)(*(int *)(iVar1 + 0x100) + 0xc) + 24.0;
    if (fVar3 <= fVar2 * fVar2) {
      if (param_1[0x5a] == 0) {
        (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      return 1;
    }
  }
  return 0;
}



void fn_003623cc(int *param_1)

{
  int iVar1;
  
  fn_001db0c4();
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 != 0) {
        param_1[0x5a] = 2;
      }
    }
    else if (iVar1 == 2) {
      param_1[0x5a] = 3;
      (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00362424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x54))(param_1,0);
      return;
    }
  }
  return;
}



undefined4 fn_003622e4(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_001d99a0(param_1,param_2,0);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  fn_00279bbc(uVar2,param_2 + 1);
  param_1[0x4e] = param_1[0x4e] | 0x20;
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  param_1[0x5a] = 0;
  fn_001d96a0(param_1,&DAT_007c1138);
  param_1[0x4e] = param_1[0x4e] | 8;
  (**(code **)(*param_1 + 0x44))(param_1,0,4);
  (**(code **)(*param_1 + 0x20))(param_1);
  return uVar1;
}



void fn_003622bc(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_0036227c(undefined4 *param_1)

{
  *param_1 = &DAT_00826f3c;
  if ((int *)param_1[0x70] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x70] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_0036222c(int param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x58);
  fn_001dbb48();
  if (((int)cVar1 & ~param_2) != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0xe8) != -1) {
      fn_001daac0(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_003621dc(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = (char)param_1[0x6e];
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = (char)param_1[0x67];
  }
  if (bVar4 && cVar1 == '\x02') {
    iVar3 = (**(code **)(*param_1 + 0x134))(param_1);
    uVar2 = 0;
    if (iVar3 != 0) {
      fn_001eac78(param_2);
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x6e) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00361f80(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_94 [128];
  undefined1 auStack_2 [2];
  
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x3c))();
  if ((iVar3 == 0) || (1 < *(byte *)(DAT_008977e0 + 0x170))) {
    if (*(int *)(param_1 + 0x1a4) < 1) {
      fn_001db0c0(param_1);
      cVar1 = *(char *)(param_1 + 0x19c);
      if (cVar1 == '\0') {
        if ((*(int *)(param_1 + 0x1a0) != -1) &&
           (iVar3 = *(int *)(param_1 + 0x1ac) + 1, *(int *)(param_1 + 0x1ac) = iVar3,
           *(int *)(param_1 + 0x1a0) < iVar3)) {
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          *(undefined1 *)(param_1 + 0x19c) = 1;
          fn_001da39c(param_1);
          fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x1b0));
          fn_0023e2ac(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8));
          fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8),
                       param_1 + 0x38);
          iVar3 = fn_006f7a20(DAT_008977e0);
          if ((iVar3 == 0) &&
             ((*(char *)(param_1 + 0x17c) == '\b' || (*(char *)(param_1 + 0x17c) == '\t')))) {
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
        }
      }
      else if (cVar1 == '\x01') {
        iVar3 = *(int *)(param_1 + 0x1ac) + 1;
        *(int *)(param_1 + 0x1ac) = iVar3;
        if (0x1e < iVar3) {
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          *(undefined1 *)(param_1 + 0x19c) = 2;
          fn_001da39c(param_1);
          fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x1b4));
          fn_0023e2ac(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8));
          fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8),
                       param_1 + 0x38);
        }
      }
      else if ((cVar1 == '\x02') &&
              (iVar3 = *(int *)(param_1 + 0x1ac) + 1, *(int *)(param_1 + 0x1ac) = iVar3,
              0x32 < iVar3)) {
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        fn_001daac0(param_1);
        *(undefined1 *)(param_1 + 0x19c) = 0;
        *(undefined1 *)(param_1 + 0x1b8) = 0;
        *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x1bc) != -1) {
        fn_001d9a94(param_1,auStack_94 + 0x84,auStack_94 + 0x88);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      return;
    }
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + -1;
  }
  return;
}



void fn_00361ec8(int param_1)

{
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  fn_001daaf8();
  if (*(char *)(param_1 + 0x17c) == '\b') {
    local_28 = 0x41f00000;
    local_30 = 0x41f00000;
    local_2c = 30.0;
  }
  else if (*(char *)(param_1 + 0x17c) == '\t') {
    local_28 = 0x41a00000;
    local_30 = 0x41a00000;
    local_2c = 80.0;
  }
  local_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  local_20 = *(float *)(param_1 + 0x24) + local_2c;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1c0),&local_30,&local_18,param_1 + 0x2c,&local_24
              );
  return;
}



undefined4 fn_00361e74(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002113c8();
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfffffff7;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b0));
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b4));
  return uVar1;
}



void fn_00361e38(int param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b0));
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b4));
  fn_001d9f9c(param_1);
  return;
}



void fn_00361e2c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  return;
}



void fn_00361d90(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x134))(param_1);
  if (iVar1 == 0) {
    return;
  }
  fn_001ead4c(param_2,0);
  if ((char)param_1[0x67] == '\0') {
    *(undefined1 *)(param_1 + 0x67) = 1;
    fn_001da39c(param_1);
    fn_001d9f6c(param_1,param_1[0x6a]);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00361d2c(int param_1)

{
  int iVar1;
  
  fn_001db0c0();
  if (((*(char *)(param_1 + 0x19c) == '\0') || (*(char *)(param_1 + 0x19c) != '\x01')) ||
     (iVar1 = fn_006b4cd0(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8)),
     iVar1 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  fn_001da39c(param_1);
  fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x1a4));
  return;
}



void fn_00361cdc(int param_1,undefined4 param_2)

{
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a4));
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x1a4));
  fn_002113c8(param_1,param_2);
  return;
}


