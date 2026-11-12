#include "0055b948_0055c034.h"



undefined4 fn_0055befc(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_28 [4];
  
  if (*(uint *)(param_1 + 0x60) <= (uint)(*(int *)(param_1 + 0x58) + param_2)) {
    do {
      param_2 = param_2 - (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58));
      if (*(char *)(param_1 + 0x27) == '\0') {
        if (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\0') {
          if (*(code **)(param_1 + 0x30) == (code *)0x0) {
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
LAB_0055c024:
            *(undefined1 *)(param_1 + 0x51) = 1;
            return 0;
          }
          local_28[0] = *(undefined4 *)(param_1 + 0x54);
          iVar1 = (**(code **)(param_1 + 0x30))(local_28,*(undefined4 *)(param_1 + 0x34));
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
            goto LAB_0055c024;
          }
          *(undefined4 *)(param_1 + 0x54) = local_28[0];
          fn_0055c034(param_1);
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
        }
        else {
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      *param_3 = *param_3 + 1;
    } while (*(uint *)(param_1 + 0x60) <= (uint)(*(int *)(param_1 + 0x58) + param_2));
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
  return 1;
}



void fn_0055bee4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = fn_00172e2c();
  fn_00170704(iVar1 + 0x2c);
  uVar5 = 0;
  do {
    iVar4 = iVar1 + (uVar5 & 0xff) * 0xc;
    piVar3 = (int *)*(int *)(iVar4 + 4);
    while (piVar2 = piVar3, piVar2 != (int *)(iVar4 + 4)) {
      piVar3 = (int *)*piVar2;
      if (piVar2[5] == param_1) {
        fn_00150c1c(iVar4);
        *(undefined1 *)(piVar2 + 4) = 4;
        fn_0015dfc0(piVar2 + 2);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  fn_001707b4(iVar1 + 0x2c);
  return;
}



void fn_0055be4c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  fn_0015def0(param_1 + 0x70);
  piVar1 = *(int **)(param_1 + 0x88);
  if (*(int **)(param_1 + 0x88) != (int *)(param_1 + 0x88)) {
    do {
      piVar3 = piVar1 + -0x14;
      piVar2 = (int *)*piVar1;
      fn_0015def0(piVar1 + -0x11);
      fn_0017d90c(param_1 + 0x84,piVar1);
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)(piVar3);
        fn_0017f108(param_1 + 0x90,piVar3);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x88));
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



undefined4 fn_0055bc68(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_2c [3];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar1 = DAT_008c3cc4;
  uVar4 = 0;
  if (DAT_008c3cc4 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(param_1 + 0x24);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(param_1 + 0x14),&local_20);
    uVar4 = 0;
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x20) = local_20;
      *(uint *)(*(int *)(param_1 + 0x18) + 0x2c) = local_20;
      **(undefined1 **)(param_1 + 0x18) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_1c;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 8) = *(undefined1 *)(param_1 + 0x26);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = local_18;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20) = 0x800;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x24) = 0x800;
      iVar6 = *(int *)(param_1 + 0x18);
      iVar2 = fn_00169f1c(*(int *)(iVar6 + 0x10) + -1,*(undefined4 *)(iVar6 + 0x1c));
      *(int *)(param_1 + 0x3c) = iVar2;
      if (*(char *)(iVar6 + 8) == '\0') {
        iVar2 = 0x400;
      }
      else {
        iVar2 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0x1c) * iVar2;
      }
      *(int *)(iVar6 + 0x28) = iVar2;
      if (local_20 != 0) {
        uVar3 = local_20 & 1;
        uVar5 = (uint)(uVar3 == 1);
        if (uVar3 == 1) {
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        for (; uVar3 < local_20; uVar3 = uVar3 + 2) {
          iVar2 = uVar5 + 1;
          *(undefined4 *)(param_2 + uVar5 * 4 + 0x18) = 0;
          uVar5 = uVar5 + 2;
          *(undefined4 *)(param_2 + iVar2 * 4 + 0x18) = 0;
        }
      }
      iVar6 = *(int *)(param_1 + 0x18);
      iVar2 = fn_00169f1c(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x1c));
      *(int *)(param_1 + 0x40) = iVar2;
      *(int *)(param_1 + 0x4c) = *(int *)(iVar6 + 0xc) - iVar2 * *(int *)(iVar6 + 0x1c);
      if (*(code **)(param_1 + 0x30) == (code *)0x0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x60) = uVar4;
      }
      else {
        local_2c[0] = 0;
        iVar2 = (**(code **)(param_1 + 0x30))(local_2c,*(undefined4 *)(param_1 + 0x34));
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x54) = local_2c[0];
        fn_0055c034(param_1);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}



undefined4 fn_0055b948(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 local_bc [3];
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  char local_a7;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined1 auStack_4c [32];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  
  fn_00559e34(&local_b0);
  iVar3 = fn_00559b6c(param_1,&local_b0,&DAT_008f3520,0x4000);
  uVar7 = 0;
  if (iVar3 != 0) {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(param_1 + 0x24);
    iVar3 = fn_006e3f20(&local_b0,&local_a8);
    uVar7 = 0;
    if (iVar3 != 0) {
      puVar4 = (uint *)fn_001a2168(local_ac);
      uVar11 = *puVar4;
      *(uint *)(param_1 + 0x20) = uVar11;
      *(uint *)(*(int *)(param_1 + 0x18) + 0x2c) = uVar11;
      puVar10 = *(undefined1 **)(param_1 + 0x18);
      uVar2 = fn_001a03e0(local_a8);
      *puVar10 = uVar2;
      *(undefined4 *)(puVar10 + 4) = local_a4;
      puVar10[8] = local_a7 != '\0';
      *(undefined4 *)(puVar10 + 0xc) = local_a0;
      *(undefined4 *)(puVar10 + 0x10) = local_9c;
      *(undefined4 *)(puVar10 + 0x14) = local_64;
      *(undefined4 *)(puVar10 + 0x18) = local_60;
      *(undefined4 *)(puVar10 + 0x1c) = local_90;
      *(undefined4 *)(puVar10 + 0x20) = local_94;
      *(undefined4 *)(puVar10 + 0x28) = local_88;
      *(undefined4 *)(puVar10 + 0x24) = local_84;
      iVar3 = fn_006e40ac(&local_b0);
      if ((iVar3 != 0) && (iVar3 = fn_0055c278(param_1,&local_b0), iVar3 == 0)) {
        return 0;
      }
      cVar1 = **(char **)(param_1 + 0x18);
      *(char *)(param_1 + 0xb94) = cVar1;
      if (cVar1 == '\x03') {
        uVar5 = 0;
        if (uVar11 != 0) {
          do {
            iVar3 = fn_006e40cc(&local_b0,auStack_4c,&local_5c,uVar5);
            if (iVar3 == 0) {
              return 0;
            }
            iVar3 = param_1 + uVar5 * 0x2c;
            fn_00301a9c(iVar3 + 0xb96,auStack_4c,0x20);
            *(undefined2 *)(iVar3 + 0xbb6) = local_2c;
            *(undefined2 *)(iVar3 + 3000) = local_2a;
            *(undefined2 *)(iVar3 + 0xbba) = local_28;
            *(undefined2 *)(iVar3 + 0xbbc) = local_5c;
            *(undefined2 *)(iVar3 + 0xbbe) = local_5a;
            *(undefined2 *)(iVar3 + 0xbc0) = local_58;
            *(int *)(param_2 + 0x18 + uVar5 * 4) = iVar3 + 0xb96;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar11);
        }
      }
      else if (uVar11 != 0) {
        uVar5 = uVar11 & 1;
        uVar8 = (uint)(uVar5 == 1);
        if (uVar5 == 1) {
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        for (; uVar5 < uVar11; uVar5 = uVar5 + 2) {
          iVar3 = uVar8 + 1;
          *(undefined4 *)(param_2 + uVar8 * 4 + 0x18) = 0;
          uVar8 = uVar8 + 2;
          *(undefined4 *)(param_2 + iVar3 * 4 + 0x18) = 0;
        }
      }
      if (local_b0 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_001a2150(local_ac);
        iVar3 = *(int *)(iVar3 + 0x34);
        iVar6 = fn_006e3478(local_b0);
        iVar3 = iVar3 + iVar6 + 8;
      }
      *(int *)(param_1 + 0x44) = iVar3;
      iVar9 = *(int *)(param_1 + 0x18);
      uVar7 = fn_00169f1c(*(int *)(iVar9 + 0x10) + -1,*(undefined4 *)(iVar9 + 0x1c));
      *(undefined4 *)(param_1 + 0x3c) = uVar7;
      iVar6 = fn_00169f1c(*(undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 0x1c));
      *(int *)(param_1 + 0x40) = iVar6;
      *(uint *)(param_1 + 0x48) = uVar11 * *(int *)(iVar9 + 0x20) * iVar6 + iVar3;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),iVar3,0);
      if (*(code **)(param_1 + 0x30) == (code *)0x0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
      }
      else {
        local_bc[0] = 0;
        iVar3 = (**(code **)(param_1 + 0x30))(local_bc,*(undefined4 *)(param_1 + 0x34));
        if (iVar3 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x54) = local_bc[0];
        fn_0055c034(param_1);
      }
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
      iVar6 = *(int *)(param_1 + 0x18);
      iVar3 = fn_00169f1c(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(iVar6 + 0x1c));
      *(int *)(param_1 + 0x38) = iVar3;
      (**(code **)(**(int **)(param_1 + 0x14) + 0x40))
                (*(int **)(param_1 + 0x14),
                 *(int *)(iVar6 + 0x20) * *(int *)(param_1 + 0x20) * iVar3 +
                 *(int *)(param_1 + 0x44),0);
      uVar7 = 1;
    }
  }
  return uVar7;
}



void fn_0055c034(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined2 auStack_10c [124];
  
  iVar1 = fn_006e3e70(param_1,&local_118,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x5c) = local_118;
  *(undefined4 *)(param_1 + 0x60) = local_114;
  if (*(char *)(param_1 + 0xb94) == '\x03') {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      iVar6 = 0;
      puVar2 = &uStack_110;
      puVar3 = &uStack_10e;
      puVar4 = auStack_10c;
      do {
        iVar5 = param_1 + iVar6 * 6;
        *(undefined2 *)(iVar5 + 0xcfc) = *puVar2;
        iVar1 = iVar1 + -1;
        iVar6 = iVar6 + 1;
        *(undefined2 *)(iVar5 + 0xcfe) = *puVar3;
        *(undefined2 *)(iVar5 + 0xd00) = *puVar4;
        puVar2 = puVar2 + 3;
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 3;
      } while (iVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0xcf8) = local_118;
  }
  return;
}


