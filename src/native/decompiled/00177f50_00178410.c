#include "00177f50_00178410.h"



undefined1 fn_00178410(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00191f08();
  if (((iVar1 != 0) && (iVar1 = fn_00191f08(), iVar1 != 0)) &&
     (iVar1 = fn_00192114(), iVar1 != -4)) {
    uVar2 = *(undefined1 *)(iVar1 + 0xac);
  }
  return uVar2;
}



undefined4 fn_001783bc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = fn_00191f08();
  if ((((iVar1 != 0) && (iVar1 = fn_00184c50(), iVar1 == 0)) &&
      (iVar1 = fn_00191f08(), iVar1 != 0)) && (iVar1 = fn_00192114(), iVar1 != -4)) {
    *(undefined1 *)(iVar1 + 0xac) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
    uVar2 = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
  }
  return uVar2;
}



undefined8 fn_00178324(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1 << 1;
  uVar2 = (param_1 & 0x7fffffff) >> 0x13;
  uVar1 = param_2 << 0xb;
  if (iVar5 != 0 || param_2 != 0) {
    uVar2 = uVar2 + 0x7800;
  }
  uVar3 = param_1 << 0xb | param_2 >> 0x15;
  uVar2 = param_1 & 0x80000000 | uVar2 >> 1;
  if (iVar5 != 0 || param_2 != 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  if (iVar5 >> 0x15 != 0) {
    if (iVar5 >> 0x15 == -1) {
      uVar2 = uVar2 | 0x40000000;
    }
    return CONCAT44(uVar3,uVar2);
  }
  if ((uVar3 & 0x80000000) == 0) {
    return CONCAT44(uVar3,uVar2);
  }
  uVar4 = uVar3 & 0x7fffffff;
  if (uVar4 != 0) {
    if (uVar4 >> 0x10 == 0) {
      uVar4 = uVar3 << 0x10;
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0;
    }
    if (uVar4 >> 0x18 == 0) {
      uVar4 = uVar4 << 8;
      iVar5 = iVar5 + 8;
    }
    if (uVar4 >> 0x1c == 0) {
      uVar4 = uVar4 << 4;
      iVar5 = iVar5 + 4;
    }
    if (uVar4 >> 0x1e == 0) {
      uVar4 = uVar4 << 2;
      iVar5 = iVar5 + 2;
    }
    if (-1 < (int)uVar4) {
      iVar5 = iVar5 + 1;
    }
    if (-1 < (int)uVar4) {
      uVar4 = uVar4 << 1;
    }
    return CONCAT44(uVar4 | uVar1 >> (0x20U - iVar5 & 0xff),(uVar2 - iVar5) + 1);
  }
  if ((param_2 & 0x1fffff) >> 5 == 0) {
    uVar1 = param_2 << 0x1b;
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0;
  }
  if (uVar1 >> 0x18 == 0) {
    uVar1 = uVar1 << 8;
    iVar5 = iVar5 + 8;
  }
  if (uVar1 >> 0x1c == 0) {
    uVar1 = uVar1 << 4;
    iVar5 = iVar5 + 4;
  }
  if (uVar1 >> 0x1e == 0) {
    uVar1 = uVar1 << 2;
    iVar5 = iVar5 + 2;
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar1 << 1;
    iVar5 = iVar5 + 1;
  }
  return CONCAT44(uVar1,(uVar2 - 0x1f) - iVar5);
}



uint * fn_001782b8(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0 && ((uint)param_2 & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_2;
      if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) break;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    }
  }
  do {
    iVar3 = param_3 + -1;
    if (param_3 < 1) {
      return param_1;
    }
    uVar4 = *param_2;
    puVar2 = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)uVar4;
    puVar1 = puVar2;
    param_2 = (uint *)((int)param_2 + 1);
    param_3 = iVar3;
  } while ((char)uVar4 != '\0');
  fn_00158f6c(puVar2,iVar3);
  return param_1;
}



uint * fn_00178290(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  iVar1 = fn_002febd8(param_2);
  iVar1 = iVar1 + 1;
  puVar2 = (uint *)(param_1 + 0x10);
  puVar3 = puVar2;
  if (((uint)puVar2 & 3) == 0 && ((uint)param_2 & 3) == 0) {
    while (3 < iVar1) {
      uVar6 = *param_2;
      if ((uVar6 + 0xfefefeff & ~uVar6 & 0x80808080) != 0) break;
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -4;
    }
  }
  do {
    iVar5 = iVar1 + -1;
    if (iVar1 < 1) {
      return puVar2;
    }
    uVar6 = *param_2;
    puVar4 = (uint *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)uVar6;
    puVar3 = puVar4;
    param_2 = (uint *)((int)param_2 + 1);
    iVar1 = iVar5;
  } while ((char)uVar6 != '\0');
  fn_00158f6c(puVar4,iVar5,iVar5,0,unaff_r4,in_lr);
  return puVar2;
}



void fn_001781f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_2 == param_1) {
    return;
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  return;
}



void fn_0017811c(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[4];
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 == (int *)param_1[3]) {
      if (*param_1 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar2 = *(uint *)(*param_1 + 4);
        uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar4 < uVar2 + 0x20) {
          uVar4 = uVar2 + 0x20;
        }
      }
      piVar1 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar4 * 0xc,0);
      piVar1[2] = iVar3;
      *piVar1 = *param_1;
      piVar1[1] = uVar4;
      *param_1 = (int)piVar1;
      piVar1 = (int *)piVar1[2];
      param_1[2] = (int)piVar1;
      param_1[3] = (int)(piVar1 + uVar4 * 3);
    }
    param_1[2] = (int)(piVar1 + 3);
  }
  else {
    param_1[1] = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = *param_2;
  }
  *piVar1 = iVar5;
  piVar1[1] = *(int *)(iVar5 + 4);
  **(undefined4 **)(iVar5 + 4) = piVar1;
  *(int **)(iVar5 + 4) = piVar1;
  param_1[5] = param_1[5] + 1;
  return;
}



char * fn_00177f50(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined *local_58;
  undefined4 local_54 [2];
  char *local_4c;
  undefined *local_48;
  undefined1 auStack_44 [4];
  undefined *local_40;
  undefined1 auStack_3c [4];
  char *local_38;
  undefined1 local_34;
  
  local_58 = &DAT_00855a94;
  fn_0015e6f0(local_54,&DAT_007db524);
  local_48 = &DAT_00855a94;
  fn_0015e6f0(auStack_44,*(undefined4 *)(param_2 + 4));
  local_40 = &DAT_00855a94;
  fn_0015e6f0(auStack_3c,local_54[0]);
  iVar2 = 1;
  pcVar1 = *(char **)(param_1 + 0x10);
  pcVar3 = *(char **)(*(char **)(param_1 + 0x10) + 4);
  while (pcVar3 != (char *)0x0) {
    iVar2 = fn_00190ef0(&local_48,pcVar3 + 0x10);
    pcVar1 = pcVar3;
    if (iVar2 == 0) {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    pcVar3 = pcVar1;
    if (iVar2 != 0) {
      if (pcVar1 == *(char **)(*(int *)(param_1 + 0x10) + 8)) {
        fn_00183a34(&local_4c,param_1,0,pcVar1,&local_48);
        local_38 = local_4c;
        local_34 = 1;
        goto LAB_001780e4;
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
    iVar2 = fn_00190ef0(pcVar3 + 0x10,&local_48);
    if (iVar2 == 0) {
      local_34 = 0;
      local_38 = pcVar3;
      goto LAB_001780e4;
    }
  }
  fn_00183a34(&local_4c,param_1,0,pcVar1,&local_48);
  local_38 = local_4c;
  local_34 = 1;
LAB_001780e4:
  pcVar1 = local_38;
  iVar2 = fn_00170f54(&local_40);
  fn_00170f54(iVar2 + -8);
  fn_00170f54(&local_58);
  return pcVar1 + 0x18;
}


