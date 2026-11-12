#include "002d7688_002d7b50.h"



void fn_002d7b50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = fn_006c4168();
  if (iVar1 == 0) {
    fn_006c45f8();
    fn_0022f750();
    return;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  uVar3 = (uint)*(byte *)(param_1 + 0x12);
  iVar1 = 0;
  uVar4 = uVar3;
  if (uVar2 == uVar3) {
    iVar1 = 2;
  }
  else if (uVar2 == 1) {
    iVar1 = 1;
  }
  else {
    uVar4 = 0;
    if (uVar3 == 8) {
      uVar4 = uVar2;
    }
  }
  fn_0022f750(*(undefined4 *)(&DAT_008992d4 + iVar1 * 4));
  fn_0015b0dc();
  fn_0022f750((&PTR_DAT_008992e0)[uVar4]);
  return;
}



void fn_002d7b40(void)

{
  fn_006c4568();
  fn_0022f750();
  return;
}



void fn_002d7b30(void)

{
  fn_006c4410();
  fn_0022f750();
  return;
}



void fn_002d7af8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006c4094();
  if (iVar1 == 3) {
    fn_006c46a4(param_1);
    fn_0022f750();
    return;
  }
  fn_006c4374();
  fn_0022f750();
  return;
}



void fn_002d7ae8(void)

{
  fn_006c4628();
  fn_0022f750();
  return;
}



void fn_002d7ad8(void)

{
  fn_006c4304();
  fn_0022f750();
  return;
}



void fn_002d7ac8(void)

{
  fn_006c4288();
  fn_0022f750();
  return;
}



void fn_002d7a80(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c4720();
  if (iVar1 == 0) {
    fn_006c4258();
    fn_0022f750();
    return;
  }
  fn_002d7bf0(*(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb));
  return;
}



/* WARNING: Removing unreachable block (ram,0x002d7814) */
/* WARNING: Removing unreachable block (ram,0x002d7820) */
/* WARNING: Removing unreachable block (ram,0x002d77ec) */
/* WARNING: Removing unreachable block (ram,0x002d77f0) */
/* WARNING: Removing unreachable block (ram,0x002d77f4) */
/* WARNING: Removing unreachable block (ram,0x002d77f8) */
/* WARNING: Removing unreachable block (ram,0x002d77fc) */
/* WARNING: Removing unreachable block (ram,0x002d783c) */
/* WARNING: Removing unreachable block (ram,0x002d784c) */
/* WARNING: Removing unreachable block (ram,0x002d7824) */
/* WARNING: Removing unreachable block (ram,0x002d782c) */
/* WARNING: Removing unreachable block (ram,0x002d7830) */
/* WARNING: Removing unreachable block (ram,0x002d7834) */

void fn_002d7688(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  puVar11 = (uint *)(param_1 + 4);
  puVar8 = *(undefined4 **)(param_1 + 8);
  puVar4 = *(undefined4 **)(param_1 + 4);
  local_30 = (int)puVar8 - (int)puVar4 >> 2;
  if (local_30 < param_3) {
    iVar12 = param_3 - local_30;
    if (iVar12 != 0) {
      local_30 = iVar12 + local_30;
      if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar4 >> 2) < local_30) {
        uVar2 = (int)(*(int *)(param_1 + 8) - *puVar11) >> 2;
        local_28 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (local_28 < uVar2 + 0x20) {
          local_28 = uVar2 + 0x20;
        }
        puVar5 = &local_28;
        if (local_28 <= local_30) {
          puVar5 = &local_30;
        }
        local_2c = *puVar5;
        puVar1 = (undefined4 *)fn_00100fc6(local_2c << 2,0);
        puVar7 = puVar1;
        for (puVar4 = (undefined4 *)*puVar11; puVar4 != puVar8; puVar4 = puVar4 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar7 = puVar7 + 1;
        }
        puVar4 = (undefined4 *)(((int)puVar8 - *puVar11 & 0xfffffffc) + (int)puVar1);
        for (iVar6 = iVar12; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
          }
          puVar4 = puVar4 + 1;
        }
        puVar7 = *(undefined4 **)(param_1 + 8);
        puVar4 = puVar1 + iVar12 + ((int)((int)puVar8 - *puVar11) >> 2);
        for (; puVar8 != puVar7; puVar8 = puVar8 + 1) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar8;
          }
          puVar4 = puVar4 + 1;
        }
        uVar3 = *(uint *)(param_1 + 8);
        uVar10 = *puVar11;
        uVar2 = uVar10;
        if (uVar3 <= uVar10) {
          for (; uVar2 != uVar3; uVar2 = uVar2 + 4) {
          }
        }
        fn_001008c4(uVar10,(int)(*(int *)(param_1 + 0xc) - uVar10) >> 2,0);
        *(undefined4 **)(param_1 + 0xc) = puVar1 + local_2c;
        *(undefined4 **)(param_1 + 8) = puVar1 + ((int)(uVar3 - uVar10) >> 2) + iVar12;
        *puVar11 = (uint)puVar1;
      }
      else {
        puVar4 = puVar8 + iVar12;
        *(undefined4 **)(param_1 + 8) = puVar8 + iVar12;
        if (puVar4 < puVar8) {
          puVar9 = puVar8 + -iVar12;
          puVar1 = puVar8;
          for (puVar7 = puVar9; puVar7 != puVar8; puVar7 = puVar7 + 1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *puVar7;
            }
            puVar1 = puVar1 + 1;
          }
          puVar7 = puVar8;
          if (puVar8 < puVar9) {
            if (0 < (int)puVar9 - (int)puVar8) {
              iVar12 = (int)puVar9 - (int)puVar8 >> 2;
              iVar6 = 0;
              do {
                iVar12 = iVar12 + -1;
                puVar8[iVar6 + -1] = puVar9[iVar6 + -1];
                iVar6 = iVar6 + -1;
              } while (iVar12 != 0);
            }
          }
          else {
            while (puVar8 != puVar9) {
              puVar9 = puVar9 + -1;
              puVar7[-1] = *puVar9;
              puVar7 = puVar7 + -1;
            }
          }
          if (puVar8 < puVar4) {
            iVar12 = (int)puVar4 - (int)puVar8;
            if (0 < iVar12) {
              puVar4 = puVar8;
              if (iVar12 * 0x20000000 < 0) {
                puVar4 = puVar8 + 1;
                *puVar8 = 0;
              }
              for (iVar12 = iVar12 >> 3; iVar12 != 0; iVar12 = iVar12 + -1) {
                puVar8 = puVar4 + 1;
                *puVar4 = 0;
                puVar4 = puVar4 + 2;
                *puVar8 = 0;
              }
            }
          }
          else {
            for (; puVar8 != puVar4; puVar8 = puVar8 + 1) {
              *puVar8 = 0;
            }
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = 0;
            }
            puVar8 = puVar8 + 1;
          }
        }
      }
    }
  }
  else {
    if (param_3 != local_30) {
      param_4 = puVar4 + param_3;
    }
    if (param_3 != local_30 && puVar4 != puVar8) {
      puVar4 = param_4;
      if (puVar8 <= param_4) {
        for (; puVar4 != puVar8; puVar4 = puVar4 + 1) {
        }
      }
      *(uint *)(param_1 + 8) = (int)puVar8 - ((int)puVar8 - (int)param_4 & 0xfffffffcU);
    }
  }
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = uVar2 + 1;
      *(int *)(*(int *)(param_1 + 4) + uVar2 * 4) = param_2;
      param_2 = param_2 + 7;
      uVar2 = uVar3;
    } while (uVar3 < param_3);
  }
  return;
}


