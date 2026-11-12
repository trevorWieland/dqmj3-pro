#include "0066ef68_0066fa6c.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}


undefined4 fn_0066fa6c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_6b8 [400];
  uint local_78 [4];
  undefined1 auStack_68 [8];
  int local_60;
  char local_3c;
  char local_3a;
  uint local_38;
  uint local_34;
  int local_30 [2];
  
  local_38 = 0xe7e3ffff;
  fn_0052cc10(0);
  fn_0052cc74(0,1);
  local_38 = fn_0052c7e8(local_6b8,local_78,0,100);
  if ((local_38 & 0x80000000) != 0) {
    iVar2 = fn_0052cab4(&local_38);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int *)(param_1 + 0x74) = iVar2;
    *(uint *)(param_1 + 0x78) = (uint)(iVar2 != 0);
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 0xffffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x340);
  iVar2 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar5 = 0;
      if (local_78[0] != 0) {
        do {
          if (*(int *)(param_1 + iVar2 * 0x50 + 0xc4) == local_6b8[uVar5 * 4]) {
            local_6b8[uVar5 * 4] = 0;
            fn_0066f120(param_1,iVar2);
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_78[0]);
      }
      if (local_78[0] <= uVar5) {
        *(undefined1 *)(param_1 + iVar2 * 0x50 + 0xc0) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar7);
  }
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    iVar2 = param_1 + uVar7 * 0x50;
    uVar5 = iVar2 + 0xe0;
    bVar8 = *(char *)(iVar2 + 0x10c) != '\0';
    if (bVar8) {
      uVar5 = (uint)*(byte *)(iVar2 + 0x10e);
    }
    if ((!bVar8 || uVar5 == 0) && (uVar7 < 8)) {
      fn_00301f50(iVar2 + 0xc0,0x50);
      iVar2 = *(int *)(param_1 + 0x340);
      *(uint *)(param_1 + 0x340) = iVar2 - 1U;
      if ((iVar2 - 1U != uVar7) && (1 < iVar2)) {
        iVar4 = (iVar2 - uVar7) + -1;
        uVar5 = uVar7;
        if (0 < iVar4) {
          iVar6 = 0;
          do {
            iVar3 = param_1 + (uVar7 + iVar6) * 0x50;
            fn_0017821c(iVar3 + 0xc0,iVar3 + 0x110,0x50);
            iVar4 = iVar4 + -1;
            iVar6 = iVar6 + 1;
          } while (iVar4 != 0);
          uVar5 = iVar2 - 1;
        }
        fn_00301f50(param_1 + uVar5 * 0x50 + 0xc0,0x50);
      }
    }
  }
  uVar7 = 0;
  if (local_78[0] != 0) {
    do {
      iVar2 = local_6b8[uVar7 * 4];
      if (iVar2 != 0) {
        local_34 = 0xe7e3ffff;
        local_30[0] = iVar2;
        local_34 = fn_0052c9ec(auStack_68,local_30,1);
        if ((local_34 & 0x80000000) == 0) {
          cVar1 = '\0';
          if (local_3a != '\0') {
            cVar1 = local_3c;
          }
          if ((((local_3a != '\0' && cVar1 != '\0') && (local_60 == *(int *)(param_1 + 0x88))) &&
              (iVar2 = fn_0066f120(param_1,*(undefined4 *)(param_1 + 0x340),iVar2), iVar2 != 0)) &&
             (iVar2 = *(int *)(param_1 + 0x340) + 1, *(int *)(param_1 + 0x340) = iVar2, 7 < iVar2))
          break;
        }
        else {
          iVar2 = fn_0052cab4(&local_34);
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(undefined1 *)(param_1 + 0x7c) = 0;
          *(int *)(param_1 + 0x74) = iVar2;
          *(uint *)(param_1 + 0x78) = (uint)(iVar2 != 0);
          *(undefined1 *)(param_1 + 0x7c) = 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_78[0]);
  }
  *(undefined1 *)(param_1 + 0x345) = 1;
  fn_0052cc10(0x5c);
  return 0;
}



undefined4 fn_0066f464(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_6a8 [400];
  int *local_68 [2];
  int local_60;
  char local_3c;
  char local_3a;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c [2];
  
  local_30 = 0xe7e3ffff;
  fn_00301f50(param_1 + 0xc0,0x284);
  iVar2 = fn_0066f258(param_1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  fn_0052cc10(0);
  fn_0052cc74(0,1);
  local_30 = fn_0052c7e8(local_6a8,&local_38,0,100);
  if ((local_30 & 0x80000000) == 0) {
    uVar3 = 0;
    if (local_38 != 0) {
      do {
        local_2c[0] = local_6a8[uVar3 * 4];
        local_34 = 0xe7e3ffff;
        local_34 = fn_0052c9ec(local_68,local_2c,1);
        if ((local_34 & 0x80000000) == 0) {
          cVar1 = '\0';
          if (local_3a != '\0') {
            cVar1 = local_3c;
          }
          if ((local_3a != '\0' && cVar1 != '\0') && (local_60 == *(int *)(param_1 + 0x88))) {
            local_68[0] = (int *)(param_1 + 0x340);
            iVar2 = fn_0066f120(param_1,*(undefined4 *)(param_1 + 0x340),local_6a8[uVar3 * 4]);
            if ((iVar2 != 0) && (iVar2 = *local_68[0], *local_68[0] = iVar2 + 1, 7 < iVar2 + 1))
            break;
          }
        }
        else {
          iVar2 = fn_0052cab4(&local_34);
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(undefined1 *)(param_1 + 0x7c) = 0;
          *(int *)(param_1 + 0x74) = iVar2;
          *(uint *)(param_1 + 0x78) = (uint)(iVar2 != 0);
          *(undefined1 *)(param_1 + 0x7c) = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_38);
    }
    fn_0052cc10(0x5c);
    svc_0x19();
    if (*(int *)(param_1 + 0x70) < 0) {
      fn_0015e294();
    }
    local_30 = fn_0052d004(param_1 + 0x70);
    if ((local_30 & 0x80000000) == 0) {
      return 0;
    }
    iVar2 = fn_0052cab4(&local_30);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int *)(param_1 + 0x74) = iVar2;
  }
  else {
    iVar2 = fn_0052cab4(&local_30);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int *)(param_1 + 0x74) = iVar2;
  }
  *(uint *)(param_1 + 0x78) = (uint)(iVar2 != 0);
  *(undefined1 *)(param_1 + 0x7c) = 1;
  return 0xffffffff;
}



undefined4 fn_0066f334(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  
  uVar3 = 0;
  iVar2 = param_1[0x12];
  local_18 = param_4;
  if (iVar2 == 0) {
    piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    if (iVar2 == 0) {
      fn_0066680c(piVar1);
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar2 == 1) {
    iVar2 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar2 + 0x4c) & 1) != 0) {
      local_18 = 0xe7e3ffff;
      local_18 = fn_0052c494();
      if ((local_18 & 0x80000000) == 0) {
        param_1[0x13] = param_1[0x13] | 1;
        (**(code **)(*param_1 + 0x34))(param_1,2);
      }
      else {
        iVar2 = fn_0052cab4(&local_18);
        param_1[0x1e] = 0;
        *(undefined1 *)(param_1 + 0x1f) = 0;
        param_1[0x1d] = iVar2;
        param_1[0x1e] = (uint)(iVar2 != 0);
        uVar3 = 0xffffffff;
        *(undefined1 *)(param_1 + 0x1f) = 1;
      }
    }
  }
  else if ((iVar2 == 2) && (iVar2 = fn_00673be8(param_1), iVar2 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return uVar3;
}



void fn_0066f2f0(int param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint local_18;
  int iStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = param_3;
  uStack_10 = param_2;
  iStack_14 = param_1;
  puVar1 = &local_18;
  local_18 = 0x14;
  if (param_3 < 0x14) {
    puVar1 = &local_c;
  }
  local_c = *puVar1;
  fn_00301a9c(param_1 + 0xac);
  *(undefined1 *)(param_1 + 0x344) = 1;
  return;
}



undefined4 fn_0066f258(int param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint local_10;
  
  bVar3 = *(char *)(param_1 + 0x344) != '\0';
  bVar1 = 0;
  if (bVar3) {
    bVar1 = *(byte *)(param_1 + 0x4c);
  }
  if (bVar3 && (bVar1 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xbc);
    local_10 = 0xe7e3ffff;
    local_10 = fn_0052c728(param_1 + 0x80,&DAT_0066f2ec);
    if ((local_10 & 0x80000000) != 0) {
      iVar2 = fn_0052cab4(&local_10);
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      *(int *)(param_1 + 0x74) = iVar2;
      *(uint *)(param_1 + 0x78) = (uint)(iVar2 != 0);
      *(undefined1 *)(param_1 + 0x7c) = 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x344) = 0;
  }
  return 1;
}



undefined4 fn_0066f080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_660 [1600];
  uint local_20;
  int local_1c [3];
  
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    return 0;
  }
  local_20 = 0xe7e3ffff;
  local_20 = fn_0052c7e8(auStack_660,local_1c,0,100);
  if ((local_20 & 0x80000000) == 0) {
    if (local_1c[0] == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    iVar1 = fn_0052cab4(&local_20);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(int *)(param_1 + 0x74) = iVar1;
    *(uint *)(param_1 + 0x78) = (uint)(iVar1 != 0);
    *(undefined1 *)(param_1 + 0x7c) = 1;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_0066ef68(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = param_1[0x13];
  param_1[0x13] = uVar1 & 0xfffffff7;
  if ((uVar1 & 4) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,5);
    return 1;
  }
  fn_00673ce8(param_1,5);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = param_1[0x13];
  param_1[0x13] = uVar1 & 0xfffffff7;
  if ((uVar1 & 4) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,4);
    return 1;
  }
  fn_00673ce8(param_1,4);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,3);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,3);
    uVar2 = 1;
  }
  return uVar2;
}


