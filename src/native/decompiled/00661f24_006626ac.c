#include "00661f24_006626ac.h"



void fn_006626ac(short *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [8];
  
  iVar1 = fn_00682bbc(param_1 + 4);
  if (iVar1 != 0) {
    return;
  }
  if (0 < param_1[7]) {
    param_1[7] = param_1[7] + -1;
    param_1[3] = param_1[3] + 1;
  }
  if (param_1[7] < 0) {
    param_1[7] = param_1[7] + 1;
    param_1[3] = param_1[3] + -1;
  }
  if (0 < param_1[6]) {
    param_1[6] = param_1[6] + -1;
    param_1[2] = param_1[2] + 1;
  }
  if (param_1[6] < 0) {
    param_1[6] = param_1[6] + 1;
    param_1[2] = param_1[2] + -1;
  }
  if (0 < param_1[5]) {
    param_1[5] = param_1[5] + -1;
    param_1[1] = param_1[1] + 1;
  }
  if (param_1[5] < 0) {
    param_1[5] = param_1[5] + 1;
    param_1[1] = param_1[1] + -1;
  }
  if (0 < param_1[4]) {
    param_1[4] = param_1[4] + -1;
    *param_1 = *param_1 + 1;
  }
  if (param_1[4] < 0) {
    param_1[4] = param_1[4] + 1;
    *param_1 = *param_1 + -1;
  }
  iVar1 = fn_00682bbc(param_1 + 4);
  if (iVar1 == 0) {
    local_10[0] = 2;
    fn_00229ae0(param_1 + 8,4,param_1,1,1,local_10);
  }
  else {
    fn_0012a2d8(param_1 + 4);
    uVar2 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
    fn_00662860(param_1,uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00662430(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_88;
  undefined1 *local_84;
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [32];
  
  iVar1 = DAT_00897804;
  if (DAT_00897804 != 0) {
    fn_00301a9c(&local_88,&DAT_0088fcb8,0x20);
    local_68 = **(undefined4 **)(*(int *)(iVar1 + 0xc) + 4);
    uStack_64 = 0;
    local_60 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_5c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_58 = 0;
    local_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_40,&local_88,0x48);
    iVar1 = fn_001010c8(auStack_40,*(undefined4 *)(*(int *)(DAT_00897804 + 0x60) + 4),0x20);
    if (iVar1 != 0) {
      fn_0022983c(*(undefined4 *)(DAT_00897804 + 0x14),0x30);
      fn_0022983c(*(undefined4 *)(DAT_00897804 + 0x14),0x43);
      fn_0025bddc(*(undefined4 *)(DAT_00897804 + 8));
      iVar1 = DAT_00897804;
      if (DAT_00897804 != 0) {
        fn_00301a9c(&local_88,&DAT_0088fcb8,0x20);
        local_68 = **(undefined4 **)(*(int *)(iVar1 + 0xc) + 4);
        uStack_64 = 0;
        local_60 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
        local_5c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
        uStack_58 = 0;
        local_54 = 0;
        local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
        local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
        local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
        local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
        fn_0013ef80(auStack_40,&local_88,0x48);
        fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_40);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  uVar2 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
  fn_00166824(param_1,uVar2);
  local_84 = local_80;
  local_80[0] = 2;
  local_88 = 1;
  fn_00229ae0(param_1 + 0x10,4,param_1,1);
  return;
}



void fn_006623cc(undefined4 *param_1)

{
  *param_1 = &DAT_00850d64;
  fn_00240fe8(param_1[2],param_1);
  fn_00661ff4(param_1,param_1 + 6);
  fn_00661ff4(param_1,param_1 + 9);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  param_1[3] = 0;
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0066233c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[3] = 0;
  *param_1 = &DAT_00850d64;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x35) = 0x80;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 1;
  param_1[0xe] = 0xffffffff;
  iVar1 = fn_00145b00(0xd0,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00202b54();
  }
  param_1[3] = uVar2;
  return param_1;
}



undefined4 fn_006620b4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x30));
  iVar2 = fn_00190fb4(uVar1,param_3);
  if (iVar2 != 0xffff) {
    local_40 = (float)VectorSignedToFloat(param_2 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
    local_3c = (float)VectorSignedToFloat((param_2 & 0xff00) >> 8,(byte)(in_fpscr >> 0x16) & 3);
    local_38 = (float)VectorSignedToFloat((param_2 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3)
    ;
    local_34 = (float)VectorSignedToFloat(param_2 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
    local_40 = local_40 * 0.003921569;
    local_3c = local_3c * 0.003921569;
    local_38 = local_38 * 0.003921569;
    local_34 = local_34 * 0.003921569;
    switch(param_4) {
    case 0:
      fn_006dc544(auStack_30,&local_40);
      fn_005ea354(uVar1,iVar2,auStack_30);
      break;
    case 1:
      fn_006dc544(auStack_2c,&local_40);
      fn_005ea38c(uVar1,iVar2,auStack_2c);
      break;
    case 2:
      fn_006dc544(auStack_28,&local_40);
      fn_005ea3b8(uVar1,iVar2,auStack_28);
      break;
    case 3:
      fn_006dc544(auStack_24,&local_40);
      fn_005ea3f0(uVar1,iVar2,auStack_24);
      break;
    case 4:
      fn_006dc544(auStack_20,&local_40);
      fn_005ea41c(uVar1,iVar2,auStack_20);
      break;
    case 5:
      fn_006dc544(auStack_1c,&local_40);
      fn_005ea454(uVar1,iVar2,auStack_1c);
    }
  }
  return 1;
}



void fn_00661ff4(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if ((char)param_2[2] != '\0') {
    fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 8) + 0x24),param_2[1]);
    fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x24));
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if ((int *)*param_2 != (int *)0x0) {
    (**(code **)(*(int *)*param_2 + 8))();
  }
  *param_2 = 0;
  puVar2 = (undefined4 *)param_2[1];
  piVar3 = (int *)puVar2[7];
  for (piVar1 = (int *)puVar2[6]; piVar1 != piVar3; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0xc) = 0;
      fn_005472e0(*piVar1);
      *piVar1 = 0;
    }
  }
  (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x006620b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
  return;
}



void fn_00661fb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = fn_0017fde4();
    iVar2 = fn_00183638(uVar1,0);
    uVar1 = VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 3),(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToUnsigned(uVar1,3);
    *(char *)(*(int *)(param_1 + 0xc) + 0xc9) = (char)uVar1;
  }
  return;
}



void fn_00661f34(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x38) != -1) {
    uVar1 = fn_0017fde4(param_2);
    puVar2 = (undefined4 *)fn_0019695c(uVar1,*(undefined4 *)(param_1 + 0x38));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00858c10;
      uVar3 = puVar2[2];
      uVar4 = uVar3;
      if ((uint)puVar2[3] < uVar3) {
        do {
          uVar4 = uVar4 + 8;
        } while (uVar4 != puVar2[3]);
      }
      fn_001008c4(uVar3,(int)(puVar2[4] - uVar3) >> 3,0);
      fn_002feef8(puVar2);
      return;
    }
  }
  return;
}



void fn_00661f24(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if (*(int *)(iVar1 + 0x38) != -1) {
    uVar2 = fn_0017fde4(param_3);
    puVar3 = (undefined4 *)fn_0019695c(uVar2,*(undefined4 *)(iVar1 + 0x38));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &DAT_00858c10;
      uVar4 = puVar3[2];
      uVar5 = uVar4;
      if ((uint)puVar3[3] < uVar4) {
        do {
          uVar5 = uVar5 + 8;
        } while (uVar5 != puVar3[3]);
      }
      fn_001008c4(uVar4,(int)(puVar3[4] - uVar4) >> 3,0);
      fn_002feef8(puVar3);
      return;
    }
  }
  return;
}


