#include "002f4f1c_002f5854.h"



void fn_002f5624(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *unaff_r8;
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  uint local_38;
  int iStack_34;
  ushort local_30;
  ushort local_2e;
  uint local_2c;
  
  puVar1 = (undefined4 *)fn_001f74e4(*(undefined4 *)(DAT_008977ec + 0x24),0xf5);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089715c) goto LAB_002f5684;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f5684:
  fn_005b8744(puVar1);
  if (0 < param_2) {
    unaff_r8 = &DAT_008f9ce8;
  }
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[0x41] = param_3;
  iVar5 = 0;
  if (0 < param_2) {
    piVar6 = unaff_r8 + 3;
    do {
      iVar4 = param_1 + iVar5 * 0x44;
      iStack_34 = iVar4 + 0x30;
      local_38 = (uint)*(ushort *)(iVar4 + 0x24);
      local_2c = (uint)*(ushort *)(iVar4 + 0x20);
      local_30 = (ushort)*(byte *)(iVar4 + 0x26);
      local_2e = (ushort)*(byte *)(iVar4 + 0x27);
      local_3c = piVar6;
      local_40 = fn_005b85a0(*(undefined4 *)(iVar4 + 0x2c),*(undefined4 *)(iVar4 + 0x28));
      fn_0022f0c0(&local_44,*(undefined4 *)(iVar4 + 0x2c));
      piVar3 = local_44 + -3;
      if (*piVar3 + 1 == 0) {
        if (&local_3c != &local_44) {
          fn_00177c88(&local_3c,0,local_3c[-1],local_44,local_44[-1],0,local_44[-1]);
        }
      }
      else {
        if (piVar3 != unaff_r8) {
          *piVar3 = *piVar3 + 1;
        }
        if (local_3c != piVar6) {
          piVar3 = local_3c + -3;
          iVar4 = *piVar3;
          if ((iVar4 == -1) || ((piVar3 != unaff_r8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
            fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
          }
        }
        local_3c = local_44;
      }
      if (local_44 != piVar6) {
        piVar3 = local_44 + -3;
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != unaff_r8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
        }
      }
      fn_005b85d0(puVar1,iVar5,&local_40);
      if (local_3c != piVar6) {
        piVar3 = local_3c + -3;
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != unaff_r8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  *(undefined1 *)(puVar1 + 0x42) = 1;
  return;
}



bool fn_002f55f0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002f8914();
  iVar2 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar1);
  return *(byte *)(iVar2 + 0x3c3) < 4;
}



void fn_002f55a0(int param_1)

{
  fn_0011360c();
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0xff;
  return;
}



void fn_002f4f1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,
                 undefined4 param_13,int param_14,int param_15)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 **ppuVar11;
  uint uVar12;
  undefined *local_930 [8];
  undefined2 local_90e;
  undefined1 local_90a;
  undefined1 local_909;
  undefined1 auStack_900 [960];
  undefined1 auStack_540 [960];
  undefined1 auStack_180 [32];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined1 auStack_158 [96];
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [72];
  undefined1 local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 **local_58;
  uint local_54;
  uint local_50 [6];
  int iStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iStack_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  fn_0011d9b0(local_930);
  fn_0017821c(auStack_900,local_30,0x3c0);
  fn_0017821c(auStack_540,param_5,0x3c0);
  fn_00301a9c(auStack_f8,local_2c,0x24);
  fn_00301a9c(auStack_b0,param_6,0x24);
  local_90a = param_7;
  local_909 = param_8;
  local_160 = param_9;
  uStack_15c = param_10;
  fn_00301a9c(auStack_180,param_11,0x1e);
  local_68 = (char)param_15;
  local_58 = &local_64;
  iVar1 = fn_003e93d8(*(undefined4 *)(param_1 + 0x2c),local_34);
  ppuVar11 = (undefined4 **)(iVar1 + 0x60);
  if (ppuVar11 != &local_64) {
    puVar4 = *(undefined4 **)(iVar1 + 100);
    puVar6 = *ppuVar11;
    iVar9 = (int)puVar4 - (int)puVar6;
    uVar12 = iVar9 / 0xc;
    if ((uint)(((int)local_5c - (int)local_64) / 0xc) < uVar12) {
      local_54 = ((int)puVar4 - (int)puVar6) / 0xc;
      uVar12 = ((int)local_60 - (int)local_64) / 0xc;
      uVar7 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
      local_50[0] = uVar12 + 0x20;
      if (uVar12 + 0x20 <= uVar7) {
        local_50[0] = uVar7;
      }
      puVar5 = &local_54;
      if (local_54 < local_50[0]) {
        puVar5 = local_50;
      }
      uVar12 = *puVar5;
      puVar2 = (undefined4 *)fn_00100fc6(uVar12 * 0xc,0);
      puVar8 = *(undefined4 **)(iVar1 + 100);
      puVar4 = puVar2;
      for (puVar6 = *ppuVar11; puVar6 != puVar8; puVar6 = puVar6 + 3) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar6;
          puVar4[1] = puVar6[1];
          puVar4[2] = puVar6[2];
        }
        puVar4 = puVar4 + 3;
      }
      puVar6 = local_64;
      if (local_60 < local_64) {
        do {
          puVar6 = puVar6 + 3;
        } while (puVar6 != local_60);
      }
      fn_001008c4(local_64,((int)local_5c - (int)local_64) / 0xc,0);
      local_5c = puVar2 + uVar12 * 3;
      local_60 = puVar2 + ((*(int *)(iVar1 + 100) - (int)*ppuVar11) / 0xc) * 3;
      local_64 = puVar2;
    }
    else {
      uVar7 = ((int)local_60 - (int)local_64) / 0xc;
      if (uVar7 < uVar12) {
        puVar2 = puVar6 + uVar7 * 3;
        puVar4 = local_64;
        if (puVar6 < puVar2) {
          if (0 < (int)puVar2 - (int)puVar6) {
            puVar4 = local_64 + -3;
            puVar8 = puVar6 + -3;
            if ((((int)puVar2 - (int)puVar6) / 0xc & 1U) != 0) {
              *local_64 = *puVar6;
              local_64[1] = puVar6[1];
              local_64[2] = puVar6[2];
              puVar4 = local_64;
              puVar8 = puVar6;
            }
            for (iVar9 = ((int)puVar2 - (int)puVar6) / 0xc >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar4[3] = puVar8[3];
              puVar4[4] = puVar8[4];
              puVar4[5] = puVar8[5];
              puVar4[6] = puVar8[6];
              puVar4[7] = puVar8[7];
              puVar4[8] = puVar8[8];
              puVar4 = puVar4 + 6;
              puVar8 = puVar8 + 6;
            }
          }
        }
        else {
          for (; puVar6 != puVar2; puVar6 = puVar6 + 3) {
            *puVar4 = *puVar6;
            puVar4[1] = puVar6[1];
            puVar4[2] = puVar6[2];
            puVar4 = puVar4 + 3;
          }
        }
        local_60 = local_64 + ((*(int *)(iVar1 + 100) - (int)*ppuVar11) / 0xc) * 3;
        puVar2 = *(undefined4 **)(iVar1 + 100);
        puVar4 = local_64 + uVar7 * 3;
        for (puVar6 = *ppuVar11 + uVar7 * 3; puVar6 != puVar2; puVar6 = puVar6 + 3) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar6;
            puVar4[1] = puVar6[1];
            puVar4[2] = puVar6[2];
          }
          puVar4 = puVar4 + 3;
        }
      }
      else {
        puVar2 = local_64;
        if (puVar6 < puVar4) {
          if (0 < iVar9) {
            puVar4 = local_64 + -3;
            puVar2 = puVar6 + -3;
            if ((uVar12 & 1) != 0) {
              *local_64 = *puVar6;
              local_64[1] = puVar6[1];
              local_64[2] = puVar6[2];
              puVar4 = local_64;
              puVar2 = puVar6;
            }
            for (iVar10 = iVar9 / 0xc >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar4[3] = puVar2[3];
              puVar4[4] = puVar2[4];
              puVar4[5] = puVar2[5];
              puVar4[6] = puVar2[6];
              puVar4[7] = puVar2[7];
              puVar4[8] = puVar2[8];
              puVar4 = puVar4 + 6;
              puVar2 = puVar2 + 6;
            }
            puVar2 = local_64 + (iVar9 / 0xc) * 3;
          }
        }
        else {
          for (; puVar6 != puVar4; puVar6 = puVar6 + 3) {
            *puVar2 = *puVar6;
            puVar2[1] = puVar6[1];
            puVar2[2] = puVar6[2];
            puVar2 = puVar2 + 3;
          }
        }
        if (local_60 < puVar2) {
          do {
            puVar2 = puVar2 + 3;
          } while (puVar2 != local_60);
        }
        local_60 = local_64 + ((*(int *)(iVar1 + 100) - (int)*ppuVar11) / 0xc) * 3;
        local_5c = local_60;
      }
    }
  }
  if (param_12 == 0) {
    local_90e = 1;
  }
  else {
    local_90e = 0x1b;
    fn_001f825c();
    fn_0066193c(auStack_158,param_13);
    fn_0011ddb8();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc) = local_34;
  *(char *)(*(int *)(param_1 + 0x2c) + 0x10) = (char)param_15;
  if (param_15 == 0) {
    if (param_14 == 0) {
      uVar3 = fn_00615e64();
      fn_003e93bc(*(undefined4 *)(param_1 + 0x2c),local_34,uVar3);
      fn_003e93a8(*(undefined4 *)(param_1 + 0x2c),local_34);
      fn_00615ecc();
      fn_003e91ec(*(undefined4 *)(param_1 + 0x2c),local_34,auStack_900,4);
      uVar3 = fn_00154ae0(DAT_008977e4);
      fn_001d31e8(uVar3,local_930);
      *(undefined1 *)(param_1 + 0x3a) = 2;
      *(undefined1 *)(param_1 + 0x39) = 1;
    }
    else {
      uVar3 = fn_00615e64();
      fn_003e93bc(*(undefined4 *)(param_1 + 0x2c),local_34,uVar3);
      fn_003e93a8(*(undefined4 *)(param_1 + 0x2c),local_34);
      fn_00615ecc();
      fn_003e91ec(*(undefined4 *)(param_1 + 0x2c),local_34,auStack_900,4);
      uVar3 = fn_00154ae0(DAT_008977e4);
      fn_001d31e8(uVar3,local_930);
      fn_001c20d4(DAT_008977e4);
      uVar3 = fn_001c232c(DAT_008977e4);
      fn_002f5fa0(*(undefined4 *)(param_1 + 0x2c),local_34,uVar3);
      fn_002f7144(uVar3);
    }
  }
  else {
    fn_003e93a8(*(undefined4 *)(param_1 + 0x2c),local_34);
    fn_00615ecc();
    uVar3 = fn_006cba1c(*(undefined4 *)(param_1 + 0x2c),local_34);
    fn_002f5854(uVar3,4,auStack_900);
    uVar3 = fn_00154ae0(DAT_008977e4);
    fn_001d31e8(uVar3,local_930);
    *(undefined1 *)(param_1 + 0x3a) = 2;
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  local_930[0] = &DAT_008517a0;
  fn_00120ec8(local_58);
  return;
}



void fn_002f5854(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (0 < (int)(param_4 - 1)) {
    puVar5 = (undefined1 *)(param_3 + -0xc1);
    puVar3 = param_1 + -1;
    if ((param_4 & 1) == 0) {
      puVar5 = (undefined1 *)(param_3 + 0x2f);
      *puVar5 = *param_1;
      puVar3 = param_1;
    }
    uVar1 = puVar3[1];
    for (iVar4 = (int)(param_4 - 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar2 = puVar3[2];
      puVar5[0xf0] = uVar1;
      uVar1 = puVar3[3];
      puVar5 = puVar5 + 0x1e0;
      *puVar5 = uVar2;
      puVar3 = puVar3 + 2;
    }
  }
  iVar4 = param_4 - 1;
  if (-1 < iVar4) {
    *(undefined1 *)(param_3 + iVar4 * 0xf0 + 0x2f) = param_1[iVar4];
  }
  return;
}


