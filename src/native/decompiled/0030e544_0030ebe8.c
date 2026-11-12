#include "0030e544_0030ebe8.h"



void fn_0030ebe8(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 0x2ec;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 1;
  return;
}



undefined4 fn_0030eb4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_110 [256];
  
  fn_00301f50(auStack_110,0x100);
  fn_00101a50(auStack_110,0x100,L"patch:/data/PresentCode/Package/PresentCodePackageR%03d.bin",
               param_3);
  uVar1 = fn_0011c1b4(auStack_110,0,0,0,0,0,0,0,5);
  iVar2 = fn_00145aac();
  if (iVar2 == 1) {
    uVar3 = fn_00145ac0(uVar1);
    fn_00388df8(param_2,uVar3);
  }
  fn_0012d73c(uVar1);
  return 1;
}



void fn_0030ea44(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  uVar1 = 0;
  while (((iVar3 = param_1 + uVar1 * 0x2ec, *(short *)(iVar3 + 8) == 0 ||
          (*(int *)(iVar3 + 0x2d0) == 1)) || (*(int *)(iVar3 + 0x138) != 0))) {
    uVar1 = uVar1 + 1;
    if (4 < uVar1) {
LAB_0030eaa8:
      iVar3 = param_1 + 0xed2;
      fn_00158f6c(iVar3,0x80);
      iVar2 = param_1 + uVar4 * 0x2ec;
      fn_001028d4(iVar3,(char *)&DAT_0030eb2c,*(undefined4 *)(iVar2 + 0x134));
      fn_00388f38(iVar2 + 0x2b8);
      fn_0066ec10(DAT_00897850);
      fn_0066dc40(*(undefined4 *)(param_1 + 0xea4));
      fn_00268758(*(undefined4 *)(param_1 + 0xea4),iVar3,iVar2 + 0x13c,0x17c,3,0);
      *(undefined4 *)(iVar2 + 0x138) = 7;
      return;
    }
  }
  uVar4 = uVar1;
  goto LAB_0030eaa8;
}



/* WARNING: Removing unreachable block (ram,0x00178284) */
/* WARNING: Removing unreachable block (ram,0x0017827c) */
/* WARNING: Removing unreachable block (ram,0x0017826c) */
/* WARNING: Removing unreachable block (ram,0x0017825c) */
/* WARNING: Removing unreachable block (ram,0x00178278) */
/* WARNING: Removing unreachable block (ram,0x00178280) */
/* WARNING: Removing unreachable block (ram,0x00178288) */
/* WARNING: Removing unreachable block (ram,0x0017828c) */

undefined8 fn_0030ea28(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 *puVar13;
  
  uVar3 = 0x30;
  uVar4 = *(undefined4 *)(param_1 + 0xf9c);
  uVar5 = *(undefined4 *)(param_1 + 4000);
  uVar6 = *(undefined4 *)(param_1 + 0xfa4);
  uVar7 = *(undefined4 *)(param_1 + 0xfa8);
  HintPreloadData(param_1 + 0xfec);
  uVar8 = *(undefined4 *)(param_1 + 0xfac);
  uVar9 = *(undefined4 *)(param_1 + 0xfb0);
  uVar10 = *(undefined4 *)(param_1 + 0xfb4);
  uVar11 = *(undefined4 *)(param_1 + 0xfb8);
  puVar13 = (undefined4 *)(param_1 + 0xfbc);
  puVar1 = *(undefined4 **)(DAT_00897820 + 0x54);
  while( true ) {
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    bVar12 = 0x1f < uVar3;
    uVar3 = uVar3 - 0x20;
    puVar1[4] = uVar8;
    puVar1[5] = uVar9;
    puVar1[6] = uVar10;
    puVar1[7] = uVar11;
    puVar2 = puVar1 + 8;
    if (bVar12) {
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      puVar13 = puVar13 + 4;
    }
    HintPreloadData(puVar13 + 0x10);
    if (!bVar12) break;
    uVar8 = *puVar13;
    uVar9 = puVar13[1];
    uVar10 = puVar13[2];
    uVar11 = puVar13[3];
    puVar13 = puVar13 + 4;
    puVar1 = puVar2;
  }
  if ((bool)((byte)(uVar3 >> 4) & 1)) {
    uVar4 = *puVar13;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    puVar13 = puVar13 + 4;
    *puVar2 = uVar4;
    puVar1[9] = uVar5;
    puVar1[10] = uVar6;
    puVar1[0xb] = uVar7;
    puVar2 = puVar1 + 0xc;
  }
  return CONCAT44(puVar13,puVar2);
}



void fn_0030e9f0(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  fn_0028b908(*(undefined4 *)(DAT_00897804 + 0x30),&local_10);
  return;
}



undefined4 fn_0030e954(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_001010c8(*(int *)(param_1 + 4) + iVar2 * 0x28 + 0x28,param_2,0x28);
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  return 0;
}



undefined4 fn_0030e8d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 + param_2 * 0x2ec;
  do {
    iVar1 = fn_001010c8(*(int *)(param_1 + 4) + iVar2 * 0x28 + 0x28,iVar3 + 8,0x28);
    if (iVar1 == 0) {
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar2 * 0x28 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x138) = 0xffffffff;
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  return 0;
}



uint fn_0030e880(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



undefined4 fn_0030e828(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 4) + iVar1 * 0x28 + 0x28) == 0) {
      fn_00301a9c(iVar1 * 0x28 + 0x28 + *(int *)(param_1 + 4),param_2,0x28);
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return 0;
}



void fn_0030e740(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  uVar1 = 0;
  while (((iVar2 = param_1 + uVar1 * 0x2ec, *(short *)(iVar2 + 8) == 0 ||
          (*(int *)(iVar2 + 0x2d0) == 1)) || (*(int *)(iVar2 + 0x138) != 8))) {
    uVar1 = uVar1 + 1;
    if (4 < uVar1) {
LAB_0030e7a4:
      fn_0017821c(param_1 + 0xea8,param_1 + uVar3 * 0x2ec + 8,0x2a);
      fn_0066ec10(DAT_00897850);
      fn_0066dc40(*(undefined4 *)(param_1 + 0xea4));
      fn_00268758(*(undefined4 *)(param_1 + 0xea4),(char *)&DAT_0030e80c,param_1 + 0xea8,0x2a
                   ,1,0);
      return;
    }
  }
  uVar3 = uVar1;
  goto LAB_0030e7a4;
}



undefined4 fn_0030e6e4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 0x2ec;
    if (*(short *)(iVar3 + 8) != 0) {
      iVar1 = *(int *)(iVar3 + 0x2d0);
      bVar4 = iVar1 == 1;
      if (bVar4) {
        iVar1 = *(int *)(iVar3 + 0x138);
      }
      if (bVar4 && iVar1 == 0) {
        return 1;
      }
    }
    uVar2 = uVar2 + 1;
    if (4 < uVar2) {
      return 0;
    }
  } while( true );
}



void fn_0030e6d0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x2ec + 0x138) = param_3;
  return;
}



void fn_0030e640(int param_1)

{
  fn_00301f50(param_1 + 0xf98,0x54);
  fn_0066ec10(DAT_00897850);
  fn_0066dc40(*(undefined4 *)(param_1 + 0xea4));
  fn_00268758(*(undefined4 *)(param_1 + 0xea4),(char *)&DAT_0030e6a0,param_1 + 0xf98,0x54,3,0
              );
  return;
}



void fn_0030e544(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  uVar1 = 0;
  while (((iVar2 = param_1 + uVar1 * 0x2ec, *(short *)(iVar2 + 8) == 0 ||
          (*(int *)(iVar2 + 0x2d0) == 1)) || (*(int *)(iVar2 + 0x138) != 6))) {
    uVar1 = uVar1 + 1;
    if (4 < uVar1) {
LAB_0030e5a8:
      iVar2 = param_1 + uVar3 * 0x2ec;
      fn_0017821c(param_1 + 0xea8,iVar2 + 8,0x2a);
      *(undefined4 *)(iVar2 + 0x134) = 0;
      *(undefined4 *)(iVar2 + 0x138) = 0;
      fn_0066ec10(DAT_00897850);
      fn_0066dc40(*(undefined4 *)(param_1 + 0xea4));
      fn_00268720(*(undefined4 *)(param_1 + 0xea4),(char *)&DAT_0030e62c,param_1 + 0xea8,0x2a,2,
                   iVar2 + 0x134,8,0);
      return;
    }
  }
  uVar3 = uVar1;
  goto LAB_0030e5a8;
}


