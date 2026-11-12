#include "00787f6c_00788218.h"



/* WARNING: Removing unreachable block (ram,0x007884a0) */
/* WARNING: Removing unreachable block (ram,0x007884b8) */
/* WARNING: Removing unreachable block (ram,0x00788464) */
/* WARNING: Removing unreachable block (ram,0x0078846c) */
/* WARNING: Removing unreachable block (ram,0x00788484) */
/* WARNING: Removing unreachable block (ram,0x007884e4) */
/* WARNING: Removing unreachable block (ram,0x00788510) */
/* WARNING: Removing unreachable block (ram,0x007884c0) */
/* WARNING: Removing unreachable block (ram,0x007884c8) */
/* WARNING: Removing unreachable block (ram,0x007884d0) */
/* WARNING: Removing unreachable block (ram,0x007884dc) */

void fn_00788218(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint local_30;
  uint local_2c [2];
  
  puVar8 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  local_30 = ((int)puVar8 - (int)puVar11) / 0xc;
  if (local_30 < param_2) {
    iVar9 = param_2 - local_30;
    if (iVar9 != 0) {
      local_30 = local_30 + iVar9;
      if ((uint)((int)(param_1[2] - (int)puVar11) / 0xc) < local_30) {
        uVar10 = (int)(param_1[1] - *param_1) / 0xc;
        local_2c[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        if (local_2c[0] < uVar10 + 0x20) {
          local_2c[0] = uVar10 + 0x20;
        }
        puVar4 = local_2c;
        if (local_2c[0] <= local_30) {
          puVar4 = &local_30;
        }
        uVar10 = *puVar4;
        puVar1 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
        puVar6 = puVar1;
        for (puVar11 = (undefined4 *)*param_1; puVar11 != puVar8; puVar11 = puVar11 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar11;
            puVar6[1] = puVar11[1];
            puVar6[2] = puVar11[2];
          }
          puVar6 = puVar6 + 3;
        }
        puVar11 = puVar1 + ((int)((int)puVar8 - *param_1) / 0xc) * 3;
        for (iVar5 = iVar9; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = param_3;
            puVar11[1] = param_4;
            puVar11[2] = param_5;
          }
          puVar11 = puVar11 + 3;
        }
        puVar6 = (undefined4 *)param_1[1];
        puVar11 = puVar1 + ((int)((int)puVar8 - *param_1) / 0xc + iVar9) * 3;
        for (; puVar8 != puVar6; puVar8 = puVar8 + 3) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = *puVar8;
            puVar11[1] = puVar8[1];
            puVar11[2] = puVar8[2];
          }
          puVar11 = puVar11 + 3;
        }
        uVar2 = *param_1;
        uVar7 = param_1[1];
        uVar3 = uVar2;
        if (uVar7 < uVar2) {
          do {
            uVar3 = uVar3 + 0xc;
          } while (uVar3 != uVar7);
        }
        fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
        *param_1 = (uint)puVar1;
        param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) / 0xc) * 3 + iVar9 * 3);
        param_1[2] = (uint)(puVar1 + uVar10 * 3);
        return;
      }
      puVar11 = puVar8 + iVar9 * 3;
      param_1[1] = (uint)(puVar8 + iVar9 * 3);
      if (puVar11 < puVar8) {
        puVar12 = puVar8 + iVar9 * -3;
        puVar6 = puVar8;
        for (puVar1 = puVar12; puVar1 != puVar8; puVar1 = puVar1 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar1;
            puVar6[1] = puVar1[1];
            puVar6[2] = puVar1[2];
          }
          puVar6 = puVar6 + 3;
        }
        puVar6 = puVar8;
        if (puVar8 < puVar12) {
          if (0 < (int)puVar12 - (int)puVar8) {
            uVar10 = ((int)puVar12 - (int)puVar8) / 0xc;
            puVar6 = puVar12;
            puVar1 = puVar8;
            if ((uVar10 & 1) != 0) {
              puVar6 = puVar12 + -3;
              puVar1 = puVar8 + -3;
              *puVar1 = *puVar6;
              puVar8[-2] = puVar12[-2];
              puVar8[-1] = puVar12[-1];
            }
            for (iVar9 = (int)uVar10 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar1[-3] = puVar6[-3];
              puVar1[-2] = puVar6[-2];
              puVar1[-1] = puVar6[-1];
              puVar1[-6] = puVar6[-6];
              puVar1[-5] = puVar6[-5];
              puVar1[-4] = puVar6[-4];
              puVar6 = puVar6 + -6;
              puVar1 = puVar1 + -6;
            }
          }
        }
        else {
          while (puVar8 != puVar12) {
            puVar6[-3] = puVar12[-3];
            puVar6[-2] = puVar12[-2];
            puVar6[-1] = puVar12[-1];
            puVar6 = puVar6 + -3;
            puVar12 = puVar12 + -3;
          }
        }
        if (puVar8 < puVar11) {
          if (0 < (int)puVar11 - (int)puVar8) {
            uVar10 = ((int)puVar11 - (int)puVar8) / 0xc;
            if ((uVar10 & 1) != 0) {
              *puVar8 = param_3;
              puVar11 = puVar8 + 2;
              puVar8[1] = param_4;
              puVar8 = puVar8 + 3;
              *puVar11 = param_5;
            }
            iVar9 = (int)uVar10 >> 1;
            if (iVar9 != 0) {
              do {
                *puVar8 = param_3;
                puVar8[1] = param_4;
                puVar8[2] = param_5;
                puVar8[3] = param_3;
                puVar8[4] = param_4;
                puVar8[5] = param_5;
                iVar9 = iVar9 + -1;
                puVar8 = puVar8 + 6;
              } while (iVar9 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar8 != puVar11; puVar8 = puVar8 + 3) {
            *puVar8 = param_3;
            puVar8[1] = param_4;
            puVar8[2] = param_5;
          }
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = param_3;
            puVar8[1] = param_4;
            puVar8[2] = param_5;
          }
          puVar8 = puVar8 + 3;
        }
      }
    }
  }
  else if ((local_30 != param_2) && (puVar6 = puVar11 + param_2 * 3, puVar11 != puVar8)) {
    puVar11 = puVar6;
    if (puVar8 <= puVar6) {
      for (; puVar11 != puVar8; puVar11 = puVar11 + 3) {
      }
    }
    param_1[1] = (uint)(puVar8 + (((int)puVar8 - (int)puVar6) / 0xc) * -3);
    return;
  }
  return;
}



void fn_00787f6c(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1[2] - *param_1;
  iVar2 = (int)((longlong)(int)uVar1 * -0x77777777 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar1 = param_1[1];
  uVar5 = uVar1 - *param_1;
  iVar6 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 7) - (iVar2 >> 0x1f)) <= (uint)((iVar6 >> 7) - (iVar6 >> 0x1f))) {
    iVar2 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
    uVar5 = (iVar2 >> 7) - (iVar2 >> 0x1f);
    uVar1 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar1 < uVar5 + 0x20) {
      uVar1 = uVar5 + 0x20;
    }
    uVar3 = fn_00100fc6(uVar1 * 0xf0,0,iVar6,iVar2,param_1,param_2);
    uVar7 = uVar3;
    for (uVar5 = *param_1; uVar5 != param_2; uVar5 = uVar5 + 0xf0) {
      if (uVar7 != 0) {
        fn_0017821c(uVar7,uVar5,0xf0);
      }
      uVar7 = uVar7 + 0xf0;
    }
    iVar2 = (int)((longlong)(int)(param_2 - *param_1) * -0x77777777 +
                  ((ulonglong)(param_2 - *param_1) << 0x20) >> 0x20);
    iVar2 = uVar3 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * 0xf0;
    if (iVar2 != 0) {
      fn_0017821c(iVar2,param_3);
    }
    uVar5 = param_1[1];
    iVar2 = (int)((longlong)(int)(param_2 - *param_1) * -0x77777777 +
                  ((ulonglong)(param_2 - *param_1) << 0x20) >> 0x20);
    iVar2 = uVar3 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * 0xf0;
    for (; param_2 != uVar5; param_2 = param_2 + 0xf0) {
      iVar2 = iVar2 + 0xf0;
      if (iVar2 != 0) {
        fn_0017821c(iVar2,param_2,0xf0);
      }
    }
    uVar7 = *param_1;
    uVar4 = param_1[1];
    iVar2 = (int)((longlong)(int)(uVar4 - uVar7) * -0x77777777 +
                  ((ulonglong)(uVar4 - uVar7) << 0x20) >> 0x20);
    uVar5 = uVar7;
    if (uVar4 < uVar7) {
      do {
        uVar5 = uVar5 + 0xf0;
      } while (uVar5 != uVar4);
    }
    iVar6 = (int)((longlong)(int)(param_1[2] - uVar7) * -0x77777777 +
                  ((ulonglong)(param_1[2] - uVar7) << 0x20) >> 0x20);
    fn_001008c4(uVar7,(iVar6 >> 7) - (iVar6 >> 0x1f),0);
    *param_1 = uVar3;
    param_1[1] = uVar3 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * 0xf0 + 0xf0;
    param_1[2] = uVar3 + uVar1 * 0xf0;
    return;
  }
  param_1[1] = uVar1 + 0xf0;
  if (uVar1 != 0) {
    fn_0017821c(uVar1,uVar1 - 0xf0,0xf0);
  }
  uVar5 = uVar1 - 0xf0;
  if (param_2 < uVar5) {
    uVar7 = uVar5 - param_2;
    if (0 < (int)uVar7) {
      iVar2 = (int)((longlong)(int)uVar7 * -0x77777777 + ((ulonglong)uVar7 << 0x20) >> 0x20);
      if (((iVar2 >> 7) - (iVar2 >> 0x1f) & 1U) != 0) {
        uVar5 = uVar1 - 0x1e0;
        uVar1 = uVar1 - 0xf0;
        fn_0017821c(uVar1,uVar5,0xf0);
      }
      iVar2 = (int)((longlong)(int)uVar7 * -0x77777777 + ((ulonglong)uVar7 << 0x20) >> 0x20);
      for (iVar2 = (iVar2 >> 7) - (iVar2 >> 0x1f) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        fn_0017821c(uVar1 - 0xf0,uVar5 - 0xf0,0xf0);
        uVar5 = uVar5 - 0x1e0;
        uVar1 = uVar1 - 0x1e0;
        fn_0017821c(uVar1,uVar5,0xf0);
      }
    }
  }
  else {
    while (param_2 != uVar5) {
      uVar5 = uVar5 - 0xf0;
      uVar1 = uVar1 - 0xf0;
      fn_0017821c(uVar1,uVar5,0xf0);
    }
  }
  fn_0017821c(param_2,param_3,0xf0);
  return;
}


