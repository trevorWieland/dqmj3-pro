#include "004cc15c_004cd914ab.h"



uint fn_004cc7a8(int param_1)

{
  code *pcVar1;
  uint unaff_r5;
  
  fn_004ed810(*(int *)(param_1 + 0x54) + 4,param_1 + 0x60);
  pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x54);
  (*pcVar1)(*(undefined4 **)(param_1 + 0x54),pcVar1,0x10000,0);
  fn_004c8c60(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,0);
  fn_004cee00(*(undefined4 *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0),param_1 + 0x5c,
               (int)*(char *)(param_1 + 0x58));
  *(code **)(param_1 + 0x24) = fn_0050f57c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "ConnectStationJob::SendConnectionRequest";
  return unaff_r5 & 0xff00;
}



void fn_004cc394(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  fn_004ed068(param_1 + 0xe0);
  fn_004ed13c(param_1 + 0xe0);
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  uVar4 = 1;
  pcVar3 = *(code **)(DAT_008bf4d4 + 0x78);
  bVar5 = pcVar3 != (code *)0x0;
  if (bVar5) {
    param_3 = *(int *)(param_1 + 0x70);
  }
  uVar2 = extraout_r1;
  if (bVar5 && param_3 != 0) {
    uVar2 = (uint)*(byte *)(DAT_008bf4d4 + 0x80);
  }
  if ((bVar5 && param_3 != 0) && uVar2 != 0) {
    local_20 = 0;
    local_1c = 0;
    iVar1 = fn_006d9d3c(*(undefined4 *)(DAT_008bf4d4 + 0x7c),&local_20);
    if ((-1 < iVar1) && (iVar1 = (*pcVar3)(&local_20), iVar1 == 1)) {
      uVar4 = 0;
    }
  }
  fn_004c7e40(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c,uVar4);
  return;
}



void fn_004cc2e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  do {
    while( true ) {
      if (iVar2 == param_1 + 8) {
        return;
      }
      uVar1 = *(uint *)(param_2 + 0x1c);
      if (*(uint *)(iVar2 + 0x24) != uVar1) break;
LAB_004cc340:
      iVar3 = *(int *)(iVar2 + 4);
      fn_0050d178(iVar2 + 8,uVar1,0x8000,0);
      fn_004f0c1c(param_1 + 4,iVar2);
      fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar2);
      iVar2 = iVar3;
    }
    uVar4 = fn_006d6d3c(iVar2 + 0x10);
    uVar5 = fn_006d6d3c(param_2 + 8);
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20) ^ (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar5 == (int)uVar4 && uVar1 == 0) goto LAB_004cc340;
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


