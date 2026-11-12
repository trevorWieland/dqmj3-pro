#include "004c87f0_004cccd0b.h"



uint fn_004cccd0(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint unaff_r5;
  
  iVar1 = fn_004c9370(*(undefined4 *)(DAT_008bf4f4 + 0x20),param_1 + 0x5c);
  if ((iVar1 != 0) && (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == -2)) {
    fn_004ed810(DAT_008c06a0 + 0xac,param_1 + 0x60);
    pcVar2 = (code *)**(undefined4 **)(DAT_008c06a0 + 0xac);
    (*pcVar2)((undefined4 *)(DAT_008c06a0 + 0xac),pcVar2,0x8000,0);
  }
  *(code **)(param_1 + 0x24) = fn_004cc7a8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NexConnectStationJob::tryCurrentAddress";
  return unaff_r5 & 0xff00;
}



undefined1 *
fn_004cc444(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [84];
  
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(char *)(param_1 + 0x58) = (char)param_5;
  (**(code **)(*param_4 + 0x20))(param_4,*(code **)(*param_4 + 0x20),0x8000,0);
  iVar1 = fn_004d5ad0(param_4 + 1);
  if (iVar1 == 0) {
    fn_0050d090(param_1 + 0x88,param_4 + 0xb);
    fn_0050d090(param_1 + 0xb0,param_4 + 1);
  }
  else {
    fn_00518140(param_1 + 0x84,param_4);
  }
  if (*(char *)(param_1 + 0xac) == '\0') {
    *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_1 + 0xd4);
  }
  if (*(char *)(param_1 + 0xab) == '\0') {
    *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)(param_1 + 0xd3);
  }
  if (*(char *)(param_1 + 0xad) == '\0') {
    *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)(param_1 + 0xd5);
  }
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x54) + 4);
  pcVar5 = *(code **)*puVar2;
  (*pcVar5)(puVar2,pcVar5,0x8000,0);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xa4);
  iVar1 = DAT_008c06a0;
  if (*(char *)(DAT_008bf4f4 + 0x31) == '\0') {
LAB_004cc588:
    return &DAT_e0a14827;
  }
  pcVar5 = *(code **)(*(int *)(DAT_008c06a0 + 4) + 0x20);
  (*pcVar5)((int *)(DAT_008c06a0 + 4),pcVar5,0x8000,0);
  if (*(int *)(param_1 + 0x90) == *(int *)(iVar1 + 0x10)) {
    iVar3 = fn_004d5aac(iVar1 + 8);
    if (iVar3 != 0) goto LAB_004cc588;
    fn_0050d1a0(param_1 + 0x5c,param_1 + 0xb0);
  }
  else {
    fn_0050d1a0(param_1 + 0x5c,param_1 + 0x88);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    fn_0050d060(param_1 + 0x5c,*(int *)(param_1 + 0x54) + 4);
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == -2) {
    fn_00518140(DAT_008c06a0 + 0x58,param_1 + 0x84);
    pcVar5 = *(code **)(*(int *)(DAT_008c06a0 + 0x58) + 0x20);
    (*pcVar5)((int *)(DAT_008c06a0 + 0x58),pcVar5,0x8000,0);
    fn_004ed810(DAT_008c06a0 + 0xac,param_1 + 0x60);
    pcVar5 = (code *)**(undefined4 **)(DAT_008c06a0 + 0xac);
    (*pcVar5)((undefined4 *)(DAT_008c06a0 + 0xac),pcVar5,0x8000,0);
    iVar3 = fn_004d4edc(param_1 + 0x5c);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xf8) = 1;
      iVar1 = fn_004d4edc(iVar1 + 8);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xf4) = 1;
      }
    }
    if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
      DAT_008edd60 = 0;
      DAT_008edd61 = 0;
    }
  }
  fn_00124e48(auStack_7c);
  fn_0050d090(auStack_78,param_1 + 0x5c);
  puVar4 = (undefined1 *)
           fn_0050ef30(param_1,param_2,*(undefined4 *)(param_1 + 0x54),auStack_7c,param_5);
  if ((int)puVar4 < 0) {
    fn_0051811c(auStack_7c);
    return puVar4;
  }
  *(char **)(param_1 + 0x2c) = "NexConnectStationJob::testCurrentAddress";
  *(code **)(param_1 + 0x24) = fn_004cc878;
  *(undefined4 *)(param_1 + 0x28) = 0;
  fn_0051811c(auStack_7c);
  return (undefined1 *)0x0;
}



undefined4 * fn_004cc0c4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004c61bc();
  *puVar1 = &DAT_00856120;
  puVar1[0xee] = 0;
  puVar1[0xef] = 0;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x20,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_00456a78();
  }
  puVar1[0xf0] = uVar2;
  return puVar1;
}


