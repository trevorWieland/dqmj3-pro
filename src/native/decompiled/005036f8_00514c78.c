#include "005036f8_00514c78.h"



undefined1 *
fn_00514c78(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined1 *)0x3ff00000;
  if ((int *)0x3fefffff < param_1 + -0x40000) {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  uVar6 = CONCAT44(param_5,param_6);
  if ((int *)0x3fefffff >= param_1 + -0x40000) {
    iVar2 = fn_00509470(puVar1);
    if (iVar2 == 0) {
      puVar1 = &DAT_e0a1482b;
    }
    else if (DAT_008bf4d0 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)fn_004ecfe0(0x14);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &DAT_0085716c;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
        puVar3[1] = uVar4;
        iVar2 = fn_004ecfe0(0x90);
        uVar4 = 0;
        if (iVar2 != 0) {
          uVar4 = fn_00514c48();
        }
        puVar3[3] = uVar4;
        fn_0051493c(uVar4,puVar3[1],param_3,10,(int)((ulonglong)uVar6 >> 0x20),(int)uVar6);
        uVar5 = (undefined4)uVar6;
        *(undefined4 *)(puVar3[3] + 0x5c) = 5;
        uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
        puVar3[2] = uVar4;
        iVar2 = fn_004ecfe0(0x90);
        uVar4 = 0;
        if (iVar2 != 0) {
          uVar4 = fn_0050ef00();
        }
        puVar3[4] = uVar4;
        fn_0050ec34(uVar4,puVar3[2],param_2,10,param_4,uVar5);
        *(undefined4 *)(puVar3[4] + 0x5c) = 5;
      }
      puVar1 = (undefined1 *)0x0;
      DAT_008bf4d0 = puVar3;
    }
    else {
      puVar1 = &DAT_d8a1482e;
    }
  }
  return puVar1;
}



void fn_0050de1c(int param_1,int *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_7c [32];
  undefined2 local_5c [16];
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (0x3fefffff < *(int *)(DAT_008bf4cc + 0xa4) - 0x100000U) {
    return;
  }
  uVar2 = fn_006db3a8(DAT_008c0690,*param_2,param_2[1]);
  piVar3 = (int *)fn_0050b144(DAT_008bf4cc,param_2 + 3);
  if (piVar3 == (int *)0x0) {
    if (param_3 == 0) {
      return;
    }
    piVar3 = (int *)fn_0050b080(DAT_008bf4cc,(char)param_2[2]);
    if (piVar3 == (int *)0x0) {
      return;
    }
  }
  iVar4 = DAT_008bf4d4;
  iVar9 = *param_2;
  if (*(char *)(iVar9 + 1) != '\0') {
    *(char *)(piVar3[0xb] + 0x59) = *(char *)(iVar9 + 1);
    return;
  }
  iVar6 = *(int *)(DAT_008bf4d4 + 0xc);
  piVar3[0x18] = *(int *)(DAT_008bf4d4 + 8);
  piVar3[0x19] = iVar6;
  iVar6 = *(int *)(iVar4 + 0xc);
  piVar3[0x16] = *(int *)(iVar4 + 8);
  piVar3[0x17] = iVar6;
  if (param_3 == 0) {
    local_28 = *(undefined4 *)(param_1 + 0xc);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                      (*(int **)(param_1 + 0x10),&local_28,piVar3 + 1,8,0);
  }
  else {
    if ((char)piVar3[5] == -3) goto LAB_0050df84;
    local_28 = *(undefined4 *)(param_1 + 0xc);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                      (*(int **)(param_1 + 0x10),&local_28,(char)piVar3[5],8,0);
  }
  if (iVar4 - 0x100000U < 0x3ff00000) {
    local_2c = 0;
    local_30 = 5;
    fn_004ed514(&local_2c,uVar2);
    fn_001694d4(iVar4,&local_30);
    fn_0050a490(*(undefined4 *)(param_1 + 0x10));
  }
LAB_0050df84:
  if ((char)piVar3[8] == '\x04') {
    fn_00301a9c(auStack_7c,iVar9 + 4,0x20);
    uVar7 = 0;
    do {
      uVar1 = fn_004edb8c(iVar9 + uVar7 * 2 + 0x24);
      uVar8 = uVar7 + 1;
      local_5c[uVar7] = uVar1;
      uVar7 = uVar8;
    } while (uVar8 < 0x10);
    local_3c = 0;
    local_3a = *(undefined1 *)(iVar9 + 0x44);
    local_39 = *(undefined1 *)(iVar9 + 0x45);
    local_38 = *(undefined1 *)(iVar9 + 3);
    local_34 = fn_004edb98(iVar9 + 0x46);
    iVar4 = fn_00518cb4(DAT_008c0674,piVar3,auStack_7c);
    if (-1 < iVar4) {
      *(undefined1 *)(piVar3 + 8) = 5;
      return;
    }
    uVar2 = 0x80000;
    pcVar5 = *(code **)(*DAT_008c0674 + 8);
    piVar3 = DAT_008c0674;
  }
  else {
    uVar2 = 0x80000000;
    pcVar5 = *(code **)*piVar3;
  }
  (*pcVar5)(piVar3,pcVar5,uVar2,0);
  return;
}



undefined1 * fn_0050bbc4(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_00509460(iVar1);
    if (iVar1 == 0) {
      puVar2 = &DAT_e0a14827;
    }
    else if (DAT_008c0670 == (undefined4 *)0x0) {
      DAT_008c0670 = (undefined4 *)fn_004ecfe0(0xc);
      if (DAT_008c0670 != (undefined4 *)0x0) {
        *DAT_008c0670 = &DAT_0085705c;
        DAT_008c0670[1] = 0;
        *(undefined1 *)(DAT_008c0670 + 2) = 0;
        *(undefined1 *)((int)DAT_008c0670 + 9) = 0;
      }
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = &DAT_d8a1482e;
    }
  }
  return puVar2;
}



undefined4 fn_005036f8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = DAT_008bf4d4;
  iVar6 = DAT_008bf4d4 + 0x10;
  if (*(char *)(DAT_008bf4d4 + 0x28) == '\0') {
    iVar4 = fn_0050c68c(iVar6,0x68,param_3,param_4,param_1,param_2);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = fn_004f82ec();
    }
    uVar3 = fn_0050c920(iVar6,uVar3,0x2000000);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar3 = fn_00518bf0(DAT_008c06a4);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar3 = fn_0050c6d8(iVar2 + 0x10,*(undefined4 *)(param_1 + 0x48),0x200);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  fn_004f426c();
  if (*(char *)(iVar2 + 0x28) == '\0') {
    iVar6 = fn_0050c68c(iVar2 + 0x10,0x78);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_004fb15c();
    }
    uVar3 = fn_0050c920(iVar2 + 0x10,uVar3,0x2100000);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  DAT_008edb25 = *(undefined1 *)((int)param_2 + 5);
  *(undefined1 *)(param_1 + 0x68) = DAT_008edb25;
  if (*(char *)(param_1 + 0x68) != '\0') {
    if (*(char *)(iVar2 + 0x28) == '\0') {
      iVar6 = fn_0050c68c(iVar2 + 0x10,0xb0);
      uVar3 = 0;
      if (iVar6 != 0) {
        uVar3 = fn_0051b6cc();
      }
      uVar3 = fn_0050c920(iVar2 + 0x10,uVar3,0x5000002);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar3 = fn_0050c6d8(iVar2 + 0x10,uVar3,0x500);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    fn_0051a24c();
  }
  uVar5 = *(uint *)(DAT_008bf4d4 + 0x30);
  *(short *)(param_1 + 0x5e) = (short)uVar5;
  if (0xc < (uVar5 & 0xffff)) {
    *(undefined2 *)(param_1 + 0x5e) = 0xc;
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x14))();
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x18))();
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x1c))();
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar6 = fn_004ecfe0(0x80);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_00500760();
    }
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar6 = fn_004ecfe0(200);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_004feda0();
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar6 = fn_004ecfe0(0x68);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_004f8f10();
    }
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar6 = fn_004ecfe0(0x50);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_004ff9b0();
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x3c))();
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  cVar1 = *(char *)(param_2 + 1);
  *(char *)(param_1 + 0x67) = cVar1;
  if (cVar1 == '\x01' || cVar1 == '\x02') {
    iVar6 = *(int *)(DAT_008bf4d4 + 100);
    if (iVar6 == 0) {
      iVar6 = fn_004ecfe0(0x3c);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_00512f30();
      }
      fn_005108ec(iVar6,*(undefined2 *)(param_1 + 0x5e),param_3);
      *(int *)(DAT_008bf4d4 + 100) = iVar6;
    }
    *(undefined1 *)(iVar6 + 0x2b) = 0;
    fn_00510eb0(iVar6,*(short *)(param_1 + 0x5e) * *(short *)(param_1 + 0x5e));
    fn_00512f1c(iVar6,500);
    iVar6 = fn_004ecfe0(0x70);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = fn_004fbaac();
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  else {
    *(undefined4 *)(DAT_008bf4d4 + 100) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  iVar6 = (**(code **)(*(int *)*param_2 + 0xa4))();
  *(char *)(param_1 + 0x66) = (char)iVar6;
  if (iVar6 == 1 || iVar6 == 2) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x24))();
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar3 = (**(code **)(*(int *)*param_2 + 0x28))();
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x2c))();
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x54))();
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  fn_0050bd1c(iVar2,1000);
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar3 = (**(code **)(*(int *)*param_2 + 0x4c))();
    *(undefined4 *)(param_1 + 0x84) = uVar3;
  }
  fn_0051d9f0(iVar2,0);
  *(undefined1 *)(iVar2 + 0x80) = 0;
  return 0;
}


