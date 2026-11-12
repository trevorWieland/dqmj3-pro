#include "00110888_00110cfc.h"



void fn_00110cfc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_00127bf8(auStack_18);
  fn_0011d7e4(auStack_18);
  fn_0011d1bc(auStack_18);
  fn_0011e6e4(auStack_18);
  fn_0011d11c(L"patch:/data/Script/Battle/Script/BattleConst.nut",(char *)&DAT_00110d98,auStack_18);
  fn_0011d11c(L"patch:/data/Script/Battle/Script/BattleCommon.nut",(char *)&DAT_00110da8,auStack_18);
  uVar1 = fn_0014411c(auStack_18,(char *)&DAT_00110da8);
  param_1[1] = uVar1;
  uVar1 = fn_001287d4(uVar1,&DAT_00812c8c);
  *param_1 = uVar1;
  fn_00144058(auStack_18,(char *)&DAT_00110da8,uVar1,param_1[1]);
  fn_00127c78(auStack_18);
  return;
}



void fn_00110c80(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  fn_0012a2d8(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



void fn_00110c74(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7a) = 0;
  *(undefined4 *)(iVar1 + 0x7e) = 0;
  *(undefined4 *)(iVar1 + 0x82) = 0;
  *(undefined4 *)(iVar1 + 0x86) = 0;
  fn_0012a2d8(iVar1 + 0x8b);
  *(undefined1 *)(iVar1 + 0x8a) = 0;
  *(undefined2 *)(iVar1 + 0x94) = 0;
  *(undefined4 *)(iVar1 + 0x98) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined1 *)(iVar1 + 0xac) = 0;
  *(undefined1 *)(iVar1 + 0xad) = 0;
  *(undefined1 *)(iVar1 + 0xae) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  return;
}



void fn_00110aa8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 unaff_r4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  undefined4 local_20;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  puVar6 = &DAT_008f9ce8;
  piVar2 = puVar1 + -3;
  local_20 = param_4;
  if (*piVar2 == -1) {
    uVar5 = puVar1[-1];
    if (0xfffffff1 < uVar5) {
      local_20 = 0xfffffff1;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5);
    }
    if (uVar5 != 0) {
      puVar6 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      puVar6[1] = uVar5;
      puVar4 = (undefined2 *)((int)puVar6 + uVar5 * 2 + 0xc);
      *puVar6 = 0;
      puVar6[2] = uVar5;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar1 = puVar6 + 3;
    fn_00301a9c(puVar1,*(undefined4 *)(param_2 + 4),uVar5 << 1);
  }
  else if (piVar2 != &DAT_008f9ce8) {
    *piVar2 = *piVar2 + 1;
  }
  iVar3 = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 0xc) = iVar3;
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(param_2 + 8) + 8) != 0) {
      fn_0011705c();
    }
    fn_0017d90c(param_1 + 4,param_2 + 0x10);
    if (param_2 != 0) {
      if (*(int **)(param_2 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 8) + 8))();
      }
      if (*(undefined4 **)(param_2 + 4) != &DAT_008f9cf4) {
        piVar2 = *(undefined4 **)(param_2 + 4) + -3;
        iVar3 = *piVar2;
        if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(*(int *)(param_2 + 4) + -0xc,*(int *)(*(int *)(param_2 + 4) + -8) + 8,0);
        }
      }
      fn_002feef8(param_2);
    }
  }
  fn_00148b70(*(undefined4 *)(param_1 + 0x10),puVar1);
  if (puVar1 != &DAT_008f9cf4) {
    iVar3 = puVar1[-3];
    if ((iVar3 == -1) || ((puVar1 + -3 != &DAT_008f9ce8 && (puVar1[-3] = iVar3 + -1, iVar3 == 0))))
    {
      fn_002feef8(puVar1 + -3,puVar1[-2] + 8,0,local_20,unaff_r4,in_lr);
      return;
    }
  }
  return;
}



void fn_00110a84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  iVar1 = fn_001f6934(param_1,param_1 + 4,param_2);
  puVar2 = *(undefined4 **)(iVar1 + 4);
  puVar7 = &DAT_008f9ce8;
  piVar3 = puVar2 + -3;
  if (*piVar3 == -1) {
    uVar6 = puVar2[-1];
    if (0xfffffff1 < uVar6) {
      param_4 = 0xfffffff1;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1,unaff_r4);
    }
    if (uVar6 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      puVar7[1] = uVar6;
      puVar5 = (undefined2 *)((int)puVar7 + uVar6 * 2 + 0xc);
      *puVar7 = 0;
      puVar7[2] = uVar6;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar2 = puVar7 + 3;
    fn_00301a9c(puVar2,*(undefined4 *)(iVar1 + 4),uVar6 << 1);
  }
  else if (piVar3 != &DAT_008f9ce8) {
    *piVar3 = *piVar3 + 1;
  }
  iVar4 = *(int *)(iVar1 + 0xc) + -1;
  *(int *)(iVar1 + 0xc) = iVar4;
  if (iVar4 == 0) {
    if (*(int *)(*(int *)(iVar1 + 8) + 8) != 0) {
      fn_0011705c();
    }
    fn_0017d90c(param_1 + 4,iVar1 + 0x10);
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 8) + 8))();
      }
      if (*(undefined4 **)(iVar1 + 4) != &DAT_008f9cf4) {
        piVar3 = *(undefined4 **)(iVar1 + 4) + -3;
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(*(int *)(iVar1 + 4) + -0xc,*(int *)(*(int *)(iVar1 + 4) + -8) + 8,0);
        }
      }
      fn_002feef8(iVar1);
    }
  }
  fn_00148b70(*(undefined4 *)(param_1 + 0x10),puVar2);
  if (puVar2 != &DAT_008f9cf4) {
    iVar1 = puVar2[-3];
    if ((iVar1 == -1) || ((puVar2 + -3 != &DAT_008f9ce8 && (puVar2[-3] = iVar1 + -1, iVar1 == 0))))
    {
      fn_002feef8(puVar2 + -3,puVar2[-2] + 8,0,param_4,unaff_r4,in_lr);
      return;
    }
  }
  return;
}



void fn_00110888(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint *puVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint *local_48;
  char *local_44;
  char *local_40;
  undefined1 local_3c;
  uint local_38;
  int iStack_34;
  char *local_30;
  char *local_2c [2];
  
  uVar8 = fn_0012a26c(DAT_00898148);
  DAT_0089814c = fn_0011c134((uint)uVar8 - 4,
                              (int)((ulonglong)uVar8 >> 0x20) - (uint)((uint)uVar8 < 4),0x48,0);
  if (0 < DAT_0089814c) {
    DAT_00898150 = fn_001287d4(DAT_0089814c << 2,&DAT_00812c8c);
    iVar1 = fn_00145ac0(DAT_00898148);
    puVar5 = (uint *)(iVar1 + 4);
    local_44 = DAT_008cfddc;
    local_48 = *(uint **)(DAT_008cfddc + 8);
    fn_0011b908(&local_40,&DAT_008cfdcc,&local_48,&local_44);
    iVar1 = 0;
    if (0 < DAT_0089814c) {
      uVar6 = 1;
      do {
        local_48 = &local_38;
        *(uint **)(DAT_00898150 + iVar1 * 4) = puVar5;
        local_38 = *puVar5;
        bVar7 = true;
        pcVar2 = DAT_008cfddc;
        pcVar3 = *(char **)(DAT_008cfddc + 4);
        while (pcVar3 != (char *)0x0) {
          bVar7 = local_38 < *(uint *)(pcVar3 + 0x10);
          if (bVar7) {
            pcVar4 = *(char **)(pcVar3 + 8);
          }
          else {
            pcVar4 = *(char **)(pcVar3 + 0xc);
          }
          pcVar2 = pcVar3;
          pcVar3 = pcVar4;
        }
        iStack_34 = iVar1;
        if (DAT_008cfde4 == '\0') {
          if (bVar7) {
            if (pcVar2 == *(char **)(DAT_008cfddc + 8)) {
              fn_0012cb78(&local_30);
              local_40 = local_30;
              local_3c = uVar6;
              goto LAB_00110a5c;
            }
            if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
              pcVar2 = *(char **)(pcVar2 + 0xc);
            }
            else {
              pcVar3 = *(char **)(pcVar2 + 8);
              if (*(char **)(pcVar2 + 8) == (char *)0x0) {
                pcVar3 = pcVar2;
                pcVar2 = *(char **)(pcVar2 + 4);
                while (pcVar3 == *(char **)(pcVar2 + 8)) {
                  pcVar3 = pcVar2;
                  pcVar2 = *(char **)(pcVar2 + 4);
                }
              }
              else {
                do {
                  pcVar2 = pcVar3;
                  pcVar3 = *(char **)(pcVar2 + 0xc);
                } while (*(char **)(pcVar2 + 0xc) != (char *)0x0);
              }
            }
          }
          if (*(uint *)(pcVar2 + 0x10) < local_38) {
            fn_0012cb78(local_2c);
            local_40 = local_2c[0];
            local_3c = uVar6;
          }
          else {
            local_40 = pcVar2;
            local_3c = 0;
          }
        }
        else {
          fn_0012cb78(&local_44);
          local_40 = local_44;
          local_3c = uVar6;
        }
LAB_00110a5c:
        iVar1 = iVar1 + 1;
        puVar5 = puVar5 + 0x12;
      } while (iVar1 < DAT_0089814c);
    }
  }
  return;
}


