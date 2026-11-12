#include "0017440c_00174900aaa.h"



int fn_0017440c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b8 [102];
  uint uStack_20;
  
  puVar5 = &local_1c0;
  fn_0017821c(&local_1c0,param_2,0x1a0);
  puVar6 = (uint *)(param_2 + 0x1c);
  iVar1 = param_3 + ((unsigned int)(local_1c0) >> 8) & 0xff * 0x418;
  uVar2 = *(uint *)(param_2 + 0x1c);
  if ((int)uVar2 < 0) {
    iVar3 = fn_00176e70(iVar1 + -0x4080);
    local_1bc = *(short *)(iVar1 + -0x4062) - iVar3;
    local_1c0 = *puVar6;
    local_1b8[0] = 0;
    if (0 < (int)local_1bc) goto code_r0x001744c8;
    if ((int)*puVar6 < (int)local_1bc) {
      puVar5 = &local_1bc;
    }
    if (0 < (int)*puVar5) {
      puVar5 = local_1b8;
    }
    uVar2 = *puVar5;
    *puVar6 = uVar2;
  }
  if (0 < (int)uVar2) {
    local_1b8[0] = (uint)*(short *)(iVar1 + -0x4062);
    local_1c0 = uVar2;
    local_1bc = 0;
    puVar5 = (uint *)0x0;
    if ((int)local_1b8[0] < 0) {
code_r0x001744c8:
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if ((int)uVar2 < 0) {
      puVar5 = &local_1bc;
    }
    if (uVar2 < 0x80000000) {
      puVar5 = &local_1c0;
    }
    if ((int)local_1b8[0] < (int)*puVar5) {
      puVar5 = local_1b8;
    }
    uVar2 = *puVar5;
    *puVar6 = uVar2;
    if ((0 < (int)uVar2) && (*(char *)(param_2 + 0x17) != '\0')) {
      uVar4 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628b98(param_1,param_3,param_2,uVar4);
      uVar4 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628970(param_1,param_3,param_2,uVar4);
    }
  }
  uStack_20 = 0x7fff;
  if ((int)((int)*(short *)(iVar1 + -0x4062) - *puVar6) < -0x8000) {
    puVar5 = local_1b8 + 0x68;
  }
  else {
    puVar5 = local_1b8 + 0x67;
  }
  if (0x7fff < (int)*puVar5) {
    puVar5 = &uStack_20;
  }
  if (-1 < (int)((uint)*(byte *)(iVar1 + -0x3c7a) << 0x1b)) {
    uStack_20 = (uint)(ushort)*puVar5;
    iVar3 = fn_00176e70(iVar1 + -0x4080);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    puVar5 = local_1b8 + 0x67;
    if (-1 < (short)uStack_20) {
      puVar5 = &uStack_20;
    }
    if (iVar3 < (short)*puVar5) {
      puVar5 = local_1b8 + 0x68;
    }
    *(short *)(iVar1 + -0x4062) = (short)*puVar5;
  }
  return (int)*(short *)(iVar1 + -0x4062);
}


