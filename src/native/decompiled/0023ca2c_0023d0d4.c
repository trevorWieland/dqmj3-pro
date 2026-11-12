#include "0023ca2c_0023d0d4.h"



void fn_0023d0d4(undefined4 param_1)

{
  fn_006bc458(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



undefined4 fn_0023d0bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_00897804 + 0x58) + 4);
  if (*(int *)(iVar1 + 0x84) == 0) {
    *(undefined4 *)(iVar1 + 0x84) = param_1;
    uVar2 = 0;
  }
  else if (*(int *)(iVar1 + 0x88) == 0) {
    *(undefined4 *)(iVar1 + 0x88) = param_1;
    uVar2 = 1;
  }
  else if (*(int *)(iVar1 + 0x8c) == 0) {
    *(undefined4 *)(iVar1 + 0x8c) = param_1;
    uVar2 = 2;
  }
  else if (*(int *)(iVar1 + 0x90) == 0) {
    *(undefined4 *)(iVar1 + 0x90) = param_1;
    uVar2 = 3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 fn_0023d07c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006b8b58(param_2,param_1);
  if ((iVar1 == 0) || (iVar1 = fn_006b8bf4(param_2,param_1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_0023d070(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xf4);
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  iVar2 = fn_006b8b58(uVar3,uVar1);
  if ((iVar2 == 0) || (iVar2 = fn_006b8bf4(uVar3,uVar1), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0023cff0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) == 0x1b0) {
    fn_00301a9c(param_2);
  }
  *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_1 + 8);
  fn_0014f510(param_2 + 0x1b8,param_1 + 0x58);
  *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_1 + 0x6c);
  iVar1 = fn_006d27ac(param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x1c4) = 0;
  }
  else {
    if (iVar1 == 1) {
      *(undefined1 *)(param_2 + 0x1c4) = 0;
      *(undefined1 *)(param_2 + 0x1c5) = 1;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    *(undefined1 *)(param_2 + 0x1c4) = 1;
  }
  *(undefined1 *)(param_2 + 0x1c5) = 0;
  return;
}



void fn_0023ce58(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int local_38;
  int local_34;
  int *local_28;
  
  fn_004b5030(&local_38,param_1);
  fn_00786e18(param_2);
  piVar6 = (int *)*local_28;
  if (piVar6 != local_28) {
    do {
      iVar1 = fn_006d2790(piVar6 + 2,0);
      if (iVar1 == 1) {
        piVar4 = (int *)param_2[1];
        iVar1 = param_2[4];
        if (piVar4 == (int *)0x0) {
          if (param_2[2] == param_2[3]) {
            if (*param_2 == 0) {
              uVar5 = 0x20;
            }
            else {
              uVar2 = *(uint *)(*param_2 + 4);
              uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar5 < uVar2 + 0x20) {
                uVar5 = uVar2 + 0x20;
              }
            }
            piVar4 = (int *)fn_0015ece0(0xc);
            iVar3 = fn_0015ece0(uVar5 * 0x78);
            piVar4[2] = iVar3;
            *piVar4 = *param_2;
            piVar4[1] = uVar5;
            *param_2 = (int)piVar4;
            iVar3 = piVar4[2];
            param_2[2] = iVar3;
            param_2[3] = iVar3 + uVar5 * 0x78;
          }
          piVar4 = (int *)param_2[2];
          param_2[2] = (int)(piVar4 + 0x1e);
        }
        else {
          param_2[1] = *piVar4;
        }
        if (piVar4 + 2 != (int *)0x0) {
          fn_0048c758(piVar4 + 2,piVar6 + 2);
        }
        *piVar4 = iVar1;
        piVar4[1] = *(int *)(iVar1 + 4);
        **(undefined4 **)(iVar1 + 4) = piVar4;
        *(int **)(iVar1 + 4) = piVar4;
        param_2[5] = param_2[5] + 1;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != local_28);
  }
  if (local_28 != (int *)0x0) {
    fn_00786e18(&local_38);
    *local_28 = local_34;
    piVar6 = (int *)local_38;
    while (piVar6 != (int *)0x0) {
      local_38 = *piVar6;
      fn_0014f1bc(piVar6[2]);
      fn_0014f1bc(piVar6);
      piVar6 = (int *)local_38;
    }
  }
  return;
}



void fn_0023cdcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x58);
  fn_006f5e08(auStack_28,DAT_00898840);
  fn_006d3d30(&local_48,auStack_28);
  local_30 = local_48;
  uStack_2c = uStack_44;
  local_40 = fn_00691514(&local_30);
  local_48 = param_4;
  local_38 = param_5;
  fn_002e292c(uVar1,param_1,param_2,param_3);
  return;
}



void fn_0023cdac(undefined4 param_1,undefined4 param_2)

{
  fn_002e2918(*(undefined4 *)(DAT_00897804 + 0x58),param_1,param_2);
  return;
}



void fn_0023cd94(undefined4 param_1)

{
  fn_006bc448(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0023cc44) */

undefined8 fn_0023cbbc(int *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  uVar10 = 0;
  iVar11 = 0;
  iVar4 = *(int *)(*param_1 + -4);
  uVar2 = 1;
  iVar3 = 0;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    puVar5 = (undefined4 *)*param_1;
    if (1 < puVar5[-3] + 1) {
      uVar9 = puVar5[-1];
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 == 0) {
        puVar5 = &DAT_008f9ce8;
      }
      else {
        puVar5 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
        }
        puVar7 = (undefined2 *)((int)puVar5 + uVar9 * 2 + 0xc);
        *puVar5 = 0;
        puVar5[1] = uVar9;
        puVar5[2] = uVar9;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar5 + 3,*param_1,*(int *)(*param_1 + -4) << 1);
      if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
        piVar6 = (undefined4 *)*param_1 + -3;
        iVar8 = *piVar6;
        if ((iVar8 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
        }
      }
      puVar5 = puVar5 + 3;
      *param_1 = (int)puVar5;
    }
    if (puVar5 + -3 != &DAT_008f9ce8) {
      puVar5[-3] = 0xffffffff;
    }
    uVar1 = (ulonglong)uVar2;
    uVar9 = *(ushort *)(*param_1 + iVar4 * 2) - 0x30;
    uVar12 = (uint)((ulonglong)uVar2 * (ulonglong)uVar9);
    bVar13 = CARRY4(uVar10,uVar12);
    uVar10 = uVar10 + uVar12;
    iVar11 = iVar11 + uVar9 * iVar3 +
                      ((int)uVar9 >> 0x1f) * uVar2 +
                      (int)((ulonglong)uVar2 * (ulonglong)uVar9 >> 0x20) + (uint)bVar13;
    uVar2 = (uint)(uVar1 * 10);
    iVar3 = iVar3 * 10 + (int)(uVar1 * 10 >> 0x20);
  }
  return CONCAT44(iVar11,uVar10);
}



void fn_0023ca2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_6c;
  uint local_68 [2];
  undefined1 auStack_60 [68];
  
  uVar7 = 10000;
  uVar1 = uVar7;
  fn_00169c20(param_3,param_4,10000,0);
  uVar6 = uVar7;
  fn_00169c20();
  uVar5 = uVar7;
  uVar8 = fn_00169c20();
  fn_00169c20((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),10000,0);
  local_6c = uVar6;
  local_68[0] = uVar1;
  fn_00101a50(auStack_60,0x40,L"%02u-%04u-%04u-%04u",uVar7,uVar5);
  uVar1 = fn_00100b58(auStack_60);
  if (uVar1 == 0) {
    puVar2 = &DAT_008f9cf4;
  }
  else {
    puVar3 = local_68;
    if (0x20 < uVar1) {
      puVar3 = &local_6c;
    }
    local_6c = uVar1;
    local_68[0] = 0x20;
    uVar6 = *puVar3;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar6);
    }
    if (uVar6 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar6;
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *param_1 = puVar2;
  fn_00301a9c(puVar2,auStack_60,uVar1 << 1);
  return;
}


