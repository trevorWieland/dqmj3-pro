#include "0020ea94_0020f1f0.h"



int fn_0020f198(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  
  local_18 = param_5;
  local_14 = (undefined2)param_6;
  local_12 = (undefined2)param_7;
  local_20[0] = param_2;
  local_1c = param_4;
  iVar1 = fn_006af13c(param_1,1,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 != 0) {
    fn_0020f1f0(param_1,local_20);
  }
  return (int)*(char *)(param_1 + 0x71);
}



undefined4 fn_0020f1f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_r6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  
  puVar4 = *(undefined4 **)(param_1 + 100);
  puVar7 = *(undefined4 **)(param_1 + 0x68);
  if (0x1c1 < (uint)((int)puVar7 - (int)puVar4 >> 4)) {
    *(undefined1 *)(param_1 + 0x71) = 1;
    return 0;
  }
  if (puVar7 != puVar4) {
    iVar2 = param_2[1];
    iVar5 = param_2[2];
    do {
      iVar6 = puVar4[1];
      if (iVar2 == iVar6) {
        unaff_r6 = puVar4[2];
      }
      if (iVar2 == iVar6 && iVar5 == unaff_r6) {
LAB_0020f250:
        unaff_r6 = (int)*(short *)(puVar4 + 3);
        if ((*(short *)(param_2 + 3) == unaff_r6) &&
           (*(short *)((int)param_2 + 0xe) == *(short *)((int)puVar4 + 0xe))) {
          return 0;
        }
        bVar9 = *(short *)((int)param_2 + 0xe) == unaff_r6;
        if (bVar9) {
          unaff_r6 = (int)*(short *)((int)puVar4 + 0xe);
        }
        if (bVar9 && *(short *)(param_2 + 3) == unaff_r6) {
          return 0;
        }
      }
      else {
        bVar9 = iVar5 == iVar6;
        if (bVar9) {
          iVar6 = puVar4[2];
        }
        if (bVar9 && iVar2 == iVar6) goto LAB_0020f250;
      }
      puVar4 = puVar4 + 4;
    } while (puVar7 != puVar4);
  }
  if (puVar7 == *(undefined4 **)(param_1 + 0x6c)) {
    fn_0078a864(param_1 + 100,puVar7,param_2);
  }
  else {
    *(undefined4 **)(param_1 + 0x68) = puVar7 + 4;
    if (puVar7 != (undefined4 *)0x0) {
      uVar1 = param_2[1];
      uVar3 = param_2[2];
      uVar8 = param_2[3];
      *puVar7 = *param_2;
      puVar7[1] = uVar1;
      puVar7[2] = uVar3;
      puVar7[3] = uVar8;
    }
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0020ec04) */
/* WARNING: Removing unreachable block (ram,0x0020ec0c) */
/* WARNING: Removing unreachable block (ram,0x0020ece8) */
/* WARNING: Removing unreachable block (ram,0x0020edc0) */
/* WARNING: Removing unreachable block (ram,0x0020ee8c) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0020ee9c */
/* WARNING: Removing unreachable block (ram,0x0020ee9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 fn_0020ea94(short *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint local_c4;
  uint local_b8;
  undefined4 local_a8;
  undefined4 local_9c;
  short asStack_98 [40];
  undefined4 local_48;
  uint local_44;
  int local_3c;
  int local_38;
  short *local_28;
  
  if (*(char *)((int)param_1 + 0x71) == '\0') {
    local_28 = param_1;
    fn_00661308((int)*param_1);
    iVar2 = fn_0033a35c();
    if (iVar2 == 2 || iVar2 == 1) {
      local_48 = *(undefined4 *)(DAT_00897804 + 0xc);
      local_38 = 0;
      fn_00301f50(asStack_98,0x50);
      iVar15 = 0;
      iVar2 = fn_0020c298();
      if (0 < iVar2) {
        do {
          iVar2 = fn_0020c2c4(iVar15);
          if (iVar2 == *local_28) {
            fn_0020c2e0(iVar15,asStack_98 + local_38 * 4,4);
            local_38 = local_38 + 1;
          }
          iVar15 = iVar15 + 1;
          iVar2 = fn_0020c298();
        } while (iVar15 < iVar2);
      }
      local_44 = fn_006b8478(local_48);
      local_3c = 0;
      if (0 < local_38) {
        do {
          iVar2 = local_3c;
          local_c4 = 0;
          if (local_44 != 0) {
            do {
              iVar15 = fn_0028b074(local_48,local_c4);
              uVar16 = local_c4 + 1;
              if (uVar16 < local_44) {
                do {
                  iVar3 = fn_0028b074(local_48,uVar16);
                  puVar4 = (undefined4 *)fn_00100fc6(0xc,0);
                  piVar5 = (int *)fn_00100fc6(0xc,0);
                  puVar4[2] = piVar5;
                  *puVar4 = 0;
                  puVar4[1] = 1;
                  *piVar5 = (int)piVar5;
                  piVar5[1] = (int)piVar5;
                  if (puVar4 == (undefined4 *)0x0) {
                    local_b8 = 0x20;
                  }
                  else {
                    uVar11 = puVar4[1];
                    local_b8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                    if (local_b8 < uVar11 + 0x20) {
                      local_b8 = uVar11 + 0x20;
                    }
                  }
                  puVar6 = (undefined4 *)fn_00100fc6(0xc,0);
                  uVar7 = fn_00100fc6(local_b8 * 0xc,0);
                  puVar6[2] = uVar7;
                  *puVar6 = puVar4;
                  puVar6[1] = local_b8;
                  piVar8 = (int *)puVar6[2];
                  piVar13 = piVar8 + local_b8 * 3;
                  piVar9 = piVar8 + 3;
                  if (piVar8 + 2 != (int *)0x0) {
                    *(undefined2 *)(piVar8 + 2) = *(undefined2 *)(iVar15 + 0x90);
                  }
                  *piVar8 = (int)piVar5;
                  piVar8[1] = piVar5[1];
                  *(int **)piVar5[1] = piVar8;
                  piVar5[1] = (int)piVar8;
                  puVar4 = puVar6;
                  if (piVar9 == piVar13) {
                    if (puVar6 == (undefined4 *)0x0) {
                      local_b8 = 0x20;
                    }
                    else {
                      uVar11 = puVar6[1];
                      local_b8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                      if (local_b8 < uVar11 + 0x20) {
                        local_b8 = uVar11 + 0x20;
                      }
                    }
                    puVar4 = (undefined4 *)fn_00100fc6(0xc,0);
                    uVar7 = fn_00100fc6(local_b8 * 0xc,0);
                    puVar4[2] = uVar7;
                    *puVar4 = puVar6;
                    puVar4[1] = local_b8;
                    piVar9 = (int *)puVar4[2];
                    piVar13 = piVar9 + local_b8 * 3;
                  }
                  piVar8 = piVar9 + 3;
                  if (piVar9 + 2 != (int *)0x0) {
                    *(undefined2 *)(piVar9 + 2) = *(undefined2 *)(iVar15 + 0xb0);
                  }
                  *piVar9 = (int)piVar5;
                  piVar9[1] = piVar5[1];
                  *(int **)piVar5[1] = piVar9;
                  piVar5[1] = (int)piVar9;
                  puVar6 = puVar4;
                  if (piVar8 == piVar13) {
                    if (puVar4 == (undefined4 *)0x0) {
                      local_b8 = 0x20;
                    }
                    else {
                      uVar11 = puVar4[1];
                      local_b8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                      if (local_b8 < uVar11 + 0x20) {
                        local_b8 = uVar11 + 0x20;
                      }
                    }
                    puVar6 = (undefined4 *)fn_00100fc6(0xc,0);
                    uVar7 = fn_00100fc6(local_b8 * 0xc,0);
                    puVar6[2] = uVar7;
                    *puVar6 = puVar4;
                    puVar6[1] = local_b8;
                    piVar8 = (int *)puVar6[2];
                    piVar13 = piVar8 + local_b8 * 3;
                  }
                  piVar9 = piVar8 + 3;
                  if (piVar8 + 2 != (int *)0x0) {
                    *(undefined2 *)(piVar8 + 2) = *(undefined2 *)(iVar3 + 0x90);
                  }
                  *piVar8 = (int)piVar5;
                  piVar8[1] = piVar5[1];
                  *(int **)piVar5[1] = piVar8;
                  piVar5[1] = (int)piVar8;
                  piVar8 = (int *)0x0;
                  puVar4 = puVar6;
                  if (piVar9 == piVar13) {
                    if (puVar6 == (undefined4 *)0x0) {
                      local_b8 = 0x20;
                    }
                    else {
                      uVar11 = puVar6[1];
                      local_b8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                      if (local_b8 < uVar11 + 0x20) {
                        local_b8 = uVar11 + 0x20;
                      }
                    }
                    puVar4 = (undefined4 *)fn_00100fc6(0xc,0);
                    uVar7 = fn_00100fc6(local_b8 * 0xc,0);
                    puVar4[2] = uVar7;
                    *puVar4 = puVar6;
                    puVar4[1] = local_b8;
                    piVar9 = (int *)puVar4[2];
                  }
                  if (piVar9 + 2 != (int *)0x0) {
                    *(undefined2 *)(piVar9 + 2) = *(undefined2 *)(iVar3 + 0xb0);
                  }
                  *piVar9 = (int)piVar5;
                  iVar14 = 4;
                  piVar9[1] = piVar5[1];
                  *(int **)piVar5[1] = piVar9;
                  iVar12 = 0;
                  piVar5[1] = (int)piVar9;
                  do {
                    piVar9 = (int *)*piVar5;
                    if (piVar9 != piVar5) {
                      do {
                        if (asStack_98[iVar2 * 4 + iVar12] == (short)piVar9[2]) {
                          if (piVar9 != piVar5) {
                            iVar14 = iVar14 + -1;
                            *(int *)piVar9[1] = *piVar9;
                            *(int *)(*piVar9 + 4) = piVar9[1];
                            *piVar9 = (int)piVar8;
                            piVar8 = piVar9;
                          }
                          break;
                        }
                        piVar9 = (int *)*piVar9;
                      } while (piVar9 != piVar5);
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < 4);
                  if (iVar14 == 0) {
                    uVar7 = fn_006b85d0(local_48,local_c4);
                    uVar1 = *(undefined2 *)(iVar15 + 0x1c);
                    uVar10 = fn_006b85d0(local_48,uVar16);
                    local_9c = CONCAT22(*(undefined2 *)(iVar3 + 0x1c),uVar1);
                    puVar6 = *(undefined4 **)(local_28 + 0x34);
                    if (puVar6 == *(undefined4 **)(local_28 + 0x36)) {
                      fn_0078a864();
                    }
                    else {
                      *(undefined4 **)(local_28 + 0x34) = puVar6 + 4;
                      if (puVar6 != (undefined4 *)0x0) {
                        *puVar6 = local_a8;
                        puVar6[1] = uVar7;
                        puVar6[2] = uVar10;
                        puVar6[3] = local_9c;
                      }
                    }
                    if (*(char *)((int)local_28 + 0x71) != '\0') {
                      if (piVar5 == (int *)0x0) {
                        return 1;
                      }
                      piVar9 = (int *)*piVar5;
                      while (piVar9 != piVar5) {
                        piVar13 = piVar5;
                        if (piVar9 != piVar5) {
                          piVar13 = (int *)*piVar9;
                          *(int *)piVar9[1] = *piVar9;
                          *(int *)(*piVar9 + 4) = piVar9[1];
                          *piVar9 = (int)piVar8;
                          piVar8 = piVar9;
                        }
                        piVar9 = piVar13;
                      }
                      *piVar5 = (int)piVar8;
                      while (puVar4 != (undefined4 *)0x0) {
                        puVar6 = (undefined4 *)*puVar4;
                        fn_001008c4(puVar4[2],puVar4[1],0);
                        fn_001008c4(puVar4,1,0);
                        puVar4 = puVar6;
                      }
                      return 1;
                    }
                  }
                  if (piVar5 != (int *)0x0) {
                    piVar9 = (int *)*piVar5;
                    while (piVar13 = piVar9, piVar13 != piVar5) {
                      if (piVar13 == piVar5) {
                        piVar9 = piVar5;
                      }
                      else {
                        piVar9 = (int *)*piVar13;
                        *(int *)piVar13[1] = *piVar13;
                        *(int *)(*piVar13 + 4) = piVar13[1];
                        *piVar13 = (int)piVar8;
                        piVar8 = piVar13;
                      }
                    }
                    *piVar5 = (int)piVar8;
                    while (puVar4 != (undefined4 *)0x0) {
                      puVar6 = (undefined4 *)*puVar4;
                      fn_001008c4(puVar4[2],puVar4[1],0);
                      fn_001008c4(puVar4,1,0);
                      puVar4 = puVar6;
                    }
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < local_44);
              }
              local_c4 = local_c4 + 1;
            } while (local_c4 < local_44);
          }
          local_3c = local_3c + 1;
        } while (local_3c < local_38);
      }
    }
  }
  return 1;
}


