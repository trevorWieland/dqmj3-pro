#include "00381a08_00382210.h"



void fn_00382210(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((char)param_1[0x41] == '\0') {
    if ((char)param_1[0x1f] != '\x01') {
      if ((char)param_1[0x1f] == '\0') {
        param_1[0x3d] = *param_2;
        param_1[0x3e] = param_2[2];
        (**(code **)(*param_1 + 0x158))(param_1);
        fn_0068ab44(param_1,0x100094e);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
    (**(code **)(*param_1 + 0x128))(param_1);
    (**(code **)(*param_1 + 0x198))(param_1,1);
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x1a],param_1[0x1c],0);
    fn_002c07a4(param_1 + 0x1a);
  }
  else {
    fn_00381320(param_1,0);
    iVar1 = param_1[0x39];
    if ((char)param_1[0x41] == '\x01') {
      if (iVar1 != 0) {
        fn_002b1f48(iVar1,0);
        fn_002b1f0c(iVar1,1);
      }
    }
    else if (iVar1 != 0) {
      fn_002b1f48(iVar1,1);
      fn_002b1f0c(iVar1,0);
    }
  }
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00382198(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x104) != '\x01') {
    fn_002c1d14();
    return;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (*(char *)(param_1 + 0x105) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xdc) == iVar1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0xdc) = iVar1;
  if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0xd8))) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  fn_00381e08(param_1);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00382170(int *param_1)

{
  (**(code **)(*param_1 + 0x110))(param_1,6,0,0,1);
  return;
}



void fn_00382058(undefined4 param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_28 [2];
  
  piVar2 = (int *)fn_002c11d0(param_1,2,0);
  piVar8 = piVar2 + 1;
  local_28[1] = 0x20;
  local_28[0] = piVar2[2] - *piVar8 >> 2;
  puVar3 = local_28;
  if (local_28[0] < 0x20) {
    puVar3 = local_28 + 1;
  }
  uVar11 = *puVar3;
  puVar4 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar6 = (undefined4 *)piVar2[2];
  puVar10 = puVar4;
  for (puVar7 = (undefined4 *)*piVar8; puVar7 != puVar6; puVar7 = puVar7 + 1) {
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = *puVar7;
    }
    puVar10 = puVar10 + 1;
  }
  iVar9 = 0;
  puVar7 = puVar4 + (piVar2[2] - *piVar8 >> 2);
  iVar1 = (int)puVar7 - (int)puVar4 >> 2;
  if (0 < iVar1) {
    do {
      iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,iVar9);
      iVar9 = iVar9 + 1;
      *(byte *)(iVar5 + 0x35) = param_2 ^ 1;
    } while (iVar9 < iVar1);
  }
  puVar10 = puVar4;
  if (puVar7 < puVar4) {
    do {
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar7);
  }
  fn_002feef8(puVar4,(int)(uVar11 * 4) >> 2,0);
  return;
}



void fn_0038203c(int param_1,undefined1 param_2)

{
  fn_002c0bc0();
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x48) = param_2;
  return;
}



void fn_00382018(undefined4 param_1,undefined4 param_2)

{
  fn_002c096c();
  fn_00382d04(param_1,param_2,2);
  return;
}



void fn_00381ef0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_1[0x19] == 6) {
    *(undefined1 *)(param_1[0x3b] + 0x46) = 0;
    fn_002b20a4(param_1[0x39],0);
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x39] + 0x1c));
  }
  fn_002c07e4(param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x19] == 6) {
    *(undefined1 *)(param_1[0x3b] + 0x46) = 1;
    (**(code **)(*(int *)param_1[0x3b] + 0x2c))((int *)param_1[0x3b],param_3,0);
    fn_002b20a4(param_1[0x39],1);
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x39] + 0x1c));
  }
  if (((*(char *)((int)param_1 + 0x105) == '\0') || ((char)param_1[0x41] != '\0')) ||
     (iVar1 = param_1[0x3a], iVar1 == 0)) {
    return;
  }
  *(bool *)(iVar1 + 0x7f) = param_2 == 1;
  fn_0031ef00(iVar1,0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00381ba0) */
/* WARNING: Removing unreachable block (ram,0x00381bac) */
/* WARNING: Removing unreachable block (ram,0x00381b78) */
/* WARNING: Removing unreachable block (ram,0x00381b7c) */
/* WARNING: Removing unreachable block (ram,0x00381b80) */
/* WARNING: Removing unreachable block (ram,0x00381b84) */
/* WARNING: Removing unreachable block (ram,0x00381b88) */
/* WARNING: Removing unreachable block (ram,0x00381bc8) */
/* WARNING: Removing unreachable block (ram,0x00381bd8) */
/* WARNING: Removing unreachable block (ram,0x00381bb0) */
/* WARNING: Removing unreachable block (ram,0x00381bb8) */
/* WARNING: Removing unreachable block (ram,0x00381bbc) */
/* WARNING: Removing unreachable block (ram,0x00381bc0) */

void fn_00381a08(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_40;
  uint local_3c [2];
  int iStack_34;
  uint *puStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  puVar7 = (undefined4 *)param_2[1];
  puVar1 = (undefined4 *)*param_2;
  local_40 = (int)puVar7 - (int)puVar1 >> 2;
  iStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  if (local_40 < 8) {
    iVar11 = 8 - local_40;
    if (iVar11 != 0) {
      local_40 = iVar11 + local_40;
      if ((uint)((int)(param_2[2] - (int)puVar1) >> 2) < local_40) {
        uVar12 = (int)(param_2[1] - *param_2) >> 2;
        uVar10 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
        local_3c[0] = uVar12 + 0x20;
        if (uVar12 + 0x20 <= uVar10) {
          local_3c[0] = uVar10;
        }
        puVar8 = &local_40;
        if (local_40 < local_3c[0]) {
          puVar8 = local_3c;
        }
        uVar12 = *puVar8;
        puVar2 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
        puVar5 = puVar2;
        for (puVar1 = (undefined4 *)*param_2; puVar1 != puVar7; puVar1 = puVar1 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar1;
          }
          puVar5 = puVar5 + 1;
        }
        puVar1 = (undefined4 *)(((int)puVar7 - *param_2 & 0xfffffffc) + (int)puVar2);
        for (iVar4 = iVar11; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
          }
          puVar1 = puVar1 + 1;
        }
        puVar5 = (undefined4 *)param_2[1];
        puVar1 = puVar2 + iVar11 + ((int)((int)puVar7 - *param_2) >> 2);
        for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *puVar7;
          }
          puVar1 = puVar1 + 1;
        }
        uVar6 = param_2[1];
        uVar9 = *param_2;
        uVar10 = uVar9;
        if (uVar6 <= uVar9) {
          for (; uVar10 != uVar6; uVar10 = uVar10 + 4) {
          }
        }
        fn_001008c4(uVar9,(int)(param_2[2] - uVar9) >> 2,0);
        param_2[2] = (uint)(puVar2 + uVar12);
        param_2[1] = (uint)(puVar2 + ((int)(uVar6 - uVar9) >> 2) + iVar11);
        *param_2 = (uint)puVar2;
      }
      else {
        puVar1 = puVar7 + iVar11;
        param_2[1] = (uint)(puVar7 + iVar11);
        if (puVar1 < puVar7) {
          puVar3 = puVar7 + -iVar11;
          puVar2 = puVar7;
          for (puVar5 = puVar3; puVar5 != puVar7; puVar5 = puVar5 + 1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar5;
            }
            puVar2 = puVar2 + 1;
          }
          puVar5 = puVar7;
          if (puVar7 < puVar3) {
            iVar11 = (int)puVar3 - (int)puVar7;
            if (0 < iVar11) {
              if (iVar11 * 0x20000000 < 0) {
                puVar3 = puVar3 + -1;
                puVar5 = puVar7 + -1;
                *puVar5 = *puVar3;
              }
              for (iVar11 = iVar11 >> 3; iVar11 != 0; iVar11 = iVar11 + -1) {
                puVar5[-1] = puVar3[-1];
                puVar3 = puVar3 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar3;
              }
            }
          }
          else {
            while (puVar7 != puVar3) {
              puVar3 = puVar3 + -1;
              puVar5[-1] = *puVar3;
              puVar5 = puVar5 + -1;
            }
          }
          if (puVar7 < puVar1) {
            iVar11 = (int)puVar1 - (int)puVar7;
            if (0 < iVar11) {
              puVar1 = puVar7;
              if (iVar11 * 0x20000000 < 0) {
                puVar1 = puVar7 + 1;
                *puVar7 = 0;
              }
              for (iVar11 = iVar11 >> 3; iVar11 != 0; iVar11 = iVar11 + -1) {
                puVar7 = puVar1 + 1;
                *puVar1 = 0;
                puVar1 = puVar1 + 2;
                *puVar7 = 0;
              }
            }
          }
          else {
            for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
              *puVar7 = 0;
            }
          }
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = 0;
            }
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
  }
  else if ((8 < local_40) && (puVar5 = puVar1 + 8, puVar1 != puVar7)) {
    puVar1 = puVar5;
    if (puVar7 < puVar5) {
      do {
        puVar1 = puVar1 + 1;
      } while (puVar1 != puVar7);
    }
    param_2[1] = (int)puVar7 - ((int)puVar7 - (int)puVar5 & 0xfffffffcU);
  }
  uVar12 = 0;
  do {
    local_40 = (int)(param_2[1] - *param_2) >> 2;
    if (local_40 <= uVar12) {
      fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar12);
    }
    uVar10 = uVar12 + 1;
    *(undefined4 *)(*param_2 + uVar12 * 4) = 0;
    uVar12 = uVar10;
  } while ((int)uVar10 < 8);
  if (*(int *)(param_1 + 0xfc) == 0) {
    local_40 = (int)(param_2[1] - *param_2) >> 2;
    if (local_40 == 0) {
      fn_002ff628(9,&DAT_008c7672);
    }
    *(undefined4 *)*param_2 = local_28;
    *(undefined4 *)(param_1 + 0xfc) = 4;
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}


