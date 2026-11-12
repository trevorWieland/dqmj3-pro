#include "001266c4_00126bb4.h"



undefined4
fn_00126bb4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_3c;
  int local_38 [5];
  undefined1 local_24;
  undefined1 local_23;
  
  if ((param_4 & 1) != 0) {
    uVar1 = fn_00156794(*(undefined4 *)(param_1 + 4));
    iVar2 = fn_00140cb0(param_1,uVar1,param_3,param_5,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_4 & 0xc) != 0) {
    local_24 = 0;
    local_3c = 0;
    local_23 = 0;
    local_38[4] = 0;
    local_38[0] = -1;
    local_38[1] = 0xffffffff;
    local_38[2] = 0xffffffff;
    local_38[3] = 0xffffffff;
    iVar2 = fn_001456b4(*(undefined4 *)(param_1 + 4),param_2,&local_3c);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    do {
      if ((local_38[uVar3] != -1) &&
         (iVar2 = fn_00140aa4(param_1,local_38[uVar3],param_3,param_4,param_5), iVar2 == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  return 1;
}



undefined4
fn_00126a04(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40 [5];
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_50 = 0xffffffff;
  local_4c = 0xffffffff;
  uStack_48 = 0;
  iVar1 = fn_00145764(*(undefined4 *)(param_1 + 4),param_2,&local_50);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_50 != 0xffffffff) {
    iVar1 = fn_00145a08(*(undefined4 *)(param_1 + 4),local_50);
    if (iVar1 == 1) {
      uVar4 = local_50;
      if (local_50 <= local_4c) {
        do {
          if ((param_4 & 1) != 0) {
            uVar2 = fn_00156794(*(undefined4 *)(param_1 + 4),uVar4);
            iVar1 = fn_00140cb0(param_1,uVar2,param_3,param_5,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
          if ((param_4 & 0xc) != 0) {
            local_2c = 0;
            local_44 = 0;
            local_2b = 0;
            local_40[4] = 0;
            local_40[0] = -1;
            local_40[1] = 0xffffffff;
            local_40[2] = 0xffffffff;
            local_40[3] = 0xffffffff;
            iVar1 = fn_001456b4(*(undefined4 *)(param_1 + 4),uVar4,&local_44);
            if (iVar1 == 0) {
              return 0;
            }
            uVar3 = 0;
            do {
              if ((local_40[uVar3] != -1) &&
                 (iVar1 = fn_00140aa4(param_1,local_40[uVar3],param_3,param_4,param_5), iVar1 == 0)
                 ) {
                return 0;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < 4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 <= local_4c);
      }
    }
    else if ((iVar1 == 3) && (uVar4 = local_50, local_50 <= local_4c)) {
      do {
        iVar1 = fn_00140718(param_1,uVar4,param_3,param_4,param_5,param_2);
        if (iVar1 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_4c);
    }
  }
  return 1;
}



undefined4 fn_001268b8(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char acStack_119 [25];
  undefined1 auStack_100 [96];
  int local_a0 [34];
  
  iVar2 = fn_0014020c(param_1 + 0x11c,param_2,(int)*(char *)(param_1 + 0x191));
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
    return 0;
  }
  *(undefined1 *)(param_1 + 400) = 1;
  local_a0[0] = 0;
  iVar2 = fn_0014036c(param_1 + 0x11c,auStack_100,0x40,local_a0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
  }
  else if (local_a0[0] == 0x40) {
    fn_001412cc(param_1 + 0x13c,auStack_100);
    fn_0013fa94(param_1,param_1 + 0x13c);
    uVar3 = fn_002febd8(param_2);
    do {
      uVar1 = uVar3;
      uVar3 = uVar1 - 1;
      if ((int)uVar3 < 0) {
        return 1;
      }
    } while (param_2[uVar3] != '/' && param_2[uVar3] != '\\');
    if ((int)uVar3 < 0x100) {
      uVar6 = 0;
      pcVar4 = acStack_119 + 1;
      do {
        uVar7 = uVar3;
        if (0xfe < uVar3) {
          uVar7 = 0xff;
        }
        pcVar5 = pcVar4;
        if (uVar7 <= uVar6) break;
        uVar6 = uVar6 + 1;
        pcVar5 = pcVar4 + 1;
        *pcVar4 = *param_2;
        param_2 = param_2 + 1;
        pcVar4 = pcVar5;
      } while (*param_2 != '\0');
      *pcVar5 = '\0';
      acStack_119[uVar1] = '\0';
      fn_0013fab8(param_1,acStack_119 + 1);
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00126810(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  
  local_20 = param_4;
  uVar1 = fn_0014590c(param_1 + 0x13c);
  uVar2 = fn_001458cc(param_1 + 0x13c);
  if (param_3 < uVar2) {
    return 0;
  }
  iVar3 = fn_001403d0(param_1 + 0x11c,uVar1,0);
  if (iVar3 != 0) {
    local_20 = 0;
    iVar3 = fn_0014036c(param_1 + 0x11c,param_2,uVar2,&local_20);
    if (iVar3 != 0) {
      if (local_20 == uVar2) {
        fn_00141334(param_1 + 0x13c,param_2);
        return 1;
      }
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
  return 0;
}



void fn_001267cc(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(*(uint *)(param_1 + 4) & 0xfffffffe);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



undefined4
fn_001266c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined1 auStack_50 [16];
  int local_40;
  
  iVar1 = fn_0013fa84();
  if (iVar1 != 0) {
    if (param_7 != 0) {
      uVar2 = fn_0015e284();
      iVar1 = fn_0015e218();
      if (param_6 < uVar2) {
        return 0;
      }
      if (iVar1 + uVar2 < param_6 + param_7) {
        return 0;
      }
    }
    local_70[0] = param_8;
    iVar1 = fn_0013fb54(param_1,param_2,param_4,param_5);
    if (iVar1 != 0) {
      iVar3 = fn_001457bc(param_2,auStack_50);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = local_40;
      }
      if ((uint)(iVar1 * 0xa000) <= param_7) {
        iVar1 = fn_001457bc(param_2,local_70);
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = local_60;
        }
        fn_00141640(param_1 + 0xd8,param_6,param_7,uVar4);
        *(int *)(param_1 + 0xf0) = param_1 + 0xf4;
        *(undefined4 *)(param_1 + 0x110) = param_3;
        return 1;
      }
    }
  }
  return 0;
}


