#include "00508b3c_00509488.h"



void fn_00509488(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 0x148) = 0;
  fn_004ed714(param_1 + 0x14c);
  *(undefined1 *)(param_1 + 0x13d) = 0xfd;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x128) - 0x100000U < 0x3ff00000) {
    fn_0050a998();
  }
  if (*(int *)(param_1 + 0x124) - 0x100000U < 0x3ff00000) {
    fn_0050a998();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  puVar1 = (undefined4 *)fn_004ed584(auStack_20);
  *(undefined4 *)(param_1 + 300) = *puVar1;
  *(undefined4 *)(param_1 + 0x130) = puVar1[1];
  *(undefined4 *)(param_1 + 0x134) = puVar1[2];
  *(undefined4 *)(param_1 + 0x138) = puVar1[3];
  *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(puVar1 + 4);
  return;
}



int fn_00509460(void)

{
  return (int)DAT_008bf4c9;
}



void fn_0050942c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  return;
}



void fn_00509398(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    uVar1 = fn_00656b0c(iVar3);
    uVar2 = 0;
    uVar1 = (uint)((ulonglong)uVar1 * 0xaceb0f89 + 0xaceb0f89 >> 0x2a);
    if (uVar1 != 0) {
      do {
        fn_004f0788(iVar3 + uVar2 * 0x5ec);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    fn_00656b7c(iVar3);
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[7] = 0xffffffff;
  param_1[9] = 0;
  param_1[8] = 0xffffffff;
  return;
}



int fn_0050935c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 + param_1[1];
  uVar1 = *(uint *)*param_1;
  if ((int)uVar1 <= (int)uVar3) {
    uVar3 = uVar3 - uVar1;
  }
  if (uVar3 < uVar1) {
    iVar2 = ((uint *)*param_1)[1] + uVar3 * 0x5ec;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



undefined1 * fn_00509324(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



void fn_00509300(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



int fn_0050922c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[7];
  iVar4 = param_1[2];
  if (iVar2 <= iVar4) {
    param_4 = *piVar1;
  }
  iVar3 = iVar2 - iVar4;
  if (iVar2 <= iVar4) {
    iVar3 = iVar3 + param_4;
  }
  if (0 < iVar3 + -1) {
    uVar5 = param_1[2];
    iVar2 = param_1[2] + 1;
    if (*piVar1 <= iVar2) {
      iVar2 = 0;
    }
    param_1[2] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar2 = piVar1[7] - param_1[2];
    if (piVar1[7] <= param_1[2]) {
      iVar2 = iVar2 + *piVar1;
    }
    iVar2 = *piVar1 - (iVar2 + -1);
    if (DAT_008bf4a0 != 0) {
      uVar6 = fn_004eea84(DAT_008bf4a0,piVar1[10]);
      fn_004f15b4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),iVar2,iVar2 >> 0x1f);
    }
    if (uVar5 < *(uint *)*param_1) {
      return ((uint *)*param_1)[1] + uVar5 * 0x5ec;
    }
  }
  return 0;
}



void fn_00509218(int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_00509204(int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_00509164(int *param_1)

{
  int iVar1;
  
  param_1[2] = ((int *)*param_1)[3];
  iVar1 = param_1[2] - param_1[1];
  param_1[3] = iVar1;
  if (iVar1 < 0) {
    param_1[3] = iVar1 + *(int *)*param_1;
  }
  return;
}



undefined1 * fn_00509098(uint *param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 2) {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  else if (param_1[1] == 0) {
    uVar2 = fn_004ed2e8(0);
    if (0 < (int)param_2) {
      uVar3 = fn_00656e58(param_2 * 0x5ec,uVar2,4);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (uVar3 + uVar4 * 0x5ec != 0) {
            fn_004f0700();
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
      }
      if ((0 < (int)param_2) && (uVar3 != 0)) {
        param_1[1] = uVar3;
        *param_1 = param_2;
      }
    }
    puVar1 = (undefined1 *)0x0;
    param_1[3] = 0xffffffff;
    param_1[4] = 0xffffffff;
    param_1[7] = 0xffffffff;
    param_1[5] = 0;
    param_1[8] = 0xffffffff;
    param_1[9] = 0;
    param_1[10] = param_3;
  }
  else {
    puVar1 = &DAT_e0a14821;
  }
  return puVar1;
}



void fn_0050905c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_00856fd0;
  *(undefined1 *)(puVar1 + 5) = 0xfd;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



void fn_0050901c(int param_1)

{
  if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    fn_00100654(*(int *)(param_1 + 0x18),&DAT_0050a6fc);
    fn_004ecfb0();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



undefined8 fn_00508b3c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = &DAT_008c0630;
  if (((*(uint *)(param_1 + 0x1c) & 0xff) <= param_2) && (param_2 != 0xfe)) {
    if (DAT_008c0630 != 0) {
      puVar1 = (undefined4 *)0x8;
    }
    return CONCAT44(puVar1,0xe0e14826);
  }
  if (*(char *)(param_1 + 0x14) != -3) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uStack_14 = 0;
    fn_004f01f4(&local_18);
    local_20 = local_18;
    local_1c = uStack_14;
    uVar3 = fn_0050877c(param_1,param_2,&local_28);
    return uVar3;
  }
  uVar2 = 0xfd;
  if (DAT_008c0630 != 0) {
    uVar2 = 8;
  }
  return CONCAT44(uVar2,&DAT_e0a14827);
}


