#include "007b91e4_007b97a4.h"



/* WARNING: Control flow encountered bad instruction data */

undefined8 fn_007b97a4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 0x17;
  uVar3 = param_1 << 8;
  if (uVar1 != 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if ((uint)(param_1 << 1) < 0x7f000000) {
      return 0;
    }
  }
  else {
    uVar2 = -uVar1 + 0xbe;
    if (uVar1 < 0xbf) {
      if (uVar2 < 0x20) {
        uVar1 = uVar3 << (0x20 - uVar2 & 0xff);
      }
      else {
        uVar1 = uVar3 >> (-uVar1 + 0x9e & 0xff);
      }
      return CONCAT44(uVar3 >> (uVar2 & 0xff),uVar1);
    }
  }
  fn_0019d5b0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



undefined8 fn_007b975c(uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool in_CY;
  
  uVar2 = -param_4 & 0xff;
  uVar1 = param_2 << (param_4 + 0x20U & 0xff) | param_1 >> uVar2;
  iVar3 = (param_2 >> (-param_4 & 0xffU)) + ((0xc32 - param_4) + param_3 * 0x800) * 0x100000;
  if ((uVar2 != 0 || !in_CY) && (uVar2 == 0 || !(bool)((byte)(param_1 >> uVar2 - 1) & 1))) {
    return CONCAT44(iVar3,uVar1);
  }
  uVar2 = uVar1 + 1;
  if ((param_1 << (param_4 + 0x20U & 0xff) & 0x7fffffff) == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return CONCAT44(iVar3 + (uint)(0xfffffffe < uVar1),uVar2);
}



void fn_007b9478(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_34;
  uint local_30;
  undefined4 *local_2c [2];
  
  iVar6 = *param_2;
  puVar7 = &DAT_008f9ce8;
  uVar4 = *(int *)(iVar6 + -4) * 2 >> 1;
  if (uVar4 == 0) {
    local_2c[0] = &DAT_008f9cf4;
  }
  else {
    puVar2 = &local_30;
    if (0x20 < uVar4) {
      puVar2 = &local_34;
    }
    local_34 = uVar4;
    local_30 = 0x20;
    uVar5 = *puVar2;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,uVar5);
    }
    local_2c[0] = puVar7;
    if (uVar5 != 0) {
      local_2c[0] = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (local_2c[0] != (undefined4 *)0x0) {
        *local_2c[0] = 0;
        local_2c[0][1] = 0;
        local_2c[0][2] = 0;
      }
      puVar3 = (undefined2 *)((int)local_2c[0] + uVar4 * 2 + 0xc);
      *local_2c[0] = 0;
      local_2c[0][1] = uVar5;
      local_2c[0][2] = uVar4;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    local_2c[0] = local_2c[0] + 3;
  }
  fn_00301a9c(local_2c[0],iVar6,uVar4 << 1);
  uVar4 = local_2c[0][-1];
  uVar5 = *(uint *)(*param_3 + -4);
  if (((uint)local_2c[0][-2] < uVar4 + uVar5) || (1 < local_2c[0][-3] + 1)) {
    if (-uVar5 - 0xf < uVar4) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar4,-uVar5 - 0xf);
    }
    local_34 = 0;
    local_30 = uVar5;
    fn_00177c88(local_2c,local_2c[0][-1],0,*param_3,*(undefined4 *)(*param_3 + -4));
  }
  else {
    fn_00301a9c((int)local_2c[0] + uVar4 * 2,*param_3,(uVar5 + 1) * 2);
    local_2c[0][-1] = uVar4 + uVar5;
  }
  if (local_2c[0][-3] == -1) {
    uVar4 = local_2c[0][-1];
    if (0xfffffff1 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
    }
    if (uVar4 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      puVar7[1] = uVar4;
      puVar3 = (undefined2 *)((int)puVar7 + uVar4 * 2 + 0xc);
      *puVar7 = 0;
      puVar7[2] = uVar4;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    *param_1 = puVar7 + 3;
    fn_00301a9c(puVar7 + 3,local_2c[0],uVar4 << 1);
  }
  else {
    *param_1 = local_2c[0];
    piVar1 = local_2c[0] + -3;
    if (piVar1 != &DAT_008f9ce8) {
      *piVar1 = *piVar1 + 1;
    }
  }
  fn_001588d4(local_2c);
  return;
}



undefined1 * fn_007b9314(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int extraout_r1;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_58 [52];
  
  if (param_1 == param_2 || param_2 == param_3) {
    return param_1;
  }
  iVar1 = ((int)param_2 - (int)param_1) / 0x34;
  iVar2 = iVar1;
  iVar8 = ((int)param_3 - (int)param_1) / 0x34;
  while (iVar3 = iVar2, iVar3 != 0) {
    fn_00300f74(iVar8,iVar3);
    iVar2 = extraout_r1;
    iVar8 = iVar3;
  }
  puVar4 = (undefined1 *)0x0;
  while (iVar8 != 0) {
    iVar8 = iVar8 + -1;
    puVar6 = param_1 + iVar8 * 0x34;
    fn_00656538(auStack_58,puVar6);
    puVar4 = puVar6;
    puVar7 = puVar6 + iVar1 * 0x34;
    while (puVar5 = puVar7, puVar5 != puVar6) {
      puVar4[4] = puVar5[4];
      puVar4[5] = puVar5[5];
      puVar4[6] = puVar5[6];
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar5 + 8);
      fn_006f94f4(puVar4 + 0xc,puVar5 + 0xc);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar5 + 0xc);
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(puVar5 + 0xc);
      iVar2 = ((int)param_3 - (int)puVar5) / 0x34;
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(puVar5 + 0xc);
      *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(puVar5 + 0xc);
      puVar4[0x16] = puVar5[0x16];
      puVar7 = puVar5;
      if (iVar1 < iVar2) {
        puVar7 = puVar5 + iVar1 * 0x34;
      }
      uVar9 = *(undefined4 *)(puVar5 + 0x1c);
      uVar10 = *(undefined4 *)(puVar5 + 0x20);
      uVar11 = *(undefined4 *)(puVar5 + 0x24);
      uVar12 = *(undefined4 *)(puVar5 + 0x28);
      uVar13 = *(undefined4 *)(puVar5 + 0x2c);
      uVar14 = *(undefined4 *)(puVar5 + 0x30);
      *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)(puVar5 + 0x18);
      *(undefined4 *)(puVar4 + 0x1c) = uVar9;
      *(undefined4 *)(puVar4 + 0x20) = uVar10;
      *(undefined4 *)(puVar4 + 0x24) = uVar11;
      *(undefined4 *)(puVar4 + 0x28) = uVar12;
      *(undefined4 *)(puVar4 + 0x2c) = uVar13;
      *(undefined4 *)(puVar4 + 0x30) = uVar14;
      puVar4 = puVar5;
      if (iVar2 <= iVar1) {
        puVar7 = param_1 + (iVar1 - iVar2) * 0x34;
      }
    }
    fn_006565e0(puVar4,auStack_58);
    puVar4 = auStack_58;
  }
  return puVar4;
}



void fn_007b91e4(int param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  while (param_1 != param_2 && param_3 != param_4) {
    iVar1 = fn_006f0908(&param_6,param_3,param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_5 + 4) = *(undefined1 *)(param_1 + 4);
      *(undefined1 *)(param_5 + 5) = *(undefined1 *)(param_1 + 5);
      *(undefined1 *)(param_5 + 6) = *(undefined1 *)(param_1 + 6);
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_1 + 8);
      fn_006f94f4(param_5 + 0xc,param_1 + 0xc);
      *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      puVar3 = (undefined4 *)(param_1 + 0x18);
      *(undefined2 *)(param_5 + 0xc) = *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(param_5 + 0xc) = *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(param_5 + 0xc) = *(undefined2 *)(param_1 + 0xc);
      *(undefined1 *)(param_5 + 0x16) = *(undefined1 *)(param_1 + 0x16);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x24);
      uVar6 = *(undefined4 *)(param_1 + 0x28);
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      param_1 = param_1 + 0x34;
      *(undefined4 *)(param_5 + 0x18) = *puVar3;
      *(undefined4 *)(param_5 + 0x1c) = uVar2;
      *(undefined4 *)(param_5 + 0x20) = uVar4;
      *(undefined4 *)(param_5 + 0x24) = uVar5;
      *(undefined4 *)(param_5 + 0x28) = uVar6;
      *(undefined4 *)(param_5 + 0x2c) = uVar7;
      *(undefined4 *)(param_5 + 0x30) = uVar8;
    }
    else {
      *(undefined1 *)(param_5 + 4) = *(undefined1 *)(param_3 + 4);
      *(undefined1 *)(param_5 + 5) = *(undefined1 *)(param_3 + 5);
      *(undefined1 *)(param_5 + 6) = *(undefined1 *)(param_3 + 6);
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_3 + 8);
      fn_006f94f4(param_5 + 0xc,param_3 + 0xc);
      *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      puVar3 = (undefined4 *)(param_3 + 0x18);
      *(undefined2 *)(param_5 + 0xc) = *(undefined2 *)(param_3 + 0xc);
      *(undefined2 *)(param_5 + 0xc) = *(undefined2 *)(param_3 + 0xc);
      *(undefined2 *)(param_5 + 0xc) = *(undefined2 *)(param_3 + 0xc);
      *(undefined1 *)(param_5 + 0x16) = *(undefined1 *)(param_3 + 0x16);
      uVar2 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      uVar8 = *(undefined4 *)(param_3 + 0x30);
      param_3 = param_3 + 0x34;
      *(undefined4 *)(param_5 + 0x18) = *puVar3;
      *(undefined4 *)(param_5 + 0x1c) = uVar2;
      *(undefined4 *)(param_5 + 0x20) = uVar4;
      *(undefined4 *)(param_5 + 0x24) = uVar5;
      *(undefined4 *)(param_5 + 0x28) = uVar6;
      *(undefined4 *)(param_5 + 0x2c) = uVar7;
      *(undefined4 *)(param_5 + 0x30) = uVar8;
    }
    param_5 = param_5 + 0x34;
  }
  uVar2 = fn_007b8a24(param_1,param_2,param_5);
  fn_007b8a24(param_3,param_4,uVar2);
  return;
}


