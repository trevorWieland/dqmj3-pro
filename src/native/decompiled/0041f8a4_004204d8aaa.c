#include "0041f8a4_004204d8aaa.h"



void fn_0041fc90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041fd70(iVar1,param_1);
  return;
}



void fn_0041f8a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *local_20;
  
  local_20 = param_4;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = fn_006f6a6c();
    if (iVar1 == 1) {
      *(code **)(param_1 + 0x78) = fn_0041fb28;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return;
  }
  uVar2 = fn_002f68a4(param_1);
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar3 == &DAT_00896fe0) goto LAB_0041f928;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_0041f928:
  if (*(char *)(puVar6 + 4) == '\x02') {
    fn_0065d098(&local_20,uVar2,3);
    fn_0068974c(param_1,local_20,0,1);
    if (local_20 != &DAT_008f9cf4) {
      piVar4 = local_20 + -3;
      iVar1 = *piVar4;
      if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
      }
    }
    uVar2 = fn_0022f584((char *)&DAT_0041fb10,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x61) = 1;
    return;
  }
  fn_0065d098(&local_20,uVar2);
  fn_0068974c(param_1,local_20,0,1);
  if (local_20 != &DAT_008f9cf4) {
    piVar4 = local_20 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  fn_002f7420(uVar2);
  fn_0015b0dc();
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar3 == &DAT_00896fe0) goto LAB_0041f9ec;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_0041f9ec:
  if (*(char *)((int)puVar6 + 0x11) == '\x02') {
    pcVar5 = (char *)&DAT_0041fad4;
  }
  else {
    pcVar5 = (char *)&DAT_0041faf0;
  }
  uVar2 = fn_0022f584(pcVar5,0);
  fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
  uVar2 = fn_0022f584((char *)&DAT_0041fb10,0);
  fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
  return;
}


