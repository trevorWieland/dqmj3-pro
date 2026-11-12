#include "003177a4_003177a4.h"



/* WARNING: Removing unreachable block (ram,0x00317f34) */
/* WARNING: Removing unreachable block (ram,0x00317f38) */
/* WARNING: Removing unreachable block (ram,0x00317f3c) */
/* WARNING: Removing unreachable block (ram,0x00317f40) */
/* WARNING: Removing unreachable block (ram,0x00317f44) */

void fn_003177a4(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int *local_3c;
  uint local_38;
  int local_34;
  
  piVar16 = (int *)0x0;
  local_48 = (undefined4 *)0x0;
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  iVar4 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar4 == 0) {
    local_38 = *(uint *)(DAT_00897804 + 0x14);
    iVar4 = fn_006b2aa0(local_38,0x2a);
    iVar9 = fn_006b2aa0(local_38,0x24);
    iVar10 = fn_006b2aa0(local_38,0x25);
    iVar14 = fn_006b2aa0(local_38,0x26);
    iVar5 = fn_006b2aa0(local_38,0x28);
    iVar6 = fn_006b2aa0(local_38,0x27);
    iVar7 = fn_006b2aa0(local_38,0x29);
    puVar13 = local_44;
    if (iVar7 + iVar4 + iVar9 + iVar10 + iVar14 + iVar5 + iVar6 < 6) {
      local_38 = 1;
      if (local_44 == local_40) {
        fn_0079ce44(&local_48,local_44,&local_38);
        puVar13 = local_44;
      }
      else {
        puVar13 = local_44 + 1;
        if (local_44 != (undefined4 *)0x0) {
          *local_44 = 1;
        }
      }
    }
    local_44 = puVar13;
    iVar4 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3c);
    puVar13 = local_44;
    if (iVar4 < 6) {
      local_38 = 2;
      if (local_44 == local_40) {
        fn_0079ce44(&local_48,local_44,&local_38);
        puVar13 = local_44;
      }
      else {
        puVar13 = local_44 + 1;
        if (local_44 != (undefined4 *)0x0) {
          *local_44 = 2;
        }
      }
    }
    local_44 = puVar13;
    iVar4 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
    puVar13 = local_44;
    if (9 < iVar4) {
      iVar9 = iVar4;
      do {
        iVar10 = iVar9 / 10;
        if (iVar9 % 10 != iVar4 % 10) goto LAB_003179d8;
        iVar9 = iVar10;
      } while (iVar10 != 0);
      local_38 = 4;
      if (local_44 == local_40) {
        fn_0079ce44(&local_48,local_44,&local_38);
        puVar13 = local_44;
      }
      else {
        puVar13 = local_44 + 1;
        if (local_44 != (undefined4 *)0x0) {
          *local_44 = 4;
        }
      }
    }
LAB_003179d8:
    local_44 = puVar13;
    local_38 = *(uint *)(DAT_00897804 + 0x14);
    iVar4 = fn_006b2aa0(local_38,0x2e);
    iVar9 = fn_006b2aa0(local_38,0x2d);
    iVar10 = fn_006b2aa0(local_38,0x2c);
    iVar14 = fn_006b2aa0(local_38,0x31);
    puVar13 = local_44;
    if (iVar14 + iVar4 + iVar9 + iVar10 < 6) {
      local_38 = 5;
      if (local_44 == local_40) {
        fn_0079ce44(&local_48,local_44,&local_38);
        puVar13 = local_44;
      }
      else {
        puVar13 = local_44 + 1;
        if (local_44 != (undefined4 *)0x0) {
          *local_44 = 5;
        }
      }
    }
    local_44 = puVar13;
    iVar9 = 0;
    uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar4 = fn_006b83e4(uVar8);
    uVar23 = 0x3e4ccccd;
    if (0 < iVar4) {
      do {
        iVar4 = fn_0028b0a0(uVar8,iVar9);
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1e),
                                            (byte)(in_fpscr >> 0x16) & 3);
        fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x22),
                                            (byte)(in_fpscr >> 0x16) & 3);
        fVar21 = fVar21 * (float)uVar23;
        uVar17 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar22) << 0x1f |
                 (uint)(fVar21 == fVar22) << 0x1e;
        in_fpscr = uVar17 | (uint)(NAN(fVar21) || NAN(fVar22)) << 0x1c;
        bVar3 = (byte)(uVar17 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_00317b20;
        iVar9 = iVar9 + 1;
        iVar4 = fn_006b83e4(uVar8);
      } while (iVar9 < iVar4);
    }
    for (iVar4 = 0; iVar9 = fn_006b84b0(uVar8), puVar13 = local_44, iVar4 < iVar9;
        iVar4 = iVar4 + 1) {
      iVar9 = fn_0028b348(uVar8,iVar4);
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x1e),(byte)(in_fpscr >> 0x16) & 3
                                         );
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x22),(byte)(in_fpscr >> 0x16) & 3
                                         );
      fVar22 = fVar22 * (float)uVar23;
      uVar17 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar21) << 0x1f |
               (uint)(fVar22 == fVar21) << 0x1e;
      in_fpscr = uVar17 | (uint)(NAN(fVar22) || NAN(fVar21)) << 0x1c;
      bVar3 = (byte)(uVar17 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
      goto LAB_00317b20;
    }
    goto LAB_00317b58;
  }
  local_3c = (int *)&DAT_00000007;
  if (local_44 == local_40) goto LAB_00317b8c;
  puVar13 = local_44 + 1;
  if (local_44 != (undefined4 *)0x0) {
    *local_44 = 7;
  }
  goto LAB_00317b90;
LAB_00317b20:
  local_38 = 3;
  if (local_44 == local_40) {
    fn_0079ce44(&local_48,local_44,&local_38);
    puVar13 = local_44;
  }
  else {
    puVar13 = local_44 + 1;
    if (local_44 != (undefined4 *)0x0) {
      *local_44 = 3;
    }
  }
LAB_00317b58:
  local_44 = puVar13;
  local_3c = (int *)0x0;
  if (local_44 == local_40) {
LAB_00317b8c:
    fn_0079ce44(&local_48,local_44,&local_3c);
    puVar13 = local_44;
  }
  else {
    puVar13 = local_44 + 1;
    if (local_44 != (undefined4 *)0x0) {
      *local_44 = 0;
    }
  }
LAB_00317b90:
  local_44 = puVar13;
  iVar4 = fn_00163868((int)local_44 - (int)local_48 >> 2);
  uVar8 = local_48[iVar4];
  *(undefined4 *)(param_1 + 0xb8) = uVar8;
  switch(uVar8) {
  case 0:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    goto LAB_00317d14;
  case 1:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_00317c3c;
  case 2:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 2;
    goto LAB_00317c3c;
  case 3:
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 3;
LAB_00317c3c:
    fn_006f756c(DAT_008977e0);
    iVar4 = fn_006bb17c();
    iVar9 = param_1 + (*(int *)(param_1 + 8) + iVar4 * 4) * 0xc;
    piVar20 = (int *)(iVar9 + 0xc);
    iVar10 = fn_00163868(100);
    iVar14 = *(int *)(iVar9 + 0x10) - *piVar20;
    uVar17 = 0;
    iVar4 = iVar14 >> 0x1f;
    if (iVar14 / 0xc + iVar4 != iVar4) {
      do {
        iVar4 = *piVar20;
        fn_006f756c(DAT_008977e0);
        iVar14 = fn_006bb150();
        iVar10 = iVar10 - *(char *)(iVar14 * 3 + iVar4 + uVar17 * 0xc + 2);
        if (iVar10 < 0) goto LAB_00317cf4;
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)((*(int *)(iVar9 + 0x10) - *piVar20) / 0xc));
    }
    uVar17 = 0;
LAB_00317cf4:
    *(uint *)(param_1 + 0xac) = uVar17;
    *(int *)(param_1 + 0xb0) = (int)*(short *)(*piVar20 + uVar17 * 0xc);
    *(undefined4 *)(param_1 + 0xb4) = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 4) = 1;
    break;
  case 5:
    *(undefined4 *)(param_1 + 4) = 2;
    break;
  default:
    if (*(int *)(param_1 + 4) != 0) break;
    if (*(int *)(param_1 + 8) != 0) goto LAB_00317c3c;
LAB_00317d14:
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    break;
  case 7:
    *(undefined4 *)(param_1 + 4) = 3;
  }
  iVar4 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar4 == 0) {
    piVar18 = (int *)0x0;
    piVar19 = (int *)0x0;
    iVar4 = fn_006f756c(DAT_008977e0);
    pcVar11 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                   *(undefined4 *)(iVar4 + 0x24));
    cVar2 = *pcVar11;
    fn_006f756c(DAT_008977e0);
    iVar4 = fn_006bb150();
    iVar9 = *(int *)(param_1 + 0x9c);
    uVar17 = 0;
    piVar20 = piVar16;
    if (*(int *)(param_1 + 0xa0) - iVar9 >> 2 != 0) {
      do {
        pcVar11 = (char *)(iVar9 + uVar17 * 4);
        piVar16 = piVar20;
        if ((*pcVar11 == cVar2) && (pcVar11[1] + -1 == iVar4)) {
          local_34 = (int)*(short *)(pcVar11 + 2);
          if (piVar20 == piVar19) {
            uVar1 = (int)piVar20 - (int)piVar18 >> 2;
            if (uVar1 < (uint)((int)piVar19 - (int)piVar18 >> 2)) {
              piVar15 = piVar20 + -1;
              if (piVar20 != (int *)0x0) {
                *piVar20 = piVar20[-1];
              }
              piVar16 = piVar20 + 1;
              piVar12 = piVar20;
              if (piVar20 < piVar15) {
                iVar9 = (int)piVar15 - (int)piVar20;
                if (0 < iVar9) {
                  if (iVar9 * 0x20000000 < 0) {
                    piVar15 = piVar20 + -2;
                    piVar12 = piVar20 + -1;
                    *piVar12 = *piVar15;
                  }
                  for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                    piVar12[-1] = piVar15[-1];
                    piVar15 = piVar15 + -2;
                    piVar12 = piVar12 + -2;
                    *piVar12 = *piVar15;
                  }
                }
              }
              else {
                while (piVar20 != piVar15) {
                  piVar15 = piVar15 + -1;
                  piVar12[-1] = *piVar15;
                  piVar12 = piVar12 + -1;
                }
              }
              *piVar20 = local_34;
            }
            else {
              local_38 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
              if (local_38 < uVar1 + 0x20) {
                local_38 = uVar1 + 0x20;
              }
              local_3c = (int *)fn_00100fc6(local_38 << 2,0);
              piVar15 = local_3c;
              for (piVar16 = piVar18; piVar16 != piVar20; piVar16 = piVar16 + 1) {
                if (piVar15 != (int *)0x0) {
                  *piVar15 = *piVar16;
                }
                piVar15 = piVar15 + 1;
              }
              piVar16 = (int *)((int)local_3c + ((int)piVar20 - (int)piVar18 & 0xfffffffcU));
              if (piVar16 != (int *)0x0) {
                *piVar16 = local_34;
              }
              piVar16 = piVar18;
              if (piVar20 <= piVar18) {
                for (; piVar16 != piVar20; piVar16 = piVar16 + 1) {
                }
              }
              fn_001008c4(piVar18,(int)piVar19 - (int)piVar18 >> 2,0);
              piVar19 = local_3c + local_38;
              piVar16 = local_3c + ((int)piVar20 - (int)piVar18 >> 2) + 1;
              piVar18 = local_3c;
            }
          }
          else {
            if (piVar20 != (int *)0x0) {
              *piVar20 = local_34;
            }
            piVar16 = piVar20 + 1;
          }
        }
        iVar9 = *(int *)(param_1 + 0x9c);
        uVar17 = uVar17 + 1;
        piVar20 = piVar16;
      } while (uVar17 < (uint)(*(int *)(param_1 + 0xa0) - iVar9 >> 2));
    }
    if ((int)piVar16 - (int)piVar18 >> 2 != 0) {
      iVar4 = fn_00163868();
      *(int *)(param_1 + 0xa8) = piVar18[iVar4];
    }
    piVar20 = piVar18;
    if (piVar16 < piVar18) {
      do {
        piVar20 = piVar20 + 1;
      } while (piVar20 != piVar16);
    }
    fn_001008c4(piVar18,(int)piVar19 - (int)piVar18 >> 2,0);
    uVar8 = *(undefined4 *)(param_1 + 0xb8);
  }
  else {
    uVar8 = fn_00163868(6);
    *(undefined4 *)(param_1 + 0xb8) = uVar8;
  }
  switch(uVar8) {
  default:
    uVar8 = 8;
    break;
  case 1:
    uVar8 = 9;
    break;
  case 2:
    uVar8 = 10;
    break;
  case 3:
    uVar8 = 0xd;
    break;
  case 4:
    uVar8 = 0xb;
    break;
  case 5:
    uVar8 = 0xc;
  }
  fn_003644f0(uVar8);
  puVar13 = local_48;
  if (local_44 < local_48) {
    do {
      puVar13 = puVar13 + 1;
    } while (puVar13 != local_44);
  }
  fn_001008c4(local_48,(int)local_40 - (int)local_48 >> 2,0);
  return;
}


