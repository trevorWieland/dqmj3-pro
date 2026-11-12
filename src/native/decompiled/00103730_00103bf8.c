#include "00103730_00103bf8.h"



int fn_00103bf8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0xffffffff;
  uVar1 = fn_00303328();
  iVar2 = fn_00303810(param_1 + 1,uVar1);
  return iVar2 + -4;
}



undefined8 fn_00103a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  uVar1 = fn_001039c8(param_2);
  puVar2 = (undefined4 *)fn_003036a4(param_1,uVar1,0,param_3);
  *puVar2 = &DAT_0085aaa8;
  if ((undefined *)puVar2[5] == &DAT_0081b4fe) goto LAB_00103bc2;
  *(undefined1 *)(puVar2 + 6) = 1;
  fn_0030325e(&uStack_20,param_2,2);
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    iVar3 = fn_003037d8(puVar2,0x10,uVar5 & 0xff);
    if (iVar3 != 0) goto LAB_00103aee;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xff);
  goto LAB_00103afa;
LAB_00103b68:
  while ((uVar5 < uVar6 && (iVar3 = fn_003037d8(puVar2,8,uVar6 & 0xff), iVar3 == 0))) {
    uVar6 = uVar6 - 1;
  }
  goto LAB_00103b74;
LAB_00103aee:
  while ((uVar5 < uVar6 && (iVar3 = fn_003037d8(puVar2,0x10,uVar6 & 0xff), iVar3 == 0))) {
    uVar6 = uVar6 - 1;
  }
LAB_00103afa:
  puVar2[8] = uVar6;
  puVar2[7] = uVar5;
  puVar7 = (undefined1 *)puVar2[0xb];
  for (; uVar5 <= uVar6; uVar5 = uVar5 + 1) {
    if ((uVar5 - 0x61 < 0x1a) && (iVar3 = fn_003037d8(puVar2,0x10,uVar5 & 0xff), iVar3 != 0)) {
      local_18 = uVar5 - 0x20;
      iVar3 = fn_003037d8(puVar2,8,local_18 & 0xff);
      if (iVar3 == 0) goto LAB_00103b34;
      uVar4 = local_18;
    }
    else {
LAB_00103b34:
      uVar4 = uVar5;
    }
    *puVar7 = (char)uVar4;
    puVar7 = puVar7 + 1;
  }
  uVar5 = 0;
  uVar6 = 0xff;
  do {
    iVar3 = fn_003037d8(puVar2,8,uVar5 & 0xff);
    if (iVar3 != 0) goto LAB_00103b68;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xff);
LAB_00103b74:
  puVar2[10] = uVar6;
  puVar2[9] = uVar5;
  puVar7 = (undefined1 *)puVar2[0xc];
  for (; uVar5 <= uVar6; uVar5 = uVar5 + 1) {
    if ((uVar5 - 0x41 < 0x1a) && (iVar3 = fn_003037d8(puVar2,8,uVar5 & 0xff), iVar3 != 0)) {
      local_18 = uVar5 + 0x20;
      iVar3 = fn_003037d8(puVar2,0x10,local_18 & 0xff);
      if (iVar3 == 0) goto LAB_00103bb0;
      uVar4 = local_18;
    }
    else {
LAB_00103bb0:
      uVar4 = uVar5;
    }
    *puVar7 = (char)uVar4;
    puVar7 = puVar7 + 1;
  }
  fn_003032d8(&uStack_20);
LAB_00103bc2:
  return CONCAT44(uStack_20,puVar2);
}



undefined8 fn_001039c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar2 = fn_003035b0(param_1,&DAT_00103a80);
  if ((iVar2 == 0) || (iVar2 = fn_003035b0(param_1,(char *)&DAT_00103a84), iVar2 == 0)) {
    return CONCAT44(uStack_20,&DAT_0081b4fe);
  }
  iVar2 = fn_002fec38(0x200);
  fn_0030325e(&uStack_20,param_1,2);
  iVar6 = 0;
  piVar3 = (int *)fn_002fea64();
  do {
    bVar1 = *(byte *)(*piVar3 + iVar6);
    uVar4 = (uint)bVar1;
    uVar5 = (ushort)((int)(uVar4 << 0x1f) < 0);
    if ((bVar1 & 0x3e) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((bVar1 & 0x40) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((bVar1 & 0x10) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((bVar1 & 8) != 0) {
      uVar5 = uVar5 | 0x10;
    }
    if ((bVar1 & 0x98) != 0) {
      uVar5 = uVar5 | 0x20;
    }
    if (uVar4 == 0x20) {
      uVar5 = uVar5 | 0x40;
    }
    if ((bVar1 & 2) != 0) {
      uVar5 = uVar5 | 0x80;
    }
    if (((uVar4 << 2 ^ uVar4) & 0x80) != 0) {
      uVar5 = uVar5 | 0x100;
    }
    *(ushort *)(iVar2 + iVar6 * 2) = uVar5;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x100);
  fn_003032d8(&uStack_20);
  return CONCAT44(uStack_20,iVar2);
}



undefined4 fn_001039aa(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  iVar1 = fn_003035a0(&local_10,param_1);
  if (iVar1 == 0) {
    return *param_1;
  }
  return 0;
}



undefined4 fn_0010399e(undefined4 param_1)

{
  fn_001006ac();
  return param_1;
}



undefined4 fn_00103980(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  iVar1 = fn_00303590(&local_10,param_1);
  if (iVar1 == 0) {
    return *param_1;
  }
  return 0;
}



void fn_0010392e(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



void fn_00103920(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



void fn_00103904(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))();
  return;
}



undefined4 * fn_0010388c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  piVar1 = (int *)fn_00303298();
  if ((param_2 < piVar1[1]) && (iVar2 = *(int *)(*piVar1 + param_2 * 8), iVar2 != -1)) {
    local_18 = 0;
    puVar3 = (undefined4 *)fn_001036ec(iVar2,param_3,param_4,&local_18);
    if (puVar3 != &local_18) {
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}



int fn_0010386e(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_00303298();
  if (param_2 < piVar1[1]) {
    return *piVar1 + param_2 * 8 + 4;
  }
  iVar2 = fn_00303328();
  return iVar2;
}



undefined8
fn_00103800(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = -1;
  puStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  fn_0030325e(&puStack_20,*param_1,6);
  iVar1 = fn_0010370c(*param_2,0xffffffff);
  if (iVar1 != -1) {
    piVar2 = (int *)fn_00303298();
    piVar5 = (int *)*piVar2;
    piVar3 = piVar5 + piVar2[1] * 2;
    for (; piVar3 != piVar5; piVar5 = piVar5 + 2) {
      if (*piVar5 == -1) goto LAB_0010385c;
    }
    fn_001042c4(piVar2,piVar2[1] + 1);
    piVar5 = (int *)(*piVar2 + piVar2[1] * 8 + -8);
LAB_0010385c:
    *piVar5 = iVar1;
    fn_003032f2(piVar5 + 1,param_3);
    iVar4 = (int)piVar5 - *piVar2 >> 3;
  }
  fn_003032d8(&puStack_20);
  return CONCAT44(puStack_20,iVar4);
}



uint fn_001037c8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0;
      ((uVar1 < DAT_008c3dc8 && (iVar2 = *(int *)(DAT_008c3dc4 + uVar1 * 4), iVar2 != 0)) &&
      (iVar2 != param_1)); uVar1 = uVar1 + 1) {
  }
  if (*(int *)(DAT_008c3dc4 + uVar1 * 4) == 0) {
    uVar1 = DAT_008c3dc8;
  }
  return uVar1;
}



void fn_00103730(int param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      pcVar1 = (char *)&DAT_00103788;
    }
    else if (param_1 == 1) {
      pcVar1 = (char *)&DAT_00103794;
    }
    else if (param_1 == 2) {
      pcVar1 = (char *)&DAT_001037ac;
    }
    else {
      pcVar1 = (char *)&DAT_00103780;
    }
    fn_00303248(&DAT_008f7dec,"Exception: %s.\n",pcVar1);
  }
  else {
    fn_00303248(&DAT_008f7dec,"Exception: %s.\n",param_2);
    fn_002feca8(param_2);
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}


