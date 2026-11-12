#include "0049599c_00495f88.h"



undefined4 * fn_00495f88(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = &DAT_00854524;
  while( true ) {
    puVar2 = (uint *)param_1[3];
    if ((uint *)param_1[2] == puVar2) break;
    uVar1 = *(uint *)param_1[2];
    fn_0049599c(param_1,(uVar1 & 0xff) >> 4,uVar1 & 0xf);
  }
  uVar1 = param_1[2];
  uVar5 = param_1[3];
  if (uVar1 < uVar5) {
    puVar2 = (uint *)(uVar5 - uVar1);
  }
  if (uVar1 < uVar5) {
    puVar2 = (uint *)((int)puVar2 << 0x1c);
  }
  if (uVar1 < uVar5) {
    uVar3 = (uint)puVar2 >> 0x1f;
  }
  else {
    uVar3 = 0;
  }
  iVar4 = uVar3 + 1;
  if (iVar4 < ((int)(uVar5 - uVar1) >> 3) + 1) {
    do {
      iVar4 = iVar4 + 2;
    } while (iVar4 < ((int)(uVar5 - uVar1) >> 3) + 1);
  }
  if (uVar1 != 0) {
    if (*(code **)(uVar1 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar1 - 8))();
    }
  }
  return param_1;
}



undefined4 * fn_00495e28(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_18;
  uint local_14;
  
  *param_1 = &DAT_00854524;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_18 = 0x10;
  if ((uint)((int)(param_1[4] - param_1[2]) >> 3) < 0x10) {
    uVar12 = (int)(param_1[3] - param_1[2]) >> 3;
    local_14 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    if (local_14 < uVar12 + 0x20) {
      local_14 = uVar12 + 0x20;
    }
    puVar5 = &local_18;
    if (0x10 < local_14) {
      puVar5 = &local_14;
    }
    uVar12 = *puVar5;
    puVar1 = (undefined1 *)fn_0015ece0(uVar12 << 3);
    puVar10 = (undefined1 *)param_1[3];
    puVar2 = puVar1;
    for (puVar6 = (undefined1 *)param_1[2]; puVar6 != puVar10; puVar6 = puVar6 + 8) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *puVar6;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar6 + 4);
      }
      puVar2 = puVar2 + 8;
    }
    uVar3 = param_1[3];
    uVar7 = param_1[2];
    if (uVar7 < uVar3) {
      uVar11 = (uVar3 - uVar7 & 0xf) >> 3;
    }
    else {
      uVar11 = 0;
    }
    iVar4 = uVar11 + 1;
    iVar8 = (int)(uVar3 - uVar7) >> 3;
    if (iVar4 < iVar8 + 1) {
      do {
        iVar4 = iVar4 + 2;
      } while (iVar4 < iVar8 + 1);
    }
    if (uVar7 != 0) {
      pcVar9 = *(code **)(uVar7 - 8);
      if (pcVar9 == (code *)0x0) {
        fn_0030233c((undefined4 *)(uVar7 - 8));
      }
      else {
        (*pcVar9)();
      }
    }
    iVar8 = param_1[2];
    param_1[2] = puVar1;
    param_1[3] = puVar1 + (param_1[3] - iVar8 & 0xfffffff8);
    param_1[4] = puVar1 + uVar12 * 8;
  }
  return param_1;
}



void fn_00495b0c(int param_1,int *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  int *piVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_88 [4];
  int local_84;
  char local_24;
  uint local_20;
  
  local_20 = (uint)*(byte *)((int)param_2 + 0x26);
  uVar1 = *(undefined2 *)((int)param_2 + 0x86);
  piVar2 = (int *)fn_00495d00(param_1,&local_20);
  if (piVar2 == (int *)0x0) {
    iVar9 = fn_001249d0();
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = *(int *)(iVar9 + 0xc);
    }
    piVar2 = (int *)(iVar3 + 0x50);
    (**(code **)(*piVar2 + 8))();
    for (iVar3 = *(int *)(param_1 + 8); *(int *)(param_1 + 0xc) != iVar3; iVar3 = iVar3 + 8) {
    }
    puVar6 = (uint *)(param_2 + 1);
    do {
      uVar4 = *puVar6 - 1;
      bVar8 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar8);
    *puVar6 = uVar4;
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(param_2 + 2);
    }
    if (bVar8 && uVar4 == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      (**(code **)(*param_2 + 4))();
    }
    pcVar5 = *(code **)(*piVar2 + 0xc);
LAB_00495cf4:
    (*pcVar5)(piVar2);
    return;
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x14) + 0xac);
  if (piVar7 != (int *)0x0) {
    fn_0013ce04(auStack_88);
    fn_00455394(auStack_88,param_2 + 0x37);
    iVar3 = (**(code **)(*piVar7 + 0xc))(piVar7,auStack_88,uVar1);
    if (local_24 == '\0') {
      fn_0014ea80(auStack_88);
    }
    iVar9 = *(int *)(local_84 + 8);
    iVar10 = *(int *)(local_84 + 0xc);
    iVar11 = *(int *)(local_84 + 0x10);
    iVar12 = *(int *)(local_84 + 0x14);
    iVar13 = *(int *)(local_84 + 0x18);
    iVar14 = *(int *)(local_84 + 0x1c);
    param_2[0x38] = *(int *)(local_84 + 4);
    param_2[0x39] = iVar9;
    param_2[0x3a] = iVar10;
    param_2[0x3b] = iVar11;
    param_2[0x3c] = iVar12;
    param_2[0x3d] = iVar13;
    param_2[0x3e] = iVar14;
    fn_0013ce98(auStack_88);
    if (iVar3 != 0) {
      puVar6 = (uint *)(param_2 + 1);
      do {
        uVar4 = *puVar6 - 1;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar4;
      bVar8 = uVar4 == 0;
      if (bVar8) {
        uVar4 = (uint)*(byte *)(param_2 + 2);
      }
      if (!bVar8 || uVar4 != 0) {
        return;
      }
      *(undefined1 *)(param_2 + 2) = 1;
      pcVar5 = *(code **)(*param_2 + 4);
      piVar2 = param_2;
      goto LAB_00495cf4;
    }
  }
  iVar3 = (**(code **)(*piVar2 + 8))(piVar2,uVar1,*(byte *)((int)param_2 + 0x25) & 0xf,param_2);
  if (iVar3 == 0) {
    fn_00468d84(*(undefined4 *)(param_1 + 0x14),param_2[0x36],param_2 + 0x37);
    puVar6 = (uint *)(param_2 + 1);
    do {
      uVar4 = *puVar6 - 1;
      bVar8 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar8);
    *puVar6 = uVar4;
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(param_2 + 2);
    }
    if (bVar8 && uVar4 == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      (**(code **)(*param_2 + 4))();
    }
  }
  return;
}



undefined4 fn_0049599c(int param_1,int param_2,uint param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 uVar9;
  byte *local_20;
  
  local_20 = param_4;
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar8 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar8 + 8))(piVar8);
  pbVar7 = (byte *)((param_3 | param_2 << 4) & 0xff);
  local_20 = pbVar7;
  iVar1 = fn_00495d00(param_1,&local_20);
  if (iVar1 == 0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
    return 0;
  }
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0xc);
  pbVar5 = pbVar4;
  pbVar3 = (byte *)((int)pbVar2 - (int)pbVar4 >> 3);
  while (pbVar6 = pbVar3, 0 < (int)pbVar6) {
    pbVar3 = (byte *)((int)pbVar6 / 2);
    if ((byte *)(uint)pbVar5[(int)pbVar3 * 8] < pbVar7) {
      pbVar5 = pbVar5 + (int)pbVar3 * 8 + 8;
      pbVar3 = pbVar6 + (-1 - (int)pbVar3);
    }
  }
  if ((pbVar2 != pbVar5) && (pbVar6 = (byte *)(uint)*pbVar5, pbVar7 < pbVar6)) {
    pbVar5 = pbVar2;
  }
  if (pbVar2 != pbVar5) {
    pbVar6 = pbVar5;
  }
  if (pbVar2 != pbVar5 && pbVar4 != pbVar2) {
    pbVar7 = pbVar6 + 8;
    if ((pbVar2 != pbVar7) && (iVar1 = (int)pbVar2 - (int)pbVar7, 0 < iVar1 >> 3)) {
      pbVar3 = pbVar6 + -8;
      if (iVar1 * 0x10000000 < 0) {
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar7;
        *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar6 + 0xc);
        pbVar3 = pbVar6;
        pbVar6 = pbVar7;
      }
      for (iVar1 = iVar1 >> 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        uVar9 = *(undefined4 *)(pbVar6 + 0xc);
        *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(pbVar6 + 8);
        *(undefined4 *)(pbVar3 + 0xc) = uVar9;
        uVar9 = *(undefined4 *)(pbVar6 + 0x14);
        *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(pbVar6 + 0x10);
        *(undefined4 *)(pbVar3 + 0x14) = uVar9;
        pbVar3 = pbVar3 + 0x10;
        pbVar6 = pbVar6 + 0x10;
      }
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
  }
  (**(code **)(*piVar8 + 0xc))(piVar8);
  return 1;
}



byte * fn_00495d00(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (DAT_008b6389 == '\0') {
    uVar6 = (uint)*param_2;
    pbVar4 = *(byte **)(param_1 + 8);
    pbVar7 = *(byte **)(param_1 + 0xc);
    uVar1 = (int)pbVar7 - (int)pbVar4 >> 3;
    while (uVar5 = uVar1, 0 < (int)uVar5) {
      uVar1 = (int)uVar5 / 2;
      if (pbVar4[uVar1 * 8] < uVar6) {
        pbVar4 = pbVar4 + uVar1 * 8 + 8;
        uVar1 = (uVar5 - uVar1) - 1;
      }
    }
    bVar8 = pbVar4 <= pbVar7;
    if (pbVar7 != pbVar4) {
      uVar5 = (uint)*pbVar4;
      bVar8 = uVar6 <= uVar5;
    }
    if (bVar8 && (pbVar7 != pbVar4 && uVar5 != uVar6)) {
      pbVar4 = pbVar7;
    }
    if (pbVar7 == pbVar4) {
      pbVar4 = (byte *)0x0;
    }
    else {
      pbVar4 = *(byte **)(pbVar4 + 4);
    }
    return pbVar4;
  }
  iVar2 = fn_001249d0();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  uVar6 = (uint)*param_2;
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar7 = *(byte **)(param_1 + 0xc);
  uVar1 = (int)pbVar7 - (int)pbVar4 >> 3;
  while (uVar5 = uVar1, 0 < (int)uVar5) {
    uVar1 = (int)uVar5 / 2;
    if (pbVar4[uVar1 * 8] < uVar6) {
      pbVar4 = pbVar4 + uVar1 * 8 + 8;
      uVar1 = (uVar5 - uVar1) - 1;
    }
  }
  bVar8 = pbVar4 <= pbVar7;
  if (pbVar7 != pbVar4) {
    uVar5 = (uint)*pbVar4;
    bVar8 = uVar6 <= uVar5;
  }
  if (bVar8 && (pbVar7 != pbVar4 && uVar5 != uVar6)) {
    pbVar4 = pbVar7;
  }
  bVar8 = pbVar7 != pbVar4;
  if (bVar8) {
    pbVar7 = *(byte **)(pbVar4 + 4);
  }
  if (!bVar8) {
    pbVar7 = (byte *)0x0;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return pbVar7;
}


