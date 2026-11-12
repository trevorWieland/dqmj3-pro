#include "006cfe8c_006d0500.h"



void fn_006d0500(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = fn_00129f00(param_2);
  lVar1 = (ulonglong)(uint)(param_3 - iVar2) * 1000000000;
  local_20 = (undefined4)lVar1;
  local_1c = (param_3 - iVar2 >> 0x1f) * 1000000000 + (int)((ulonglong)lVar1 >> 0x20);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  puVar3 = (undefined4 *)fn_0010b444(&local_18,&local_20);
  uVar4 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar4;
  return;
}



void fn_006d0494(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = fn_00129e94(param_2);
  uVar2 = param_3 - iVar1;
  local_20 = (undefined4)((ulonglong)uVar2 * 0xf8475800);
  local_1c = uVar2 * 0xd +
             ((int)uVar2 >> 0x1f) * -0x7b8a800 + (int)((ulonglong)uVar2 * 0xf8475800 >> 0x20);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  puVar3 = (undefined4 *)fn_0010b444(&local_18,&local_20);
  uVar4 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar4;
  return;
}



void fn_006d02f4(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_28;
  uint local_24;
  uint local_20 [2];
  
  iVar3 = 86400000;
  iVar2 = fn_0011c134(*param_2 + 0x7cfc8400,param_2[1] + 0x395f + (uint)(0x83037bff < *param_2),
                       86400000,0);
  fn_0010b2b4(&local_28,&local_24,local_20,iVar2 + -0xb2407);
  uVar6 = iVar2 - 0xb2401;
  iVar2 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar7 = uVar6 + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + 7;
  iVar2 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
  uVar6 = iVar3 / 60000;
  iVar4 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar1 = iVar3 / 1000;
  iVar5 = (int)((longlong)(int)uVar1 * -0x77777777 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  param_1[2] = (uVar1 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * -0x3c) * 0x100 & 0xff00 |
               uVar6 + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * -0x3c & 0xff | (iVar3 % 1000) * 0x10000;
  *param_1 = local_28;
  param_1[1] = (((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + uVar7) * 0x10000 & 0xff0000 |
               local_24 & 0xff | (local_20[0] & 0xff) << 8 | (iVar3 / 3600000) * 0x1000000;
  return;
}



void fn_006d0234(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint uStack_14;
  
  iVar4 = 86400000;
  fn_0011c134(*param_2 + 0x7cfc8400,param_2[1] + 0x395f + (uint)(0x83037bff < *param_2),86400000,0)
  ;
  uVar1 = param_3 + (((iVar4 / 3600000) / 0x18) * 0x18 - iVar4 / 3600000);
  local_20 = (undefined4)((ulonglong)uVar1 * 0x30b8a000);
  local_1c = uVar1 * 0x346 +
             ((int)uVar1 >> 0x1f) * 0x30b8a000 + (int)((ulonglong)uVar1 * 0x30b8a000 >> 0x20);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  puVar2 = (undefined4 *)fn_0010b444(&local_18,&local_20);
  uVar3 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  return;
}



undefined4 fn_006d0204(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)(param_1[1] - *param_1) >> 1;
  if (uVar1 < 0x101) {
    *param_2 = uVar1;
    param_2[1] = *param_1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xe0e046c8;
  }
  return uVar2;
}



undefined4 fn_006d01b0(int param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  
  psVar2 = *(short **)(param_1 + 8);
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    param_3 = (uint)(ushort)psVar2[-1];
  }
  if (sVar1 != 0 || param_3 != 0x2f) {
    if (sVar1 == 0x2e) {
      param_3 = (uint)(ushort)psVar2[1];
    }
    if (sVar1 != 0x2e || param_3 != 0) {
      bVar3 = sVar1 != 0x2e;
      if (!bVar3) {
        sVar1 = psVar2[1];
      }
      if ((bVar3 || sVar1 != 0x2e) || (psVar2[2] != 0)) {
        return 0;
      }
    }
  }
  return 1;
}



undefined1 * fn_006d0180(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = (int)(param_1[1] - *param_1) >> 1;
  if (uVar1 < 0x101) {
    *param_2 = uVar1;
    param_2[1] = *param_1;
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0e046c7;
  }
  return puVar2;
}



void fn_006d0170(undefined4 param_1,undefined4 param_2)

{
  fn_00166824(param_2,param_1);
  return;
}



undefined4 fn_006d0144(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    iVar1 = fn_001010c8(param_2,param_1,8);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined4 fn_006d0108(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(char *)(param_1 + iVar1) == '\0' && (*(char *)(param_1 + iVar1 + 1) == '\0'))) {
    iVar1 = iVar1 + 2;
    if (7 < iVar1) {
      return 1;
    }
  }
  return 0;
}



void fn_006d00f4(undefined4 param_1,undefined4 param_2)

{
  fn_00301a9c(param_2,param_1,0x70);
  return;
}



undefined4 fn_006d003c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  fn_00301a9c(param_2,param_1,0x70);
  param_2 = param_2 + 0x70;
  cVar1 = *(char *)(param_1 + 0x130);
  uVar2 = 0;
  if ((int)cVar1 != 0) {
    do {
      iVar3 = param_1 + uVar2 * 0xc;
      fn_00166824(param_2,iVar3 + 0x70);
      fn_00301a9c(param_2 + 8,*(undefined4 *)(iVar3 + 0x78),*(undefined4 *)(iVar3 + 0x74));
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 8 + (*(int *)(iVar3 + 0x74) + 3U & 0xfffffffc);
    } while (uVar2 < (uint)(int)cVar1);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    fn_00301a9c(param_2,*(int *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x134));
    param_2 = param_2 + *(int *)(param_1 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    fn_00301a9c(param_2,*(int *)(param_1 + 0x13c),0x20);
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined4 fn_006d000c(int param_1,undefined4 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x134) < param_3) {
    param_3 = *(uint *)(param_1 + 0x134);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    fn_00301a9c(param_2,*(int *)(param_1 + 0x138),param_3);
  }
  return *(undefined4 *)(param_1 + 0x134);
}



undefined4 fn_006cff90(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x130;
  iVar1 = (int)*(char *)(param_1 + 0x130);
  if (iVar1 != 0) {
    iVar2 = 0;
  }
  if (0 < iVar1) {
    do {
      if (*(int *)(param_1 + iVar2 * 0xc + 0x70) == param_2) {
        param_1 = param_1 + iVar2 * 0xc;
        *param_3 = *(undefined4 *)(param_1 + 0x74);
        *param_4 = *(undefined4 *)(param_1 + 0x78);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *param_3 = 0;
  return 0xc8810bef;
}



int fn_006cfe8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_4;
  while( true ) {
    iVar1 = fn_00452e1c(param_2,param_3,param_4,param_5,iVar1);
    if (-1 < iVar1 || 1 < iVar2) {
      return iVar1;
    }
    if (iVar1 != -0x375ef410) break;
    fn_0044fd88(1,0);
    iVar2 = iVar2 + 1;
    DAT_0089a619 = 1;
    if (2 < iVar2) {
      DAT_0089a619 = 1;
      return iVar1;
    }
  }
  return iVar1;
}


