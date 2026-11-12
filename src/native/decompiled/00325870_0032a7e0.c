#include "00325870_0032a7e0.h"



void fn_0032a7e0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  byte extraout_r1;
  undefined4 uVar5;
  ushort local_aa0 [2];
  byte local_a9c;
  undefined1 auStack_a98 [2696];
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x30);
  uVar1 = fn_006b86f4(uVar5);
  fn_00166824(local_aa0,uVar1);
  if (local_a9c < 100) {
    iVar2 = fn_00292f20(local_a9c,100);
    if (*(char *)(iVar2 + 0xad3) == '\0') goto LAB_0032a8c4;
    iVar2 = fn_00292f20();
    *(undefined1 *)(iVar2 + 0xad3) = 0;
    uVar3 = fn_0032ac8c(param_1);
    local_a9c = local_a9c + 1;
  }
  else {
    fn_00300f74();
    local_a9c = extraout_r1;
    iVar2 = fn_00163868(2);
    uVar3 = (uint)(byte)(&DAT_007c7f5e)[iVar2];
  }
  if (uVar3 != 0) {
    fn_00291f88(uVar3,auStack_a98);
    uVar1 = fn_00292f20();
    fn_0030cf58(uVar1,auStack_a98,&DAT_0032a8e0);
    local_aa0[0] = local_aa0[0] + 1;
    puVar4 = &DAT_007c7f5c;
    if (local_aa0[0] < 10000) {
      puVar4 = local_aa0;
    }
    local_aa0[0] = *puVar4;
  }
LAB_0032a8c4:
  fn_00166818(uVar5,local_aa0);
  return;
}



undefined4 * fn_00328c34(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_0036e214();
  puVar1[0x32] = 0;
  *puVar1 = &PTR_LAB_00823db4;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00328a30(iVar2,puVar1[0x17]);
  }
  iVar2 = puVar1[0x32];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_002feef8(iVar2);
    }
    puVar1[0x32] = iVar3;
  }
  return puVar1;
}



undefined4 * fn_00328ad4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_00823ca4;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_00328a30(iVar2,puVar1[0x17]);
  }
  iVar2 = puVar1[0x19];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_002feef8(iVar2);
    }
    puVar1[0x19] = iVar3;
  }
  return puVar1;
}



undefined4 fn_0032639c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined4 *unaff_r10;
  wchar16 *pwStack_d8;
  char *pcStack_d4;
  int iStack_d0;
  undefined4 local_cc;
  int local_c4;
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [4];
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined4 local_a4;
  undefined1 auStack_9c [32];
  short local_7c;
  undefined2 local_7a;
  short local_74 [14];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [32];
  
  fn_0039dfe0();
  fn_0020bbc4(auStack_50,*(undefined4 *)(param_1 + 0xec));
  iVar1 = fn_006c02d4(auStack_4c,auStack_40,7);
  fn_00397774(&pwStack_d8);
  iStack_d0 = iVar1 + 1;
  pwStack_d8 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_d4 = (char *)&DAT_003265e0;
  local_cc = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x18);
  local_c4 = iVar1;
  uVar2 = fn_0039e124(param_1);
  fn_00147974(auStack_bc,uVar2);
  local_ac = 0;
  local_ab = 1;
  uVar2 = fn_0022f750((char *)&DAT_003265f4);
  fn_00147974(auStack_b0,uVar2);
  local_a4 = 2;
  local_aa = 1;
  uVar2 = fn_0022f750((char *)&DAT_003265fc);
  fn_00147974(auStack_b8,uVar2);
  fn_00397618(param_1,&pwStack_d8);
  fn_00100414(auStack_9c,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_b0);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  fn_0039e2d0(param_1);
  fn_0039e1c4(param_1);
  fn_0039e090(param_1);
  fn_0039e134(param_1);
  fn_0020bbc4(auStack_48,*(undefined4 *)(param_1 + 0xec));
  iVar1 = fn_006c02d4(auStack_44,local_74,7);
  if (0 < iVar1) {
    unaff_r10 = &DAT_00897800;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      psVar6 = local_74 + iVar5 * 2;
      uVar2 = fn_00231d50((int)*psVar6);
      fn_0031b78c(param_1,iVar5,1,uVar2);
      iVar3 = fn_0068f654((int)*psVar6);
      iVar4 = fn_0068f708((int)*psVar6,local_74[iVar5 * 2 + 1]);
      if (iVar3 == iVar4) {
        uVar2 = fn_00192cb4(*unaff_r10,0x25,0);
        fn_0031b78c(param_1,iVar5,7,uVar2);
      }
      fn_002c3df8(param_1,iVar5,4,local_74[iVar5 * 2 + 1]);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  fn_0020bbc4(auStack_58,*(undefined4 *)(param_1 + 0xec));
  fn_006c02d4(auStack_54,&local_7c,7);
  fn_00689efc(param_1,0x33,0);
  fn_0036c924(*(undefined4 *)(param_1 + 0xe8),(int)local_7c,local_7a);
  return 1;
}



void fn_00325870(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_30;
  undefined4 *local_2c [2];
  
  uVar7 = 0;
  do {
    iVar2 = fn_006ba284(param_1);
    uVar8 = uVar7 + iVar2 * 8;
    if ((int)uVar8 < *(int *)(param_1 + 0xbc)) {
      uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
      if (uVar1 <= uVar8) {
        local_30 = uVar1;
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar8);
      }
      iVar9 = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar8 * 2);
      fn_0023097c(local_2c,iVar9,0);
      fn_0031b78c(param_1,uVar7,0,local_2c[0]);
      uVar3 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),iVar9);
      fn_002c3df8(param_1,uVar7,4,uVar3);
      iVar2 = fn_003e53e0(param_1,iVar9);
      iVar4 = fn_00660fe0(iVar9);
      iVar5 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),iVar9);
      if ((iVar4 == iVar2) ||
         (iVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8)), iVar2 < iVar5)) {
        local_30 = 0xff808080;
        fn_002c37e0(param_1,uVar7,&local_30);
      }
      else {
        local_30 = 0xffffffff;
        fn_002c37e0(param_1,uVar7,&local_30);
      }
      iVar2 = fn_006b7a80(*(undefined4 *)(DAT_00897804 + 0x24),iVar9);
      if (iVar2 == 0) {
        fn_002c32c4(param_1,uVar7,1);
      }
      else {
        fn_002c32c4(param_1,uVar7,0);
      }
      if (local_2c[0] != &DAT_008f9cf4) {
        piVar6 = local_2c[0] + -3;
        iVar2 = *piVar6;
        if (iVar2 == -1) {
LAB_00325a6c:
          fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
        }
        else if (piVar6 != &DAT_008f9ce8) {
          *piVar6 = iVar2 + -1;
          if (iVar2 == 0) goto LAB_00325a6c;
        }
      }
    }
    else if (7 < *(int *)(param_1 + 0xbc)) {
      uVar8 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar8 <= uVar7) {
        local_30 = uVar8;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar7);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar7 * 4),0xffffffff);
    }
    uVar7 = uVar7 + 1;
    if (7 < (int)uVar7) {
      if (*(int *)(param_1 + 0xec) != 0) {
        fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)*(int *)(param_1 + 0xec));
                    /* WARNING: Subroutine does not return */
        fn_006ba250(param_1);
      }
      return;
    }
  } while( true );
}


