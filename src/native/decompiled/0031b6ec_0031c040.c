#include "0031b6ec_0031c040.h"



void fn_0031c040(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c070);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  }
  return;
}



void fn_0031c02c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x9c) + 0x8f7);
  iVar2 = fn_00689210(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"delivered_stamp");
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0031bc54) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff84 : 0x0031bc58 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_0031bb74(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 in_stack_00000000;
  undefined1 in_stack_00000004;
  int local_70;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [16];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_00822fd8;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar5 = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x300,0);
  iVar3 = 3;
  puVar1[6] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar5;
      puVar2[3] = uVar5;
      puVar2[4] = uVar5;
      puVar2[5] = uVar5;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 6;
  } while (iVar3 != 0);
  iVar3 = puVar1[6];
  puVar1[7] = iVar3 + 0x48;
  puVar1[8] = iVar3 + 0x300;
  piVar4 = puVar1 + 9;
  *piVar4 = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  local_70 = 0x10;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_70 != 0; local_70 = local_70 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[10] = *piVar4 + 0x40;
  puVar1[0xb] = *piVar4 + 0x80;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = in_stack_00000004;
  puVar1[0x12] = 0;
  iVar3 = fn_00168a24(puVar1 + 0x13,&DAT_0031bdf0,auStack_68,puVar1 + 0xb,in_stack_00000000);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_64);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_60);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_5c);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_58);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_54);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_50);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_4c);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_48);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_44);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_40);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_3c);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_38);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_34);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_30);
  iVar3 = fn_00168a24(iVar3 + 4,&DAT_0031bdf0,auStack_2c);
  *(undefined4 *)(iVar3 + 4) = DAT_00893330;
  *(undefined1 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0x428c0000;
  return iVar3 + -0x88;
}



void fn_0031ba5c(int param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  
  *(undefined1 *)(param_1 + 0x90) = param_2;
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar7 = iVar1 >> 0x1f;
  if (iVar1 / 0x18 + iVar7 != iVar7) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x18) + uVar3 * 0x18);
      fVar6 = (float)piVar2[3];
      fVar5 = (float)piVar2[1];
      iVar8 = piVar2[2];
      iVar7 = piVar2[4];
      iVar1 = piVar2[5];
      if (*(char *)(param_1 + 0x90) != '\0') {
        fVar5 = *(float *)(param_1 + 0x94);
        fVar6 = fVar5 * 0.5 - (float)piVar2[1] * 0.5;
      }
      iVar4 = *piVar2;
      *(float *)(iVar4 + 0x3c) = fVar5;
      *(int *)(iVar4 + 0x40) = iVar8;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      iVar4 = *piVar2;
      *(float *)(iVar4 + 0x1c) = fVar6;
      *(int *)(iVar4 + 0x20) = iVar7;
      *(int *)(iVar4 + 0x24) = iVar1;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      if (uVar3 == 0) {
        iVar4 = *(int *)(param_1 + 0x14);
        *(float *)(iVar4 + 0x3c) = fVar5;
        *(int *)(iVar4 + 0x40) = iVar8;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        iVar8 = *(int *)(param_1 + 0x14);
        *(float *)(iVar8 + 0x1c) = fVar6;
        *(int *)(iVar8 + 0x20) = iVar7;
        *(int *)(iVar8 + 0x24) = iVar1;
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x18));
  }
  return;
}



void fn_0031ba18(int param_1)

{
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x14))();
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x40) + 4))();
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



void fn_0031b7c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 0:
    fn_00147974(param_1 + 0x4c,param_3);
    fn_00190d50(**(undefined4 **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x4c));
    return;
  case 1:
    fn_00147974(param_1 + 0x50,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4),*(undefined4 *)(param_1 + 0x50));
    return;
  case 2:
    fn_00147974(param_1 + 0x54,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 8),*(undefined4 *)(param_1 + 0x54));
    return;
  case 3:
    fn_00147974(param_1 + 0x58,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc),*(undefined4 *)(param_1 + 0x58));
    return;
  case 4:
    fn_00147974(param_1 + 0x5c,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10),*(undefined4 *)(param_1 + 0x5c));
    return;
  case 5:
    fn_00147974(param_1 + 0x60,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x14),*(undefined4 *)(param_1 + 0x60));
    return;
  case 6:
    fn_00147974(param_1 + 100,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),*(undefined4 *)(param_1 + 100));
    return;
  case 7:
    fn_00147974(param_1 + 0x68,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c),*(undefined4 *)(param_1 + 0x68));
    return;
  case 8:
    fn_00147974(param_1 + 0x6c,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20),*(undefined4 *)(param_1 + 0x6c));
    return;
  case 9:
    fn_00147974(param_1 + 0x70,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x24),*(undefined4 *)(param_1 + 0x70));
    return;
  case 10:
    fn_00147974(param_1 + 0x74,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x28),*(undefined4 *)(param_1 + 0x74));
    return;
  case 0xb:
    fn_00147974(param_1 + 0x78,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x2c),*(undefined4 *)(param_1 + 0x78));
    return;
  case 0xc:
    fn_00147974(param_1 + 0x7c,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x30),*(undefined4 *)(param_1 + 0x7c));
    return;
  case 0xd:
    fn_00147974(param_1 + 0x80,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x34),*(undefined4 *)(param_1 + 0x80));
    return;
  case 0xe:
    fn_00147974(param_1 + 0x84,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x38),*(undefined4 *)(param_1 + 0x84));
    return;
  case 0xf:
    fn_00147974(param_1 + 0x88,param_3);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x3c),*(undefined4 *)(param_1 + 0x88));
    return;
  default:
    return;
  }
}



void fn_0031b78c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + param_2 * 4);
  fn_0031b6ec(iVar1,param_3,1);
  switch(param_3) {
  case 0:
    fn_00147974(iVar1 + 0x4c,param_4);
    fn_00190d50(**(undefined4 **)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x4c));
    return;
  case 1:
    fn_00147974(iVar1 + 0x50,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 4),*(undefined4 *)(iVar1 + 0x50));
    return;
  case 2:
    fn_00147974(iVar1 + 0x54,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 8),*(undefined4 *)(iVar1 + 0x54));
    return;
  case 3:
    fn_00147974(iVar1 + 0x58,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0xc),*(undefined4 *)(iVar1 + 0x58));
    return;
  case 4:
    fn_00147974(iVar1 + 0x5c,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x10),*(undefined4 *)(iVar1 + 0x5c));
    return;
  case 5:
    fn_00147974(iVar1 + 0x60,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x14),*(undefined4 *)(iVar1 + 0x60));
    return;
  case 6:
    fn_00147974(iVar1 + 100,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x18),*(undefined4 *)(iVar1 + 100));
    return;
  case 7:
    fn_00147974(iVar1 + 0x68,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x1c),*(undefined4 *)(iVar1 + 0x68));
    return;
  case 8:
    fn_00147974(iVar1 + 0x6c,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x20),*(undefined4 *)(iVar1 + 0x6c));
    return;
  case 9:
    fn_00147974(iVar1 + 0x70,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x24),*(undefined4 *)(iVar1 + 0x70));
    return;
  case 10:
    fn_00147974(iVar1 + 0x74,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x28),*(undefined4 *)(iVar1 + 0x74));
    return;
  case 0xb:
    fn_00147974(iVar1 + 0x78,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x2c),*(undefined4 *)(iVar1 + 0x78));
    return;
  case 0xc:
    fn_00147974(iVar1 + 0x7c,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x30),*(undefined4 *)(iVar1 + 0x7c));
    return;
  case 0xd:
    fn_00147974(iVar1 + 0x80,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x34),*(undefined4 *)(iVar1 + 0x80));
    return;
  case 0xe:
    fn_00147974(iVar1 + 0x84,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x38),*(undefined4 *)(iVar1 + 0x84));
    return;
  case 0xf:
    fn_00147974(iVar1 + 0x88,param_4);
    fn_00190d50(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x3c),*(undefined4 *)(iVar1 + 0x88));
    return;
  default:
    return;
  }
}



void fn_0031b6ec(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x48) & ~(&DAT_007c68f8)[param_2];
  }
  else {
    uVar4 = (&DAT_007c68f8)[param_2] | *(uint *)(param_1 + 0x48);
  }
  iVar2 = 0;
  do {
    puVar1 = &DAT_007c68f8 + iVar2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x24) + iVar2 * 4);
    iVar2 = iVar2 + 1;
    *(byte *)(iVar3 + 0x44) = (*puVar1 & uVar4) != 0 | *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (iVar2 < 0x10);
  *(uint *)(param_1 + 0x48) = uVar4;
  return;
}


