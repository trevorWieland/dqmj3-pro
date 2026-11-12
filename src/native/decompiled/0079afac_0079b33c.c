#include "0079afac_0079b33c.h"



void fn_0079b030(int *param_1,uint *param_2,uint param_3,uint param_4,char *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint *puVar11;
  uint local_44;
  uint *local_40;
  uint uStack_3c;
  int *piStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint local_28;
  
  local_28 = param_4;
  uStack_2c = param_3;
  puStack_30 = param_2;
  piStack_34 = param_1;
  if (param_4 != 0) {
    puVar11 = (uint *)(param_1 + 3);
    if ((param_1[4] - *param_1 >> 2) * 0x20 - (*puVar11 + (param_1[2] - *param_1 >> 2) * 0x20) <
        param_4) {
      puVar4 = &local_44;
      local_44 = (*puVar11 + (param_1[2] - *param_1 >> 2) * 0x20) - param_1[1];
      if (local_44 < param_4) {
        puVar4 = &local_28;
      }
      uVar2 = *puVar4 + ((*puVar11 + (param_1[2] - *param_1 >> 2) * 0x20) - param_1[1]) + 0x1f >> 5;
      iVar1 = fn_00100fc6(uVar2 << 2,0);
      fn_0079b33c(&local_40,param_1,*param_1,param_1[1],param_2,param_3,iVar1,0);
      puVar4 = local_40;
      uVar7 = uStack_3c;
      uVar9 = local_28;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        uVar5 = uVar7 + 1;
        uVar7 = 1 << (uVar7 & 0xff);
        puVar6 = puVar4;
        if (uVar5 == 0x20) {
          puVar6 = puVar4 + 1;
          uVar5 = 0;
        }
        if (*param_5 == '\0') {
          uVar7 = *puVar4 & ~uVar7;
        }
        else {
          uVar7 = uVar7 | *puVar4;
        }
        *puVar4 = uVar7;
        puVar4 = puVar6;
        uVar7 = uVar5;
      }
      iVar3 = local_28 + uStack_3c;
      iVar8 = iVar3 % 0x20;
      puVar4 = local_40 + ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1b)) >> 5);
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x20;
        puVar4 = puVar4 + -1;
      }
      fn_0079b33c(&local_40,param_1,param_2,param_3,param_1[2],*puVar11,puVar4,iVar8);
      param_1[2] = (int)local_40;
      *puVar11 = uStack_3c;
      fn_001008c4(*param_1,param_1[4] - *param_1 >> 2,0);
      param_1[4] = iVar1 + uVar2 * 4;
      param_1[1] = 0;
      *param_1 = iVar1;
      return;
    }
    puVar4 = (uint *)param_1[2];
    uVar7 = *puVar11;
    iVar1 = param_4 + uVar7;
    uVar2 = iVar1 % 0x20;
    puVar6 = puVar4 + ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5);
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + 0x20;
      puVar6 = puVar6 + -1;
    }
    while (param_2 != puVar4 || param_3 != uVar7) {
      bVar10 = uVar2 == 0;
      uVar2 = uVar2 - 1;
      if (bVar10) {
        uVar2 = 0x1f;
        puVar6 = puVar6 + -1;
      }
      uVar9 = 1 << (uVar2 & 0xff);
      bVar10 = uVar7 == 0;
      uVar7 = uVar7 - 1;
      if (bVar10) {
        puVar4 = puVar4 + -1;
        uVar7 = 0x1f;
      }
      if ((*puVar4 & 1 << (uVar7 & 0xff)) == 0) {
        uVar9 = *puVar6 & ~uVar9;
      }
      else {
        uVar9 = uVar9 | *puVar6;
      }
      *puVar6 = uVar9;
    }
    iVar1 = param_4 + param_3;
    uVar2 = iVar1 % 0x20;
    puVar4 = param_2 + ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5);
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + 0x20;
      puVar4 = puVar4 + -1;
    }
    while (param_2 != puVar4 || param_3 != uVar2) {
      uVar9 = param_3 + 1;
      uVar7 = 1 << (param_3 & 0xff);
      puVar6 = param_2;
      if (uVar9 == 0x20) {
        puVar6 = param_2 + 1;
        uVar9 = 0;
      }
      if (*param_5 == '\0') {
        uVar7 = *param_2 & ~uVar7;
      }
      else {
        uVar7 = uVar7 | *param_2;
      }
      *param_2 = uVar7;
      param_2 = puVar6;
      param_3 = uVar9;
    }
    iVar1 = param_4 + *puVar11;
    iVar8 = param_1[2] + ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1b)) >> 5) * 4;
    uVar2 = iVar1 % 0x20;
    param_1[2] = iVar8;
    if ((int)uVar2 < 0) {
      *puVar11 = uVar2 + 0x20;
      param_1[2] = iVar8 + -4;
    }
    else {
      *puVar11 = uVar2;
    }
  }
  return;
}



void fn_0079b33c(int *param_1,undefined4 param_2,uint *param_3,uint param_4,uint *param_5,
                 uint param_6,uint *param_7,uint param_8)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  while (param_3 != param_5 || param_4 != param_6) {
    uVar1 = param_8 + 1;
    uVar5 = 1 << (param_8 & 0xff);
    puVar4 = param_7;
    if (uVar1 == 0x20) {
      puVar4 = param_7 + 1;
      uVar1 = 0;
    }
    uVar3 = param_4 + 1;
    puVar2 = param_3;
    if (uVar3 == 0x20) {
      puVar2 = param_3 + 1;
    }
    if (uVar3 == 0x20) {
      uVar3 = 0;
    }
    if ((*param_3 & 1 << (param_4 & 0xff)) == 0) {
      uVar5 = *param_7 & ~uVar5;
    }
    else {
      uVar5 = *param_7 | uVar5;
    }
    *param_7 = uVar5;
    param_8 = uVar1;
    param_3 = puVar2;
    param_4 = uVar3;
    param_7 = puVar4;
  }
  param_1[1] = param_8;
  *param_1 = (int)param_7;
  return;
}



void fn_0079afac(undefined4 *param_1,undefined4 param_2,uint *param_3,uint param_4,uint *param_5,
                 uint param_6,uint *param_7,uint param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  while (param_3 != param_5 || param_4 != param_6) {
    uVar2 = param_8 + 1;
    uVar3 = 1 << (param_8 & 0xff);
    puVar4 = param_7;
    param_8 = uVar2;
    if (uVar2 == 0x20) {
      param_8 = 0;
      puVar4 = param_7 + 1;
    }
    uVar2 = param_4 + 1;
    puVar1 = param_3;
    if (uVar2 == 0x20) {
      puVar1 = param_3 + 1;
    }
    if (uVar2 == 0x20) {
      uVar2 = 0;
    }
    if ((*param_3 & 1 << (param_4 & 0xff)) == 0) {
      uVar3 = *param_7 & ~uVar3;
    }
    else {
      uVar3 = *param_7 | uVar3;
    }
    *param_7 = uVar3;
    param_3 = puVar1;
    param_4 = uVar2;
    param_7 = puVar4;
  }
  param_1[1] = param_8;
  *param_1 = param_7;
  return;
}


