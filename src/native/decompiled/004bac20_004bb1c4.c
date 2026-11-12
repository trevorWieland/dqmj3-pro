#include "004bac20_004bb1c4.h"



undefined4 * fn_004bb1c4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00855d10;
  iVar1 = fn_0015ece0(0x20);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004b54dc();
  }
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 7;
  return param_1;
}



void fn_004bb16c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  *param_1 = &DAT_00855d10;
  param_1[2] = param_2;
  piVar2 = (int *)(param_2 + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 7;
  param_1[5] = *(int *)(param_1[2] + 0x10) << 3;
  return;
}



void fn_004baf70(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar9 = *(uint *)(param_1 + 0x14) >> 3;
  iVar3 = 7 - (*(uint *)(param_1 + 0x14) & 7);
  *(int *)(param_1 + 0x10) = iVar3;
  *(uint *)(param_1 + 0xc) = uVar9;
  iVar4 = *(int *)(param_1 + 8);
  uVar9 = uVar9 + ((7 - iVar3) + param_3 >> 3) + 1;
  uVar10 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x18);
  if (uVar10 < uVar9) {
    uVar10 = uVar10 + (uVar10 >> 1);
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    fn_0015f0f4(iVar4,*(int *)(iVar4 + 0x18) + uVar10);
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x10) == 7) {
    uVar9 = param_3 >> 3;
    fn_0015ef58(*(undefined4 *)(param_1 + 8),param_2,uVar9,*(undefined4 *)(param_1 + 0xc));
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar9;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar9 * 8;
  }
  else {
    iVar3 = 0;
    if (7 < param_3) {
      do {
        bVar1 = *(byte *)(param_2 + uVar9);
        if (*(int *)(param_1 + 0x10) == 7) {
          pbVar5 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc))
          ;
          *pbVar5 = bVar1;
        }
        else {
          uVar10 = *(int *)(param_1 + 0x10) + 1U & 0xff;
          pbVar5 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc))
          ;
          bVar2 = *pbVar5;
          pbVar5 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc))
          ;
          *pbVar5 = bVar1 >> (8 - uVar10 & 0xff) | bVar2;
          pcVar6 = (char *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) + 1);
          *pcVar6 = bVar1 << uVar10;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
        uVar10 = iVar3 + 0x10;
        uVar9 = uVar9 + 1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        iVar3 = iVar3 + 8;
      } while (uVar10 <= param_3);
    }
  }
  param_3 = param_3 & 7;
  if (param_3 != 0) {
    bVar1 = *(byte *)(param_2 + uVar9);
    uVar9 = 0x80;
    do {
      bVar11 = (bVar1 & uVar9) != 0;
      if (*(int *)(param_1 + 0x10) == 7) {
        puVar7 = (undefined1 *)
                 fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        if (bVar11) {
          uVar8 = 0x80;
        }
        else {
          uVar8 = 0;
        }
        *puVar7 = uVar8;
      }
      else if (bVar11) {
        pbVar5 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        uVar10 = *(uint *)(param_1 + 0x10);
        bVar2 = *pbVar5;
        pbVar5 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        *pbVar5 = bVar2 | (byte)(1 << (uVar10 & 0xff));
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        *(undefined4 *)(param_1 + 0x10) = 8;
      }
      uVar9 = uVar9 >> 1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      param_3 = param_3 - 1 & 0xff;
    } while (param_3 != 0);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004bb0c0) */
/* WARNING: Removing unreachable block (ram,0x004bb0cc) */
/* WARNING: Removing unreachable block (ram,0x004bb0d4) */
/* WARNING: Removing unreachable block (ram,0x004bb0d8) */
/* WARNING: Removing unreachable block (ram,0x004bb0dc) */
/* WARNING: Removing unreachable block (ram,0x004bb114) */
/* WARNING: Removing unreachable block (ram,0x004bb120) */
/* WARNING: Removing unreachable block (ram,0x004bb124) */
/* WARNING: Removing unreachable block (ram,0x004bb128) */
/* WARNING: Removing unreachable block (ram,0x004bb0e4) */
/* WARNING: Removing unreachable block (ram,0x004bb0ec) */
/* WARNING: Removing unreachable block (ram,0x004bb12c) */
/* WARNING: Removing unreachable block (ram,0x004bb138) */
/* WARNING: Removing unreachable block (ram,0x004bb148) */

void fn_004baf64(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = param_3 * param_4;
  uVar1 = uVar9 * 8;
  uVar8 = *(uint *)(param_1 + 0x14) >> 3;
  iVar4 = 7 - (*(uint *)(param_1 + 0x14) & 7);
  *(int *)(param_1 + 0x10) = iVar4;
  *(uint *)(param_1 + 0xc) = uVar8;
  iVar5 = *(int *)(param_1 + 8);
  uVar8 = uVar8 + ((7 - iVar4) + uVar1 >> 3) + 1;
  uVar10 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
  if (uVar10 < uVar8) {
    uVar10 = uVar10 + (uVar10 >> 1);
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    fn_0015f0f4(iVar5,*(int *)(iVar5 + 0x18) + uVar10);
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) == 7) {
    fn_0015ef58(*(undefined4 *)(param_1 + 8),param_2,uVar9 & 0x1fffffff,
                 *(undefined4 *)(param_1 + 0xc));
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uVar9 & 0x1fffffff);
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar9 * 8;
  }
  else {
    iVar5 = 0;
    if (7 < uVar1) {
      do {
        bVar2 = *(byte *)(param_2 + iVar4);
        if (*(int *)(param_1 + 0x10) == 7) {
          pbVar6 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc))
          ;
          *pbVar6 = bVar2;
        }
        else {
          uVar8 = *(int *)(param_1 + 0x10) + 1U & 0xff;
          pbVar6 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc))
          ;
          bVar3 = *pbVar6;
          pbVar6 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc))
          ;
          *pbVar6 = bVar2 >> (8 - uVar8 & 0xff) | bVar3;
          pcVar7 = (char *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) + 1);
          *pcVar7 = bVar2 << uVar8;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
        uVar8 = iVar5 + 0x10;
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        iVar5 = iVar5 + 8;
      } while (uVar8 <= uVar1);
    }
  }
  return;
}



void fn_004baf50(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(*(int *)(param_1 + 8) + 0x10) << 3;
  return;
}



void fn_004bad6c(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0x14) < (7 - *(int *)(param_1 + 0x10)) + iVar2 * 8 + param_3) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x10) == 7) {
      iVar5 = *(int *)(param_1 + 8);
      uVar6 = param_3 >> 3;
      if (*(uint *)(iVar5 + 0x10) < iVar2 + uVar6) {
        fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Buffer.cpp"
                     ,0xc6,0xe0000019,0);
      }
      else {
        fn_00301a9c(param_2,*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0xc) + iVar2);
      }
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar6;
    }
    else {
      iVar2 = 0;
      if (7 < param_3) {
        do {
          if (*(uint *)(param_1 + 0x14) <
              (*(int *)(param_1 + 0xc) * 8 - *(int *)(param_1 + 0x10)) + 0xfU) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            uVar7 = *(int *)(param_1 + 0x10) + 1U & 0xff;
            pcVar3 = (char *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc));
            cVar1 = *pcVar3;
            pbVar4 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) + 1);
            *(byte *)(param_2 + uVar6) = cVar1 << (8 - uVar7 & 0xff) | *pbVar4 >> uVar7;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
          uVar7 = iVar2 + 0x10;
          uVar6 = uVar6 + 1;
          iVar2 = iVar2 + 8;
        } while (uVar7 <= param_3);
      }
    }
    param_3 = param_3 & 7;
    if (param_3 != 0) {
      uVar8 = 0;
      uVar7 = 0x80;
      do {
        uVar9 = *(uint *)(param_1 + 0x10);
        bVar10 = false;
        if (*(uint *)(param_1 + 0x14) < (*(int *)(param_1 + 0xc) * 8 - uVar9) + 8) {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          pbVar4 = (byte *)fn_004b55dc(*(undefined4 *)(param_1 + 8));
          iVar2 = *(int *)(param_1 + 0x10);
          bVar10 = (1 << (uVar9 & 0xff) & 0xffU & ~(uint)*pbVar4) == 0;
          if (iVar2 == 0) {
            iVar2 = 8;
            *(undefined4 *)(param_1 + 0x10) = 8;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          }
          *(int *)(param_1 + 0x10) = iVar2 + -1;
        }
        if (bVar10) {
          uVar8 = uVar8 | uVar7;
        }
        param_3 = param_3 - 1 & 0xff;
        uVar7 = uVar7 >> 1;
      } while (param_3 != 0);
      *(char *)(param_2 + uVar6) = (char)uVar8;
    }
  }
  return;
}



int fn_004bac98(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  uint local_20;
  int local_1c;
  
  *param_1 = &DAT_00855d00;
  iVar1 = fn_0013cd7c(param_1 + 1);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x84) = param_4;
  *(undefined4 *)(iVar1 + 0x8c) = param_5;
  fn_0013d0fc(&local_20);
  if ((int)param_3 < 0) {
    local_1c = local_1c - (((int)-param_3 >> 0x1f) + (uint)(local_20 < -param_3));
  }
  else {
    local_1c = local_1c + ((int)param_3 >> 0x1f) + (uint)CARRY4(local_20,param_3);
  }
  *(uint *)(iVar1 + 0x6c) = local_20 + param_3;
  *(int *)(iVar1 + 0x70) = local_1c;
  return iVar1 + -4;
}



undefined4 * fn_004bac20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  *param_1 = &DAT_00855cd4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = param_2;
  param_1[2] = param_3;
  fn_0013d0fc(&local_18);
  param_1[6] = 0;
  param_1[8] = 1000;
  param_1[4] = local_18;
  param_1[5] = uStack_14;
  *(undefined2 *)(param_1 + 1) = 1;
  param_1[10] = 0;
  param_1[0xb] = 8;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}


