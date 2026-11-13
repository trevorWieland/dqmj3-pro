#include "002169ac_002171d4.h"



void fn_0021718c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = param_2;
  }
  fn_002171d4(*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x194) = param_4;
  return;
}



void fn_002171d4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 400) = param_3;
  return;
}



uint fn_002169ac(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 local_f8 [3];
  uint local_ec;
  undefined4 local_e0;
  uint *local_d8;
  undefined4 local_d4;
  uint *local_d0;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_74;
  uint *local_68;
  uint *local_5c;
  uint *local_54;
  int local_4c;
  int local_44;
  
  uVar5 = *(uint *)(param_1 + 0x19c);
  bVar16 = *(short *)(uVar5 + 0x6a) == 0;
  if (bVar16) {
    uVar5 = (uint)*(ushort *)(uVar5 + 0x72);
  }
  if (!bVar16 || uVar5 != 0) {
    if (*(int *)(param_1 + 0x194) == 0) {
      fVar17 = *(float *)(*(int *)(param_1 + 0x170) + 0xe8);
      fVar22 = (float)VectorSignedToFloat(fVar17,(byte)(in_fpscr >> 0x16) & 3);
      iVar6 = fn_006f7358(DAT_008977e0);
      if (iVar6 != 0) {
        fVar17 = 20.0;
      }
      if (iVar6 != 0) {
        fVar22 = fVar22 * fVar17;
      }
      fVar17 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x170) + 0x20);
      fVar18 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x170) + 0x28);
      if (fVar17 * fVar17 + fVar18 * fVar18 < fVar22 * fVar22) {
        local_54 = (uint *)0x0;
        local_5c = (uint *)0x0;
        local_68 = (uint *)0x0;
        piVar7 = (int *)fn_006f7508(DAT_008977e0);
        local_44 = (**(code **)(*piVar7 + 0x7c))();
        iVar6 = 0;
        if (0 < local_44) {
          uVar24 = 0x42b40000;
          uVar23 = 0x4334000041700000;
          do {
            piVar7 = (int *)fn_006f7508(DAT_008977e0);
            iVar8 = (**(code **)(*piVar7 + 0x88))(piVar7,iVar6);
            if (iVar8 != 0) {
              piVar7 = (int *)fn_006f7508(DAT_008977e0);
              local_4c = (**(code **)(*piVar7 + 0x80))(piVar7,iVar6);
              if (*(int *)(local_4c + 0xfc) != *(int *)(*(int *)(param_1 + 0x170) + 0xfc)) {
                iVar8 = 0;
                iVar15 = *(int *)(local_4c + 0x100);
                if (0 < iVar15) {
                  do {
                    uVar5 = fn_006bb544(local_4c,iVar8);
                    puVar13 = local_54;
                    if (*(int *)(*(int *)(uVar5 + 0x170) + 0xfc) !=
                        *(int *)(*(int *)(param_1 + 0x170) + 0xfc)) {
                      iVar14 = 0;
                      do {
                        if (((*(char *)(uVar5 + 0x16d) == '\0') &&
                            (iVar9 = fn_0013ad98((int)*(short *)(*(int *)(uVar5 + 0x19c) + 2)),
                            iVar9 != 0)) || (cVar1 = *(char *)(uVar5 + 0x36c), cVar1 == '\0')) {
LAB_00216b74:
                          sVar4 = *(short *)(*(int *)(uVar5 + 0x19c) + 2);
                        }
                        else if (cVar1 == '\x01') {
                          sVar4 = *(short *)(*(int *)(uVar5 + 0x19c) + 6);
                        }
                        else {
                          if (cVar1 != '\x02') goto LAB_00216b74;
                          sVar4 = *(short *)(*(int *)(uVar5 + 0x19c) + 8);
                        }
                        puVar13 = local_54;
                        if (sVar4 == *(short *)(*(int *)(param_1 + 0x19c) + iVar14 * 8 + 0x6a)) {
                          if (*(int *)(param_1 + 0x19c) + iVar14 * 8 + 0x6a != 0) {
                            sVar4 = *(short *)(*(int *)(param_1 + 0x19c) + 0x2e);
                            fn_0017821c(local_f8,&DAT_007be374,0x90);
                            uVar19 = (undefined4)uVar23;
                            fn_0017fe34();
                            uVar20 = (uint)uVar23;
                            local_f8[0] = uVar19;
                            fn_0017fe34();
                            uVar19 = (undefined4)uVar23;
                            local_ec = uVar20;
                            fn_0017fe34();
                            uVar21 = (undefined4)uVar24;
                            local_e0 = uVar19;
                            fn_0017fe34();
                            uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
                            local_d4 = uVar21;
                            fn_0017fe34();
                            uVar21 = (undefined4)((ulonglong)uVar23 >> 0x20);
                            local_c8 = uVar19;
                            fn_0017fe34();
                            uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
                            local_bc = uVar21;
                            fn_0017fe34();
                            uVar21 = (undefined4)uVar23;
                            local_b0 = uVar19;
                            fn_0017fe34();
                            uVar19 = (undefined4)uVar23;
                            local_a4 = uVar21;
                            fn_0017fe34();
                            uVar21 = (undefined4)((ulonglong)uVar23 >> 0x20);
                            local_98 = uVar19;
                            fn_0017fe34();
                            uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
                            local_8c = uVar21;
                            fn_0017fe34();
                            uVar21 = (undefined4)((ulonglong)uVar23 >> 0x20);
                            local_80 = uVar19;
                            fn_0017fe34();
                            local_74 = uVar21;
                            puVar13 = local_54;
                            if (((-1 < sVar4) && (sVar4 < 0xc)) &&
                               (iVar14 = fn_006b0258(param_1,uVar5 + 0x20), puVar13 = local_54,
                               iVar14 != 0)) {
                              if (local_54 == local_68) {
                                uVar20 = (int)local_54 - (int)local_5c >> 2;
                                if (uVar20 < (uint)((int)local_68 - (int)local_5c >> 2)) {
                                  if (local_54 != (uint *)0x0) {
                                    *local_54 = local_54[-1];
                                  }
                                  puVar13 = local_54 + -1;
                                  puVar12 = local_54;
                                  if (local_54 < puVar13) {
                                    if (0 < (int)puVar13 - (int)local_54) {
                                      iVar14 = (int)puVar13 - (int)local_54 >> 2;
                                      iVar9 = 0;
                                      do {
                                        iVar14 = iVar14 + -1;
                                        local_54[iVar9 + -1] = puVar13[iVar9 + -1];
                                        iVar9 = iVar9 + -1;
                                      } while (iVar14 != 0);
                                    }
                                  }
                                  else {
                                    while (local_54 != puVar13) {
                                      puVar13 = puVar13 + -1;
                                      puVar12[-1] = *puVar13;
                                      puVar12 = puVar12 + -1;
                                    }
                                  }
                                  *local_54 = uVar5;
                                  puVar13 = local_54 + 1;
                                }
                                else {
                                  local_ec = uVar20 + (uVar20 >> 1) + (uVar20 >> 3);
                                  if (local_ec < uVar20 + 0x20) {
                                    local_ec = uVar20 + 0x20;
                                  }
                                  puVar10 = (uint *)fn_00100fc6(local_ec << 2,0);
                                  puVar11 = puVar10;
                                  for (puVar12 = local_5c; puVar12 != puVar13; puVar12 = puVar12 + 1
                                      ) {
                                    if (puVar11 != (uint *)0x0) {
                                      *puVar11 = *puVar12;
                                    }
                                    puVar11 = puVar11 + 1;
                                  }
                                  puVar12 = (uint *)(((int)puVar13 - (int)local_5c & 0xfffffffcU) +
                                                    (int)puVar10);
                                  if (puVar12 != (uint *)0x0) {
                                    *puVar12 = uVar5;
                                  }
                                  puVar12 = (uint *)(((int)puVar13 - (int)local_5c & 0xfffffffcU) +
                                                    (int)puVar10);
                                  for (; puVar13 != local_54; puVar13 = puVar13 + 1) {
                                    puVar12 = puVar12 + 1;
                                    if (puVar12 != (uint *)0x0) {
                                      *puVar12 = *puVar13;
                                    }
                                  }
                                  iVar14 = (int)local_54 - (int)local_5c;
                                  puVar13 = local_5c;
                                  if (local_54 <= local_5c) {
                                    for (; puVar13 != local_54; puVar13 = puVar13 + 1) {
                                    }
                                  }
                                  fn_001008c4(local_5c,(int)local_68 - (int)local_5c >> 2,0);
                                  local_68 = puVar10 + local_ec;
                                  local_5c = puVar10;
                                  puVar13 = puVar10 + (iVar14 >> 2) + 1;
                                }
                              }
                              else {
                                puVar13 = local_54 + 1;
                                if (local_54 != (uint *)0x0) {
                                  *local_54 = uVar5;
                                }
                              }
                            }
                          }
                          break;
                        }
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < 2);
                    }
                    local_54 = puVar13;
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < iVar15);
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_44);
        }
        puVar13 = local_54;
        puVar12 = local_5c;
        iVar8 = (int)local_54 - (int)local_5c;
        iVar6 = iVar8 >> 2;
        if (iVar6 == 0) {
          puVar13 = local_5c;
          if (local_54 < local_5c) {
            do {
              puVar13 = puVar13 + 1;
            } while (puVar13 != local_54);
          }
          fn_001008c4(local_5c,(int)local_68 - (int)local_5c >> 2,0);
          return 0;
        }
        if (local_5c != local_54) {
          fn_007b088c(local_5c,local_54,iVar6,fn_005fe888);
          local_d8 = puVar12;
          local_d0 = puVar13;
          puVar11 = puVar12;
          if (iVar8 < 0x41) {
            while (puVar10 = puVar11 + 1, puVar10 != puVar13) {
              uVar5 = *puVar10;
              iVar6 = fn_005fe888(uVar5,*puVar12);
              if (iVar6 == 0) {
                iVar6 = fn_005fe888(uVar5,*puVar11);
                puVar3 = puVar10;
                while (puVar2 = puVar11, iVar6 != 0) {
                  *puVar3 = *puVar2;
                  iVar6 = fn_005fe888(uVar5,puVar2[-1]);
                  puVar11 = puVar2 + -1;
                  puVar3 = puVar2;
                }
                *puVar3 = uVar5;
                puVar11 = puVar10;
              }
              else {
                puVar11 = puVar11 + 2;
                puVar3 = puVar10;
                if (puVar12 < puVar10) {
                  if (0 < (int)puVar10 - (int)puVar12) {
                    iVar6 = (int)puVar10 - (int)puVar12 >> 2;
                    iVar8 = 0;
                    do {
                      iVar6 = iVar6 + -1;
                      puVar11[iVar8 + -1] = puVar10[iVar8 + -1];
                      iVar8 = iVar8 + -1;
                    } while (iVar6 != 0);
                  }
                }
                else {
                  while (puVar12 != puVar3) {
                    puVar11 = puVar11 + -1;
                    *puVar11 = puVar3[-1];
                    puVar3 = puVar3 + -1;
                  }
                }
                *puVar12 = uVar5;
                puVar11 = puVar10;
              }
            }
          }
          else {
            while (puVar10 = puVar11 + 1, local_d0 = puVar13, puVar10 != puVar12 + 0x10) {
              uVar5 = *puVar10;
              iVar6 = fn_005fe888(uVar5,*puVar12);
              if (iVar6 == 0) {
                iVar6 = fn_005fe888(uVar5,*puVar11);
                puVar13 = puVar10;
                while (puVar3 = puVar11, iVar6 != 0) {
                  *puVar13 = *puVar3;
                  iVar6 = fn_005fe888(uVar5,puVar3[-1]);
                  puVar11 = puVar3 + -1;
                  puVar13 = puVar3;
                }
                *puVar13 = uVar5;
                puVar13 = local_d0;
                puVar11 = puVar10;
              }
              else {
                puVar11 = puVar11 + 2;
                puVar13 = puVar10;
                if (puVar12 < puVar10) {
                  if (0 < (int)puVar10 - (int)puVar12) {
                    iVar6 = (int)puVar10 - (int)puVar12 >> 2;
                    iVar8 = 0;
                    do {
                      iVar6 = iVar6 + -1;
                      puVar11[iVar8 + -1] = puVar10[iVar8 + -1];
                      iVar8 = iVar8 + -1;
                    } while (iVar6 != 0);
                  }
                }
                else {
                  while (puVar12 != puVar13) {
                    puVar11 = puVar11 + -1;
                    *puVar11 = puVar13[-1];
                    puVar13 = puVar13 + -1;
                  }
                }
                *puVar12 = uVar5;
                puVar13 = local_d0;
                puVar11 = puVar10;
              }
            }
            for (puVar12 = local_d8 + 0x10; puVar12 != puVar13; puVar12 = puVar12 + 1) {
              uVar5 = *puVar12;
              iVar6 = fn_005fe888(uVar5,puVar12[-1]);
              puVar10 = puVar12 + -1;
              puVar11 = puVar12;
              while (puVar3 = puVar10, iVar6 != 0) {
                *puVar11 = *puVar3;
                iVar6 = fn_005fe888(uVar5,puVar3[-1]);
                puVar10 = puVar3 + -1;
                puVar11 = puVar3;
              }
              *puVar11 = uVar5;
            }
          }
        }
        uVar5 = *local_5c;
        puVar13 = local_5c;
        if (local_54 < local_5c) {
          do {
            puVar13 = puVar13 + 1;
          } while (puVar13 != local_54);
        }
        fn_001008c4(local_5c,(int)local_68 - (int)local_5c >> 2,0);
        return uVar5;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


