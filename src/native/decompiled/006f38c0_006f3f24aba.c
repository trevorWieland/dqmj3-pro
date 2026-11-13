#include "006f38c0_006f3f24aba.h"



/* WARNING: Removing unreachable block (ram,0x006f3b84) */

void fn_006f39e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 int param_10)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  byte abStack_84 [26];
  char acStack_6a [54];
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar10 = CONCAT44(param_8,param_9);
  uVar11 = CONCAT44(param_6,param_7);
  uVar12 = (ulonglong)param_5;
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_006f3bdc(param_3,abStack_84);
  if (param_10 != 0) {
    iVar6 = 1;
    do {
      puVar5 = &local_98;
      if ((int)(abStack_84[iVar6] - 3) < 0) {
        puVar5 = &local_94;
      }
      local_98 = CONCAT22(((unsigned int)(local_98) >> 16) & 0xffff,(short)(abStack_84[iVar6] - 3));
      local_94 = local_94 & 0xffff0000;
      local_90 = CONCAT22(((unsigned int)(local_90) >> 16) & 0xffff,7);
      if (7 < (short)*puVar5) {
        puVar5 = &local_90;
      }
      abStack_84[iVar6] = (byte)*puVar5;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1a);
  }
  iVar9 = 0;
  iVar6 = fn_00163a00(local_30);
  uVar7 = 1;
  if ((*(byte *)(param_1 + ((int)*(short *)(&DAT_007d5e58 + iVar6 * 2) >> 3) + 0x31c) >>
       ((int)*(short *)(&DAT_007d5e58 + iVar6 * 2) & 7U) & 1) != 0) {
    iVar9 = 1;
  }
  do {
    if (abStack_84[uVar7] < 5) {
      uVar8 = uVar7 & 0xff;
      cVar2 = *(char *)(param_1 + uVar7 + 0x3d8);
      local_90 = CONCAT31(((unsigned int)(local_90) >> 8) & 0xffffff,7);
      if (acStack_6a[uVar7 & 0xff] == '\0') {
        bVar1 = abStack_84[uVar8];
        iVar6 = fn_0069180c(uVar8);
        if (iVar6 == 0) {
          local_98 = CONCAT31(((unsigned int)(local_98) >> 8) & 0xffffff,5);
          puVar5 = &local_98;
          if ((byte)local_90 < 6) {
            puVar5 = &local_90;
          }
          local_90 = CONCAT31(((unsigned int)(local_90) >> 8) & 0xffffff,(char)*puVar5);
        }
        iVar6 = (uint)bVar1 - (cVar2 + iVar9);
        local_98 = CONCAT22(((unsigned int)(local_98) >> 16) & 0xffff,(short)iVar6);
        local_94 = local_94 & 0xffff0000;
        local_8c = CONCAT22(((unsigned int)(local_8c) >> 16) & 0xffff,(ushort)(byte)local_90);
        puVar5 = &local_94;
        if (-1 < iVar6) {
          puVar5 = &local_98;
        }
        if ((int)(local_90 & 0xff) < (int)(short)*puVar5) {
          puVar5 = &local_8c;
        }
        abStack_84[uVar8] = (byte)*puVar5;
      }
    }
    uVar8 = (uint)uVar12;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x1a);
  uVar3 = fn_00691860(local_30);
  uVar4 = fn_0069187c(local_30);
  local_94 = (uint)((ulonglong)uVar11 >> 0x20);
  local_90 = (uint)uVar11;
  local_8c = (uint)((ulonglong)uVar10 >> 0x20);
  local_88 = (undefined4)uVar10;
  local_98 = uVar8;
  fn_006f4684(abStack_84,uVar3,uVar4,local_28);
  return;
}


