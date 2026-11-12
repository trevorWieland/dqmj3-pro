#include "00302740_00302988.h"



undefined4 fn_00302988(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c;
  
  puVar7 = &local_20;
  iVar1 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  puVar10 = (uint *)(param_1 + 0xc);
  local_20 = 0x15e;
  if ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc) >> 2) < 0x15e) {
    uVar11 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
    local_1c = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c < uVar11 + 0x20) {
      local_1c = uVar11 + 0x20;
    }
    puVar2 = &local_1c;
    if (local_1c < 0x15f) {
      puVar2 = &local_20;
    }
    uVar11 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = *(undefined4 **)(param_1 + 0x10);
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if (*(uint *)(param_1 + 0x10) < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != *(uint *)(param_1 + 0x10));
    }
    fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x14) - uVar5) >> 2,0);
    uVar6 = *puVar10;
    *puVar10 = (uint)puVar3;
    *(uint *)(param_1 + 0x10) = (*(int *)(param_1 + 0x10) - uVar6 & 0xfffffffc) + (int)puVar3;
    *(undefined4 **)(param_1 + 0x14) = puVar3 + uVar11;
  }
  local_1c = 0x50;
  if (iVar1 == 9) {
    local_1c = 0x80;
  }
  puVar10 = (uint *)(param_1 + 0x18);
  if (0x3fffffff < local_1c) {
    local_20 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c764b);
  }
  if ((uint)((int)(*(int *)(param_1 + 0x20) - *puVar10) >> 2) < local_1c) {
    uVar11 = (int)(*(int *)(param_1 + 0x1c) - *puVar10) >> 2;
    local_20 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_20 < uVar11 + 0x20) {
      local_20 = uVar11 + 0x20;
    }
    if (local_20 <= local_1c) {
      puVar7 = &local_1c;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = *(undefined4 **)(param_1 + 0x1c);
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if (*(uint *)(param_1 + 0x1c) <= uVar5) {
      for (; uVar6 != *(uint *)(param_1 + 0x1c); uVar6 = uVar6 + 4) {
      }
    }
    fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x20) - uVar5) >> 2,0);
    uVar6 = *puVar10;
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) - uVar6 & 0xfffffffc) + (int)puVar3;
    *(undefined4 **)(param_1 + 0x20) = puVar3 + uVar11;
  }
  return 1;
}



undefined4 fn_00302930(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  (**(code **)(*param_2 + 0xa0))(param_2,param_3);
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 4) = param_2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = *(undefined4 *)(param_1 + 4);
  return 0;
}



undefined4 fn_0030282a(undefined4 param_1,uint param_2,char *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  if ((param_2 == 0) || (param_2 >> 5 != 0)) {
    return 0;
  }
  if (param_3 != (char *)0x0) {
    if (*param_3 != '*') {
      uVar1 = fn_00302894();
      return uVar1;
    }
    if (param_3[1] == '\0') {
      return 0;
    }
    pbVar5 = (byte *)(param_3 + 1);
    uVar4 = 0;
    do {
      uVar6 = 0;
      iVar3 = 0;
      do {
        uVar2 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
        if (uVar2 < 0x3a) {
          uVar2 = uVar2 - 0x30;
        }
        else {
          uVar2 = uVar2 - 0x57;
        }
        uVar6 = uVar6 << 4 | uVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      if ((1 << (uVar4 & 0xff) & param_2) != 0) {
        iVar3 = fn_00300190();
        *(uint *)(iVar3 + uVar4 * 4) = uVar6;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 5);
  }
  uVar1 = fn_0030278c(param_1,param_2);
  return uVar1;
}



undefined1 * fn_0030278c(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  if ((param_2 & ~-param_2) != 0) {
    pcVar7 = param_1 + 1;
    iVar8 = 0;
    *param_1 = 0x2a;
    iVar2 = fn_00300190();
    do {
      iVar6 = 0;
      uVar4 = *(uint *)(iVar2 + iVar8 * 4);
      do {
        bVar1 = (byte)(uVar4 >> 0x18);
        if (uVar4 >> 0x1c < 10) {
          cVar5 = (bVar1 >> 4) + 0x30;
        }
        else {
          cVar5 = (bVar1 >> 4) + 0x57;
        }
        *pcVar7 = cVar5;
        iVar6 = iVar6 + 1;
        pcVar7 = pcVar7 + 1;
        uVar4 = uVar4 << 4;
      } while (iVar6 < 8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    *pcVar7 = '\0';
    return param_1;
  }
  if (param_2 == 4) {
    iVar2 = fn_00300190();
    uVar4 = *(uint *)(iVar2 + 8);
  }
  else if ((int)param_2 < 5) {
    if (param_2 == 1) {
      puVar3 = (uint *)fn_00300190();
      uVar4 = *puVar3;
    }
    else {
      if (param_2 != 2) {
        return (undefined1 *)0x0;
      }
      iVar2 = fn_00300190();
      uVar4 = *(uint *)(iVar2 + 4);
    }
  }
  else if (param_2 == 8) {
    iVar2 = fn_00300190();
    uVar4 = *(uint *)(iVar2 + 0xc);
  }
  else {
    if (param_2 != 0x10) {
      return (undefined1 *)0x0;
    }
    iVar2 = fn_00300190();
    uVar4 = *(uint *)(iVar2 + 0x10);
  }
  if (uVar4 == 0) {
    return &DAT_00302928;
  }
  return (undefined1 *)(*(int *)((uVar4 & 0xfffffffc) - 4) + (uVar4 & 0xfffffffc));
}



undefined4 fn_00302740(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (((uVar1 & 3) == 0) || ((int)(uVar1 << 9) < 0)) {
    return 1;
  }
  if ((param_3 == 0x100) || (param_3 == 0x200)) {
    if (0xfffffe < param_4 - 1U) {
      return 1;
    }
  }
  else {
    if (param_3 != 0x400) {
      return 1;
    }
    param_2 = param_1 + 0x24;
    param_4 = 1;
  }
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x1c) = param_4;
  *(int *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 0xc) = uVar1 & 0xfffff0ff | param_3;
  return 0;
}


