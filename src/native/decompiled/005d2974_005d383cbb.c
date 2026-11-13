#include "005d2974_005d383cbb.h"



void fn_005d383c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_8f8 [2272];
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_005d3884;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005d3884:
  *(undefined1 *)((int)puVar2 + 0x902) = 0;
  fn_002e8c7c(auStack_8f8);
  fn_0017821c(puVar2 + 7,auStack_8f8,0x8d8);
  *(undefined1 *)(puVar2 + 0x240) = 0;
  fn_0036e29c(param_1);
  return;
}



void fn_005d3804(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_0084c4e8;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3b) = 0;
  return;
}



void fn_005d36c4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  bool bVar9;
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  
  fn_003979f0();
  if ((char)param_1[0x3b] != '\0') {
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x4c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008946d4) goto LAB_005d3724;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_005d3724:
    if (*(char *)(puVar1 + 7) == '\x01') {
      psVar8 = (short *)puVar1[5];
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1[0x39] + 0xc))
      ;
      uVar4 = fn_0024f870();
      uVar7 = 0;
      psVar5 = (short *)(iVar3 + 4);
      do {
        uVar7 = uVar7 + 1;
        psVar6 = psVar5 + 1;
        *psVar5 = *psVar8;
        bVar9 = psVar8[1] == 0;
        psVar5 = psVar6;
        psVar8 = psVar8 + 1;
      } while ((bVar9 || uVar7 < 0xb) && (!bVar9 && uVar7 != 10));
      *psVar6 = 0;
      fn_0024f108(iVar3,uVar4);
      fn_00231074(&local_1c,iVar3,0);
      fn_00147974(param_1[0x3a] + 0x20,local_1c);
      fn_005d2d78(param_1,auStack_40,0x12);
      (**(code **)(*param_1 + 0x13c))(param_1,0,0,auStack_40);
      fn_001588d4(&local_1c);
    }
    if (*(char *)(puVar1 + 7) != '\0') {
      *(undefined1 *)(param_1 + 0x3b) = 0;
    }
  }
  return;
}



undefined4 fn_005d34e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xe4) + 0xc);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
  fn_0020bbc4(auStack_20,uVar1);
  if (param_2 == 0) {
    iVar4 = fn_006bf34c(auStack_1c);
    if ((iVar4 != 0) && (iVar4 = fn_00154ac8(0x19), iVar4 == 0)) {
      return 0;
    }
    iVar4 = fn_006bf184(auStack_1c);
    if ((iVar4 != 0) && (iVar4 = fn_00154ac8(0x463), iVar4 == 0)) {
      return 0;
    }
  }
  else if (param_2 != 1) {
    if (param_2 == 2) {
      iVar4 = fn_0028b860(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
      if (iVar4 != 2) {
        return 0;
      }
    }
    else if (param_2 == 3) {
      iVar2 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
      if ((((1 < iVar2) ||
           (iVar2 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),0), iVar2 != iVar4)) &&
          (iVar2 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc)), iVar2 != iVar4)) &&
         ((iVar2 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc)), iVar2 != iVar4 &&
          ((iVar2 = fn_00154ac8(0x1b5), iVar2 == 0 ||
           (iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                                 *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc)),
           *(short *)(iVar2 + 0x1c) != 0x9d)))))) {
        iVar2 = 0;
        do {
          iVar3 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),iVar2);
          if (iVar3 == iVar4) {
            return 0;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 4);
        iVar2 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
        if (iVar2 != iVar4) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}


