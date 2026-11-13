#include "00227ca8_00228554.h"



/* WARNING: Removing unreachable block (ram,0x002285ec) */
/* WARNING: Removing unreachable block (ram,0x002285f0) */
/* WARNING: Removing unreachable block (ram,0x002285f4) */
/* WARNING: Removing unreachable block (ram,0x002285f8) */
/* WARNING: Removing unreachable block (ram,0x002285fc) */
/* WARNING: Removing unreachable block (ram,0x0022859c) */
/* WARNING: Removing unreachable block (ram,0x002285a0) */
/* WARNING: Removing unreachable block (ram,0x002285a4) */
/* WARNING: Removing unreachable block (ram,0x002285a8) */
/* WARNING: Removing unreachable block (ram,0x002285ac) */
/* WARNING: Removing unreachable block (ram,0x00228624) */

void fn_00228554(void)

{
  undefined2 *puVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  uint local_38;
  undefined2 *local_34;
  undefined2 *local_30;
  undefined2 *local_2c;
  int local_28;
  
  if (DAT_008978a0 == 0) {
    puVar6 = (undefined2 *)0x0;
  }
  else {
    puVar6 = (undefined2 *)&DAT_008cddbc;
  }
  puVar1 = (undefined2 *)fn_00100fc6(0x40,0);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *puVar6;
  }
  fn_001008c4(0,0,0);
  puVar6 = puVar1 + 1;
  local_38 = (int)puVar6 - (int)puVar1 >> 1;
  local_28 = 0x20;
  puVar2 = (uint *)&local_28;
  if (0x1f < local_38) {
    puVar2 = &local_38;
  }
  local_34 = (undefined2 *)0x0;
  local_30 = (undefined2 *)0x0;
  local_2c = (undefined2 *)0x0;
  iVar5 = *puVar2;
  local_34 = (undefined2 *)fn_00100fc6(iVar5 << 1,0);
  puVar3 = local_34;
  for (puVar4 = puVar1; puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = *puVar4;
    }
    puVar3 = puVar3 + 1;
  }
  local_30 = (undefined2 *)(((int)puVar6 - (int)puVar1 & 0xfffffffeU) + (int)local_34);
  local_2c = local_34 + iVar5;
  local_38 = 0;
  fn_003634fc(0xb,&local_34,2,1);
  puVar4 = local_34;
  if (local_30 < local_34) {
    do {
      puVar4 = puVar4 + 1;
    } while (puVar4 != local_30);
  }
  fn_001008c4(local_34,(int)local_2c - (int)local_34 >> 1,0);
  puVar4 = puVar1;
  if (puVar6 <= puVar1) {
    for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
    }
  }
  fn_001008c4(puVar1,0x20,0);
  return;
}



void fn_002284f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x11];
  uVar6 = param_2[0x12];
  uVar7 = param_2[0x13];
  param_1[0xb] = param_2[0xc];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar7;
  param_1[0x13] = param_2[0x14];
  param_1[7] = param_2[8];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 9);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x26);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 10);
  *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)((int)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0xb);
  *(undefined1 *)((int)param_1 + 0x2a) = *(undefined1 *)((int)param_2 + 0x2e);
  return;
}



void fn_002284d0(void)

{
  fn_00228c20(*(undefined4 *)(DAT_00897804 + 0x34),DAT_0089789c);
  return;
}



undefined * fn_002283d0(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (DAT_008978a0 != 0) {
    puVar1 = &DAT_008cddbc;
  }
  return puVar1;
}



undefined4 fn_002281a4(void)

{
  return DAT_008978a0;
}



undefined * fn_00228098(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (DAT_0089789c != 0) {
    puVar1 = &DAT_008cddb4;
  }
  return puVar1;
}



void fn_0022806c(int *param_1)

{
  DAT_008978a8 = (**(code **)(*param_1 + 0x44))(param_1,(char *)&DAT_0086a0ac);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00227e6c) */
/* WARNING: Removing unreachable block (ram,0x00227e70) */
/* WARNING: Removing unreachable block (ram,0x00227e74) */
/* WARNING: Removing unreachable block (ram,0x00227e78) */
/* WARNING: Removing unreachable block (ram,0x00227e7c) */

undefined4 fn_00227ca8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_48;
  uint local_44;
  int local_40;
  char local_3c [4];
  uint local_38;
  int *piStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  
  puVar7 = (undefined4 *)0x0;
  puVar8 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,&local_48,param_2,0xffff);
  if ((iVar1 != 0) &&
     (uVar11 = 0, puVar3 = puVar7, puVar9 = puVar8, (int)(local_44 - local_48) >> 2 != 0)) {
    do {
      local_3c[0] = '\0';
      uVar2 = (**(code **)(*param_1 + 0x38))
                        (param_1,local_3c,*(undefined4 *)(local_48 + uVar11 * 4));
      puVar7 = puVar3;
      puVar8 = puVar9;
      if ((uVar2 & ~(int)local_3c[0]) != 0) {
        puVar12 = (undefined4 *)(local_48 + uVar11 * 4);
        if (puVar9 == puVar10) {
          uVar2 = (int)puVar9 - (int)puVar3 >> 2;
          if (uVar2 < (uint)((int)puVar10 - (int)puVar3 >> 2)) {
            puVar3 = puVar9 + -1;
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = puVar9[-1];
            }
            puVar8 = puVar9 + 1;
            puVar5 = puVar9;
            if (puVar9 < puVar3) {
              iVar1 = (int)puVar3 - (int)puVar9;
              if (0 < iVar1) {
                if (iVar1 * 0x20000000 < 0) {
                  puVar3 = puVar9 + -2;
                  puVar5 = puVar9 + -1;
                  *puVar5 = *puVar3;
                }
                for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                  puVar5[-1] = puVar3[-1];
                  puVar3 = puVar3 + -2;
                  puVar5 = puVar5 + -2;
                  *puVar5 = *puVar3;
                }
              }
            }
            else {
              while (puVar9 != puVar3) {
                puVar3 = puVar3 + -1;
                puVar5[-1] = *puVar3;
                puVar5 = puVar5 + -1;
              }
            }
            *puVar9 = *puVar12;
          }
          else {
            local_38 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (local_38 < uVar2 + 0x20) {
              local_38 = uVar2 + 0x20;
            }
            puVar7 = (undefined4 *)fn_00100fc6(local_38 << 2,0);
            puVar5 = puVar7;
            for (puVar8 = puVar3; puVar8 != puVar9; puVar8 = puVar8 + 1) {
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = *puVar8;
              }
              puVar5 = puVar5 + 1;
            }
            puVar8 = (undefined4 *)(((int)puVar9 - (int)puVar3 & 0xfffffffcU) + (int)puVar7);
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar12;
            }
            puVar8 = puVar3;
            if (puVar9 < puVar3) {
              do {
                puVar8 = puVar8 + 1;
              } while (puVar8 != puVar9);
            }
            fn_001008c4(puVar3,(int)puVar10 - (int)puVar3 >> 2,0);
            puVar8 = puVar7 + ((int)puVar9 - (int)puVar3 >> 2) + 1;
            puVar10 = puVar7 + local_38;
          }
        }
        else {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar12;
          }
          puVar8 = puVar9 + 1;
        }
      }
      uVar11 = uVar11 + 1;
      puVar3 = puVar7;
      puVar9 = puVar8;
    } while (uVar11 < (uint)((int)(local_44 - local_48) >> 2));
  }
  iVar1 = (int)puVar8 - (int)puVar7 >> 2;
  if ((iVar1 <= local_2c) || (iVar1 == 0)) {
    puVar3 = puVar7;
    if (puVar8 < puVar7) {
      do {
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar8);
    }
    fn_001008c4(puVar7,(int)puVar10 - (int)puVar7 >> 2,0);
    uVar11 = local_48;
    if (local_44 < local_48) {
      do {
        uVar11 = uVar11 + 4;
      } while (uVar11 != local_44);
    }
    fn_001008c4(local_48,(int)(local_40 - local_48) >> 2,0);
    return 0;
  }
  if (local_28 == 0) {
    puVar4 = &LAB_00600280;
  }
  else {
    puVar4 = &LAB_00600268;
  }
  fn_007b8f40(puVar7,puVar8,puVar4);
  if (local_2c < 0) {
    uVar6 = puVar7[local_2c + ((int)puVar8 - (int)puVar7 >> 2)];
    puVar3 = puVar7;
    if (puVar8 < puVar7) {
      do {
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar8);
    }
    fn_001008c4(puVar7,(int)puVar10 - (int)puVar7 >> 2,0);
    uVar11 = local_48;
    if (local_44 < local_48) {
      do {
        uVar11 = uVar11 + 4;
      } while (uVar11 != local_44);
    }
  }
  else {
    uVar6 = puVar7[local_2c];
    puVar3 = puVar7;
    if (puVar8 < puVar7) {
      do {
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar8);
    }
    fn_001008c4(puVar7,(int)puVar10 - (int)puVar7 >> 2,0);
    uVar11 = local_48;
    if (local_44 < local_48) {
      do {
        uVar11 = uVar11 + 4;
      } while (uVar11 != local_44);
    }
  }
  fn_001008c4(local_48,(int)(local_40 - local_48) >> 2,0);
  return uVar6;
}


