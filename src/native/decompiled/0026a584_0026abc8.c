#include "0026a584_0026abc8.h"



void fn_0026abc8(void)

{
  uint *puVar1;
  int iVar2;
  uint local_8 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
  local_8[0] = *(ushort *)(iVar2 + 0x22) + 1;
  local_8[1] = 999;
  puVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    puVar1 = local_8;
  }
  *(short *)(iVar2 + 0x22) = (short)*puVar1;
  return;
}



undefined4 fn_0026a960(uint param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 2) || (param_1 == 2 || param_1 == 3)) || (param_1 == 4 || param_1 == 5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0026a948(void)

{
  uint *puVar1;
  int iVar2;
  uint local_8 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
  local_8[0] = *(ushort *)(iVar2 + 0x26) + 1;
  local_8[1] = 999;
  puVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    puVar1 = local_8;
  }
  *(short *)(iVar2 + 0x26) = (short)*puVar1;
  return;
}



void fn_0026a930(void)

{
  uint *puVar1;
  int iVar2;
  uint local_8 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
  local_8[0] = *(ushort *)(iVar2 + 0x20) + 1;
  local_8[1] = 999;
  puVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    puVar1 = local_8;
  }
  *(short *)(iVar2 + 0x20) = (short)*puVar1;
  return;
}



void fn_0026a778(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short *psVar6;
  int iVar7;
  char local_58 [56];
  
  cVar1 = (char)param_2;
  iVar7 = (int)cVar1;
  if (iVar7 == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar3 = fn_00174828(DAT_008977e4);
    iVar3 = iVar3 + cVar1 * 0x418;
    psVar6 = (short *)(iVar3 + -0x4080);
    if ((iVar7 - 0x10U < 4 || iVar7 - 0x18U < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
      if (*(char *)(iVar3 + -0x3c6c) == '\0') {
        if (iVar7 - 0x18U < 8) {
          uVar4 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc),iVar7 + -0x18);
        }
        else {
          uVar4 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),(int)(char)(iVar7 - 0x10U));
        }
        fn_0026abe0(param_1,psVar6,uVar4,param_2);
      }
      else {
        fn_0026a990(param_1,psVar6);
        local_58[0] = cVar1;
        uVar4 = fn_00182988(DAT_008977e4);
        puVar5 = (undefined4 *)fn_0026a548(uVar4,local_58);
        *(undefined4 *)(param_1 + 0xac) = *puVar5;
        *(undefined4 *)(param_1 + 0xb0) = puVar5[1];
        *(undefined4 *)(param_1 + 0xb4) = puVar5[2];
        *(undefined4 *)(param_1 + 0xb8) = puVar5[3];
        *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(puVar5 + 4);
      }
    }
    else {
      *(short *)(param_1 + 0x1c) = *psVar6;
      fn_0042e9d4(param_1,iVar3 + -0x407c);
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(iVar3 + -0x4028);
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(iVar3 + -0x4027);
      fn_0042e9d4(param_1,iVar3 + -0x407c);
      *(undefined1 *)(param_1 + 0x27) = 0;
      fn_0042e8d0(param_1,iVar3 + -0x4025);
      fn_0042e9bc(param_1,iVar3 + -0x3dfc);
      fn_006f3bdc(psVar6,local_58);
      fn_0042ec28(param_1,local_58);
      iVar7 = fn_00182988(DAT_008977e4);
      *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(iVar7 + 0x3b4);
      uVar2 = fn_00661714((int)*psVar6);
      *(undefined1 *)(param_1 + 0x25) = uVar2;
      *(undefined1 *)(param_1 + 0x26) = 0;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



void fn_0026a990(int param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_40 [52];
  
  *(undefined2 *)(param_1 + 0x1c) = *param_2;
  fn_0042e9d4(param_1,param_2 + 2);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)((int)param_2 + 0x59);
  fn_0042e9d4(param_1,param_2 + 2);
  *(undefined1 *)(param_1 + 0x45b) = *(undefined1 *)(param_2 + 0x20a);
  uVar2 = fn_00176dc0(param_2);
  *(undefined2 *)(param_1 + 0x2c) = uVar2;
  *(undefined2 *)(param_1 + 0x2a) = param_2[0xe];
  iVar3 = fn_00176dc0(param_2);
  if (iVar3 == (short)param_2[0x16]) {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  else {
    iVar3 = fn_00176dc0(param_2);
    if (iVar3 < (short)param_2[0x16]) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x2e) = uVar1;
  }
  uVar2 = fn_00176e70(param_2);
  *(undefined2 *)(param_1 + 0x32) = uVar2;
  *(undefined2 *)(param_1 + 0x30) = param_2[0xf];
  iVar3 = fn_00176e70(param_2);
  if (iVar3 == (short)param_2[0x17]) {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  else {
    iVar3 = fn_00176e70(param_2);
    if (iVar3 < (short)param_2[0x17]) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x34) = uVar1;
  }
  uVar2 = fn_006f4520(param_2);
  *(undefined2 *)(param_1 + 0x36) = uVar2;
  iVar3 = fn_006f4520(param_2);
  if (iVar3 == (short)param_2[0x18]) {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar3 = fn_006f4520(param_2);
    if (iVar3 < (short)param_2[0x18]) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x38) = uVar1;
  }
  uVar2 = fn_006f2fa8(param_2);
  *(undefined2 *)(param_1 + 0x3a) = uVar2;
  iVar3 = fn_006f2fa8(param_2);
  if (iVar3 == (short)param_2[0x19]) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  else {
    iVar3 = fn_006f2fa8(param_2);
    if (iVar3 < (short)param_2[0x19]) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x3c) = uVar1;
  }
  uVar2 = fn_006f4044(param_2);
  *(undefined2 *)(param_1 + 0x3e) = uVar2;
  iVar3 = fn_006f4044(param_2);
  if (iVar3 == (short)param_2[0x1a]) {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    iVar3 = fn_006f4044(param_2);
    if (iVar3 < (short)param_2[0x1a]) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x40) = uVar1;
  }
  uVar2 = fn_006f3f7c(param_2);
  *(undefined2 *)(param_1 + 0x42) = uVar2;
  iVar3 = fn_006f3f7c(param_2);
  if (iVar3 == (short)param_2[0x1b]) {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  else {
    iVar3 = fn_006f3f7c(param_2);
    if (iVar3 < (short)param_2[0x1b]) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x44) = uVar1;
  }
  fn_0042e8d0(param_1,(int)param_2 + 0x5b);
  fn_0042e9bc(param_1,param_2 + 0x142);
  fn_006f3bdc(param_2,auStack_40);
  fn_0042ec28(param_1,auStack_40);
  *(undefined1 *)(param_1 + 0x330) = 0;
  fn_0042ec74(param_1);
  return;
}



void fn_0026a710(undefined4 *param_1)

{
  *param_1 = &DAT_0081dfd0;
  if (param_1[0xe6] != 0) {
    fn_00120ec8();
    fn_002feef8();
    param_1[0xe6] = 0;
  }
  fn_002feef8(param_1);
  return;
}



int fn_0026a584(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_0081dfd0;
  iVar1 = fn_00101a1c(param_1 + 1,&LAB_002d3f0c,0x20,0x10);
  iVar1 = fn_00101a1c(iVar1 + 0x200,&LAB_002d3f0c,0x20,2);
  iVar1 = fn_002d3124(iVar1 + 0x40);
  iVar1 = fn_002a1aa8(iVar1 + 0x148);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar4 = iVar1 + -0x38c;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  *(undefined1 *)(iVar1 + 0x12) = 0;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x16) = 0;
  *(undefined1 *)(iVar1 + 0x17) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  iVar3 = 0;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  do {
    iVar2 = iVar4 + iVar3 * 0x20;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 4) = 0;
    *(undefined1 *)(iVar2 + 5) = 0;
    *(undefined2 *)(iVar2 + 6) = 0;
    *(undefined2 *)(iVar2 + 8) = 0;
    *(undefined1 *)(iVar2 + 10) = 0;
    *(undefined1 *)(iVar2 + 0xb) = 0;
    *(undefined2 *)(iVar2 + 0xc) = 0;
    *(undefined2 *)(iVar2 + 0xe) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(undefined2 *)(iVar2 + 0x12) = 0;
    *(undefined2 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined1 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x21) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    iVar2 = iVar4 + iVar3 * 0x9c;
    *(undefined1 *)(iVar2 + 0x254) = 0;
    *(undefined1 *)(iVar2 + 0x255) = 0;
    *(undefined2 *)(iVar2 + 0x256) = 0;
    *(undefined2 *)(iVar2 + 600) = 0;
    *(undefined1 *)(iVar2 + 0x25a) = 0;
    *(undefined1 *)(iVar2 + 0x25b) = 0;
    *(undefined2 *)(iVar2 + 0x25c) = 0;
    *(undefined2 *)(iVar2 + 0x25e) = 0;
    *(undefined1 *)(iVar2 + 0x260) = 0;
    *(undefined1 *)(iVar2 + 0x261) = 0;
    *(undefined2 *)(iVar2 + 0x262) = 0;
    *(undefined2 *)(iVar2 + 0x264) = 0;
    *(undefined1 *)(iVar2 + 0x266) = 0;
    *(undefined1 *)(iVar2 + 0x267) = 0;
    *(undefined2 *)(iVar2 + 0x268) = 0;
    *(undefined2 *)(iVar2 + 0x26a) = 0;
    *(undefined1 *)(iVar2 + 0x26c) = 0;
    *(undefined1 *)(iVar2 + 0x26d) = 0;
    *(undefined2 *)(iVar2 + 0x26e) = 0;
    *(undefined2 *)(iVar2 + 0x270) = 0;
    *(undefined4 *)(iVar2 + 0x272) = 0;
    *(undefined4 *)(iVar2 + 0x276) = 0;
    *(undefined4 *)(iVar2 + 0x27a) = 0;
    *(undefined4 *)(iVar2 + 0x27e) = 0;
    *(undefined4 *)(iVar2 + 0x282) = 0;
    *(undefined4 *)(iVar2 + 0x286) = 0;
    fn_00301f50(iVar2 + 0x28c,0x60);
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x2ec) = 0;
  } while (iVar3 < 2);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return iVar4;
}


