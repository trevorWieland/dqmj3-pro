#include "0060a354_0060e8cc.h"



void fn_0060e8cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898ce0) goto LAB_0060e90c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0060e90c:
  fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028acf4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar4 = 0;
  do {
    uVar2 = fn_006e6e4c(puVar3 + 5,iVar4);
    fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
    uVar2 = fn_006e6eb0(puVar3 + 5,iVar4);
    fn_0028a588(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  fn_0028ad18(*(undefined4 *)(DAT_00897804 + 0xc),puVar3[0x16]);
  fn_0028b674(*(undefined4 *)(DAT_00897804 + 0xc),puVar3[0x18]);
  return;
}



undefined4 fn_0060bcc4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint local_1a4;
  undefined4 local_1a0;
  wchar16 *pwStack_19c;
  char *pcStack_198;
  int iStack_194;
  undefined4 local_190;
  int local_188;
  undefined1 auStack_180 [12];
  undefined1 auStack_174 [4];
  undefined1 local_170;
  undefined1 local_16f;
  undefined4 local_168;
  undefined1 auStack_160 [4];
  undefined1 auStack_15c [8];
  undefined4 *local_154 [5];
  undefined4 *local_140;
  uint local_13c;
  undefined1 auStack_138 [236];
  undefined4 *local_4c;
  undefined1 auStack_48 [32];
  int local_28;
  
  puVar10 = *(undefined4 **)(param_1 + 0x18);
  local_28 = param_1;
  if (puVar10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar1 == &DAT_00897158) goto LAB_0060bd0c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_0060bd0c:
  iVar13 = puVar10[4];
  fn_0041044c();
  uVar2 = fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
  puVar10 = &DAT_008f9cf4;
  iVar14 = 0;
  iVar11 = 0;
  do {
    iVar3 = fn_004103b0(iVar11);
    if (iVar3 == iVar13) {
      uVar4 = fn_002f8914();
      uVar5 = fn_002f6fa8();
      uVar4 = fn_006cd684(uVar5,uVar4,iVar11);
      local_140 = &DAT_008f9cf4;
      fn_00147974(&local_140,&DAT_008c6666);
      fn_00301f50(&local_13c,0xf0);
      fn_001028d4(auStack_48,(char *)&DAT_0060c0ac,iVar11);
      uVar5 = fn_0025f9d8(DAT_00897800,uVar2,auStack_48);
      fn_00147974(&local_140,uVar5);
      fn_005d4638(0,&local_140,uVar4);
      fn_005d4710(local_28,&local_140);
      iVar14 = iVar14 + 1;
      fn_001588d4(&local_140);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x2f);
  fn_0025fa58(DAT_00897800,uVar2);
  fn_004104b4();
  fn_00397774(&pwStack_19c);
  pwStack_19c = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_198 = (char *)&DAT_0060c0bc;
  iStack_194 = iVar14;
  local_188 = iVar14;
  local_190 = fn_002f70cc(local_28);
  uVar2 = fn_0022f750((char *)&DAT_0060c0d0);
  fn_00147974(auStack_180,uVar2);
  local_170 = 0;
  local_168 = 2;
  local_16f = 0;
  uVar2 = fn_0022f750((char *)&DAT_0060c0d8);
  fn_00147974(auStack_15c,uVar2);
  local_140 = (undefined4 *)fn_00121838(DAT_00897800,L"rom:/data/Message/AreaMessage.mes",1);
  fn_001028d4(auStack_138,(char *)&DAT_0060c0ec,iVar13);
  local_1a0 = fn_0025f9d8(DAT_00897800,local_140,auStack_138);
  uVar6 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar6 != 0) {
    puVar7 = &local_13c;
    if (0x20 < uVar6) {
      puVar7 = &local_1a4;
    }
    local_1a4 = uVar6;
    local_13c = 0x20;
    uVar12 = *puVar7;
    if (0xfffffff1 < uVar12) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar12,0xfffffff1);
    }
    if (uVar12 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,uVar12);
    }
    if (uVar12 != 0) {
      puVar1 = (undefined4 *)fn_00100fc6((uVar12 + 8) * 2,0);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      puVar9 = (undefined2 *)((int)puVar1 + uVar6 * 2 + 0xc);
      *puVar1 = 0;
      puVar1[1] = uVar12;
      puVar1[2] = uVar6;
      if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
      }
    }
    puVar10 = puVar1 + 3;
  }
  local_4c = puVar10;
  fn_00301a9c(puVar10,local_1a0,uVar6 << 1);
  fn_0025fa58(DAT_00897800,local_140);
  piVar8 = local_4c + -3;
  if (*piVar8 == -1) {
    if (local_154 != &local_4c) {
      local_1a0 = local_4c[-1];
      local_1a4 = 0;
      fn_00177c88(local_154,0,local_154[0][-1],local_4c,local_1a0);
    }
  }
  else {
    if (piVar8 != &DAT_008f9ce8) {
      *piVar8 = *piVar8 + 1;
    }
    if (local_154[0] != &DAT_008f9cf4) {
      piVar8 = local_154[0] + -3;
      iVar11 = *piVar8;
      if ((iVar11 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar11 + -1, iVar11 == 0)))) {
        fn_001008c4(local_154[0] + -3,local_154[0][-2] + 8,0);
      }
    }
    local_154[0] = local_4c;
  }
  fn_001588d4(&local_4c);
  uVar2 = fn_005d45b8(local_28,0,&pwStack_19c);
  fn_00100414(auStack_160,&LAB_0059e0e0,8,4);
  iVar11 = fn_001588d4(auStack_174);
  iVar11 = fn_001588d4(iVar11 + -4);
  iVar11 = fn_001588d4(iVar11 + -4);
  fn_001588d4(iVar11 + -4);
  return uVar2;
}



undefined4 fn_0060a354(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [36];
  short asStack_48 [20];
  undefined1 auStack_20 [8];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_0060a3a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060a3a4:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008944d8) goto LAB_0060a3e0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0060a3e0:
  *(undefined4 *)(param_1 + 0xe8) = puVar1[2];
  uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0020bbc4(auStack_20,uVar3);
  uVar4 = fn_0028b860(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xe8));
  psVar5 = (short *)fn_00230a84(uVar4,0);
  fn_00231128(auStack_6c,0x11,uVar3,0);
  uVar9 = 0;
  psVar6 = asStack_48;
  do {
    uVar9 = uVar9 + 1;
    psVar7 = psVar6 + 1;
    *psVar6 = *psVar5;
    bVar10 = psVar5[1] == 0;
    psVar6 = psVar7;
    psVar5 = psVar5 + 1;
  } while ((bVar10 || uVar9 < 0x12) && (!bVar10 && uVar9 != 0x11));
  *psVar7 = 0;
  uVar3 = fn_00100b58(auStack_6c);
  fn_00231d04(asStack_48,0x12,auStack_6c,uVar3);
  uVar3 = fn_0022f750((char *)&DAT_0060a574);
  fn_00397774(&local_c8);
  local_c8 = DAT_0089463c;
  local_c4 = DAT_00894640;
  uVar4 = fn_0022f750((char *)&DAT_0060a584);
  fn_00147974(auStack_ac,uVar4);
  local_bc = 1;
  local_c0 = 2;
  local_b4 = 2;
  local_94 = 2;
  local_9c = 0;
  local_90 = 1;
  fn_00147974(auStack_88,asStack_48);
  fn_00147974(auStack_80,uVar3);
  fn_00397618(param_1,&local_c8);
  fn_00100414(auStack_8c,&LAB_0059e0e0,8,4);
  iVar8 = fn_001588d4(auStack_a0);
  iVar8 = fn_001588d4(iVar8 + -4);
  iVar8 = fn_001588d4(iVar8 + -4);
  fn_001588d4(iVar8 + -4);
  return 1;
}


