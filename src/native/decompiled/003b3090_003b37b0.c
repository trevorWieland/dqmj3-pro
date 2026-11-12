#include "003b3090_003b37b0.h"



int fn_003b37b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
  if (0 < iVar1) {
    param_1 = *(int *)(param_1 + 4);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(param_1 + iVar2 * 0x28 + 10) == param_2) {
        return param_1 + iVar2 * 0x28;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



int fn_003b3780(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x28 + iVar1 == iVar1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + param_2 * 0x28;
  }
  return iVar1;
}



/* WARNING: Removing unreachable block (ram,0x003b33d4) */
/* WARNING: Removing unreachable block (ram,0x003b33f0) */
/* WARNING: Removing unreachable block (ram,0x003b33a4) */
/* WARNING: Removing unreachable block (ram,0x003b33ac) */
/* WARNING: Removing unreachable block (ram,0x003b33b8) */
/* WARNING: Removing unreachable block (ram,0x003b3448) */
/* WARNING: Removing unreachable block (ram,0x003b3474) */
/* WARNING: Removing unreachable block (ram,0x003b33f4) */
/* WARNING: Removing unreachable block (ram,0x003b33fc) */
/* WARNING: Removing unreachable block (ram,0x003b3420) */
/* WARNING: Removing unreachable block (ram,0x003b3434) */

int fn_003b3090(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_f8 [2];
  undefined1 auStack_f0 [92];
  undefined1 auStack_94 [96];
  uint local_34 [2];
  uint local_2c;
  uint local_28;
  
  puVar7 = (uint *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar2 = uVar6 - uVar11;
  lVar1 = (longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20);
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = iVar3 >> 6;
  local_2c = iVar10 - (iVar3 >> 0x1f);
  uVar8 = local_2c + param_2;
  fn_00301f50(auStack_94,0x5c,iVar10,(int)lVar1);
  fn_0017821c(auStack_f0,auStack_94,0x5c);
  iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if ((uint)((iVar10 >> 6) - (iVar10 >> 0x1f)) < uVar8) {
    iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    iVar10 = uVar8 - ((iVar10 >> 6) - (iVar10 >> 0x1f));
    if (iVar10 != 0) {
      iVar4 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
      uVar11 = *(int *)(param_1 + 0x18) - uVar11;
      iVar3 = (int)((longlong)(int)uVar11 * -0x4de9bd37 + ((ulonglong)uVar11 << 0x20) >> 0x20);
      if ((uint)((iVar3 >> 6) - (iVar3 >> 0x1f)) < (uint)(((iVar4 >> 6) - (iVar4 >> 0x1f)) + iVar10)
         ) {
        iVar3 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
        iVar4 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
        local_34[0] = ((iVar3 >> 6) - (iVar3 >> 0x1f)) + iVar10;
        uVar2 = (iVar4 >> 6) - (iVar4 >> 0x1f);
        local_f8[0] = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (local_f8[0] < uVar2 + 0x20) {
          local_f8[0] = uVar2 + 0x20;
        }
        puVar5 = local_34;
        if (local_34[0] < local_f8[0]) {
          puVar5 = local_f8;
        }
        local_28 = *puVar5;
        uVar8 = fn_00100fc6(local_28 * 0x5c,0);
        uVar11 = uVar8;
        for (uVar2 = *puVar7; uVar2 != uVar6; uVar2 = uVar2 + 0x5c) {
          if (uVar11 != 0) {
            fn_0017821c(uVar11,uVar2,0x5c);
          }
          uVar11 = uVar11 + 0x5c;
        }
        iVar3 = (int)((longlong)(int)(uVar6 - *puVar7) * -0x4de9bd37 +
                      ((ulonglong)(uVar6 - *puVar7) << 0x20) >> 0x20);
        iVar4 = uVar8 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * 0x5c;
        for (iVar3 = iVar10; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (iVar4 != 0) {
            fn_0017821c(iVar4,auStack_f0,0x5c);
          }
          iVar4 = iVar4 + 0x5c;
        }
        uVar2 = *(uint *)(param_1 + 0x14);
        iVar3 = (int)((longlong)(int)(uVar6 - *puVar7) * -0x4de9bd37 +
                      ((ulonglong)(uVar6 - *puVar7) << 0x20) >> 0x20);
        iVar3 = uVar8 + (((iVar3 >> 6) - (iVar3 >> 0x1f)) + iVar10) * 0x5c;
        for (; uVar6 != uVar2; uVar6 = uVar6 + 0x5c) {
          if (iVar3 != 0) {
            fn_0017821c(iVar3,uVar6,0x5c);
          }
          iVar3 = iVar3 + 0x5c;
        }
        uVar2 = *(uint *)(param_1 + 0x14);
        uVar11 = *puVar7;
        iVar3 = (int)((longlong)(int)(uVar2 - uVar11) * -0x4de9bd37 +
                      ((ulonglong)(uVar2 - uVar11) << 0x20) >> 0x20);
        uVar6 = uVar11;
        if (uVar2 <= uVar11) {
          for (; uVar6 != uVar2; uVar6 = uVar6 + 0x5c) {
          }
        }
        uVar6 = *(int *)(param_1 + 0x18) - uVar11;
        iVar4 = (int)((longlong)(int)uVar6 * -0x4de9bd37 + ((ulonglong)uVar6 << 0x20) >> 0x20);
        fn_001008c4(uVar11,(iVar4 >> 6) - (iVar4 >> 0x1f),0);
        *puVar7 = uVar8;
        *(uint *)(param_1 + 0x14) = uVar8 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * 0x5c + iVar10 * 0x5c;
        *(uint *)(param_1 + 0x18) = uVar8 + local_28 * 0x5c;
      }
      else {
        uVar2 = uVar6 + iVar10 * 0x5c;
        *(uint *)(param_1 + 0x14) = uVar6 + iVar10 * 0x5c;
        if (uVar2 < uVar6) {
          uVar9 = uVar6 + iVar10 * -0x5c;
          uVar11 = uVar6;
          for (uVar8 = uVar9; uVar8 != uVar6; uVar8 = uVar8 + 0x5c) {
            if (uVar11 != 0) {
              fn_0017821c(uVar11,uVar8,0x5c);
            }
            uVar11 = uVar11 + 0x5c;
          }
          uVar11 = uVar6;
          if (uVar6 < uVar9) {
            uVar11 = uVar9 - uVar6;
            if (0 < (int)uVar11) {
              iVar10 = (int)((longlong)(int)uVar11 * -0x4de9bd37 + ((ulonglong)uVar11 << 0x20) >>
                            0x20);
              uVar8 = uVar6;
              if (((iVar10 >> 6) - (iVar10 >> 0x1f) & 1U) != 0) {
                uVar9 = uVar9 - 0x5c;
                uVar8 = uVar6 - 0x5c;
                fn_0017821c(uVar8,uVar9,0x5c);
              }
              iVar10 = (int)((longlong)(int)uVar11 * -0x4de9bd37 + ((ulonglong)uVar11 << 0x20) >>
                            0x20);
              for (iVar10 = (iVar10 >> 6) - (iVar10 >> 0x1f) >> 1; iVar10 != 0; iVar10 = iVar10 + -1
                  ) {
                fn_0017821c(uVar8 - 0x5c,uVar9 - 0x5c,0x5c);
                uVar9 = uVar9 - 0xb8;
                uVar8 = uVar8 - 0xb8;
                fn_0017821c(uVar8,uVar9,0x5c);
              }
            }
          }
          else {
            while (uVar6 != uVar9) {
              uVar9 = uVar9 - 0x5c;
              fn_0017821c(uVar11 - 0x5c,uVar9,0x5c);
              uVar11 = uVar11 - 0x5c;
            }
          }
          if (uVar6 < uVar2) {
            uVar2 = uVar2 - uVar6;
            if (0 < (int)uVar2) {
              iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20
                            );
              if (((iVar10 >> 6) - (iVar10 >> 0x1f) & 1U) != 0) {
                fn_0017821c(uVar6,auStack_f0,0x5c);
                uVar6 = uVar6 + 0x5c;
              }
              iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20
                            );
              for (iVar10 = (iVar10 >> 6) - (iVar10 >> 0x1f) >> 1; iVar10 != 0; iVar10 = iVar10 + -1
                  ) {
                fn_0017821c(uVar6,auStack_f0,0x5c);
                fn_0017821c(uVar6 + 0x5c,auStack_f0,0x5c);
                uVar6 = uVar6 + 0xb8;
              }
            }
          }
          else {
            for (; uVar6 != uVar2; uVar6 = uVar6 + 0x5c) {
              fn_0017821c(uVar6,auStack_f0,0x5c);
            }
          }
        }
        else {
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (uVar6 != 0) {
              fn_0017821c(uVar6,auStack_f0,0x5c);
            }
            uVar6 = uVar6 + 0x5c;
          }
        }
      }
    }
  }
  else {
    iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    if ((uVar8 < (uint)((iVar10 >> 6) - (iVar10 >> 0x1f))) &&
       (uVar2 = uVar11 + uVar8 * 0x5c, uVar11 != uVar6)) {
      uVar11 = uVar2;
      if (uVar6 < uVar2) {
        do {
          uVar11 = uVar11 + 0x5c;
        } while (uVar11 != uVar6);
      }
      iVar10 = (int)((longlong)(int)(uVar6 - uVar2) * -0x4de9bd37 +
                     ((ulonglong)(uVar6 - uVar2) << 0x20) >> 0x20);
      *(uint *)(param_1 + 0x14) = uVar6 + ((iVar10 >> 6) - (iVar10 >> 0x1f)) * -0x5c;
    }
  }
  uVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar10 = (int)((longlong)(int)uVar6 * -0x4de9bd37 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar6 = local_2c;
  if (local_2c < (uint)((iVar10 >> 6) - (iVar10 >> 0x1f))) {
    do {
      uVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
      iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
      if ((iVar10 >> 6 != iVar10 >> 0x1f) &&
         (iVar10 = *(int *)(param_1 + 0x10) + uVar6 * 0x5c, iVar10 != 0)) {
        fn_00301f50(iVar10,0x5c);
      }
      uVar6 = uVar6 + 1;
      uVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
      iVar10 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    } while (uVar6 < (uint)((iVar10 >> 6) - (iVar10 >> 0x1f)));
  }
  uVar6 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar10 = (int)((longlong)(int)uVar6 * -0x4de9bd37 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  return (iVar10 >> 6) - (iVar10 >> 0x1f);
}


