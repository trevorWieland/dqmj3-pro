#include "00291da8_00292868.h"



void fn_002927ec(int param_1)

{
  int iVar1;
  undefined1 auStack_aa8 [1301];
  undefined1 local_593;
  byte local_592;
  
  iVar1 = DAT_00897820;
  fn_0017821c(auStack_aa8,*(int *)(DAT_00897820 + 0x28) + 0x48,0xa88);
  if (1 < local_592) {
    local_592 = 1;
    if (param_1 != 0) {
      local_593 = 0xff;
    }
    fn_0017821c(*(int *)(iVar1 + 0x28) + 0x48,auStack_aa8,0xa88);
  }
  return;
}



void fn_00292778(void)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined1 auStack_18 [2];
  ushort local_16 [5];
  
  uVar1 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_00166824(auStack_18,uVar1);
  local_16[0] = local_16[0] + 1;
  puVar2 = &DAT_007c8948;
  if (local_16[0] < 10000) {
    puVar2 = local_16;
  }
  local_16[0] = *puVar2;
  fn_00166818(*(undefined4 *)(DAT_00897804 + 0x30),auStack_18);
  return;
}



undefined4 fn_0029272c(int param_1)

{
  if ((*(char *)(param_1 + 0xa70) == '\0') && ((*(byte *)(param_1 + 0xa74) & 3) >> 1 != 0)) {
    return 0;
  }
  return 1;
}



undefined4 fn_002924b0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 **ppuVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c [2];
  
  iVar1 = fn_00163940((int)*(short *)((int)param_1 + 6));
  if ((iVar1 == 0) && (iVar1 = fn_0013add0((int)*(short *)(param_1 + 1)), iVar1 == 0)) {
    return 0;
  }
  fn_0015b0f8(*param_1);
  puVar8 = &DAT_008f9ce8;
  puVar7 = &DAT_008f9cf4;
  if (*(short *)(param_1 + 2) == 0) {
    uVar3 = fn_002ea524((int)*(short *)(param_1 + 1));
    fn_002317d8(&local_38,uVar3,0);
    fn_0015b0dc(local_38);
    uVar3 = fn_0022f584((char *)&DAT_0029270c,0);
    if (local_38 != &DAT_008f9cf4) {
      piVar4 = local_38 + -3;
      iVar1 = *piVar4;
      if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
      }
    }
  }
  else {
    local_30 = fn_0016a82c((int)*(short *)((int)param_1 + 6));
    puVar2 = (undefined4 *)fn_00100b58();
    if (puVar2 != (undefined4 *)0x0) {
      ppuVar5 = local_2c;
      if ((undefined4 *)0x20 < puVar2) {
        ppuVar5 = &local_34;
      }
      local_34 = puVar2;
      local_2c[0] = (undefined4 *)0x20;
      puVar7 = *ppuVar5;
      if ((undefined4 *)0xfffffff1 < puVar7) {
        local_38 = (undefined4 *)0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar7);
      }
      if (puVar7 < puVar2) {
        local_38 = puVar7;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,puVar2);
      }
      if (puVar7 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)fn_00100fc6((int)(puVar7 + 2) * 2,0);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        *puVar8 = 0;
        puVar8[1] = puVar7;
        puVar8[2] = puVar2;
        puVar6 = (undefined2 *)((int)puVar8 + (int)puVar2 * 2 + 0xc);
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      puVar7 = puVar8 + 3;
    }
    fn_00301a9c(puVar7,local_30,(int)puVar2 << 1);
    fn_0015b0dc(puVar7);
    fn_0015b0f8((int)*(short *)(param_1 + 2));
    uVar3 = fn_0022f584((char *)&DAT_002926f0,0);
    if (puVar7 != &DAT_008f9cf4) {
      iVar1 = puVar7[-3];
      if ((iVar1 == -1) || ((puVar7 + -3 != &DAT_008f9ce8 && (puVar7[-3] = iVar1 + -1, iVar1 == 0)))
         ) {
        fn_001008c4(puVar7 + -3,puVar7[-2] + 8,0);
      }
    }
  }
  fn_001003e0(param_2,uVar3);
  return 1;
}



undefined4 fn_0029226c(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [244];
  
  iVar1 = fn_0013add0((int)*(short *)(param_1 + 4));
  uVar3 = 0;
  if (iVar1 != 0) {
    fn_00237c74(auStack_108,(int)*(short *)(param_1 + 4),0xff,0);
    if (param_2 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2);
      do {
        if (puVar2 == &DAT_00896958) goto LAB_002922dc;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    param_2 = (int *)0x0;
LAB_002922dc:
    fn_0030dc80(param_2,auStack_108,param_3);
    uVar3 = 1;
  }
  return uVar3;
}



void fn_00292180(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_158 [4];
  char *local_154;
  undefined4 local_14c;
  undefined2 local_148;
  uint local_140;
  undefined1 local_138;
  undefined2 local_136;
  short local_134;
  undefined1 local_132;
  undefined1 local_131;
  undefined2 local_128;
  undefined2 local_126;
  undefined2 local_104;
  undefined2 local_102;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_bc;
  undefined2 local_ba;
  
  fn_001cff74(auStack_158);
  local_154 = "bf_O00_08";
  local_140 = local_140 | 0x425;
  local_14c = 0x1000018;
  local_136 = *(undefined2 *)(param_1 + 0x120);
  local_132 = *(undefined1 *)(param_1 + 0x514);
  local_134 = (short)*(char *)(param_1 + 0x516);
  local_131 = *(undefined1 *)(param_1 + 0x515);
  local_138 = 6;
  local_148 = 5;
  local_128 = *(undefined2 *)(param_1 + 0xa78);
  local_126 = *(undefined2 *)(param_1 + 0x170);
  local_104 = *(undefined2 *)(param_1 + 0xa7a);
  local_102 = *(undefined2 *)(param_1 + 0x260);
  local_e0 = *(undefined2 *)(param_1 + 0xa7c);
  local_de = *(undefined2 *)(param_1 + 0x350);
  local_bc = *(undefined2 *)(param_1 + 0xa7e);
  local_ba = *(undefined2 *)(param_1 + 0x440);
  uVar1 = fn_00154ae0(DAT_008977e4);
  fn_001d235c(uVar1,auStack_158);
  return;
}



void fn_00292108(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_108 [244];
  
  fn_00237c74(auStack_108,param_1,0xff,0);
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2);
    do {
      if (puVar1 == &DAT_00896958) goto LAB_00292164;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  param_2 = (int *)0x0;
LAB_00292164:
  fn_0030dc80(param_2,auStack_108,param_3);
  return;
}



undefined4 fn_002920b8(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  undefined4 uStack_10;
  
  uVar2 = 0;
  uStack_10 = in_r3;
  fn_00664a8c(&uStack_10);
  iVar1 = fn_006649e0(&uStack_10);
  if (iVar1 == 2) {
    iVar1 = fn_00662bd0();
    uVar2 = fn_006f5d6c(*(undefined4 *)(iVar1 + 0x30),0);
  }
  fn_00664a14(&uStack_10);
  fn_00664a98(&uStack_10);
  return uVar2;
}



uint fn_00291e30(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *local_ab8;
  code *pcStack_ab4;
  char local_48;
  undefined1 auStack_30 [8];
  uint local_28;
  
  uVar7 = 0;
  local_28 = param_1;
  fn_00664a8c(auStack_30);
  iVar2 = fn_006649e0(auStack_30);
  if (iVar2 == 2) {
    iVar3 = fn_00662bd0();
    local_ab8 = &LAB_002922fc;
    pcStack_ab4 = fn_00292868;
    fn_00662d30(*(undefined4 *)(iVar3 + 0x30),iVar3 + 0x34,0);
    iVar2 = *(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34);
    iVar1 = iVar2 >> 0x1f;
    iVar2 = iVar2 / 0x1528 + iVar1;
    if (iVar2 != iVar1) {
      uVar6 = 0;
      do {
        uVar8 = 0;
        iVar4 = fn_006f5d90(iVar3 + 0x34,uVar6);
        iVar5 = 0;
        do {
          while (iVar9 = iVar4 + iVar5 * 0xa88, iVar5 == 0) {
            iVar5 = fn_006f5ddc(iVar9);
            if ((iVar5 != 0) && (fn_006f5dbc(iVar9,&local_ab8), local_48 == '\x06')) {
              uVar7 = 1;
              uVar8 = uVar7;
            }
            iVar5 = 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        if ((local_28 & ~uVar8) != 0) {
          fn_00663868(*(undefined4 *)(iVar3 + 0x30),iVar3 + 0x34,uVar6,0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(iVar2 - iVar1));
    }
  }
  fn_00664a14(auStack_30);
  fn_00664a98(auStack_30);
  return uVar7;
}



undefined4 fn_00292868(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_aa8 [2673];
  byte local_37;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 0xa88;
    iVar1 = fn_006f5ddc(iVar3);
    if (iVar1 != 0) {
      fn_006f5dbc(iVar3,auStack_aa8);
      if (3 < local_37) {
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 1;
}



bool fn_00291da8(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = fn_00163940((int)*(short *)(param_1 + 6));
  bVar3 = iVar2 != 0;
  if (bVar3) {
    fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(param_1 + 6),
                 (int)*(short *)(param_1 + 8));
  }
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 != 0) {
    iVar2 = fn_00163940();
    if (iVar2 != 0) {
      fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),0x74,cVar1 * 10);
    }
    bVar3 = true;
  }
  return bVar3;
}


