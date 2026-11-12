#include "00442604_00443f4cba.h"



void fn_00443d98(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_60 [68];
  
  fn_002e69f8();
  iVar2 = fn_0066e3bc(DAT_00897850);
  if (iVar2 != *(int *)(param_1 + 0x9c)) {
    iVar2 = 0;
    do {
      iVar3 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(&DAT_00892f08)[iVar2]);
      iVar4 = fn_0066e3bc(DAT_00897850);
      if (iVar2 < iVar4) {
        fn_0066e368(DAT_00897850,iVar2,auStack_60);
        uVar5 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(&PTR_s_tb_player_00_00892f18)[iVar2]);
        fn_00190d50(uVar5,auStack_60);
        bVar1 = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
      }
      else {
        bVar1 = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      iVar2 = iVar2 + 1;
      *(byte *)(iVar3 + 0x44) = bVar1;
    } while (iVar2 < 4);
    uVar5 = fn_0066e3bc(DAT_00897850);
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
  }
  return;
}



void fn_00443d68(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00443e54(iVar1,param_1);
  return;
}



undefined4 fn_00443c78(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_60 [68];
  
  (**(code **)(*param_1 + 0x118))
            (param_1,L"rom:/data/Layout/menu/race_rule_setting/race_rule_setting_entry.arc",
             (char *)&DAT_00443d3c,&DAT_00443d34);
  iVar5 = 0;
  do {
    iVar2 = fn_001828f0(param_1[0x1d],(&DAT_00892f08)[iVar5]);
    iVar3 = fn_0066e3bc(DAT_00897850);
    if (iVar5 < iVar3) {
      fn_0066e368(DAT_00897850,iVar5,auStack_60);
      uVar4 = fn_001827b0(param_1[0x1d],(&PTR_s_tb_player_00_00892f18)[iVar5]);
      fn_00190d50(uVar4,auStack_60);
      bVar1 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    iVar5 = iVar5 + 1;
    *(byte *)(iVar2 + 0x44) = bVar1;
  } while (iVar5 < 4);
  iVar5 = fn_0066e3bc(DAT_00897850);
  param_1[0x27] = iVar5;
  return 1;
}


