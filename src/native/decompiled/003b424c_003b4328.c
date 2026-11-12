#include "003b424c_003b4328.h"



/* WARNING: Removing unreachable block (ram,0x003b4608) */
/* WARNING: Removing unreachable block (ram,0x003b4624) */
/* WARNING: Removing unreachable block (ram,0x003b45d8) */
/* WARNING: Removing unreachable block (ram,0x003b45e0) */
/* WARNING: Removing unreachable block (ram,0x003b45ec) */
/* WARNING: Removing unreachable block (ram,0x003b4658) */
/* WARNING: Removing unreachable block (ram,0x003b4684) */
/* WARNING: Removing unreachable block (ram,0x003b4628) */
/* WARNING: Removing unreachable block (ram,0x003b4634) */
/* WARNING: Removing unreachable block (ram,0x003b463c) */
/* WARNING: Removing unreachable block (ram,0x003b4650) */

int fn_003b4328(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar7 = (uint *)(param_1 + 4);
  local_30 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar3 = param_2 + local_30;
  uVar1 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 4);
  uVar10 = (int)(uVar1 - uVar6) / 0x28;
  if (uVar10 < uVar3) {
    iVar8 = uVar3 - uVar10;
    if (iVar8 != 0) {
      uVar10 = (int)(uVar1 - uVar6) / 0x28;
      uVar3 = uVar10 + iVar8;
      if ((uint)((int)(*(int *)(param_1 + 0xc) - uVar6) / 0x28) < uVar3) {
        local_34 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        if (local_34 < uVar10 + 0x20) {
          local_34 = uVar10 + 0x20;
        }
        puVar4 = &local_34;
        if (local_34 <= uVar3) {
          puVar4 = &local_64;
        }
        local_64 = uVar3;
        local_2c = *puVar4;
        uVar6 = fn_00100fc6(local_2c * 0x28,0);
        uVar3 = uVar6;
        for (uVar10 = *puVar7; uVar10 != uVar1; uVar10 = uVar10 + 0x28) {
          if (uVar3 != 0) {
            fn_00301a9c(uVar3,uVar10,0x28);
          }
          uVar3 = uVar3 + 0x28;
        }
        iVar5 = uVar6 + ((int)(uVar1 - *puVar7) / 0x28) * 0x28;
        for (iVar2 = iVar8; iVar2 != 0; iVar2 = iVar2 + -1) {
          if (iVar5 != 0) {
            fn_00301a9c(iVar5,&local_60,0x28);
          }
          iVar5 = iVar5 + 0x28;
        }
        uVar10 = *(uint *)(param_1 + 8);
        iVar2 = uVar6 + ((int)(uVar1 - *puVar7) / 0x28 + iVar8) * 0x28;
        for (; uVar1 != uVar10; uVar1 = uVar1 + 0x28) {
          if (iVar2 != 0) {
            fn_00301a9c(iVar2,uVar1,0x28);
          }
          iVar2 = iVar2 + 0x28;
        }
        uVar1 = *(uint *)(param_1 + 8);
        uVar3 = *puVar7;
        uVar10 = uVar3;
        if (uVar1 <= uVar3) {
          for (; uVar10 != uVar1; uVar10 = uVar10 + 0x28) {
          }
        }
        fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xc) - uVar3) / 0x28,0);
        *puVar7 = uVar6;
        *(uint *)(param_1 + 8) = uVar6 + ((int)(uVar1 - uVar3) / 0x28) * 0x28 + iVar8 * 0x28;
        *(uint *)(param_1 + 0xc) = uVar6 + local_2c * 0x28;
      }
      else {
        uVar10 = uVar1 + iVar8 * 0x28;
        *(uint *)(param_1 + 8) = uVar1 + iVar8 * 0x28;
        if (uVar10 < uVar1) {
          uVar9 = uVar1 + iVar8 * -0x28;
          uVar3 = uVar1;
          for (uVar6 = uVar9; uVar6 != uVar1; uVar6 = uVar6 + 0x28) {
            if (uVar3 != 0) {
              fn_00301a9c(uVar3,uVar6,0x28);
            }
            uVar3 = uVar3 + 0x28;
          }
          uVar3 = uVar1;
          if (uVar1 < uVar9) {
            if (0 < (int)(uVar9 - uVar1)) {
              uVar3 = (int)(uVar9 - uVar1) / 0x28;
              uVar6 = uVar1;
              if ((uVar3 & 1) != 0) {
                uVar9 = uVar9 - 0x28;
                uVar6 = uVar1 - 0x28;
                fn_00301a9c(uVar6,uVar9,0x28);
              }
              for (iVar8 = (int)uVar3 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
                fn_00301a9c(uVar6 - 0x28,uVar9 - 0x28,0x28);
                uVar6 = uVar6 - 0x50;
                uVar9 = uVar9 - 0x50;
                fn_00301a9c(uVar6,uVar9,0x28);
              }
            }
          }
          else {
            while (uVar1 != uVar9) {
              uVar9 = uVar9 - 0x28;
              fn_00301a9c(uVar3 - 0x28,uVar9,0x28);
              uVar3 = uVar3 - 0x28;
            }
          }
          if (uVar1 < uVar10) {
            if (0 < (int)(uVar10 - uVar1)) {
              uVar10 = (int)(uVar10 - uVar1) / 0x28;
              if ((uVar10 & 1) != 0) {
                fn_00301a9c(uVar1,&local_60,0x28);
                uVar1 = uVar1 + 0x28;
              }
              for (iVar8 = (int)uVar10 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
                fn_00301a9c(uVar1,&local_60,0x28);
                fn_00301a9c(uVar1 + 0x28,&local_60,0x28);
                uVar1 = uVar1 + 0x50;
              }
            }
          }
          else {
            for (; uVar1 != uVar10; uVar1 = uVar1 + 0x28) {
              fn_00301a9c(uVar1,&local_60,0x28);
            }
          }
        }
        else {
          local_64 = 0;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            if (uVar1 != 0) {
              fn_00301a9c(uVar1,&local_60,0x28);
            }
            uVar1 = uVar1 + 0x28;
          }
        }
      }
    }
  }
  else if ((uVar3 < uVar10) && (uVar10 = uVar6 + uVar3 * 0x28, uVar6 != uVar1)) {
    uVar3 = uVar10;
    if (uVar1 <= uVar10) {
      for (; uVar3 != uVar1; uVar3 = uVar3 + 0x28) {
      }
    }
    *(uint *)(param_1 + 8) = uVar1 + ((int)(uVar1 - uVar10) / 0x28) * -0x28;
  }
  uVar10 = local_30;
  if (local_30 < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28)) {
    do {
      iVar2 = *(int *)(param_1 + 4);
      iVar5 = *(int *)(param_1 + 8) - iVar2;
      iVar8 = iVar5 >> 0x1f;
      bVar11 = iVar5 / 0x28 + iVar8 == iVar8;
      if (!bVar11) {
        iVar2 = iVar2 + uVar10 * 0x28;
        bVar11 = iVar2 == 0;
      }
      if (!bVar11) {
        fn_00158f6c(iVar2,0x28);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28));
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}



void fn_003b424c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  switch(*(undefined4 *)(param_3 + 4)) {
  case 0:
  case 2:
  case 5:
  case 8:
  case 0xb:
  case 0xc:
  case 0xf:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 8);
    return;
  default:
    return;
  case 4:
    *param_2 = *(undefined4 *)(param_3 + 8);
    return;
  case 6:
  case 9:
    *(undefined2 *)param_2 = *(undefined2 *)(param_3 + 8);
    return;
  case 7:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 8);
    *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)(param_3 + 9);
    return;
  case 0xd:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 8);
    *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)(param_3 + 9);
    *(undefined2 *)((int)param_2 + 2) = *(undefined2 *)(param_3 + 10);
    return;
  case 0x10:
    *(undefined2 *)param_2 = *(undefined2 *)(param_3 + 8);
    *(undefined2 *)((int)param_2 + 2) = *(undefined2 *)(param_3 + 10);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_3 + 0xc);
    return;
  case 0x11:
    *(undefined1 *)param_2 = *(undefined1 *)(param_3 + 8);
    param_2[1] = *(undefined4 *)(param_3 + 0xc);
    return;
  }
}


