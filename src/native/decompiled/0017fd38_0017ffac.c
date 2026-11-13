#include "0017fd38_0017ffac.h"



undefined4
fn_0017ffac(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  
  iVar2 = *param_2;
  uVar1 = 0;
  if (iVar2 == 0x8000100) {
    local_30 = param_6;
    local_2c = (int *)0x0;
    uVar1 = fn_0018d65c(param_1,param_2,*(int *)(param_1 + 0x30) - param_3,param_3,param_4,param_5)
    ;
  }
  else {
    if (iVar2 == 0x8000200) {
      uVar1 = fn_00196f6c(param_1,param_2[1],param_3,param_4,param_5,&local_30);
      return uVar1;
    }
    if (iVar2 == 0x8004000) {
      local_30 = 0x1000001;
      local_2c = (int *)0x0;
      local_28 = 0x1000001;
      local_24 = (int *)0x0;
      fn_00198418(param_1,param_2[1],param_5,&local_30);
      if (local_30 != 0x1000001) {
        fn_0019e864(*(int *)(param_1 + 0x18) + param_4 * 8,param_5);
        uVar1 = fn_0017ffac(param_1,&local_30,param_3,param_4,&local_28,param_6);
        if (((local_28 & 0x8000000) != 0) &&
           (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*local_24 + 8))();
        }
        if (((local_30 & 0x8000000) != 0) &&
           (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*local_2c + 8))();
        }
        return uVar1;
      }
      if (((local_28 & 0x8000000) != 0) &&
         (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_24 + 8))();
      }
      if (((local_30 & 0x8000000) != 0) &&
         (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_2c + 8))();
      }
      return 1;
    }
  }
  return uVar1;
}



int fn_0017ff94(int param_1)

{
  return *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x30) * 8 + -8;
}



void fn_0017ff68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + -1;
  *(int *)(param_1 + 0x30) = iVar1;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&DAT_008c06e8);
  return;
}



int fn_0017fe44(byte *param_1,short *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  bVar3 = false;
  param_3 = param_3 + -1;
  psVar4 = param_2;
  while( true ) {
    bVar2 = *param_1;
    if ((char)bVar2 == 0 || param_3 == 0) break;
    if (bVar3) goto LAB_0017ff50;
    uVar6 = (uint)bVar2;
    if (uVar6 < 0x80) {
      *psVar4 = (short)(char)bVar2;
LAB_0017fee4:
      psVar4 = psVar4 + 1;
      param_3 = param_3 + -1;
      iVar5 = iVar5 + 1;
    }
    else {
      if (uVar6 - 0xc2 < 0x1e) {
        param_1 = param_1 + 1;
        *psVar4 = (ushort)*param_1 + (ushort)bVar2 * 0x40 + -0x3080;
        goto LAB_0017fee4;
      }
      if (uVar6 - 0xe0 < 0x10) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 2;
        *psVar4 = (ushort)*param_1 + (short)((int)(char)bVar2 << 0xc) + (ushort)*pbVar1 * 0x40 +
                  -0x2080;
        goto LAB_0017fee4;
      }
      bVar3 = true;
    }
    param_1 = param_1 + 1;
  }
  if (bVar3) {
LAB_0017ff50:
    iVar5 = -1;
    psVar4 = param_2;
  }
  else {
    iVar5 = iVar5 + 1;
  }
  *psVar4 = 0;
  return iVar5;
}



void fn_0017fe34(void)

{
  return;
}



void fn_0017fdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_50 [68];
  
  fn_00184220(auStack_50,param_3,param_4);
  fn_0018d444(param_1,param_2,auStack_50);
  return;
}



void fn_0017fdcc(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x4c) + 8) = in_s0;
  return;
}



void fn_0017fdbc(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x2c) + 8) = in_s0;
  return;
}



void fn_0017fd4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x40);
  iVar1 = *(int *)(iVar3 + 8);
  while (iVar1 != iVar3) {
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 8) = in_s0;
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc); iVar2 = *(int *)(iVar2 + 4))
      {
        iVar1 = iVar2;
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
  return;
}



void fn_0017fd40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar3 = *(int *)(*(int *)(*(int *)(*param_1 + 4) + 4) + 0x40);
  iVar1 = *(int *)(iVar3 + 8);
  while (iVar1 != iVar3) {
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 8) = in_s0;
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0xc) == 0) {
      for (iVar2 = *(int *)(iVar1 + 4); iVar1 == *(int *)(iVar2 + 0xc); iVar2 = *(int *)(iVar2 + 4))
      {
        iVar1 = iVar2;
      }
      if (*(int *)(iVar1 + 0xc) != iVar2) {
        iVar1 = iVar2;
      }
    }
    else {
      do {
        iVar1 = iVar2;
        iVar2 = *(int *)(iVar1 + 8);
      } while (*(int *)(iVar1 + 8) != 0);
    }
  }
  return;
}



void fn_0017fd38(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *local_34;
  char *local_30;
  undefined1 local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar3 = *(int *)(param_1 + 4);
  pcVar4 = *(char **)(iVar3 + 0x40);
  pcVar2 = pcVar4;
  pcVar7 = *(char **)(pcVar4 + 4);
  while (pcVar7 != (char *)0x0) {
    if (*(int *)(pcVar7 + 0x10) < param_3) {
      pcVar7 = *(char **)(pcVar7 + 0xc);
    }
    else {
      pcVar2 = pcVar7;
      pcVar7 = *(char **)(pcVar7 + 8);
    }
  }
  if ((pcVar2 != pcVar4) && (*(int *)(pcVar2 + 0x10) <= param_3)) {
    pcVar4 = pcVar2;
  }
  if (pcVar4 != *(char **)(iVar3 + 0x40)) goto LAB_0018d35c;
  iVar5 = fn_00145b00(0x20,&DAT_00812c8c);
  local_24 = 0;
  if (iVar5 != 0) {
    local_24 = fn_00196930();
  }
  pcVar7 = *(char **)(iVar3 + 0x40);
  bVar1 = true;
  local_30 = pcVar7;
  pcVar2 = *(char **)(pcVar7 + 4);
  while (pcVar2 != (char *)0x0) {
    bVar1 = param_3 < *(int *)(pcVar2 + 0x10);
    local_30 = pcVar2;
    if (bVar1) {
      pcVar2 = *(char **)(pcVar2 + 8);
    }
    else {
      pcVar2 = *(char **)(pcVar2 + 0xc);
    }
  }
  local_28 = param_3;
  if (*(char *)(iVar3 + 0x48) == '\0') {
    if (bVar1) {
      if (local_30 == *(char **)(pcVar7 + 8)) goto LAB_0018d340;
      if ((*local_30 == '\0') && (*(char **)(*(int *)(local_30 + 4) + 4) == local_30)) {
        local_30 = *(char **)(local_30 + 0xc);
      }
      else {
        pcVar2 = *(char **)(local_30 + 8);
        if (*(char **)(local_30 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(local_30 + 4);
          pcVar7 = local_30;
          while (local_30 = pcVar2, pcVar7 == *(char **)(local_30 + 8)) {
            pcVar2 = *(char **)(local_30 + 4);
            pcVar7 = local_30;
          }
        }
        else {
          do {
            local_30 = pcVar2;
            pcVar2 = *(char **)(local_30 + 0xc);
          } while (*(char **)(local_30 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*(int *)(local_30 + 0x10) < param_3) goto LAB_0018d340;
    local_2c = 0;
  }
  else {
LAB_0018d340:
    fn_0019cb30(&local_34);
    local_30 = local_34;
    local_2c = 1;
  }
  pcVar4 = local_30;
LAB_0018d35c:
  if (param_2 < (uint)((*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14)) / 0xc)) {
    fn_001a0b78(*(undefined4 *)(pcVar4 + 0x14));
    puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x14) + param_2 * 0xc);
    fn_00196910(*(undefined4 *)(pcVar4 + 0x14),*puVar6,puVar6[1],0);
    *(undefined4 *)(*(int *)(pcVar4 + 0x14) + 4) = 0;
  }
  return;
}


