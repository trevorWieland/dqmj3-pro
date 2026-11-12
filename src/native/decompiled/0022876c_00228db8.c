#include "0022876c_00228db8.h"



void fn_00228db8(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = fn_0077f194(param_2,*param_1,100);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  piVar1 = (int *)uVar4;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 != (int *)0x0 && iVar2 != 0) {
    iVar2 = param_3[1];
    iVar3 = param_3[2];
    piVar1[2] = *param_3;
    piVar1[3] = iVar2;
    piVar1[4] = iVar3;
    fn_0024e8c4(piVar1,0);
    return;
  }
  return;
}



undefined4 fn_00228c44(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  iVar7 = *param_1;
  piVar1 = (int *)fn_0077f194(param_2,iVar7,100);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
    }
    fn_007af2a4(iVar7,(uint *)(iVar7 + 0xaf0),100);
    fn_007a53b4(iVar7,iVar7 + 0x1c0);
    uVar2 = 1;
    for (puVar8 = (uint *)(iVar7 + 0x1c0); puVar8 != (uint *)(iVar7 + 0xaf0); puVar8 = puVar8 + 7) {
      uVar6 = *puVar8;
      puVar5 = puVar8 + -7;
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      uVar15 = puVar8[4];
      uVar16 = puVar8[5];
      uVar17 = puVar8[6];
      puVar4 = puVar8;
      if ((uVar6 != 0) && ((puVar3 = puVar8, *puVar5 == 0 || (uVar6 != 0 && uVar6 < *puVar5)))) {
        do {
          puVar4 = puVar5;
          uVar20 = puVar4[3];
          uVar11 = puVar4[6];
          uVar9 = *puVar4;
          uVar10 = puVar4[1];
          uVar18 = puVar4[4];
          uVar19 = puVar4[5];
          puVar3[2] = puVar4[2];
          puVar3[3] = uVar20;
          puVar3[6] = uVar11;
          *puVar3 = uVar9;
          puVar3[1] = uVar10;
          puVar3[4] = uVar18;
          puVar3[5] = uVar19;
          puVar5 = puVar4 + -7;
          if (uVar6 == 0) break;
          puVar3 = puVar4;
        } while ((*puVar5 == 0) || (uVar6 != 0 && uVar6 < *puVar5));
      }
      *puVar4 = uVar6;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar4[4] = uVar15;
      puVar4[5] = uVar16;
      puVar4[6] = uVar17;
    }
  }
  return uVar2;
}



void fn_00228c20(undefined4 *param_1,undefined4 param_2)

{
  *(undefined4 *)*param_1 = param_2;
  return;
}



void fn_00228bec(void)

{
  fn_00682b74();
  fn_002feef8();
  return;
}



undefined4 fn_00228b34(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  int local_14 [2];
  
  uVar3 = 0;
  fn_00158f6c(param_2,0x4c);
  iVar1 = fn_0044bc3c();
  if (((iVar1 != 0) && (uVar2 = fn_0044bd80(local_14), (uVar2 & 0x80000000) == 0)) &&
     (local_14[0] != 0)) {
    if (local_14[0] == 0x10) {
      uVar2 = fn_0044bf2c(&local_38);
      if ((uVar2 & 0x80000000) == 0) {
        *param_2 = 2;
        uVar3 = 1;
        *(undefined4 *)(param_2 + 1) = local_38;
        *(undefined4 *)(param_2 + 5) = local_34;
        *(undefined2 *)(param_2 + 9) = local_30;
      }
    }
    else {
      *param_2 = 1;
      fn_00158f40(param_2 + 1,10,0x2d);
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x00228a9c) */
/* WARNING: Removing unreachable block (ram,0x00228aa0) */
/* WARNING: Removing unreachable block (ram,0x00228aa4) */
/* WARNING: Removing unreachable block (ram,0x00228aa8) */
/* WARNING: Removing unreachable block (ram,0x00228aac) */

void fn_002287d0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  char local_2c [8];
  
  puVar6 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  puVar9 = (undefined4 *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,&local_3c,param_2,0xffff);
  puVar10 = local_34;
  puVar5 = local_38;
  puVar3 = local_3c;
  if (iVar1 != 0) {
    if (param_4 == 0) {
      uVar8 = 0;
      puVar3 = puVar6;
      puVar5 = puVar7;
      if ((int)local_38 - (int)local_3c >> 2 != 0) {
        do {
          local_2c[0] = '\0';
          uVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_2c,local_3c[uVar8]);
          puVar6 = puVar3;
          puVar7 = puVar5;
          if ((uVar2 & (int)local_2c[0]) != 0) {
            puVar10 = local_3c + uVar8;
            if (puVar3 == puVar9) {
              uVar2 = (int)puVar3 - (int)puVar5 >> 2;
              if (uVar2 < (uint)((int)puVar9 - (int)puVar5 >> 2)) {
                puVar5 = puVar3 + -1;
                if (puVar3 != (undefined4 *)0x0) {
                  *puVar3 = puVar3[-1];
                }
                puVar6 = puVar3 + 1;
                puVar4 = puVar3;
                if (puVar3 < puVar5) {
                  iVar1 = (int)puVar5 - (int)puVar3;
                  if (0 < iVar1) {
                    if (iVar1 * 0x20000000 < 0) {
                      puVar5 = puVar3 + -2;
                      puVar4 = puVar3 + -1;
                      *puVar4 = *puVar5;
                    }
                    for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                      puVar4[-1] = puVar5[-1];
                      puVar5 = puVar5 + -2;
                      puVar4 = puVar4 + -2;
                      *puVar4 = *puVar5;
                    }
                  }
                }
                else {
                  while (puVar3 != puVar5) {
                    puVar5 = puVar5 + -1;
                    puVar4[-1] = *puVar5;
                    puVar4 = puVar4 + -1;
                  }
                }
                *puVar3 = *puVar10;
              }
              else {
                local_30 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
                if (local_30 < uVar2 + 0x20) {
                  local_30 = uVar2 + 0x20;
                }
                puVar7 = (undefined4 *)fn_00100fc6(local_30 << 2,0);
                puVar4 = puVar7;
                for (puVar6 = puVar5; puVar6 != puVar3; puVar6 = puVar6 + 1) {
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = *puVar6;
                  }
                  puVar4 = puVar4 + 1;
                }
                puVar6 = (undefined4 *)((int)puVar7 + ((int)puVar3 - (int)puVar5 & 0xfffffffcU));
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = *puVar10;
                }
                puVar6 = puVar5;
                if (puVar3 < puVar5) {
                  do {
                    puVar6 = puVar6 + 1;
                  } while (puVar6 != puVar3);
                }
                fn_001008c4(puVar5,(int)puVar9 - (int)puVar5 >> 2,0);
                puVar6 = puVar7 + ((int)puVar3 - (int)puVar5 >> 2) + 1;
                puVar9 = puVar7 + local_30;
              }
            }
            else {
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *puVar10;
              }
              puVar6 = puVar3 + 1;
            }
          }
          uVar8 = uVar8 + 1;
          puVar3 = puVar6;
          puVar5 = puVar7;
        } while (uVar8 < (uint)((int)local_38 - (int)local_3c >> 2));
      }
    }
    else {
      local_3c = (undefined4 *)0x0;
      local_38 = (undefined4 *)0x0;
      local_34 = (undefined4 *)0x0;
      puVar6 = puVar5;
      puVar7 = puVar3;
      puVar9 = puVar10;
    }
  }
  puVar3 = local_3c;
  if (local_38 < local_3c) {
    do {
      puVar3 = puVar3 + 1;
    } while (puVar3 != local_38);
  }
  fn_001008c4(local_3c,(int)local_34 - (int)local_3c >> 2,0);
  if ((int)puVar6 - (int)puVar7 >> 2 != 0) {
    fn_007b8f40(puVar7,puVar6,&LAB_00600280);
    iVar1 = (int)puVar6 - (int)puVar7 >> 2;
    uVar8 = 0;
    if (param_3 != 0) {
      iVar1 = iVar1 + -1;
    }
    if (iVar1 != 0) {
      do {
        (**(code **)(*param_1 + 0x34))(param_1,puVar7[uVar8]);
        uVar2 = (int)puVar6 - (int)puVar7 >> 2;
        uVar8 = uVar8 + 1;
        if (param_3 != 0) {
          uVar2 = uVar2 - 1;
        }
      } while (uVar8 < uVar2);
    }
  }
  puVar3 = puVar7;
  if (puVar6 < puVar7) {
    do {
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar6);
  }
  fn_001008c4(puVar7,(int)puVar9 - (int)puVar7 >> 2,0);
  return;
}



uint fn_0022876c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  iVar1 = fn_002febd8();
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~(iVar1 - 1U) & 1;
    if (uVar2 != 0) {
      uVar4 = (uint)*(char *)(param_1 + (iVar1 - 1U));
    }
  }
  iVar3 = (iVar1 - uVar2) + -1;
  if (iVar1 - uVar2 != 0 && -2 < iVar3) {
    do {
      iVar1 = iVar3 + -2;
      bVar5 = iVar3 != 1;
      uVar4 = (int)*(char *)(param_1 + iVar3 + -1) |
              ((int)*(char *)(param_1 + iVar3) | uVar4 << 8) << 8;
      iVar3 = iVar1;
    } while (bVar5 && -2 < iVar1);
  }
  return uVar4;
}


