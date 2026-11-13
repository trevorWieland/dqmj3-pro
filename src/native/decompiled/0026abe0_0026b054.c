#include "0026abe0_0026b054.h"



undefined1 * fn_0026b054(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short local_28 [8];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  psVar2 = local_28;
  psVar3 = local_28;
  fn_0020bbc4(auStack_18);
  iVar1 = fn_00174828(DAT_008977e4);
  local_28[0] = *(short *)(param_1 + 0x1c);
  local_28[4] = (short)(*(char *)(iVar1 + 0xe8) != '\x02');
  iVar1 = fn_006c0028(auStack_14);
  local_28[2] = (short)iVar1;
  if (local_28[4] <= iVar1) {
    if ((int)local_28[0] < (int)local_28[4]) {
      psVar2 = local_28 + 4;
    }
    if (iVar1 < *psVar2) {
      psVar2 = local_28 + 2;
    }
    *(short *)(param_2 + 0x22) = *psVar2;
    local_28[0] = *(short *)(param_1 + 0x1e);
    local_28[2] = 0;
    iVar1 = fn_006c0114(auStack_14);
    local_28[4] = (ushort)iVar1;
    if (local_28[2] <= iVar1) {
      if ((int)local_28[0] < (int)local_28[2]) {
        psVar3 = local_28 + 2;
      }
      if (iVar1 < *psVar3) {
        psVar3 = local_28 + 4;
      }
      *(short *)(param_2 + 0x24) = *psVar3;
      *(undefined1 *)(param_2 + 0x2f) = *(undefined1 *)(param_1 + 0x5a);
      return auStack_18;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



void fn_0026ad4c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_868 [644];
  undefined1 auStack_5e4 [404];
  uint local_450;
  uint local_44c;
  int local_448;
  undefined1 auStack_444 [276];
  byte local_330;
  short asStack_32c [380];
  int iStack_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  cVar1 = (char)param_2;
  if (cVar1 != 0) {
    iStack_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    iVar4 = fn_00174828(DAT_008977e4);
    fn_0017821c(auStack_868,iVar4 + cVar1 * 0x418 + -0x4080,0x418);
    fn_0026a990(param_1,auStack_868);
    local_450 = CONCAT31(((unsigned int)(local_450) >> 8) & 0xffffff,cVar1);
    uVar5 = fn_00182988(DAT_008977e4);
    puVar6 = (undefined4 *)fn_0026a548(uVar5,&local_450);
    *(undefined4 *)(param_1 + 0xac) = *puVar6;
    *(undefined4 *)(param_1 + 0xb0) = puVar6[1];
    *(undefined4 *)(param_1 + 0xb4) = puVar6[2];
    *(undefined4 *)(param_1 + 0xb8) = puVar6[3];
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(puVar6 + 4);
    local_450 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_28);
    fn_0020bbc4(&local_448,local_450);
    uVar3 = fn_006bfdec(auStack_444);
    *(undefined1 *)(param_1 + 0x25) = uVar3;
    uVar3 = fn_006bf1d4(auStack_444);
    uVar5 = local_2c;
    *(undefined1 *)(param_1 + 0x26) = uVar3;
    uVar9 = *(undefined4 *)(local_450 + 0xe4);
    uVar10 = *(undefined4 *)(local_450 + 0xe8);
    uVar11 = *(undefined4 *)(local_450 + 0xec);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(local_450 + 0xe0);
    *(undefined4 *)(param_1 + 0x2d8) = uVar9;
    *(undefined4 *)(param_1 + 0x2dc) = uVar10;
    *(undefined4 *)(param_1 + 0x2e0) = uVar11;
    *(undefined4 *)(param_1 + 0x45c) = local_28;
    *(undefined4 *)(param_1 + 0x460) = param_5;
    if (param_6 == 0) {
      local_450 = 0;
      local_44c = 0;
      local_448 = 0;
      fn_002d399c(&local_450,param_2 & 0xff);
      iVar4 = 0;
      uVar12 = 0;
      if ((int)(local_44c - local_450) >> 1 != 0) {
        do {
          if (uVar12 < (uint)((int)(local_44c - local_450) >> 1)) {
            sVar2 = *(short *)(local_450 + uVar12 * 2);
            iVar7 = fn_0025f930((int)sVar2);
            if (iVar7 != 0) {
              iVar7 = iVar4 * 2;
              iVar4 = iVar4 + 1;
              *(short *)(param_1 + iVar7 + 0x468) = sVar2;
              *(char *)(param_1 + 0x464) = (char)iVar4;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)((int)(local_44c - local_450) >> 1));
      }
      uVar12 = local_450;
      if (local_44c < local_450) {
        do {
          uVar12 = uVar12 + 2;
        } while (uVar12 != local_44c);
      }
      fn_001008c4(local_450,(int)(local_448 - local_450) >> 1,0);
    }
    else {
      iVar4 = fn_00174828(DAT_008977e4);
      iVar7 = fn_00174828(DAT_008977e4);
      fn_0061a8fc(iVar4 + cVar1 * 0x418 + -0x4080,iVar7 + (char)uVar5 * 0x418 + -0x4080,&local_450)
      ;
      fn_0061a1a4(&local_450);
      fn_00619fc4(&local_450);
      fn_0026a990(param_1,&local_450);
      fn_0017821c(auStack_868,&local_450,0x418);
      iVar4 = 0;
      iVar7 = 0;
      if (local_330 != 0) {
        do {
          sVar2 = asStack_32c[iVar7];
          iVar8 = fn_0025f930((int)sVar2);
          if (iVar8 != 0) {
            iVar8 = iVar4 * 2;
            iVar4 = iVar4 + 1;
            *(short *)(param_1 + iVar8 + 0x468) = sVar2;
            *(char *)(param_1 + 0x464) = (char)iVar4;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)local_330);
      }
    }
    fn_0042e938(param_1,auStack_5e4);
  }
  return;
}



void fn_0026ad34(void)

{
  uint *puVar1;
  int iVar2;
  uint local_8 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
  local_8[0] = *(ushort *)(iVar2 + 0x24) + 1;
  local_8[1] = 999;
  puVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    puVar1 = local_8;
  }
  *(short *)(iVar2 + 0x24) = (short)*puVar1;
  return;
}



undefined1 * fn_0026abe0(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [288];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  fn_0020bbc4(auStack_20,param_3);
  fn_0026a990(param_1,param_2);
  local_150 = CONCAT31(((unsigned int)(local_150) >> 8) & 0xffffff,param_4);
  uVar2 = fn_00182988(DAT_008977e4);
  puVar3 = (undefined4 *)fn_0026a548(uVar2,&local_150);
  *(undefined4 *)(param_1 + 0xac) = *puVar3;
  *(undefined4 *)(param_1 + 0xb0) = puVar3[1];
  *(undefined4 *)(param_1 + 0xb4) = puVar3[2];
  *(undefined4 *)(param_1 + 0xb8) = puVar3[3];
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(puVar3 + 4);
  uVar1 = fn_006bf184(auStack_1c);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  uVar1 = fn_006bfdec(auStack_1c);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  uVar1 = fn_006bf1d4(auStack_1c);
  *(undefined1 *)(param_1 + 0x26) = uVar1;
  uVar1 = fn_006bf2b4(auStack_1c);
  iVar8 = 0;
  iVar9 = 0;
  *(undefined1 *)(param_1 + 0x27) = uVar1;
  do {
    iVar4 = param_3 + iVar8 * 4;
    iVar5 = (int)*(short *)(iVar4 + 0x56);
    if (iVar5 != 0) {
      fn_0042ec18(param_1,iVar9,iVar5,*(undefined2 *)(iVar4 + 0x58));
      iVar9 = (int)(short)((short)iVar9 + 1);
    }
    iVar8 = (int)(short)((short)iVar8 + 1);
  } while (iVar8 < 7);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_3 + 0x34);
  uVar2 = *(undefined4 *)(param_3 + 0xe4);
  uVar6 = *(undefined4 *)(param_3 + 0xe8);
  uVar7 = *(undefined4 *)(param_3 + 0xec);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_3 + 0xe0);
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  *(undefined4 *)(param_1 + 0x2dc) = uVar6;
  *(undefined4 *)(param_1 + 0x2e0) = uVar7;
  local_148 = 1;
  uStack_144 = 0;
  local_150 = 1;
  local_14c = 1;
  fn_006bf5ec(auStack_1c,auStack_140,0x4c,1);
  fn_0042e938(param_1,auStack_140);
  return auStack_20;
}


