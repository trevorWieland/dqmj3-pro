#include "00182f2c_001839ac.h"



undefined4 fn_001839ac(int *param_1,undefined4 param_2)

{
  int extraout_r1;
  int *piVar1;
  
  piVar1 = param_1 + 5;
  fn_00170704(piVar1);
  if ((uint)param_1[8] <= (uint)param_1[10]) {
    fn_001707b4(piVar1);
    return 0;
  }
  fn_00169f1c(param_1[10] + param_1[9]);
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    fn_0014df84(param_1 + 1,1);
  }
  fn_001707b4(piVar1);
  return 1;
}



int fn_00183970(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  while( true ) {
    if (param_2 == (int *)param_3) {
      return 0;
    }
    if (param_2[-7] == param_4) break;
    param_2 = (int *)*param_2;
  }
  return (int)(param_2 + -7);
}



int fn_0018388c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint local_28 [2];
  int iStack_20;
  uint local_1c;
  
  iVar1 = DAT_0089a684;
  iStack_20 = param_1;
  local_1c = param_3;
  if (param_1 == 0) {
    iVar1 = fn_002fecec();
    return iVar1;
  }
  if (param_3 == 0) {
    fn_0030233c(param_1);
    return 0;
  }
  iVar3 = DAT_0089a684 + 0x58;
  fn_00170704(iVar3);
  iVar1 = fn_0019338c(iVar1,param_1,param_3);
  fn_001707b4(iVar3);
  if (iVar1 == 0) {
    iVar1 = fn_002fecec(local_1c);
    if (iVar1 != 0) {
      local_28[0] = fn_0014e774(DAT_0089a684,param_1);
      puVar2 = &local_1c;
      if (local_28[0] < local_1c) {
        puVar2 = local_28;
      }
      fn_00301a9c(iVar1,param_1,*puVar2);
      fn_0030233c(param_1);
    }
  }
  else {
    iVar1 = param_1;
  }
  return iVar1;
}



undefined1 fn_0018387c(void)

{
  return DAT_008e3078;
}



int fn_0018385c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0017fbdc((char)param_1[4]);
  return iVar1 * param_2 + *param_1;
}



int fn_00183840(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = fn_0017fbdc(*(undefined1 *)(param_1 + 0x10));
  return iVar1 * param_2 + iVar2;
}



void fn_00183718(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  
  uVar6 = 0;
  iVar5 = *(int *)(param_2 + 4);
  iVar1 = *(int *)(iVar5 + 4);
  if (iVar1 == 0xc) {
    uVar7 = 0xf;
  }
  else {
    uVar7 = *(undefined1 *)(iVar5 + 0xc);
  }
  if (*(int *)(iVar5 + 8) != 0) {
    do {
      iVar2 = iVar1 + iVar5 + uVar6 * 0x28;
      iVar3 = fn_003035b0(iVar2,param_3);
      if (iVar3 == 0) {
        uVar4 = *(undefined4 *)(iVar2 + 0x24);
        iVar5 = iVar5 + *(int *)(iVar2 + 0x20);
        *param_1 = uVar4;
        iVar1 = fn_0017fb98(uVar7,1);
        param_1[1] = iVar1 + iVar5;
        iVar1 = fn_0017fb98(uVar7,2);
        param_1[2] = iVar1 + iVar5;
        iVar1 = fn_0017fb98(uVar7,4);
        param_1[3] = iVar1 + iVar5;
        iVar1 = fn_0017fb98(uVar7,8);
        param_1[4] = iVar1 + iVar5;
        *(undefined1 *)(param_1 + 5) = uVar7;
        param_1[6] = uVar4;
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar5 + 8));
  }
  *param_1 = 0;
  uVar4 = fn_0017fb98(0,1);
  param_1[1] = uVar4;
  uVar4 = fn_0017fb98(0,2);
  param_1[2] = uVar4;
  uVar4 = fn_0017fb98(0,4);
  param_1[3] = uVar4;
  uVar4 = fn_0017fb98(0,8);
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return;
}



byte fn_00183704(int param_1,uint param_2)

{
  return *(byte *)(param_1 + (param_2 >> 3)) >> (param_2 & 7) & 1;
}



int fn_00183638(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158 + 0x44;
}



int fn_0018360c(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}



undefined4 * fn_00182f2c(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  puVar3 = param_2;
  if (param_3 != 0) {
    *param_2 = 1;
    param_2[1] = 0xf0111;
    puVar3 = param_2 + 4;
    param_2[2] = 1;
    param_2[3] = 0xf0110;
  }
  pcVar4 = (char *)*param_1;
  if (pcVar4[0x18] != '\0') {
    *puVar3 = 0xf;
    puVar3[1] = 0x10112;
    puVar3[2] = 0xf;
    puVar3[3] = 0x10113;
    puVar3[4] = 0;
    puVar3[5] = 0x10114;
    puVar3[6] = 0;
    puVar3[7] = 0x10115;
    return puVar3 + 8;
  }
  if (pcVar4[0x50] == '\0') {
LAB_00183038:
    uVar5 = 0;
  }
  else {
    if (pcVar4[0x50] == '\x0f') {
      if (*pcVar4 == '\0') {
LAB_00183008:
        if (((pcVar4[0x10] == '\0') || (cVar1 = pcVar4[0x11], cVar1 == '\0' || cVar1 == '\x03')) ||
           (cVar1 == '\x04' || cVar1 == '\x05')) goto LAB_00183038;
      }
      else {
        cVar1 = pcVar4[5];
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = pcVar4[6];
        }
        if (((bVar8 && cVar1 == '\0') && (cVar1 = pcVar4[3], cVar1 != '\x04' && cVar1 != '\x05')) &&
           (cVar1 != '\b' && cVar1 != '\t')) {
          bVar8 = cVar1 != '\x0e';
          if (bVar8) {
            cVar1 = pcVar4[4];
          }
          if (((bVar8 && cVar1 != '\x04') && (cVar1 != '\x05' && cVar1 != '\b')) &&
             (cVar1 != '\t' && cVar1 != '\x0e')) goto LAB_00183008;
        }
      }
    }
    uVar5 = 0xf;
  }
  *puVar3 = uVar5;
  puVar3[1] = 0x10112;
  uVar5 = 0;
  if (*(char *)(*param_1 + 0x50) != '\0') {
    uVar5 = 0xf;
  }
  puVar3[2] = uVar5;
  uVar6 = 0;
  puVar3[3] = 0x10113;
  iVar2 = *param_1;
  uVar7 = 0;
  if (*(char *)(iVar2 + 0x54) != '\0') {
    if (*(char *)(iVar2 + 0x55) == '\0') {
      if (*(char *)(iVar2 + 0x50) != '\0') {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 2;
      uVar7 = uVar6;
    }
  }
  if (*(char *)(iVar2 + 0x38) != '\0') {
    if (*(char *)(iVar2 + 0x39) == '\0') {
      if (*(char *)(iVar2 + 0x50) != '\0') {
        uVar6 = uVar6 | 1;
      }
    }
    else {
      uVar6 = uVar6 | 1;
      uVar7 = uVar7 | 1;
    }
  }
  puVar3[4] = uVar6;
  puVar3[5] = 0x10114;
  puVar3[6] = uVar7;
  puVar3[7] = 0x10115;
  return puVar3 + 8;
}


