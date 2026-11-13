#include "00580cdc_005813a0ab.h"



void fn_00580fd8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00581030(iVar1,param_1);
  return;
}



bool fn_00580fac(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0xa4) & 1 << (param_2 & 0xff)) != 0;
}



void fn_00580f08(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003f82b0();
  *puVar1 = &DAT_00842488;
  puVar1[10] = &DAT_008f9cf4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00580ecc) */

void fn_00580ea8(int param_1)

{
  undefined2 local_c [2];
  
  local_c[0] = 0;
  fn_00177c88((int *)(param_1 + 0x28),0,*(undefined4 *)(*(int *)(param_1 + 0x28) + -4),local_c,0,0,
               0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}


