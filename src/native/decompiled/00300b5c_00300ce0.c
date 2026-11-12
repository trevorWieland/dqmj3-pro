#include "00300b5c_00300ce0.h"



uint fn_00300ce0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar10 = (uint *)(param_1 + 0x24);
  (**(code **)(*param_2 + 0xa0))(param_2,param_3,param_3,*(code **)(*param_2 + 0xa0),param_4);
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  uVar9 = 0;
  if ((int)((int)puVar4 - *puVar10) >> 2 != 0) {
    do {
      uVar11 = (int)((int)puVar4 - *puVar10) >> 2;
      if (uVar11 <= uVar9) {
        fn_002ff628(9,&DAT_008c765b,&DAT_008c765b,uVar9,uVar11);
      }
      if (*(int *)(*puVar10 + uVar9 * 4) == 0) {
        uVar11 = (int)(*(int *)(param_1 + 0x28) - *puVar10) >> 2;
        if (uVar11 <= uVar9) {
          fn_002ff628(9,&DAT_008c765b,&DAT_008c765b,uVar9,uVar11);
        }
        *(int **)(*puVar10 + uVar9 * 4) = param_2;
        return uVar9;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)((int)puVar4 - *puVar10) >> 2));
  }
  if (puVar4 == *(undefined4 **)(param_1 + 0x2c)) {
    uVar9 = (int)((int)puVar4 - *puVar10) >> 2;
    if (uVar9 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x2c) - *puVar10) >> 2)) {
      *(undefined4 **)(param_1 + 0x28) = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = puVar4[-1];
      }
      puVar2 = puVar4 + -1;
      puVar6 = puVar4;
      if (puVar4 < puVar2) {
        if (0 < (int)puVar2 - (int)puVar4) {
          iVar8 = (int)puVar2 - (int)puVar4 >> 2;
          iVar5 = 0;
          do {
            iVar8 = iVar8 + -1;
            puVar4[iVar5 + -1] = puVar2[iVar5 + -1];
            iVar5 = iVar5 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        while (puVar4 != puVar2) {
          puVar2 = puVar2 + -1;
          puVar6[-1] = *puVar2;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar4 = param_2;
    }
    else {
      uVar11 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (uVar11 < uVar9 + 0x20) {
        uVar11 = uVar9 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar6 = puVar1;
      for (puVar2 = (undefined4 *)*puVar10; puVar2 != puVar4; puVar2 = puVar2 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar2;
        }
        puVar6 = puVar6 + 1;
      }
      puVar2 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x28);
      puVar2 = (undefined4 *)(((int)puVar4 - *puVar10 & 0xfffffffc) + (int)puVar1);
      for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        puVar2 = puVar2 + 1;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar4;
        }
      }
      uVar7 = *puVar10;
      uVar3 = *(uint *)(param_1 + 0x28);
      uVar9 = uVar7;
      if (uVar3 < uVar7) {
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 != uVar3);
      }
      fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0x2c) - uVar7) >> 2,0);
      *(undefined4 **)(param_1 + 0x2c) = puVar1 + uVar11;
      *(undefined4 **)(param_1 + 0x28) = puVar1 + ((int)(uVar3 - uVar7) >> 2) + 1;
      *puVar10 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x28) = puVar4 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_2;
    }
  }
  return ((int)(*(int *)(param_1 + 0x28) - *puVar10) >> 2) - 1;
}



uint fn_00300c38(char *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  uint local_28;
  
  bVar1 = false;
  cVar3 = *param_1;
  pcVar7 = param_1 + 1;
  bVar2 = false;
  if (cVar3 == '0') {
    cVar3 = *pcVar7;
    bVar1 = true;
    pcVar7 = param_1 + 2;
    if ((cVar3 == 'x') || (cVar3 == 'X')) {
      if ((param_3 == 0) || (param_3 == 0x10)) {
        cVar3 = *pcVar7;
        bVar1 = false;
        param_3 = 0x10;
        pcVar7 = param_1 + 3;
      }
    }
    else if (param_3 == 0) {
      param_3 = 8;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar8 = 0;
  local_28 = 0;
  while (iVar5 = fn_002ff284(cVar3,param_3), -1 < iVar5) {
    bVar1 = true;
    uVar4 = param_3 * local_28 + iVar5;
    local_28 = uVar4 & 0xffff;
    uVar8 = uVar8 * param_3 + (uVar4 >> 0x10);
    if (0xffff < uVar8) {
      bVar2 = true;
    }
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      param_1 = pcVar7 + -1;
    }
    *param_2 = param_1;
  }
  if (bVar2) {
    puVar6 = (undefined4 *)fn_002ff798();
    *puVar6 = 2;
    local_28 = 0xffffffff;
  }
  else {
    local_28 = uVar8 << 0x10 | local_28;
  }
  return local_28;
}



uint fn_00300c22(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



int fn_00300c0c(int param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*param_2 << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



undefined4 fn_00300b5c(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (param_2 < (int)uVar1) {
    iVar4 = uVar1 - param_2;
  }
  else {
    iVar4 = 0;
  }
  param_1[6] = param_1[6] - (iVar4 + param_2 + param_4);
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    fn_002ff970(param_1);
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(param_3 + iVar3),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    fn_002ff970(param_1);
  }
  while (0 < iVar4) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar4 = iVar4 + -1;
  }
  while (0 < param_2) {
    (*(code *)param_1[1])(*(byte *)((int)param_1 + param_2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    param_2 = param_2 + -1;
  }
  fn_002ff99c(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


