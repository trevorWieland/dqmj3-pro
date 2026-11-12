#include "002929f4_00292f70.h"



void fn_00292f70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_30 [3];
  
  iVar1 = fn_00163940();
  if (iVar1 != 0 && param_2 != 0) {
    uVar2 = fn_0016a82c(param_1);
    uVar3 = fn_00100b58();
    puVar7 = &DAT_008f9ce8;
    puVar6 = &DAT_008f9cf4;
    if (uVar3 != 0) {
      puVar4 = local_30 + 1;
      if (0x20 < uVar3) {
        puVar4 = local_30;
      }
      local_30[0] = uVar3;
      local_30[1] = 0x20;
      uVar8 = *puVar4;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar8);
      }
      if (uVar8 != 0) {
        puVar7 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        puVar7[2] = uVar3;
        puVar5 = (undefined2 *)((int)puVar7 + uVar3 * 2 + 0xc);
        puVar7[1] = uVar8;
        *puVar7 = 0;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      puVar6 = puVar7 + 3;
    }
    fn_00301a9c(puVar6,uVar2,uVar3 << 1);
    fn_0015b0dc(puVar6);
    fn_0015b0f8(param_2);
    uVar2 = fn_0022f584((char *)&DAT_0029310c,0);
    fn_001003e0(param_3,uVar2);
    if (puVar6 != &DAT_008f9cf4) {
      iVar1 = puVar6[-3];
      if ((iVar1 == -1) || ((puVar6 + -3 != &DAT_008f9ce8 && (puVar6[-3] = iVar1 + -1, iVar1 == 0)))
         ) {
        fn_002feef8(puVar6 + -3,puVar6[-2] + 8,0);
        return;
      }
    }
  }
  return;
}



bool fn_00292f34(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0024720c();
  if (*(char *)(param_1 + 0xa70) == '\0') {
    iVar2 = fn_00247138(param_1 + 0x154,4);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa84);
  }
  return iVar2 < iVar1;
}



undefined4 fn_00292f20(void)

{
  return *(undefined4 *)(DAT_00897820 + 0x28);
}



bool fn_00292df8(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int local_1598;
  undefined4 local_1594;
  undefined4 local_1590;
  undefined4 local_158c;
  undefined4 local_1588;
  undefined4 local_1584;
  undefined4 local_1580;
  undefined4 local_157c;
  undefined4 local_1568;
  undefined4 uStack_1564;
  undefined4 local_1560;
  undefined4 uStack_155c;
  undefined1 auStack_1554 [4];
  undefined1 auStack_1550 [5424];
  
  fn_00664a8c(auStack_1554);
  fn_006649e0(auStack_1554);
  iVar1 = fn_00662bd0();
  iVar2 = fn_006f5d6c(*(undefined4 *)(iVar1 + 0x30),0);
  bVar3 = iVar2 + 1U < DAT_00896aac;
  if (bVar3) {
    fn_00662a34(auStack_1550);
    local_1594 = 0;
    local_1590 = 0;
    local_158c = 0;
    local_1588 = 0;
    local_1584 = 0;
    local_1580 = 0;
    local_157c = 0;
    fn_00114248(&local_1560);
    local_1568 = local_1560;
    uStack_1564 = uStack_155c;
    uVar4 = fn_00691514(&local_1568);
    fn_001003e0(&local_1594,param_1 + 4);
    local_1598 = (uint)*(ushort *)(param_1 + 0x5c) << 0x10;
    *(undefined8 *)(param_1 + 0x8e0) = uVar4;
    *(int *)(param_1 + 0x8e8) = local_1598;
    *(undefined4 *)(param_1 + 0x8ec) = local_1594;
    *(undefined4 *)(param_1 + 0x8f0) = local_1590;
    *(undefined4 *)(param_1 + 0x8f4) = local_158c;
    *(undefined4 *)(param_1 + 0x8f8) = local_1588;
    *(undefined4 *)(param_1 + 0x8fc) = local_1584;
    *(undefined4 *)(param_1 + 0x900) = local_1580;
    *(undefined4 *)(param_1 + 0x904) = local_157c;
    fn_006647e8(auStack_1550,param_1);
    fn_00663de0((undefined4 *)(iVar1 + 0x30),auStack_1550);
    fn_006636c8(*(undefined4 *)(iVar1 + 0x30),iVar1 + 0x40,0);
  }
  fn_00664a14(auStack_1554);
  fn_00664a98(auStack_1554);
  return bVar3;
}



/* WARNING: Removing unreachable block (ram,0x00292b34) */
/* WARNING: Removing unreachable block (ram,0x00292b38) */
/* WARNING: Removing unreachable block (ram,0x00292b3c) */
/* WARNING: Removing unreachable block (ram,0x00292b40) */
/* WARNING: Removing unreachable block (ram,0x00292b44) */
/* WARNING: Removing unreachable block (ram,0x00292cd8) */
/* WARNING: Removing unreachable block (ram,0x00292cdc) */
/* WARNING: Removing unreachable block (ram,0x00292ce0) */
/* WARNING: Removing unreachable block (ram,0x00292ce4) */
/* WARNING: Removing unreachable block (ram,0x00292ce8) */

void fn_002929f4(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint local_30;
  undefined1 auStack_2c [4];
  int local_28;
  
  piVar10 = (int *)0x0;
  piVar11 = (int *)0x0;
  uVar12 = 0;
  piVar4 = (int *)0x0;
  local_28 = param_1;
  do {
    iVar13 = param_1 + 0x154 + uVar12 * 0xf0;
    if (piVar4 == piVar11) {
      uVar1 = (int)piVar4 - (int)piVar10 >> 2;
      if (uVar1 < (uint)((int)piVar11 - (int)piVar10 >> 2)) {
        piVar6 = piVar4 + -1;
        if (piVar4 != (int *)0x0) {
          *piVar4 = piVar4[-1];
        }
        piVar2 = piVar4 + 1;
        piVar3 = piVar4;
        if (piVar4 < piVar6) {
          if (0 < (int)piVar6 - (int)piVar4) {
            iVar14 = (int)piVar6 - (int)piVar4 >> 2;
            iVar9 = 0;
            do {
              iVar14 = iVar14 + -1;
              piVar4[iVar9 + -1] = piVar6[iVar9 + -1];
              iVar9 = iVar9 + -1;
            } while (iVar14 != 0);
          }
        }
        else {
          while (piVar4 != piVar6) {
            piVar6 = piVar6 + -1;
            piVar3[-1] = *piVar6;
            piVar3 = piVar3 + -1;
          }
        }
        *piVar4 = iVar13;
      }
      else {
        uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        local_30 = uVar1 + 0x20;
        if (uVar1 + 0x20 <= uVar7) {
          local_30 = uVar7;
        }
        piVar3 = (int *)fn_00100fc6(local_30 << 2,0);
        piVar6 = piVar3;
        for (piVar2 = piVar10; piVar2 != piVar4; piVar2 = piVar2 + 1) {
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar2;
          }
          piVar6 = piVar6 + 1;
        }
        piVar2 = (int *)(((int)piVar4 - (int)piVar10 & 0xfffffffcU) + (int)piVar3);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar13;
        }
        piVar2 = piVar10;
        if (piVar4 < piVar10) {
          do {
            piVar2 = piVar2 + 1;
          } while (piVar2 != piVar4);
        }
        fn_001008c4(piVar10,(int)piVar11 - (int)piVar10 >> 2,0);
        piVar2 = piVar3 + ((int)piVar4 - (int)piVar10 >> 2) + 1;
        piVar11 = piVar3 + local_30;
        piVar10 = piVar3;
      }
    }
    else {
      piVar2 = piVar4 + 1;
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar13;
      }
    }
    uVar12 = uVar12 + 1;
    piVar4 = piVar2;
  } while (uVar12 < 4);
  uVar12 = 0;
  iVar13 = local_28 + 0x518;
  do {
    iVar14 = iVar13 + uVar12 * 0xf0;
    if (piVar2 == piVar11) {
      uVar1 = (int)piVar2 - (int)piVar10 >> 2;
      if (uVar1 < (uint)((int)piVar11 - (int)piVar10 >> 2)) {
        piVar6 = piVar2 + -1;
        if (piVar2 != (int *)0x0) {
          *piVar2 = piVar2[-1];
        }
        piVar4 = piVar2 + 1;
        piVar3 = piVar2;
        if (piVar2 < piVar6) {
          if (0 < (int)piVar6 - (int)piVar2) {
            iVar9 = (int)piVar6 - (int)piVar2 >> 2;
            iVar8 = 0;
            do {
              iVar9 = iVar9 + -1;
              piVar2[iVar8 + -1] = piVar6[iVar8 + -1];
              iVar8 = iVar8 + -1;
            } while (iVar9 != 0);
          }
        }
        else {
          while (piVar2 != piVar6) {
            piVar6 = piVar6 + -1;
            piVar3[-1] = *piVar6;
            piVar3 = piVar3 + -1;
          }
        }
        *piVar2 = iVar14;
      }
      else {
        uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        local_30 = uVar1 + 0x20;
        if (uVar1 + 0x20 <= uVar7) {
          local_30 = uVar7;
        }
        piVar3 = (int *)fn_00100fc6(local_30 << 2,0);
        piVar6 = piVar3;
        for (piVar4 = piVar10; piVar4 != piVar2; piVar4 = piVar4 + 1) {
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar4;
          }
          piVar6 = piVar6 + 1;
        }
        piVar4 = (int *)(((int)piVar2 - (int)piVar10 & 0xfffffffcU) + (int)piVar3);
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar14;
        }
        piVar4 = piVar10;
        if (piVar2 < piVar10) {
          do {
            piVar4 = piVar4 + 1;
          } while (piVar4 != piVar2);
        }
        fn_001008c4(piVar10,(int)piVar11 - (int)piVar10 >> 2,0);
        piVar4 = piVar3 + ((int)piVar2 - (int)piVar10 >> 2) + 1;
        piVar11 = piVar3 + local_30;
        piVar10 = piVar3;
      }
    }
    else {
      piVar4 = piVar2 + 1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar14;
      }
    }
    uVar12 = uVar12 + 1;
    piVar2 = piVar4;
  } while (uVar12 < 4);
  uVar12 = 0;
  if ((int)piVar4 - (int)piVar10 >> 2 != 0) {
    do {
      iVar14 = piVar10[uVar12];
      fn_0020bbc4(&local_30,iVar14);
      iVar13 = fn_006bf198(auStack_2c);
      if (iVar13 != 0) {
        uVar5 = fn_0024e350(iVar14);
        fn_0020b8b8(&local_30);
        fn_0024f108(iVar14,uVar5);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)((int)piVar4 - (int)piVar10 >> 2));
  }
  piVar2 = piVar10;
  if (piVar4 < piVar10) {
    do {
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar4);
  }
  fn_002feef8(piVar10,(int)piVar11 - (int)piVar10 >> 2,0);
  return;
}


