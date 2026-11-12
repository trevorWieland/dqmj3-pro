#include "003036a4_00303cc0aaa.h"



undefined4 * fn_003036a4(undefined4 *param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[1] = 0x20;
  param_1[3] = param_4;
  param_1[2] = 0;
  *param_1 = &DAT_0085ac50;
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = param_3;
  if (param_2 == 0) {
    param_1[5] = &DAT_0081b4fe;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    iVar1 = fn_003037d8(param_1,0x10,uVar4 & 0xff);
    if (iVar1 != 0) goto LAB_003036ec;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_003036f8:
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  puVar2 = (undefined1 *)fn_002fec38((uVar5 - uVar4) + 1);
  param_1[0xb] = puVar2;
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    if ((uVar4 - 0x61 < 0x1a) && (iVar1 = fn_003037d8(param_1,0x10,uVar4 & 0xff), iVar1 != 0)) {
      iVar1 = fn_003037d8(param_1,8,uVar4 - 0x20 & 0xff);
      if (iVar1 == 0) goto LAB_0030373c;
      uVar3 = uVar4 - 0x20;
    }
    else {
LAB_0030373c:
      uVar3 = uVar4;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    iVar1 = fn_003037d8(param_1,8,uVar4 & 0xff);
    if (iVar1 != 0) goto LAB_00303770;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_0030377c:
  param_1[10] = uVar5;
  param_1[9] = uVar4;
  puVar2 = (undefined1 *)fn_002fec38((uVar5 - uVar4) + 1);
  param_1[0xc] = puVar2;
  do {
    if (uVar5 < uVar4) {
      return param_1;
    }
    if ((uVar4 - 0x41 < 0x1a) && (iVar1 = fn_003037d8(param_1,8,uVar4 & 0xff), iVar1 != 0)) {
      iVar1 = fn_003037d8(param_1,0x10,uVar4 + 0x20 & 0xff);
      if (iVar1 == 0) goto LAB_003037c0;
      uVar3 = uVar4 + 0x20;
    }
    else {
LAB_003037c0:
      uVar3 = uVar4;
    }
    uVar4 = uVar4 + 1;
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  } while( true );
LAB_003036ec:
  while ((uVar4 < uVar5 && (iVar1 = fn_003037d8(param_1,0x10,uVar5 & 0xff), iVar1 == 0))) {
    uVar5 = uVar5 - 1;
  }
  goto LAB_003036f8;
LAB_00303770:
  while ((uVar4 < uVar5 && (iVar1 = fn_003037d8(param_1,8,uVar5 & 0xff), iVar1 == 0))) {
    uVar5 = uVar5 - 1;
  }
  goto LAB_0030377c;
}


