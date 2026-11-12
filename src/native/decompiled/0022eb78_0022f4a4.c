#include "0022eb78_0022f4a4.h"



void fn_0022f4a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_30 [32];
  undefined1 auStack_10 [8];
  
  fn_0022f314(auStack_30,0x10,*(undefined1 *)(param_2 + 6),param_2 + 8,3,param_3);
  fn_00168a24(param_1,auStack_30,auStack_10);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0022f36c) */

void fn_0022f314(short *param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = 0;
  psVar2 = &DAT_0022f49c;
  psVar9 = param_1;
  psVar8 = param_1;
  if (param_2 != 1) {
    do {
      uVar10 = uVar10 + 1;
      psVar9 = psVar8 + 1;
      *psVar8 = *psVar2;
      if (psVar2[1] == 0) break;
      psVar2 = psVar2 + 1;
      psVar8 = psVar9;
    } while (uVar10 < param_2 - 1);
  }
  *psVar9 = 0;
  uVar3 = fn_00192cb4(DAT_00897800,0x25,param_6);
  uVar4 = fn_00192cb4(DAT_00897800,0x26,param_6);
  uVar5 = fn_00192cb4(DAT_00897800,0x27,param_6);
  iVar11 = 0;
  do {
    if (iVar11 < param_3) {
      if (*(short *)(param_4 + iVar11 * 2) == 0) {
        iVar6 = fn_00100b58();
        iVar7 = fn_00100b58(param_1);
        uVar10 = iVar7 + iVar6;
        uVar1 = uVar5;
      }
      else {
        iVar6 = fn_00100b58();
        iVar7 = fn_00100b58(param_1);
        uVar10 = iVar7 + iVar6;
        uVar1 = uVar3;
      }
      if (param_2 <= uVar10) {
        iVar6 = (param_2 - iVar7) + -1;
      }
      fn_00103156(param_1,uVar1,iVar6);
      param_1[param_2 - 1] = 0;
    }
    else {
      iVar6 = fn_00100b58(uVar4);
      iVar7 = fn_00100b58(param_1);
      if (param_2 <= (uint)(iVar7 + iVar6)) {
        iVar6 = (param_2 - iVar7) + -1;
      }
      fn_00103156(param_1,uVar4,iVar6);
      param_1[param_2 - 1] = 0;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  return;
}



void fn_0022f2b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_0089823c;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022f300,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0022f244(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898798;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022f294,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0022f128(short *param_1,int param_2,uint param_3)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  *param_1 = 0;
  if (7 < param_3) {
    uVar3 = fn_00192cb4(DAT_00897800,0x25,0);
    fn_0016ba84(DAT_00897800,uVar3);
    fn_0016ba84(DAT_00897800,uVar3);
    psVar1 = (short *)fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_0022f228,0);
    uVar4 = 0;
    psVar2 = param_1;
    if (param_2 != 1) {
      do {
        uVar4 = uVar4 + 1;
        param_1 = psVar2 + 1;
        *psVar2 = *psVar1;
        bVar5 = psVar1[1] == 0;
        psVar1 = psVar1 + 1;
        psVar2 = param_1;
      } while ((bVar5 || uVar4 <= param_2 - 1U) && (!bVar5 && param_2 - 1U != uVar4));
    }
    *param_1 = 0;
    return;
  }
  psVar1 = (short *)fn_00192cb4(DAT_00897800,0x25,0);
  uVar4 = 0;
  if (param_3 != 0) {
    psVar2 = param_1 + -1;
    if ((param_3 & 1) != 0) {
      *param_1 = *psVar1;
      psVar2 = param_1;
    }
    for (uVar4 = param_3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1 & 0xff) {
      psVar2[1] = *psVar1;
      psVar2 = psVar2 + 2;
      *psVar2 = *psVar1;
    }
    uVar4 = param_3;
  }
  param_1[uVar4] = 0;
  return;
}



void fn_0022f0c0(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  fn_0018a618(&local_28,0x10,0xf,&DAT_0022f120,param_2);
  fn_00168a24(param_1,&local_28,auStack_2c);
  return;
}



void fn_0022f03c(undefined4 param_1,int param_2)

{
  int iVar1;
  char *apcStack_18 [3];
  
  if (param_2 == 0) {
    apcStack_18[0] = (char *)&DAT_0086c7e0;
    apcStack_18[1] = (char *)&DAT_0086c5a4;
    apcStack_18[2] = (char *)&DAT_0086c7f4;
    iVar1 = fn_00242b6c();
    fn_0016ba34(DAT_00897800,DAT_00898214,apcStack_18[iVar1],0);
    return;
  }
  fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_0022f0a4,0);
  return;
}



void fn_0022ef60(undefined2 *param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_0022efe0,0);
  iVar2 = 0;
  if (0 < (int)(param_2 - 1)) {
    puVar3 = param_1 + -1;
    if ((param_2 & 1) == 0) {
      *param_1 = *puVar1;
      puVar3 = param_1;
    }
    for (iVar2 = (int)(param_2 - 1) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar3[1] = *puVar1;
      puVar3 = puVar3 + 2;
      *puVar3 = *puVar1;
    }
    iVar2 = param_2 - 1;
  }
  param_1[iVar2] = 0;
  return;
}



void fn_0022eefc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898230;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022ef4c,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,param_2);
  return;
}



void fn_0022eed8(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_00898230,param_1,0);
  return;
}



void fn_0022ee7c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898234;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022eecc,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0022ee10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898240;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0022ee60,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0022ed64(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [16];
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x01') {
    if (*(byte *)(param_1 + 8) < 2) {
      fn_0016ba34(DAT_00897800,DAT_00898248,
                   *(undefined4 *)(auStack_28 + (uint)*(byte *)(param_1 + 8) * 4 + 0x18),0);
    }
  }
  else {
    if (cVar1 == '\x02') {
      fn_00230604(param_1 + 8);
      return;
    }
    if (cVar1 == '\x03') {
      uVar2 = *(undefined1 *)(param_1 + 10);
      uVar3 = *(undefined1 *)(param_1 + 9);
      fn_00102908(auStack_28,0xd,"DiscCode%03d",*(undefined1 *)(param_1 + 8));
      uVar4 = fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_28,0);
      fn_00102908(auStack_28,0xd,"DiscCode%03d",uVar3);
      uVar5 = fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_28,0);
      fn_00102908(auStack_28,0xd,"DiscCode%03d",uVar2);
      uVar6 = fn_0016ba34(DAT_00897800,DAT_0089878c,auStack_28,0);
      fn_0016ba84(DAT_00897800,uVar4);
      fn_0016ba84(DAT_00897800,uVar5);
      fn_0016ba84(DAT_00897800,uVar6);
      fn_0016ba34(DAT_00897800,DAT_00898248,"Name_Custom",0);
      return;
    }
  }
  return;
}



void fn_0022eb78(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [68];
  undefined1 auStack_14 [8];
  
  fn_001f825c();
  fn_006619ec(auStack_58,param_2);
  fn_0011ddb8();
  fn_00168a24(param_1,auStack_58,auStack_14);
  return;
}


