#include "00654b60_00655488ba.h"



void fn_00654e54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0x120) != 0) {
    while (*(short *)(param_1 + iVar1 * 2 + 0x124) != param_2) {
      iVar1 = iVar1 + 1;
      if ((int)(uint)*(byte *)(param_1 + 0x120) <= iVar1) {
        return;
      }
    }
    iVar2 = param_1 + 0x120 + ((int)(short)iVar1 >> 6) * 8;
    uVar3 = *(uint *)(iVar2 + 0x150);
    uVar4 = *(uint *)(iVar2 + 0x154);
    uVar5 = fn_00301bb0(1,0,(int)(short)iVar1 & 0x3f);
    *(uint *)(iVar2 + 0x150) = (uint)uVar5 | uVar3;
    *(uint *)(iVar2 + 0x154) = (uint)((ulonglong)uVar5 >> 0x20) | uVar4;
  }
  return;
}



void fn_00654d7c(int param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  short local_18 [6];
  
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = param_2[1];
  *(undefined4 *)(param_1 + 0x34) = param_2[2];
  local_18[0] = *(short *)(param_1 + 0x1c);
  local_18[2] = 0;
  iVar1 = fn_00176dc0(param_1);
  local_18[4] = (short)iVar1;
  if (local_18[2] <= iVar1) {
    psVar2 = local_18 + 2;
    if ((int)local_18[2] <= (int)local_18[0]) {
      psVar2 = local_18;
    }
    if (iVar1 < *psVar2) {
      psVar2 = local_18 + 4;
    }
    *(short *)(param_1 + 0x1c) = *psVar2;
    local_18[0] = *(short *)(param_1 + 0x1e);
    local_18[2] = 0;
    iVar1 = fn_00176e70(param_1);
    local_18[4] = (short)iVar1;
    if (local_18[2] <= iVar1) {
      psVar2 = local_18 + 2;
      if ((int)local_18[2] <= (int)local_18[0]) {
        psVar2 = local_18;
      }
      if (iVar1 < *psVar2) {
        psVar2 = local_18 + 4;
      }
      *(short *)(param_1 + 0x1e) = *psVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



void fn_00654cec(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 extraout_r1;
  
  cVar1 = *(char *)(param_1 + 0x3fa);
  if (cVar1 == '\x05') {
    fn_00169f1c(*(byte *)(param_1 + 0x3fc) + 1,*(undefined1 *)(param_1 + 0x120));
    *(undefined1 *)(param_1 + 0x3fc) = extraout_r1;
    return;
  }
  if (cVar1 == '\x06') {
    uVar3 = *(byte *)(param_1 + 0x3fc) + 1;
    *(char *)(param_1 + 0x3fc) = (char)uVar3 + (char)(uVar3 / 3) * -3;
    return;
  }
  if (cVar1 == '\a') {
    bVar2 = ~*(byte *)(param_1 + 0x3fc) & 1;
  }
  else {
    if (cVar1 != '\b') {
      return;
    }
    bVar2 = *(char *)(param_1 + 0x3fc) + 1U & 3;
  }
  *(byte *)(param_1 + 0x3fc) = bVar2;
  return;
}



void fn_00654ce4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5a) = param_2;
  return;
}


