#include "007855bc_007860fc.h"



int * fn_007860fc(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = *param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0x300,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[2] = (int)puVar3;
  param_1[3] = (int)(puVar3 + 0x300);
  param_1[2] = (int)(puVar3 + 0x18);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}



void fn_00785f5c(int *param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = iVar4;
  if (*(int *)(iVar4 + 4) != 0) {
    iVar1 = *(int *)(iVar4 + 4);
    do {
      if (*(short *)(iVar1 + 0x10) < *param_3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  if ((iVar3 == iVar4) || (*param_3 < *(short *)(iVar3 + 0x10))) {
    *param_1 = iVar4;
  }
  else {
    *param_1 = iVar3;
  }
  return;
}



int fn_00785b1c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int local_24;
  undefined1 auStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  while (iVar5 != 0) {
    iVar2 = fn_00190ef0(iVar5 + 0x10,param_2);
    if (iVar2 == 0) {
      iVar1 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  while (iVar2 != 0) {
    iVar3 = fn_00190ef0(param_2,iVar2 + 0x10);
    if (iVar3 == 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar5 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  iVar2 = 0;
  iVar3 = iVar1;
  while (iVar3 != iVar5) {
    iVar2 = iVar2 + 1;
    iVar4 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar4 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar3 = iVar4;
          iVar4 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar4) {
        iVar3 = iVar4;
      }
    }
    else {
      do {
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
  }
  local_28 = iVar5;
  local_24 = iVar1;
  fn_00167740(auStack_20,param_1,&local_24,&local_28);
  return iVar2;
}



void fn_007859a8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_24;
  
  iVar2 = 1;
  pcVar1 = *(char **)(param_2 + 0x10);
  pcVar3 = *(char **)(*(char **)(param_2 + 0x10) + 4);
  while (pcVar3 != (char *)0x0) {
    iVar2 = fn_00190ef0(param_3,pcVar3 + 0x10);
    pcVar1 = pcVar3;
    if (iVar2 == 0) {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    pcVar3 = pcVar1;
    if (iVar2 != 0) {
      if (pcVar1 == *(char **)(*(int *)(param_2 + 0x10) + 8)) {
        fn_0076b3fc(&local_24,param_2,0,pcVar1,param_3);
        *param_1 = local_24;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
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
    iVar2 = fn_00190ef0(pcVar3 + 0x10,param_3);
    if (iVar2 == 0) {
      *param_1 = pcVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  fn_0076b3fc(&local_24,param_2,0,pcVar1,param_3);
  *param_1 = local_24;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void fn_007858d0(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar4 = iVar3;
  if (*(int *)(iVar3 + 4) != 0) {
    uVar1 = *(ushort *)(param_3 + 6);
    iVar7 = *(int *)(param_3 + 8);
    iVar5 = *(int *)(iVar3 + 4);
    do {
      uVar2 = *(ushort *)(iVar5 + 0x16);
      iVar6 = *(int *)(iVar5 + 0x18);
      if (((int)(iVar6 - (iVar7 + (uint)(uVar2 < uVar1))) < 0 ==
           (SBORROW4(iVar6,iVar7) != SBORROW4(iVar6 - iVar7,(uint)(uVar2 < uVar1)))) &&
         ((iVar6 != iVar7 || uVar2 != uVar1 ||
          (*(byte *)(param_3 + 0x20) <= *(byte *)(iVar5 + 0x30))))) {
        iVar6 = *(int *)(iVar5 + 8);
        iVar4 = iVar5;
      }
      else {
        iVar6 = *(int *)(iVar5 + 0xc);
      }
      iVar5 = iVar6;
    } while (iVar6 != 0);
  }
  if (iVar4 != iVar3) {
    uVar1 = *(ushort *)(param_3 + 6);
    uVar2 = *(ushort *)(iVar4 + 0x16);
    iVar5 = *(int *)(param_3 + 8);
    iVar7 = *(int *)(iVar4 + 0x18);
    if (((int)(iVar5 - (iVar7 + (uint)(uVar1 < uVar2))) < 0 ==
         (SBORROW4(iVar5,iVar7) != SBORROW4(iVar5 - iVar7,(uint)(uVar1 < uVar2)))) &&
       ((iVar5 != iVar7 || uVar1 != uVar2 || (*(byte *)(iVar4 + 0x30) <= *(byte *)(param_3 + 0x20)))
       )) {
      *param_1 = iVar4;
      return;
    }
  }
  *param_1 = iVar3;
  return;
}



int * fn_007855bc(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint local_2c;
  uint uStack_28;
  
  uVar8 = *(uint *)(*param_1 + -4);
  uVar1 = fn_00100b58(param_2);
  uVar2 = *(uint *)(*param_1 + -4);
  if (uVar2 < uVar8) {
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    fn_002ff628(9,&DAT_008c7610,&DAT_008c7610,uVar8,uVar2);
  }
  if (-uVar1 - 0xf < *(uint *)(*param_1 + -4)) {
    fn_002ff628(8,&DAT_008c7610,&DAT_008c7610,*(uint *)(*param_1 + -4),-uVar1 - 0xf);
  }
  puVar3 = (undefined4 *)*param_1;
  uVar2 = puVar3[-1];
  uVar9 = uVar2 + uVar1;
  if (uVar9 == 0) {
    if (puVar3 != &DAT_008f9cf4) {
      piVar4 = puVar3 + -3;
      iVar10 = *piVar4;
      if ((iVar10 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar10 + -1, iVar10 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = (int)&DAT_008f9cf4;
    return param_1;
  }
  iVar10 = uVar2 - uVar8;
  uVar7 = puVar3[-3] + 1;
  bVar12 = puVar3[-3] != -1;
  bVar11 = uVar7 == 1;
  if (uVar7 < 2) {
    bVar12 = (uint)puVar3[-2] <= uVar9;
    bVar11 = uVar9 == puVar3[-2];
  }
  if (bVar12 && !bVar11) {
LAB_0078569c:
    local_2c = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (local_2c < uVar2 + 0x80) {
      local_2c = uVar2 + 0x80;
    }
    puVar6 = &uStack_28;
    if (uVar9 <= local_2c) {
      puVar6 = &local_2c;
    }
    uStack_28 = uVar9;
    uVar2 = *puVar6;
    if (0xfffffff1 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,0xfffffff1);
    }
    if (uVar2 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,uVar2);
    }
    if (uVar2 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar2 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = uVar9;
      puVar5 = (undefined2 *)((int)puVar3 + uVar9 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar2;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    if (uVar8 != 0) {
      fn_00301a9c(puVar3 + 3,*param_1,uVar8 << 1);
    }
    if (uVar1 != 0) {
      fn_00301a9c((int)puVar3 + uVar8 * 2 + 0xc,param_2,uVar1 << 1);
    }
    if (iVar10 != 0) {
      fn_00301a9c((int)puVar3 + uVar1 * 2 + uVar8 * 2 + 0xc,*param_1 + uVar8 * 2,iVar10 * 2);
    }
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar4 = (undefined4 *)*param_1 + -3;
      iVar10 = *piVar4;
      if ((iVar10 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar10 + -1, iVar10 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = (int)(puVar3 + 3);
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      bVar11 = param_2 <= puVar3;
      if (puVar3 <= param_2) {
        bVar11 = (undefined4 *)((int)puVar3 + uVar2 * 2) <= param_2;
      }
      if (!bVar11) goto LAB_0078569c;
    }
    if (iVar10 != 0) {
      fn_001006ac(uVar8 * 2 + uVar1 * 2 + (int)puVar3,uVar8 * 2 + (int)puVar3,iVar10);
    }
    if (uVar1 != 0) {
      fn_001006ac(*param_1 + uVar8 * 2,param_2,uVar1);
    }
    *(uint *)(*param_1 + -4) = uVar9;
    *(undefined2 *)(*param_1 + uVar9 * 2) = 0;
  }
  return param_1;
}


