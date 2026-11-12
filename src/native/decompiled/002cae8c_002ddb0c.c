#include "002cae8c_002ddb0c.h"



void fn_002ddb0c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002b13a0();
  *puVar1 = &DAT_0082058c;
  return;
}



void fn_002dbf44(undefined4 *param_1)

{
  *param_1 = &DAT_008202c4;
  param_1[1] = 0;
  return;
}



void fn_002d7a04(undefined4 *param_1)

{
  *param_1 = &DAT_008201e8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void fn_002d7624(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_008201d8;
  return;
}



void fn_002d760c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_008201c8;
  return;
}



void fn_002d658c(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 8) = *param_2;
  return;
}



void fn_002d6548(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0xb;
  return;
}



void fn_002d648c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



undefined4 fn_002d5dc8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float fStack_1c;
  float local_18;
  
  fn_00174858(DAT_008977e4);
  iVar1 = fn_006ba8dc();
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0xc) == '\0') &&
       (iVar1 = fn_00182988(DAT_008977e4), *(char *)(iVar1 + 0x39e) != '\0')) {
      iVar1 = fn_001c38bc();
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        fn_002d5fe0(param_1);
      }
    }
    else if (*(char *)(param_1 + 4) == '\0') {
      if (0x59 < *(int *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      iVar1 = fn_00174864(DAT_008977e4);
      fVar4 = *(float *)(iVar1 + 0x38) - *(float *)(iVar1 + 0x44);
      fVar2 = *(float *)(iVar1 + 0x3c) - *(float *)(iVar1 + 0x48);
      fVar3 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x4c);
      fVar5 = 1.0 / SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
      local_20 = *(float *)(iVar1 + 0x38) + fVar4 * fVar5 * 0.4;
      fStack_1c = *(float *)(iVar1 + 0x3c) + fVar2 * fVar5 * 0.4;
      local_18 = *(float *)(iVar1 + 0x40) + fVar3 * fVar5 * 0.4;
      fn_00204158(iVar1,&local_20);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    else if ((*(char *)(param_1 + 4) == '\x01') &&
            (iVar1 = *(int *)(param_1 + 8) + 1, *(int *)(param_1 + 8) = iVar1, 0x14 < iVar1)) {
      return 1;
    }
  }
  return 0;
}



void fn_002d2c24(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  fn_002c3e78();
  uVar3 = 0;
  uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  if (uVar1 != 0) {
    do {
      uVar2 = fn_0022f750((&DAT_007d298c)[uVar3 * 2]);
      fn_0031b78c(param_1,uVar3,5,uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



undefined4 fn_002d1f30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  fn_00689878(param_1,0);
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/title/upper/data_convert_flow.arc",&DAT_002d2048,1,1);
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_002d2054,&DAT_002d2050,
                       0,1,0);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar1);
  *(int *)(param_1 + 0x6c) = iVar2;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar2 + 0x10);
  uVar1 = fn_001c804c(*(undefined4 *)(param_1 + 100),DAT_008989fc,*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = fn_001088e0(*(undefined4 *)(param_1 + 100),uVar1);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar4 = 0;
  if (*(char *)(*(int *)(param_1 + 0x7c) + 0x30) == '\x01') {
    puVar5 = &DAT_007d0660;
  }
  else {
    puVar5 = &DAT_007d06d8;
  }
  do {
    if (puVar5[uVar4 * 3 + 1] != 0) {
      uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),puVar5[uVar4 * 3]);
      uVar3 = fn_0022f584(puVar5[uVar4 * 3 + 1],0);
      fn_00190d50(uVar1,uVar3);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  fn_002d1e58(param_1,0);
  return 1;
}



void fn_002d03d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_00851e34;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



undefined1 fn_002cf2a4(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [4];
  undefined1 local_14;
  
  uVar2 = 0;
  do {
    fn_003c9218(auStack_18,uVar2 & 0xff);
    iVar1 = fn_002cf294(auStack_18);
    if (iVar1 == 0) {
      return local_14;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return 4;
}



void fn_002cd49c(undefined4 param_1,undefined4 param_2)

{
  fn_002466b8(DAT_0089284c,param_1,param_2);
  return;
}



int fn_002cc950(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x5e) == '\0') ||
     (iVar1 = fn_001030e4(param_1 + 0x1e,&DAT_002cc984), iVar1 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x1e;
  }
  return param_1;
}



void fn_002cae8c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x10))(param_1);
  param_1[5] = 0;
  if ((char)param_1[4] == '\0') {
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  iVar1 = fn_001f7430(uVar3,0x48);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = fn_001f7430(uVar3,0x49);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1[3] + 0x90))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*(int *)param_1[3] + 0xa8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[3] + 0xb0))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)param_1[3] + 0xb8))();
        if (iVar1 < 0) {
          iVar1 = (**(code **)(*(int *)param_1[3] + 0xc0))();
          if (-1 < iVar1) {
            param_1[5] = param_1[5] | 0x40;
            (**(code **)(*param_1 + 0x38))(param_1);
          }
        }
        else {
          param_1[5] = param_1[5] | 0x10;
          (**(code **)(*param_1 + 0x34))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x30))(param_1,iVar1);
      }
    }
    else {
      param_1[5] = param_1[5] | 8;
      iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
      if (iVar1 == 0) {
        if ((char)param_1[4] == '\0') goto LAB_002cb128;
        *(undefined1 *)(param_1 + 4) = 0;
        fn_001caa40(param_1[3]);
      }
    }
  }
  else {
    fn_002cad78(param_1,iVar1);
  }
  if ((char)param_1[4] != '\0') {
    iVar1 = (**(code **)(*(int *)param_1[3] + 100))();
    if (-1 < iVar1) {
      iVar2 = (**(code **)(*(int *)param_1[3] + 0x6c))();
      param_1[5] = param_1[5] | 0x20;
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 0x28))(param_1,iVar2,0);
        (**(code **)(*param_1 + 0x28))(param_1,iVar1,1);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[3] + 0x34))();
    if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)param_1[3] + 0x38))(), iVar1 != 0)) {
      param_1[5] = param_1[5] | 0x20;
      (**(code **)(*param_1 + 0x2c))(param_1,*(undefined4 *)(param_1[3] + 0xcc));
      fn_002cb15c(param_1,0xffffffff);
      if (*(int *)(param_1[3] + 200) < 2) {
        fn_0069e8c8(param_1[2],0x100094e);
      }
      else {
        fn_0069e8c8(param_1[2],0x100094f);
      }
    }
  }
LAB_002cb128:
                    /* WARNING: Could not recover jumptable at 0x002cb138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}


