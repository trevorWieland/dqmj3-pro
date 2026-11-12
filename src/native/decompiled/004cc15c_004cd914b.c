#include "004cc15c_004cd914b.h"



void fn_004cd8d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_004cd914(param_1,param_2,0);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    return;
  }
  fn_004cd914(param_1,param_2,1);
  return;
}



undefined4 fn_004cd914(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_78 [80];
  uint local_28;
  uint local_24;
  
  local_28 = 0;
  local_24 = 0;
  fn_00158f6c(*(undefined4 *)(param_1 + 8),0x8b0);
  fn_00158f6c(*(undefined4 *)(param_1 + 0xc),0x8f0);
  fn_00158f6c(*(undefined4 *)(param_1 + 0x10),0x26c4);
  if (param_2 == 0) {
    fn_004ef828(&DAT_008ee1b0);
    fn_0017821c(&DAT_008ee1c0,&DAT_008ed8c4,0x4b0);
    DAT_008ee1b2 = DAT_008ee1b2 & 0xfc;
    iVar3 = fn_006d73fc(&DAT_008ee1b0,*(undefined4 *)(param_1 + 8),&local_28,0x8b0);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    if (param_2 == 1) {
      fn_004efab0(&DAT_008ee670,1);
    }
    else {
      if (param_2 != 2) {
        return 2;
      }
      fn_004efab0(&DAT_008ee670,2);
    }
    fn_0017821c(&DAT_008ee680,&DAT_008ed8c4,0x4b0);
    if (param_3 == 0) {
      fn_0017821c(&DAT_008eeb30,&DAT_008edd78,0x3f0);
    }
    else {
      fn_004efb04(&DAT_008eeb30);
      DAT_008eeb32 = DAT_008eeb32 & 0xfb;
    }
    DAT_008ee672 = DAT_008ee672 & 0xfc;
    iVar3 = fn_006d7308(&DAT_008ee670,*(undefined4 *)(param_1 + 8),&local_28,0x8b0);
  }
  if ((iVar3 < 0) || (local_28 < 0x11)) {
    return 2;
  }
  fn_004edb64(auStack_78);
  iVar3 = fn_004ed840(auStack_78,*(undefined4 *)(param_1 + 0x10),0x26c4);
  if (-1 < iVar3) {
    iVar3 = fn_004ed9ec(auStack_78,*(undefined4 *)(param_1 + 0xc),0x8f0,9,9,2);
    if (((-1 < iVar3) &&
        (iVar3 = fn_004ed96c(auStack_78,*(int *)(param_1 + 8) + 0x10,local_28 - 0x10), -1 < iVar3))
       && (iVar3 = fn_004ed8ac(auStack_78,&local_24), iVar3 < 0)) {
      local_24 = 0;
    }
    fn_004ed950(auStack_78);
    fn_004edb54(auStack_78);
    if (local_24 != 0) {
      uVar1 = local_24 & 0xfffffff0;
      if (0x4d0 < uVar1 + 0x20) {
        return 1;
      }
      fn_004ed504(*(int *)(param_1 + 8) + 4,local_24 & 0xffff);
      bVar2 = *(byte *)(*(int *)(param_1 + 0xc) + (local_24 - 1));
      for (uVar4 = local_24; uVar4 < uVar1 + 0x10; uVar4 = uVar4 + 1) {
        *(byte *)(*(int *)(param_1 + 0xc) + uVar4) = ~bVar2;
      }
      fn_00158f6c(*(int *)(param_1 + 8) + 0x10,0x8a0);
      iVar3 = fn_004f0338(*(int *)(param_1 + 8) + 0x10,*(undefined4 *)(param_1 + 0xc),uVar1 + 0x10,
                           &DAT_008c06b4);
      if (-1 < iVar3) {
        piVar5 = *(int **)(DAT_008bf4f4 + 8);
        if (piVar5 + -0x40000 < (int *)0x3ff00000) {
          (**(code **)(*piVar5 + 0x1c))(piVar5,param_2,*(undefined4 *)(param_1 + 8),uVar1 + 0x20);
        }
        return 0;
      }
    }
  }
  return 2;
}



undefined4 fn_004cd68c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_68 [64];
  undefined4 auStack_28 [5];
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x10) == '\x01') {
    fn_00456510(*(int *)(param_1 + 0xc),4);
  }
  fn_00456400(*(undefined4 *)(param_1 + 0xc));
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x44);
  fn_004b73b0(auStack_68);
  iVar2 = fn_004bc44c();
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(iVar1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_68,uVar4);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,3);
  auStack_28[0] = *(undefined4 *)(param_2 + 0x14);
  fn_0015ef4c(auStack_68,auStack_28,4);
  piVar6 = *(int **)(param_2 + 0x10);
  for (piVar5 = (int *)*piVar6; piVar5 != piVar6; piVar5 = (int *)*piVar5) {
    fn_0047fb68(auStack_68,piVar5 + 2);
  }
  fn_0047fb68(auStack_68,param_3);
  DAT_008ed828 = &DAT_004a47f4;
  if ((*(char *)(iVar1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(iVar1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(iVar1,uVar4,auStack_68);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_68);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(iVar1,uVar4,auStack_68);
  fn_004b7520(auStack_68);
  return uVar4;
}



void fn_004cd58c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0050fb7c();
  *puVar1 = &DAT_00856168;
  iVar2 = fn_0013d5c4(puVar1 + 0x17);
  iVar2 = fn_00124e48(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  iVar2 = fn_004ed164(iVar2 + 0x5c);
  *(undefined4 *)(iVar2 + -0xa8) = 0x8000;
  *(undefined4 *)(iVar2 + -0xa4) = 0;
  return;
}



uint fn_004cc878(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == -2) {
    *(code **)(param_1 + 0x24) = fn_004cc9d8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::prepareNatTraversal";
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_004d4ed0(param_1 + 0x5c);
  if (((iVar1 == 0) && (*(char *)(param_1 + 0x58) != '\0')) ||
     ((iVar1 = fn_004d5ad0(param_1 + 0x5c), iVar1 == 0 && (*(char *)(param_1 + 0x58) != '\0')))) {
    *(code **)(param_1 + 0x24) = fn_004cccd0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NexConnectStationJob::resolveCurrentAddress";
    return unaff_r5 & 0xff00;
  }
  *(char **)(param_1 + 0x2c) = "NexConnectStationJob::prepareNatTraversal";
  *(code **)(param_1 + 0x24) = fn_004cc9d8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}


