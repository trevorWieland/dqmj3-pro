#include "005e0790_005e1058.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


undefined4 * fn_005e1058(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_00858958;
  puVar1 = (undefined1 *)fn_00145b00(0x1028,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar1[0x18] = 1;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_005e0fb4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined1 *puStack_14;
  char *pcStack_10;
  
  pcVar2 = *(char **)(param_1 + 4);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    pcVar2[1] = '\x01';
    fn_0013c500(pcVar2 + 0x1c);
    local_20 = 4;
    local_1c = &LAB_0074a190;
    local_18 = &DAT_0074a28c;
    puStack_14 = &LAB_0074a264;
    pcStack_10 = pcVar2;
    iVar1 = fn_0014e2f4(pcVar2 + 0x14,&local_20,fn_005e0da8,&pcStack_10,pcVar2 + 0x1028,0x11,
                         0xfffffffe,0);
    if (iVar1 < 0) {
      fn_0015e294();
    }
  }
  return;
}



void fn_005e0f10(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined1 *puStack_14;
  char *pcStack_10;
  
  pcVar2 = *(char **)(param_1 + 4);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    pcVar2[1] = '\x01';
    fn_0013c500(pcVar2 + 0x1c);
    local_20 = 4;
    local_1c = &LAB_0074a190;
    local_18 = &DAT_0074a28c;
    puStack_14 = &LAB_0074a264;
    pcStack_10 = pcVar2;
    iVar1 = fn_0014e2f4(pcVar2 + 0x14,&local_20,fn_005e0da8,&pcStack_10,pcVar2 + 0x1028,param_2,
                         0xfffffffe,0);
    if (iVar1 < 0) {
      fn_0015e294();
    }
  }
  return;
}



void fn_005e0da8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  while (*(char *)(param_1 + 1) != '\0') {
    fn_00170704();
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    fn_001707b4(param_1 + 0x1c);
    if (iVar1 == iVar4) {
      fn_0012d6a4(100000000,0);
    }
    else {
      fn_00170704(param_1 + 0x1c);
      piVar2 = (int *)**(undefined4 **)(param_1 + 8);
      *(int **)(param_1 + 4) = piVar2;
      fn_001707b4(param_1 + 0x1c);
      (**(code **)(*piVar2 + 8))(piVar2);
      fn_00170704(param_1 + 0x1c);
      puVar5 = *(undefined4 **)(param_1 + 8);
      puVar6 = *(undefined4 **)(param_1 + 0xc);
      if (puVar5 != puVar6) {
        puVar3 = puVar5 + 1;
        if (puVar6 != puVar3) {
          if (puVar6 < puVar3) {
            for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
              *puVar5 = *puVar3;
              puVar5 = puVar5 + 1;
            }
          }
          else if (0 < (int)puVar6 - (int)puVar3) {
            uVar8 = ((int)puVar6 - (int)puVar3 & 7U) >> 2;
            if (uVar8 != 0) {
              *puVar5 = *puVar3;
            }
            uVar7 = (uint)(uVar8 != 0);
            for (; (int)uVar8 < (int)puVar6 - (int)puVar3 >> 2; uVar8 = uVar8 + 2) {
              puVar5[uVar7] = puVar3[uVar7];
              puVar5[uVar7 + 1] = puVar3[uVar7 + 1];
              uVar7 = uVar7 + 2;
            }
          }
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      fn_001707b4(param_1 + 0x1c);
    }
  }
  return;
}



undefined4 *
fn_005e0a98(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  *param_1 = &DAT_00858940;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00858930;
    iVar2 = fn_00145b00(8,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_0010d788(iVar2,param_2,param_3,4,1,0,param_4);
    }
    puVar1[1] = uVar3;
    puVar1[2] = param_2;
  }
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 != puVar1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &DAT_00858930;
      if ((int *)puVar4[1] != (int *)0x0) {
        (**(code **)(*(int *)puVar4[1] + 4))();
      }
      fn_002feef8(puVar4);
    }
    param_1[1] = puVar1;
  }
  return param_1;
}



void fn_005e0a38(undefined4 *param_1)

{
  *param_1 = &DAT_00858920;
  if (param_1[1] != 0) {
    fn_001173f8();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



int fn_005e0a2c(void)

{
  int iVar1;
  int *in_r3;
  int *local_18;
  
  if (DAT_0089a668 == (int *)0x0) {
    local_18 = in_r3;
    iVar1 = fn_0044e138(&local_18,4);
    if (-1 < iVar1) {
      iVar1 = fn_001233c4((char *)&DAT_005e0874,local_18,0);
      if (iVar1 < 0) {
        (**(code **)(*local_18 + 0x30))();
      }
      else {
        DAT_0089a668 = local_18;
      }
    }
  }
  else {
    iVar1 = -0x36dfbb19;
  }
  return iVar1;
}



int fn_005e0a1c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_0044cccc((char *)&DAT_005e0874,2,param_1,0);
  if ((iVar1 < 0) && (iVar1 = fn_0044cccc((char *)&DAT_005e0874,1,param_1,0), iVar1 < 0)) {
    iVar1 = -0x377fbb9c;
  }
  return iVar1;
}



undefined4
fn_005e0974(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar4 = *(undefined4 *)(param_1 + 4);
  local_2c = &DAT_008f9cf4;
  uVar1 = fn_00156b34(uVar4,&local_2c,&DAT_0089a4f8,param_5,param_2);
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    local_28 = param_7;
    uStack_24 = param_8;
    uVar3 = fn_005f38fc(iVar2,uVar1,local_2c,param_3,param_4);
  }
  fn_001588d4(&local_2c);
  fn_00162ad0(uVar4,uVar3);
  return uVar3;
}



void fn_005e07a8(void)

{
  if ((1 < DAT_0089a4e8) && (DAT_0089a4e8 == 2)) {
    svc_0x24();
    if (DAT_0089a4fc < 0) {
      fn_0015e294();
    }
    DAT_0089a500 = 1;
    fn_0015e304(&DAT_0089a4fc);
    if (DAT_0089a4fc != 0) {
      svc_0x23();
      DAT_0089a4fc = 0;
    }
    DAT_0089a4e8 = 0;
  }
  return;
}



bool fn_005e0790(void)

{
  return DAT_0089a4e8 == '\x01';
}


