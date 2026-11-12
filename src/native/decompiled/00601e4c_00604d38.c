#include "00601e4c_00604d38.h"



void fn_00604d38(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2d);
  *puVar1 = &DAT_0084f3a8;
  return;
}



void fn_00604740(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_0017821c(param_1 + 0xc,param_2,0x104);
  *(undefined4 *)(param_1 + 0x128) = param_3;
  return;
}



void fn_00603590(int *param_1,undefined4 param_2,float *param_3,float *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_e30 [8];
  float local_e28 [900];
  
  fn_00101a1c(auStack_e30,&DAT_005f4c78,0x48,0x32);
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,auStack_e30,0x32,param_4,param_5,1);
  if (0 < iVar1) {
    iVar2 = 1;
    fVar4 = local_e28[0] - *param_4;
    fVar5 = local_e28[1] - param_4[1];
    fVar3 = local_e28[2] - param_4[2];
    fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
    if (1 < iVar1) {
      do {
        fVar4 = local_e28[iVar2 * 0x12] - *param_4;
        fVar6 = local_e28[iVar2 * 0x12 + 1] - param_4[1];
        fVar5 = local_e28[iVar2 * 0x12 + 2] - param_4[2];
        fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
        if (fVar4 < fVar3) {
          local_e28[0] = local_e28[iVar2 * 0x12];
          local_e28[1] = local_e28[iVar2 * 0x12 + 1];
          local_e28[2] = local_e28[iVar2 * 0x12 + 2];
          fVar3 = fVar4;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    if (param_3 != (float *)0x0) {
      *param_3 = local_e28[0];
      param_3[1] = local_e28[1];
      param_3[2] = local_e28[2];
    }
  }
  return;
}



void fn_00602d84(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_00602df8);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 1) {
    puVar3 = auStack_14;
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_00602e0c,param_2,1);
  }
  else {
    puVar2 = &DAT_00602df4;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



undefined4 fn_00602424(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 *local_1c4;
  undefined1 auStack_1c0 [240];
  wchar16 *pwStack_d0;
  char *pcStack_cc;
  int iStack_c8;
  undefined4 local_c4;
  int local_bc;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [4];
  undefined1 local_a4;
  undefined1 local_a3;
  undefined4 local_9c;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [44];
  uint local_64;
  undefined4 *local_60 [3];
  uint local_54;
  undefined4 *local_50;
  int local_4c;
  int *local_40;
  undefined4 *local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  uint local_2c;
  undefined4 local_28;
  
  local_28 = param_1;
  uVar1 = fn_002f8914();
  uVar2 = fn_002f6fa8();
  local_40 = (int *)fn_006cd734(uVar2,uVar1);
  iVar3 = *local_40;
  puVar10 = (undefined4 *)0x66666667;
  if (iVar3 < 0x65) {
    local_4c = 1;
  }
  else {
    local_4c = iVar3 + -99;
  }
  if (iVar3 < 100) {
    iVar15 = iVar3 / 10;
  }
  else {
    iVar15 = 10;
  }
  if (0 < iVar3 % 10) {
    iVar15 = iVar15 + 1;
  }
  uVar1 = fn_0022f750((char *)&DAT_006027d8);
  fn_00168a24(auStack_38,uVar1,auStack_34);
  iVar14 = 0;
  iVar3 = *local_40;
  iVar13 = 0;
  if (0 < iVar15) {
    puVar10 = &DAT_008f9cf4;
  }
  iVar12 = ((iVar3 + -1) / 10) * 10 + 1;
  if (0 < iVar15) {
    do {
      local_1c4 = puVar10;
      iVar4 = fn_00100b58(&DAT_008c6666);
      if (iVar4 == 0) {
        piVar8 = local_1c4 + -3;
        iVar4 = *piVar8;
        if (iVar4 == 0) {
          local_1c4[-1] = 0;
          *(undefined2 *)local_1c4 = 0;
        }
        else {
          if ((local_1c4 != puVar10) &&
             ((iVar4 == -1 || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar4 + -1, iVar4 == 0)))))) {
            fn_001008c4(local_1c4 + -3,local_1c4[-2] + 8,0);
          }
          local_1c4 = puVar10;
        }
      }
      else {
        fn_00177c88(&local_1c4,0,local_1c4[-1],&DAT_008c6666,iVar4,0,iVar4);
      }
      fn_00301f50(auStack_1c0,0xf0);
      fn_0015b0f8(iVar12);
      local_54 = fn_0022f750((char *)&DAT_006027e8);
      uVar5 = fn_00100b58();
      puVar7 = puVar10;
      if (uVar5 != 0) {
        puVar6 = &local_64;
        if (0x20 < uVar5) {
          puVar6 = &local_2c;
        }
        local_2c = uVar5;
        local_64 = 0x20;
        uVar11 = *puVar6;
        uVar16 = uVar5;
        if (0xfffffff1 < uVar11) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar11,0xfffffff1);
        }
        if (uVar11 < uVar16) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar16,uVar11);
        }
        if (uVar11 == 0) {
          puVar7 = &DAT_008f9ce8;
        }
        else {
          puVar7 = (undefined4 *)fn_00100fc6((uVar11 + 8) * 2,0);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
          }
          puVar7[2] = uVar16;
          *puVar7 = 0;
          puVar7[1] = uVar11;
          puVar9 = (undefined2 *)((int)puVar7 + uVar16 * 2 + 0xc);
          if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
          }
        }
        puVar7 = puVar7 + 3;
      }
      local_50 = puVar7;
      fn_00301a9c(puVar7,local_54,uVar5 << 1);
      fn_0015b0f8(iVar3);
      local_64 = fn_0022f750((char *)&DAT_006027e8);
      uVar5 = fn_00100b58();
      puVar7 = puVar10;
      if (uVar5 != 0) {
        puVar6 = &local_54;
        if (0x20 < uVar5) {
          puVar6 = &local_2c;
        }
        local_2c = uVar5;
        local_54 = 0x20;
        uVar11 = *puVar6;
        uVar16 = uVar5;
        if (0xfffffff1 < uVar11) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar11,0xfffffff1);
        }
        if (uVar11 < uVar16) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar16,uVar11);
        }
        if (uVar11 == 0) {
          puVar7 = &DAT_008f9ce8;
        }
        else {
          puVar7 = (undefined4 *)fn_00100fc6((uVar11 + 8) * 2,0);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
          }
          puVar7[2] = uVar16;
          *puVar7 = 0;
          puVar7[1] = uVar11;
          puVar9 = (undefined2 *)((int)puVar7 + uVar16 * 2 + 0xc);
          if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
          }
        }
        puVar7 = puVar7 + 3;
      }
      local_60[0] = puVar7;
      fn_00301a9c(puVar7,local_64,uVar5 << 1);
      fn_007b9478(auStack_30,&local_50,auStack_38);
      fn_007b9478(&local_3c,auStack_30,local_60);
      piVar8 = local_3c + -3;
      if (*piVar8 + 1 == 0) {
        if (&local_1c4 != &local_3c) {
          fn_00177c88(&local_1c4,0,local_1c4[-1],local_3c,local_3c[-1],0,local_3c[-1]);
        }
      }
      else {
        if (piVar8 != &DAT_008f9ce8) {
          *piVar8 = *piVar8 + 1;
        }
        if (local_1c4 != puVar10) {
          piVar8 = local_1c4 + -3;
          iVar4 = *piVar8;
          if ((iVar4 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar4 + -1, iVar4 == 0)))) {
            fn_001008c4(local_1c4 + -3,local_1c4[-2] + 8,0);
          }
        }
        local_1c4 = local_3c;
      }
      fn_001588d4(&local_3c);
      fn_001588d4(auStack_30);
      fn_005d46a0(iVar14,iVar3,iVar3 - iVar12,&local_1c4,local_40);
      fn_005d4710(local_28,&local_1c4);
      iVar14 = (iVar3 - iVar12) + iVar14 + 1;
      iVar3 = iVar12 + -1;
      iVar12 = iVar12 + -10;
      if (iVar12 < local_4c) {
        iVar12 = local_4c;
      }
      if (puVar10 != local_60[0]) {
        piVar8 = local_60[0] + -3;
        iVar4 = *piVar8;
        if ((iVar4 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(local_60[0] + -3,local_60[0][-2] + 8,0);
        }
      }
      if (puVar10 != local_50) {
        piVar8 = local_50 + -3;
        iVar4 = *piVar8;
        if ((iVar4 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
        }
      }
      fn_001588d4(&local_1c4);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar15);
  }
  fn_00397774(&pwStack_d0);
  pwStack_d0 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_cc = (char *)&DAT_00602a74;
  iStack_c8 = iVar15;
  local_bc = iVar15;
  local_c4 = fn_002f70cc(local_28);
  uVar1 = fn_0022f750((char *)&DAT_00602a88);
  fn_00147974(auStack_b4,uVar1);
  local_a4 = 0;
  local_a3 = 0;
  local_9c = 1;
  uVar1 = fn_0022f750((char *)&DAT_00602a90);
  fn_00147974(auStack_90,uVar1);
  uVar1 = fn_005d45b8(local_28,1,&pwStack_d0);
  fn_00100414(auStack_94,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_a8);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  fn_001588d4(auStack_38);
  return uVar1;
}



void fn_00601e4c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_2,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_00601eac;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00601eac:
  if (param_3 == 0) {
    uVar3 = fn_0057dd9c();
    fn_00168a24(param_1,uVar3,auStack_28);
    return;
  }
  if (param_3 == 1) {
    uVar3 = fn_0022f750((char *)&DAT_00601f54);
    fn_00168a24(param_1,uVar3,auStack_28);
    return;
  }
  if (param_3 == 2) {
    uVar3 = fn_0022f750((&PTR_s_racetime_007c60e4)[*(byte *)(puVar1 + 6)]);
    fn_00168a24(param_1,uVar3,auStack_28);
    return;
  }
  fn_00168a24(param_1,&DAT_00601f50,auStack_24);
  return;
}


