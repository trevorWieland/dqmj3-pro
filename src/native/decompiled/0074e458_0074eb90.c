#include "0074e458_0074eb90.h"



void fn_0074eb90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_20 [3];
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_14[0] = 0x80010004;
    uVar3 = fn_004b8d4c(local_20,local_14);
    fn_0074e3bc(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0x98);
  if (*(char *)(param_1 + 0x184) == '\0') {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0xc))
                      (*(int **)(param_1 + 0x70),param_1 + 0x98,param_1 + 0x110,param_1 + 0x120);
  }
  else {
    local_20[0] = param_1 + 0x14c;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0x14))
                      (*(int **)(param_1 + 0x70),param_1 + 0x98,param_1 + 0x110,param_1 + 0x120);
  }
  if (iVar1 == 0) {
    local_14[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(local_20,local_14);
    fn_0074e3bc(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xdc));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_0074ecf0;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0074ecec;
  }
  fn_00479b1c(param_1,param_1 + 0x98,puVar2);
  return;
}



void fn_0074e830(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  wchar16 *pwVar5;
  int *piVar6;
  int local_40;
  int local_3c;
  int local_38 [3];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_38[1] = 0x80010004;
    uVar4 = fn_004b8d4c(&local_40,local_38 + 1);
    fn_0074e3bc(param_1,uVar4);
    return;
  }
  iVar1 = fn_006d380c(param_1 + 0x128,L"http://");
  if ((iVar1 == 0) || (iVar1 = fn_006d380c(param_1 + 0x128,L"https://"), iVar1 == 0)) {
    fn_004b637c(auStack_28,param_1 + 0x128);
  }
  else {
    if (*(char *)(param_1 + 0x78) == '\0') {
      pwVar5 = L"http://";
    }
    else {
      pwVar5 = L"https://";
    }
    fn_004be9d4(auStack_28,pwVar5,param_1 + 0x128);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  local_3c = iVar1;
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar2 = fn_00169f1c(*(undefined4 *)(param_1 + 0x13c),*(int *)(param_1 + 0x84));
    piVar6 = local_38;
    if (iVar2 * 1000 < iVar1) {
      piVar6 = &local_3c;
    }
    local_38[0] = iVar2 * 1000;
    iVar1 = *piVar6;
  }
  fn_004b41a8(local_38 + 2,iVar1);
  local_40 = param_1 + 0x68;
  *(int *)(param_1 + 0xf0) = local_38[2];
  *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
  local_38[0] = *(int *)(param_1 + 0x90);
  local_3c = 0;
  fn_004a2204(auStack_20,*(undefined4 *)(param_1 + 0x74),param_1 + 0x98,auStack_28);
  iVar1 = fn_006d3b8c(auStack_20);
  if (iVar1 == 0) {
    local_38[1] = 0x8001000d;
    uVar4 = fn_004b8d4c(&local_40,local_38 + 1);
    fn_0074e3bc(param_1,uVar4);
    fn_00170f54(auStack_28);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xdc));
  fn_004b2f0c(param_1);
  puVar3 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = fn_0074ea40;
    *puVar3 = &DAT_00853500;
    puVar3[2] = 0;
    puVar3[3] = L"";
  }
  fn_00479b1c(param_1,param_1 + 0x98,puVar3);
  fn_00170f54(auStack_28);
  return;
}



void fn_0074ea40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c [3];
  undefined4 local_10 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_1c[0] = 0x80010004;
    uVar2 = fn_004b8d4c(&local_38,local_1c);
    fn_0074e3bc(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\x02') {
    if (*(int *)(param_1 + 0x18c) == *(int *)(param_1 + 0x13c)) {
      local_20 = 0x10001;
      uVar2 = fn_004b8d4c(auStack_2c,&local_20);
      fn_0074e3bc(param_1,uVar2);
      return;
    }
    local_1c[0] = 0x80690001;
    uVar2 = fn_004b8d4c(&local_38,local_1c);
    fn_0074e3bc(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 400) != '\0') {
    local_10[0] = 0x80050017;
    uVar2 = fn_004b8d4c(local_1c,local_10);
    fn_0074e3bc(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x191) == '\0') {
    local_38 = *(undefined4 *)(param_1 + 0xd0);
    uStack_34 = *(undefined4 *)(param_1 + 0xd4);
    uStack_30 = *(undefined4 *)(param_1 + 0xd8);
    fn_0074e3bc(param_1,&local_38);
    return;
  }
  local_10[0] = 0x80690001;
  uVar2 = fn_004b8d4c(local_1c,local_10);
  fn_0074e3bc(param_1,uVar2);
  return;
}



void fn_0074e5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 local_34 [3];
  undefined1 auStack_28 [12];
  undefined4 local_1c [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) goto LAB_0074e75c;
  iVar1 = *(int *)(param_1 + 0x16c);
  iVar4 = *(int *)(param_1 + 0x170);
  if (iVar4 == iVar1) {
    local_34[0] = 0x8069000b;
    uVar2 = fn_004b8d4c(&local_40,local_34);
    fn_0074e3bc(param_1,uVar2);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x8c);
    if (piVar3 != (int *)0x0) {
      if (*(char *)(param_1 + 0x192) != '\0') {
        *(undefined1 *)(param_1 + 0x192) = 0;
        local_3c = (uint)*(ushort *)(param_1 + 0x15a);
        local_40 = (uint)*(ushort *)(param_1 + 0x158);
        uVar2 = *(undefined4 *)(param_1 + 0x118);
        uStack_38 = 0;
        (**(code **)(*piVar3 + 8))(piVar3,uVar2,iVar4 - iVar1,*(undefined4 *)(param_1 + 0x154));
        iVar1 = fn_001249d0();
        iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
        if (iVar1 != 0) {
          (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))(*(int **)(param_1 + 0x8c),uVar2);
          iVar1 = fn_001249d0();
          iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
          if (iVar1 != 0) goto LAB_0074e6ec;
        }
LAB_0074e75c:
        local_34[0] = 0x80010004;
        uVar2 = fn_004b8d4c(&local_40,local_34);
        fn_0074e3bc(param_1,uVar2);
        return;
      }
LAB_0074e6ec:
      iVar1 = *(int *)(param_1 + 0x16c);
      iVar4 = *(int *)(param_1 + 0x170);
      bVar5 = iVar4 == iVar1;
      if (bVar5) {
        iVar4 = 0;
      }
      if (!bVar5) {
        iVar4 = iVar4 - iVar1;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))
                        (*(int **)(param_1 + 0x8c),iVar1,iVar4);
      if (iVar1 == 0) {
        fn_004b2e68(param_1,0x10);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x16c);
      iVar4 = *(int *)(param_1 + 0x170);
      bVar5 = iVar4 != iVar1;
      if (bVar5) {
        iVar1 = iVar4 - iVar1;
      }
      if (!bVar5) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x18c) = iVar1 + *(int *)(param_1 + 0x18c);
      local_1c[0] = 0x10001;
      uVar2 = fn_004b8d4c(auStack_28,local_1c);
      fn_0074e3bc(param_1,uVar2);
      return;
    }
    if (*(int *)(param_1 + 0x17c) != 0) {
      if (*(uint *)(param_1 + 0x180) < (uint)(iVar4 - iVar1)) {
        local_34[0] = 0x80050017;
        uVar2 = fn_004b8d4c(&local_40,local_34);
        fn_0074e3bc(param_1,uVar2);
        return;
      }
      fn_00301a9c();
      iVar1 = *(int *)(param_1 + 0x16c);
      iVar4 = *(int *)(param_1 + 0x170);
      bVar5 = iVar4 != iVar1;
      if (bVar5) {
        iVar1 = iVar4 - iVar1;
      }
      if (!bVar5) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x18c) = iVar1 + *(int *)(param_1 + 0x18c);
      local_40 = 0x10001;
      uVar2 = fn_004b8d4c(local_34,&local_40);
      fn_0074e3bc(param_1,uVar2);
      return;
    }
  }
  return;
}



int fn_0074e458(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  iVar1 = 0;
  if (iVar2 != 0) {
    piVar4 = *(int **)(param_1 + 0x8c);
    if (piVar4 == (int *)0x0) {
      if (*(int *)(param_1 + 0x17c) != 0) {
        if (*(uint *)(param_1 + 0x180) < (uint)(*(int *)(param_1 + 0x18c) + param_3)) {
          *(undefined1 *)(param_1 + 400) = 1;
          fn_00456510(param_1 + 0x98,4);
          return 0;
        }
        fn_00301a9c(*(int *)(param_1 + 0x17c) + *(int *)(param_1 + 0x18c),param_2,param_3);
        *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + param_3;
        return 1;
      }
      iVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x192) != '\0') {
        *(undefined1 *)(param_1 + 0x192) = 0;
        uVar3 = *(undefined4 *)(param_1 + 0x118);
        if (*(char *)(param_1 + 0x184) != '\0') {
          (**(code **)(*piVar4 + 8))
                    (piVar4,uVar3,*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x154),
                     *(undefined2 *)(param_1 + 0x158),*(undefined2 *)(param_1 + 0x15a),1);
          iVar1 = fn_001249d0();
          iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
          if (iVar1 == 0) {
            return 0;
          }
        }
        (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))
                  (*(int **)(param_1 + 0x8c),uVar3,*(undefined4 *)(param_1 + 0x13c));
        iVar1 = fn_001249d0();
        iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x10))
                        (*(int **)(param_1 + 0x8c),param_2,param_3);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + param_3;
      }
    }
  }
  return iVar1;
}


