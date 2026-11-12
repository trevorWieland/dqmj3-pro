#include "001bc898_001bd280.h"



void fn_001bd280(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  
  fn_0012bc84(0x208,&local_40);
  uVar1 = local_40;
  if (param_4 == 0x8058) {
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
    if (param_4 == 0x8056) {
      iVar3 = 4;
      iVar2 = 0;
      goto code_r0x001bd2fc;
    }
  }
  iVar2 = param_4 + -0x8056;
  if (iVar2 == 1) {
    iVar3 = 2;
  }
  else if (iVar2 == 2) {
    iVar3 = 0;
  }
  else {
    iVar2 = param_4 + -0x8d62;
    iVar3 = 3;
  }
code_r0x001bd2fc:
  local_38 = fn_0015fa88(param_1,iVar2);
  local_38 = local_38 >> 3;
  uStack_2c = 0xf011e;
  uStack_34 = 0xf011d;
  uStack_3c = 0xf0117;
  uStack_24 = 0xf006e;
  local_30 = param_3 * 0x1000 - 0x1000U | param_2 | 0x1000000;
  local_40 = uVar4 | iVar3 << 0x10;
  local_28 = local_30;
  fn_00301a9c(uVar1,&local_40,0x20);
  fn_001467e4(0x20);
  return;
}



longlong fn_001bce40(void)

{
  uint extraout_r1;
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  fn_001b5afc();
  uVar2 = 0xfffffc7a;
  uVar1 = extraout_r1;
  if (DAT_00899ea6 != '\0') {
    uVar3 = fn_0052da7c();
    uVar1 = (uint)(uVar3 >> 0x20);
    if ((uVar3 & 0x80000000) != 0) {
      return 0x1bced4fffffc7a;
    }
    DAT_00899ea6 = '\0';
  }
  if (DAT_00899ea5 != '\0') {
    uVar3 = fn_0044c4a4();
    uVar1 = (uint)(uVar3 >> 0x20);
    if ((uVar3 & 0x80000000) != 0) {
      if ((int)uVar3 == 0x209ff8) {
        uVar2 = 0xfffffe6e;
      }
      return CONCAT44("nn::ac::Finalize() failed \n",uVar2);
    }
    DAT_00899ea5 = '\0';
  }
  return (ulonglong)uVar1 << 0x20;
}



undefined * fn_001bce24(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (DAT_008bf6c4 != '\0') {
    puVar1 = &DAT_008e9a80;
  }
  return puVar1;
}



void fn_001bcdc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_001851bc();
  if (iVar1 == 0) {
    fn_001921a8(param_1,DAT_008bf51c,0xc820,0,1,fn_001b8338);
    return;
  }
  iVar1 = fn_00192114();
  *(undefined4 *)(iVar1 + 200) = 5;
  return;
}



void fn_001bcd64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_007bf8f4;
  }
  return;
}



undefined4 fn_001bcbb8(int param_1)

{
  char cVar1;
  int iVar2;
  uint local_18;
  int *local_14;
  
  iVar2 = fn_00173d40(param_1,*(undefined4 *)(param_1 + 0x34));
  cVar1 = *(char *)(*(int *)(iVar2 + 4) + 0x74);
  if (cVar1 == '\0') {
    local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001bcd54,0xffffffff);
    local_18 = 0x8000010;
    if (local_14 == (int *)0x0) goto code_r0x001bcd24;
    local_14[1] = local_14[1] + 1;
    fn_00173d1c(param_1,&local_18);
    if ((local_18 & 0x8000000) == 0) {
      return 1;
    }
    iVar2 = local_14[1] + -1;
    local_14[1] = iVar2;
  }
  else if (cVar1 == '\x01') {
    local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_001bcd48,0xffffffff);
    local_18 = 0x8000010;
    if (local_14 == (int *)0x0) {
code_r0x001bcd24:
      local_18 = 0x8000010;
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    local_14[1] = local_14[1] + 1;
    fn_00173d1c(param_1,&local_18);
    if ((local_18 & 0x8000000) == 0) {
      return 1;
    }
    iVar2 = local_14[1] + -1;
    local_14[1] = iVar2;
  }
  else {
    if (cVar1 != '\x02') {
      return 1;
    }
    local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),&DAT_001bcd5c,0xffffffff);
    local_18 = 0x8000010;
    if (local_14 == (int *)0x0) goto code_r0x001bcd24;
    local_14[1] = local_14[1] + 1;
    fn_00173d1c(param_1,&local_18);
    if ((local_18 & 0x8000000) == 0) {
      return 1;
    }
    iVar2 = local_14[1] + -1;
    local_14[1] = iVar2;
  }
  if (iVar2 == 0) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



undefined4 fn_001bcb78(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_0074279c(param_1,0xfffffffe);
  if (iVar1 < 0) {
    fn_00158004(param_1,0);
    return 1;
  }
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_001bcb5c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00742f70(param_1,0xfffffffd);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001bcb40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00742034(param_1,0xfffffffe);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001bc898(int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = DAT_008bf51c;
  if (param_2 == 0) {
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 200) = 0;
    if (*(int *)(iVar1 + 0x23f8) != 0x45484643) {
      puVar4 = (undefined4 *)(iVar1 + 0x23f8);
      *puVar4 = 0x45484643;
      *(undefined2 *)(iVar1 + 0x23fc) = 0xffff;
      *(undefined2 *)(iVar1 + 0x23fe) = 0xffff;
      iVar2 = 0;
      do {
        iVar5 = iVar2 + 1;
        *(undefined4 *)((int)puVar4 + iVar2 * 0xe + 8) = 0;
        *(undefined4 *)((int)puVar4 + iVar2 * 0xe + 0xc) = 0;
        *(undefined4 *)((int)puVar4 + iVar2 * 0xe + 0x10) = 0;
        *(undefined2 *)((int)puVar4 + iVar2 * 0xe + 0x14) = 0;
        *(ushort *)((int)puVar4 + iVar2 * 0xe + 0x12) =
             *(ushort *)((int)puVar4 + iVar2 * 0xe + 0x12) | 0x7fff;
        *(undefined2 *)((int)puVar4 + iVar2 * 0xe + 0x14) = 0x7fff;
        iVar2 = iVar5;
      } while (iVar5 < 3000);
    }
  }
  else {
    iVar2 = fn_00192114();
    *(undefined4 *)(iVar2 + 200) = 4;
    fn_001b10b8(1);
  }
  param_1[10] = *(int *)(iVar1 + 0xe4d4);
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x19d818;
  uVar3 = 0;
  while (param_1[9] == 0) {
    param_1[9] = 1;
    iVar1 = fn_00192114(0,uVar3);
    *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar1 + 200);
    *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(iVar1 + 0xcc);
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
    iVar1 = fn_00192114();
    param_1[1] = *(int *)(iVar1 + 0xd0);
    param_1[2] = *(int *)(iVar1 + 0xd4);
  }
  iVar1 = param_1[1];
  if (iVar1 == 10) {
    return;
  }
  iVar5 = param_1[2];
  iVar2 = fn_00192114();
  *(undefined1 *)(iVar2 + 0xc0) = 0;
  iVar2 = fn_00192114();
  if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 200) = iVar1;
    iVar1 = fn_00192114();
    *(int *)(iVar1 + 0xcc) = iVar5;
  }
  if ((code *)param_1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,param_1[2]);
  return;
}


