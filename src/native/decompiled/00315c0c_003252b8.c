#include "00315c0c_003252b8.h"



undefined4 * fn_003252b8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00328c34();
  *puVar1 = &DAT_008235d8;
  puVar1[0x33] = &DAT_00859420;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  *(undefined1 *)(puVar1 + 0x3e) = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  *(undefined1 *)(puVar1 + 0x41) = 1;
  puVar1[0x42] = 0xffffffff;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  *(undefined1 *)(puVar1 + 0x4a) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = *(undefined4 *)(param_2 + 8);
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00203268(iVar2,param_2);
  }
  puVar1[0x4d] = uVar3;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  fn_00158f40(puVar1 + 0x45,0x14,0xffffffff);
  return puVar1;
}



undefined4 fn_00322774(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint local_60;
  uint local_5c [3];
  wchar16 *pwStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  uVar12 = *(undefined4 *)(*(int *)(DAT_00897804 + 0x50) + 4);
  iVar1 = fn_00145b00(0xfec,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0030ec30(iVar1,uVar12);
  }
  piVar8 = *(int **)(param_1 + 0xec);
  if (piVar8 != piVar2) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0xec) = piVar2;
  }
  fn_002c330c(&pwStack_50);
  local_44 = 0;
  pwStack_50 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_4c = (char *)&DAT_00322afc;
  uStack_48 = 5;
  uVar12 = fn_0022f750((char *)&DAT_00322b10);
  fn_00147974(&local_34,uVar12);
  local_24 = 0;
  local_23 = 1;
  uVar12 = fn_0022f750((char *)&DAT_00322b24);
  fn_00147974(&local_28,uVar12);
  fn_002c29a0(param_1,&pwStack_50);
  iVar1 = 0;
  do {
    fn_0031b78c(param_1,iVar1,0,&DAT_00322b2c);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (local_28 != &DAT_008f9cf4) {
    piVar2 = local_28 + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar2 = local_2c + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar2 = local_30 + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar2 = local_34 + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  piVar2 = (int *)fn_001f74ec(param_1,0x95);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*piVar2)(piVar2);
    do {
      if (puVar3 == &DAT_00894c6c) goto LAB_003229e8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003229e8:
  *(int **)(param_1 + 0xfc) = piVar2;
  (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  local_60 = 5;
  puVar11 = (uint *)(param_1 + 0x138);
  if ((uint)((int)(*(int *)(param_1 + 0x140) - *puVar11) >> 2) < 5) {
    uVar13 = (int)(*(int *)(param_1 + 0x13c) - *puVar11) >> 2;
    local_5c[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_5c[0] < uVar13 + 0x20) {
      local_5c[0] = uVar13 + 0x20;
    }
    puVar9 = local_5c;
    if (local_5c[0] < 6) {
      puVar9 = &local_60;
    }
    uVar13 = *puVar9;
    puVar4 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar10 = *(undefined4 **)(param_1 + 0x13c);
    puVar5 = puVar4;
    for (puVar3 = (undefined4 *)*puVar11; puVar3 != puVar10; puVar3 = puVar3 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar3;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar11;
    uVar7 = uVar6;
    if (*(uint *)(param_1 + 0x13c) < uVar6) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != *(uint *)(param_1 + 0x13c));
    }
    fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x140) - uVar6) >> 2,0);
    uVar7 = *puVar11;
    *(undefined4 **)(param_1 + 0x138) = puVar4;
    *(int *)(param_1 + 0x13c) = (*(int *)(param_1 + 0x13c) - uVar7 & 0xfffffffc) + (int)puVar4;
    *(undefined4 **)(param_1 + 0x140) = puVar4 + uVar13;
  }
  return 1;
}



void fn_0032038c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_28;
  undefined4 local_20;
  
  fn_0010e44c(DAT_00897804);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008946d4) goto LAB_003203e8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003203e8:
  fn_0025bdbc(*(undefined4 *)(DAT_00897804 + 8),puVar1[5]);
  fn_0011a24c(&local_50);
  local_50 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_003204e4);
  local_20 = 0xfffffffe;
  local_4c = 0;
  local_28 = 0;
  fn_006949f8(DAT_008977e0,&local_50);
  fn_0025b35c(*(undefined4 *)(DAT_00897804 + 8));
  fn_0026987c(DAT_00897818,1);
  bVar4 = 0;
  do {
    fn_00112e48(*(undefined4 *)(DAT_00897804 + 8),bVar4,
                 (int)*(char *)((int)(char)bVar4 + *(int *)(param_1 + 0xe4) + 0x25));
    bVar4 = bVar4 + 1;
  } while (bVar4 < 5);
  fn_006899f4(param_1,0,0);
  fn_00689930(param_1,0,0);
  (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
  uVar3 = fn_00615ee4();
  fn_0010706c(uVar3,&LAB_001b5788,2);
  return;
}



void fn_003199b4(int param_1)

{
  fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(&DAT_007be894 + param_1 * 0x10))
  ;
  return;
}



undefined4 * fn_00319900(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00822da0;
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_002e1f10();
  }
  param_1[1] = uVar2;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_002aaef4();
  }
  param_1[2] = uVar2;
  return param_1;
}



undefined4 fn_00315c0c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_78 [88];
  
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  fn_006e743c(param_2,param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
    uVar2 = 0;
  }
  else {
    fn_0022da78(param_1 + 0x30,(&DAT_007bd668)[(uint)*(byte *)(param_1 + 0x3c) * 8],0);
    uVar6 = 0;
    uVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30);
    uVar7 = 0;
    uVar1 = (int)uVar3 >> 2;
    if (param_3 != 0) {
      uVar3 = 0;
    }
    if (param_3 != 0 && uVar1 != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x30) + uVar3 * 4) == param_3) {
          uVar6 = uVar3 / 10;
          uVar7 = uVar3 % 10;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    iVar5 = 0;
    do {
      fn_00242fb8(*(undefined4 *)(param_1 + 0x1c),iVar5,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
    puVar4 = (uint *)fn_002cab9c(auStack_78);
    puVar4[1] = 10;
    *puVar4 = uVar1;
    iVar5 = fn_002cab28(puVar4,1,0);
    *(undefined1 *)(iVar5 + 8) = 1;
    *(undefined1 *)(iVar5 + 9) = 1;
    *(undefined1 *)(iVar5 + 0xc) = 1;
    *(uint *)(iVar5 + 0x10) = uVar6;
    *(undefined1 *)(iVar5 + 0x14) = 1;
    *(uint *)(iVar5 + 0x18) = uVar7;
    fn_002cabdc(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),iVar5);
    uVar2 = fn_006ba320(param_1);
    fn_00307a0c(*(undefined4 *)(param_1 + 0x1c),uVar2);
    fn_00307c28(*(undefined4 *)(param_1 + 0x1c),uVar6);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),1);
    uVar2 = fn_0016ba34(DAT_00897800,DAT_00898228,
                         *(undefined4 *)(&DAT_007bd66c + (uint)*(byte *)(param_1 + 0x3c) * 8),0);
    fn_00243548(*(undefined4 *)(param_1 + 0x1c),uVar2);
    uVar2 = 1;
  }
  return uVar2;
}


