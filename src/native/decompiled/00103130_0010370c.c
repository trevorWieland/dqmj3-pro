#include "00103130_0010370c.h"



undefined4 fn_0010370c(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_002ff600(1);
  fn_002feef8(uVar1);
  return 0xffffffff;
}



undefined8 fn_001036ec(void)

{
  undefined4 in_r3;
  
  fn_001037c8();
  return CONCAT44(DAT_008c3dc8,in_r3);
}



int fn_00103624(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_30;
  
  iVar3 = param_2 * param_3;
  if (param_2 == 0) {
    return param_3;
  }
  iVar4 = *(int *)(param_4 + 8);
  bVar1 = false;
  local_30 = param_1;
  while( true ) {
    while( true ) {
      if (iVar3 < 1) {
        *(int *)(param_4 + 8) = iVar4;
        return param_3;
      }
      if (iVar4 < 1) break;
      iVar2 = iVar4;
      if (iVar3 < iVar4) {
        iVar2 = iVar3;
      }
      fn_00301a9c(*(undefined4 *)(param_4 + 4),local_30,iVar2);
      iVar4 = iVar4 - iVar2;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + iVar2;
      local_30 = local_30 + iVar2;
      iVar3 = iVar3 - iVar2;
    }
    if ((*(int *)(param_4 + 0x1c) < iVar3) && (bVar1)) break;
    if (*(int *)(param_4 + 0x1c) < iVar3) {
      *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) | 0x800000;
    }
    iVar2 = fn_00302bbc(*local_30,param_4);
    *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) & 0xff7fffff;
    if (iVar2 == -1) {
      return 0;
    }
    iVar4 = *(int *)(param_4 + 8);
    if (iVar2 < 0) {
      bVar1 = true;
    }
    else {
      local_30 = local_30 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  iVar3 = fn_00302658(local_30,iVar3,param_4);
  if (iVar3 != 0) {
    *(int *)(param_4 + 8) = iVar4;
    return 0;
  }
  if ((*(uint *)(param_4 + 0xc) & 0x7ff) >> 9 == 0) {
    iVar3 = *(int *)(param_4 + 0x1c) - (*(int *)(param_4 + 4) - *(int *)(param_4 + 0x10));
    *(int *)(param_4 + 8) = iVar3;
    if ((int)(*(uint *)(param_4 + 0xc) << 0xf) < 0) {
      return param_3;
    }
    iVar3 = -iVar3;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_4 + 8) = iVar3;
  return param_3;
}



void fn_00103540(undefined4 param_1)

{
  fn_00302bb8(0xc,param_1);
  return;
}



void fn_00103250(void)

{
  int iVar1;
  
  fn_00301f50(&DAT_008f7d44,0x54);
  fn_00301f50(&DAT_008f7d98,0x54);
  fn_00301f50(&DAT_008f7dec,0x54);
  DAT_008c3d54 = &DAT_008f7d44;
  DAT_008c3d58 = &DAT_008f7d98;
  DAT_008c3d5c = &DAT_008f7dec;
  DAT_008f7d94 = &DAT_008f7d99;
  DAT_008f7de8 = &DAT_008f7ded;
  DAT_008f7e3c = 1;
  iVar1 = fn_00301fa4(&DAT_007d7ff0,&DAT_00103378,&DAT_008f7d44);
  if (iVar1 == 0) {
    fn_00302734(&DAT_007d7ff0);
  }
  iVar1 = fn_00301fa4(&DAT_007d7ff1,&DAT_00103380,&DAT_008f7d98);
  if (iVar1 == 0) {
    fn_00302734(&DAT_007d7ff1);
  }
  iVar1 = fn_00301fa4(&DAT_007d7ff2,&DAT_00103380,&DAT_008f7dec);
  if (iVar1 == 0) {
    fn_00302734(&DAT_007d7ff2);
  }
  iVar1 = fn_00302740(&DAT_008f7d44,0,0x200);
  if (iVar1 != 0) {
    fn_00302734(&DAT_007d7ff0);
  }
  iVar1 = fn_00302740(&DAT_008f7d98,0,0x200,0x40);
  if (iVar1 != 0) {
    fn_00302734(&DAT_007d7ff1);
  }
  iVar1 = fn_00302740(&DAT_008f7dec,0,0x200,0x10);
  if (iVar1 != 0) {
    fn_00302734(&DAT_007d7ff2);
  }
  return;
}



int fn_001031cc(byte *param_1,undefined4 *param_2,undefined4 param_3)

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
  iVar4 = fn_0010354c(pbVar6,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((byte *)*param_2 == pbVar6)) {
    *param_2 = param_1;
  }
  if ((*piVar1 != 2) && (*piVar1 = iVar2, iVar8 << 0x15 < 0)) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



undefined8 fn_0010354c(char *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  uint local_30;
  
  cVar4 = *param_1;
  pcVar8 = param_1 + 1;
  bVar1 = false;
  bVar2 = false;
  if (cVar4 == '0') {
    bVar1 = true;
    cVar4 = *pcVar8;
    pcVar8 = param_1 + 2;
    if ((cVar4 == 'x') || (cVar4 == 'X')) {
      if ((param_3 == 0) || (param_3 == 0x10)) {
        bVar1 = false;
        cVar4 = *pcVar8;
        param_3 = 0x10;
        pcVar8 = param_1 + 3;
      }
    }
    else if (param_3 == 0) {
      param_3 = 8;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar3 = 0;
  local_30 = 0;
  while( true ) {
    iVar5 = fn_002ff284(cVar4,param_3);
    if (iVar5 < 0) break;
    bVar1 = true;
    local_30 = param_3 * local_30 + iVar5;
    lVar9 = fn_002ff2f8(param_3,param_3 >> 0x1f,(int)uVar3,(int)(uVar3 >> 0x20));
    uVar3 = lVar9 + (ulonglong)(local_30 >> 0x10);
    local_30 = local_30 & 0xffff;
    if (0xffffffffffff < uVar3) {
      bVar2 = true;
    }
    cVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      param_1 = pcVar8 + -1;
    }
    *param_2 = param_1;
  }
  if (bVar2) {
    puVar6 = (undefined4 *)fn_002ff798();
    *puVar6 = 2;
    local_30 = 0xffffffff;
    uVar7 = local_30;
  }
  else {
    uVar7 = (uint)(uVar3 >> 0x10);
    local_30 = (uint)(uVar3 << 0x10) | local_30;
  }
  return CONCAT44(uVar7,local_30);
}



undefined4 fn_001031a4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002fecb6();
  iVar2 = fn_00103248(param_2);
  if (iVar2 == 0) {
    return uVar1;
  }
  return 0xffffffff;
}



uint fn_00103248(int param_1)

{
  return *(uint *)(param_1 + 0xc) & 0x80;
}



void fn_00103180(void)

{
  int *piVar1;
  
  for (piVar1 = &DAT_008864fc; piVar1 != &DAT_00887a0c; piVar1 = piVar1 + 1) {
    (*(code *)(*piVar1 + (int)piVar1))();
  }
  return;
}



short * fn_00103156(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  
  for (psVar1 = param_1; *psVar1 != 0; psVar1 = psVar1 + 1) {
  }
  for (; (param_3 != 0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    *psVar1 = *param_2;
    psVar1 = psVar1 + 1;
    param_3 = param_3 + -1;
  }
  *psVar1 = 0;
  return param_1;
}



short * fn_0010313a(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  for (psVar2 = param_1; *psVar2 != 0; psVar2 = psVar2 + 1) {
  }
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return param_1;
}



void fn_00103130(undefined4 param_1,undefined4 param_2,int param_3)

{
  fn_003007a0(param_1,param_2,param_3 << 1);
  return;
}


