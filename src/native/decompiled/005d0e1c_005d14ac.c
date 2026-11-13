#include "005d0e1c_005d14ac.h"



void fn_005d14ac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0084c158;
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if ((uint)param_1[4] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[4]);
  }
  fn_001008c4(uVar1,(int)(param_1[5] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005d13a0) */

undefined4 * fn_005d1330(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20 [4];
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = local_20;
  puVar2 = (undefined4 *)fn_0028e264(iVar1,param_1);
  puVar10 = puVar2 + 3;
  *puVar2 = &DAT_0084c158;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  local_20[1] = 0x31;
  if ((uint)((int)(puVar2[5] - *puVar10) >> 2) < 0x31) {
    uVar11 = (int)(puVar2[4] - *puVar10) >> 2;
    local_20[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_20[0] < uVar11 + 0x20) {
      local_20[0] = uVar11 + 0x20;
    }
    if (local_20[0] < 0x32) {
      puVar3 = local_20 + 1;
    }
    uVar11 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar8 = (undefined4 *)puVar2[4];
    puVar5 = puVar4;
    for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    uVar9 = *puVar10;
    uVar6 = uVar9;
    if ((uint)puVar2[4] < uVar9) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != puVar2[4]);
    }
    fn_001008c4(uVar9,(int)(puVar2[5] - uVar9) >> 2,0);
    uVar6 = *puVar10;
    puVar2[3] = puVar4;
    puVar2[4] = (puVar2[4] - uVar6 & 0xfffffffc) + (int)puVar4;
    puVar2[5] = puVar4 + uVar11;
  }
  return puVar2;
}



void fn_005d12e8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar3 != uVar2) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    *(uint *)(param_1 + 0x10) = uVar2 - (uVar2 - uVar3 & 0xfffffffc);
  }
  return;
}



void fn_005d1294(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  fn_002c3d68();
  if ((*(char *)(param_1 + 0xc0) == '\0') && (-1 < *(int *)(param_1 + 0xbc))) {
    puVar1 = (undefined4 *)fn_006e9744(*(undefined4 *)(param_1 + 0xb4));
    fn_0029071c(*puVar1);
  }
  fn_006899f4(param_1,0xd9,0);
  iVar2 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(iVar2 + 8) = 0;
  uVar5 = *(uint *)(iVar2 + 0xc);
  uVar4 = *(uint *)(iVar2 + 0x10);
  if (uVar5 != uVar4) {
    uVar3 = uVar5;
    if (uVar4 <= uVar5) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(iVar2 + 0x10) = uVar4 - (uVar4 - uVar5 & 0xfffffffc);
  }
  return;
}



void fn_005d0e1c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  puVar10 = (uint *)(param_1 + 0xc);
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  if (puVar8 == *(undefined4 **)(param_1 + 0x14)) {
    uVar3 = (int)((int)puVar8 - *puVar10) >> 2;
    if (uVar3 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x14) - *puVar10) >> 2)) {
      *(undefined4 **)(param_1 + 0x10) = puVar8 + 1;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = puVar8[-1];
      }
      puVar12 = puVar8 + -1;
      puVar6 = puVar8;
      if (puVar8 < puVar12) {
        iVar4 = (int)puVar12 - (int)puVar8;
        if (0 < iVar4) {
          if (iVar4 * 0x20000000 < 0) {
            puVar12 = puVar8 + -2;
            puVar6 = puVar8 + -1;
            *puVar6 = *puVar12;
          }
          for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar6[-1] = puVar12[-1];
            puVar12 = puVar12 + -2;
            puVar6 = puVar6 + -2;
            *puVar6 = *puVar12;
          }
        }
      }
      else {
        while (puVar8 != puVar12) {
          puVar12 = puVar12 + -1;
          puVar6[-1] = *puVar12;
          puVar6 = puVar6 + -1;
        }
      }
      *puVar8 = *param_2;
    }
    else {
      uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
      if (uVar11 < uVar3 + 0x20) {
        uVar11 = uVar3 + 0x20;
      }
      puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
      puVar6 = puVar1;
      for (puVar12 = (undefined4 *)*puVar10; puVar12 != puVar8; puVar12 = puVar12 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar12;
        }
        puVar6 = puVar6 + 1;
      }
      puVar12 = (undefined4 *)(((int)puVar8 - *puVar10 & 0xfffffffc) + (int)puVar1);
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *param_2;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      puVar12 = (undefined4 *)(((int)puVar8 - *puVar10 & 0xfffffffc) + (int)puVar1);
      for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
        puVar12 = puVar12 + 1;
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *puVar8;
        }
      }
      uVar2 = *puVar10;
      uVar7 = *(uint *)(param_1 + 0x10);
      uVar3 = uVar2;
      if (uVar7 < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != uVar7);
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x14) - uVar2) >> 2,0);
      *(undefined4 **)(param_1 + 0x14) = puVar1 + uVar11;
      *(undefined4 **)(param_1 + 0x10) = puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1;
      *puVar10 = (uint)puVar1;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x10) = puVar8 + 1;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
  }
  puVar8 = *(undefined4 **)(param_1 + 0xc);
  puVar12 = *(undefined4 **)(param_1 + 0x10);
  if (puVar8 != puVar12) {
    fn_007abe64(puVar8,puVar12,(int)puVar12 - (int)puVar8 >> 2,fn_0065ed20);
    if ((int)puVar12 - (int)puVar8 < 0x41) {
      puVar6 = puVar8 + 1;
      if (puVar6 != puVar12) {
        do {
          local_30 = *puVar6;
          iVar4 = fn_0065ed20(&local_30,puVar8);
          if (iVar4 == 0) {
            local_2c[0] = local_30;
            iVar4 = fn_0065ed20(local_2c,puVar6 + -1);
            puVar5 = puVar6 + -1;
            puVar1 = puVar6;
            while (puVar9 = puVar5, iVar4 != 0) {
              *puVar1 = *puVar9;
              iVar4 = fn_0065ed20(local_2c,puVar9 + -1);
              puVar5 = puVar9 + -1;
              puVar1 = puVar9;
            }
            *puVar1 = local_2c[0];
          }
          else {
            puVar1 = puVar6 + 1;
            puVar5 = puVar6;
            if (puVar8 < puVar6) {
              iVar4 = (int)puVar6 - (int)puVar8;
              if (0 < iVar4) {
                if (iVar4 * 0x20000000 < 0) {
                  puVar5 = puVar6 + -1;
                  *puVar6 = *puVar5;
                  puVar1 = puVar6;
                }
                for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar1[-1] = puVar5[-1];
                  puVar5 = puVar5 + -2;
                  puVar1 = puVar1 + -2;
                  *puVar1 = *puVar5;
                }
              }
            }
            else {
              while (puVar8 != puVar5) {
                puVar1 = puVar1 + -1;
                *puVar1 = puVar5[-1];
                puVar5 = puVar5 + -1;
              }
            }
            *puVar8 = local_30;
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar12);
        return;
      }
    }
    else {
      puVar6 = puVar8;
      while (puVar1 = puVar6 + 1, puVar1 != puVar8 + 0x10) {
        local_30 = *puVar1;
        iVar4 = fn_0065ed20(&local_30,puVar8);
        if (iVar4 == 0) {
          local_2c[0] = local_30;
          iVar4 = fn_0065ed20(local_2c,puVar6);
          puVar5 = puVar1;
          while (puVar9 = puVar6, iVar4 != 0) {
            *puVar5 = *puVar9;
            iVar4 = fn_0065ed20(local_2c,puVar9 + -1);
            puVar6 = puVar9 + -1;
            puVar5 = puVar9;
          }
          *puVar5 = local_2c[0];
          puVar6 = puVar1;
        }
        else {
          puVar5 = puVar6 + 2;
          puVar9 = puVar1;
          if (puVar8 < puVar1) {
            iVar4 = (int)puVar1 - (int)puVar8;
            if (0 < iVar4) {
              if (iVar4 * 0x20000000 < 0) {
                *puVar1 = *puVar6;
                puVar5 = puVar1;
                puVar9 = puVar6;
              }
              for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar5[-1] = puVar9[-1];
                puVar9 = puVar9 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar9;
              }
            }
          }
          else {
            while (puVar8 != puVar9) {
              puVar5 = puVar5 + -1;
              *puVar5 = puVar9[-1];
              puVar9 = puVar9 + -1;
            }
          }
          *puVar8 = local_30;
          puVar6 = puVar1;
        }
      }
      for (puVar8 = puVar8 + 0x10; puVar8 != puVar12; puVar8 = puVar8 + 1) {
        local_30 = *puVar8;
        iVar4 = fn_0065ed20(&local_30);
        puVar1 = puVar8 + -1;
        puVar6 = puVar8;
        while (puVar5 = puVar1, iVar4 != 0) {
          *puVar6 = *puVar5;
          iVar4 = fn_0065ed20(&local_30,puVar5 + -1);
          puVar1 = puVar5 + -1;
          puVar6 = puVar5;
        }
        *puVar6 = local_30;
      }
    }
  }
  return;
}


