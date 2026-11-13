#include "003cb83c_003cbff8.h"



int fn_003cbff8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x54) < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != *(uint *)(param_1 + 0x54));
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x58) - uVar1) >> 2,0);
  fn_002feef8(*(undefined4 *)(param_1 + 0x48));
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  return param_1;
}



void fn_003cbfb0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00859420;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



void fn_003cbd80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int local_38 [2];
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  local_28 = param_3;
  iStack_2c = param_2;
  iStack_30 = param_1;
  piVar1 = local_38;
  iVar11 = 0;
  if (param_3 < 3) {
    piVar1 = &local_28;
  }
  local_38[0] = 3;
  if (0 < *piVar1) {
    do {
      local_38[0] = 3;
      puVar8 = *(undefined4 **)(param_1 + 0x54);
      puVar10 = (uint *)(param_1 + 0x50);
      if (puVar8 == *(undefined4 **)(param_1 + 0x58)) {
        puVar12 = (undefined4 *)(param_2 + iVar11 * 4);
        uVar5 = (int)((int)puVar8 - *puVar10) >> 2;
        if (uVar5 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x58) - *puVar10) >> 2)) {
          *(undefined4 **)(param_1 + 0x54) = puVar8 + 1;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = puVar8[-1];
          }
          puVar6 = puVar8 + -1;
          puVar9 = puVar8;
          if (puVar8 < puVar6) {
            iVar2 = (int)puVar6 - (int)puVar8;
            if (0 < iVar2) {
              if (iVar2 * 0x20000000 < 0) {
                puVar6 = puVar8 + -2;
                puVar9 = puVar8 + -1;
                *puVar9 = *puVar6;
              }
              for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
                puVar9[-1] = puVar6[-1];
                puVar6 = puVar6 + -2;
                puVar9 = puVar9 + -2;
                *puVar9 = *puVar6;
              }
            }
          }
          else {
            while (puVar8 != puVar6) {
              puVar6 = puVar6 + -1;
              puVar9[-1] = *puVar6;
              puVar9 = puVar9 + -1;
            }
          }
          *puVar8 = *puVar12;
        }
        else {
          uVar13 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (uVar13 < uVar5 + 0x20) {
            uVar13 = uVar5 + 0x20;
          }
          puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
          puVar9 = puVar3;
          for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar8; puVar6 = puVar6 + 1) {
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = *puVar6;
            }
            puVar9 = puVar9 + 1;
          }
          puVar6 = (undefined4 *)(((int)puVar8 - *puVar10 & 0xfffffffc) + (int)puVar3);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar12;
          }
          puVar6 = *(undefined4 **)(param_1 + 0x54);
          puVar12 = (undefined4 *)(((int)puVar8 - *puVar10 & 0xfffffffc) + (int)puVar3);
          for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
            puVar12 = puVar12 + 1;
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar8;
            }
          }
          uVar4 = *puVar10;
          uVar7 = *(uint *)(param_1 + 0x54);
          uVar5 = uVar4;
          if (uVar7 < uVar4) {
            do {
              uVar5 = uVar5 + 4;
            } while (uVar5 != uVar7);
          }
          fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x58) - uVar4) >> 2,0);
          *(undefined4 **)(param_1 + 0x58) = puVar3 + uVar13;
          *(undefined4 **)(param_1 + 0x54) = puVar3 + ((int)(uVar7 - uVar4) >> 2) + 1;
          *puVar10 = (uint)puVar3;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x54) = puVar8 + 1;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(param_2 + iVar11 * 4);
        }
      }
      local_38[0] = 3;
      iVar11 = iVar11 + 1;
      piVar1 = local_38;
      if (local_28 < 3) {
        piVar1 = &local_28;
      }
    } while (iVar11 < *piVar1);
  }
  *(int *)(param_1 + 0x5c) = local_28;
  return;
}



undefined4 fn_003cb938(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_28 [2];
  
  piVar6 = local_28;
  piVar7 = local_28;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = fn_00145b00(0xac,&DAT_00812c8c);
      if (iVar2 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)fn_00677e8c();
      }
      piVar7 = *(int **)(param_1 + 0x18);
      if (piVar7 != piVar6) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))();
        }
        *(int **)(param_1 + 0x18) = piVar6;
      }
      fn_00677b30(*(undefined4 *)(param_1 + 0x18),param_1 + 0x50);
      fn_00295f78(DAT_0089783c);
      goto LAB_003cbca0;
    }
    fn_005f6270(*(undefined4 *)(param_1 + 0x18));
    iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
    if (iVar2 != 0) goto LAB_003cbca0;
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar2 + 0x44) == 0) {
      iVar2 = *(int *)(iVar2 + 0xa4);
      uVar10 = 0;
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          iVar8 = param_1 + uVar10 * 8;
          iVar3 = *(int *)(iVar2 + 0xc) + uVar10 * 0xb8;
          uVar9 = 0;
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
          *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar3 + 8);
          *(undefined4 *)(iVar8 + 0x24) = uVar4;
          uVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2;
          if (uVar1 != 0) {
            do {
              if (*(int *)(*(int *)(param_1 + 0x50) + uVar9 * 4) ==
                  *(int *)(*(int *)(iVar2 + 0xc) + uVar10 * 0xb8 + 0x10)) {
                *(uint *)(param_1 + uVar10 * 4 + 0x38) = uVar9;
                uVar4 = fn_004b9b4c(local_28,*(int *)(iVar2 + 0xc) + uVar10 * 0xb8 + 0x78);
                fn_0014f500(DAT_0089783c,uVar9,uVar4);
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar1);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar2 + 8));
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      iVar2 = *(int *)(iVar2 + 8);
      *(int *)(param_1 + 0x60) = iVar2;
      if (iVar2 < 1) goto LAB_003cbd28;
      goto LAB_003cbb14;
    }
    *(undefined1 *)(param_1 + 100) = 1;
    *(int *)(param_1 + 0x68) = iVar2;
    uVar4 = 3;
  }
  else if (iVar2 == 1) {
    puVar5 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    if (*(undefined4 **)(param_1 + 0x48) != puVar5) {
      fn_002feef8(*(undefined4 **)(param_1 + 0x48));
      *(undefined4 **)(param_1 + 0x48) = puVar5;
    }
    uVar4 = fn_00295f8c(DAT_0089783c,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x4c) * 4 + 0x38)
                        );
    **(undefined4 **)(param_1 + 0x48) = uVar4;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = 0x4f216;
    iVar2 = fn_00145b00(0xb8,&DAT_00812c8c);
    if (iVar2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      puVar5 = (undefined4 *)fn_005f62c0();
      puVar5[8] = &DAT_00859420;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      *puVar5 = &DAT_00859b38;
      iVar2 = fn_00119b40(puVar5 + 0x10);
      piVar6 = (int *)(iVar2 + -0x40);
      fn_0066ddbc(piVar6);
      fn_002fec40(iVar2 + 0x18,s_TaskNexDataStoreGetData_008c6f29);
      *piVar6 = (int)&DAT_0085a1e8;
      *(undefined4 *)(iVar2 + 0x58) = 0;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
      *(undefined4 *)(iVar2 + 0x60) = 0;
      *(undefined4 *)(iVar2 + 100) = 0;
      *(undefined4 *)(iVar2 + 0x68) = 0;
      fn_00678564(piVar6);
    }
    piVar7 = *(int **)(param_1 + 0x44);
    if (piVar7 != piVar6) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      *(int **)(param_1 + 0x44) = piVar6;
    }
    local_28[0] = *(int *)(param_1 + 0x48);
    iVar2 = param_1 + *(int *)(param_1 + 0x4c) * 8;
    fn_00678618(*(undefined4 *)(param_1 + 0x44),iVar2,*(undefined4 *)(iVar2 + 0x20),
                 *(undefined4 *)(iVar2 + 0x24));
    uVar4 = 2;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        return 1;
      }
      goto LAB_003cbca0;
    }
    fn_005f6270(*(undefined4 *)(param_1 + 0x44));
    iVar2 = (**(code **)(**(int **)(param_1 + 0x44) + 0x14))();
    if (iVar2 != 0) goto LAB_003cbca0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 0x44);
    if (iVar2 == 0) {
      fn_00295fb8(DAT_0089783c,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x4c) * 4 + 0x38),
                   *(undefined4 *)(*(int *)(param_1 + 0x48) + 8));
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      local_28[0] = 3;
      if (*(int *)(param_1 + 0x60) < 4) {
        piVar6 = (int *)(param_1 + 0x60);
      }
      if (*piVar6 <= *(int *)(param_1 + 0x4c)) {
LAB_003cbd28:
        uVar4 = 3;
        goto LAB_003cbc4c;
      }
    }
    else {
      if (iVar2 != 0x13) {
        *(undefined1 *)(param_1 + 100) = 1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0xc) = 3;
        goto LAB_003cbca0;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      local_28[0] = 3;
      if (*(int *)(param_1 + 0x60) < 4) {
        piVar7 = (int *)(param_1 + 0x60);
      }
      if (*piVar7 <= *(int *)(param_1 + 0x4c)) goto LAB_003cbd28;
    }
LAB_003cbb14:
    uVar4 = 1;
  }
LAB_003cbc4c:
  *(undefined4 *)(param_1 + 0xc) = uVar4;
LAB_003cbca0:
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}



undefined4 * fn_003cb8ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00830ad4;
  puVar1[0x19] = &DAT_00859090;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0xffffffff;
  return puVar1;
}



void fn_003cb83c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584(param_2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,param_3,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}


