#include "00336a28_00337590.h"



undefined4 fn_0033756c(int param_1)

{
  undefined4 in_stack_00000000;
  
  fn_00336a28();
  *(undefined4 *)(param_1 + 0xc) = in_stack_00000000;
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x003372d4) */
/* WARNING: Removing unreachable block (ram,0x003372f0) */
/* WARNING: Removing unreachable block (ram,0x00336d54) */
/* WARNING: Removing unreachable block (ram,0x00336d70) */
/* WARNING: Removing unreachable block (ram,0x00336d24) */
/* WARNING: Removing unreachable block (ram,0x00336d2c) */
/* WARNING: Removing unreachable block (ram,0x00336d38) */
/* WARNING: Removing unreachable block (ram,0x00336dc8) */
/* WARNING: Removing unreachable block (ram,0x00336df4) */
/* WARNING: Removing unreachable block (ram,0x003372a4) */
/* WARNING: Removing unreachable block (ram,0x003372ac) */
/* WARNING: Removing unreachable block (ram,0x003372b8) */
/* WARNING: Removing unreachable block (ram,0x00337320) */
/* WARNING: Removing unreachable block (ram,0x0033734c) */
/* WARNING: Removing unreachable block (ram,0x003372f4) */
/* WARNING: Removing unreachable block (ram,0x00336da0) */
/* WARNING: Removing unreachable block (ram,0x00336d74) */
/* WARNING: Removing unreachable block (ram,0x00336d7c) */
/* WARNING: Removing unreachable block (ram,0x00336db4) */
/* WARNING: Removing unreachable block (ram,0x003372fc) */
/* WARNING: Removing unreachable block (ram,0x00337304) */
/* WARNING: Removing unreachable block (ram,0x00337318) */

undefined4 fn_00336a28(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_2b0;
  uint local_2ac [69];
  undefined1 auStack_198 [280];
  undefined1 auStack_80 [80];
  uint local_30;
  uint local_2c;
  uint local_28;
  
  puVar8 = (uint *)(param_1 + 400);
  *(uint *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  fn_00337590(auStack_198);
  fn_0017821c(&local_2b0,auStack_198,0x118);
  uVar1 = *(uint *)(param_1 + 0x194);
  uVar2 = *puVar8;
  uVar6 = uVar1 - uVar2;
  iVar7 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  if ((uint)((iVar7 >> 8) - (iVar7 >> 0x1f)) < param_4) {
    iVar7 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20);
    iVar7 = param_4 - ((iVar7 >> 8) - (iVar7 >> 0x1f));
    if (iVar7 != 0) {
      iVar5 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20);
      uVar2 = *(int *)(param_1 + 0x198) - uVar2;
      iVar3 = (int)((longlong)(int)uVar2 * -0x15f15f15 + ((ulonglong)uVar2 << 0x20) >> 0x20);
      if ((uint)((iVar3 >> 8) - (iVar3 >> 0x1f)) < (uint)(((iVar5 >> 8) - (iVar5 >> 0x1f)) + iVar7))
      {
        iVar3 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20);
        iVar5 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20);
        local_2c = ((iVar3 >> 8) - (iVar3 >> 0x1f)) + iVar7;
        uVar2 = (iVar5 >> 8) - (iVar5 >> 0x1f);
        local_28 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (local_28 < uVar2 + 0x20) {
          local_28 = uVar2 + 0x20;
        }
        puVar4 = &local_28;
        if (local_28 <= local_2c) {
          puVar4 = &local_2c;
        }
        local_30 = *puVar4;
        uVar10 = fn_00100fc6(local_30 * 0x118,0);
        uVar6 = uVar10;
        for (uVar2 = *puVar8; uVar2 != uVar1; uVar2 = uVar2 + 0x118) {
          if (uVar6 != 0) {
            fn_0017821c(uVar6,uVar2,0x118);
          }
          uVar6 = uVar6 + 0x118;
        }
        iVar3 = (int)((longlong)(int)(uVar1 - *puVar8) * -0x15f15f15 +
                      ((ulonglong)(uVar1 - *puVar8) << 0x20) >> 0x20);
        iVar5 = uVar10 + ((iVar3 >> 8) - (iVar3 >> 0x1f)) * 0x118;
        for (iVar3 = iVar7; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (iVar5 != 0) {
            fn_0017821c(iVar5,&local_2b0,0x118);
          }
          iVar5 = iVar5 + 0x118;
        }
        uVar2 = *(uint *)(param_1 + 0x194);
        iVar3 = (int)((longlong)(int)(uVar1 - *puVar8) * -0x15f15f15 +
                      ((ulonglong)(uVar1 - *puVar8) << 0x20) >> 0x20);
        iVar3 = uVar10 + (((iVar3 >> 8) - (iVar3 >> 0x1f)) + iVar7) * 0x118;
        for (; uVar1 != uVar2; uVar1 = uVar1 + 0x118) {
          if (iVar3 != 0) {
            fn_0017821c(iVar3,uVar1,0x118);
          }
          iVar3 = iVar3 + 0x118;
        }
        uVar2 = *puVar8;
        uVar6 = *(uint *)(param_1 + 0x194);
        iVar3 = (int)((longlong)(int)(uVar6 - uVar2) * -0x15f15f15 +
                      ((ulonglong)(uVar6 - uVar2) << 0x20) >> 0x20);
        uVar1 = uVar2;
        if (uVar6 < uVar2) {
          do {
            uVar1 = uVar1 + 0x118;
          } while (uVar1 != uVar6);
        }
        uVar1 = *(int *)(param_1 + 0x198) - uVar2;
        iVar5 = (int)((longlong)(int)uVar1 * -0x15f15f15 + ((ulonglong)uVar1 << 0x20) >> 0x20);
        fn_001008c4(uVar2,(iVar5 >> 8) - (iVar5 >> 0x1f),0);
        *puVar8 = uVar10;
        *(uint *)(param_1 + 0x194) =
             uVar10 + ((iVar3 >> 8) - (iVar3 >> 0x1f)) * 0x118 + iVar7 * 0x118;
        *(uint *)(param_1 + 0x198) = uVar10 + local_30 * 0x118;
      }
      else {
        uVar2 = uVar1 + iVar7 * 0x118;
        *(uint *)(param_1 + 0x194) = uVar1 + iVar7 * 0x118;
        if (uVar2 < uVar1) {
          uVar10 = uVar1 + iVar7 * -0x118;
          uVar6 = uVar1;
          local_30 = uVar10;
          for (; uVar10 != uVar1; uVar10 = uVar10 + 0x118) {
            if (uVar6 != 0) {
              fn_0017821c(uVar6,uVar10,0x118);
            }
            uVar6 = uVar6 + 0x118;
          }
          uVar6 = uVar1;
          uVar10 = local_30;
          if (uVar1 < local_30) {
            uVar6 = local_30 - uVar1;
            if (0 < (int)uVar6) {
              iVar7 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20)
              ;
              uVar9 = uVar1;
              if (((iVar7 >> 8) - (iVar7 >> 0x1f) & 1U) != 0) {
                uVar10 = local_30 - 0x118;
                uVar9 = uVar1 - 0x118;
                fn_0017821c(uVar9,uVar10,0x118);
              }
              iVar7 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20)
              ;
              for (iVar7 = (iVar7 >> 8) - (iVar7 >> 0x1f) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
                fn_0017821c(uVar9 - 0x118,uVar10 - 0x118,0x118);
                uVar10 = uVar10 - 0x230;
                uVar9 = uVar9 - 0x230;
                fn_0017821c(uVar9,uVar10,0x118);
              }
            }
          }
          else {
            for (; uVar1 != uVar10; uVar10 = uVar10 - 0x118) {
              fn_0017821c(uVar6 - 0x118,uVar10 - 0x118,0x118);
              uVar6 = uVar6 - 0x118;
            }
          }
          if (uVar1 < uVar2) {
            uVar2 = uVar2 - uVar1;
            if (0 < (int)uVar2) {
              iVar7 = (int)((longlong)(int)uVar2 * -0x15f15f15 + ((ulonglong)uVar2 << 0x20) >> 0x20)
              ;
              if (((iVar7 >> 8) - (iVar7 >> 0x1f) & 1U) != 0) {
                fn_0017821c(uVar1,&local_2b0,0x118);
                uVar1 = uVar1 + 0x118;
              }
              iVar7 = (int)((longlong)(int)uVar2 * -0x15f15f15 + ((ulonglong)uVar2 << 0x20) >> 0x20)
              ;
              for (iVar7 = (iVar7 >> 8) - (iVar7 >> 0x1f) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
                fn_0017821c(uVar1,&local_2b0,0x118);
                fn_0017821c(uVar1 + 0x118,&local_2b0,0x118);
                uVar1 = uVar1 + 0x230;
              }
            }
          }
          else {
            for (; uVar1 != uVar2; uVar1 = uVar1 + 0x118) {
              fn_0017821c(uVar1,&local_2b0,0x118);
            }
          }
        }
        else {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            if (uVar1 != 0) {
              fn_0017821c(uVar1,&local_2b0,0x118);
            }
            uVar1 = uVar1 + 0x118;
          }
        }
      }
    }
  }
  else {
    iVar7 = (int)((longlong)(int)uVar6 * -0x15f15f15 + ((ulonglong)uVar6 << 0x20) >> 0x20);
    if ((param_4 < (uint)((iVar7 >> 8) - (iVar7 >> 0x1f))) &&
       (uVar6 = uVar2 + param_4 * 0x118, uVar2 != uVar1)) {
      uVar2 = uVar6;
      if (uVar1 < uVar6) {
        do {
          uVar2 = uVar2 + 0x118;
        } while (uVar2 != uVar1);
      }
      iVar7 = (int)((longlong)(int)(uVar1 - uVar6) * -0x15f15f15 +
                    ((ulonglong)(uVar1 - uVar6) << 0x20) >> 0x20);
      *(uint *)(param_1 + 0x194) = uVar1 + ((iVar7 >> 8) - (iVar7 >> 0x1f)) * -0x118;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  puVar8 = (uint *)(param_1 + 0x19c);
  iVar7 = fn_002e9318(auStack_80);
  *(undefined4 *)(iVar7 + 0x48) = 0;
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  fn_003369b4();
  uVar1 = *(uint *)(param_1 + 0x1a0);
  uVar2 = *puVar8;
  local_2b0 = (int)(uVar1 - uVar2) / 0x50;
  if (local_2b0 < uVar6) {
    iVar3 = uVar6 - local_2b0;
    if (iVar3 != 0) {
      local_2b0 = local_2b0 + iVar3;
      if ((uint)((int)(*(int *)(param_1 + 0x1a4) - uVar2) / 0x50) < local_2b0) {
        uVar2 = (int)(*(int *)(param_1 + 0x1a0) - *puVar8) / 0x50;
        uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        local_2ac[0] = uVar2 + 0x20;
        if (uVar2 + 0x20 <= uVar6) {
          local_2ac[0] = uVar6;
        }
        puVar4 = local_2ac;
        if (local_2ac[0] <= local_2b0) {
          puVar4 = &local_2b0;
        }
        uVar9 = *puVar4;
        uVar10 = fn_00100fc6(uVar9 * 0x50,0);
        uVar6 = uVar10;
        for (uVar2 = *puVar8; uVar2 != uVar1; uVar2 = uVar2 + 0x50) {
          if (uVar6 != 0) {
            fn_0017821c(uVar6,uVar2,0x50);
          }
          uVar6 = uVar6 + 0x50;
        }
        iVar11 = uVar10 + ((int)(uVar1 - *puVar8) / 0x50) * 0x50;
        for (iVar5 = iVar3; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (iVar11 != 0) {
            fn_0017821c(iVar11,iVar7,0x50);
          }
          iVar11 = iVar11 + 0x50;
        }
        uVar2 = *(uint *)(param_1 + 0x1a0);
        iVar7 = uVar10 + ((int)(uVar1 - *puVar8) / 0x50 + iVar3) * 0x50;
        for (; uVar1 != uVar2; uVar1 = uVar1 + 0x50) {
          if (iVar7 != 0) {
            fn_0017821c(iVar7,uVar1,0x50);
          }
          iVar7 = iVar7 + 0x50;
        }
        uVar1 = *puVar8;
        iVar7 = *(uint *)(param_1 + 0x1a0) - uVar1;
        for (; uVar1 != *(uint *)(param_1 + 0x1a0); uVar1 = uVar1 + 0x50) {
        }
        fn_001008c4(*puVar8,(int)(*(int *)(param_1 + 0x1a4) - *puVar8) / 0x50,0);
        *puVar8 = uVar10;
        *(uint *)(param_1 + 0x1a0) = uVar10 + (iVar7 / 0x50) * 0x50 + iVar3 * 0x50;
        *(uint *)(param_1 + 0x1a4) = uVar10 + uVar9 * 0x50;
      }
      else {
        uVar2 = uVar1 + iVar3 * 0x50;
        *(uint *)(param_1 + 0x1a0) = uVar1 + iVar3 * 0x50;
        if (uVar2 < uVar1) {
          uVar9 = uVar1 + iVar3 * -0x50;
          uVar6 = uVar1;
          for (uVar10 = uVar9; uVar10 != uVar1; uVar10 = uVar10 + 0x50) {
            if (uVar6 != 0) {
              fn_0017821c(uVar6,uVar10,0x50);
            }
            uVar6 = uVar6 + 0x50;
          }
          uVar6 = uVar1;
          if (uVar1 < uVar9) {
            if (0 < (int)(uVar9 - uVar1)) {
              uVar6 = (int)(uVar9 - uVar1) / 0x50;
              uVar10 = uVar1;
              if ((uVar6 & 1) != 0) {
                uVar10 = uVar1 - 0x50;
                uVar9 = uVar9 - 0x50;
                fn_0017821c(uVar10,uVar9,0x50);
              }
              for (iVar3 = (int)uVar6 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                fn_0017821c(uVar10 - 0x50,uVar9 - 0x50,0x50);
                uVar9 = uVar9 - 0xa0;
                uVar10 = uVar10 - 0xa0;
                fn_0017821c(uVar10,uVar9,0x50);
              }
            }
          }
          else {
            while (uVar1 != uVar9) {
              uVar9 = uVar9 - 0x50;
              fn_0017821c(uVar6 - 0x50,uVar9,0x50);
              uVar6 = uVar6 - 0x50;
            }
          }
          if (uVar1 < uVar2) {
            if (0 < (int)(uVar2 - uVar1)) {
              uVar2 = (int)(uVar2 - uVar1) / 0x50;
              if ((uVar2 & 1) != 0) {
                fn_0017821c(uVar1,iVar7,0x50);
                uVar1 = uVar1 + 0x50;
              }
              for (iVar3 = (int)uVar2 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                fn_0017821c(uVar1,iVar7,0x50);
                fn_0017821c(uVar1 + 0x50,iVar7,0x50);
                uVar1 = uVar1 + 0xa0;
              }
            }
          }
          else {
            for (; uVar1 != uVar2; uVar1 = uVar1 + 0x50) {
              fn_0017821c(uVar1,iVar7,0x50);
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (uVar1 != 0) {
              fn_0017821c(uVar1,iVar7,0x50);
            }
            uVar1 = uVar1 + 0x50;
          }
        }
      }
    }
  }
  else if (local_2b0 != uVar6) {
    uVar10 = uVar2 + uVar6 * 0x50;
    uVar6 = uVar10;
    if (uVar2 != uVar1) {
      for (; uVar6 != uVar1; uVar6 = uVar6 + 0x50) {
      }
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + ((int)(uVar1 - uVar10) / 0x50) * -0x50
      ;
    }
  }
  return 1;
}



void fn_00337590(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = 0;
  fn_00158f6c(param_1 + 2,0x100);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar3 = DAT_008f9e34;
  uVar2 = DAT_008f9e30;
  uVar1 = DAT_008f9e2c;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  return;
}


