#include "00527164_00527870b.h"



int fn_00527870(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_2c;
  
  uVar6 = *param_1;
  puVar3 = param_1 + 2;
  pbVar4 = (byte *)(param_1 + 1);
  iVar2 = (int)*(char *)(param_1 + 1);
  local_2c = 0;
  if (0 < iVar2) {
    uVar5 = param_5;
    if (0x10U - iVar2 <= param_5) {
      uVar5 = 0x10U - iVar2;
    }
    fn_00301a9c(iVar2 + (int)puVar3,param_4,uVar5);
    param_4 = param_4 + uVar5;
    param_5 = param_5 - uVar5;
    bVar1 = *pbVar4 + (char)uVar5;
    *pbVar4 = bVar1;
    if (bVar1 < 0x10) {
      return 0;
    }
    if (param_3 < 0x10) {
      return 0x10;
    }
    fn_00756208(param_2,param_1 + 10,puVar3,1,uVar6);
    fn_00527570(param_1 + 6,param_2,1,uVar6);
    local_2c = (int)(char)*pbVar4;
    *pbVar4 = 0;
    param_2 = param_2 + local_2c;
    param_3 = param_3 - local_2c;
  }
  uVar5 = param_5 >> 4;
  if (param_3 >> 4 < uVar5) {
    local_2c = uVar5 << 4;
  }
  else {
    fn_00756208(param_2,param_1 + 10,param_4,uVar5,uVar6);
    fn_00527570(param_1 + 6,param_2,uVar5,uVar6);
    iVar2 = param_5 + uVar5 * -0x10;
    local_2c = local_2c + uVar5 * 0x10;
    if (iVar2 != 0) {
      fn_00301a9c(puVar3,param_4 + uVar5 * 0x10,iVar2);
    }
    *pbVar4 = (byte)iVar2;
  }
  return local_2c;
}



void fn_005277b0(undefined4 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  pbVar4 = (byte *)(param_1 + 1);
  puVar6 = param_1 + 2;
  uVar5 = *param_1;
  iVar2 = (int)*(char *)(param_1 + 1);
  if (0 < iVar2) {
    uVar3 = param_3;
    if (0x10U - iVar2 <= param_3) {
      uVar3 = 0x10U - iVar2;
    }
    fn_00301a9c(iVar2 + (int)puVar6,param_2,uVar3);
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
    bVar1 = *pbVar4 + (char)uVar3;
    *pbVar4 = bVar1;
    if (bVar1 < 0x10) {
      return;
    }
    fn_00527570(param_1 + 6,puVar6,1,uVar5);
    *pbVar4 = 0;
  }
  uVar3 = param_3 >> 4;
  fn_00527570(param_1 + 6,param_2,uVar3,uVar5);
  iVar2 = param_3 + uVar3 * -0x10;
  if (iVar2 != 0) {
    fn_00301a9c(puVar6,param_2 + uVar3 * 0x10,iVar2);
  }
  *pbVar4 = (byte)iVar2;
  return;
}



void fn_00527744(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_20 [16];
  
  fn_00158f6c((int)param_1 + (0x38 - (0xf - *(char *)((int)param_1 + 5))));
  fn_00756208(auStack_20,param_1 + 10,param_1 + 6,1,*param_1);
  uVar1 = (int)*(char *)((int)param_1 + 6);
  if (param_3 <= (uint)(int)*(char *)((int)param_1 + 6)) {
    uVar1 = param_3;
  }
  fn_00301a9c(param_2,auStack_20,uVar1);
  return;
}



void fn_00527600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,uint param_6,char param_7)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  
  bVar1 = 0xe - (char)param_4;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(char *)((int)param_1 + 6) = param_7;
  *(char *)((int)param_1 + 5) = (char)param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 10) = bVar1 & 7;
  fn_00301a9c((int)param_1 + 0x29,param_3,param_4);
  fn_007562c8(param_1 + 10);
  pbVar2 = (byte *)(param_1 + 2);
  if (param_5 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0x40;
  }
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *pbVar2 = bVar4 | param_7 * '\x04' - 8U & 0x38 | bVar1 & 7;
  param_1[5] = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
               param_6 >> 0x18;
  fn_00301a9c((int)param_1 + 9,param_3,param_4);
  fn_00527570(param_1 + 6,param_1 + 2,1,*param_1);
  if (param_5 != 0) {
    uVar3 = (undefined1)(param_5 >> 8);
    if (param_5 < 0xff00) {
      *(undefined1 *)(param_1 + 2) = uVar3;
      uVar3 = 2;
      *(char *)((int)param_1 + 9) = (char)param_5;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0xff;
      *(undefined1 *)((int)param_1 + 9) = 0xfe;
      *(char *)((int)param_1 + 10) = (char)(param_5 >> 0x18);
      *(char *)((int)param_1 + 0xb) = (char)(param_5 >> 0x10);
      *(undefined1 *)(param_1 + 3) = uVar3;
      uVar3 = 6;
      *(char *)((int)param_1 + 0xd) = (char)param_5;
    }
    *(undefined1 *)(param_1 + 1) = uVar3;
  }
  return;
}



void fn_00527570(uint *param_1,uint *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      local_28 = *param_2 ^ *param_1;
      local_24 = param_2[1] ^ param_1[1];
      local_20 = param_2[2] ^ param_1[2];
      local_1c = param_2[3] ^ param_1[3];
      (**(code **)(*param_4 + 0x14))(param_4,param_1,&local_28);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 4;
    } while (iVar1 < param_3);
  }
  return;
}


