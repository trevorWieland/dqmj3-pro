#include "00454dfc_00455394.h"



undefined4 fn_00455394(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  *(undefined4 *)(iVar1 + 0x1c) = uVar7;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return 1;
}



void fn_0045536c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"stream",param_2);
  return;
}



void fn_00455344(int param_1,uint param_2)

{
  fn_0017695c();
  *(ushort *)(*(int *)(param_1 + 4) + 6) =
       (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}



void fn_004550fc(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"natm",param_2);
  return;
}



void fn_004550d4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,&DAT_007d9e30,param_2);
  return;
}



void fn_00455124(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined *local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined1 auStack_5c [8];
  char *local_54;
  undefined *local_50;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  char *local_40;
  undefined1 local_3c;
  undefined4 *local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  if (*(char *)(param_2 + 100) == '\0') {
    fn_0014ea80(param_2);
  }
  local_60 = &DAT_00855a94;
  fn_0015e6f0(auStack_5c,param_3);
  fn_00785b1c(param_2 + 0x28,&local_60);
  fn_00170f54(&local_60);
  local_68 = &DAT_00855a94;
  fn_0015e6f0(&local_64,param_3);
  local_50 = &DAT_00855a94;
  fn_0015e6f0(auStack_4c,local_64);
  local_48 = 0;
  iVar2 = 1;
  pcVar1 = *(char **)(param_2 + 0x1c);
  pcVar3 = *(char **)(*(char **)(param_2 + 0x1c) + 4);
  while (pcVar3 != (char *)0x0) {
    iVar2 = fn_00190ef0(&local_50,pcVar3 + 0x10);
    pcVar1 = pcVar3;
    if (iVar2 == 0) {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
  }
  if (*(char *)(param_2 + 0x24) == '\0') {
    pcVar3 = pcVar1;
    if (iVar2 != 0) {
      if (pcVar1 == *(char **)(*(int *)(param_2 + 0x1c) + 8)) {
        fn_0076be3c(&local_54,param_2 + 0xc,0,pcVar1,&local_50);
        local_40 = local_54;
        local_3c = 1;
        goto LAB_004552f4;
      }
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        pcVar3 = *(char **)(pcVar1 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar1 + 8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = *(char **)(pcVar1 + 4);
          pcVar4 = pcVar3;
          if (pcVar1 == *(char **)(pcVar3 + 8)) {
            do {
              pcVar3 = *(char **)(pcVar4 + 4);
              bVar5 = pcVar4 == *(char **)(pcVar3 + 8);
              pcVar4 = pcVar3;
            } while (bVar5);
          }
        }
        else {
          for (pcVar4 = *(char **)(pcVar3 + 0xc); pcVar4 != (char *)0x0;
              pcVar4 = *(char **)(pcVar4 + 0xc)) {
            pcVar3 = pcVar4;
          }
        }
      }
    }
    iVar2 = fn_00190ef0(pcVar3 + 0x10,&local_50);
    if (iVar2 == 0) {
      local_3c = 0;
      local_40 = pcVar3;
      goto LAB_004552f4;
    }
  }
  fn_0076be3c(&local_54,param_2 + 0xc,0,pcVar1,&local_50);
  local_40 = local_54;
  local_3c = 1;
LAB_004552f4:
  pcVar1 = local_40;
  fn_00170f54(&local_50);
  *(undefined4 *)(pcVar1 + 0x18) = local_28;
  fn_00170f54(&local_68);
  *(undefined1 *)(param_2 + 0x65) = 0;
  *local_34 = 0x10001;
  local_34[1] = &DAT_007dba44;
  local_34[2] = 0x71;
  return;
}



void fn_004550ac(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 100) == '\0') {
    fn_0014ea80();
  }
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0x65) = 0;
  return;
}



undefined4 fn_00455040(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    return 0;
  }
  if (DAT_008b637e == '\0') {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined4 *)fn_001775e8(DAT_008b63d8,DAT_008b637e,param_3);
    uVar3 = *puVar1;
  }
  iVar2 = fn_00170de0(&DAT_008e769c,0xe,uVar3);
  if (*(code **)(iVar2 + 0x18) == (code *)0x0) {
    uVar3 = fn_0015ece0(param_1);
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00455094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(iVar2 + 0x18))();
  return uVar3;
}



void fn_00455018(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + -8))();
  return;
}



void fn_00454ffc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00474168();
  *puVar1 = &DAT_008527d0;
  return;
}



void fn_00454f9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  fn_0047380c();
  fn_00473e10(param_1,param_2,0,param_3,param_4,param_5,param_6,param_8,param_9,param_7);
  return;
}



void fn_00454f8c(undefined4 *param_1)

{
  *param_1 = &DAT_00852750;
  return;
}



void fn_00454dfc(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44 [8];
  
  iVar1 = fn_00455e10(param_3);
  if (iVar1 != 0) {
    iVar1 = fn_0015ece0(0x98);
    uVar5 = 0;
    if (iVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_00479cd8(iVar1,0,&local_50);
      *piVar4 = (int)&DAT_00855b34;
      piVar4[0x1a] = 0;
      piVar4[0x1c] = (int)&DAT_00855a94;
      piVar4[0x1b] = 0;
      fn_0015e6f0(piVar4 + 0x1d,&DAT_007db524);
      *(undefined1 *)(piVar4 + 0x1e) = 0;
      piVar4[0x1f] = 0;
      piVar4[0x20] = 0;
      piVar4[0x21] = 0;
      *(undefined1 *)(piVar4 + 0x22) = 0;
      piVar4[0x23] = 0;
      piVar4[0x24] = 0;
      if (DAT_008b6385 == '\0') {
        iVar1 = 5;
      }
      else {
        iVar1 = 10;
      }
      piVar4[0x25] = iVar1;
    }
    local_50 = (undefined4)param_5;
    uStack_4c = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack_48 = param_6;
    (**(code **)(*piVar4 + 0x34))(local_44,piVar4,*(undefined4 *)(param_3 + 0x44),param_4);
    if (-1 < local_44[0]) {
      iVar1 = fn_001249d0();
      if (iVar1 != 0) {
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
      }
      fn_004bdba4(uVar5,piVar4,0);
      *param_1 = 0x10001;
      param_1[1] = &DAT_007dba44;
      param_1[2] = 0x71;
      return;
    }
    puVar3 = (uint *)(piVar4 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar6 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar6);
    *puVar3 = uVar2;
    bVar6 = uVar2 == 0;
    if (bVar6) {
      uVar2 = (uint)*(byte *)(piVar4 + 2);
    }
    if (bVar6 && uVar2 == 0) {
      *(undefined1 *)(piVar4 + 2) = 1;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = 0x8001000d;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}


