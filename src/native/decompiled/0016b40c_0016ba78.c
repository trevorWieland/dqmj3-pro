#include "0016b40c_0016ba78.h"



void fn_0016ba78(int param_1)

{
  *(undefined1 *)(param_1 + 0x958) = 1;
  return;
}



int fn_0016ba34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0016752c(param_1,param_1 + 8,param_2);
  iVar2 = fn_00188184(param_1,uVar1,param_3,param_4);
  if (iVar2 == 0) {
    iVar2 = DAT_00898200;
  }
  return iVar2;
}



void fn_0016ba24(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2 + 0xd4) = param_3;
  return;
}



int fn_0016b874(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = param_1 + param_2 * 0xc;
  piVar1 = *(int **)(iVar4 + 0x20);
  piVar5 = *(int **)(iVar4 + 0x1c);
  for (piVar6 = piVar5; piVar1 != piVar6; piVar6 = piVar6 + 4) {
    if (*piVar6 == param_3) goto LAB_0016b8c8;
  }
  piVar6 = (int *)0x0;
LAB_0016b8c8:
  if ((param_6 - 1U & (uint)piVar6) != 0) {
    piVar6[3] = piVar6[3] + 1;
    return piVar6[1];
  }
  while( true ) {
    if (piVar1 == piVar5) {
      return -1;
    }
    if (piVar5[3] == 0) break;
    piVar5 = piVar5 + 4;
  }
  if (piVar5 == (int *)0x0) {
    return -1;
  }
  uVar2 = fn_001287b0();
  iVar4 = fn_0011c184(param_4,uVar2,0x80,5);
  if (iVar4 == 0) {
    fn_0012d73c();
    return -1;
  }
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    fn_0012d73c(iVar4);
    return -1;
  }
  if (param_5 == 0) {
    uVar2 = fn_00145ac0(iVar4);
    iVar3 = fn_00179fc4(param_1,piVar5[1],uVar2);
  }
  else if (param_5 == 1) {
    uVar2 = fn_00145ac0(iVar4);
    iVar3 = fn_0014a614(param_1,piVar5[1],uVar2);
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 3) goto LAB_0016b9fc;
      goto LAB_0016ba14;
    }
    uVar2 = fn_00145ac0(iVar4);
    iVar3 = fn_00179dc0(param_1,piVar5[1],uVar2);
  }
  if (iVar3 != 0) {
LAB_0016b9fc:
    piVar5[3] = 1;
    piVar5[2] = iVar4;
    *piVar5 = param_3;
    return piVar5[1];
  }
LAB_0016ba14:
  fn_0012d73c(iVar4);
  return -1;
}



undefined4 * fn_0016b7d8(undefined4 param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined4 *)fn_0017b9b4();
  *puVar2 = &PTR_FUN_0081d70c;
  puVar2[8] = 0;
  puVar2[9] = 0;
  iVar3 = *param_2;
  uVar1 = (param_2[1] - iVar3) / 0xc;
  if (uVar1 <= param_3) {
    param_3 = uVar1 - 1;
    if (uVar1 <= param_3) {
      fn_002ff628(9,&DAT_008c7604,&DAT_008c7604,param_3,uVar1);
    }
    iVar3 = *param_2;
  }
  puVar4 = (undefined4 *)(iVar3 + param_3 * 0xc);
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  puVar2[1] = *puVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return puVar2;
}



undefined4 * fn_0016b5f0(int *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((int)param_3 < 0) {
    param_3 = fn_002febd8(param_2);
  }
  uVar8 = param_3 >> 5 | 1;
  uVar3 = param_3;
  pcVar1 = param_2;
  for (uVar5 = param_3; uVar8 <= uVar5; uVar5 = uVar5 - uVar8) {
    uVar3 = uVar3 ^ ((int)*pcVar1 & 0xffffU) + uVar3 * 0x20 + (uVar3 >> 2);
    pcVar1 = pcVar1 + 1;
  }
  uVar3 = uVar3 & param_1[1] - 1U;
  puVar6 = *(undefined4 **)(*param_1 + uVar3 * 4);
  while( true ) {
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)fn_002fece8(param_3 + 0x20);
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &DAT_00851220;
      }
      fn_00301a9c(puVar6 + 7,param_2,param_3);
      *(undefined1 *)((int)puVar6 + param_3 + 0x1c) = 0;
      puVar6[5] = param_3;
      uVar5 = param_3;
      for (; uVar8 <= param_3; param_3 = param_3 - uVar8) {
        uVar5 = uVar5 ^ ((int)*param_2 & 0xffffU) + uVar5 * 0x20 + (uVar5 >> 2);
        param_2 = param_2 + 1;
      }
      puVar6[6] = uVar5;
      puVar6[4] = *(undefined4 *)(*param_1 + uVar3 * 4);
      *(undefined4 **)(*param_1 + uVar3 * 4) = puVar6;
      iVar4 = param_1[2];
      param_1[2] = iVar4 + 1U;
      uVar5 = param_1[1];
      if (uVar5 < iVar4 + 1U) {
        iVar7 = *param_1;
        param_1[1] = uVar5 << 1;
        iVar4 = fn_002fece8(uVar5 << 3);
        *param_1 = iVar4;
        fn_00301f50(iVar4,param_1[1] << 2);
        iVar4 = 0;
        if (0 < (int)uVar5) {
          do {
            iVar2 = *(int *)(iVar7 + iVar4 * 4);
            while (iVar2 != 0) {
              uVar3 = *(uint *)(iVar2 + 0x18) & param_1[1] - 1U;
              iVar9 = *(int *)(iVar2 + 0x10);
              *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*param_1 + uVar3 * 4);
              *(int *)(*param_1 + uVar3 * 4) = iVar2;
              iVar2 = iVar9;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar5);
        }
        fn_0019d680(iVar7,uVar5 << 2);
      }
      return puVar6;
    }
    if ((puVar6[5] == param_3) && (iVar4 = fn_001010c8(param_2,puVar6 + 7,param_3), iVar4 == 0))
    break;
    puVar6 = (undefined4 *)puVar6[4];
  }
  return puVar6;
}



void fn_0016b4f4(int param_1,undefined4 param_2)

{
  int iVar1;
  float in_s0;
  
  iVar1 = fn_00100b58(param_2);
  if (iVar1 < 1) {
    if (*(char *)(param_1 + 6) != '\0') {
      fn_0017a11c(param_1,param_1 + 0x1c,DAT_0088fe88,0);
      *(undefined1 *)(param_1 + 6) = 3;
      return;
    }
  }
  else {
    fn_00182810(*(undefined4 *)(param_1 + 0x40),param_2);
    iVar1 = *(int *)(param_1 + 0x38);
    *(float *)(iVar1 + 0x3c) = in_s0 + 20.0;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x3c);
    *(float *)(iVar1 + 0x3c) = in_s0 + 14.0;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    *(byte *)(*(int *)(param_1 + 0x38) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x38) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x40) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe | 1;
    fn_0017a11c(param_1,param_1 + 0x1c,DAT_0088fe84,0);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}



void fn_0016b4ec(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = fn_00100b58(param_2);
  if (iVar2 < 1) {
    if (*(char *)(iVar1 + 6) != '\0') {
      fn_0017a11c(iVar1,iVar1 + 0x1c,DAT_0088fe88,0);
      *(undefined1 *)(iVar1 + 6) = 3;
      return;
    }
  }
  else {
    fn_00182810(*(undefined4 *)(iVar1 + 0x40),param_2);
    iVar2 = *(int *)(iVar1 + 0x38);
    *(float *)(iVar2 + 0x3c) = in_s0 + 20.0;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    iVar2 = *(int *)(iVar1 + 0x3c);
    *(float *)(iVar2 + 0x3c) = in_s0 + 14.0;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    *(byte *)(*(int *)(iVar1 + 0x38) + 0x44) = *(byte *)(*(int *)(iVar1 + 0x38) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(iVar1 + 0x40) + 0x44) = *(byte *)(*(int *)(iVar1 + 0x40) + 0x44) & 0xfe | 1;
    fn_0017a11c(iVar1,iVar1 + 0x1c,DAT_0088fe84,0);
    *(undefined1 *)(iVar1 + 6) = 1;
  }
  return;
}



void fn_0016b414(int param_1)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 2) {
    if (*(char *)(param_1 + 5) == '\x02') {
      if (*(int *)(param_1 + 0x18) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      }
      fn_0017a11c(param_1,param_1 + 0x18,DAT_0088fe80,0);
      *(undefined1 *)(param_1 + 5) = 3;
      if (*(char *)(param_1 + 6) != '\0') {
        fn_0017a11c(param_1,param_1 + 0x1c,DAT_0088fe88,0);
        *(undefined1 *)(param_1 + 6) = 3;
        return;
      }
    }
  }
  else {
    bVar2 = bVar1 == 2 || bVar1 == 3;
    if (bVar1 == 2 || bVar1 == 3) {
      bVar2 = *(char *)(param_1 + 8) == '\x03';
    }
    if (bVar2) {
      if (*(int *)(param_1 + 0x28) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      }
      fn_0017a11c(param_1,param_1 + 0x28,DAT_0088fe9c,0);
      *(undefined1 *)(param_1 + 8) = 4;
    }
  }
  return;
}



void fn_0016b40c(int param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  bVar1 = *(byte *)(iVar2 + 4);
  if (bVar1 < 2) {
    if (*(char *)(iVar2 + 5) == '\x02') {
      if (*(int *)(iVar2 + 0x18) != -1) {
        fn_00159f34(*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
      }
      fn_0017a11c(iVar2,iVar2 + 0x18,DAT_0088fe80,0);
      *(undefined1 *)(iVar2 + 5) = 3;
      if (*(char *)(iVar2 + 6) != '\0') {
        fn_0017a11c(iVar2,iVar2 + 0x1c,DAT_0088fe88,0);
        *(undefined1 *)(iVar2 + 6) = 3;
        return;
      }
    }
  }
  else {
    bVar3 = bVar1 == 2 || bVar1 == 3;
    if (bVar1 == 2 || bVar1 == 3) {
      bVar3 = *(char *)(iVar2 + 8) == '\x03';
    }
    if (bVar3) {
      if (*(int *)(iVar2 + 0x28) != -1) {
        fn_00159f34(*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
      }
      fn_0017a11c(iVar2,iVar2 + 0x28,DAT_0088fe9c,0);
      *(undefined1 *)(iVar2 + 8) = 4;
    }
  }
  return;
}


