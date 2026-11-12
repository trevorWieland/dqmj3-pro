#include "00445ff8_00447fb4ba.h"



void fn_004479ac(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  fn_00416e44();
  iVar1 = fn_00154ac8(0x2e);
  if (iVar1 == 0) {
    pcVar2 = (char *)&DAT_00447954;
  }
  else {
    pcVar2 = (char *)&DAT_00447930;
  }
  uVar3 = fn_0022f584(pcVar2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00447978(int param_1)

{
  fn_00416e40();
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x18) = 0;
  fn_00689824(param_1);
  *(undefined1 *)(param_1 + 0xd8) = 2;
  return;
}



void fn_00446efc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  char *local_28 [4];
  char *local_18;
  undefined4 uStack_14;
  
  uVar1 = fn_00446a48();
  iVar2 = fn_00661714();
  fn_00166824(local_28 + 4,&UNK_007c7a9c + iVar2 * 8);
  fn_006f5bec(param_1[0x38],local_28 + 4);
  local_30 = local_18;
  uStack_2c = uStack_14;
  fn_002317d8(local_38,uVar1,0);
  iVar2 = 0;
  local_28[0] = (char *)&DAT_00867b00;
  local_28[1] = "MenuMessageWiFiShopSilverCoin";
  local_28[2] = "MenuMessageWiFiShopGoldCoin";
  local_28[3] = "MenuMessageWiFiShopPlatinaCoin";
  do {
    if (0 < *(short *)((int)local_38 + iVar2 * 2 + 8)) {
      fn_0015b0f8((int)*(short *)((int)local_38 + iVar2 * 2 + 8));
      fn_0015b0dc(local_38[0]);
      uVar1 = fn_0022f584(local_28[iVar2],0);
      (**(code **)(*param_1 + 0x138))(param_1,uVar1,1,3);
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  *(undefined1 *)(param_1 + 0x36) = 3;
  fn_001588d4(local_38);
  return;
}


