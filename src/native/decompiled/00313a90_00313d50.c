#include "00313a90_00313d50.h"



/* WARNING: Removing unreachable block (ram,0x00313d8c) */

undefined4 fn_00313d50(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_28 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 7);
  bVar2 = *(byte *)((int)param_1 + 0xe);
  uVar5 = local_28 & 1;
  uVar7 = ~local_28;
  local_24 = (int)(short)param_1[1];
  local_20 = (uint)*(byte *)((int)param_1 + 6);
  local_1c = (int)(short)param_1[2];
  iVar6 = 0x18;
  local_18 = (int)*(short *)((int)param_1 + 10);
  local_14 = (int)(short)param_1[3];
  uVar3 = fn_005f5c50(0x259be9d4,&local_28);
  if ((((((uint)bVar2 << ((uVar7 & 1) << 3)) + ((uint)bVar1 << (uVar5 << 3) & 0xffff) & 0xffff) ==
        uVar3 >> 0x10) && (iVar4 = fn_0020adac((int)(short)param_1[1]), iVar4 != 0)) &&
     (*(byte *)((int)param_1 + 6) < 4)) {
    uVar7 = 0;
    while (((*(short *)((int)param_1 + uVar7 * 2 + 8) == 0 || (iVar4 = fn_0020adac(), iVar4 != 0))
           && (((int)uVar7 < (int)(uint)*(byte *)((int)param_1 + 6) ||
               (*(short *)((int)param_1 + uVar7 * 2 + 8) == 0))))) {
      if ((int)uVar7 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar7 & 1;
        if (uVar5 != 0) {
          iVar6 = (int)*(short *)((int)param_1 + uVar7 * 2 + 8);
        }
        iVar4 = 0;
        if (uVar5 != 0) {
          do {
            if ((iVar6 != 0) && (iVar6 == *(short *)((int)param_1 + iVar4 * 2 + 8))) {
              return 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar5);
        }
      }
      if ((int)uVar5 < (int)uVar7) {
        iVar4 = (int)*(short *)((int)param_1 + uVar7 * 2 + 8);
        do {
          if ((iVar4 != 0) &&
             (iVar6 = (int)*(short *)((int)param_1 + uVar5 * 2 + 8), iVar4 == iVar6)) {
            return 1;
          }
          if ((iVar4 != 0) &&
             (iVar6 = (int)*(short *)((int)param_1 + uVar5 * 2 + 10), iVar4 == iVar6)) {
            return 1;
          }
          uVar5 = uVar5 + 2;
        } while ((int)uVar5 < (int)uVar7);
      }
      uVar7 = uVar7 + 1;
      if (2 < (int)uVar7) {
        return 0;
      }
    }
  }
  return 1;
}



void fn_00313ca4(void)

{
  DAT_008923b4 = fn_001287dc(0x1000,4);
  DAT_008923b8 = fn_001287dc(0x1000,4);
  fn_0011c1b4(L"rom:/data/Parameter/Break/MonsAuthKey.bin",DAT_008923b4,0x1000,0,0,0,0,0,5);
  fn_0012d73c();
  fn_0011c1b4(L"rom:/data/Parameter/Break/MonsCheckKey.bin",DAT_008923b8,0x1000,0,0,0,0,0,5);
  fn_0012d73c();
  return;
}



undefined4 * fn_00313bcc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1 + 1;
  *param_1 = &DAT_008228d8;
  *piVar3 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar2 = 0x14;
  *piVar3 = (int)puVar1;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  param_1[2] = *piVar3 + 0x50;
  param_1[3] = *piVar3 + 0x80;
  return param_1;
}



void fn_00313b70(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
  }
  return;
}



void fn_00313b14(int param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = (uint)(char)(*param_2 + -0x10);
  if (-1 < (int)uVar2) {
    if (uVar2 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
      piVar3 = (int *)(*(int *)(param_1 + 4) + uVar2 * 4);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar3 = 0;
    }
  }
  return;
}



int fn_00313a90(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((int)*param_2 - 0x22U < 2) {
    iVar2 = fn_00145b00(0x88,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = fn_00205414(iVar2,*param_2);
    }
    uVar3 = (uint)(char)(*param_2 + -0x10);
    if ((((-1 < (int)uVar3) && (uVar3 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)))
        && (iVar1 != 0)) && (piVar4 = (int *)(*(int *)(param_1 + 4) + uVar3 * 4), *piVar4 == 0)) {
      *piVar4 = iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


