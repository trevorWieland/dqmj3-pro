#include "001c1430_001c19d8.h"



void fn_001c19d8(undefined4 *param_1)

{
  fn_0010fee0(*param_1);
  return;
}



undefined4 * fn_001c19bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (DAT_008bf6c7 != '\0') {
    puVar1 = &DAT_008e9ab2;
  }
  return puVar1;
}



undefined4 fn_001c1908(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  int *local_14;
  
  fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  uVar1 = fn_00191f20();
  local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar1,0xffffffff);
  local_18 = 0x8000010;
  if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_14[1] = local_14[1] + 1;
  fn_00173d1c(param_1,&local_18);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar2 = local_14[1], local_14[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



undefined4 fn_001c18a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0x1c);
  if (iVar3 < 1) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_001c18f0);
    return uVar2;
  }
  fn_00173d1c(param_1,iVar3 * 8 + -8 + *(int *)(*(int *)(iVar1 + 4) + 0x18));
  return 1;
}



undefined4 fn_001c1880(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_007415e0(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001c17ac(uint param_1,uint param_2,uint param_3,undefined1 *param_4,undefined1 *param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < param_1) {
    uVar5 = param_1;
  }
  else {
    uVar5 = param_2;
  }
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (param_1 < param_2) {
    uVar3 = param_1;
  }
  else {
    uVar3 = param_2;
  }
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  iVar4 = uVar5 - uVar3;
  iVar2 = iVar4;
  if (0 < iVar4) {
    if (uVar5 == param_1) {
      iVar2 = fn_00300f74((param_2 - param_3) * 0x28,iVar4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf0;
      }
    }
    else if (uVar5 == param_2) {
      iVar2 = fn_00300f74((param_3 - param_1) * 0x28,iVar4);
      iVar2 = iVar2 + 0x50;
    }
    else {
      iVar2 = fn_00300f74((param_1 - param_2) * 0x28,iVar4);
      iVar2 = iVar2 + 0xa0;
    }
  }
  if (uVar5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_00300f74(iVar4 * 0xff,uVar5);
  }
  *param_4 = (char)iVar2;
  *param_5 = uVar1;
  *param_6 = (char)uVar5;
  return;
}



void fn_001c15a8(undefined4 param_1,int param_2,uint param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  uint in_fpscr;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = param_3;
  uVar1 = param_3;
  if (param_2 == 0) goto LAB_001c178c;
  uVar3 = (uint)((short)param_1 * 0xcd) >> 0xd;
  fVar6 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar7 * 0.003921569;
  fVar4 = fVar6 * 0.025 - fVar4;
  switch(uVar3) {
  default:
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = VectorFloatToUnsigned((1.0 - fVar7) * fVar5,3);
    uVar1 = VectorFloatToUnsigned((1.0 - fVar7 * (1.0 - fVar4)) * fVar6,3);
    param_3 = uVar3 & 0xff;
    break;
  case 1:
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = VectorFloatToUnsigned((1.0 - fVar7) * fVar5,3);
    uVar2 = VectorFloatToUnsigned((1.0 - fVar7 * fVar4) * fVar6,3);
    param_3 = uVar3 & 0xff;
    goto LAB_001c1748;
  case 2:
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = VectorFloatToUnsigned((1.0 - fVar7) * fVar6,3);
    param_3 = VectorFloatToUnsigned((1.0 - fVar7 * (1.0 - fVar4)) * fVar5,3);
    uVar2 = uVar2 & 0xff;
    goto LAB_001c1788;
  case 3:
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = VectorFloatToUnsigned((1.0 - fVar7) * fVar5,3);
    uVar1 = VectorFloatToUnsigned((1.0 - fVar7 * fVar4) * fVar6,3);
    uVar2 = uVar2 & 0xff;
    break;
  case 4:
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToUnsigned((1.0 - fVar7) * fVar5,3);
    uVar2 = VectorFloatToUnsigned((1.0 - fVar7 * (1.0 - fVar4)) * fVar6,3);
    uVar1 = uVar1 & 0xff;
LAB_001c1748:
    uVar2 = uVar2 & 0xff;
    goto LAB_001c178c;
  case 5:
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = VectorFloatToUnsigned((1.0 - fVar7) * fVar5,3);
    param_3 = VectorFloatToUnsigned((1.0 - fVar7 * fVar4) * fVar6,3);
    uVar1 = uVar1 & 0xff;
LAB_001c1788:
    param_3 = param_3 & 0xff;
    goto LAB_001c178c;
  }
  uVar1 = uVar1 & 0xff;
LAB_001c178c:
  *param_4 = (char)uVar2;
  *param_5 = (char)uVar1;
  *param_6 = (char)param_3;
  return;
}



undefined4 fn_001c14b8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined1 local_58 [48];
  undefined4 local_28;
  
  if (param_1 == 0) {
    local_28 = 5;
    if (param_4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = &DAT_008bf5c8;
    }
    fn_0012bc84(0x208,&local_68);
    puVar1 = local_68;
    local_68 = &DAT_008bf52c;
    local_60 = 0;
    local_64 = local_58;
    local_5c = puVar4;
    iVar3 = fn_001bb3d0(puVar1,param_2,local_28,4);
    fn_001467e4(iVar3 - (int)puVar1 & 0xfffffffc);
    uVar2 = 0;
  }
  else {
    if (param_4 == 0) {
      local_5c = (undefined *)0x0;
    }
    else {
      local_5c = &DAT_008bf5c8;
    }
    local_64 = local_58;
    local_60 = 0;
    local_68 = &DAT_008bf52c;
    uVar2 = fn_001bb3d0(param_1,param_2,5,4);
  }
  return uVar2;
}



undefined4 fn_001c1430(undefined4 param_1,code *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = (*param_2)(param_3,&local_10,4);
  if (iVar1 == 4) {
    if (local_10 != param_4) {
      fn_0019813c(param_1,(char *)&DAT_001c1494);
      return 0;
    }
    uVar2 = 1;
  }
  else {
    fn_0019813c(param_1,
                 "io error, read function failure, the origin stream could be corrupted/trucated");
    uVar2 = 0;
  }
  return uVar2;
}


