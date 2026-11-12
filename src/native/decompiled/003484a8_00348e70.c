#include "003484a8_00348e70.h"



void fn_00348e70(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00825418;
  return;
}



void fn_00348dfc(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  if (*(short *)(*(int *)(*param_2 + 0x30) + 0x58) != 0) {
    iVar3 = **(int **)(*(int *)(*param_2 + 0x30) + 0x54);
    uVar1 = fn_005e29c4(uVar1,0);
    cVar2 = *(char *)(iVar3 + 0x29);
    bVar4 = cVar2 == '\x01';
    if (bVar4) {
      cVar2 = '\x01';
    }
    if (!bVar4) {
      cVar2 = '\0';
    }
    fn_005e9048(uVar1,cVar2,*(undefined1 *)(iVar3 + 0x2c),*(undefined1 *)(iVar3 + 0x2d),
                 *(undefined1 *)(iVar3 + 0x2e),*(undefined1 *)(iVar3 + 0x28));
  }
  return;
}



undefined4 fn_00348dbc(int *param_1,undefined4 param_2,int param_3)

{
  param_1[1] = param_3;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  return 1;
}



void fn_00348d98(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  fn_00117984();
  fn_0010fa20();
  iVar1 = fn_006eb278();
  fn_005e18d4();
  iVar2 = *(int *)(iVar1 + 4);
  uVar3 = *(int *)(iVar2 + 0x17c) - *(int *)(iVar2 + 0x178);
  iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar5 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  iVar1 = 0;
  if (0 < iVar5) {
    do {
      iVar4 = iVar1 + 1;
      *(undefined1 *)(*(int *)(iVar2 + 0x178) + iVar1 * 0x1c) = 0;
      iVar1 = iVar4;
    } while (iVar4 < iVar5);
  }
  return;
}



undefined1 * fn_00348cc8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_20;
  
  local_20 = param_4;
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  iVar2 = fn_005e19a4(uVar1,0);
  fn_005eff40(iVar2,1);
  puVar3 = (undefined1 *)fn_00191218(param_2);
  iVar7 = 0;
  iVar6 = 0;
  piVar5 = (int *)puVar3;
  if (0 < (int)puVar3) {
    do {
      fn_001a0b34(&local_20,param_2,iVar6);
      iVar4 = fn_0019bc24(&local_20);
      if (iVar4 == 0) {
        iVar4 = fn_006eb2c0(&local_20);
        if (iVar4 != 0) {
          fn_005e42a8(iVar2 + 0xc,local_20 + 0x30);
        }
      }
      else {
        uVar1 = fn_005eff2c(iVar2,iVar7);
        fn_005e529c(uVar1,&local_20,*(undefined4 *)(param_1 + 4));
        iVar7 = iVar7 + 1;
      }
      iVar6 = iVar6 + 1;
      piVar5 = &local_20;
    } while (iVar6 < (int)puVar3);
  }
  return (undefined1 *)piVar5;
}



void fn_00348c4c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008253dc;
  fn_001008c4(param_1[0xe],(int)(param_1[0x12] - param_1[0xe]) >> 2,0);
  uVar1 = param_1[10];
  uVar2 = uVar1;
  if ((uint)param_1[0xb] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0xb]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xc] - uVar1) >> 2,0);
  fn_002b5260(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00348b68(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_r3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_00000000;
  undefined4 uVar6;
  
  uVar6 = 4;
  puVar1 = (undefined4 *)fn_002b5060();
  *puVar1 = &DAT_008253dc;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar4 = 4;
  puVar1[10] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  iVar4 = puVar1[10];
  iVar3 = iVar4 + 0x80;
  puVar1[0xb] = iVar4 + 0x10;
  puVar1[0xc] = iVar3;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  piVar5 = puVar1 + 0xe;
  *piVar5 = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  iVar4 = fn_00100fc6(4,0,iVar3,in_r3,in_stack_00000000,uVar6);
  puVar1[0x12] = iVar4 + 4;
  *piVar5 = iVar4;
  puVar1[0xf] = 0;
  puVar1[0x10] = iVar4;
  puVar1[0x11] = 4;
  *(undefined4 *)*piVar5 = 0xffffffff;
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x00348700) */
/* WARNING: Removing unreachable block (ram,0x00348610) */
/* WARNING: Removing unreachable block (ram,0x0034851c) */
/* WARNING: Removing unreachable block (ram,0x00348598) */
/* WARNING: Removing unreachable block (ram,0x00348688) */
/* WARNING: Removing unreachable block (ram,0x0034877c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00348520 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003484a8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000014;
  int local_30;
  
  puVar1 = (undefined4 *)fn_002e4414();
  *puVar1 = &DAT_00825398;
  puVar1[7] = in_stack_00000008;
  puVar1[8] = in_stack_0000000c;
  puVar1[9] = in_stack_0000000c;
  piVar4 = puVar1 + 10;
  *piVar4 = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0xb] = *piVar4 + 0x10;
  puVar1[0xc] = *piVar4 + 0x80;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0xd] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0xd];
  puVar1[0xe] = iVar3 + 0x10;
  puVar1[0xf] = iVar3 + 0x80;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x10] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x10];
  puVar1[0x11] = iVar3 + 0x10;
  puVar1[0x12] = iVar3 + 0x80;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x13] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x13];
  puVar1[0x14] = iVar3 + 0x10;
  puVar1[0x15] = iVar3 + 0x80;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x16] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x16];
  puVar1[0x17] = iVar3 + 0x10;
  puVar1[0x18] = iVar3 + 0x80;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  local_30 = 5;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x19] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x19];
  puVar1[0x1b] = iVar3 + 0x80;
  puVar1[0x1a] = iVar3 + 0x14;
  *(undefined1 *)(puVar1 + 0x1c) = in_stack_00000014;
  return puVar1;
}


