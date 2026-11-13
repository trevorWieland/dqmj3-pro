#include "00438548_0043a4c4.h"



void fn_0043a4c4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c [2];
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00894c6c) goto LAB_0043a524;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_0043a524:
    local_30 = fn_0022f584((&DAT_007c70a4)[param_2 * 2],0);
    uVar3 = fn_00100b58();
    local_38 = &DAT_008f9cf4;
    if (uVar3 != 0) {
      puVar5 = local_2c;
      if (0x20 < uVar3) {
        puVar5 = &local_34;
      }
      local_34 = uVar3;
      local_2c[0] = 0x20;
      uVar7 = *puVar5;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
      }
      if (uVar7 == 0) {
        local_38 = &DAT_008f9ce8;
      }
      else {
        local_38 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (local_38 != (undefined4 *)0x0) {
          *local_38 = 0;
          local_38[1] = 0;
          local_38[2] = 0;
        }
        puVar6 = (undefined2 *)((int)local_38 + uVar3 * 2 + 0xc);
        *local_38 = 0;
        local_38[1] = uVar7;
        local_38[2] = uVar3;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      local_38 = local_38 + 3;
    }
    fn_00301a9c(local_38,local_30,uVar3 << 1);
    local_3c = &DAT_008f9cf4;
    if (*(char *)(puVar1 + 0x281) == '\0') {
      uVar4 = fn_0022eefc((int)*(short *)(&DAT_007c70a8 + param_2 * 8),0);
      fn_00147974(&local_3c,uVar4);
    }
    else {
      uVar4 = fn_0022eefc((int)*(short *)(&DAT_007c70b8 + param_2 * 8),0);
      fn_00147974(&local_3c,uVar4);
    }
    fn_00321118(*(undefined4 *)(param_1 + 0x58),local_38,local_3c);
    fn_00689bd0(param_1,0x49,0);
    fn_001588d4(&local_3c);
    fn_001588d4(&local_38);
  }
  return;
}



void fn_00438c68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = fn_0022f750((char *)&DAT_00438dc8);
  fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
  fn_0036eb98(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  iVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar3 = fn_0036e9e4(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(iVar6 + iVar4 * 4) = uVar3;
    local_30 = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = *(undefined4 *)(param_1 + 0x6c);
    iVar8 = *(int *)(param_1 + 0xb4);
    uVar3 = fn_0036eaa8(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    iVar6 = iVar4 + 1;
    *(undefined4 *)(iVar8 + iVar4 * 4) = uVar3;
    iVar4 = iVar6;
  } while (iVar6 < 4);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xff;
    iVar4 = iVar1 + uVar5 * 0xf0;
    iVar6 = iVar4 + 0x16c;
    if ((iVar6 != 0) && (iVar4 = fn_001a46f4((int)*(short *)(iVar4 + 0x188)), iVar4 != 0)) {
      if (uVar7 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2)) {
        local_30 = 1;
        uStack_2c = 0;
        local_28 = 0;
        fn_002b415c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar7 * 4),iVar6,0);
        local_30 = 0;
        fn_0036e68c(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar7 * 4),iVar6,2,0);
        iVar4 = fn_0020bbc4(&local_30,iVar6);
        if (iVar4 != 0) {
          iVar4 = iVar4 + 4;
        }
        uVar2 = fn_006bfe90(iVar4);
        fn_001cab7c(uVar2);
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}



void fn_00438c48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_0039c400();
  fn_00438b90(param_1);
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = fn_0022f750("watasu");
  fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
  fn_0036eb98(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  iVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar3 = fn_0036e9e4(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(iVar6 + iVar4 * 4) = uVar3;
    uStack_30 = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = *(undefined4 *)(param_1 + 0x6c);
    iVar8 = *(int *)(param_1 + 0xb4);
    uVar3 = fn_0036eaa8(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    iVar6 = iVar4 + 1;
    *(undefined4 *)(iVar8 + iVar4 * 4) = uVar3;
    iVar4 = iVar6;
  } while (iVar6 < 4);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xff;
    iVar4 = iVar1 + uVar5 * 0xf0;
    iVar6 = iVar4 + 0x16c;
    if ((iVar6 != 0) && (iVar4 = fn_001a46f4((int)*(short *)(iVar4 + 0x188)), iVar4 != 0)) {
      if (uVar7 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2)) {
        uStack_30 = 1;
        uStack_2c = 0;
        uStack_28 = 0;
        fn_002b415c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar7 * 4),iVar6,0);
        uStack_30 = 0;
        fn_0036e68c(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar7 * 4),iVar6,2,0);
        iVar4 = fn_0020bbc4(&uStack_30,iVar6);
        if (iVar4 != 0) {
          iVar4 = iVar4 + 4;
        }
        uVar2 = fn_006bfe90(iVar4);
        fn_001cab7c(uVar2);
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}



void fn_00438548(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38 [5];
  
  iVar1 = *(int *)(param_1 + 0x98) + 0x2a0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    uVar3 = *(undefined4 *)(iVar2 + 0x2d4);
    local_40 = *(undefined4 *)(iVar2 + 0x2dc);
    uStack_3c = *(undefined4 *)(iVar2 + 0x2e0);
    local_38[0] = 0;
    local_38[2] = 0;
    local_44 = (short)*(undefined4 *)(iVar2 + 0x2d8);
    local_38[1] = 0;
    local_38[3] = 0;
    local_38[4] = param_1;
    iVar2 = fn_00203ef8((int)local_44);
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        if ((*(short *)((int)local_38 + iVar2 * 2 + -8) != 0) &&
           (iVar4 = fn_00203eb8(), iVar4 != 0)) {
          iVar5 = 0;
          iVar6 = 0x15d;
          do {
            iVar5 = iVar5 + 1;
            if (iVar6 == iVar4) {
              if (iVar5 != 0) goto LAB_00438674;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x167);
          iVar6 = 0x16e;
          do {
            iVar5 = iVar5 + 1;
            if (iVar6 == iVar4) {
              if (iVar5 != 0) goto LAB_00438674;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x176);
          iVar6 = 0x167;
          do {
            iVar5 = iVar5 + 1;
            if (iVar6 == iVar4) {
              if (iVar5 != 0) {
                if (iVar5 == 0x14) {
                  iVar5 = 0x15;
                }
                else if (iVar5 == 0x15) {
                  iVar5 = 0x14;
                }
                goto LAB_00438674;
              }
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x16e);
          iVar5 = 0;
LAB_00438674:
          local_38[iVar2] = iVar5;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      iVar2 = fn_00203eb8((int)local_44);
      if (iVar2 != 0) {
        local_38[3] = fn_00438724(local_38[4],iVar2);
      }
    }
    iVar2 = 1;
    do {
      iVar4 = local_38[0];
      if (local_38[0] != iVar2) {
        iVar4 = local_38[1];
      }
      if (local_38[0] == iVar2 || iVar4 == iVar2) {
LAB_004386d4:
        fn_00437f30(local_38[4],*(undefined1 *)(iVar1 + iVar2),iVar2,1,uVar3);
      }
      else {
        iVar4 = local_38[2];
        if (local_38[2] != iVar2) {
          iVar4 = local_38[3];
        }
        if (local_38[2] == iVar2 || iVar4 == iVar2) goto LAB_004386d4;
        fn_00437f30(local_38[4],*(undefined1 *)(iVar1 + iVar2),iVar2,0,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1a);
  }
  return;
}


