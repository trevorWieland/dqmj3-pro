#include "00489b2c_0048a058.h"



undefined4 fn_0048a058(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x30);
  iVar1 = iVar4;
  iVar3 = *(int *)(iVar4 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < param_2) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar1 != iVar4) && (*(uint *)(iVar1 + 0x10) <= param_2)) {
    iVar4 = iVar1;
  }
  if (iVar4 == *(int *)(param_1 + 0x30)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar4 + 0x14);
  }
  return uVar2;
}



undefined4 fn_0048a034(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint local_10;
  
  local_10 = param_4;
  fn_0074a528(param_1,&local_10);
  uVar2 = local_10;
  iVar3 = fn_001249d0();
  iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 0x30);
  iVar1 = iVar6;
  iVar5 = *(int *)(iVar6 + 4);
  while (iVar5 != 0) {
    if (*(uint *)(iVar5 + 0x10) < uVar2) {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    else {
      iVar1 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
  }
  if ((iVar1 != iVar6) && (*(uint *)(iVar1 + 0x10) <= uVar2)) {
    iVar6 = iVar1;
  }
  if (iVar6 == *(int *)(*(int *)(iVar3 + 0x10) + 0x30)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar6 + 0x14);
  }
  return uVar4;
}



void fn_00489f34(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [8];
  
  iVar2 = *(int *)(param_1 + 0x30);
  local_28 = iVar2;
  iVar1 = *(int *)(iVar2 + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      local_28 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((local_28 == iVar2) || (param_2 < *(uint *)(local_28 + 0x10))) {
    local_28 = iVar2;
  }
  fn_0077700c(&local_24,param_1 + 0x20,&local_28);
  local_24 = *(int *)(param_1 + 0x4c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      local_24 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  local_1c = *(int *)(param_1 + 0x4c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  while (iVar1 != 0) {
    if (param_2 < *(uint *)(iVar1 + 0x10)) {
      local_1c = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
  }
  local_20 = local_24;
  local_18 = local_1c;
  fn_0077ba40(auStack_14,param_1 + 0x3c,&local_24,&local_18);
  return;
}



int fn_00489cd8(int param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 auStack_58 [8];
  uint local_50 [2];
  undefined *local_48;
  undefined1 auStack_44 [4];
  char *local_40 [2];
  char *local_38;
  undefined1 local_34;
  int iStack_24;
  uint local_20;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar3 = iVar5;
  iVar2 = *(int *)(iVar5 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar3 != iVar5) && (*(uint *)(iVar3 + 0x10) <= param_2)) {
    iVar5 = iVar3;
  }
  if (iVar5 != *(int *)(param_1 + 0x1c)) {
    return *(int *)(iVar5 + 0x14);
  }
  local_48 = &DAT_00855a94;
  iStack_24 = param_1;
  local_20 = param_2;
  fn_0015e6f0(auStack_44,&DAT_007db524);
  fn_004b6230(local_50 + 2,L"%s %d",*(undefined4 *)(param_1 + 8),local_20);
  iVar3 = fn_0015ece0(0x4c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    fn_004bead4(auStack_58,local_50 + 2,L"/Incoming");
    iVar3 = fn_0047adcc(iVar3 + 4,auStack_58);
    fn_00170f54(auStack_58);
    fn_004bead4(local_50,local_50 + 2,L"/Outgoing");
    iVar3 = fn_0047adcc(iVar3 + 0x24,local_50);
    iVar3 = iVar3 + -0x28;
    fn_00170f54(local_50);
  }
  local_50[0] = local_20;
  local_50[1] = 0;
  pcVar6 = *(char **)(param_1 + 0x1c);
  bVar7 = true;
  pcVar1 = pcVar6;
  pcVar4 = *(char **)(pcVar6 + 4);
  while (pcVar4 != (char *)0x0) {
    bVar7 = local_20 < *(uint *)(pcVar4 + 0x10);
    pcVar1 = pcVar4;
    if (bVar7) {
      pcVar4 = *(char **)(pcVar4 + 8);
    }
    else {
      pcVar4 = *(char **)(pcVar4 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    local_38 = pcVar1;
    if (bVar7) {
      if (pcVar1 == *(char **)(pcVar6 + 8)) goto LAB_00489ee4;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_38 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_38 = *(char **)(pcVar1 + 8);
        if (local_38 == (char *)0x0) {
          local_38 = *(char **)(pcVar1 + 4);
          pcVar4 = local_38;
          if (pcVar1 == *(char **)(local_38 + 8)) {
            do {
              local_38 = *(char **)(pcVar4 + 4);
              bVar7 = pcVar4 == *(char **)(local_38 + 8);
              pcVar4 = local_38;
            } while (bVar7);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_38 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_38 = pcVar1;
          }
        }
      }
    }
    if (local_20 <= *(uint *)(local_38 + 0x10)) {
      local_34 = 0;
      goto LAB_00489efc;
    }
  }
LAB_00489ee4:
  fn_00778bd0(local_40);
  local_38 = local_40[0];
  local_34 = 1;
LAB_00489efc:
  *(int *)(local_38 + 0x14) = iVar3;
  fn_00170f54(local_50 + 2);
  return iVar3;
}



int fn_00489b2c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &DAT_00853a50;
  iVar4 = *(int *)(param_1[7] + 8);
  if (iVar4 != param_1[7]) {
    do {
      if (*(int *)(iVar4 + 0x14) != 0) {
        iVar1 = fn_0047ae88(*(int *)(iVar4 + 0x14) + 0x28);
        iVar1 = fn_0047ae88(iVar1 + -0x24);
        if (*(code **)(iVar1 + -0xc) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(iVar1 + -0xc))();
        }
      }
      iVar1 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar1 = *(int *)(iVar4 + 4);
        if (iVar4 == *(int *)(iVar1 + 0xc)) {
          do {
            iVar4 = iVar1;
            iVar1 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar1 + 0xc));
        }
        if (*(int *)(iVar4 + 0xc) != iVar1) {
          iVar4 = iVar1;
        }
      }
      else {
        do {
          iVar4 = iVar1;
          iVar1 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != param_1[7]);
  }
  local_14 = param_1[7];
  local_18 = *(undefined4 *)(local_14 + 8);
  fn_00778438(auStack_10,param_1 + 3,&local_18,&local_14);
  iVar4 = param_1[7];
  piVar5 = param_1 + 3;
  if (iVar4 != 0) {
    local_18 = *(undefined4 *)(iVar4 + 8);
    local_14 = iVar4;
    fn_00778438(auStack_10,piVar5,&local_18,&local_14);
    iVar4 = param_1[7];
    *(undefined4 *)(iVar4 + 0xc) = param_1[4];
    param_1[4] = iVar4;
    piVar2 = (int *)*piVar5;
    while (piVar2 != (int *)0x0) {
      *piVar5 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar5;
    }
  }
  iVar4 = fn_00170f54(param_1 + 1);
  return iVar4 + -4;
}


