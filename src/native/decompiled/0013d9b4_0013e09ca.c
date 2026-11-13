#include "0013d9b4_0013e09ca.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


int fn_0013defc(void)

{
  return (int)*(char *)(DAT_008bfbf8 + 0x75);
}



void fn_0013dec0(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    do {
      puVar2 = *(uint **)(param_1 + 4);
      uVar3 = *puVar2 >> 0x18;
      if (param_2 == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        uVar3 = uVar3 | 1;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 & 0xffffff | uVar3 << 0x18;
  }
  return;
}



void fn_0013de8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_001502a4();
  fn_00150224(uVar1,param_1,param_2,param_3,param_4);
  return;
}



void fn_0013ddf8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  
  iVar2 = fn_0015ff34();
  if (param_1 < 2) {
    pbVar4 = *(byte **)(iVar2 + 0x5c + param_1 * 4);
    uVar3 = 1 - *pbVar4 & 0xff;
    pbVar4 = pbVar4 + uVar3 * 0x1c + 4;
    *(undefined4 *)pbVar4 = param_2;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0;
    pbVar4[0x1b] = 0;
    *(undefined4 *)(pbVar4 + 4) = param_3;
    *(undefined4 *)(pbVar4 + 8) = param_4;
    *(undefined4 *)(pbVar4 + 0xc) = param_5;
    *(undefined4 *)(pbVar4 + 0x10) = param_6;
    *(undefined4 *)(pbVar4 + 0x14) = param_7;
    coproc_moveto_Data_Synchronization(0);
    do {
      puVar5 = *(uint **)(iVar2 + 0x5c + param_1 * 4);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = *puVar5 & 0xffff0000 | uVar3 | 0x100;
  }
  return;
}



int fn_0013ddd8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0015ff34();
  return (int)*(char *)(*(int *)(iVar1 + 0x5c + param_1 * 4) + 1);
}



void fn_0013dd9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_001502a4();
  fn_001501a0(uVar1,param_1,param_2,param_3);
  return;
}



void fn_0013dc94(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  fn_00170704(&DAT_008ebd90);
  if (DAT_008bfbdc != '\0') {
    fn_001707b4(&DAT_008ebd90);
    return;
  }
  DAT_008bfbdc = 1;
  if (DAT_008bfbdf == '\0') {
    fn_0013db70();
    DAT_008bfbdf = '\x01';
  }
  uVar1 = DAT_008bfbe0;
  uVar2 = fn_002febd8();
  fn_0014fe94(&DAT_008bfbec,uVar1,uVar2,0);
  DAT_008bfbf0 = DAT_008bfbec;
  fn_0013df74(&DAT_008bfbf0,0xffff8001,(int)DAT_008bfbde);
  DAT_0088ec40 = 0;
  DAT_0088ec48 = 0xffffffff;
  DAT_0088ec44 = 0;
  DAT_0088ec6c = 0;
  DAT_0088ec70 = 0;
  DAT_0088ec74 = 0;
  DAT_0088ec78 = 0;
  DAT_0088ec7c = 0;
  DAT_0088ec80 = 0;
  DAT_0088ec84 = 0;
  DAT_0088ec88 = 0;
  DAT_0088ec8c = 0;
  DAT_0088ec90 = 0;
  DAT_0088ec98 = 0;
  DAT_0088ec9c = 0;
  DAT_0088eca4 = 0;
  DAT_0088eca8 = 0;
  DAT_0088ecac = 0;
  DAT_0088ecb0 = 1;
  DAT_008bfbf8 = &DAT_0088ec40;
  fn_0014ff3c();
  fn_001707b4(&DAT_008ebd90);
  return;
}



void fn_0013daf8(void)

{
  if ((DAT_008c034c & DAT_008c034d) == 0) {
    return;
  }
  fn_0013d7c0(&DAT_008ef5bc,1);
  DAT_008c0350 = DAT_1ff810c0;
  fn_0015f1d0(&DAT_008ef56c);
  DAT_008c034d = 0;
  DAT_008c034e = 0;
  coproc_moveto_Data_Synchronization(0);
  fn_0015dfc0(&DAT_008c0354);
  return;
}



int fn_0013d9b4(int *param_1,int param_2)

{
  int iVar1;
  undefined2 local_28 [2];
  short local_24 [2];
  char local_20 [8];
  
  iVar1 = 0;
  if ((char)param_1[0x4c7] != '\0') {
    fn_00193374();
    fn_00170704(param_1 + 2);
    iVar1 = fn_00189e18();
    if (iVar1 != 0) {
      if (param_2 == 0) {
        local_28[0] = 1;
      }
      else {
        local_28[0] = 3;
      }
      fn_0014e518(2,local_28,4);
      while( true ) {
        local_24[0] = 0;
        fn_0014e4e4(0,local_20);
        if (local_20[0] != '\0') {
          fn_0014e6b0(0,local_24);
        }
        if (local_24[0] == 1) break;
        fn_0012d6a4(0x4a95c0,0);
      }
    }
    *(undefined1 *)(param_1 + 0x4c7) = 0;
    fn_001707b4(param_1 + 2);
    fn_00193380();
    while (0 < param_1[5]) {
      fn_0012d6a4(0x4a95c0,0);
    }
    if (param_2 != 0) {
      fn_00301a9c(param_1 + 7,param_1[0x42b],0x1080);
    }
    if (*param_1 != 0) {
      svc_0x23();
      *param_1 = 0;
    }
    fn_0014e5b8(*param_1,2);
    iVar1 = param_1[1];
    svc_0x23();
    param_1[1] = 0;
  }
  return iVar1;
}


