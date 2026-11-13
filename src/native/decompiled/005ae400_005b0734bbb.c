#include "005ae400_005b0734bbb.h"



uint fn_005b0734(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_3c;
  short local_38 [4];
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  uVar7 = 0;
  iVar9 = 0;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  iVar4 = fn_0020c298();
  if (0 < iVar4) {
    do {
      iVar4 = fn_0020c2c4(iVar9);
      if (iVar4 == local_2c) {
        if (param_3 != 0) {
          uVar1 = (int)uVar7 / 2;
          uVar2 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
          if (uVar2 <= uVar1) {
            fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar1,uVar2);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + uVar1 * 4);
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
          puVar8 = (undefined4 *)(uVar1 + 1);
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2);
          local_3c = puVar8;
          if (puVar3 <= puVar8) {
            fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,puVar8,puVar3);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + (int)puVar8 * 4);
          uVar1 = (int)uVar7 / 2;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
          uVar2 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
          if (uVar2 <= uVar1) {
            fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar1,uVar2);
          }
          puVar8 = local_3c;
          iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + uVar1 * 4);
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2);
          if (puVar3 <= local_3c) {
            fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,local_3c,puVar3);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + (int)puVar8 * 4);
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
        }
        fn_0020c2e0(iVar9,local_38,4);
        iVar4 = 0;
        do {
          if (param_3 != 0) {
            fn_002317d8(&local_3c,(int)local_38[iVar4],0);
            uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
            if (uVar1 <= uVar7) {
              fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar7,uVar1);
            }
            fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc4) + uVar7 * 4),local_3c);
            uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
            if (uVar1 <= uVar7) {
              fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar7,uVar1);
            }
            iVar5 = *(int *)(*(int *)(param_1 + 0xc4) + uVar7 * 4);
            *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
            if (local_3c != &DAT_008f9cf4) {
              piVar6 = local_3c + -3;
              iVar5 = *piVar6;
              if ((iVar5 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar5 + -1, iVar5 == 0)))
                 ) {
                fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
              }
            }
          }
          iVar4 = iVar4 + 1;
          uVar7 = uVar7 + 1;
        } while (iVar4 < 4);
      }
      if (3 < (int)uVar7) {
        return uVar7;
      }
      iVar9 = iVar9 + 1;
      iVar4 = fn_0020c298();
    } while (iVar9 < iVar4);
  }
  return uVar7;
}



/* WARNING: Removing unreachable block (ram,0x005afc60) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdc : 0x005afc64 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_005afb98(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  
  puVar1 = (undefined4 *)fn_005cacf0();
  *puVar1 = &DAT_00847974;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 9;
  puVar1[0x34] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x34];
  puVar1[0x35] = iVar3 + 0x24;
  puVar1[0x36] = iVar3 + 0x80;
  piVar4 = puVar1 + 0x37;
  *piVar4 = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  local_28 = 9;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x39] = *piVar4 + 0x80;
  puVar1[0x38] = *piVar4 + 0x24;
  return puVar1;
}


