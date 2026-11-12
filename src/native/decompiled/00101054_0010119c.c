#include "00101054_0010119c.h"



void fn_0010119c(int *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *local_24;
  byte *pbStack_20;
  byte *local_1c;
  int local_18;
  
  if (*param_2 == 0xff) {
    local_50 = 0;
  }
  else {
    local_50 = 0;
    pbVar5 = param_2;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == 0xff) break;
      local_50 = (uint)*pbVar5 + local_50 * 10;
    }
    if (*param_2 == 0x2d) {
      local_50 = -local_50;
    }
  }
  local_44 = 0;
  bVar1 = *param_3;
  local_24 = param_1;
  pbStack_20 = param_2;
  local_18 = param_4;
  if (bVar1 != 0x2d) {
    local_1c = param_3;
    uVar2 = 0;
    if (bVar1 != 0x2b) goto LAB_00101216;
  }
  local_1c = param_3 + 1;
  local_44 = (uint)(bVar1 == 0x2d);
  uVar2 = 0;
LAB_00101216:
  while( true ) {
    iVar7 = (int)(uVar2 >> 0x20);
    bVar1 = *local_1c;
    if (bVar1 == 0xff) break;
    local_1c = local_1c + 1;
    lVar10 = fn_002ff2f8((int)uVar2,iVar7,10,0);
    uVar2 = lVar10 + (ulonglong)(uint)bVar1;
  }
  uVar3 = fn_002ff9c0(0);
  if (local_44 != 0) {
    uVar3 = uVar3 * 5 >> 1;
  }
  uVar3 = (uVar3 & 0xffffff) >> 0x16;
  if (1 < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar9 = local_50 + local_18;
  if ((int)uVar2 == 0 && iVar7 == 0) {
    local_24[1] = local_44 << 0x1f;
    *local_24 = 0;
  }
  else {
    if (iVar9 < -500) {
      local_24[1] = local_44 << 0x1f;
      *local_24 = 0;
    }
    else {
      if (iVar9 < 0x1f5) {
        if (iVar9 < 0) {
          uVar8 = -uVar3;
          iVar6 = -iVar9;
        }
        else {
          iVar6 = iVar9;
          uVar8 = uVar3;
        }
        fn_002ff9c8(&local_34,iVar6,uVar8);
        local_40 = local_34;
        uStack_3c = uStack_30;
        uStack_38 = uStack_2c;
        local_50 = 0x403e;
        if (iVar7 == 0) {
          uVar2 = uVar2 << 0x20;
          local_50 = 0x401e;
        }
        if ((uVar2 & 0xffff000000000000) == 0) {
          uVar2 = uVar2 << 0x10;
          local_50 = local_50 + -0x10;
        }
        if ((uVar2 & 0xff00000000000000) == 0) {
          uVar2 = uVar2 << 8;
          local_50 = local_50 + -8;
        }
        if ((uVar2 & 0xf000000000000000) == 0) {
          uVar2 = uVar2 << 4;
          local_50 = local_50 + -4;
        }
        if ((uVar2 & 0xc000000000000000) == 0) {
          uVar2 = uVar2 << 2;
          local_50 = local_50 + -2;
        }
        uVar8 = (uint)uVar2;
        if ((uVar2 & 0x8000000000000000) == 0) {
          uVar2 = CONCAT44((int)(uVar2 >> 0x20) * 2 + (uint)CARRY4(uVar8,uVar8),uVar8 * 2);
          local_50 = local_50 + -1;
        }
        local_4c = (undefined4)(uVar2 >> 0x20);
        local_48 = (undefined4)uVar2;
        if (iVar9 < 1) {
          uVar11 = fn_0017835c(&local_50,&local_40,uVar3,&local_34);
        }
        else {
          uVar11 = fn_0017838c(&local_50,&local_40,uVar3);
        }
        iVar7 = (int)((ulonglong)uVar11 >> 0x20);
        uVar3 = (uint)uVar11;
        if (local_44 != 0) {
          uVar3 = uVar3 ^ 0x80000000;
        }
        if (((uVar3 & 0x7fffffff) == 0 && iVar7 == 0) || ((uVar3 & 0x7fffffff) >> 0x14 == 0x7ff)) {
          puVar4 = (undefined4 *)fn_002ff798();
          *puVar4 = 2;
          if ((uVar3 & 0x7fffffff) >> 0x14 == 0x7ff) {
            *local_24 = 0;
            local_24[1] = 0x7ff00000;
            local_24[1] = local_24[1] | uVar3 & 0x80000000;
            return;
          }
        }
        local_24[1] = uVar3;
        *local_24 = iVar7;
        return;
      }
      *local_24 = 0;
      local_24[1] = 0x7ff00000;
      local_24[1] = local_24[1] | local_44 << 0x1f;
    }
    puVar4 = (undefined4 *)fn_002ff798();
    *puVar4 = 2;
  }
  return;
}



int fn_00101160(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  do {
    iVar3 = 0;
    while( true ) {
      sVar2 = *(short *)(param_2 + iVar3 * 2);
      if (sVar2 == 0) {
        return param_1;
      }
      sVar1 = *(short *)(param_1 + iVar3 * 2);
      if (sVar1 == 0) {
        return 0;
      }
      if (sVar1 != sVar2) break;
      iVar3 = iVar3 + 1;
    }
    if (*(short *)(param_2 + iVar3 * 2) == 0) {
      return param_1;
    }
    param_1 = param_1 + 2;
  } while( true );
}



short * fn_00101144(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  bool bVar2;
  
  psVar1 = param_1;
  while (bVar2 = param_3 != 0, param_3 = param_3 + -1, bVar2) {
    *psVar1 = *param_2;
    psVar1 = psVar1 + 1;
    if (*param_2 != 0) {
      param_2 = param_2 + 1;
    }
  }
  return param_1;
}



int fn_00101054(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  iVar7 = 0;
  piVar2 = (int *)fn_002ff798();
  iVar3 = *piVar2;
  psVar6 = param_1;
  do {
    psVar5 = psVar6;
    sVar1 = *psVar5;
    psVar6 = psVar5 + 1;
    if (sVar1 == 0) break;
    iVar4 = fn_0010075e(sVar1);
  } while (iVar4 != 0);
  if (sVar1 != 0x2b) {
    if (sVar1 == 0x2d) {
      iVar7 = 0x400;
    }
    else {
      psVar6 = psVar5;
    }
  }
  *piVar2 = 0;
  iVar4 = fn_001020b2(psVar6,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((short *)*param_2 == psVar6)) {
    *param_2 = param_1;
  }
  if ((*piVar2 != 2) && (*piVar2 = iVar3, iVar7 << 0x15 < 0)) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


