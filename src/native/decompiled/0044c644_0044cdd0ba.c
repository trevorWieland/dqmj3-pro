#include "0044c644_0044cdd0ba.h"



uint fn_0044cbc0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c [3];
  
  local_16 = 0;
  local_18 = 1;
  local_17 = 0;
  local_14 = param_1;
  uStack_10 = param_2;
  local_c[0] = fn_0014d9b8();
  uVar1 = fn_0044e518(local_c,&local_18);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (0xdb < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xe6)) {
    uVar1 = 0xc8804482;
  }
  if (-1 < (int)uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



uint fn_0044cb2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined1 auStack_28 [12];
  undefined4 local_1c [2];
  
  fn_0044cc30(auStack_28,1,param_1,param_2);
  local_1c[0] = DAT_0089a670;
  uVar1 = fn_0044e4bc(local_1c,auStack_28,param_5,param_6,0xffffffff,0xffffffff,param_3,param_4);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (0xdb < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xe6)) {
    uVar1 = 0xc8804482;
  }
  return uVar1;
}



uint fn_0044ca90(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  int *local_14 [2];
  
  fn_0044cc30(auStack_20,1);
  uVar1 = fn_0044d9cc(local_14,auStack_20,0);
  if ((((uVar1 & 0x3fc00) == 0x4400) && (0xdb < (uVar1 & 0x3ff))) && ((uVar1 & 0x3ff) < 0xe6)) {
    uVar1 = 0xc8804482;
  }
  if ((-1 < (int)uVar1) && (uVar1 = fn_001233c4(param_1,local_14[0],0), (int)uVar1 < 0)) {
    (**(code **)(*local_14[0] + 0x30))();
  }
  return uVar1;
}



undefined4 fn_0044ca64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_0014d9ec(param_1 + 4,local_8,param_2,param_3);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x44ca84);
  }
  return local_8[0];
}


