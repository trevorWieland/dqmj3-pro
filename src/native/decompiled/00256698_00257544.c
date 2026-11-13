#include "00256698_00257544.h"



void fn_00257544(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081d7b0;
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 0x104;
    } while (uVar2 != param_1[5]);
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) / 0x104,0);
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[2]);
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_002573bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_28;
  uint local_24;
  
  puVar9 = (undefined4 *)0x0;
  *param_1 = &DAT_0081d7b0;
  param_1[1] = 0;
  puVar10 = param_1 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  local_28 = 2;
  uVar11 = (int)(param_1[2] - param_1[1]) >> 2;
  local_24 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
  if (local_24 < uVar11 + 0x20) {
    local_24 = uVar11 + 0x20;
  }
  puVar4 = &local_24;
  if (local_24 < 3) {
    puVar4 = &local_28;
  }
  uVar11 = *puVar4;
  puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar7 = puVar1;
  for (puVar5 = (undefined4 *)*puVar10; puVar5 != (undefined4 *)0x0; puVar5 = puVar5 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar5;
    }
    puVar7 = puVar7 + 1;
  }
  iVar6 = 2;
  puVar5 = (undefined4 *)((-*puVar10 & 0xfffffffc) + (int)puVar1);
  do {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
    }
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  puVar7 = (undefined4 *)param_1[2];
  puVar5 = puVar1 + ((int)-*puVar10 >> 2) + 2;
  if (puVar7 != (undefined4 *)0x0) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar9 != puVar7);
  }
  uVar2 = *puVar10;
  uVar8 = param_1[2];
  uVar3 = uVar2;
  if (uVar8 < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uVar8);
  }
  fn_001008c4(uVar2,(int)(param_1[3] - uVar2) >> 2,0);
  param_1[3] = puVar1 + uVar11;
  param_1[2] = puVar1 + ((int)(uVar8 - uVar2) >> 2) + 2;
  *puVar10 = (uint)puVar1;
  fn_0078a708(param_1 + 4,5);
  return param_1;
}



void fn_002573b0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



int fn_00256698(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  uint uVar13;
  uint uVar14;
  char cStack_26f;
  short sStack_26e;
  short local_26c;
  char local_25c [4];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [114];
  undefined1 local_1d6 [2];
  short local_1d4 [64];
  undefined4 local_154 [4];
  undefined1 auStack_144 [12];
  undefined1 local_138 [4];
  char local_134 [4];
  char local_130 [4];
  undefined4 local_12c;
  int local_128;
  undefined4 local_124 [53];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 local_34 [4];
  int local_30 [3];
  
  local_44 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  uVar12 = local_44;
  fn_00301f48(local_154);
  fn_0017821c(auStack_144,uVar12,0xf0);
  iVar11 = *(int *)(param_1 + 0x14);
  if (iVar11 == *(int *)(param_1 + 0x18)) {
    fn_0078a498(param_1 + 0x10);
  }
  else {
    *(int *)(param_1 + 0x14) = iVar11 + 0x104;
    if (iVar11 != 0) {
      fn_0017821c(iVar11,local_154,0x104);
    }
  }
  fn_0020bbc4(auStack_40,uVar4);
  puVar5 = (undefined4 *)fn_006c0010(auStack_3c);
  uVar12 = *puVar5;
  uVar4 = puVar5[1];
  puVar6 = (undefined1 *)fn_002429d0(0x18b);
  local_34[0] = *puVar6;
  cStack_26f = (char)((uint)uVar12 >> 8);
  local_30[0] = (int)cStack_26f;
  fn_006a82f4(auStack_38,local_34,local_30);
  fn_0020bbc4(auStack_50,local_44);
  fn_006bfda8(auStack_4c);
  iVar11 = fn_002429f0();
  fn_006bfda8(auStack_4c);
  iVar7 = fn_0020ccc8();
  if (iVar7 == 0) {
    uVar13 = 0;
    if (iVar11 < 1) goto LAB_00256c94;
  }
  else {
    iVar11 = 1;
    uVar13 = 0;
  }
  do {
    fn_00301f48(auStack_258);
    fn_0017821c(auStack_248,local_44,0xf0);
    iVar7 = fn_006c0010(auStack_4c);
    pcVar8 = (char *)(iVar7 + uVar13 * 6);
    if (*pcVar8 == '\0') {
      uVar14 = uVar13 & 0xff | 0xff0000;
    }
    else {
      uVar14 = uVar13 & 0xff | (uint)(byte)pcVar8[1] << 8 | (uint)*(ushort *)(pcVar8 + 2) << 0x10;
    }
    sStack_26e = (short)((uint)uVar12 >> 0x10);
    if (sStack_26e == -0xff) {
      uVar2 = (undefined1)(uVar14 >> 8);
    }
    else {
      fn_006bfda8(auStack_4c);
      iVar9 = fn_0020ccc8();
      iVar10 = 0;
      if (iVar9 != 0) {
        iVar10 = (int)uVar14 >> 0x10;
      }
      if (iVar9 == 0 || iVar10 == -0xff) {
        fn_006bfda8(auStack_4c);
        iVar10 = fn_002429d0();
        local_138[0] = *(undefined1 *)(iVar10 + uVar13);
        fn_006a82e0(local_130,auStack_38,local_138);
        fn_006a82f4(local_25c,local_138,local_130);
        cVar1 = local_25c[0];
        iVar10 = (int)local_25c[0];
        local_154[0] = 5;
        if (iVar10 < 0) {
          fn_00300f74(iVar10,5);
          if (extraout_r1_00 != 0) {
            cVar1 = fn_00300f74(iVar10 + -5,local_154[0]);
            cVar1 = cVar1 * '\x05';
          }
        }
        else {
          cVar1 = fn_00300f74(iVar10,5);
          cVar1 = cVar1 * '\x05';
        }
        local_134[0] = cVar1;
        fn_006a82e0(&local_12c,local_134,local_138);
        uVar2 = fn_001c801c(local_12c);
      }
      else {
        fn_006bfda8(auStack_4c);
        iVar10 = fn_002429d0();
        local_138[0] = *(undefined1 *)(iVar10 + uVar13);
        local_128 = (int)(uVar14 << 0x10) >> 0x18;
        fn_006a82f4(local_134,local_138,&local_128);
        fn_001c7f50(local_25c,local_134,auStack_38,1);
        cVar1 = local_25c[0];
        iVar10 = (int)local_25c[0];
        local_154[0] = 5;
        if (iVar10 < 0) {
          fn_00300f74(iVar10,5);
          if (extraout_r1 != 0) {
            cVar1 = fn_00300f74(iVar10 + -5,local_154[0]);
            cVar1 = cVar1 * '\x05';
          }
        }
        else {
          cVar1 = fn_00300f74(iVar10,5);
          cVar1 = cVar1 * '\x05';
        }
        local_130[0] = cVar1;
        fn_006a82e0(local_124,local_130,local_138);
        uVar2 = fn_001c801c(local_124[0]);
      }
    }
    fn_006bfda8(auStack_4c);
    iVar10 = fn_0020ccc8();
    local_1d6[uVar13 * 6 + 1] = uVar2;
    local_26c = (short)uVar4;
    if (iVar10 == 0) {
      iVar7 = (int)sStack_26e;
      if (iVar7 < 0) {
        fn_00300f74(iVar7,5);
        if (extraout_r1_03 != 0) {
          sStack_26e = fn_00300f74(iVar7 + -5,5);
          sStack_26e = sStack_26e * 5;
        }
      }
      else {
        sStack_26e = fn_00300f74(iVar7,5);
        sStack_26e = sStack_26e * 5;
      }
      local_1d4[uVar13 * 3] = sStack_26e;
      iVar7 = (int)local_26c;
      if (iVar7 < 0) {
        fn_00300f74(iVar7,5);
        if (extraout_r1_04 != 0) {
          local_26c = fn_00300f74(iVar7 + -5,5);
          local_26c = local_26c * 5;
        }
      }
      else {
        local_26c = fn_00300f74(iVar7,5);
        local_26c = local_26c * 5;
      }
      local_1d4[uVar13 * 3 + 1] = local_26c;
    }
    else {
      sVar3 = (short)(((int)*(short *)(iVar7 + 2) + (int)sStack_26e) / 2);
      iVar10 = (int)sVar3;
      if (iVar10 < 0) {
        fn_00300f74(iVar10,5);
        if (extraout_r1_01 != 0) {
          sVar3 = fn_00300f74(iVar10 + -5,5);
          sVar3 = sVar3 * 5;
        }
      }
      else {
        sVar3 = fn_00300f74(iVar10,5);
        sVar3 = sVar3 * 5;
      }
      local_1d4[uVar13 * 3] = sVar3;
      sVar3 = (short)(((int)*(short *)(iVar7 + 4) + (int)local_26c) / 2);
      iVar7 = (int)sVar3;
      if (iVar7 < 0) {
        fn_00300f74(iVar7,5);
        if (extraout_r1_02 != 0) {
          sVar3 = fn_00300f74(iVar7 + -5,5);
          sVar3 = sVar3 * 5;
        }
      }
      else {
        sVar3 = fn_00300f74(iVar7,5);
        sVar3 = sVar3 * 5;
      }
      local_1d4[uVar13 * 3 + 1] = sVar3;
    }
    local_1d6[uVar13 * 6] = 1;
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar7 == *(int *)(param_1 + 0x18)) {
      fn_0078a498(param_1 + 0x10,iVar7,auStack_258);
    }
    else {
      *(int *)(param_1 + 0x14) = iVar7 + 0x104;
      if (iVar7 != 0) {
        fn_0017821c(iVar7,auStack_258,0x104);
      }
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < iVar11);
LAB_00256c94:
  return (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x104;
}


