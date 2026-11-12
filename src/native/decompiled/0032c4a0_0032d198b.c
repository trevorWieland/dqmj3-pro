#include "0032c4a0_0032d198b.h"



undefined4 fn_0032d198(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  param_1[0x16] = param_2;
  param_1[0x12] = (int)(*(float *)(param_2 + 0x48) + DAT_00896cb8);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  iVar2 = DAT_008f9e34;
  iVar1 = DAT_008f9e30;
  param_1[0xf] = DAT_008f9e2c;
  param_1[0x10] = iVar1;
  param_1[0x11] = iVar2;
  local_2c = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x3c);
  local_28 = *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x40);
  local_24 = *(float *)(param_2 + 0x10) + *(float *)(param_2 + 0x44);
  (**(code **)(*param_1 + 0x18))(param_1,&local_2c);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x1e] = 0;
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  fn_0026009c(param_1,param_2,1);
  iVar1 = fn_0068cafc(DAT_008977e8);
  fn_00260640(param_1,0xa035);
  iVar2 = param_1[0x15];
  local_38 = *(undefined4 *)(iVar1 + 0x1ac);
  uStack_34 = *(undefined4 *)(iVar1 + 0x1b4);
  local_30 = local_38;
  uVar3 = fn_0068c7e8(DAT_008977e8);
  fn_0023dca4(uVar3,iVar2,&local_38);
  uVar3 = fn_0068c7e8(DAT_008977e8);
  fn_0023e2ac(uVar3,iVar2);
  return 1;
}



undefined4 fn_0032ce98(int *param_1,int param_2)

{
  param_1[0x16] = param_2;
  param_1[0x12] = 0x41200000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x41200000;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  fn_00260640(param_1,0xa02d);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1e] = 0;
  fn_0026009c(param_1,param_2,1);
  return 1;
}



void fn_0032cb90(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008242f8;
  fn_00260014(param_1,1);
  uVar1 = param_1[0x24];
  uVar2 = uVar1;
  if ((uint)param_1[0x25] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x25]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x26] - uVar1) >> 2,0);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_0032cb44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_008242f8;
  *(undefined1 *)(puVar1 + 0x1f) = 0xff;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  return;
}


