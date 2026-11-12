#include "00659648_00663994.h"



void fn_00663994(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (DAT_008ccfbc == 0) {
    DAT_008ccfb8 = fn_006644c0();
    DAT_008ccfc0 = &LAB_006644e8;
  }
  iVar1 = DAT_008ccfb8;
  DAT_008ccfbc = DAT_008ccfbc + 1;
  puVar3 = (undefined4 *)(DAT_008ccfb8 + 0xc);
  if (*(int *)(DAT_008ccfb8 + 0x10) == 0) {
    uVar2 = fn_00662a4c();
    *puVar3 = uVar2;
    *(undefined1 **)(iVar1 + 0x14) = &LAB_00662b0c;
  }
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}



void fn_00662c5c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  fn_00797a98(param_1 + 3,DAT_00896aa8);
  fn_00797a98(param_1 + 0xd,DAT_00896aac);
  uVar2 = fn_00118290();
  uVar2 = fn_0011c184(L"rom:/data/Passing/Icon/nic_48x48.ctpk",uVar2,4,5);
  *param_1 = uVar2;
  uVar2 = fn_00118290();
  uVar2 = fn_0011c184(&DAT_007c8ad8,uVar2,4,5);
  param_1[1] = uVar2;
  if (DAT_008ccfbc == 0) {
    DAT_008ccfb8 = fn_006644c0();
    DAT_008ccfc0 = &LAB_006644e8;
  }
  iVar1 = DAT_008ccfb8;
  DAT_008ccfbc = DAT_008ccfbc + 1;
  puVar3 = (undefined4 *)(DAT_008ccfb8 + 0x18);
  if (*(int *)(DAT_008ccfb8 + 0x1c) == 0) {
    uVar2 = fn_0066430c();
    *puVar3 = uVar2;
    *(undefined1 **)(iVar1 + 0x20) = &LAB_00664394;
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



void fn_00662a34(undefined4 param_1)

{
  fn_00101a1c(param_1,&UNK_00664800,0xa88,2);
  return;
}



int fn_0065e400(int param_1,short param_2)

{
  if ((param_1 < 0) || (*DAT_008bf62c <= param_1)) {
    param_1 = 0;
  }
  return (int)DAT_008bf62c +
         (short)(DAT_008bf62c[param_1 * 2 + 4] + param_2) * 4 + *(int *)(DAT_008bf62c + 2);
}



void fn_0065bb2c(int param_1,undefined4 param_2,short *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStackY_a0 [128];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = fn_00100b58(param_3 + 4);
  if (iVar1 != 0) {
    fn_001003e0(param_1,param_3 + 4);
    fn_00158f6c(param_3 + 4,0x200);
    return;
  }
  uVar2 = fn_0022f584((char *)&DAT_0065bce0,0);
  switch(param_4) {
  case 3:
    fn_0015b0f8((int)*param_3);
    uVar3 = fn_0022f584((char *)&DAT_0065bcfc,0);
    fn_00101a50(param_1,param_2,L"%ls\n%ls",uVar3,uVar2);
    break;
  case 5:
    fn_0015b0f8((int)param_3[1]);
    uVar3 = fn_0022f584((char *)&DAT_0065bd28,0);
    fn_00101a50(param_1,param_2,L"%ls\n%ls",uVar3,uVar2);
    return;
  case 7:
    fn_0015b0f8((int)param_3[2]);
    uVar3 = fn_0022f584((char *)&DAT_0065bd44,0);
    fn_00101a50(param_1,param_2,L"%ls\n%ls",uVar3,uVar2);
    return;
  case 9:
    fn_0015b0f8((int)param_3[3]);
    uVar3 = fn_0022f584((char *)&DAT_0065bd60,0);
    fn_00101a50(param_1,param_2,L"%ls\n%ls",uVar3,uVar2);
    return;
  case 0xb:
    fn_0010288c(param_1,param_2,param_3 + param_5 * 0x100 + 0x104,auStackY_a0 + 0x84);
    fn_00158f6c(param_3 + param_5 * 0x100 + 0x104,0x200);
    return;
  case 0xd:
    fn_0010288c(param_1,param_2,param_3 + 0x604,auStackY_a0 + 0x84);
    fn_00158f6c(param_3 + 0x604,0x200);
    return;
  }
  return;
}



void fn_0065a6f8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_0065a778);
    fn_00168a24(param_1,uVar1,auStack_18);
    return;
  }
  if (param_3 == 1) {
    puVar3 = auStack_10;
    puVar2 = (undefined *)
             fn_0022f750((&PTR_s_partyrankstar1_00899194)
                          [*(int *)(*(int *)(param_2 + 0x104) + 0x5c)],
                          &PTR_s_partyrankstar1_00899194,1);
  }
  else {
    puVar3 = auStack_14;
    puVar2 = &DAT_0065a774;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



void fn_00659b80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  
  fn_002c3e78();
  fn_00301f50(auStack_210,0x100);
  uVar1 = fn_0022f750((char *)&DAT_00659c54);
  uVar2 = fn_0022f750(&DAT_00659c68);
  fn_00301f50(auStack_110,0x100);
  fn_0018a618(auStack_110,0x80,0x7f,L"%ls%%d%ls",uVar1,uVar2);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2 != 0) {
    do {
      fn_0018a618(auStack_210,0x20,0x1f,auStack_110,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x56c) + uVar3 * 8) + 0x18),uVar2);
      fn_0031b78c(param_1,uVar3,0,auStack_210);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2));
  }
  return;
}



undefined4 fn_00659648(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 *local_38 [3];
  undefined1 auStack_2c [16];
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0065969c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0065969c:
  uVar5 = puVar4[7];
  uVar6 = puVar4[8];
  uVar7 = puVar4[9];
  uVar8 = puVar4[10];
  uVar9 = puVar4[0xb];
  uVar10 = puVar4[0xc];
  uVar11 = puVar4[0xd];
  *(undefined4 *)(param_1 + 0xb4) = puVar4[6];
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  *(undefined4 *)(param_1 + 200) = uVar9;
  *(undefined4 *)(param_1 + 0xcc) = uVar10;
  *(undefined4 *)(param_1 + 0xd0) = uVar11;
  uVar5 = puVar4[0xf];
  uVar6 = puVar4[0x10];
  uVar7 = puVar4[0x11];
  uVar8 = puVar4[0x12];
  uVar9 = puVar4[0x13];
  uVar10 = puVar4[0x14];
  uVar11 = puVar4[0x15];
  *(undefined4 *)(param_1 + 0xd4) = puVar4[0xe];
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  *(undefined4 *)(param_1 + 0xe4) = uVar8;
  *(undefined4 *)(param_1 + 0xe8) = uVar9;
  *(undefined4 *)(param_1 + 0xec) = uVar10;
  *(undefined4 *)(param_1 + 0xf0) = uVar11;
  uVar5 = puVar4[0x17];
  *(undefined4 *)(param_1 + 0xf4) = puVar4[0x16];
  *(undefined4 *)(param_1 + 0xf8) = uVar5;
  uVar5 = puVar4[0x19];
  *(undefined4 *)(param_1 + 0xfc) = puVar4[0x18];
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  fn_0017821c(param_1 + 0x104,puVar4 + 0x1a,0x3c0);
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(puVar4 + 0x10a);
  *(undefined4 *)(param_1 + 0x4c8) = puVar4[0x10b];
  *(undefined4 *)(param_1 + 0x4cc) = puVar4[0x10c];
  uVar5 = puVar4[0x10e];
  uVar6 = puVar4[0x10f];
  uVar7 = puVar4[0x110];
  uVar8 = puVar4[0x111];
  uVar9 = puVar4[0x112];
  *(undefined4 *)(param_1 + 0x4d0) = puVar4[0x10d];
  *(undefined4 *)(param_1 + 0x4d4) = uVar5;
  *(undefined4 *)(param_1 + 0x4d8) = uVar6;
  *(undefined4 *)(param_1 + 0x4dc) = uVar7;
  *(undefined4 *)(param_1 + 0x4e0) = uVar8;
  *(undefined4 *)(param_1 + 0x4e4) = uVar9;
  fn_0017821c(param_1 + 0x4e8,puVar4 + 0x113,0x1e);
  *(undefined1 *)(param_1 + 0x506) = *(undefined1 *)((int)puVar4 + 0x46a);
  fn_0017821c(param_1 + 0x508,puVar4 + 0x11b,0x60);
  fn_006f5508(param_1,param_1 + 0x56c);
  fn_0065a290(param_1,0);
  fn_00689efc(param_1,0x46,0);
  fn_002c330c(&local_54);
  local_54 = DAT_00898d94;
  local_50 = DAT_00898d98;
  uVar5 = fn_0022f750(DAT_00898d9c);
  iVar2 = fn_00100b58();
  if (iVar2 == 0) {
    piVar3 = local_38[0] + -3;
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      local_38[0][-1] = 0;
      *(undefined2 *)local_38[0] = 0;
    }
    else {
      if ((local_38[0] != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(local_38[0] + -3,local_38[0][-2] + 8,0);
      }
      local_38[0] = &DAT_008f9cf4;
    }
  }
  else {
    fn_00177c88(local_38,0,local_38[0][-1],uVar5,iVar2,0,iVar2);
  }
  local_4c = *(int *)(param_1 + 0x570) - *(int *)(param_1 + 0x56c) >> 3;
  fn_002c29a0(param_1,&local_54);
  iVar2 = fn_001588d4(auStack_2c);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}



void fn_0065a290(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(int *)(param_1 + 0x56c) + param_2 * 8);
  iVar3 = piVar4[1];
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x46);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951b8) goto LAB_0065a2f4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0065a2f4:
  fn_0058c9a8(puVar1,iVar3);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x46);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951b8) goto LAB_0065a33c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0065a33c:
  fn_00445904(puVar1);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)fn_001f74d8(param_1,0x46);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008951b8) goto LAB_0065a394;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_0065a394:
    fn_00445884(puVar1,*piVar4 + iVar3 * 0xf0 + 0xb0);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return;
    }
  } while( true );
}


