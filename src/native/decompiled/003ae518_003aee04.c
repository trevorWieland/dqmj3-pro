#include "003ae518_003aee04.h"



undefined4 fn_003aee04(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002113c8();
  param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
  (**(code **)(*param_1 + 0xd8))(param_1);
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x11d2a);
  return uVar1;
}



void fn_003aedd4(undefined4 param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x11d2a);
  fn_001d9f9c(param_1);
  return;
}



void fn_003aed3c(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x16];
  fn_001dbb48();
  if (((int)(char)iVar1 & ~param_2) != 0) {
    param_1[0x69] = param_1[0x6a];
    (**(code **)(*param_1 + 0x44))(param_1,0,4);
    param_1[0x68] = 0;
  }
  return;
}



undefined4 fn_003aebcc(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(char *)(param_2 + 0x22d) == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1);
    uVar1 = 0;
    if (iVar2 != 0) {
      local_18 = *(float *)(param_2 + 0x20) - (float)param_1[8];
      local_14 = *(float *)(param_2 + 0x24) - (float)param_1[9];
      local_10 = *(float *)(param_2 + 0x28) - (float)param_1[10];
      if ((local_18 == 0.0 && (local_18 == 0.0 && local_14 == 0.0)) && local_10 == 0.0) {
        local_18 = (float)param_1[0xb];
        local_14 = (float)param_1[0xc];
        local_10 = (float)param_1[0xd];
      }
      fVar3 = 1.0 / SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
      local_14 = local_14 * fVar3;
      local_18 = local_18 * fVar3;
      local_10 = local_10 * fVar3;
      fVar3 = 45.0;
      if (0.0 <= local_14) {
        fn_0017fe34();
      }
      else {
        fn_0017fe34();
        fVar3 = -fVar3;
      }
      local_14 = fVar3;
      fn_001e295c(param_2,5,&local_18);
      fn_006a9878(param_2,(char *)&DAT_003aed2c);
      if (param_1[0x6b] == -1) {
        iVar2 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x3e9);
        param_1[0x6b] = iVar2;
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_003ae944(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x3c))();
  if ((iVar2 != 0) && (*(byte *)(DAT_008977e0 + 0x170) < 2)) {
    return;
  }
  fn_001db0c0(param_1);
  if ((param_1[0x6b] != -1) &&
     (iVar2 = fn_006b4cd0(*(undefined4 *)(DAT_008977e0 + 0x2c)), iVar2 != 0)) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))
              (*(int **)(DAT_008977e0 + 0x2c),param_1[0x6b]);
    param_1[0x6b] = -1;
  }
  if (0 < param_1[0x69]) {
    param_1[0x69] = param_1[0x69] + -1;
    return;
  }
  switch((char)param_1[0x44]) {
  case '\0':
    uVar3 = 1;
    if ((param_1[0x67] != -1) &&
       (iVar2 = param_1[0x68], param_1[0x68] = iVar2 + 1, param_1[0x67] < iVar2 + 1)) {
LAB_003aeb04:
      param_1[0x68] = 0;
                    /* WARNING: Could not recover jumptable at 0x003aeb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,uVar3,4,0);
      return;
    }
    break;
  case '\x01':
    iVar2 = param_1[0x68];
    param_1[0x68] = iVar2 + 1;
    if (iVar2 + 1 < 0x1f) {
      return;
    }
    param_1[0x68] = 0;
    (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
    uVar3 = fn_006f7a84(DAT_008977e0);
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1,uVar3);
    goto joined_r0x003aeb74;
  case '\x02':
    uVar3 = 3;
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar2 == 0) {
      return;
    }
LAB_003aeb98:
    (**(code **)(*param_1 + 0x44))(param_1,uVar3,4,0);
    fn_001dbc64(param_1,1);
    return;
  case '\x03':
    uVar3 = 4;
    if ((param_1[0x67] != -1) &&
       (iVar2 = param_1[0x68], param_1[0x68] = iVar2 + 1, param_1[0x67] < iVar2 + 1))
    goto LAB_003aeb04;
    break;
  case '\x04':
    iVar2 = param_1[0x68];
    param_1[0x68] = iVar2 + 1;
    if (iVar2 + 1 < 0x1f) {
      return;
    }
    param_1[0x68] = 0;
    (**(code **)(*param_1 + 0x44))(param_1,5,4,0);
    uVar3 = fn_006f7a84(DAT_008977e0);
    iVar2 = (**(code **)(*param_1 + 0x134))(param_1,uVar3);
joined_r0x003aeb74:
    if (iVar2 != 0) {
      iVar2 = fn_006f7a84(DAT_008977e0);
      *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) & 0xfffffffb;
      return;
    }
    break;
  case '\x05':
    uVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar2 != 0) goto LAB_003aeb98;
  }
  return;
}



undefined4 fn_003ae8e0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002113c8();
  param_1[0x4e] = param_1[0x4e] & 0xfffffff7;
  (**(code **)(*param_1 + 0x44))(param_1,0,4);
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x3e9);
  return uVar1;
}



void fn_003ae8b0(undefined4 param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x3e9);
  fn_001d9f9c(param_1);
  return;
}



void fn_003ae8a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  return;
}



void fn_003ae858(undefined4 *param_1)

{
  *param_1 = &DAT_0082e3a4;
  if (param_1[0x67] != 0) {
    fn_002feef8(param_1[0x67]);
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_003ae7e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a0) == -1) {
    uVar1 = fn_006f72b4(DAT_008977e0);
    uVar1 = fn_0021ed50(uVar1,0xe,param_1 + 0x20,param_2);
    *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  }
  return;
}



void fn_003ae6fc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x80))();
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,(int)*(short *)(param_2 + 1));
  if ((iVar2 != 0) && (iVar2 = fn_00154ac8(param_2[1]), iVar2 == 0)) {
    iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_002a51f8(iVar3,1);
    }
    iVar3 = *(int *)(param_1 + 0x19c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        fn_002feef8(iVar3);
      }
      *(int *)(param_1 + 0x19c) = iVar2;
    }
  }
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  *(undefined4 *)(param_1 + 0x184) = *param_2;
  *(undefined4 *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x18c) = uVar5;
  *(undefined4 *)(param_1 + 400) = uVar6;
  *(undefined4 *)(param_1 + 0x194) = uVar7;
  return;
}



void fn_003ae674(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = fn_006f7a70(DAT_008977e0);
  iVar4 = 0;
  iVar1 = *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006f7a70(DAT_008977e0);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x18) + iVar4 * 4);
      if (((iVar2 != 0) && (*(char *)(iVar2 + 0x17c) == ' ')) && (*(int *)(iVar2 + 0x1a0) != -1)) {
        uVar3 = fn_006f72b4(DAT_008977e0);
        fn_0021f144(uVar3,*(undefined4 *)(iVar2 + 0x1a0));
        *(undefined4 *)(iVar2 + 0x1a0) = 0xffffffff;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



void fn_003ae64c(int param_1)

{
  if (*(int *)(param_1 + 0x19c) != 0) {
    fn_002feef8(*(int *)(param_1 + 0x19c));
    *(undefined4 *)(param_1 + 0x19c) = 0;
  }
  return;
}



void fn_003ae60c(undefined4 *param_1)

{
  *param_1 = &DAT_0082e264;
  if ((int *)param_1[0x6a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x6a] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_003ae518(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x16];
  fn_001dbb48();
  if (((int)(char)iVar1 & ~param_2) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x67) = 0;
  (**(code **)(*param_1 + 0x44))(param_1,0,4);
  fn_001dbc64(param_1,1);
  param_1[0x4e] = param_1[0x4e] & 0xfffffff5U | (int)(char)param_1[0x6b] << 3;
  (**(code **)(*param_1 + 0xd8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x003ae5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,1);
  return;
}


