#include "0020ccb0_0020cdcc.h"



void fn_0020cdcc(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  short local_8a0 [4];
  int aiStack_898 [510];
  undefined1 auStack_a0 [8];
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  undefined1 local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_6c;
  int **local_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  short *local_40;
  int *local_2c;
  int local_28;
  
  local_8c = *(int **)(DAT_00897804 + 0xc);
  local_2c = param_1;
  local_28 = param_2;
  uVar3 = fn_006b8478();
  uVar18 = 0;
  if (uVar3 != 0) {
    uVar19 = uVar18;
    do {
      while (uVar18 = uVar18 + 1, uVar18 < uVar3) {
        puVar4 = (undefined4 *)fn_0028b074(local_8c,uVar19);
        puVar5 = (undefined4 *)fn_0028b074(local_8c,uVar18);
        local_8a0[0] = *(short *)(puVar4 + 0x24);
        local_8a0[1] = *(short *)(puVar4 + 0x2c);
        local_8a0[2] = *(short *)(puVar5 + 0x24);
        local_8a0[3] = *(short *)(puVar5 + 0x2c);
        fn_0020e260(local_8a0);
        iVar6 = fn_001a46f4();
        if (iVar6 != 0) {
          local_84 = (int *)*puVar4;
          piVar15 = (int *)*puVar5;
          if (local_84 < piVar15) {
            local_88 = local_84;
          }
          else {
            local_88 = piVar15;
          }
          if (local_84 == local_88) {
            local_84 = piVar15;
          }
          fn_00770880(auStack_58,local_2c + 0x11);
        }
      }
      uVar18 = uVar19 + 1;
      uVar19 = uVar18;
    } while (uVar18 < uVar3);
  }
  local_7c = 0;
  fn_00301f50(aiStack_898,0x800);
  iVar6 = 1;
  do {
    if (*(char *)(*local_2c + iVar6 * 0x1c + 0x18) != '\0') {
      iVar7 = fn_001a46f4();
      if (iVar7 != 0) {
        iVar7 = local_7c * 2;
        local_7c = local_7c + 1;
        *(short *)((int)aiStack_898 + iVar7) = (short)iVar6;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x3ff);
  local_6c = 0;
  if (0 < local_7c) {
    do {
      if (local_28 == 0) {
LAB_0020d120:
        if (local_6c < local_7c) {
          local_40 = (short *)((int)aiStack_898 + local_6c * 2);
          iVar6 = local_6c;
          do {
            if (local_28 == 0) {
LAB_0020d32c:
              local_88 = (int *)((int)aiStack_898 + iVar6 * 2);
              local_8a0[0] = *local_40;
              local_8a0[1] = (short)*local_88;
              iVar7 = fn_0026cda4();
              puVar17 = (undefined1 *)0x0;
              if (0 < iVar7) {
                do {
                  fn_0026cdec(puVar17,local_8a0 + 2);
                  if (local_8a0[2] == local_8a0[0]) {
                    bVar2 = true;
                    bVar1 = false;
LAB_0020d3dc:
                    if (((!bVar2) && (local_8a0[2] == local_8a0[1])) ||
                       ((!bVar1 && (local_8a0[3] == local_8a0[1])))) {
                      uVar11 = fn_0026cdd0(puVar17);
                      goto code_r0x0020d440;
                    }
                  }
                  else if (local_8a0[3] == local_8a0[0]) {
                    bVar2 = false;
                    bVar1 = true;
                    goto LAB_0020d3dc;
                  }
                  puVar17 = (undefined1 *)(int)(short)((short)puVar17 + 1);
                } while ((int)puVar17 < iVar7);
              }
              uVar11 = 0;
code_r0x0020d440:
              iVar7 = fn_001a46f4(uVar11);
              if (iVar7 != 0) {
                local_90 = (int *)(int)*local_40;
                local_8c = (int *)(int)(short)*local_88;
                fn_00770880(auStack_50,local_2c + 3);
              }
              iVar7 = fn_00378ba8();
              if (0 < iVar7) {
                puVar17 = auStack_a0;
              }
              iVar9 = 0;
              if (0 < iVar7) {
LAB_0020d494:
                iVar10 = 0;
                local_94 = (int *)0x0;
                do {
                  if ((puVar17[iVar10 + 0xc] == '\0') &&
                     (iVar12 = fn_00378bbc(iVar9), iVar12 == local_8a0[iVar10])) {
                    puVar17[iVar10 + 0xc] = 1;
                    iVar12 = 1;
                    iVar10 = 0;
                    goto LAB_0020d4f0;
                  }
                  iVar10 = (int)(short)((short)iVar10 + 1);
                } while (iVar10 < 2);
                goto LAB_0020d548;
              }
LAB_0020d558:
              uVar11 = 0;
code_r0x0020d560:
              iVar7 = fn_001a46f4(uVar11);
              if (iVar7 != 0) {
                local_78 = (int)*local_40;
                iStack_74 = (int)(short)*local_88;
                fn_00770880(auStack_48,local_2c + 10);
              }
            }
            else {
              iVar9 = (int)*(short *)((int)aiStack_898 + iVar6 * 2);
              iVar7 = fn_001a46f4(iVar9);
              if (iVar7 == 0) {
                iVar7 = *local_2c;
              }
              else {
                iVar7 = *local_2c + iVar9 * 0x1c;
              }
              local_98 = (int *)0x0;
              local_94 = (int *)0x0;
              local_90 = (int *)0x0;
              local_8c = (int *)0x0;
              local_88 = (int *)0x0;
              local_84 = (int *)0x0;
              local_5c = &local_98;
              piVar8 = (int *)fn_00100fc6(0xc,0);
              iVar9 = fn_00100fc6(0x180,0);
              piVar8[2] = iVar9;
              *piVar8 = (int)local_98;
              piVar8[1] = 0x20;
              local_88 = (int *)piVar8[2];
              local_8c = local_88 + 0x60;
              local_90 = local_88 + 3;
              *local_88 = (int)local_88;
              local_88[1] = (int)local_88;
              piVar16 = *(int **)(iVar7 + 0x10);
              iVar9 = *local_88;
              local_98 = piVar8;
              for (piVar15 = (int *)*piVar16; piVar15 != piVar16; piVar15 = (int *)*piVar15) {
                if (local_94 == (int *)0x0) {
                  if (local_90 == local_8c) {
                    if (local_98 == (int *)0x0) {
                      uVar18 = 0x20;
                    }
                    else {
                      uVar3 = local_98[1];
                      uVar18 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
                      if (uVar18 < uVar3 + 0x20) {
                        uVar18 = uVar3 + 0x20;
                      }
                    }
                    piVar8 = (int *)fn_00100fc6(0xc,0);
                    iVar10 = fn_00100fc6(uVar18 * 0xc,0);
                    piVar8[2] = iVar10;
                    *piVar8 = (int)local_98;
                    piVar8[1] = uVar18;
                    local_90 = (int *)piVar8[2];
                    local_8c = local_90 + uVar18 * 3;
                    local_98 = piVar8;
                  }
                  piVar8 = local_90;
                  local_90 = local_90 + 3;
                }
                else {
                  piVar8 = local_94;
                  local_94 = (int *)*local_94;
                }
                if (piVar8 + 2 != (int *)0x0) {
                  piVar8[2] = piVar15[2];
                }
                *piVar8 = iVar9;
                piVar8[1] = *(int *)(iVar9 + 4);
                **(undefined4 **)(iVar9 + 4) = piVar8;
                *(int **)(iVar9 + 4) = piVar8;
                local_84 = (int *)((int)local_84 + 1);
              }
              *(undefined1 *)(local_5c + 6) = *(undefined1 *)(iVar7 + 0x18);
              if (local_84 != (int *)0x0) {
                fn_007874ac(&local_98);
                goto LAB_0020d32c;
              }
              fn_007874ac(&local_98);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_7c);
        }
      }
      else {
        iVar7 = (int)*(short *)((int)aiStack_898 + local_6c * 2);
        iVar6 = fn_001a46f4(iVar7);
        if (iVar6 == 0) {
          iVar6 = *local_2c;
        }
        else {
          iVar6 = *local_2c + iVar7 * 0x1c;
        }
        local_98 = (int *)0x0;
        local_94 = (int *)0x0;
        local_90 = (int *)0x0;
        local_8c = (int *)0x0;
        local_88 = (int *)0x0;
        local_84 = (int *)0x0;
        piVar8 = (int *)fn_00100fc6(0xc,0);
        iVar7 = fn_00100fc6(0x180,0);
        piVar8[2] = iVar7;
        *piVar8 = (int)local_98;
        piVar8[1] = 0x20;
        local_88 = (int *)piVar8[2];
        local_8c = local_88 + 0x60;
        local_90 = local_88 + 3;
        *local_88 = (int)local_88;
        local_88[1] = (int)local_88;
        piVar16 = *(int **)(iVar6 + 0x10);
        iVar7 = *local_88;
        local_98 = piVar8;
        for (piVar15 = (int *)*piVar16; piVar15 != piVar16; piVar15 = (int *)*piVar15) {
          if (local_94 == (int *)0x0) {
            if (local_90 == local_8c) {
              if (local_98 == (int *)0x0) {
                uVar18 = 0x20;
              }
              else {
                uVar3 = local_98[1];
                uVar18 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
                if (uVar18 < uVar3 + 0x20) {
                  uVar18 = uVar3 + 0x20;
                }
              }
              piVar8 = (int *)fn_00100fc6(0xc,0);
              iVar9 = fn_00100fc6(uVar18 * 0xc,0);
              piVar8[2] = iVar9;
              *piVar8 = (int)local_98;
              piVar8[1] = uVar18;
              local_90 = (int *)piVar8[2];
              local_8c = local_90 + uVar18 * 3;
              local_98 = piVar8;
            }
            piVar8 = local_90;
            local_90 = local_90 + 3;
          }
          else {
            piVar8 = local_94;
            local_94 = (int *)*local_94;
          }
          if (piVar8 + 2 != (int *)0x0) {
            piVar8[2] = piVar15[2];
          }
          *piVar8 = iVar7;
          piVar8[1] = *(int *)(iVar7 + 4);
          **(undefined4 **)(iVar7 + 4) = piVar8;
          *(int **)(iVar7 + 4) = piVar8;
          local_84 = (int *)((int)local_84 + 1);
        }
        local_80 = *(undefined1 *)(iVar6 + 0x18);
        if (local_84 != (int *)0x0) {
          fn_007874ac(&local_98);
          goto LAB_0020d120;
        }
        fn_007874ac(&local_98);
      }
      local_6c = local_6c + 1;
    } while (local_6c < local_7c);
  }
  return;
LAB_0020d4f0:
  do {
    if (puVar17[iVar10 + 0xc] == '\0') {
      iVar13 = fn_00378afc(iVar9);
      iVar14 = fn_00661094((int)local_8a0[iVar10]);
      if (iVar13 == iVar14) {
        iVar12 = 2;
        puVar17[iVar10 + 0xc] = 1;
        break;
      }
    }
    iVar10 = (int)(short)((short)iVar10 + 1);
  } while (iVar10 < 2);
  if (iVar12 == 2) {
    uVar11 = fn_00378bf0(iVar9);
    goto code_r0x0020d560;
  }
LAB_0020d548:
  iVar9 = (int)(short)((short)iVar9 + 1);
  if (iVar7 <= iVar9) goto LAB_0020d558;
  goto LAB_0020d494;
}



undefined4 fn_0020cda0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0025be70();
  if (iVar1 == 4) {
    uVar2 = 0;
  }
  else {
    iVar1 = fn_00660a7c(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



bool fn_0020ccdc(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  uVar3 = *(uint *)(param_1 + 8);
  for (uVar5 = 0; (uVar5 < uVar3 && ((int)uVar5 < 2)); uVar5 = uVar5 + 1) {
    sVar1 = *(short *)(param_1 + uVar5 * 4 + 0xe);
    if (sVar1 != 0) {
      local_18[uVar5] = sVar1;
    }
  }
  uVar2 = fn_005fdbd0(param_1,param_2,(int)local_18[0],(int)local_18[1]);
  iVar4 = fn_001a46f4();
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + *(int *)(param_1 + 8) * 4 + 0xc) = 1;
    *(char *)(param_1 + *(int *)(param_1 + 8) * 4 + 0xd) = (char)param_2;
    *(undefined2 *)(param_1 + *(int *)(param_1 + 8) * 4 + 0xe) = uVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return iVar4 != 0;
}



bool fn_0020ccb0(int param_1)

{
  return *(short *)(param_1 + 0x1c) == 0x18b;
}


