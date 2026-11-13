#include "001af938_001b00ccaa.h"



void fn_001afdc8(void)

{
  fn_00166824(&DAT_008bf538,&DAT_007e0a74);
  return;
}



undefined4 *
fn_001afd98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)*param_4)();
  *puVar1 = param_4;
  fn_001ad654(puVar1 + 0xb,param_3,0x104);
  return puVar1;
}



void fn_001af938(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 uint param_6,undefined4 param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [256];
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_0012bc84(0x208,&local_150);
  fn_00301a9c(local_150,&DAT_007e0e44,0x30);
  fn_001467e4(0x30);
  fn_0012bc84(0x208,&local_150);
  fn_00301a9c(local_150,&DAT_007e0e74,0x30);
  fn_001467e4(0x30);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x2701;
  *(int *)(param_1 + 0x6c) = param_4;
  fn_0017821c(param_4 + 0x55c,local_30,0x120);
  *(undefined4 *)(param_4 + 0x68c) = param_7;
  *(uint *)(param_4 + 0x688) = param_6;
  *(undefined4 *)(param_4 + 0x67c) = param_3;
  *(int *)(param_4 + 0x680) = param_4;
  *(int *)(param_4 + 0x684) = param_5;
  uVar2 = 0;
  iVar5 = 0x13;
  iVar3 = param_4 + 0x780;
  do {
    if ((param_6 & 1 << (uVar2 & 0xff)) == 0) {
      *(undefined4 *)(param_1 + uVar2 * 4 + 0x70) = 0;
      iVar4 = iVar3;
    }
    else {
      iVar4 = iVar3 + 0x34;
      *(int *)(param_1 + uVar2 * 4 + 0x70) = iVar3;
    }
    iVar5 = iVar5 + -1;
    uVar2 = uVar2 + 1;
    iVar3 = iVar4;
  } while (iVar5 != 0);
  if (param_5 == 0x100) {
LAB_001afb04:
    local_38 = 0x100;
  }
  else {
    if (param_5 < 0x101) {
      if ((param_5 != 0x40 && param_5 != 0x60) && (param_5 == 0x80 || param_5 == 0xe0)) {
        local_38 = 0x80;
        goto LAB_001afa6c;
      }
    }
    else {
      if (param_5 == 0x1e0) goto LAB_001afb04;
      if (param_5 == 0x200) {
        local_38 = 0x200;
        goto LAB_001afa6c;
      }
      if (param_5 == 0x400) {
        local_38 = 0x400;
        goto LAB_001afa6c;
      }
    }
    local_38 = 0x40;
  }
LAB_001afa6c:
  bVar1 = false;
  uVar2 = 0;
  do {
    if ((param_6 & 1 << (uVar2 & 0xff)) != 0) {
      local_148 = 10;
      uStack_144 = 0;
      local_140 = 0x10000;
      uStack_13c = 0;
      local_150 = 0;
      local_14c = 0;
      fn_00239824(*(undefined4 *)(param_1 + uVar2 * 4 + 0x70),local_38,local_38,1);
      if (!bVar1) {
        bVar1 = true;
        *(uint *)(param_1 + 0x60) = uVar2;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x13);
  fn_001b5db0(auStack_138,local_30,param_1,param_5);
  fn_001bddb8(param_4,auStack_138);
  fn_001bb744(param_1);
  return;
}


