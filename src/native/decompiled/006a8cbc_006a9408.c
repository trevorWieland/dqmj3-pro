#include "006a8cbc_006a9408.h"



void fn_006a9408(void)

{
  return;
}



void fn_006a9388(void)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [24];
  
  local_20 = 0;
  uStack_1c = 0x3f800000;
  fn_005f2d30(&local_20,local_18);
  return;
}



undefined4 fn_006a91c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  float in_s0;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar2 = *(int *)(param_1 + 8);
  fn_0016947c(&local_20,*(undefined4 *)(iVar2 + 4),param_2);
  uVar1 = 0;
  in_s0 = -in_s0;
  if ((((in_s0 <= *(float *)(iVar2 + 8) * local_20 + *(float *)(iVar2 + 0xc) * local_1c +
                  *(float *)(iVar2 + 0x10) * local_18 + *(float *)(iVar2 + 0x14) * 1.0) &&
       (in_s0 <= *(float *)(iVar2 + 0x18) * local_20 + *(float *)(iVar2 + 0x1c) * local_1c +
                 *(float *)(iVar2 + 0x20) * local_18 + *(float *)(iVar2 + 0x24) * 1.0)) &&
      (in_s0 <= *(float *)(iVar2 + 0x28) * local_20 + *(float *)(iVar2 + 0x2c) * local_1c +
                *(float *)(iVar2 + 0x30) * local_18 + *(float *)(iVar2 + 0x34) * 1.0)) &&
     (((in_s0 <= *(float *)(iVar2 + 0x38) * local_20 + *(float *)(iVar2 + 0x3c) * local_1c +
                 *(float *)(iVar2 + 0x40) * local_18 + *(float *)(iVar2 + 0x44) * 1.0 &&
       (in_s0 <= *(float *)(iVar2 + 0x48) * local_20 + *(float *)(iVar2 + 0x4c) * local_1c +
                 *(float *)(iVar2 + 0x50) * local_18 + *(float *)(iVar2 + 0x54) * 1.0)) &&
      (in_s0 <= *(float *)(iVar2 + 0x58) * local_20 + *(float *)(iVar2 + 0x5c) * local_1c +
                *(float *)(iVar2 + 0x60) * local_18 + *(float *)(iVar2 + 100) * 1.0)))) {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_006a8fac(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(*(undefined1 *)(param_1 + 0xd)) {
  case 0:
  case 3:
  case 4:
  case 7:
    puVar1 = (undefined4 *)fn_006a9660(param_1);
    local_1c = *puVar1;
    local_18 = puVar1[1];
    local_14 = puVar1[2];
    puVar1 = (undefined4 *)fn_006a9088(param_1);
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    fn_005deaf0(&local_1c,&local_28);
    fn_00525bd0();
    return;
  case 1:
    fn_006a9088(param_1);
    fn_00525bd0();
    return;
  default:
    return;
  }
}



undefined4 * fn_006a9088(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 != '\0' && cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      puVar2 = &DAT_008c85fc;
    }
    else {
      if (cVar1 == '\x06') goto LAB_006a9180;
      if (cVar1 == '\a') {
        puVar2 = &DAT_008c8614;
      }
      else {
        puVar2 = &DAT_008c85cc;
      }
    }
    return puVar2;
  }
  fn_006f7a84(DAT_008977e0);
  iVar3 = fn_006aaa00();
  if (iVar3 != 0) {
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_00259878();
    switch(*(undefined1 *)(param_1 + 0x15e)) {
    case 0:
      break;
    case 1:
      if (iVar3 == 3) {
        puVar2 = &DAT_008c865c;
      }
      else {
        puVar2 = &DAT_008c86bc;
      }
      return puVar2;
    case 2:
      if (iVar3 == 3) {
        puVar2 = &DAT_008c868c;
      }
      else {
        puVar2 = &DAT_008c86a4;
      }
      return puVar2;
    case 3:
      if (iVar3 == 3) {
        puVar2 = &DAT_008c8674;
      }
      else {
        puVar2 = &DAT_008c86d4;
      }
      return puVar2;
    case 4:
      break;
    default:
    }
    if (iVar3 == 3) {
      return &DAT_008c862c;
    }
    return &DAT_008c8644;
  }
LAB_006a9180:
  return (undefined4 *)(param_1 + 0x40);
}



int fn_006a8f54(int param_1)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    iVar1 = fn_00174870();
    return (int)*(char *)(iVar1 + 8);
  default:
    return 0;
  }
}



int fn_006a8efc(int param_1)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    iVar1 = fn_00174870();
    return (int)*(char *)(iVar1 + 9);
  default:
    return 0;
  }
}



int fn_006a8ee4(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 4) == '\b') {
    sVar1 = *(short *)(param_1 + 0x23e8);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x36);
  }
  return (int)sVar1;
}



undefined4 fn_006a8e98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    fn_001639b8(param_2);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0x21;
}



void fn_006a8e54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    fn_001639b8(param_2);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



undefined4 fn_006a8e10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00163e50(param_1,param_2,1);
  if (iVar1 != 0) {
    fn_001639b8(param_2);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0x21;
}



undefined4 fn_006a8cbc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = fn_0011c1b4(param_2,0,0,0,0,0,0,0,5);
  iVar2 = fn_00145aac();
  if (iVar2 != 2) {
    uVar4 = fn_0012a26c(uVar1);
    uVar3 = fn_00145ac0(uVar1);
    iVar2 = fn_00143e20(uVar5,param_3,uVar3,uVar4);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = fn_00143e04(uVar5,param_3);
    }
  }
  fn_0012d73c(uVar1);
  return uVar4;
}


