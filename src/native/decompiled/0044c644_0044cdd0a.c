#include "0044c644_0044cdd0a.h"



int fn_0044ca30(void)

{
  int iVar1;
  undefined4 local_10;
  char local_c [12];
  
  local_10 = fn_0014d9b8();
  iVar1 = fn_0044e430(&local_10,local_c);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x44ca54);
  }
  return (int)local_c[0];
}



int fn_0044c9fc(void)

{
  int iVar1;
  undefined4 local_10;
  char local_c [12];
  
  local_10 = fn_0014d9b8();
  iVar1 = fn_0044e3f8(&local_10,local_c);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x44ca20);
  }
  return (int)local_c[0];
}



void fn_0044c984(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ***local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  uVar1 = fn_00525d68(param_2);
  uVar2 = fn_00525d68(param_1);
  local_28 = &local_28;
  local_24 = 1;
  local_20[0] = DAT_0089a670;
  fn_0044e3a0(local_20,4,1,local_28,1,0x200,param_2,param_1,uVar1,uVar2,param_3,1);
  return;
}



bool fn_0044c844(void)

{
  return DAT_0089a658 != 0;
}



int fn_0044c79c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = param_5;
  local_28 = param_3;
  uStack_24 = param_4;
  local_20 = param_2;
  iVar1 = fn_0044d810(&local_2c,&local_28,param_6,param_7,param_8,param_9,param_10);
  if (-1 < iVar1) {
    iVar2 = fn_001233c4(param_1,local_2c);
    iVar1 = 0;
    if (iVar2 < 0) {
      (**(code **)(*local_2c + 0x30))();
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



void fn_0044c644(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 *local_38;
  undefined *local_34;
  int *local_30;
  int local_20;
  int local_1c;
  
  local_20 = param_5;
  local_1c = param_5 + 0x416c4;
  local_38 = &LAB_0044c72c;
  local_34 = &DAT_0044c728;
  local_30 = &local_20;
  local_58 = param_3;
  uStack_54 = param_4;
  local_4c = param_1;
  uStack_48 = param_2;
  iVar1 = fn_00731dd0(&local_58,0xffffffff,8,param_6,8,0,"1.2.7.f-NINTENDO-CTR-SDK-v1",0x38);
  if (iVar1 != 0) {
code_r0x0044c70c:
    fn_0044c74c(iVar1);
    return;
  }
  iVar1 = fn_00730a94(&local_58,4);
  if (iVar1 == 1) {
    iVar1 = fn_00731cf0(&local_58);
    if (iVar1 != 0) goto code_r0x0044c70c;
  }
  else {
    fn_00731cf0(&local_58);
    fn_0044c74c(iVar1);
  }
  return;
}



undefined4 fn_0044c74c(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 0;
  default:
    return 0xffffffff;
  case 0xfffffffb:
    return 0xfffffffe;
  case 0xfffffffc:
  case 0xfffffffe:
    return 0xfffffffc;
  }
}


