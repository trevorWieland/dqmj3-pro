#include "001020b2_00102908.h"



undefined4 fn_00102908(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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



undefined4 fn_001028d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = fn_002fecb6(param_2,&local_20,&uStack_8,0x2fecdd);
  fn_002fecdc(0,&local_20);
  return uVar1;
}



uint fn_0010288c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_2 * 2 + param_1 + -2;
  }
  local_18 = param_1;
  uVar1 = fn_0030091a(param_3,&local_18,param_4,0x300941);
  if (param_2 != 0) {
    local_14 = local_14 + 2;
    fn_00300940(0,&local_18);
  }
  if (uVar1 < param_2) {
    return uVar1;
  }
  return 0xffffffff;
}



void fn_00102874(void)

{
  fn_00102a62();
  return;
}



void fn_0010272c(undefined4 param_1)

{
  (*(code *)0x102738)(param_1);
  return;
}



void fn_00102728(void)

{
  (*(code *)0x102400)();
  return;
}



void fn_001023f8(void)

{
  (*(code *)0x102400)();
  return;
}



undefined4 fn_001023c8(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_00101acc();
  }
  else {
    fn_00102b22();
  }
  return 1;
}



void fn_0010239a(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    param_3 = fn_002fea7a(0,4);
  }
  fn_00101ce8(0,param_1,param_2,param_3);
  return;
}



undefined4 fn_00102388(int *param_1)

{
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 1;
  }
  return 0;
}



void fn_001022f8(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28 [4];
  byte *pbStack_20;
  int iStack_1c;
  int local_18;
  
  iVar3 = 0;
  local_30 = 0;
  local_2c = 0;
  pbStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  for (iVar2 = 0;
      ((-1 < (int)((uint)*param_1 << 0x1a) || (iVar3 < *(int *)(param_1 + 0x1c))) &&
      ((iVar2 < local_18 || (*(char *)(param_2 + iVar2) != '\0')))); iVar2 = iVar2 + 1) {
    iVar1 = fn_002fea88(local_28,*(undefined1 *)(param_2 + iVar2),&local_30);
    if (iVar1 == 1) {
      iVar3 = iVar3 + 1;
    }
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar3;
  fn_002ff970(param_1);
  local_30 = 0;
  local_2c = 0;
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    iVar1 = fn_002fea88(local_28,*(undefined1 *)(param_2 + iVar3),&local_30);
    if (iVar1 == 1) {
      (**(code **)(param_1 + 4))(local_28[0],*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  fn_002ff99c(param_1);
  return;
}



int fn_0010217c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint *puStack_24;
  uint uStack_20;
  uint local_1c;
  uint local_18;
  
  uVar1 = *(uint *)(*param_1 - 4);
  puStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((uVar1 < param_2) || (param_5 < param_6)) {
    if (param_5 < uVar1) {
      uVar4 = uVar1;
    }
    else {
      uVar4 = param_5;
    }
    if (uVar1 < param_2) {
      uVar1 = param_2;
    }
    else {
      uVar1 = param_6;
    }
    fn_002ff628(9,&DAT_008c7614,&DAT_008c7614,uVar1,uVar4);
  }
  uVar1 = *(int *)(*param_1 - 4) - param_2;
  if (local_1c < uVar1) {
    uVar1 = local_1c;
  }
  uVar4 = param_5 - param_6;
  if (param_7 < param_5 - param_6) {
    uVar4 = param_7;
  }
  uVar6 = *(int *)(*param_1 - 4) - uVar1;
  if (-uVar4 - 0xf < uVar6) {
    fn_002ff628(8,&DAT_008c7614,&DAT_008c7614,uVar6,-uVar4 - 0xf);
  }
  uVar6 = *param_1;
  iVar5 = *(int *)(uVar6 - 4) - uVar1;
  uVar1 = iVar5 + uVar4;
  if (uVar1 == 0) {
    fn_002ff1b4(param_1);
    *param_1 = (uint)&DAT_008f9d04;
  }
  else {
    iVar5 = iVar5 - param_2;
    local_28 = local_18 + param_6;
    local_2c = param_2 + local_1c;
    if (((*(int *)(uVar6 - 0xc) + 1U < 2) && (uVar1 <= *(uint *)(uVar6 - 8))) &&
       ((local_18 == 0 || ((local_18 < uVar6 || (uVar6 + *(int *)(uVar6 - 4) <= local_18)))))) {
      if (iVar5 != 0) {
        fn_00301b24(uVar6 + param_2 + uVar4,uVar6 + local_2c,iVar5);
      }
      if (uVar4 != 0) {
        fn_00301b24(*param_1 + param_2,local_28,uVar4);
      }
      *(uint *)(*param_1 - 4) = uVar1;
      *(undefined1 *)(uVar1 + *param_1) = 0;
    }
    else {
      uVar6 = *(uint *)(uVar6 - 4);
      local_34 = (uVar6 >> 1) + uVar6 + (uVar6 >> 3);
      if (local_34 < uVar6 + 0x80) {
        local_34 = uVar6 + 0x80;
      }
      local_30 = uVar1;
      puVar2 = (undefined4 *)fn_002ff78a(&local_34,&local_30);
      iVar3 = fn_002ff0c8(param_1,*puVar2,uVar1);
      if (param_2 != 0) {
        fn_002ff0a8(iVar3 + 0xc,*param_1,param_2);
      }
      if (uVar4 != 0) {
        fn_002ff0a8(iVar3 + 0xc + param_2,local_28,uVar4);
      }
      if (iVar5 != 0) {
        fn_002ff0a8(iVar3 + 0xc + param_2 + uVar4,*param_1 + local_2c,iVar5);
      }
      fn_002ff1b4(param_1);
      *param_1 = iVar3 + 0xc;
    }
  }
  return *param_1 + param_2;
}



undefined4 * fn_0010216e(undefined4 *param_1)

{
  fn_002feca8(*param_1);
  return param_1;
}



uint fn_001020b2(short *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  short *psVar7;
  uint uVar8;
  uint local_28;
  
  bVar1 = false;
  sVar3 = *param_1;
  psVar7 = param_1 + 1;
  bVar2 = false;
  if (sVar3 == 0x30) {
    sVar3 = *psVar7;
    bVar1 = true;
    psVar7 = param_1 + 2;
    if ((sVar3 == 0x78) || (sVar3 == 0x58)) {
      if ((param_3 == 0) || (param_3 == 0x10)) {
        sVar3 = *psVar7;
        bVar1 = false;
        param_3 = 0x10;
        psVar7 = param_1 + 3;
      }
    }
    else if (param_3 == 0) {
      param_3 = 8;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar8 = 0;
  local_28 = 0;
  while (iVar5 = fn_002ff284(sVar3,param_3), -1 < iVar5) {
    bVar1 = true;
    uVar4 = param_3 * local_28 + iVar5;
    local_28 = uVar4 & 0xffff;
    uVar8 = uVar8 * param_3 + (uVar4 >> 0x10);
    if (0xffff < uVar8) {
      bVar2 = true;
    }
    sVar3 = *psVar7;
    psVar7 = psVar7 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      param_1 = psVar7 + -1;
    }
    *param_2 = param_1;
  }
  if (bVar2) {
    puVar6 = (undefined4 *)fn_002ff798();
    *puVar6 = 2;
    local_28 = 0xffffffff;
  }
  else {
    local_28 = uVar8 << 0x10 | local_28;
  }
  return local_28;
}


