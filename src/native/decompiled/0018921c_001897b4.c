#include "0018921c_001897b4.h"



uint fn_001897b4(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = fn_001932fc();
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    bVar3 = uVar2 != 0xfffffff9;
    if (bVar3) {
      uVar2 = 0xf9610c02;
    }
    if (bVar3 && uVar1 != uVar2) {
      fn_0015e590(uVar1,0x1897e8);
    }
  }
  DAT_008c3c3c = 0;
  return uVar1;
}



undefined4 * fn_00189790(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x23c;
  }
  else {
    uVar1 = 0x23d;
  }
  *param_1 = 1;
  param_1[1] = uVar1 | 0xf0000;
  return param_1 + 2;
}



undefined4 fn_0018965c(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char *local_38 [4];
  undefined *puStack_28;
  char *pcStack_24;
  undefined *puStack_20;
  char *pcStack_1c;
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  bVar1 = param_2[param_3];
  bVar2 = false;
  uVar3 = (int)(char)bVar1 - 0x30;
  if (uVar3 < 10) {
    local_40 = (uint)bVar1;
  }
  else {
    if ((char)bVar1 != 0x2d) {
      return 0;
    }
    uVar9 = 0;
    uVar3 = 7;
    pcVar6 = (char *)&DAT_0018976c;
    pcVar7 = (char *)&local_40;
    do {
      uVar9 = uVar9 + 1;
      pcVar8 = pcVar7 + 1;
      *pcVar7 = *pcVar6;
      bVar10 = pcVar6[1] == '\0';
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar8;
    } while ((bVar10 || uVar9 < 8) && (!bVar10 && uVar9 != 7));
    *pcVar8 = '\0';
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar3 = (uint)*param_2;
    }
    if (param_3 != 1 || uVar3 != 0x2d) goto LAB_00189704;
  }
  bVar2 = true;
LAB_00189704:
  local_38[0] = "yellow";
  local_38[1] = "yellow";
  local_38[2] = "purple";
  local_38[3] = "pink";
  puStack_28 = &DAT_0085ca9c;
  pcStack_24 = "green";
  puStack_20 = &DAT_0085ca9c;
  pcStack_1c = "yellow";
  if (bVar2) {
    puVar5 = &DAT_00189778;
  }
  else {
    puVar5 = &DAT_0018977c;
  }
  fn_0017d96c(&local_60,0x20,0x1f,(char *)&DAT_00189780,puVar5,local_38[*(byte *)(param_1 + 0x18)],
               &local_40);
  uVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4),&local_60);
  return uVar4;
}



void fn_00189524(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  uVar1 = (&DAT_007bab54)[param_2];
  if ((uVar1 & 0xff00) == 0) {
    if ((uVar1 & 0xf0000) != 0) {
      uVar2 = 0xfff0ffff;
    }
  }
  else {
    uVar2 = 0xffff00ff;
  }
  if (param_3 != 0) {
    uVar1 = uVar1 | uVar2 & *(uint *)(param_1 + 0x60);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x60) & ~uVar1;
  }
  *(uint *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 300) = 0;
  if (param_3 == 0) {
    if (param_2 < 0x10) {
      fn_00192e20(param_1,0,0xf);
      return;
    }
    fn_00192e20(param_1,0x10,0x15,1);
    return;
  }
  if (param_2 < 0x10) {
    if (*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,0,0);
    }
    **(uint **)(param_1 + 0x120) = param_2;
    return;
  }
  uVar1 = *(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) >> 2;
  if (uVar1 < 2) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,1,uVar1);
  }
  *(uint *)(*(int *)(param_1 + 0x120) + 4) = param_2;
  return;
}



bool fn_0018921c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  int local_6c [4];
  int local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int iStack_3c;
  char *local_38;
  undefined1 local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_6c[0] = 0;
  if (*(int *)(param_2 + 0x20) != 0) {
    local_6c[0] = *(int *)(param_2 + 8) + param_2;
  }
  local_6c[1] = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    local_6c[1] = *(int *)(param_2 + 0xc) + param_2;
  }
  local_6c[2] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    local_6c[2] = *(int *)(param_2 + 0x10) + param_2;
  }
  local_6c[3] = 0;
  if (*(int *)(param_2 + 0x2c) != 0) {
    local_6c[3] = *(int *)(param_2 + 0x14) + param_2;
  }
  piVar9 = (int *)(param_2 + 0x18);
  local_5c = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    local_5c = *piVar9 + param_2;
  }
  piVar8 = (int *)(param_2 + 0x1c);
  uVar11 = 0;
  bVar14 = *(int *)(param_2 + 0x34) != 0;
  if (bVar14) {
    piVar9 = (int *)*piVar8;
  }
  else {
    piVar8 = (int *)0x0;
  }
  local_54 = 0;
  if (bVar14) {
    piVar8 = (int *)((int)piVar9 + param_2);
  }
  local_58 = piVar8;
  local_50 = 0;
  uVar1 = *(uint *)(param_2 + 0x34) >> 2;
  if (uVar1 != 0) {
    do {
      uVar4 = piVar8[uVar11];
      uVar6 = (uVar4 & 0x1fffffff) >> 0x19;
      if (uVar6 == 5) {
        iVar5 = 3;
LAB_00189324:
        if ((uVar4 >> 0x1d != 2) || (iVar2 = local_4c, local_4c == 0)) {
          iVar2 = local_6c[uVar4 >> 0x1d];
        }
        iVar12 = local_6c[iVar5] + *(int *)(iVar2 + (uVar4 & 0x1ffffff) * 4);
        uVar6 = fn_0015fa88(iVar12);
        iVar7 = *(int *)(param_1 + 0x14);
        uVar6 = uVar6 >> 3;
        iVar5 = iVar7;
        iVar2 = *(int *)(iVar7 + 4);
        while (iVar2 != 0) {
          if (*(uint *)(iVar2 + 0x10) < uVar6) {
            iVar2 = *(int *)(iVar2 + 0xc);
          }
          else {
            iVar5 = iVar2;
            iVar2 = *(int *)(iVar2 + 8);
          }
        }
        if ((iVar5 == iVar7) || (uVar6 < *(uint *)(iVar5 + 0x10))) {
          iVar5 = iVar7;
        }
        if (iVar5 == iVar7) {
          local_40 = uVar6;
          iStack_3c = iVar12;
          pcVar10 = *(char **)(param_1 + 0x14);
          bVar14 = true;
          pcVar13 = pcVar10;
          pcVar3 = *(char **)(pcVar10 + 4);
          while (pcVar3 != (char *)0x0) {
            bVar14 = uVar6 < *(uint *)(pcVar3 + 0x10);
            pcVar13 = pcVar3;
            if (bVar14) {
              pcVar3 = *(char **)(pcVar3 + 8);
            }
            else {
              pcVar3 = *(char **)(pcVar3 + 0xc);
            }
          }
          if (*(char *)(param_1 + 0x1c) == '\0') {
            if (bVar14) {
              if (pcVar13 == *(char **)(pcVar10 + 8)) {
                fn_0019cf28(&local_2c);
                local_38 = local_2c;
                local_34 = 1;
                goto LAB_001894fc;
              }
              if ((*pcVar13 == '\0') && (*(char **)(*(int *)(pcVar13 + 4) + 4) == pcVar13)) {
                pcVar13 = *(char **)(pcVar13 + 0xc);
              }
              else {
                pcVar3 = *(char **)(pcVar13 + 8);
                if (*(char **)(pcVar13 + 8) == (char *)0x0) {
                  pcVar3 = *(char **)(pcVar13 + 4);
                  pcVar10 = pcVar13;
                  while (pcVar13 = pcVar3, pcVar10 == *(char **)(pcVar13 + 8)) {
                    pcVar3 = *(char **)(pcVar13 + 4);
                    pcVar10 = pcVar13;
                  }
                }
                else {
                  do {
                    pcVar13 = pcVar3;
                    pcVar3 = *(char **)(pcVar13 + 0xc);
                  } while (*(char **)(pcVar13 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(uint *)(pcVar13 + 0x10) < uVar6) {
              fn_0019cf28(&local_28);
              local_38 = local_28;
              local_34 = 1;
            }
            else {
              local_38 = pcVar13;
              local_34 = 0;
            }
          }
          else {
            fn_0019cf28(&local_30);
            local_38 = local_30;
            local_34 = 1;
          }
        }
      }
      else if (uVar6 == 10) {
        iVar5 = 4;
        goto LAB_00189324;
      }
LAB_001894fc:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar1);
  }
  return *(int *)(param_1 + 0x18) != 0;
}


