#include "006b6724_006b6d3c.h"



undefined4 fn_006b6d3c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_1;
  uVar1 = piVar2[0x11] - piVar2[0x10] >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2,uVar1);
  }
  uVar3 = *(uint *)(piVar2[0x10] + param_2 * 4);
  uVar1 = piVar2[1] - *piVar2 >> 2;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar3,uVar1);
  }
  return *(undefined4 *)(*piVar2 + uVar3 * 4);
}



undefined4 fn_006b6c9c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  for (piVar2 = (int *)piVar1[0x20]; (int *)piVar1[0x21] != piVar2; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      return 0;
    }
  }
  piVar2 = (int *)piVar1[0x23];
  while( true ) {
    if ((int *)piVar1[0x24] == piVar2) {
      piVar2 = (int *)*piVar1;
      while( true ) {
        if ((int *)piVar1[1] == piVar2) {
          return 0;
        }
        if (*piVar2 == param_2) break;
        piVar2 = piVar2 + 1;
      }
      return 1;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 1;
  }
  return 0;
}



int fn_006b6c88(int *param_1)

{
  return *(int *)(*param_1 + 0x50) - *(int *)(*param_1 + 0x4c) >> 2;
}



undefined4 fn_006b6c30(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  uVar4 = piVar3[0x1f];
  if (uVar4 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar1 = piVar3[1] - *piVar3 >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4,uVar1);
    }
    uVar2 = *(undefined4 *)(*piVar3 + uVar4 * 4);
  }
  return uVar2;
}



int fn_006b6bc4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar3 = 0;
  iVar5 = *param_1;
  do {
    uVar1 = *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 2;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar3,uVar1);
    }
    iVar2 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    if (-1 < *(int *)(*(int *)(iVar5 + 0x18) + iVar2)) {
      iVar4 = iVar4 + 1;
    }
  } while ((int)uVar3 < 4);
  return iVar4;
}



undefined4 fn_006b6b3c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)*param_1;
  uVar1 = piVar2[0x14] - piVar2[0x13] >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2,uVar1);
  }
  uVar3 = *(uint *)(piVar2[0x13] + param_2 * 4);
  uVar1 = piVar2[1] - *piVar2 >> 2;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar3,uVar1);
  }
  return *(undefined4 *)(*piVar2 + uVar3 * 4);
}



undefined4 fn_006b6754(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  char *pcVar11;
  char *local_88;
  undefined4 *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  undefined4 local_70;
  char local_6c;
  undefined1 local_6b;
  char *local_68 [3];
  char *local_5c [4];
  char local_4c [12];
  char *local_40 [2];
  char *local_38;
  undefined1 local_34;
  char *local_30;
  undefined1 local_2c;
  char *local_28;
  
  piVar7 = (int *)*param_1;
  local_6c = '\0';
  local_6b = SUB41(param_1,0);
  local_84 = (undefined4 *)0x0;
  local_74 = (char *)0x0;
  local_70 = 0;
  local_78 = (char *)0x0;
  local_7c = (char *)0x0;
  local_80 = (char *)0x0;
  puVar3 = (undefined4 *)fn_00100fc6(0xc,0);
  uVar4 = fn_00100fc6(0x280,0);
  puVar3[2] = uVar4;
  uVar8 = 0;
  iVar9 = 0;
  *puVar3 = local_84;
  puVar3[1] = 0x20;
  local_74 = (char *)puVar3[2];
  pcVar5 = (char *)0x0;
  local_78 = local_74 + 0x280;
  local_7c = local_74 + 0x14;
  local_74[8] = '\0';
  local_74[9] = '\0';
  local_74[10] = '\0';
  local_74[0xb] = '\0';
  local_74[0xc] = '\0';
  local_74[0xd] = '\0';
  local_74[0xe] = '\0';
  local_74[0xf] = '\0';
  *local_74 = '\0';
  local_74[4] = '\0';
  local_74[5] = '\0';
  local_74[6] = '\0';
  local_74[7] = '\0';
  *(char **)(local_74 + 8) = local_74;
  *(char **)(local_74 + 0xc) = local_74;
  local_84 = puVar3;
  do {
    pcVar6 = (char *)(piVar7[7] - piVar7[6] >> 2);
    if (pcVar6 <= pcVar5) {
      local_88 = pcVar6;
      fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,pcVar5);
    }
    iVar2 = (int)pcVar5 * 4;
    pcVar5 = pcVar5 + 1;
    if (-1 < *(int *)(piVar7[6] + iVar2)) {
      iVar9 = iVar9 + 1;
    }
  } while ((int)pcVar5 < 4);
  if (0 < iVar9) {
    uVar10 = 1;
    do {
      pcVar6 = (char *)(uVar8 & 0xff);
      pcVar5 = (char *)(piVar7[7] - piVar7[6] >> 2);
      if (pcVar5 <= pcVar6) {
        local_88 = pcVar5;
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,pcVar6);
      }
      pcVar5 = *(char **)(piVar7[6] + (int)pcVar6 * 4);
      if ((int)pcVar5 < 0) {
        uVar4 = 0;
      }
      else {
        pcVar6 = (char *)(piVar7[1] - *piVar7 >> 2);
        if (pcVar6 <= pcVar5) {
          local_88 = pcVar6;
          fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,pcVar5);
        }
        uVar4 = *(undefined4 *)(*piVar7 + (int)pcVar5 * 4);
      }
      local_4c[0] = fn_00156f30(uVar4,param_2);
      bVar1 = true;
      pcVar5 = *(char **)(local_74 + 4);
      pcVar6 = local_74;
      while (pcVar5 != (char *)0x0) {
        bVar1 = local_4c[0] < pcVar5[0x10];
        pcVar6 = pcVar5;
        if (bVar1) {
          pcVar5 = *(char **)(pcVar5 + 8);
        }
        else {
          pcVar5 = *(char **)(pcVar5 + 0xc);
        }
      }
      if (local_6c == '\0') {
        if (bVar1) {
          if (pcVar6 == *(char **)(local_74 + 8)) {
            local_88 = local_4c;
            fn_0076c958(local_40);
            local_38 = local_40[0];
            local_34 = uVar10;
            goto LAB_006b6a2c;
          }
          if ((*pcVar6 == '\0') && (*(char **)(*(int *)(pcVar6 + 4) + 4) == pcVar6)) {
            pcVar6 = *(char **)(pcVar6 + 0xc);
          }
          else {
            pcVar5 = *(char **)(pcVar6 + 8);
            if (*(char **)(pcVar6 + 8) == (char *)0x0) {
              pcVar5 = *(char **)(pcVar6 + 4);
              pcVar11 = pcVar6;
              while (pcVar6 = pcVar5, pcVar11 == *(char **)(pcVar6 + 8)) {
                pcVar5 = *(char **)(pcVar6 + 4);
                pcVar11 = pcVar6;
              }
            }
            else {
              do {
                pcVar6 = pcVar5;
                pcVar5 = *(char **)(pcVar6 + 0xc);
              } while (*(char **)(pcVar6 + 0xc) != (char *)0x0);
            }
          }
        }
        if (pcVar6[0x10] < local_4c[0]) {
          local_88 = local_4c;
          fn_0076c958(&local_28);
          local_38 = local_28;
          local_34 = uVar10;
        }
        else {
          local_34 = 0;
          local_38 = pcVar6;
        }
      }
      else {
        local_88 = local_4c;
        fn_0076c958(local_5c);
        local_38 = local_5c[0];
        local_34 = uVar10;
      }
LAB_006b6a2c:
      iVar9 = 0;
      pcVar5 = (char *)0x0;
      local_30 = local_38;
      uVar8 = uVar8 + 1;
      local_2c = local_34;
      do {
        pcVar6 = (char *)(piVar7[7] - piVar7[6] >> 2);
        if (pcVar6 <= pcVar5) {
          local_88 = pcVar6;
          fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,pcVar5);
        }
        iVar2 = (int)pcVar5 * 4;
        pcVar5 = pcVar5 + 1;
        if (-1 < *(int *)(piVar7[6] + iVar2)) {
          iVar9 = iVar9 + 1;
        }
      } while ((int)pcVar5 < 4);
    } while ((int)uVar8 < iVar9);
  }
  uVar4 = local_70;
  if (local_74 != (char *)0x0) {
    local_68[0] = local_74;
    local_88 = *(char **)(local_74 + 8);
    fn_0076c1f0(local_5c,&local_84,&local_88,local_68);
    *(char **)(local_74 + 0xc) = local_80;
    local_80 = local_74;
    piVar7 = local_84;
    while (piVar7 != (int *)0x0) {
      local_84 = (undefined4 *)*piVar7;
      fn_001008c4(piVar7[2],piVar7[1],0);
      fn_001008c4(piVar7,1,0);
      piVar7 = local_84;
    }
  }
  return uVar4;
}



int fn_006b6740(int *param_1)

{
  return *(int *)(*param_1 + 0x68) - *(int *)(*param_1 + 100) >> 2;
}



bool fn_006b6724(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x58) != '\0';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x5a);
  }
  return bVar1 && param_1 != 0;
}


