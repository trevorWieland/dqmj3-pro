#include "001badac_001bb620.h"



int fn_001bb620(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_50 = param_2 | 0x80000000;
  if (param_4 == 0) {
    local_4c = 0xf02c0;
    local_44 = 0xbf02c1;
    uStack_14 = 0;
    local_48 = param_3[3];
    local_40 = param_3[2];
    local_3c = param_3[1];
    local_38 = *param_3;
    local_34 = param_3[7];
    local_30 = param_3[6];
    local_2c = param_3[5];
    local_28 = param_3[4];
    local_24 = param_3[0xb];
    local_20 = param_3[10];
    local_1c = param_3[9];
    local_18 = param_3[8];
    fn_00301a9c(param_1,&local_50,0x40);
    return param_1 + 0x40;
  }
  local_44 = 0xbf02c1;
  local_4c = 0xf02c0;
  local_48 = *param_3;
  fn_00301a9c(param_1,&local_50,0x10);
  fn_00301a9c(param_1 + 0x10,param_3 + 1,0x2c);
  fn_00301a9c(param_1 + 0x3c,&DAT_007e0a40,4);
  return param_1 + 0x40;
}



void fn_001bb2e4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6)

{
  undefined4 local_40;
  char local_3c;
  char local_3b;
  char local_39;
  char local_38;
  char local_37;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fn_00114248(&local_28);
  local_30 = local_28;
  uStack_2c = uStack_24;
  fn_006d02f4(&local_40,&local_30);
  *param_1 = local_40;
  *param_2 = (int)local_3c;
  *param_3 = (int)local_3b;
  *param_4 = (int)local_39;
  *param_5 = (int)local_38;
  *param_6 = (int)local_37;
  return;
}



undefined4 fn_001bb294(int param_1)

{
  if (*(char *)(param_1 + 0x11) != '\0') {
    if ((*(uint *)(param_1 + 0x138) & 0xfffffffe) != 0) {
      if ((*(uint *)(param_1 + 0x138) & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(*(uint *)(param_1 + 0x138) & 0xfffffffe);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}



undefined8 fn_001bb250(undefined4 param_1)

{
  DAT_008bf778 = param_1;
  return 0x1bb27800000004;
}



undefined4 fn_001bb1fc(void)

{
  int iVar1;
  
  if (DAT_008d1898 == 0) {
    iVar1 = 1;
    while (((&DAT_008d1898)[iVar1] == 0 && ((&DAT_008d189c)[iVar1] == 0))) {
      iVar1 = iVar1 + 2;
      if (0x1e < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_001bb1e0(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf755 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_008bf770;
  }
  return uVar1;
}



undefined4 fn_001bb1c4(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf755 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_008bf768;
  }
  return uVar1;
}



undefined4 fn_001bb180(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00173d40(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar2 = fn_00743124(param_1);
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    fn_00173d1c(param_1,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_001bafdc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_28;
  char *local_24;
  char *local_20;
  undefined4 local_1c;
  
  iVar3 = 0;
  fn_00157f58(param_1,0xffffffff,&local_28);
  iVar1 = fn_007433f0(param_1,local_28,&local_24);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    pcVar4 = "unknown";
    if (local_24 != (char *)0x0) {
      pcVar4 = local_24;
    }
    pcVar5 = "unknown";
    if (local_20 != (char *)0x0) {
      pcVar5 = local_20;
    }
    fn_007424a0(param_1);
    fn_00158128(param_1,&DAT_001bb164,0xffffffff);
    fn_00158128(param_1,pcVar4,0xffffffff);
    fn_00166f0c(param_1,0xfffffffd,0);
    fn_00158128(param_1,&DAT_001bb16c,0xffffffff);
    fn_00158128(param_1,pcVar5,0xffffffff);
    fn_00166f0c(param_1,0xfffffffd,0);
    fn_00158128(param_1,&DAT_001bb170,0xffffffff);
    fn_001580cc(param_1,local_1c);
    fn_00166f0c(param_1,0xfffffffd,0);
    fn_00158128(param_1,(char *)&DAT_001bb178,0xffffffff);
    fn_007424a0(param_1);
    while (iVar1 = fn_0074225c(param_1,local_28,iVar3), iVar1 != 0) {
      fn_00158128(param_1,iVar1,0xffffffff);
      fn_00742630(param_1,0xfffffffe);
      fn_00166f0c(param_1,0xfffffffc,0);
      fn_00173cb8(param_1,1);
      iVar3 = iVar3 + 1;
    }
    fn_00166f0c(param_1,0xfffffffd,0);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001bafc4(int param_1)

{
  fn_00173d1c(param_1,*(int *)(param_1 + 0x8c) + 0x34);
  return 1;
}



undefined4 fn_001baf2c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  char *local_18;
  
  iVar1 = fn_00157ff4();
  local_18 = (char *)&DAT_001bafb4;
  local_1c = 0;
  fn_00157fb0(param_1,2,&local_1c);
  uVar2 = fn_00166e14(param_1,2);
  if (2 < iVar1) {
    fn_00157fb0(param_1,3,&local_18);
  }
  iVar1 = fn_00157dc0(param_1,local_1c,uVar2,local_18,0);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001badac(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = DAT_008bf518;
  uVar6 = CONCAT44(unaff_r5,unaff_r4);
  iVar1 = fn_001851bc();
  if (iVar1 != 0) goto LAB_0019d818;
  piVar2 = (int *)(iVar5 + 0x2a18);
  if (*piVar2 == -1) {
    *piVar2 = 0;
LAB_001badfc:
    iVar1 = *piVar2 * 0x54;
    if (-1 < iVar1) {
      iVar5 = iVar5 + 0x2000;
    }
    iVar4 = 0;
    if (-1 < iVar1) {
      do {
        fn_00301f50(*(int *)(iVar5 + 0xa10) + iVar4 * 0x54,0x54);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 1000);
      fn_001921a8(param_1,*(int *)(iVar5 + 0xa10),84000,iVar1 + 0xe4c0,1,fn_001badac,uVar6);
      return;
    }
  }
  else {
    iVar1 = *piVar2 + 1000;
    *piVar2 = iVar1;
    if (iVar1 < 3000) goto LAB_001badfc;
  }
  iVar1 = fn_00191f08();
  if ((iVar1 != 0) && (*(char *)(DAT_008bf518 + 0x2a08) != '\0')) {
    fn_00301f50(*(undefined4 *)(iVar5 + 0x2a04),0x3d860);
  }
LAB_0019d818:
  fn_001920f4(*(undefined4 *)(iVar5 + 0x2a10));
  *(undefined4 *)(iVar5 + 0x2a10) = 0;
  param_1[10] = (int)fn_001bacc4;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x19d818;
  uVar3 = 0;
  while (param_1[9] == 0) {
    param_1[9] = 1;
    iVar5 = fn_00192114(0,uVar3);
    *(undefined4 *)(iVar5 + 0xd0) = *(undefined4 *)(iVar5 + 200);
    *(undefined4 *)(iVar5 + 0xd4) = *(undefined4 *)(iVar5 + 0xcc);
    if (*(code **)(*param_1 + 0x14) == (code *)0x0) {
      uVar6 = 3;
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x14))();
    }
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    param_1[1] = (int)uVar6;
    if ((int)uVar6 == 10) {
      return;
    }
  }
  if (param_1[9] != 1) {
    return;
  }
  param_1[9] = 2;
  if (param_1[2] == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    iVar5 = fn_00192114();
    param_1[1] = *(int *)(iVar5 + 0xd0);
    param_1[2] = *(int *)(iVar5 + 0xd4);
  }
  iVar5 = param_1[1];
  if (iVar5 == 10) {
    return;
  }
  iVar4 = param_1[2];
  iVar1 = fn_00192114();
  *(undefined1 *)(iVar1 + 0xc0) = 0;
  iVar1 = fn_00192114();
  if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
    iVar1 = fn_00192114();
    *(int *)(iVar1 + 200) = iVar5;
    iVar5 = fn_00192114();
    *(int *)(iVar5 + 0xcc) = iVar4;
  }
  if ((code *)param_1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,param_1[2]);
  return;
}


