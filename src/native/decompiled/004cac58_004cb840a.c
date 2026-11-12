#include "004cac58_004cb840a.h"



int fn_004cb184(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c0 [8];
  undefined1 local_b8 [16];
  undefined *local_a8;
  undefined1 local_a4;
  undefined1 local_24 [8];
  
  fn_0015f180(auStack_c0);
  local_24[0] = 0;
  iVar1 = fn_004d47c0(*(undefined4 *)(param_1 + 0x55c),param_2,0x554,auStack_c0,local_24,
                       param_2 + 0x5b8);
  if (iVar1 < 0) {
    if (*(char *)(param_1 + 0x558) != '\0') {
      return iVar1;
    }
  }
  else {
    iVar1 = fn_006d6d58(auStack_c0);
    if (iVar1 == 0) {
      local_a4 = 0;
      local_a8 = &DAT_00856d70;
      fn_006d6ce0(auStack_c0,&local_a8);
    }
    else {
      lVar2 = fn_006d6d3c(auStack_c0);
      lVar3 = fn_006d6d3c(&DAT_008c06c4);
      if (lVar2 != lVar3) {
        fn_0014f590(local_b8);
        fn_004ed700(local_b8,auStack_c0);
        fn_004ed810(param_2 + 0x5d8,local_b8);
        *(undefined1 *)(param_2 + 0x5d4) = local_24[0];
        return 0;
      }
    }
  }
  return -0x2e9eb7d8;
}



void fn_004caefc(undefined4 *param_1)

{
  *param_1 = &DAT_00855fd8;
  param_1[0x157] = 0;
  return;
}



undefined4 * fn_004caec4(undefined4 *param_1)

{
  *param_1 = &DAT_00855fd8;
  fn_00301f50(param_1 + 1,0x554);
  *(undefined1 *)(param_1 + 0x156) = 0;
  param_1[0x157] = 0;
  return param_1;
}



void fn_004cae1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *param_1 = &DAT_00855fc4;
  iVar1 = fn_0050d0fc(param_1 + 1,param_2);
  iVar1 = fn_005180d8(iVar1 + 0x28,param_3);
  *(undefined1 *)(iVar1 + 0x54) = param_4;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = param_5;
  return;
}



void fn_004caddc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00855fc4;
  iVar1 = fn_0050d0fc(param_1 + 1);
  iVar1 = fn_00124e48(iVar1 + 0x28);
  *(undefined1 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  return;
}



void fn_004cad7c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_004c61bc();
  *puVar1 = &DAT_00855f88;
  iVar2 = fn_0013d5c4(puVar1 + 0xee);
  iVar2 = fn_0013d5c4(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  return;
}



undefined1 *
fn_004cac58(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined1 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_006d897c(param_1 + 0xd0);
  if (iVar1 == 0) {
    fn_0050d1a0(param_1 + 0xee,param_4);
    fn_0050d1a0(param_1 + 0xf8,param_5);
    param_1[0x102] = param_6;
    *(undefined1 *)(param_1 + 0x103) = param_7;
    puVar2 = (undefined1 *)(**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (-1 < (int)puVar2) {
      puVar2 = (undefined1 *)
               fn_004ca178(param_1 + 0xd0,param_2,param_1,*(undefined4 *)(DAT_008bf4f4 + 0x20));
      if (-1 < (int)puVar2) {
        puVar2 = (undefined1 *)0x0;
      }
      return puVar2;
    }
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}


