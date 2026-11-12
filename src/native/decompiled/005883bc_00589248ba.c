#include "005883bc_00589248ba.h"



void fn_00589168(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00589198(iVar1,param_1);
  return;
}



void fn_005890a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0031e264();
  *puVar1 = &DAT_00843644;
  return;
}



void fn_00588ee4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_30 [32];
  
  iVar1 = fn_001a46f4(param_3);
  if (iVar1 != 0) {
    fn_0031db8c(param_1,param_2,param_3);
    return;
  }
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[0x10] = '\0';
  local_30[0x11] = '\0';
  local_30[0x12] = '\0';
  local_30[0x13] = '\0';
  local_30[0x14] = '\0';
  local_30[0x15] = '\0';
  local_30[0x16] = '\0';
  local_30[0x17] = '\0';
  local_30[0x18] = '\0';
  local_30[0x19] = '\0';
  local_30[0x1a] = '\0';
  local_30[0x1b] = '\0';
  local_30[0x1c] = '\0';
  local_30[0x1d] = '\0';
  local_30[0x1e] = '\0';
  local_30[0x1f] = '\0';
  uVar4 = *(undefined4 *)(param_1 + param_2 * 4 + 0x1c);
  if (param_2 == 0) {
    pcVar2 = (char *)&DAT_00588fa4;
  }
  else {
    fn_0017d96c(local_30,0x20,0x1f,(char *)&DAT_00588fc4,param_2 + -1);
    pcVar2 = local_30;
  }
  uVar3 = fn_0022f584(pcVar2,0);
  fn_00394544(uVar4,uVar3);
  fn_002b1f40(uVar4,0);
  return;
}


