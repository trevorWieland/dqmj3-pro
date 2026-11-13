#include "00117944_00117c9c.h"



void fn_00117c9c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  int *piVar5;
  undefined4 in_s0;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  fn_00123f88(param_1 + 0xd0,&local_38);
  if (*(char *)(param_1 + 0x214) == '\0') {
    fn_001246c4(0,8);
    *(undefined1 *)(param_1 + 0x214) = 1;
  }
  iVar4 = (int)*(char *)(param_1 + 0x20c);
  if ((local_30 & 0xf0) != 0) {
    iVar4 = 0;
  }
  uVar1 = fn_0012a27c(param_1,iVar4,local_30);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = fn_0012a27c(param_1,iVar4,local_2c);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar2 = fn_0012a27c(param_1,iVar4,local_28);
  *(uint *)(param_1 + 0x54) = uVar2;
  if (*(char *)(param_1 + 0x20d) == '\x01') {
    *(undefined1 *)(param_1 + 0x20d) = 2;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | *(uint *)(param_1 + 0x210);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x210) | *(uint *)(param_1 + 0x48);
  }
  else if (*(char *)(param_1 + 0x20d) == '\x02') {
    *(undefined1 *)(param_1 + 0x20d) = 1;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x210) | uVar2;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  do {
    uVar3 = 1 << (uVar2 & 0xff);
    piVar5 = (int *)(param_1 + uVar2 * 4 + 0x58);
    if ((*(uint *)(param_1 + 0x48) & uVar3) == 0) {
      *piVar5 = 0;
    }
    else {
      if (*piVar5 < *(int *)(param_1 + 0x1fc)) {
        uVar3 = *(uint *)(param_1 + 0x4c) & uVar3 | *(uint *)(param_1 + 0x50);
LAB_00117dc0:
        *(uint *)(param_1 + 0x50) = uVar3;
      }
      else {
        fn_00300f74(*piVar5 - *(int *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
        if (extraout_r1 == 0) {
          uVar3 = *(uint *)(param_1 + 0x50) | uVar3;
          goto LAB_00117dc0;
        }
      }
      *piVar5 = *piVar5 + 1;
    }
    uVar2 = uVar2 + 1;
    if (0x18 < (int)uVar2) {
      fn_0013cb18(param_1 + 8,(int)local_38);
      *(undefined4 *)(param_1 + 0xbc) = in_s0;
      fn_0013cb18(param_1 + 8,(int)local_36);
      *(undefined4 *)(param_1 + 0xc0) = in_s0;
      fn_0013cb20(param_1 + 0xd8,(int)local_34);
      *(undefined4 *)(param_1 + 0xc4) = in_s0;
      fn_0013cb20(param_1 + 0xd8,(int)local_32);
      *(undefined4 *)(param_1 + 200) = in_s0;
      return;
    }
  } while( true );
}



void fn_00117bc4(int param_1)

{
  undefined1 uVar1;
  int extraout_r1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined2 local_20;
  undefined2 local_1e;
  char local_1c;
  
  fn_00124130(param_1 + 0x178,&local_20);
  bVar5 = local_1c != '\0';
  if ((*(char *)(param_1 + 0x18c) == '\0') && (bVar5)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x18d) = uVar1;
  if ((*(char *)(param_1 + 0x18c) == '\0') || (bVar5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 399) = uVar2;
  piVar3 = (int *)(param_1 + 400);
  *(bool *)(param_1 + 0x18c) = bVar5;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  if (bVar5) {
    iVar4 = *piVar3;
    if (iVar4 < *(int *)(param_1 + 0x204)) {
      *(undefined1 *)(param_1 + 0x18e) = uVar1;
    }
    else {
      fn_00300f74(iVar4 - *(int *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x208));
      if (extraout_r1 == 0) {
        *(undefined1 *)(param_1 + 0x18e) = 1;
      }
    }
    *piVar3 = iVar4 + 1;
  }
  else {
    *piVar3 = 0;
  }
  *(undefined2 *)(param_1 + 0x188) = local_20;
  *(undefined2 *)(param_1 + 0x18a) = local_1e;
  return;
}



undefined4 * fn_00117b04(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_00858e6c;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x24,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    *puVar1 = 0;
    iVar3 = fn_0012857c(puVar1 + 1);
    iVar3 = fn_00123600(iVar3 + 4,0);
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0x3f800000;
    iVar3 = iVar3 + -8;
  }
  iVar2 = param_1[1];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      iVar2 = fn_0012863c(iVar2 + 4);
      if (*(int **)(iVar2 + -4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar2 + -4) + 0x10))();
      }
      fn_002feef8(iVar2 + -4);
    }
    param_1[1] = iVar3;
  }
  return param_1;
}



void fn_00117994(int param_1)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint in_fpscr;
  
  uVar3 = 1;
  cVar1 = *(char *)(param_1 + 0x7f);
  uVar4 = 1;
  uVar2 = 1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar2 = 2;
    }
    else if (cVar1 == '\x02') {
      uVar2 = 2;
      uVar3 = 2;
    }
  }
  cVar1 = *(char *)(param_1 + 0x7e);
  uVar5 = 1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar4 = 2;
    }
    else if (cVar1 == '\x02') {
      uVar5 = 2;
      uVar4 = 2;
    }
  }
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  VectorSignedToFloat((short)uVar3 * 400,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(uVar2 * 0xf0,(byte)(in_fpscr >> 0x16) & 3);
  fn_001286b4(param_1 + 0x44,uVar2 * 0xf0);
  fn_001286a8(param_1 + 0x44);
  return;
}



undefined4 * fn_00117944(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *local_18 [2];
  
  pcVar3 = *(code **)(*param_2 + 8);
  puVar2 = (undefined4 *)(*pcVar3)(param_2,0x2c,4);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = &DAT_00858c94;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  puVar2[1] = *param_1;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar2[4] = uVar7;
  puVar2[5] = uVar8;
  puVar2[6] = uVar9;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[10] = param_2;
  puVar2[9] = 0;
  cVar1 = *(char *)(puVar2 + 1);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar5 = 0x401;
      goto code_r0x00128490;
    }
    if (cVar1 == '\x04') {
      uVar5 = 0x410;
      goto code_r0x00128490;
    }
  }
  uVar5 = 0x400;
code_r0x00128490:
  local_18[0] = pcVar3;
  fn_0012b274(uVar5);
  uVar5 = (**(code **)(*(int *)puVar2[10] + 8))((int *)puVar2[10],puVar2[6] << 2,4);
  puVar2[8] = uVar5;
  fn_001466ac(puVar2[6],uVar5);
  uVar5 = (**(code **)(*(int *)puVar2[10] + 8))((int *)puVar2[10],puVar2[6] << 2,4);
  puVar2[9] = uVar5;
  uVar4 = 0;
  if (puVar2[6] != 0) {
    do {
      fn_0012b458(*(undefined4 *)(puVar2[8] + uVar4 * 4));
      fn_001465e8(puVar2[4],puVar2[3],puVar2[2]);
      local_18[0] = (code *)0x0;
      fn_0012be5c(0x600,local_18);
      *(code **)(puVar2[9] + uVar4 * 4) = local_18[0];
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)puVar2[6]);
  }
  fn_0012b458(0);
  puVar2[7] = 0;
  return puVar2;
}


