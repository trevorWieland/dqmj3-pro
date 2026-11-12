#include "005bd0d0_005bd84c.h"



void fn_005bd84c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  fn_005bd8fc();
  iVar3 = *(int *)(param_1 + 0xa0);
  if (iVar3 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x98);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_00899218) goto LAB_005bd8a4;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005bd8a4:
    *(byte *)(iVar3 + 0x44) = *(byte *)(puVar2 + 0x2c1) | *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x98);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00899218) goto LAB_005bd8ec;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005bd8ec:
  *(undefined1 *)(puVar2 + 0x2c1) = 0;
  return;
}



void fn_005bd800(int param_1)

{
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x14))();
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 4))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  fn_0022ccb4(param_1);
  return;
}



void fn_005bd724(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_0022cab4(param_1,DAT_008991d4,param_2,DAT_008991d8);
  iVar1 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bd7e4);
  *(int *)(param_1 + 0xa0) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_002cc310(iVar1,*(undefined4 *)(param_1 + 4),
                                   *(undefined4 *)(param_1 + 0xa0));
    }
    piVar3 = *(int **)(param_1 + 0x9c);
    if (piVar3 != piVar2) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      *(int **)(param_1 + 0x9c) = piVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x10))
              (*(int **)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x48));
    iVar1 = *(int *)(param_1 + 0x9c);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(byte *)(*(int *)(param_1 + 0xa0) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa0) + 0x44) & 0xfe;
  }
  return;
}



void fn_005bd61c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005bd660;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005bd660:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_005bd5c8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005bd610;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005bd610:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_005bd474(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_00849678;
  if ((int *)param_1[0x3d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3d] + 4))();
  }
  iVar6 = param_1[0x3b];
  for (iVar5 = param_1[0x3a]; iVar5 != iVar6; iVar5 = iVar5 + 0x618) {
    *(undefined ***)(iVar5 + 0x5a8) = &PTR_FUN_00854c0c;
    uVar1 = *(uint *)(iVar5 + 0x5f4);
    uVar3 = *(uint *)(iVar5 + 0x5f8);
    uVar4 = uVar1;
    if (uVar1 < uVar3) {
      if (0 < (int)(uVar3 - uVar1)) {
        for (iVar2 = (int)(uVar3 - uVar1) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        }
      }
    }
    else {
      for (; uVar4 != uVar3; uVar4 = uVar4 + 1) {
      }
    }
    fn_0014f1bc(uVar1);
    uVar1 = *(uint *)(iVar5 + 0x5e8);
    uVar3 = *(uint *)(iVar5 + 0x5ec);
    uVar4 = uVar1;
    if (uVar1 < uVar3) {
      if (0 < (int)(uVar3 - uVar1)) {
        for (iVar2 = (int)(uVar3 - uVar1) >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        }
      }
    }
    else {
      for (; uVar4 != uVar3; uVar4 = uVar4 + 4) {
      }
    }
    fn_0014f1bc(uVar1);
    iVar2 = fn_00170f54(iVar5 + 0x5e0);
    fn_004bb560(iVar2 + -0x38);
  }
  iVar5 = param_1[0x3a];
  uVar4 = param_1[0x3c] - iVar5;
  iVar6 = (int)((longlong)(int)uVar4 * -0x57f57f57 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  fn_001008c4(iVar5,(iVar6 >> 10) - (iVar6 >> 0x1f),0);
  fn_00397a78(param_1);
  return;
}



undefined4 * fn_005bd400(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &PTR_FUN_00849678;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0038e974();
  }
  puVar1[0x3d] = uVar3;
  puVar1[0x3e] = 2;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  return puVar1;
}



undefined1 * fn_005bd0d0(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_5d0 [96];
  undefined1 auStack_570 [336];
  undefined4 local_420;
  undefined1 auStack_418 [8];
  undefined4 local_410;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 auStack_3e8 [968];
  
  iVar1 = fn_00113c58(auStack_570);
  iVar1 = fn_00101a1c(iVar1 + 0x78,&LAB_00256038,8,10);
  iVar1 = fn_00255cd0(iVar1 + 0x50);
  iVar1 = fn_00101a1c(iVar1 + 0x1c,&LAB_00256038,8,10);
  iVar1 = fn_00255cd0(iVar1 + 0x50);
  iVar5 = 0;
  *(undefined4 *)(iVar1 + -0x11c) = 0;
  puVar6 = (undefined1 *)(iVar1 + -0x134);
  *(undefined4 *)(iVar1 + -0x118) = 0;
  *(undefined4 *)(iVar1 + -0x114) = 0;
  *(undefined4 *)(iVar1 + -0x110) = 0;
  *(undefined4 *)(iVar1 + -0x10c) = 0;
  *(undefined4 *)(iVar1 + -0x108) = 0;
  *(undefined4 *)(iVar1 + -0x104) = 0;
  *(undefined4 *)(iVar1 + -0x100) = 0;
  *(undefined4 *)(iVar1 + -0xfc) = 0;
  *(undefined4 *)(iVar1 + -0xf8) = 0;
  *(undefined4 *)(iVar1 + -0xf4) = 0;
  *(undefined4 *)(iVar1 + -0xf0) = 0;
  *(undefined4 *)(iVar1 + -0xec) = 0;
  *(undefined4 *)(iVar1 + -0xe8) = 0;
  *(undefined4 *)(iVar1 + -0xe4) = 0;
  *(undefined4 *)(iVar1 + -0xe0) = 0;
  *(undefined4 *)(iVar1 + -0xdc) = 0;
  *(undefined4 *)(iVar1 + -0xd8) = 0;
  *(undefined4 *)(iVar1 + -0xd4) = 0;
  *(undefined4 *)(iVar1 + -0xd0) = 0;
  *(undefined4 *)(iVar1 + -0xcc) = 0;
  *(undefined4 *)(iVar1 + -200) = 0;
  *(undefined4 *)(iVar1 + -0xc4) = 0;
  *(undefined4 *)(iVar1 + -0xc0) = 0;
  *puVar6 = 6;
  fn_0037cbe0(puVar6,2);
  fn_0037cad0(puVar6,0);
  fn_0037cb60(puVar6,2);
  fn_0037cb50(puVar6,0);
  fn_0037cac0(puVar6,1);
  fn_0037cb0c(puVar6,2);
  fn_0037cbf0(puVar6,0);
  fn_0037cb40(puVar6,0);
  fn_0037cbbc(puVar6,0);
  fn_0037cae0(puVar6,0);
  fn_0037cb1c(puVar6,0);
  *(undefined4 *)(iVar1 + -0x194) = 0;
  *(undefined4 *)(iVar1 + -400) = 0;
  *(undefined4 *)(iVar1 + -0x18c) = 0;
  *(undefined4 *)(iVar1 + -0x188) = 0;
  *(undefined4 *)(iVar1 + -0x184) = 0;
  *(undefined4 *)(iVar1 + -0x180) = 0;
  *(undefined4 *)(iVar1 + -0x17c) = 0;
  *(undefined4 *)(iVar1 + -0x178) = 0;
  *(undefined4 *)(iVar1 + -0x174) = 0;
  *(undefined4 *)(iVar1 + -0x170) = 0;
  *(undefined4 *)(iVar1 + -0x16c) = 0;
  *(undefined4 *)(iVar1 + -0x168) = 0;
  *(undefined4 *)(iVar1 + -0x164) = 0;
  *(undefined4 *)(iVar1 + -0x160) = 0;
  *(undefined4 *)(iVar1 + -0x15c) = 0;
  *(undefined4 *)(iVar1 + -0x158) = 0;
  *(undefined4 *)(iVar1 + -0x154) = 0;
  *(undefined4 *)(iVar1 + -0x150) = 0;
  *(undefined4 *)(iVar1 + -0x14c) = 0;
  *(undefined4 *)(iVar1 + -0x148) = 0;
  *(undefined4 *)(iVar1 + -0x144) = 0;
  *(undefined4 *)(iVar1 + -0x140) = 0;
  *(undefined4 *)(iVar1 + -0x13c) = 0;
  *(undefined4 *)(iVar1 + -0x138) = 0;
  iVar1 = fn_00124be8(iVar1 + 0x24);
  *(undefined2 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  iVar1 = fn_00101a1c(iVar1 + 0x30,&LAB_0020c1dc,0x20,0x1e);
  *(undefined4 *)(iVar1 + -0x38) = 0;
  fn_0014f510(iVar1 + -0x30,DAT_008b64f8);
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(undefined1 *)(iVar1 + -0x24) = 0;
  *(undefined1 *)(iVar1 + -0x23) = 0;
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if ((-1 < (int)uVar3) &&
     (uVar4 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8),
     iVar1 = (int)((longlong)(int)uVar4 * -0x57f57f57 + ((ulonglong)uVar4 << 0x20) >> 0x20),
     uVar3 < (uint)((iVar1 >> 10) - (iVar1 >> 0x1f)))) {
    iVar5 = *(int *)(param_1 + 0xe8) + uVar3 * 0x618;
  }
  fn_0023cff0(iVar5 + 0x5a8,auStack_5d0);
  iVar1 = *(int *)(param_1 + 0xe4);
  fn_0017821c(iVar1 + 0x558,auStack_5d0,0x1b0);
  *(undefined4 *)(iVar1 + 0x708) = local_420;
  fn_0014f510(iVar1 + 0x710,auStack_418);
  *(undefined4 *)(iVar1 + 0x718) = local_410;
  *(undefined1 *)(iVar1 + 0x71c) = local_40c;
  *(undefined1 *)(iVar1 + 0x71d) = local_40b;
  *(undefined4 *)(iVar1 + 0x720) = local_408;
  *(undefined4 *)(iVar1 + 0x724) = uStack_404;
  *(undefined4 *)(iVar1 + 0x728) = uStack_400;
  *(undefined4 *)(iVar1 + 0x72c) = uStack_3fc;
  *(undefined4 *)(iVar1 + 0x730) = uStack_3f8;
  *(undefined4 *)(iVar1 + 0x734) = uStack_3f4;
  *(undefined4 *)(iVar1 + 0x738) = uStack_3f0;
  *(undefined4 *)(iVar1 + 0x73c) = uStack_3ec;
  fn_0017821c(iVar1 + 0x740,auStack_3e8,0x3c0);
  fn_005fc96c(*(undefined4 *)(param_1 + 0xe4),1);
  fn_005fc980(*(undefined4 *)(param_1 + 0xe4),1);
  *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xb02) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xb03) = param_3;
  return auStack_570;
}


