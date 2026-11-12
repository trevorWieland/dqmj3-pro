#include "0010fcd0_00110700.h"

static void svc_0x8(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x8 }
#endif
}


undefined4 * fn_00110700(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = &DAT_0081be30;
  *(undefined1 *)(param_1 + 1) = 0xff;
  puVar1 = (undefined4 *)fn_0012e7ec(param_1 + 2);
  *puVar1 = &DAT_00851770;
  *(undefined2 *)((int)puVar1 + 0x2e) = 1;
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 1;
    *(undefined2 *)(puVar1 + uVar6 * 9 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + uVar6 * 0x24 + 0x32) = 0;
    *(undefined2 *)(puVar1 + uVar6 * 9 + 0xd) = 0;
    puVar1[uVar6 * 9 + 0xf] = 0x3f800000;
    *(undefined2 *)(puVar1 + uVar6 * 9 + 0xe) = 0xffff;
    *(undefined1 *)((int)puVar1 + uVar6 * 0x24 + 0x36) = 0;
    *(undefined1 *)((int)puVar1 + uVar6 * 0x24 + 0x37) = 3;
    *(undefined1 *)(puVar1 + uVar6 * 9 + 0x10) = 0;
    *(undefined1 *)((int)puVar1 + uVar6 * 0x24 + 0x41) = 0;
    *(undefined2 *)((int)puVar1 + uVar6 * 0x24 + 0x42) = 0;
    *(undefined2 *)(puVar1 + uVar6 * 9 + 0x11) = 0;
    *(undefined1 *)((int)puVar1 + uVar6 * 0x24 + 0x46) = 0;
    *(undefined1 *)((int)puVar1 + uVar6 * 0x24 + 0x47) = 0;
    *(undefined2 *)(puVar1 + uVar6 * 9 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + uVar6 * 0x24 + 0x4a) = 0;
    *(undefined1 *)(puVar1 + uVar6 * 9 + 0x13) = 0;
    *(undefined1 *)((int)puVar1 + uVar6 * 0x24 + 0x4d) = 0;
    *(undefined2 *)((int)puVar1 + uVar6 * 0x24 + 0x4e) = 0;
    *(undefined2 *)(puVar1 + uVar6 * 9 + 0x14) = 0;
    uVar6 = uVar7;
  } while (uVar7 < 4);
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar5 = iVar4 + 1;
    iVar3 = iVar3 + 2;
    *(undefined2 *)((int)puVar1 + iVar4 * 2 + 0xc0) = 0xffff;
    iVar4 = iVar4 + 2;
    *(undefined2 *)((int)puVar1 + iVar5 * 2 + 0xc0) = 0xffff;
  } while (iVar3 < 0x40);
  iVar3 = fn_0012e864(puVar1 + 0x50);
  iVar3 = fn_0011d89c(iVar3 + 0x850);
  puVar1 = (undefined4 *)fn_0012e7ec(iVar3 + 0x1108);
  *puVar1 = &DAT_008517b0;
  *(undefined1 *)(puVar1 + 8) = 2;
  puVar1[3] = 0x100000c;
  puVar1[0xc] = 1;
  puVar1[6] = 0x44d;
  puVar1[7] = 0;
  iVar3 = fn_0011d9b0(puVar1 + 0xe);
  puVar1 = (undefined4 *)fn_0012e7ec(iVar3 + 0x8d8);
  *puVar1 = &DAT_008517c0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  iVar3 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_00120ca8();
  }
  puVar1[0x11] = uVar2;
  return puVar1 + -0x8ec;
}



undefined4 * fn_00110518(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &DAT_0081bb6c;
  param_1[1] = 0;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xe;
  param_1[0xf] = param_1 + 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0x11;
  param_1[0x12] = param_1 + 0x11;
  param_1[0x13] = 0;
  param_1[0x14] = param_1 + 0x14;
  param_1[0x15] = param_1 + 0x14;
  param_1[0x16] = 0;
  param_1[0x17] = param_1 + 0x17;
  param_1[0x18] = param_1 + 0x17;
  param_1[0x19] = DAT_008977f0;
  uVar1 = DAT_008977f4;
  param_1[0x1b] = 0;
  param_1[0x1a] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00122644();
  }
  piVar4 = (int *)param_1[0x1b];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[0x1b] = piVar3;
  }
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00122abc();
  }
  piVar4 = (int *)param_1[0x1c];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[0x1c] = piVar3;
  }
  iVar2 = fn_00145b00(4,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00122ae4();
  }
  piVar4 = (int *)param_1[0x1d];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[0x1d] = piVar3;
  }
  fn_0011cf5c(param_1,DAT_00898158);
  fn_0011cf5c(param_1,DAT_0089815c);
  fn_00121838(DAT_00897800,DAT_0089877c,1);
  return param_1;
}



bool fn_001104a8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != -1) {
    iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8);
    *(undefined4 *)(iVar1 + 0x28) = 1;
    fn_0017d90c(param_1 + 4,iVar1 + 0x2c);
    fn_0017d948(param_1 + 0x10,param_1 + 0x14,iVar1 + 0x2c);
    *param_2 = -1;
  }
  return iVar2 != -1;
}



undefined4 fn_00110460(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 != -1) {
    uVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38);
    uVar1 = fn_0016a464(param_1,uVar1);
    *param_2 = -1;
  }
  return uVar1;
}



undefined4 fn_001103e0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*param_2 != -1) {
    uVar2 = 1;
    for (piVar1 = *(int **)(param_1 + 0x44); piVar1 != (int *)(param_1 + 0x44);
        piVar1 = (int *)*piVar1) {
      if (piVar1[-6] == *param_2) goto LAB_00110424;
    }
    piVar1 = (int *)(param_1 + 0x44);
LAB_00110424:
    iVar3 = (int)piVar1 + -0x18;
    fn_00150c1c(param_1 + 0x40);
    if (iVar3 != 0) {
      fn_00147ff0(iVar3);
      fn_002feef8(iVar3);
    }
    *param_2 = -1;
  }
  return uVar2;
}



undefined4 fn_0011030c(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = (**(code **)(*param_2 + 0xc))(param_2,0x616e696d,param_3,0);
  uVar2 = *(undefined4 *)(param_4 + 0x10);
  if (param_5 != 0) {
    iVar3 = fn_00172c98(uVar2,param_5);
    uVar2 = *(undefined4 *)(iVar3 + 0xac);
  }
  uVar1 = fn_001261b4(uVar2,uVar1);
  uVar4 = fn_001774dc(param_1,param_1 + 0x40,0);
  iVar3 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_0016a2c0(iVar3,uVar4,uVar1,0,0,0,uVar2);
  }
  fn_0017d948(param_1 + 0x40,param_1 + 0x44,iVar3 + 0x18);
  return uVar4;
}



void fn_0010fee0(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 1;
  fn_00129014(2);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4
fn_0010fea0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  svc_0x8();
  *param_1 = param_2;
  return param_5;
}



void fn_0010fcd0(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 2) <= uVar3) {
    uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar10 < uVar3 + 0x20) {
      uVar10 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
    }
    uVar2 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    param_1[2] = (uint)(puVar1 + uVar10);
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
    *param_1 = (uint)puVar1;
    return;
  }
  param_1[1] = (uint)(puVar8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar8[-1];
  }
  puVar5 = puVar8 + -1;
  puVar6 = puVar8;
  if (puVar8 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar8) {
      iVar9 = (int)puVar5 - (int)puVar8 >> 2;
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar8 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar8 = *param_2;
  return;
}


