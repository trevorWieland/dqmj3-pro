#include "006e743c_006e743c.h"



void fn_006e743c(int param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 local_130;
  uint local_12c;
  short local_128 [6];
  uint local_11c [35];
  uint *local_90;
  int local_88;
  short local_84 [14];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  short local_60 [16];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  int local_2c;
  uint *local_28;
  
  local_28 = param_2;
  local_2c = param_1;
  uVar9 = param_2[1];
  uVar12 = *param_2;
  if (uVar12 != uVar9) {
    uVar2 = uVar12;
    if (uVar9 <= uVar12) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar9);
    }
    param_2[1] = uVar9 - (uVar9 - uVar12 & 0xfffffffc);
  }
  local_12c = 0x400;
  puVar4 = param_2;
  if ((uint)((int)(param_2[2] - *param_2) >> 2) < 0x400) {
    uVar9 = (int)(param_2[1] - *param_2) >> 2;
    local_11c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_11c[0] < uVar9 + 0x20) {
      local_11c[0] = uVar9 + 0x20;
    }
    puVar4 = local_11c;
    if (local_11c[0] < 0x401) {
      puVar4 = &local_12c;
    }
    uVar9 = *puVar4;
    puVar3 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar13 = (undefined4 *)param_2[1];
    puVar17 = puVar3;
    for (puVar10 = (undefined4 *)*param_2; puVar10 != puVar13; puVar10 = puVar10 + 1) {
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = *puVar10;
      }
      puVar17 = puVar17 + 1;
    }
    puVar4 = (uint *)*param_2;
    puVar15 = puVar4;
    if ((uint *)param_2[1] < puVar4) {
      do {
        puVar15 = puVar15 + 1;
      } while (puVar15 != (uint *)param_2[1]);
    }
    fn_001008c4(puVar4,(int)(param_2[2] - (int)puVar4) >> 2,0);
    uVar12 = *param_2;
    *param_2 = (uint)puVar3;
    param_2[1] = (param_2[1] - uVar12 & 0xfffffffc) + (int)puVar3;
    param_2[2] = (uint)(puVar3 + uVar9);
  }
  local_88 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar16 = 0;
  if (0 < local_88) {
    do {
      local_90 = (uint *)fn_006b85d0(*(undefined4 *)(DAT_00897804 + 0xc),iVar16);
      if (local_90 != (uint *)0x0) {
        iVar5 = fn_00154ac8(0x19);
        if (iVar5 == 0) {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_90);
          fn_0020bbc4(auStack_40,uVar6);
          iVar5 = fn_006bf34c(auStack_3c);
          if (iVar5 != 0) goto LAB_006e7a44;
        }
        iVar5 = fn_00154ac8(0x463);
        if (iVar5 == 0) {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_90);
          fn_0020bbc4(auStack_38,uVar6);
          iVar5 = fn_006bf184(auStack_34);
          if (iVar5 != 0) goto LAB_006e7a44;
        }
        if (*(uint **)(local_2c + 0x18) != local_90) {
          puVar17 = *(undefined4 **)(local_2c + 0x10);
          puVar10 = *(undefined4 **)(local_2c + 0xc);
          while( true ) {
            if (puVar10 != puVar17) {
              puVar4 = (uint *)*puVar10;
            }
            if (puVar10 == puVar17 || puVar4 == local_90) break;
            puVar10 = puVar10 + 1;
          }
          if (puVar17 != puVar10) goto LAB_006e7a44;
        }
        puVar15 = (uint *)(int)*(short *)(local_2c + 4);
        if (puVar15 == (uint *)0x0) {
LAB_006e7788:
          sVar1 = *(short *)(local_2c + 6);
          if ((uint *)(int)sVar1 == (uint *)0x0) {
LAB_006e77f0:
            if (*(char *)(local_2c + 8) != '\0') {
              uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_90);
              iVar5 = fn_0020bbc4(&local_130,uVar6);
              iVar5 = fn_006bfda8(iVar5 + 4);
              if (iVar5 != 0x18b) goto LAB_006e7a44;
            }
            puVar15 = local_28;
            puVar10 = (undefined4 *)local_28[1];
            if (puVar10 == (undefined4 *)local_28[2]) {
              uVar9 = (int)((int)puVar10 - *local_28) >> 2;
              if (uVar9 < (uint)((int)((int)local_28[2] - *local_28) >> 2)) {
                local_28[1] = (uint)(puVar10 + 1);
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = puVar10[-1];
                }
                puVar17 = puVar10 + -1;
                puVar3 = puVar10;
                if (puVar10 < puVar17) {
                  iVar5 = (int)puVar17 - (int)puVar10;
                  if (0 < iVar5) {
                    if (iVar5 * 0x20000000 < 0) {
                      puVar17 = puVar10 + -2;
                      puVar3 = puVar10 + -1;
                      *puVar3 = *puVar17;
                    }
                    for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar3[-1] = puVar17[-1];
                      puVar17 = puVar17 + -2;
                      puVar3 = puVar3 + -2;
                      *puVar3 = *puVar17;
                    }
                  }
                }
                else {
                  while (puVar10 != puVar17) {
                    puVar17 = puVar17 + -1;
                    puVar3[-1] = *puVar17;
                    puVar3 = puVar3 + -1;
                  }
                }
                *puVar10 = local_90;
              }
              else {
                uVar12 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
                if (uVar12 < uVar9 + 0x20) {
                  uVar12 = uVar9 + 0x20;
                }
                puVar13 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
                puVar3 = puVar13;
                for (puVar17 = (undefined4 *)*puVar15; puVar17 != puVar10; puVar17 = puVar17 + 1) {
                  if (puVar3 != (undefined4 *)0x0) {
                    *puVar3 = *puVar17;
                  }
                  puVar3 = puVar3 + 1;
                }
                puVar17 = (undefined4 *)(((int)puVar10 - *puVar15 & 0xfffffffc) + (int)puVar13);
                if (puVar17 != (undefined4 *)0x0) {
                  *puVar17 = local_90;
                }
                puVar3 = (undefined4 *)puVar15[1];
                puVar17 = (undefined4 *)(((int)puVar10 - *puVar15 & 0xfffffffc) + (int)puVar13);
                for (; puVar10 != puVar3; puVar10 = puVar10 + 1) {
                  puVar17 = puVar17 + 1;
                  if (puVar17 != (undefined4 *)0x0) {
                    *puVar17 = *puVar10;
                  }
                }
                puVar4 = (uint *)*puVar15;
                puVar11 = (uint *)puVar15[1];
                iVar5 = (int)puVar11 - (int)puVar4;
                puVar8 = puVar4;
                if (puVar11 < puVar4) {
                  do {
                    puVar8 = puVar8 + 1;
                  } while (puVar8 != puVar11);
                }
                fn_001008c4(puVar4,(int)(puVar15[2] - (int)puVar4) >> 2,0);
                puVar15[2] = (uint)(puVar13 + uVar12);
                puVar15[1] = (uint)(puVar13 + (iVar5 >> 2) + 1);
                *puVar15 = (uint)puVar13;
              }
            }
            else {
              local_28[1] = (uint)(puVar10 + 1);
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = local_90;
              }
            }
          }
          else {
            uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_90);
            fn_0020bbc4(&local_130,uVar6);
            iVar5 = fn_006c02d4(&local_12c,local_84);
            iVar14 = 0;
            if (0 < iVar5) {
              do {
                puVar4 = (uint *)(int)local_84[iVar14 * 2];
                if (puVar4 == (uint *)(int)sVar1) goto LAB_006e77f0;
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar5);
            }
          }
        }
        else {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_90);
          fn_0020bbc4(auStack_68,uVar6);
          puVar4 = (uint *)&DAT_00000001;
          local_130 = 1;
          local_12c = 1;
          iVar5 = fn_006bf5ec(auStack_64,local_128,0x4c,1,1,1);
          iVar14 = 0;
          if (0 < iVar5) {
            do {
              puVar4 = (uint *)(int)local_128[iVar14];
              if (puVar4 == puVar15) goto LAB_006e7788;
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar5);
          }
          iVar5 = fn_006c02d4(auStack_64,local_60,7);
          iVar14 = 0;
          if (0 < iVar5) {
            do {
              iVar7 = fn_0068f708((int)local_60[iVar14 * 2],local_60[iVar14 * 2 + 1]);
              uVar9 = 1;
              if (0 < iVar7) {
                do {
                  puVar8 = (uint *)fn_0068f7f8((int)local_60[iVar14 * 2],uVar9 & 0xff);
                  if (puVar8 == puVar15) goto LAB_006e7788;
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 <= iVar7);
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar5);
          }
        }
      }
LAB_006e7a44:
      iVar16 = iVar16 + 1;
    } while (iVar16 < local_88);
  }
  return;
}


