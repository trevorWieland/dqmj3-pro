#include "0026f0f0_0026f904.h"



void fn_0026f904(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}



undefined8 fn_0026f7c8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = fn_006e9e34();
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = 0;
  if (((int)uVar5 != 0) && (uVar2 = (uint)*(byte *)(param_1 + 9), uVar2 == 0)) {
    uVar2 = (uint)*(byte *)(param_1 + 8);
    if (uVar2 == 0) {
      fn_005dfc48(param_1,param_2);
      fn_00337790(*(undefined4 *)(param_1 + 0x18));
      fn_0026e744(param_1,param_2);
      uVar4 = 0;
      uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
      iVar1 = iVar3 >> 4;
      uVar2 = 0;
      if (iVar1 != iVar3 >> 0x1f) {
        uVar5 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x1c) + uVar4 * 0x1c;
          if (*(char *)(iVar1 + 0x18) != '\0') {
            if (*(float *)(iVar1 + 0x14) <= (float)uVar5) {
              fn_00337750(*(undefined4 *)(param_1 + 0x18),uVar4);
              *(undefined1 *)(*(int *)(param_1 + 0x1c) + uVar4 * 0x1c + 0x18) = 0;
            }
          }
          uVar4 = uVar4 + 1;
          uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
          iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
          iVar1 = iVar3 >> 4;
          uVar2 = iVar1 - (iVar3 >> 0x1f);
        } while (uVar4 < uVar2);
      }
    }
    else {
      if (uVar2 == 1) {
        fn_00337d5c(*(undefined4 *)(param_1 + 0x18));
        *(undefined1 *)(param_1 + 8) = 2;
        return CONCAT44(extraout_r1,2);
      }
      if (uVar2 == 2) {
        fn_005dfc48(param_1,param_2);
        fn_00337790(*(undefined4 *)(param_1 + 0x18));
        while ((iVar1 = fn_006c0e8c(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0 ||
               (iVar1 = fn_006c0e58(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0))) {
          fn_00337790(*(undefined4 *)(param_1 + 0x18));
          fn_0012d6a4(1000000,0);
        }
        fn_00337ccc(*(undefined4 *)(param_1 + 0x18));
        *(undefined1 *)(param_1 + 8) = 0;
        fn_002106cc((char *)&DAT_0026f020,0);
        return 0x26f010;
      }
    }
  }
  return CONCAT44(iVar1,uVar2);
}



/* WARNING: Removing unreachable block (ram,0x0026f508) */
/* WARNING: Removing unreachable block (ram,0x0026f524) */
/* WARNING: Removing unreachable block (ram,0x0026f4d8) */
/* WARNING: Removing unreachable block (ram,0x0026f4e0) */
/* WARNING: Removing unreachable block (ram,0x0026f4ec) */
/* WARNING: Removing unreachable block (ram,0x0026f560) */
/* WARNING: Removing unreachable block (ram,0x0026f598) */
/* WARNING: Removing unreachable block (ram,0x0026f53c) */

undefined4 fn_0026f0f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint unaff_r5;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  uint local_218;
  uint local_214;
  uint local_210 [123];
  
  iVar1 = fn_0026e94c();
  if (iVar1 != 0) {
    fn_00211dc8(&local_230,*(undefined4 *)(DAT_008977e0 + 0xa8));
    uVar2 = fn_00118290();
    uVar2 = fn_0011c184(&local_230,uVar2,0x80,5);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    iVar1 = fn_00145aac();
    if (iVar1 != 2) {
      fn_00211d58(&local_230,*(undefined4 *)(DAT_008977e0 + 0xa8));
      uVar2 = fn_00118290();
      uVar2 = fn_0011c184(&local_230,uVar2,0x80,5);
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      iVar1 = fn_00145aac();
      if (iVar1 != 2) {
        uVar2 = fn_00145ac0();
        fn_005f4484(*(undefined4 *)(param_1 + 0x14),uVar2);
        fn_005dfa90(param_1,*(undefined4 *)(param_1 + 0x14));
        uVar3 = fn_006ec94c(*(undefined4 *)(param_1 + 0x14));
        fn_00336a28(*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),
                     *(undefined4 *)(DAT_008977e0 + 0x18),uVar3);
        local_21c = 0;
        puVar14 = (uint *)(param_1 + 0x1c);
        local_230 = local_21c;
        if ((((byte)DAT_008c62fc & 1) == 0) &&
           (uVar2 = local_21c, iVar1 = fn_00303afc(&DAT_008c62fc), local_230 = uVar2, iVar1 != 0))
        {
          DAT_008f9e2c = local_21c;
          DAT_008f9e30 = local_21c;
          DAT_008f9e34 = local_21c;
        }
        uStack_220 = DAT_008f9e34;
        uStack_224 = DAT_008f9e30;
        local_228 = DAT_008f9e2c;
        local_218 = unaff_r5 & 0xffffff00;
        puVar4 = *(undefined4 **)(param_1 + 0x20);
        puVar7 = (undefined4 *)*puVar14;
        uVar13 = (int)puVar4 - (int)puVar7;
        iVar1 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
        if ((uint)((iVar1 >> 4) - (iVar1 >> 0x1f)) < uVar3) {
          iVar1 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
          iVar1 = uVar3 - ((iVar1 >> 4) - (iVar1 >> 0x1f));
          if (iVar1 != 0) {
            iVar11 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20
                          );
            uVar3 = *(int *)(param_1 + 0x24) - (int)puVar7;
            iVar8 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
            local_22c = local_230;
            if ((uint)((iVar8 >> 4) - (iVar8 >> 0x1f)) <
                (uint)(((iVar11 >> 4) - (iVar11 >> 0x1f)) + iVar1)) {
              iVar8 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >>
                           0x20);
              local_214 = ((iVar8 >> 4) - (iVar8 >> 0x1f)) + iVar1;
              uVar3 = *(int *)(param_1 + 0x20) - *puVar14;
              iVar8 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20)
              ;
              uVar3 = (iVar8 >> 4) - (iVar8 >> 0x1f);
              local_210[0] = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
              if (local_210[0] < uVar3 + 0x20) {
                local_210[0] = uVar3 + 0x20;
              }
              puVar12 = local_210;
              if (local_210[0] <= local_214) {
                puVar12 = &local_214;
              }
              uVar3 = *puVar12;
              puVar5 = (undefined4 *)fn_00100fc6(uVar3 * 0x1c,0);
              puVar9 = puVar5;
              for (puVar7 = (undefined4 *)*puVar14; puVar7 != puVar4; puVar7 = puVar7 + 7) {
                if (puVar9 != (undefined4 *)0x0) {
                  uVar2 = puVar7[1];
                  uVar16 = puVar7[2];
                  uVar17 = puVar7[3];
                  uVar18 = puVar7[4];
                  uVar19 = puVar7[5];
                  uVar20 = puVar7[6];
                  *puVar9 = *puVar7;
                  puVar9[1] = uVar2;
                  puVar9[2] = uVar16;
                  puVar9[3] = uVar17;
                  puVar9[4] = uVar18;
                  puVar9[5] = uVar19;
                  puVar9[6] = uVar20;
                }
                puVar9 = puVar9 + 7;
              }
              iVar8 = (int)((longlong)(int)((int)puVar4 - *puVar14) * -0x6db6db6d +
                            ((ulonglong)((int)puVar4 - *puVar14) << 0x20) >> 0x20);
              puVar7 = puVar5 + ((iVar8 >> 4) - (iVar8 >> 0x1f)) * 7;
              for (iVar8 = iVar1; iVar8 != 0; iVar8 = iVar8 + -1) {
                if (puVar7 != (undefined4 *)0x0) {
                  *puVar7 = local_230;
                  puVar7[1] = local_22c;
                  puVar7[2] = local_228;
                  puVar7[3] = uStack_224;
                  puVar7[4] = uStack_220;
                  puVar7[5] = local_21c;
                  puVar7[6] = local_218;
                }
                puVar7 = puVar7 + 7;
              }
              puVar9 = *(undefined4 **)(param_1 + 0x20);
              iVar8 = (int)((longlong)(int)((int)puVar4 - *puVar14) * -0x6db6db6d +
                            ((ulonglong)((int)puVar4 - *puVar14) << 0x20) >> 0x20);
              puVar7 = puVar5 + (((iVar8 >> 4) - (iVar8 >> 0x1f)) + iVar1) * 7;
              for (; puVar4 != puVar9; puVar4 = puVar4 + 7) {
                if (puVar7 != (undefined4 *)0x0) {
                  uVar2 = puVar4[1];
                  uVar16 = puVar4[2];
                  uVar17 = puVar4[3];
                  uVar18 = puVar4[4];
                  uVar19 = puVar4[5];
                  uVar20 = puVar4[6];
                  *puVar7 = *puVar4;
                  puVar7[1] = uVar2;
                  puVar7[2] = uVar16;
                  puVar7[3] = uVar17;
                  puVar7[4] = uVar18;
                  puVar7[5] = uVar19;
                  puVar7[6] = uVar20;
                }
                puVar7 = puVar7 + 7;
              }
              uVar6 = *puVar14;
              uVar10 = *(uint *)(param_1 + 0x20);
              iVar8 = (int)((longlong)(int)(uVar10 - uVar6) * -0x6db6db6d +
                            ((ulonglong)(uVar10 - uVar6) << 0x20) >> 0x20);
              uVar13 = uVar6;
              if (uVar10 < uVar6) {
                do {
                  uVar13 = uVar13 + 0x1c;
                } while (uVar13 != uVar10);
              }
              uVar13 = *(int *)(param_1 + 0x24) - uVar6;
              iVar11 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >>
                            0x20);
              fn_001008c4(uVar6,(iVar11 >> 4) - (iVar11 >> 0x1f),0);
              *puVar14 = (uint)puVar5;
              *(undefined4 **)(param_1 + 0x20) =
                   puVar5 + ((iVar8 >> 4) - (iVar8 >> 0x1f)) * 7 + iVar1 * 7;
              *(undefined4 **)(param_1 + 0x24) = puVar5 + uVar3 * 7;
            }
            else {
              puVar7 = puVar4 + iVar1 * 7;
              *(undefined4 **)(param_1 + 0x20) = puVar4 + iVar1 * 7;
              if (puVar7 < puVar4) {
                puVar15 = puVar4 + iVar1 * -7;
                puVar9 = puVar4;
                for (puVar5 = puVar15; puVar5 != puVar4; puVar5 = puVar5 + 7) {
                  if (puVar9 != (undefined4 *)0x0) {
                    uVar2 = puVar5[1];
                    uVar16 = puVar5[2];
                    uVar17 = puVar5[3];
                    uVar18 = puVar5[4];
                    uVar19 = puVar5[5];
                    uVar20 = puVar5[6];
                    *puVar9 = *puVar5;
                    puVar9[1] = uVar2;
                    puVar9[2] = uVar16;
                    puVar9[3] = uVar17;
                    puVar9[4] = uVar18;
                    puVar9[5] = uVar19;
                    puVar9[6] = uVar20;
                  }
                  puVar9 = puVar9 + 7;
                }
                puVar9 = puVar4;
                if (puVar4 < puVar15) {
                  uVar3 = (int)puVar15 - (int)puVar4;
                  uVar21 = (ulonglong)uVar3;
                  iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >>
                               0x20);
                  iVar8 = 1;
                  if (1 < ((iVar1 >> 4) - (iVar1 >> 0x1f)) + 1) {
                    do {
                      puVar15 = puVar15 + -7;
                      puVar9 = puVar9 + -7;
                      fn_0017821c(puVar9,puVar15,0x19);
                      iVar8 = iVar8 + 1;
                      iVar1 = (int)((longlong)(int)uVar21 * -0x6db6db6d + (uVar21 << 0x20) >> 0x20);
                    } while (iVar8 < ((iVar1 >> 4) - (iVar1 >> 0x1f)) + 1);
                  }
                }
                else {
                  while (puVar4 != puVar15) {
                    puVar15 = puVar15 + -7;
                    fn_0017821c(puVar9 + -7,puVar15,0x19);
                    puVar9 = puVar9 + -7;
                  }
                }
                if (puVar4 < puVar7) {
                  uVar3 = (int)puVar7 - (int)puVar4;
                  iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >>
                               0x20);
                  iVar8 = 1;
                  if (1 < ((iVar1 >> 4) - (iVar1 >> 0x1f)) + 1) {
                    do {
                      fn_0017821c(puVar4,&local_230,0x19);
                      iVar1 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20)
                                   >> 0x20);
                      iVar8 = iVar8 + 1;
                      puVar4 = puVar4 + 7;
                    } while (iVar8 < ((iVar1 >> 4) - (iVar1 >> 0x1f)) + 1);
                  }
                }
                else {
                  for (; puVar4 != puVar7; puVar4 = puVar4 + 7) {
                    fn_0017821c(puVar4,&local_230,0x19);
                  }
                }
              }
              else {
                for (; iVar1 != 0; iVar1 = iVar1 + -1) {
                  if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = local_230;
                    puVar4[1] = local_230;
                    puVar4[2] = local_228;
                    puVar4[3] = uStack_224;
                    puVar4[4] = uStack_220;
                    puVar4[5] = local_21c;
                    puVar4[6] = local_218;
                  }
                  puVar4 = puVar4 + 7;
                }
              }
            }
          }
        }
        else {
          iVar1 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
          if ((uVar3 < (uint)((iVar1 >> 4) - (iVar1 >> 0x1f))) &&
             (puVar9 = puVar7 + uVar3 * 7, puVar7 != puVar4)) {
            puVar7 = puVar9;
            if (puVar4 < puVar9) {
              do {
                puVar7 = puVar7 + 7;
              } while (puVar7 != puVar4);
            }
            iVar1 = (int)((longlong)((int)puVar4 - (int)puVar9) * -0x6db6db6d +
                          ((ulonglong)(uint)((int)puVar4 - (int)puVar9) << 0x20) >> 0x20);
            *(undefined4 **)(param_1 + 0x20) = puVar4 + ((iVar1 >> 4) - (iVar1 >> 0x1f)) * -7;
          }
        }
        return 1;
      }
      fn_0012d73c(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    fn_0012d73c(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    fn_0026e8b0(param_1);
  }
  return 0;
}


