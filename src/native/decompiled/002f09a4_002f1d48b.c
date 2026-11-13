#include "002f09a4_002f1d48b.h"



void fn_002f1d48(void)

{
  fn_002f1c5c();
  fn_002feef8();
  return;
}



undefined4 * fn_002f1c5c(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *param_1 = &PTR_FUN_00851e64;
  if (param_1[1] != 0) {
    uVar2 = fn_0068cc54(DAT_008977e8);
    fn_0041f1e8(uVar2,param_1[1]);
    param_1[1] = 0;
  }
  iVar3 = fn_0011dec8();
  if (iVar3 != 0) {
    fn_001fbba4();
    cVar1 = fn_0066e34c(DAT_00897850);
    (&DAT_00896ca8)[*(byte *)(*(int *)(param_1[0x17] + 4) + 0x104)] = cVar1 + '\x01';
  }
  uVar4 = param_1[4];
  uVar5 = uVar4;
  if ((uint)param_1[5] < uVar4) {
    do {
      uVar5 = uVar5 + 0xc;
    } while (uVar5 != param_1[5]);
  }
  fn_001008c4(uVar4,(int)(param_1[6] - uVar4) / 0xc,0);
  return param_1;
}



undefined4 * fn_002f1bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_00851e64;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = param_2;
  return param_1;
}


