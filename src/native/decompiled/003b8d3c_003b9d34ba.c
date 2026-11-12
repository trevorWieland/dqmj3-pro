#include "003b8d3c_003b9d34ba.h"



void fn_003b9ccc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003b9cfc(iVar1,param_1);
  return;
}



void fn_003b98b0(int param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  iVar2 = fn_001828f0(uVar1,DAT_00890aa4);
  iVar3 = fn_001828f0(uVar1,DAT_00890aa8);
  iVar4 = fn_001828f0(uVar1,DAT_00890aac);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | param_2;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | param_2;
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | param_2;
  return;
}



void fn_003b97cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fn_006cc314(&local_30,*(undefined4 *)(param_1 + 0x74));
  local_50 = local_30;
  uStack_4c = uStack_2c;
  uStack_48 = uStack_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  uStack_38 = uStack_18;
  uStack_34 = uStack_14;
  uVar2 = fn_002b15d4(*(undefined4 *)(param_1 + 0x78),1,&local_50,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  piVar3 = (int *)fn_002b1588(*(undefined4 *)(param_1 + 0x78),uVar2);
  (**(code **)(*piVar3 + 0x1c))(piVar3,1);
  iVar4 = fn_002b1588(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar1 = DAT_008f9e34;
  uVar2 = DAT_008f9e30;
  *(undefined4 *)(iVar4 + 0x1c) = DAT_008f9e2c;
  *(undefined4 *)(iVar4 + 0x20) = uVar2;
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  fn_0069e444(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
               *(undefined4 *)(&DAT_007bd09c + *(int *)(*(int *)(param_1 + 0x74) + 0x1c) * 4));
  return;
}


