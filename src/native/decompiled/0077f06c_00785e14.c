#include "0077f06c_00785e14.h"



char * fn_00785e14(int param_1,uint *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char *local_2c;
  char *local_28;
  uint local_20;
  undefined4 local_1c;
  
  local_20 = *param_2;
  local_1c = 0;
  pcVar2 = *(char **)(param_1 + 0x10);
  bVar4 = true;
  pcVar1 = pcVar2;
  pcVar3 = *(char **)(pcVar2 + 4);
  while (pcVar3 != (char *)0x0) {
    bVar4 = local_20 < *(uint *)(pcVar3 + 0x10);
    pcVar1 = pcVar3;
    if (bVar4) {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_28 = pcVar1;
    if (bVar4) {
      if (pcVar1 == *(char **)(pcVar2 + 8)) goto LAB_00785f24;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_28 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_28 = *(char **)(pcVar1 + 8);
        if (local_28 == (char *)0x0) {
          local_28 = *(char **)(pcVar1 + 4);
          pcVar3 = local_28;
          if (pcVar1 == *(char **)(local_28 + 8)) {
            do {
              local_28 = *(char **)(pcVar3 + 4);
              bVar4 = pcVar3 == *(char **)(local_28 + 8);
              pcVar3 = local_28;
            } while (bVar4);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_28 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_28 = pcVar1;
          }
        }
      }
    }
    if (local_20 <= *(uint *)(local_28 + 0x10)) goto LAB_00785f4c;
  }
LAB_00785f24:
  fn_007780bc(&local_2c);
  local_28 = local_2c;
LAB_00785f4c:
  return local_28 + 0x14;
}



char * fn_00785c48(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  char *local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [28];
  char *local_28;
  undefined1 local_24;
  
  local_60 = (undefined4 *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  puVar1 = (undefined4 *)fn_0015ece0(0xc);
  uVar2 = fn_0015ece0(0x18);
  puVar1[2] = uVar2;
  *puVar1 = local_60;
  puVar1[1] = 1;
  local_50 = puVar1[2];
  local_58 = local_50 + 0x18;
  *(int *)local_50 = local_50;
  *(int *)(local_50 + 4) = local_50;
  local_48 = *param_2;
  local_60 = puVar1;
  local_54 = local_58;
  iVar3 = fn_004b4d90(auStack_44,&local_60);
  pcVar5 = *(char **)(param_1 + 0x10);
  bVar7 = true;
  pcVar6 = pcVar5;
  if (*(char **)(pcVar5 + 4) != (char *)0x0) {
    pcVar4 = *(char **)(pcVar5 + 4);
    do {
      pcVar6 = pcVar4;
      bVar7 = *(uint *)(iVar3 + -4) < *(uint *)(pcVar6 + 0x10);
      if (bVar7) {
        pcVar4 = *(char **)(pcVar6 + 8);
      }
      else {
        pcVar4 = *(char **)(pcVar6 + 0xc);
      }
    } while (pcVar4 != (char *)0x0);
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_28 = pcVar6;
    if (bVar7) {
      if (pcVar6 == *(char **)(pcVar5 + 8)) goto LAB_00785dd8;
      if ((*pcVar6 == '\0') && (*(char **)(*(int *)(pcVar6 + 4) + 4) == pcVar6)) {
        local_28 = *(char **)(pcVar6 + 0xc);
      }
      else {
        local_28 = *(char **)(pcVar6 + 8);
        if (local_28 == (char *)0x0) {
          local_28 = *(char **)(pcVar6 + 4);
          pcVar5 = local_28;
          if (pcVar6 == *(char **)(local_28 + 8)) {
            do {
              local_28 = *(char **)(pcVar5 + 4);
              bVar7 = pcVar5 == *(char **)(local_28 + 8);
              pcVar5 = local_28;
            } while (bVar7);
          }
        }
        else {
          for (pcVar6 = *(char **)(local_28 + 0xc); pcVar6 != (char *)0x0;
              pcVar6 = *(char **)(pcVar6 + 0xc)) {
            local_28 = pcVar6;
          }
        }
      }
    }
    if (*(uint *)(iVar3 + -4) <= *(uint *)(local_28 + 0x10)) {
      local_24 = 0;
      goto LAB_00785df0;
    }
  }
LAB_00785dd8:
  fn_00776914(&local_64);
  local_28 = local_64;
  local_24 = 1;
LAB_00785df0:
  pcVar6 = local_28;
  fn_004b4f20(auStack_44);
  fn_004b4f20(&local_60);
  return pcVar6 + 0x14;
}



undefined4 fn_00784690(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_58 [12];
  undefined *local_4c;
  short local_48;
  char local_46;
  char local_45;
  undefined1 local_44;
  char *local_34;
  char *local_30;
  char *local_2c;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uVar4 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    bVar1 = true;
    iVar6 = 0;
    local_4c = &DAT_008595d8;
    local_48 = *(short *)(param_2 + 4);
    local_58[0] = *(char *)(param_2 + 6);
    local_45 = *(char *)(param_2 + 7);
    pcVar5 = (char *)(int)local_45;
    local_44 = *(undefined1 *)(param_2 + 8);
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    local_2c = (char *)0x0;
    local_46 = local_58[0];
    local_1c = param_3;
    uStack_18 = param_4;
    if ((int)local_58[0] < (int)pcVar5) {
      do {
        iVar2 = fn_006f0a88(&local_4c,(int)local_58[0]);
        if ((iVar2 != 0) && (iVar2 = fn_006f14ec(param_1,(int)local_58[0]), iVar2 != 0)) {
          pcVar5 = (char *)(int)local_58[0];
          iVar2 = fn_0064e370(&local_1c);
          if ((bVar1) || (iVar6 < iVar2)) {
            bVar1 = false;
            if (local_34 != local_30) {
              pcVar5 = local_34;
              if (local_30 < local_34) {
                do {
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != local_30);
              }
              local_30 = local_34;
            }
            iVar6 = iVar2;
            pcVar7 = local_30;
            if (local_30 != local_2c) goto joined_r0x007847b4;
LAB_007847f4:
            pcVar5 = local_58;
            fn_0079aa0c(&local_34);
          }
          else if (iVar2 == iVar6) {
            pcVar7 = local_30;
            if (local_30 == local_2c) goto LAB_007847f4;
joined_r0x007847b4:
            local_30 = pcVar7 + 1;
            pcVar5 = local_2c;
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = local_58[0];
            }
          }
        }
        local_58[0] = local_58[0] + '\x01';
      } while (local_58[0] < local_45);
    }
    pcVar7 = (char *)(int)local_46;
    if ((int)pcVar7 < (int)local_45) {
      do {
        pcVar3 = local_34;
        while( true ) {
          if (pcVar3 != local_30) {
            pcVar5 = (char *)(int)*pcVar3;
          }
          if (pcVar3 == local_30 || pcVar5 == pcVar7) break;
          pcVar3 = pcVar3 + 1;
        }
        if (pcVar3 == local_30) {
          fn_0063b148(&local_4c,pcVar7);
        }
        pcVar7 = (char *)(int)(char)((char)pcVar7 + '\x01');
      } while ((int)pcVar7 < (int)local_45);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_48 != 0)) {
      *(short *)(param_2 + 4) = local_48;
      uVar4 = 1;
      *(char *)(param_2 + 6) = local_46;
      *(char *)(param_2 + 7) = local_45;
      *(undefined1 *)(param_2 + 8) = local_44;
    }
    else {
      uVar4 = 0;
    }
    pcVar5 = local_34;
    if (local_30 < local_34) {
      do {
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != local_30);
    }
    fn_001008c4(local_34,(int)local_2c - (int)local_34,0);
  }
  return uVar4;
}



void fn_0077f194(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = (int)param_3 / 2;
  uVar3 = *(uint *)(param_2 + iVar1 * 0x1c);
  uVar2 = param_1;
  if (uVar3 != 0) {
    if (uVar3 == param_1) {
      uVar2 = param_2 + iVar1 * 0x1c;
    }
    if (uVar3 <= param_1) {
      if (uVar3 < param_1) {
        fn_0077f194(uVar2,param_2 + ((param_3 & 1) + iVar1) * 0x1c,iVar1);
        return;
      }
      return;
    }
  }
  fn_0077f194(uVar2,param_2,iVar1);
  return;
}



void fn_0077f138(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = (int)param_3 / 2;
  uVar2 = *(uint *)(param_2 + iVar1 * 0x10);
  if ((uVar2 != 0) && (param_1 > uVar2 || uVar2 == param_1)) {
    if (param_1 <= uVar2) {
      return;
    }
    param_2 = param_2 + ((param_3 & 1) + iVar1) * 0x10;
  }
  fn_0077f138(param_1,param_2,iVar1);
  return;
}



void fn_0077f06c(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = (int)param_3 / 2;
  uVar2 = *(uint *)(param_2 + iVar1 * 0x10);
  if ((uVar2 != 0) && (param_1 > uVar2 || uVar2 == param_1)) {
    if (param_1 <= uVar2) {
      return;
    }
    param_2 = param_2 + ((param_3 & 1) + iVar1) * 0x10;
  }
  fn_0077f06c(param_1,param_2,iVar1);
  return;
}


