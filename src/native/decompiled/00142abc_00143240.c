#include "00142abc_00143240.h"

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

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


undefined4 * fn_00143240(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858978;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x19c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_001534d4();
  }
  iVar1 = param_1[1];
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0015370c(iVar1);
      fn_002feef8();
    }
    param_1[1] = iVar2;
  }
  return param_1;
}



void fn_0014321c(int param_1)

{
  fn_00152a84(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_00143198(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0xdc);
  if (*(int *)(iVar3 + 0x48) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x48) + -1;
  }
  iVar1 = iVar3 + 8 + iVar1 * 0x20;
  iVar4 = *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x14);
  if (iVar4 != 0) {
    if (*(char *)(iVar3 + 0x4c) == '\0') {
      uVar5 = *(undefined4 *)(iVar1 + 8);
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 8);
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_001694e4(uVar5,uVar2,iVar4);
    if (param_2 != 0) {
      fn_0015fa54(uVar5,iVar4);
      return;
    }
  }
  return;
}



void fn_00143174(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  iVar1 = fn_00153d6c();
  *(undefined1 *)(iVar2 + iVar1 * 0x10 + 0xc) = 0;
  return;
}



void fn_00142f00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fn_00117984();
  uVar1 = fn_0010fa20();
  iVar2 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar3 = fn_006eb278(uVar1);
      fn_005e2a6c(uVar3,0,*(undefined4 *)(param_1 + 0x44));
      iVar2 = *(int *)(param_1 + 0x44);
    }
  }
  else {
    uVar3 = fn_00176d68(*(int *)(param_1 + 0x48));
    uVar4 = fn_006eb278(uVar1);
    fn_005e2a6c(uVar4,0,uVar3);
    iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  }
  *(int *)(param_1 + 0x44) = iVar2;
  uVar3 = fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  uVar4 = fn_006eb278(uVar1);
  fn_005e2a6c(uVar4,0,uVar3);
  fn_005e581c(uVar1);
  fn_006eb278(uVar1);
  fn_005e2a9c();
  fn_005e5e5c(uVar1,0);
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar3 = fn_00176d68();
    fn_005e60bc(uVar1,uVar3);
  }
  fn_005e5884(uVar1);
  fn_005e5ec0(uVar1,iVar2 + 0x1a8,iVar2 + 0x148);
  *(undefined1 *)(param_1 + 0x74) = 0;
  fn_005e1844(*(undefined4 *)(param_1 + 0x20));
  fn_005e692c(&local_30,uVar1);
  *(undefined4 *)(param_1 + 0x30) = local_30;
  *(undefined4 *)(param_1 + 0x34) = uStack_2c;
  *(undefined4 *)(param_1 + 0x38) = uStack_28;
  *(undefined4 *)(param_1 + 0x3c) = uStack_24;
  *(undefined4 *)(param_1 + 0x40) = uStack_20;
  uVar3 = fn_006eb278(uVar1);
  fn_005e1b70(uVar3,param_1 + 0x30);
  fn_005e3b8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x44));
  fn_005e3abc(*(undefined4 *)(param_1 + 0x2c));
  uVar3 = fn_006ebf78(*(undefined4 *)(param_1 + 0x24));
  fn_005e335c(*(undefined4 *)(param_1 + 0x2c),uVar3);
  fn_005e3af4(*(undefined4 *)(param_1 + 0x2c));
  fn_0024073c(param_1,uVar1);
  fn_005e68a0(uVar1,param_1 + 0x30);
  if (*(char *)(param_1 + 0x74) == '\0') {
    uVar3 = fn_006eb2a8(uVar1);
    fn_005e17f8(*(undefined4 *)(param_1 + 0x20),uVar3);
  }
  fn_00240324(param_1);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar3 = fn_006eb278(uVar1);
      fn_005e2a6c(uVar3,0,*(undefined4 *)(param_1 + 0x44));
    }
  }
  else {
    uVar3 = fn_00176d68(*(int *)(param_1 + 0x48));
    uVar4 = fn_006eb278(uVar1);
    fn_005e2a6c(uVar4,0,uVar3);
    fn_00176d68(*(undefined4 *)(param_1 + 0x48));
  }
  fn_006eb278(uVar1);
  fn_005e2a9c();
  fn_005e5e5c(uVar1,0);
  iVar5 = *(int *)**(undefined4 **)(param_1 + 0x20);
  iVar2 = fn_00153d6c();
  *(undefined1 *)(iVar5 + iVar2 * 0x10 + 0xc) = 0;
  return;
}



void fn_00142e38(int param_1)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (*pcVar1 != '\0') {
    pcVar1[1] = '\0';
    svc_0x24();
    if (*(int *)(pcVar1 + 0x14) < 0) {
      fn_0015e294();
    }
    pcVar1[0x18] = '\x01';
    fn_0015e304();
    if (*(int *)(pcVar1 + 0x14) != 0) {
      svc_0x23();
      *(int *)(pcVar1 + 0x14) = 0;
    }
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    uVar3 = 0;
    if (*(int *)(pcVar1 + 0xc) - *(int *)(pcVar1 + 8) >> 2 != 0) {
      do {
        piVar4 = (int *)(*(int *)(pcVar1 + 8) + uVar3 * 4);
        piVar2 = (int *)*piVar4;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *piVar4 = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(*(int *)(pcVar1 + 0xc) - *(int *)(pcVar1 + 8) >> 2));
    }
    *pcVar1 = '\0';
  }
  return;
}



void fn_00142d4c(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  fn_00170704(param_1 + 0x1c);
  piVar5 = *(int **)(param_1 + 0xc);
  iVar3 = extraout_r1;
  piVar4 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar4 != piVar5) {
      iVar3 = *piVar4;
    }
    if (piVar4 == piVar5 || iVar3 == param_2) break;
    piVar4 = piVar4 + 1;
  }
  if (piVar5 != piVar4) {
    param_2 = param_1 + 8;
  }
  if (piVar5 != piVar4 && *(int **)(param_1 + 8) != piVar5) {
    piVar1 = piVar4 + 1;
    if (piVar5 != piVar1) {
      if (piVar5 < piVar1) {
        for (; piVar1 != piVar5; piVar1 = piVar1 + 1) {
          *piVar4 = *piVar1;
          piVar4 = piVar4 + 1;
        }
      }
      else {
        uVar2 = (int)piVar5 - (int)piVar1;
        if (0 < (int)uVar2) {
          uVar7 = (uVar2 & 7) >> 2;
          if (uVar7 != 0) {
            *piVar4 = *piVar1;
          }
          uVar6 = (uint)(uVar7 != 0);
          if ((int)uVar7 < (int)uVar2 >> 2) {
            do {
              uVar7 = uVar7 + 2;
              piVar4[uVar6] = piVar1[uVar6];
              piVar4[uVar6 + 1] = piVar1[uVar6 + 1];
              uVar6 = uVar6 + 2;
            } while ((int)uVar7 < (int)piVar5 - (int)piVar1 >> 2);
          }
        }
      }
    }
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -4;
  }
  fn_001707b4(param_1 + 0x1c);
  return;
}



void fn_00142b64(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 == (int *)0x0) {
    return;
  }
  fn_00170704();
  if (*(int **)(iVar1 + 0x1020) == param_2) {
    do {
      iVar3 = 0;
      svc_0xa();
    } while (*(int **)(iVar1 + 0x1020) == param_2);
joined_r0x00142c70:
    if (param_2 == (int *)0x0) goto LAB_00142c74;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x1018);
    if (iVar3 != 0) {
      piVar4 = *(int **)(iVar3 + 0x10);
      for (piVar2 = (int *)*piVar4; piVar2 != piVar4; piVar2 = (int *)*piVar2) {
        if ((int *)piVar2[2] == param_2) {
          if (piVar2 != piVar4) {
            *(int *)piVar2[1] = *piVar2;
            *(int *)(*piVar2 + 4) = piVar2[1];
            *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + -1;
            *piVar2 = *(int *)(iVar3 + 4);
            *(int **)(iVar3 + 4) = piVar2;
          }
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 4))(param_2);
            iVar3 = extraout_r1_00;
          }
          if (*(int *)(*(int *)(iVar1 + 0x1018) + 0x14) == 0) {
            fn_00147090(iVar1 + 0x1018);
            iVar3 = extraout_r1_01;
          }
          goto LAB_00142c74;
        }
      }
      goto joined_r0x00142c70;
    }
  }
  (**(code **)(*param_2 + 4))(param_2);
  iVar3 = extraout_r1;
LAB_00142c74:
  fn_001707b4(iVar1 + 0x100c,iVar3);
  return;
}



int fn_00142abc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  iVar2 = param_1 + 0x18;
  *(undefined4 *)(param_1 + 0x18) = 0;
  fn_00301f50(param_1 + 0x1c,0x150);
  uVar6 = 0;
  uVar3 = 0;
  do {
    *(undefined1 *)(iVar2 + uVar3 + 0x154) = 0;
    fn_0015d21c(iVar2 + uVar3 * 0x70 + 0x160);
    uVar4 = uVar3 + 1;
    iVar1 = iVar2 + uVar3 * 0x14;
    *(undefined1 *)(iVar1 + 0x6a0) = 0;
    uVar5 = (undefined4)uVar6;
    *(undefined4 *)(iVar1 + 0x6a4) = uVar5;
    *(undefined4 *)(iVar1 + 0x6a8) = uVar5;
    *(undefined4 *)(iVar1 + 0x6ac) = uVar5;
    *(undefined4 *)(iVar1 + 0x6b0) = uVar5;
    uVar3 = uVar4;
  } while (uVar4 < 0xc);
  fn_00143a58(*(undefined4 *)(param_1 + 0x14));
  fn_00143a58(*(undefined4 *)(param_1 + 0x10));
  fn_00143a58(*(undefined4 *)(param_1 + 0xc));
  fn_00143a58(*(undefined4 *)(param_1 + 8));
  return param_1;
}


