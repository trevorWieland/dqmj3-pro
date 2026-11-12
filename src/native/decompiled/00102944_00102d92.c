#include "00102944_00102d92.h"



void fn_00102d92(void)

{
  fn_001031cc();
  return;
}



void fn_00102d70(void)

{
  fn_00102d78();
  return;
}



void fn_00102d68(int param_1)

{
  fn_00102d78(param_1 + 2);
  return;
}



void fn_00102d78(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_002ff798();
  uVar2 = *puVar1;
  fn_00101c78(param_1,0,10);
  *puVar1 = uVar2;
  return;
}



void fn_00102d28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_48 [6];
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_48[0] = &uStack_8;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_30 = &LAB_00102a0c_1;
  local_2c = &LAB_00102a2c_1;
  local_24 = param_1;
  local_1c = param_1;
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_002fef4c(&local_24,param_2,local_48);
  return;
}



undefined4 fn_00102cec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  undefined4 uStack_4;
  
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = param_1 + param_2 + -1;
  }
  local_28 = param_1;
  uStack_4 = param_4;
  uVar1 = fn_002fecb6(param_3,&local_28,&uStack_4,&LAB_0010118c_1);
  if (param_2 != 0) {
    fn_002fecdc(0,&local_28);
  }
  return uVar1;
}



undefined4 fn_00102cc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_1;
  uStack_c = param_4;
  uVar1 = fn_002fecb6(param_2,&local_10,param_3,0x2fecdd);
  fn_002fecdc(0,&local_10);
  return uVar1;
}



void fn_00102c90(void)

{
  fn_00102ca2();
  return;
}



void fn_00102ca2(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002ff798();
  *puVar1 = param_1;
  return;
}



int fn_00102c18(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  piVar1 = (int *)fn_002ff798();
  iVar2 = *piVar1;
  pbVar6 = param_1;
  do {
    pbVar5 = pbVar6;
    uVar7 = (uint)*pbVar5;
    pbVar6 = pbVar5 + 1;
    if (uVar7 == 0) break;
    piVar3 = (int *)fn_002fea64();
  } while ((*(byte *)(*piVar3 + uVar7) & 1) != 0);
  if (uVar7 != 0x2b) {
    if (uVar7 == 0x2d) {
      iVar8 = 0x400;
    }
    else {
      pbVar6 = pbVar5;
    }
  }
  *piVar1 = 0;
  iVar4 = fn_00300c38(pbVar6,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((byte *)*param_2 == pbVar6)) {
    *param_2 = param_1;
  }
  if ((*piVar1 != 2) && (*piVar1 = iVar2, iVar8 << 0x15 < 0)) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



void fn_00102b80(ushort *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((int)((uint)*param_1 << 0x14) < 0) {
    pcVar4 = (char *)&DAT_00812bf4;
  }
  else {
    pcVar4 = "0123456789abcdef@0x";
  }
  iVar1 = 0;
  uVar2 = param_4;
  for (; param_3 != 0 || uVar2 != 0; param_3 = param_3 >> 4 | uVar5) {
    *(char *)((int)param_1 + iVar1 + 0x24) = pcVar4[param_3 & 0xf];
    uVar5 = uVar2 << 0x1c;
    uVar2 = uVar2 >> 4;
    iVar1 = iVar1 + 1;
  }
  uVar3 = 0;
  if ((int)((uint)(byte)*param_1 << 0x1c) < 0) {
    if (param_2 == 0x70) {
      uVar3 = 1;
      pcVar4 = pcVar4 + 0x10;
    }
    else if (iVar1 != 0) {
      uVar3 = 2;
      pcVar4 = pcVar4 + 0x11;
    }
  }
  fn_00300b5c(param_1,iVar1,pcVar4,uVar3,param_4);
  return;
}



void fn_00102b22(byte *param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  
  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    if ((int)((uint)*param_1 << 0x1a) < 0) {
      param_3 = *(uint *)(param_1 + 0x1c);
    }
    for (uVar1 = 0; (uVar1 < param_3 && (param_2[uVar1] != 0)); uVar1 = uVar1 + 1) {
    }
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar1;
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  puVar2 = param_2 + uVar1;
  fn_002ff970(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  fn_002ff99c(param_1);
  return;
}



int fn_00102b04(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_002fea64();
  if (((int)((uint)*(byte *)(*piVar1 + param_1) << 0x1c) < 0) && (param_1 != 0xdf)) {
    return param_1 + -0x20;
  }
  return param_1;
}



int fn_00102a62(int param_1,int param_2,int param_3,code *param_4,undefined4 param_5,code *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * param_1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if (param_6 == (code *)0x0) {
    iVar2 = fn_002fec38(iVar2 + param_3);
  }
  else {
    iVar2 = (*param_6)();
    if (iVar2 == 0) {
      iVar2 = 0;
      goto LAB_00102a90;
    }
  }
  iVar2 = iVar2 + param_3;
LAB_00102a90:
  if (iVar2 != 0) {
    if (param_3 != 0) {
      *(int *)(iVar2 + -8) = param_2;
      *(int *)(iVar2 + -4) = param_1;
    }
    if (param_4 != (code *)0x0) {
      iVar3 = iVar2;
      for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
        (*param_4)(iVar3);
        iVar3 = iVar3 + param_2;
      }
    }
  }
  return iVar2;
}



void fn_00102944(byte *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    if ((int)((uint)*param_1 << 0x1a) < 0) {
      param_3 = *(uint *)(param_1 + 0x1c);
    }
    for (uVar1 = 0; (uVar1 < param_3 && (param_2[uVar1] != '\0')); uVar1 = uVar1 + 1) {
    }
  }
  puVar2 = param_2 + uVar1;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar1;
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  fn_002ff970(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  fn_002ff99c(param_1);
  return;
}


