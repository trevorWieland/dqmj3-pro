#include "003f8108_003fc8d8.h"



void fn_003fc8d8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_r10;
  bool bVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_0039c400();
  fn_003fc820(param_1);
  iVar2 = *(int *)(param_1 + 0x9c);
  if (*(int *)(*(int *)(iVar2 + 0x8f8) + -4) == 0) {
    if (*(int *)(*(int *)(iVar2 + 0x8fc) + -4) == 0) {
      fn_0039c438(param_1);
    }
    else {
      fn_0039bf58();
    }
  }
  else {
    fn_0039bdb0(param_1);
  }
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  uVar3 = fn_00246ec4(iVar2 + 0x530,4);
  fn_0036e8fc(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  iVar7 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar4 = fn_0036e9e4(uVar3,iVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(iVar6 + iVar7 * 4) = uVar4;
    uStack_30 = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = *(undefined4 *)(param_1 + 0x6c);
    iVar8 = *(int *)(param_1 + 0xb4);
    uVar4 = fn_0036eaa8(uVar3,iVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    iVar6 = iVar7 + 1;
    *(undefined4 *)(iVar8 + iVar7 * 4) = uVar4;
    iVar7 = iVar6;
  } while (iVar6 < 4);
  uVar5 = 0;
  iVar7 = 0;
  cVar1 = *(char *)(*(int *)(param_1 + 0x9c) + 0x903);
  do {
    bVar9 = *(char *)(*(int *)(param_1 + 0x9c) + 0x900) != '\0';
    if (bVar9) {
      unaff_r10 = 1;
    }
    iVar6 = iVar2 + 0x1c + iVar7 * 0xf0;
    if (!bVar9) {
      unaff_r10 = 0;
    }
    iVar8 = iVar6 + 0x514;
    if ((iVar8 == 0) || (iVar6 = fn_001a46f4((int)*(short *)(iVar6 + 0x530)), iVar6 == 0)) {
LAB_003fca64:
      iVar6 = 1;
    }
    else {
      if ((uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2) <= uVar5)
      goto LAB_003fca64;
      uStack_2c = 0;
      uStack_30 = 1;
      uStack_28 = 0;
      fn_002b415c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar5 * 4),iVar8,0,0);
      uStack_30 = 1;
      fn_0036e68c(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar5 * 4),iVar8,unaff_r10,(int)cVar1)
      ;
      iVar6 = fn_0020bbc4(&uStack_30,iVar8);
      if (iVar6 != 0) {
        iVar6 = iVar6 + 4;
      }
      uVar3 = fn_006bfe90(iVar6);
      iVar6 = fn_001cab7c(uVar3);
    }
    uVar5 = iVar6 + uVar5 & 0xff;
    if ((3 < uVar5) || (iVar7 = iVar7 + 1, 3 < iVar7)) {
      if (*(char *)(*(int *)(param_1 + 0x9c) + 0x901) == '\0') {
        return;
      }
      fn_0039bcf8(param_1,*(undefined2 *)(iVar2 + 0x74),DAT_00894e6c);
      return;
    }
  } while( true );
}



void fn_003fc048(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 local_28 [2];
  int local_24;
  int local_20;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  fn_00203c84(*(undefined2 *)(iVar1 + 0x100));
  fn_00203bb4();
  uVar2 = fn_0022f750();
  fn_00190d50(**(undefined4 **)(param_1 + 0xa8),uVar2);
  local_28[0] = 9999;
  puVar4 = (undefined2 *)(iVar1 + 0x100);
  if (9999 < *(ushort *)(iVar1 + 0x100)) {
    puVar4 = local_28;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 4),*puVar4,0);
  local_28[0] = 9999;
  puVar4 = (undefined2 *)(iVar1 + 0x130);
  if (9999 < *(ushort *)(iVar1 + 0x130)) {
    puVar4 = local_28;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 8),*puVar4,0);
  local_28[0] = 9999;
  puVar4 = (undefined2 *)(iVar1 + 0x132);
  if (9999 < *(ushort *)(iVar1 + 0x132)) {
    puVar4 = local_28;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0xc),*puVar4,0);
  local_28[0] = 9999;
  puVar4 = (undefined2 *)(iVar1 + 0x10a);
  if (9999 < *(ushort *)(iVar1 + 0x10a)) {
    puVar4 = local_28;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x10),*puVar4,0);
  local_24 = 999999;
  piVar3 = (int *)(iVar1 + 0x10c);
  if (999999 < *(int *)(iVar1 + 0x10c)) {
    piVar3 = &local_24;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x14),*piVar3,0);
  local_28[0] = 9999;
  puVar4 = (undefined2 *)(iVar1 + 0x116);
  if (9999 < *(ushort *)(iVar1 + 0x116)) {
    puVar4 = local_28;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x18),*puVar4,0);
  local_24 = 999999;
  piVar3 = (int *)(iVar1 + 0x118);
  if (999999 < *(int *)(iVar1 + 0x118)) {
    piVar3 = &local_24;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x1c),*piVar3,0);
  uVar5 = *(uint *)(iVar1 + 0x120);
  iVar6 = (int)((longlong)(int)uVar5 * -0x6e5d4c3b + ((ulonglong)uVar5 << 0x20) >> 0x20);
  local_20 = (iVar6 >> 10) - (iVar6 >> 0x1f);
  iVar6 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  uVar7 = (iVar6 >> 4) - (iVar6 >> 0x1f);
  iVar8 = (int)((longlong)(int)uVar7 * -0x77777777 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar6 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  uVar5 = (uVar5 + ((iVar6 >> 4) - (iVar6 >> 0x1f)) * -0x1e) * 100;
  iVar6 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  local_24 = 9;
  piVar3 = &local_24;
  if (local_20 < 10) {
    piVar3 = &local_20;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x20),*piVar3,0);
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x24),
               uVar7 + ((iVar8 >> 5) - (iVar8 >> 0x1f)) * -0x3c,2);
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x28),(iVar6 >> 4) - (iVar6 >> 0x1f),2);
  local_28[0] = 9999;
  puVar4 = (undefined2 *)(iVar1 + 0x128);
  if (9999 < *(ushort *)(iVar1 + 0x128)) {
    puVar4 = local_28;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x2c),*puVar4,0);
  local_24 = 999999;
  piVar3 = (int *)(iVar1 + 0x124);
  if (999999 < *(int *)(iVar1 + 0x124)) {
    piVar3 = &local_24;
  }
  fn_00688c04(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x30),*piVar3,0);
  return;
}



void fn_003f90e0(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x37] = (param_1[0x37] + 1) % 4 & 0xff;
  fn_0022e468(param_1 + 0x39,(char)param_1[0x37]);
  if (param_1[0x29] != 0) {
    uVar1 = fn_00231cb8((&DAT_007c6d9c)[param_1[0x37]]);
    fn_00243550(param_1[0x29],uVar1);
  }
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_003f860c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0 < (int)param_2) {
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x1c) + 0xb);
    iVar1 = fn_0034514c(uVar3);
    uVar2 = fn_0034514c(param_2 & 0xff);
    if ((int)param_2 < (int)uVar3) {
      uVar2 = iVar1 - uVar2 >> 1;
    }
    if ((int)uVar3 < (int)param_2) {
      uVar2 = uVar2 - iVar1;
    }
    if (uVar3 != param_2) goto LAB_003f8678;
  }
  uVar2 = 0;
LAB_003f8678:
  fn_0018a618(&local_30,0x18,0x17,&LAB_003f86ac,uVar2);
  fn_005d27ac(param_1 + 0xc0,0,1,&local_30);
  return;
}



void fn_003f8160(void)

{
  int iVar1;
  
  iVar1 = fn_003f8258();
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}



void fn_003f8108(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  iVar1 = fn_003f8258(&local_30);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,1);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  param_1[6] = uStack_18;
  param_1[7] = uStack_14;
  param_1[8] = local_10;
  return;
}


