#include "0010c924_0010d3b8.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_0010d3b8(int param_1,undefined4 param_2)

{
  fn_00116ab8(*(int *)(param_1 + 4) + 0x128,param_2,*(int *)(param_1 + 4) + 0x33c,0xffffffff,0);
  return;
}



void fn_0010d23c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar4 = (int *)piVar2[0xd8];
  if ((int *)piVar2[0xd9] != (int *)piVar2[0xd8]) {
    do {
      if (*(int *)*piVar4 != 0) {
        fn_00152048(*(int *)*piVar4,0);
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        fn_0011611c();
        fn_002feef8(iVar3);
      }
      piVar5 = piVar4 + 1;
      *piVar4 = 0;
      piVar4 = piVar5;
    } while ((int *)piVar2[0xd9] != piVar5);
  }
  fn_0017073c(piVar2 + 0xcf);
  fn_00116568(piVar2 + 1);
  fn_001161e4(piVar2 + 0x47);
  if ((char)piVar2[0xe1] == '\0') {
    fn_0012654c(*piVar2);
  }
  if ((int *)*piVar2 != (int *)0x0) {
    (**(code **)(*(int *)*piVar2 + 4))();
  }
  *piVar2 = 0;
  *(undefined1 *)(piVar2 + 0xe1) = 0;
  fn_00116158();
  piVar4 = (int *)fn_001287b4();
  (**(code **)(*piVar4 + 0xc))(piVar4,piVar2[0xe0]);
  (**(code **)(*piVar4 + 0xc))(piVar4,piVar2[0xdf]);
  (**(code **)(*piVar4 + 0xc))(piVar4,piVar2[0xde]);
  (**(code **)(*piVar4 + 0xc))(piVar4,piVar2[0xdd]);
  (**(code **)(*piVar4 + 0xc))(piVar4,piVar2[0xdc]);
  (**(code **)(*piVar4 + 0xc))(piVar4,piVar2[0xdb]);
  iVar3 = fn_001146cc();
  if (iVar3 < 0) {
    fn_00146594();
  }
  iVar3 = fn_00113fa4();
  if (iVar3 < 0) {
    fn_00146594();
  }
  if (DAT_008bfbb4 == 0) {
    return;
  }
  if (DAT_008bfbb8 != 0) {
    fn_00146594();
  }
  iVar3 = 0;
  do {
    if ((&DAT_008ebd1c)[iVar3] != 0) {
      fn_00146594();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  fn_00125268(&DAT_008ebd7c);
  svc_0x23();
  DAT_008bfbb4 = 0;
  DAT_008bfbc4 = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8bfbbc);
  } while (!bVar1);
  DAT_008bfbbc = 0;
  return;
}



void fn_0010d230(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_008ece51 == param_2) {
    return;
  }
  DAT_008ece51 = (byte)param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    DAT_008ece51 = 0;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        fn_00124f80(2);
      }
      goto code_r0x00116d48;
    }
    uVar1 = 1;
  }
  fn_00124f80(uVar1);
code_r0x00116d48:
  iVar2 = fn_00141104();
  iVar3 = fn_00140e98(iVar2,5);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x184);
  *(undefined1 *)(iVar3 + 4) = 0x3a;
  *(undefined4 *)(iVar3 + 0x10) = 8;
  fn_001411b8(iVar2,iVar3);
  uVar5 = 0;
  do {
    iVar2 = (uVar5 & 0xff) * 0xc;
    puVar4 = *(undefined4 **)(&DAT_008ecea8 + iVar2);
    if (puVar4 != (undefined4 *)(&DAT_008ecea8 + iVar2)) {
      do {
        (**(code **)(puVar4[-1] + 0x14))(puVar4 + -1);
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)(&DAT_008ecea8 + iVar2));
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return;
}



void fn_0010d20c(int param_1)

{
  fn_00117e44(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4 * fn_0010d094(undefined4 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = &DAT_00858f00;
  param_1[1] = 0;
  puVar1 = (undefined1 *)fn_00145b00(0x218,&DAT_00812c8c);
  if (puVar1 == (undefined1 *)0x0) {
    iVar5 = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar2 = fn_001142e0();
    if ((uVar2 & 0x3ff) == 0) {
      *puVar1 = 1;
    }
    iVar5 = fn_00113ed4();
    if (iVar5 != 0) {
      fn_00114554(&DAT_008e0000,0x3000);
      puVar1[1] = 1;
    }
    uVar3 = fn_0013cc8c();
    iVar5 = fn_001248e0(puVar1 + 8,uVar3);
    fn_00301f50(iVar5 + 0x40,0x84);
    iVar5 = fn_00114304(iVar5 + 200);
    uVar3 = fn_001142f8();
    *(undefined4 *)(iVar5 + 0xa8) = uVar3;
    *(undefined4 *)(iVar5 + 0xac) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0xb0) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0xb4) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0xb8) = 0;
    *(undefined4 *)(iVar5 + 0xbc) = 0;
    *(undefined4 *)(iVar5 + 0xc0) = 0;
    uVar3 = fn_0011436c();
    iVar4 = fn_001144b8(iVar5 + 200,uVar3);
    iVar5 = iVar4 + -0x198;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    *(undefined4 *)(iVar4 + 0x60) = 0;
    *(undefined4 *)(iVar4 + 100) = 0xf;
    *(undefined4 *)(iVar4 + 0x68) = 5;
    *(undefined4 *)(iVar4 + 0x6c) = 0xf;
    *(undefined4 *)(iVar4 + 0x70) = 5;
    *(undefined1 *)(iVar4 + 0x74) = 1;
    *(undefined1 *)(iVar4 + 0x75) = 0;
    *(undefined4 *)(iVar4 + 0x78) = 0;
    *(undefined1 *)(iVar4 + 0x7c) = 0;
  }
  iVar4 = param_1[1];
  if (iVar4 != iVar5) {
    if (iVar4 != 0) {
      iVar4 = fn_00114540(iVar4 + 0x198);
      iVar4 = fn_0011435c(iVar4 + -200);
      if (*(char *)(iVar4 + -0xcf) != '\0') {
        fn_001145e8();
      }
      if (*(char *)(iVar4 + -0xd0) != '\0') {
        fn_00114648();
      }
      fn_002feef8((char *)(iVar4 + -0xd0));
    }
    param_1[1] = iVar5;
  }
  return param_1;
}



void fn_0010cfec(int param_1,int param_2,int param_3)

{
  if (-1 < param_2) {
    *(int *)(*(int *)(param_1 + 4) + 0x1fc) = param_2;
  }
  if (0 < param_3) {
    *(int *)(*(int *)(param_1 + 4) + 0x200) = param_3;
  }
  return;
}



undefined4 * fn_0010cf10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &DAT_00858dfc;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0xa0,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00116070();
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined1 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    iVar1 = fn_00117ad8(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    iVar1 = fn_00118ca8(iVar1 + 0x20,0x3c);
    iVar1 = fn_00118ca8(iVar1 + 8,0x3c);
    iVar2 = fn_00118ca8(iVar1 + 8,0x3c);
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(iVar2 + 8) = *param_2;
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    *(undefined4 *)(iVar2 + 0x14) = uVar5;
    iVar1 = iVar2 + -0x74;
    *(undefined1 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 1;
    *(undefined1 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  if (param_1[1] != iVar1) {
    if (param_1[1] != 0) {
      fn_00125f80();
      fn_002feef8();
    }
    param_1[1] = iVar1;
  }
  return param_1;
}



void fn_0010c924(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  uint local_34 [7];
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 == 0) {
    *(undefined1 *)(iVar1 + 0x34) = 0;
    iVar4 = fn_00145b00(0x68c,&DAT_00812c8c);
    uVar2 = 0;
    if (iVar4 != 0) {
      uVar2 = fn_001160fc();
    }
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
  }
  else {
    *(int *)(iVar1 + 0x30) = param_3;
    *(undefined1 *)(iVar1 + 0x34) = 1;
  }
  uVar2 = fn_001287b4();
  uVar3 = fn_00118290();
  fn_00115fec(uVar3,uVar2);
  local_34[0] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  uVar6 = fn_0014d6cc(local_34,param_2,1);
  uVar2 = (undefined4)(uVar6 >> 0x20);
  bVar5 = (uVar6 & 0x80000000) != 0;
  if (bVar5) {
    uVar2 = 0x10c9e8;
  }
  if (bVar5 && (int)uVar6 < 0) {
    fn_0015e590((int)uVar6,uVar2);
  }
  iVar4 = fn_001560d8(local_34,local_34 + 5);
  if (iVar4 < 0) {
    fn_0015e590(iVar4,0x10ca18);
  }
  uVar2 = fn_001287dc(local_34[5],4);
  iVar4 = fn_0014d9ec(local_34,local_34 + 5,uVar2,local_34[5]);
  if (iVar4 < 0) {
    fn_0015e590(iVar4,0x10ca4c);
  }
  fn_00116020(iVar1,uVar2,local_34[5]);
  fn_00143b48(uVar2);
  fn_0011609c(*(undefined4 *)(iVar1 + 0x30),iVar1);
  if ((local_34[0] & 0xfffffffe) != 0) {
    if ((local_34[0] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_34[0] & 0xfffffffe);
  }
  return;
}


