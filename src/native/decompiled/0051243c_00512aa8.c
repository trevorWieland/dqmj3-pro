#include "0051243c_00512aa8.h"



undefined4 fn_00512aa8(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_008bf4d4 + 0x30);
  if ((param_3 != iVar3) || ((byte *)0x3fefffff < param_2 + -0x100000)) {
    return 0xe0e14826;
  }
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + -1;
      iVar1 = iVar2 * 2;
      iVar2 = iVar2 + 1;
      *(ushort *)(*(int *)(param_1 + 4) + iVar1) = (ushort)*param_2 << 2;
      param_2 = param_2 + 1;
    } while (iVar3 != 0);
  }
  return 0;
}



undefined4 fn_0051243c(int *param_1,uint param_2,uint *param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  int unaff_r9;
  uint uVar15;
  char *pcVar16;
  ushort *puVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  byte abStack_b2 [2];
  byte local_b0 [30];
  byte abStack_92 [2];
  byte local_90 [24];
  uint local_78;
  uint local_70;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_3c;
  int *local_30;
  uint local_2c;
  uint *local_28;
  
  local_28 = param_3;
  local_2c = param_2;
  local_30 = param_1;
  uVar6 = 0;
  uVar14 = *(uint *)(DAT_008bf4d4 + 0x30);
  uVar9 = uVar14;
  if (uVar14 != 0) {
    do {
      bVar8 = 0;
      if (uVar14 != 0) {
        pcVar16 = (char *)(local_30[2] + uVar6);
        uVar3 = uVar14;
        pcVar11 = (char *)(uVar6 * uVar14 + local_30[2]);
        do {
          if (*pcVar11 == *(char *)((int)local_30 + 0x2a)) {
            bVar8 = bVar8 + 1;
          }
          if (*pcVar16 == *(char *)((int)local_30 + 0x2a)) {
            bVar8 = bVar8 + 1;
          }
          uVar3 = uVar3 - 1;
          pcVar16 = pcVar16 + uVar14;
          pcVar11 = pcVar11 + 1;
        } while (uVar3 != 0);
      }
      iVar18 = uVar6 * 2;
      local_b0[iVar18] = (byte)uVar6;
      uVar6 = uVar6 + 1;
      local_b0[iVar18 + 1] = bVar8;
    } while (uVar6 < uVar14);
  }
  while (uVar9 = uVar9 - 1, uVar9 != 0) {
    uVar6 = 0;
    if (uVar9 != 0) {
      do {
        iVar18 = uVar6 * 2;
        if (local_b0[iVar18 + 3] < local_b0[iVar18 + 1]) {
          uVar3 = 0;
          do {
            bVar8 = local_b0[uVar3 + iVar18 + 2];
            local_b0[uVar3 + iVar18 + 2] = local_b0[uVar3 + iVar18];
            local_b0[uVar3 + iVar18] = bVar8;
            uVar3 = uVar3 + 1;
          } while (uVar3 < 2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
  }
  if (uVar14 != 0) {
    pbVar7 = abStack_92;
    pbVar4 = abStack_b2;
    if ((uVar14 & 1) != 0) {
      pbVar7 = local_90;
      local_90[0] = local_b0[0];
      local_90[1] = local_b0[1];
      pbVar4 = local_b0;
    }
    for (uVar9 = uVar14 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      pbVar7[2] = pbVar4[2];
      pbVar7[3] = pbVar4[3];
      pbVar7[4] = pbVar4[4];
      pbVar1 = pbVar4 + 5;
      pbVar4 = pbVar4 + 4;
      pbVar7[5] = *pbVar1;
      pbVar7 = pbVar7 + 4;
    }
    if (1 < uVar14) {
      unaff_r9 = 1;
    }
    local_64 = 1;
    if (1 < uVar14) {
      do {
        uVar9 = (uint)local_b0[local_64 * 2];
        local_58 = 0;
        if (local_64 != 0) {
          local_3c = local_2c & unaff_r9 << uVar9;
          do {
            uVar6 = DAT_008bf4d4;
            uVar3 = (uint)local_b0[local_58 * 2];
            if (((local_3c != 0) && ((local_2c & unaff_r9 << uVar3) != 0)) &&
               (iVar18 = uVar9 * uVar14 + local_30[2],
               *(char *)(uVar3 + iVar18) == *(char *)((int)local_30 + 0x2a))) {
              local_5c = 1;
              uVar5 = 0;
              if (uVar14 != 0) {
LAB_0051262c:
                bVar8 = local_90[uVar5 * 2];
                uVar15 = (uint)bVar8;
                if (((uVar15 == uVar9 || uVar15 == uVar3) || ((local_2c & unaff_r9 << uVar15) == 0))
                   || ((unaff_r9 << uVar15 & *local_28) != 0)) goto LAB_005127ec;
                uVar10 = (uint)*(ushort *)
                                (*local_30 + (uVar9 * *(int *)(DAT_008bf4d4 + 0x30) + uVar15) * 2);
                if ((uVar10 == 0) ||
                   (uVar12 = (uint)*(ushort *)
                                    (*local_30 +
                                    (uVar15 * *(int *)(DAT_008bf4d4 + 0x30) + uVar3) * 2),
                   uVar12 == 0)) goto LAB_005127ec;
                if ((uint)*(ushort *)(local_30 + 7) < uVar10 + uVar12) {
                  local_5c = 2;
LAB_005127e4:
                  goto LAB_005127ec;
                }
                uVar10 = *(byte *)(local_30[3] + uVar15) + 2;
                if (*(ushort *)((int)local_30 + 0x1e) < uVar10) {
                  local_5c = 3;
                  goto LAB_005127e4;
                }
                local_60 = 1;
                *(byte *)(uVar3 + iVar18) = bVar8;
                bVar21 = uVar14 != 0;
                uVar5 = uVar14;
                if (!bVar21) {
                  uVar6 = 0xffffffff;
                  uVar5 = uVar10;
                }
                pbVar4 = (byte *)local_30[2];
                if (bVar21) {
                  pbVar4 = local_90;
                }
                ((byte *)local_30[2])[uVar9 + uVar3 * uVar14] = bVar8;
                if (!bVar21) goto LAB_00512730;
                do {
                  if (*pbVar4 == uVar9 || *pbVar4 == uVar3) {
                    pbVar4[1] = pbVar4[1] - 2;
                  }
                  uVar5 = uVar5 - 1;
                  pbVar4 = pbVar4 + 2;
                  uVar6 = uVar14;
                } while (uVar5 != 0);
                while (uVar6 = uVar6 - 1, uVar6 != 0) {
LAB_00512730:
                  uVar5 = 0;
                  if (uVar6 != 0) {
                    do {
                      iVar18 = uVar5 * 2;
                      if (local_90[iVar18 + 3] < local_90[iVar18 + 1]) {
                        uVar10 = 0;
                        do {
                          bVar8 = local_90[uVar10 + iVar18 + 2];
                          local_90[uVar10 + iVar18 + 2] = local_90[uVar10 + iVar18];
                          local_90[uVar10 + iVar18] = bVar8;
                          uVar10 = uVar10 + 1;
                        } while (uVar10 < 2);
                      }
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < uVar6);
                  }
                }
                *(char *)(local_30[3] + uVar15) = *(char *)(local_30[3] + uVar15) + '\x02';
                if (local_60 == 0) goto LAB_005127f8;
                goto LAB_005127a8;
              }
LAB_005127f8:
              piVar2 = local_30;
              uVar5 = *local_28;
              uVar6 = ~uVar5;
              local_78 = local_2c & uVar6;
              local_60 = 0;
              uVar15 = *(uint *)(DAT_008bf4d4 + 0x30);
              if (uVar15 != 0) {
                pbVar4 = (byte *)local_30[3];
                uVar12 = 0;
                puVar13 = (ushort *)(*local_30 + uVar9 * uVar15 * 2);
                puVar17 = (ushort *)(*local_30 + uVar3 * 2);
                uVar10 = uVar15;
                do {
                  local_70 = unaff_r9 << (uVar12 & 0xff);
                  bVar21 = (local_70 & local_2c & uVar6) != 0;
                  uVar19 = local_70;
                  if (bVar21) {
                    uVar19 = (uint)*puVar13;
                  }
                  if (bVar21 && uVar19 != 0) {
                    uVar5 = (uint)*puVar17;
                  }
                  if ((((bVar21 && uVar19 != 0) && uVar5 != 0) &&
                      (uVar19 + uVar5 <= (uint)*(ushort *)(local_30 + 7))) &&
                     (uVar5 = (uint)*(ushort *)((int)local_30 + 0x1e), *pbVar4 <= uVar5)) {
                    uVar5 = local_70 | local_60;
                    local_60 = uVar5;
                  }
                  uVar10 = uVar10 - 1;
                  puVar13 = puVar13 + 1;
                  pbVar4 = pbVar4 + 1;
                  uVar12 = uVar12 + 1;
                  puVar17 = puVar17 + uVar15;
                } while (uVar10 != 0);
                uVar6 = 0;
                if (uVar15 != 0) {
                  while (((local_60 & unaff_r9 << (uVar6 & 0xff)) == 0 ||
                         (iVar18 = fn_00510c90(piVar2,uVar6,local_78,(short)piVar2[7],
                                                *(undefined2 *)((int)piVar2 + 0x1e)), iVar18 == 0)))
                  {
                    uVar6 = uVar6 + 1;
                    if (uVar15 <= uVar6) goto LAB_0051292c;
                  }
                  *(char *)(uVar3 + uVar9 * uVar15 + piVar2[2]) = (char)uVar6;
                  *(char *)(uVar9 + uVar3 * uVar15 + piVar2[2]) = (char)uVar6;
                  *(char *)(piVar2[3] + uVar6) = *(char *)(piVar2[3] + uVar6) + '\x02';
                  goto LAB_005127a8;
                }
              }
LAB_0051292c:
              uVar6 = 0;
              if (*(byte *)(local_30 + 10) == uVar9) goto LAB_00512964;
              if (*(byte *)(local_30 + 10) == uVar3) goto LAB_00512974;
              uVar5 = 0;
              if (uVar14 != 0) goto LAB_00512958;
              goto LAB_00512988;
            }
LAB_005127a8:
            local_58 = local_58 + 1;
          } while (local_58 < local_64);
        }
        local_64 = local_64 + 1;
      } while (local_64 < uVar14);
    }
  }
  return 1;
LAB_005127ec:
  uVar5 = uVar5 + 1;
  if (uVar14 <= uVar5) goto LAB_005127f8;
  goto LAB_0051262c;
  while( true ) {
    if (local_90[uVar5 * 2] == uVar3) goto LAB_00512974;
    uVar5 = uVar5 + 1;
    if (uVar14 <= uVar5) break;
LAB_00512958:
    if (local_90[uVar5 * 2] == uVar9) goto LAB_00512964;
  }
LAB_00512988:
  *local_28 = *local_28 | unaff_r9 << uVar6;
  *(char *)(local_30[6] + uVar6) = (char)local_5c;
  uVar9 = 0;
  if (uVar14 == 0) {
LAB_00512a2c:
    uVar9 = 0;
    if (uVar14 != 0) {
      do {
        uVar3 = 0;
        if (uVar14 != 0) {
          do {
            iVar18 = uVar9 * uVar14 + local_30[2];
            uVar5 = (uint)*(byte *)(uVar3 + iVar18);
            if ((uVar5 != uVar9 && uVar5 != uVar3) && (uVar5 == uVar6)) {
              *(undefined1 *)(uVar3 + iVar18) = *(undefined1 *)((int)local_30 + 0x2a);
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar14);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar14);
    }
    return 0;
  }
LAB_005129b8:
  uVar3 = 0;
  do {
    uVar5 = uVar6;
    uVar15 = uVar9;
    do {
      uVar12 = (uint)*(byte *)(uVar15 + uVar5 * uVar14 + local_30[2]);
      bVar21 = uVar12 != uVar5;
      uVar10 = uVar5;
      if (bVar21) {
        uVar10 = uVar15;
      }
      bVar20 = uVar10 <= uVar12;
      if (bVar21 && uVar12 != uVar15) {
        bVar20 = uVar12 <= uVar14;
      }
      if (bVar20 && ((bVar21 && uVar12 != uVar15) && uVar14 != uVar12)) {
        *(char *)(local_30[3] + uVar12) = *(char *)(local_30[3] + uVar12) + -1;
      }
      uVar3 = uVar3 + 1;
      *(char *)(uVar15 + uVar5 * uVar14 + local_30[2]) = (char)uVar5;
      if (1 < uVar3) {
        uVar9 = uVar9 + 1;
        if (uVar9 < uVar14) goto LAB_005129b8;
        goto LAB_00512a2c;
      }
      uVar5 = uVar9;
      uVar15 = uVar6;
    } while (uVar3 != 0);
  } while( true );
LAB_00512964:
  uVar6 = uVar3;
  goto LAB_00512988;
LAB_00512974:
  uVar6 = uVar9;
  goto LAB_00512988;
}


