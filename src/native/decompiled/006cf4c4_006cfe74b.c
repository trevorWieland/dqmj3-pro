#include "006cf4c4_006cfe74b.h"



bool fn_006cfe74(int param_1)

{
  return *(int *)(param_1 + 0xc) != 0;
}



undefined1 * fn_006cfda4(int *param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ushort local_18 [4];
  
  puVar2 = (undefined1 *)(**(code **)(*param_1 + 0x2c))(param_1,local_18,2,1,0,0);
  if (-1 < (int)puVar2) {
    iVar3 = fn_00453ac8(0x36c0,4);
    if (iVar3 == 0) {
      puVar2 = (undefined1 *)0xc8610bf3;
    }
    else {
      iVar4 = fn_0044c844(iVar3);
      if (iVar4 == 0) {
        fn_004539f4(iVar3);
        return &DAT_e0810bf8;
      }
      iVar4 = fn_0044ce6c();
      puVar2 = (undefined1 *)0xe0a1086c;
      if (-1 < iVar4) {
        uVar1 = *(ushort *)(iVar3 + 0x202c);
        fn_004539f4(iVar3);
        if (uVar1 <= local_18[0]) {
          puVar2 = (undefined1 *)0x0;
        }
        return puVar2;
      }
      fn_004539f4(iVar3);
    }
  }
  return puVar2;
}



void fn_006cfd2c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_006cf9a4(param_2 + 8,param_4,param_3);
  if (iVar1 == 0) {
    local_10 = DAT_0089a638;
    uStack_c = DAT_0089a63c;
    fn_006d02f4(param_1,&local_10);
    return;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x60);
  uVar3 = *(undefined4 *)(iVar1 + 100);
  param_1[2] = *(undefined4 *)(iVar1 + 0x68);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



undefined1 * fn_006cfc9c(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int local_14;
  
  if (param_3 == 0) {
    return &DAT_e0e10bfd;
  }
  local_14 = 0;
  fn_00301f50(param_2,0x60);
  puVar1 = (undefined1 *)
           (**(code **)(*param_1 + 0x34))(param_1,param_2,0x60,&local_14,param_3,2,0x12);
  if ((((uint)puVar1 & 0x3ff) != 0x3f7) && (local_14 == 0)) {
    puVar1 = (undefined1 *)0xc8810bef;
  }
  return puVar1;
}



void fn_006cfc24(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_006cf9a4(param_2 + 8,param_4,param_3);
  if (iVar1 == 0) {
    local_10 = DAT_0089a638;
    uStack_c = DAT_0089a63c;
    fn_006d02f4(param_1,&local_10);
    return;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x54);
  uVar3 = *(undefined4 *)(iVar1 + 0x58);
  param_1[2] = *(undefined4 *)(iVar1 + 0x5c);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



uint fn_006cfa74(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x210);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c0);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = fn_006cf9a4(param_1,param_2,uVar2);
      if (iVar1 == 0 || iVar1 == -0x20) {
        fn_00453a8c(&local_28,s_ERROR_0089a626);
      }
      else {
        fn_00453a64(&local_28,iVar1 + 0x20);
      }
      local_30 = local_28;
      uStack_2c = uStack_24;
      iVar1 = fn_001010c8(param_3,&local_30,8);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0xffffffff;
}



undefined4 fn_006cfa60(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006cf9a4();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}


