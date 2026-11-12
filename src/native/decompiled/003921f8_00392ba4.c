#include "003921f8_00392ba4.h"



void fn_00392ba4(int param_1)

{
  if (*(int *)(param_1 + 0xd4) == 2) {
    fn_0026a494(DAT_00897818,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),1);
    *(undefined4 *)(param_1 + 0xd4) = 4;
  }
  return;
}



void fn_00392ac8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_00392b14,0);
  fn_00747f94(param_1,uVar1,0,1,1,0);
  fn_00144834(0x335);
  return;
}



void fn_0039279c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined *puVar14;
  uint local_30;
  uint local_2c [2];
  
  uVar10 = *(uint *)(param_1 + 0xdc);
  uVar12 = *(uint *)(param_1 + 0xe0);
  if (uVar10 != uVar12) {
    uVar3 = uVar10;
    if (uVar12 <= uVar10) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar12);
    }
    *(uint *)(param_1 + 0xe0) = uVar12 - (uVar12 - uVar10 & 0xfffffffc);
  }
  local_30 = 3;
  puVar13 = (uint *)(param_1 + 0xdc);
  if ((uint)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xdc) >> 2) < 3) {
    uVar10 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
    local_2c[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_2c[0] < uVar10 + 0x20) {
      local_2c[0] = uVar10 + 0x20;
    }
    puVar4 = local_2c;
    if (local_2c[0] < 4) {
      puVar4 = &local_30;
    }
    uVar10 = *puVar4;
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar9 = *(undefined4 **)(param_1 + 0xe0);
    puVar7 = puVar1;
    for (puVar5 = (undefined4 *)*puVar13; puVar5 != puVar9; puVar5 = puVar5 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar7 = puVar7 + 1;
    }
    uVar3 = *puVar13;
    uVar12 = uVar3;
    if (*(uint *)(param_1 + 0xe0) < uVar3) {
      do {
        uVar12 = uVar12 + 4;
      } while (uVar12 != *(uint *)(param_1 + 0xe0));
    }
    fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xe4) - uVar3) >> 2,0);
    uVar12 = *puVar13;
    *(undefined4 **)(param_1 + 0xdc) = puVar1;
    *(int *)(param_1 + 0xe0) = (*(int *)(param_1 + 0xe0) - uVar12 & 0xfffffffc) + (int)puVar1;
    *(undefined4 **)(param_1 + 0xe4) = puVar1 + uVar10;
  }
  uVar10 = 0;
  do {
    puVar14 = &DAT_007c64f8 + uVar10 * 0x10;
    if (((&DAT_007c6500)[uVar10 * 4] != 0xe7) || (iVar2 = fn_00154ac8(0x47d), iVar2 != 0)) {
      puVar5 = *(undefined4 **)(param_1 + 0xe0);
      puVar13 = (uint *)(param_1 + 0xdc);
      if (puVar5 == *(undefined4 **)(param_1 + 0xe4)) {
        uVar12 = (int)((int)puVar5 - *puVar13) >> 2;
        if (uVar12 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xe4) - *puVar13) >> 2)) {
          *(undefined4 **)(param_1 + 0xe0) = puVar5 + 1;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = puVar5[-1];
          }
          puVar7 = puVar5 + -1;
          puVar1 = puVar5;
          if (puVar5 < puVar7) {
            if (0 < (int)puVar7 - (int)puVar5) {
              iVar2 = (int)puVar7 - (int)puVar5 >> 2;
              iVar6 = 0;
              do {
                iVar2 = iVar2 + -1;
                puVar5[iVar6 + -1] = puVar7[iVar6 + -1];
                iVar6 = iVar6 + -1;
              } while (iVar2 != 0);
            }
          }
          else {
            while (puVar5 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar1[-1] = *puVar7;
              puVar1 = puVar1 + -1;
            }
          }
          *puVar5 = puVar14;
        }
        else {
          uVar3 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
          if (uVar3 < uVar12 + 0x20) {
            uVar3 = uVar12 + 0x20;
          }
          puVar9 = (undefined4 *)fn_00100fc6(uVar3 << 2,0);
          puVar1 = puVar9;
          for (puVar7 = (undefined4 *)*puVar13; puVar7 != puVar5; puVar7 = puVar7 + 1) {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *puVar7;
            }
            puVar1 = puVar1 + 1;
          }
          puVar7 = (undefined4 *)(((int)puVar5 - *puVar13 & 0xfffffffc) + (int)puVar9);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = puVar14;
          }
          puVar1 = *(undefined4 **)(param_1 + 0xe0);
          puVar7 = (undefined4 *)(((int)puVar5 - *puVar13 & 0xfffffffc) + (int)puVar9);
          for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
            puVar7 = puVar7 + 1;
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar5;
            }
          }
          uVar8 = *(uint *)(param_1 + 0xe0);
          uVar11 = *puVar13;
          uVar12 = uVar11;
          if (uVar8 <= uVar11) {
            for (; uVar12 != uVar8; uVar12 = uVar12 + 4) {
            }
          }
          fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0xe4) - uVar11) >> 2,0);
          *(undefined4 **)(param_1 + 0xe4) = puVar9 + uVar3;
          *(undefined4 **)(param_1 + 0xe0) = puVar9 + ((int)(uVar8 - uVar11) >> 2) + 1;
          *puVar13 = (uint)puVar9;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xe0) = puVar5 + 1;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = puVar14;
        }
      }
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 3);
  return;
}



void fn_003922dc(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_00392330;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00392330:
  if (param_2 == 0xdb) {
    fn_002d68ac(DAT_00897828);
    fn_003c1f64(puVar1);
    puVar1[0xc] = 0;
  }
  else if (param_2 == 0xdf) {
    fn_003c1f0c(puVar1);
  }
  else if (param_2 == 0xe7) {
    fn_00689d04(param_1,0);
    fn_0037040c(DAT_00897828);
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00892ee4) goto LAB_003923e0;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_003923e0:
    puVar1[8] = 0;
  }
  *(int *)(param_1[0x34] + 0xc) = param_1[0x36];
  return;
}



undefined4 * fn_0039224c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0082b3c0;
  fn_0028e434(puVar1[4],&DAT_007c54f8);
  fn_0028e434(puVar1[5],&DAT_007c58cc);
  fn_0028e434(puVar1[3],&DAT_007c5e58);
  fn_0028e434(puVar1[6],&DAT_007c5ebc);
  return puVar1;
}



void fn_0039221c(undefined4 param_1)

{
  fn_001f7624();
  fn_001f748c(param_1,*(undefined4 *)(DAT_00897828 + 0x68),1);
  return;
}



void fn_003921f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  return;
}


