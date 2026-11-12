#include "0068cc60_0068f0e0.h"



bool fn_0068f0e0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  bVar1 = 0x2c < *(int *)(param_1 + 8);
  if (!bVar1) {
    fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
    local_18 = (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10)) * fVar3 * 0.022222223 +
               *(float *)(param_1 + 0x10);
    local_14 = (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x14)) * fVar3 * 0.022222223 +
               *(float *)(param_1 + 0x14);
    local_10 = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18)) * fVar3 * 0.022222223 +
               *(float *)(param_1 + 0x18);
    uVar2 = fn_0068eb0c(DAT_008977e8);
    fn_001cbdac(uVar2,&local_18);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return bVar1;
}



void fn_0068ef00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint unaff_r9;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_64 [72];
  
  fn_00183718(&local_b8,param_1,param_2);
  if (local_b8 != 0) {
    unaff_r9 = 0xffffffff;
  }
  local_c4 = local_a4;
  uStack_c0 = uStack_a0;
  uStack_d4 = uStack_b4;
  uStack_d0 = uStack_b0;
  uStack_cc = uStack_ac;
  uStack_c8 = local_a8;
  uVar7 = 0;
  if (local_b8 != 0) {
    do {
      fn_00176ec8(auStack_64,&uStack_d4,uVar7);
      fn_0017821c(&local_a8,auStack_64);
      uVar1 = fn_002febd8(&local_a8);
      if ((int)uVar1 < 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar1 & 1;
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            if ((int)*(char *)((int)&local_a8 + uVar2) - 0x30U < 10) goto LAB_0068eff4;
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < (int)uVar4);
        }
      }
      for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 2) {
        uVar2 = uVar4;
        if ((int)*(char *)((int)&local_a8 + uVar4) - 0x30U < 10) goto LAB_0068eff4;
        if ((int)(char)auStack_64[uVar4 - 0x43] - 0x30U < 10) {
          uVar2 = uVar4 + 1;
          goto LAB_0068eff4;
        }
      }
      uVar2 = unaff_r9;
LAB_0068eff4:
      iVar3 = fn_00101c78(uVar2 + (int)&local_a8,0,10);
      puVar6 = (undefined4 *)(param_3 + iVar3 * 0xc);
      puVar5 = (undefined4 *)(param_5 + iVar3 * 0xc);
      uVar7 = uVar7 + 1;
      *puVar6 = local_88;
      puVar6[1] = local_84;
      puVar6[2] = local_80;
      *puVar5 = local_7c;
      puVar5[1] = uStack_78;
      puVar5[2] = uStack_74;
    } while (uVar7 < local_b8);
  }
  return;
}



undefined4 fn_0068ede0(uint *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uStack_a8;
  undefined1 auStack_a7 [31];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_60 [68];
  
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      fn_00176ec8(auStack_60,param_1 + 1,uVar2);
      fn_0017821c(&uStack_a8,auStack_60,0x44);
      iVar1 = fn_00101c78(auStack_a7,0,10);
      if (iVar1 == param_2) {
        fn_00176ec8(auStack_60,param_1 + 1,uVar2);
        fn_0017821c(&uStack_a8,auStack_60,0x44);
        iVar1 = fn_002febd8(&uStack_a8);
        if (iVar1 == 3) {
          fn_00176ec8(auStack_60,param_1 + 1,uVar2);
          fn_0017821c(&uStack_a8,auStack_60,0x44);
          *param_3 = local_88;
          param_3[1] = uStack_84;
          param_3[2] = uStack_80;
          fn_00176ec8(auStack_60,param_1 + 1,uVar2);
          fn_0017821c(&uStack_a8,auStack_60,0x44);
          *param_4 = local_7c;
          param_4[1] = uStack_78;
          param_4[2] = uStack_74;
          return 1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return 0;
}



void fn_0068eb3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0011dec8();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8(param_1,param_2,param_3,param_4,0,0,0);
  }
  uVar2 = fn_001fbbc8();
  fn_001fbe80(param_1,uVar2);
  return;
}



void fn_0068e96c(undefined4 *param_1)

{
  fn_0068e034(*param_1);
  return;
}



void fn_0068e950(undefined4 *param_1)

{
  fn_00119bd8(*param_1);
  return;
}



void fn_0068e034(int param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006a8660(*(undefined4 *)(param_1 + 0x58));
}



void fn_0068cc60(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *unaff_r6;
  undefined4 *unaff_r7;
  int iVar5;
  int iVar6;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iVar5 = 0;
  if (0 < param_3) {
    unaff_r6 = &DAT_007c97d8;
  }
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (0 < param_3) {
    unaff_r7 = &local_40;
  }
  local_40 = 0;
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if (0 < param_3) {
    do {
      iVar1 = fn_0032d6f4((int)*(short *)(local_2c + iVar5 * 2));
      uVar4 = (uint)*(byte *)(iVar1 + 0x1e);
      if (*(char *)((int)unaff_r7 + uVar4) == '\0') {
        *(undefined1 *)((int)unaff_r7 + uVar4) = 1;
        uVar3 = 0;
        iVar6 = *(int *)(&DAT_00896d14 + uVar4 * 4);
        if (*(int *)(unaff_r6 + uVar4 * 4) != 0) {
          do {
            if (local_4c == local_48) {
              fn_0079df24(&local_50,local_4c,iVar6 + uVar3 * 4);
              puVar2 = local_4c;
            }
            else {
              puVar2 = local_4c + 1;
              if (local_4c != (undefined4 *)0x0) {
                *local_4c = *(undefined4 *)(iVar6 + uVar3 * 4);
              }
            }
            local_4c = puVar2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(unaff_r6 + uVar4 * 4));
        }
      }
      uVar4 = (uint)*(byte *)(iVar1 + 0x1f);
      if (*(char *)((int)unaff_r7 + uVar4) == '\0') {
        *(undefined1 *)((int)unaff_r7 + uVar4) = 1;
        uVar3 = 0;
        iVar1 = *(int *)(&DAT_00896d14 + uVar4 * 4);
        if (*(int *)(unaff_r6 + uVar4 * 4) != 0) {
          do {
            if (local_4c == local_48) {
              fn_0079df24(&local_50,local_4c,iVar1 + uVar3 * 4);
              puVar2 = local_4c;
            }
            else {
              puVar2 = local_4c + 1;
              if (local_4c != (undefined4 *)0x0) {
                *local_4c = *(undefined4 *)(iVar1 + uVar3 * 4);
              }
            }
            local_4c = puVar2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(unaff_r6 + uVar4 * 4));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  uVar4 = 0;
  do {
    if (local_4c == local_48) {
      fn_0079df24(&local_50);
      puVar2 = local_4c;
    }
    else {
      puVar2 = local_4c + 1;
      if (local_4c != (undefined4 *)0x0) {
        *local_4c = (&DAT_007c9818)[uVar4];
      }
    }
    local_4c = puVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x1f);
  uVar4 = 0;
  if ((int)local_4c - (int)local_50 >> 2 != 0) {
    do {
      fn_002a4648(*(undefined4 *)(local_30 + 0x30),local_50[uVar4]);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)local_4c - (int)local_50 >> 2));
  }
  puVar2 = local_50;
  if (local_4c < local_50) {
    do {
      puVar2 = puVar2 + 1;
    } while (puVar2 != local_4c);
  }
  fn_001008c4(local_50,(int)local_48 - (int)local_50 >> 2,0);
  return;
}


