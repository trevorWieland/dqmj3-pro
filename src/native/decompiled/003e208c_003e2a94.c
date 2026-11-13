#include "003e208c_003e2a94.h"



void fn_003e2a94(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



void fn_003e2a90(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_003e2a68(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_FUN_00832884;
  return;
}



void fn_003e27bc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  uVar4 = fn_0068897c(uVar3,(char *)&DAT_003e29fc);
  uVar5 = (**(code **)(*param_1 + 0x120))(param_1);
  fn_00688c04(uVar4,uVar5,0);
  uVar4 = fn_0068897c(uVar3,(char *)&DAT_003e2a10);
  uVar5 = (**(code **)(*param_1 + 0x124))(param_1);
  fn_00688c04(uVar4,uVar5,0);
  iVar2 = 0;
  do {
    iVar7 = 0;
    iVar1 = iVar2 * 5;
    do {
      if (8 < iVar1 + iVar7) break;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      fn_0017d96c(&local_50,0x20,0x1f,(char *)&DAT_003e2a28,iVar7 + 2,iVar1 + 1);
      uVar4 = fn_0068897c(uVar3,&local_50);
      uVar8 = iVar1 + iVar7 + 1;
      uVar5 = (**(code **)(*param_1 + 300))(param_1,uVar8 & 0xff);
      fn_00688c04(uVar4,uVar5,0);
      fn_0017d96c(&local_50,0x20,0x1f,(char *)&DAT_003e2a28,iVar7 + 2,iVar1 + 3);
      uVar4 = fn_0068897c(uVar3,&local_50);
      uVar5 = (**(code **)(*param_1 + 0x128))(param_1,uVar8 & 0xff);
      uVar6 = (**(code **)(*param_1 + 0x130))(param_1,uVar8 & 0xff);
      VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      fn_00688d5c(uVar4,1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      uVar4 = fn_0068897c(uVar3,(char *)&DAT_003e2a40);
      uVar5 = (**(code **)(*param_1 + 0x138))(param_1);
      fn_00688c04(uVar4,uVar5,0);
      uVar3 = fn_0068897c(uVar3,(char *)&DAT_003e2a54);
      uVar4 = (**(code **)(*param_1 + 0x134))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x13c))(param_1);
      VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      fn_00688d5c(uVar3,1);
      return;
    }
  } while( true );
}



undefined4 fn_003e2778(int *param_1)

{
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895860,DAT_00895864,DAT_00895868);
  (**(code **)(*param_1 + 0x11c))(param_1);
  return 1;
}



void fn_003e2774(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



void fn_003e2734(undefined4 *param_1)

{
  *param_1 = &DAT_00832734;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_003870d0(param_1);
  fn_002feef8();
  return;
}



void fn_003e26b0(int *param_1)

{
  fn_0022cf0c();
  if (*(char *)(param_1[0x27] + 0x8f4) == '\0') {
    return;
  }
  fn_0042f1c0();
                    /* WARNING: Could not recover jumptable at 0x003e26e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x144))(param_1);
  return;
}



void fn_003e2540(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_50 [68];
  
  (**(code **)(*param_1 + 0x11c))(param_1);
  iVar1 = param_1[0x27];
  if (*(char *)(iVar1 + 0x7c) == '\0') {
    puVar2 = &DAT_003e267c;
  }
  else {
    puVar2 = (undefined *)fn_0022f584((char *)&DAT_003e2680,0);
  }
  fn_00101a50(auStack_50,0x40,L"%ls%ls",puVar2,iVar1 + 0x1c);
  fn_00385b60(param_1,auStack_50);
  fn_0031c7d0(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f5));
  fn_0031ca5c(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f6));
  fn_0031c040(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f7));
  fn_00290aa4(param_1[0x28]);
  fn_00290ae4(param_1[0x28],*(undefined1 *)(param_1[0x27] + 0x76));
  return;
}



void fn_003e2510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e26e8(iVar1,param_1);
  return;
}



int fn_003e23f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [68];
  
  puVar5 = *(undefined4 **)(param_1 + 0x98);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_003e2438;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003e2438:
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  iVar2 = fn_00386c44(param_1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar3 + 0x7c) == '\0') {
      puVar4 = &DAT_003e267c;
    }
    else {
      puVar4 = (undefined *)fn_0022f584((char *)&DAT_003e2680,0);
    }
    fn_00101a50(auStack_58,0x40,L"%ls%ls",puVar4,iVar3 + 0x1c);
    fn_00385b60(param_1,auStack_58);
    fn_0031c7d0(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f5));
    fn_0031ca5c(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f6));
    fn_0031c040(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f7));
  }
  fn_00290ae4(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x76));
  return iVar2;
}



/* WARNING: Removing unreachable block (ram,0x003e2220) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x003e2224 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003e208c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_30;
  
  puVar3 = (undefined4 *)fn_0039c504();
  *puVar3 = &PTR_LAB_008325fc;
  iVar4 = fn_00145b00(0x150,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = fn_002440dc();
  }
  puVar3[0x2a] = uVar5;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  uVar5 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  uVar8 = 0x3f800000;
  puVar3[0x2d] = DAT_008f9e2c;
  puVar3[0x2e] = uVar1;
  puVar3[0x2f] = uVar2;
  if (((DAT_008c62f8 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62f8), iVar4 != 0)) {
    DAT_008f9e20 = uVar8;
    DAT_008f9e24 = uVar8;
    DAT_008f9e28 = uVar8;
  }
  uVar2 = DAT_008f9e28;
  uVar1 = DAT_008f9e24;
  puVar3[0x30] = DAT_008f9e20;
  puVar3[0x31] = uVar1;
  puVar3[0x32] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar1 = DAT_008f9e34;
  uVar5 = DAT_008f9e30;
  puVar3[0x33] = DAT_008f9e2c;
  puVar3[0x34] = uVar5;
  puVar3[0x35] = uVar1;
  if (((DAT_008c62f8 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62f8), iVar4 != 0)) {
    DAT_008f9e20 = uVar8;
    DAT_008f9e24 = uVar8;
    DAT_008f9e28 = uVar8;
  }
  uVar1 = DAT_008f9e28;
  uVar5 = DAT_008f9e24;
  puVar3[0x36] = DAT_008f9e20;
  puVar3[0x37] = uVar5;
  puVar3[0x38] = uVar1;
  piVar7 = puVar3 + 0x39;
  *piVar7 = 0;
  puVar3[0x3a] = 0;
  puVar3[0x3b] = 0;
  local_30 = 4;
  puVar6 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar7 = (int)puVar6;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0;
    }
    puVar6 = puVar6 + 1;
  }
  puVar3[0x3a] = *piVar7 + 0x10;
  puVar3[0x3b] = *piVar7 + 0x80;
  puVar3[0x3c] = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(puVar3 + 0x3d) = 0;
  fn_00158f6c((int)puVar3 + 0xf6,0x1e);
  fn_00301f50(puVar3 + 0x45,0x60);
  *(undefined2 *)(puVar3 + 0x5d) = 0;
  *(undefined1 *)((int)puVar3 + 0x176) = 0xff;
  fn_00301f50(puVar3 + 0x5e,0x12);
  return puVar3;
}


