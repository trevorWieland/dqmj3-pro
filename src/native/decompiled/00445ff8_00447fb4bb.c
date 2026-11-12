#include "00445ff8_00447fb4bb.h"



void fn_00447fb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar2 = fn_00446a48();
  fn_002317d8(&local_18,uVar2,0);
  uVar1 = fn_00661714(uVar2);
  *(short *)(*(int *)(param_1 + 0xd4) + 0x1c) = (short)uVar2;
  fn_00147974(*(int *)(param_1 + 0xd4) + 0x20,local_18);
  *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x25) = uVar1;
  fn_005d2adc(*(undefined4 *)(param_1 + 0xd4),uVar2);
  fn_005d2aac(*(undefined4 *)(param_1 + 0xd4));
  fn_001588d4(&local_18);
  return;
}



void fn_00447f88(undefined4 param_1)

{
  fn_00416e54();
  fn_00447520(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00447a54(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = fn_00446a48();
  if (((iVar1 == 0x385 || iVar1 == 0x386) || (iVar1 == 0x387 || iVar1 == 0x388)) ||
     (iVar2 = fn_002e8120(), iVar2 != 0)) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    uVar3 = fn_0022f584((char *)&DAT_00447bec,0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar3,0,3);
    *(undefined1 *)(param_1 + 0x36) = 6;
    return;
  }
  iVar2 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  if (499 < iVar2) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    uVar3 = fn_0022f584((char *)&DAT_00447c14,0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar3,0,3);
    *(undefined1 *)(param_1 + 0x36) = 6;
    return;
  }
  iVar1 = fn_00661714(iVar1);
  fn_00166824(&local_38,&UNK_007c7a9c + iVar1 * 8);
  local_28 = local_38;
  uStack_24 = uStack_34;
  iVar1 = fn_006f5bec(param_1[0x38],&local_28,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    uVar3 = fn_0022f584((char *)&DAT_00447c38,0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar3,0,3);
    *(undefined1 *)(param_1 + 0x36) = 6;
    return;
  }
  *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094b;
  fn_00446efc(param_1,param_2);
  return;
}



void fn_00447a24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00448020(iVar1,param_1);
  return;
}


