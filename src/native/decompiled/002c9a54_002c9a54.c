#include "002c9a54_002c9a54.h"



undefined1 * fn_002c9a54(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int extraout_r1;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  uint local_340;
  uint local_33c;
  ushort local_338;
  ushort local_336;
  ushort local_334;
  undefined2 local_332;
  ushort local_330 [4];
  undefined4 local_328;
  int local_324 [5];
  undefined1 *local_310;
  uint local_30c;
  uint local_308 [2];
  int *local_300;
  undefined1 *local_90;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 *local_4c;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  int local_28;
  
  piVar14 = DAT_00897894;
  local_28 = param_1;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar1 = (**(code **)(*DAT_00897894 + 0xc))(DAT_00897894,(char *)&DAT_0086a178,0);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)fn_002ca990(local_28);
      return puVar2;
    }
    uVar16 = fn_0022f584((char *)&DAT_002c9e64,0);
    fn_0068974c(local_28,uVar16,0,1);
    *(undefined1 *)(*(int *)(local_28 + 0x5c) + 0x30) = 0;
    puVar2 = *(undefined1 **)(local_28 + 0x5c);
    puVar2[0x51] = 1;
  }
  else {
    iVar1 = (**(code **)(*DAT_00897894 + 0x18))(DAT_00897894,(char *)&DAT_00867230);
    puVar2 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*piVar14 + 0x10))(piVar14,(char *)&DAT_00867230);
      puVar2 = (undefined1 *)0x0;
      if (iVar1 != 0) {
        bVar17 = true;
        iVar1 = (**(code **)(*piVar14 + 0x1c))(piVar14,(char *)&DAT_00867230);
        if (iVar1 == 6) {
          iVar1 = fn_00227ca8(piVar14,0x20,0xffffffff,0);
          if (iVar1 == 0) {
            bVar17 = false;
            *(code **)(local_28 + 0xc4) = fn_002c97f4;
            *(undefined4 *)(local_28 + 200) = 0;
            fn_00522550(auStack_88);
          }
          else {
            fn_00522550(auStack_88);
            iVar1 = (**(code **)(*piVar14 + 0x30))(piVar14,auStack_88,iVar1);
            if (iVar1 == 0) {
              bVar17 = false;
              *(code **)(local_28 + 0xc4) = fn_002c97f4;
              *(undefined4 *)(local_28 + 200) = 0;
            }
          }
        }
        else {
          fn_002ca990(local_28);
          bVar17 = false;
          fn_00522550(auStack_88);
        }
        local_44 = 0;
        fn_00522030(auStack_88,3,&local_44,4);
        iVar1 = extraout_r1;
        if (bVar17) {
          iVar1 = local_44 - 0x1000;
        }
        if (bVar17 && iVar1 != 0x288) {
          bVar17 = false;
          *(code **)(local_28 + 0xc4) = fn_002c99dc;
          *(undefined4 *)(local_28 + 200) = 0;
        }
        puVar8 = local_330;
        local_328 = local_44;
        local_330[0] = 0x20;
        local_330[1] = 0;
        if (0x1f < local_44) {
          puVar8 = (ushort *)&local_328;
        }
        iVar1 = *(int *)puVar8;
        local_90 = (undefined1 *)fn_00100fc6(iVar1,0);
        puVar2 = local_90;
        for (uVar9 = local_328; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar2 != (undefined1 *)0x0) {
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
        }
        local_4c = local_90 + local_328;
        local_60 = local_90 + iVar1;
        iVar1 = fn_005222ac(auStack_88,local_90,(int)local_4c - (int)local_90);
        if (bVar17) {
          if (iVar1 != 0) {
            iVar1 = fn_002273f0(local_90,0);
            if (iVar1 != 0) {
              fn_00124be8(auStack_30);
              fn_00481d98(auStack_30);
              fn_006d3d30(&local_40,auStack_30);
              local_38 = local_40 + 32400000;
              local_34 = local_3c + (uint)(0xfe119d7f < local_40);
              iVar1 = fn_006d0618(&local_38);
              fn_00301a9c(local_330,local_90 + iVar1 * 0x2a0 + 8,0x2a0);
              uVar16 = *(undefined4 *)(DAT_00897804 + 0x48);
              fn_00113340(uVar16);
              uVar9 = 0;
              do {
                uVar3 = (uint)local_330[uVar9 * 8];
                if (uVar3 != 0) {
                  local_33c = (uint)local_330[uVar9 * 8 + 1];
                  local_338 = local_330[uVar9 * 8 + 2];
                  local_336 = local_330[uVar9 * 8 + 3];
                  local_334 = local_330[uVar9 * 8 + 4];
                  local_332 = *(undefined2 *)((int)local_324 + uVar9 * 0x10 + -2);
                  local_340 = uVar3;
                  fn_002b0cac(uVar16,uVar9,&local_340);
                  if (local_330[uVar9 * 8] == 2) {
                    uVar7 = fn_002ea524((int)(short)local_330[uVar9 * 8 + 1]);
                    fn_002508f4(uVar7,local_324[uVar9 * 4]);
                  }
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x2a);
              *(code **)(local_28 + 0xc4) = fn_002c9950;
              *(undefined4 *)(local_28 + 200) = 0;
              goto LAB_002ca298;
            }
            uVar9 = 0;
            if (local_4c != local_90) {
              do {
                iVar1 = 0;
                local_310 = local_4c + (-uVar9 - (int)local_90);
                if ((undefined1 *)0xf < local_310) {
                  local_310 = (undefined1 *)0x10;
                }
                piVar14 = (int *)&DAT_008f9d04;
                if (0 < (int)local_310) {
                  do {
                    local_324[1] = 0;
                    local_324[2] = 0;
                    fn_00102908(local_324 + 1,8,(char *)&DAT_002ca24c,local_90[uVar9 + iVar1]);
                    uVar15 = piVar14[-1];
                    uVar3 = fn_002febd8(local_324 + 1);
                    local_300 = local_324 + 1;
                    uVar4 = piVar14[-1];
                    if (uVar4 < uVar15) {
                      if (uVar3 < uVar4) {
                        local_340 = uVar4;
                      }
                      else {
                        local_340 = uVar3;
                      }
                      uVar13 = 0;
                      if (uVar4 < uVar15) {
                        uVar13 = uVar15;
                      }
                      fn_002ff628(9,&DAT_008c7614,&DAT_008c7614,uVar13);
                    }
                    if (-uVar3 - 0xf < (uint)piVar14[-1]) {
                      local_340 = -uVar3 - 0xf;
                      fn_002ff628(8,&DAT_008c7614);
                    }
                    piVar10 = (int *)piVar14[-1];
                    uVar4 = (int)piVar10 + uVar3;
                    if (uVar4 == 0) {
                      if (piVar14 != (int *)&DAT_008f9d04) {
                        iVar12 = piVar14[-3];
                        if ((iVar12 == -1) ||
                           ((piVar14 + -3 != &DAT_008f9cf8 &&
                            (piVar14[-3] = iVar12 + -1, iVar12 == 0)))) {
                          fn_001008c4(piVar14 + -3,piVar14[-2] + 0xe,0);
                        }
                      }
                      piVar14 = (int *)&DAT_008f9d04;
                    }
                    else {
                      local_324[0] = (int)piVar10 - uVar15;
                      uVar13 = piVar14[-3] + 1;
                      bVar18 = piVar14[-3] != -1;
                      bVar17 = uVar13 == 1;
                      if (uVar13 < 2) {
                        bVar18 = (uint)piVar14[-2] <= uVar4;
                        bVar17 = uVar4 == piVar14[-2];
                      }
                      if (!bVar18 || bVar17) {
                        piVar11 = piVar14;
                        if (local_300 >= piVar14) {
                          piVar11 = (int *)((int)piVar10 + (int)piVar14);
                          piVar10 = piVar11;
                        }
                        if ((local_300 < piVar14 || piVar10 < local_300) || local_300 == piVar11) {
                          if (local_324[0] != 0) {
                            fn_00301b24((int)piVar14 + uVar15 + uVar3,(int)piVar14 + uVar15,
                                         local_324[0]);
                          }
                          if (uVar3 != 0) {
                            fn_00301b24((int)piVar14 + uVar15,local_300,uVar3);
                          }
                          piVar14[-1] = uVar4;
                          *(undefined1 *)((int)piVar14 + uVar4) = 0;
                          goto LAB_002ca1bc;
                        }
                      }
                      uVar13 = piVar14[-1];
                      local_30c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
                      if (local_30c < uVar13 + 0x80) {
                        local_30c = uVar13 + 0x80;
                      }
                      local_308[0] = uVar4;
                      puVar5 = (uint *)(local_324 + 6);
                      if (local_30c < uVar4) {
                        puVar5 = (uint *)(local_324 + 7);
                      }
                      uVar13 = *puVar5;
                      if (0xfffffff1 < uVar13) {
                        local_340 = 0xfffffff1;
                        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar13);
                      }
                      if (uVar13 < uVar4) {
                        local_340 = uVar13;
                        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar4);
                      }
                      if (uVar13 == 0) {
                        puVar6 = &DAT_008f9cf8;
                      }
                      else {
                        puVar6 = (undefined4 *)fn_00100fc6(uVar13 + 0xe,0);
                        if (puVar6 != (undefined4 *)0x0) {
                          *puVar6 = 0;
                          puVar6[1] = 0;
                          puVar6[2] = 0;
                        }
                        puVar2 = (undefined1 *)((int)puVar6 + uVar4 + 0xc);
                        *puVar6 = 0;
                        puVar6[1] = uVar13;
                        puVar6[2] = uVar4;
                        if (puVar2 != (undefined1 *)0x0) {
                          *puVar2 = 0;
                        }
                      }
                      if (uVar15 != 0) {
                        fn_00301a9c(puVar6 + 3,piVar14,uVar15);
                      }
                      if (uVar3 != 0) {
                        fn_00301a9c((int)puVar6 + uVar15 + 0xc,local_300,uVar3);
                      }
                      if (local_324[0] != 0) {
                        fn_00301a9c((int)puVar6 + uVar3 + uVar15 + 0xc,(int)piVar14 + uVar15,
                                     local_324[0]);
                      }
                      if (piVar14 != (int *)&DAT_008f9d04) {
                        iVar12 = piVar14[-3];
                        if ((iVar12 == -1) ||
                           ((piVar14 + -3 != &DAT_008f9cf8 &&
                            (piVar14[-3] = iVar12 + -1, iVar12 == 0)))) {
                          fn_001008c4(piVar14 + -3,piVar14[-2] + 0xe,0);
                        }
                      }
                      piVar14 = puVar6 + 3;
                    }
LAB_002ca1bc:
                    iVar1 = iVar1 + 1;
                  } while (iVar1 < (int)local_310);
                }
                if (piVar14 != (int *)&DAT_008f9d04) {
                  iVar1 = piVar14[-3];
                  if ((iVar1 == -1) ||
                     ((piVar14 + -3 != &DAT_008f9cf8 && (piVar14[-3] = iVar1 + -1, iVar1 == 0)))) {
                    fn_001008c4(piVar14 + -3,piVar14[-2] + 0xe,0);
                  }
                }
                uVar9 = uVar9 + 0x10;
              } while (uVar9 < (uint)((int)local_4c - (int)local_90));
            }
          }
          *(code **)(local_28 + 0xc4) = fn_002c99dc;
          *(undefined4 *)(local_28 + 200) = 0;
        }
LAB_002ca298:
        fn_00522220(auStack_88);
        iVar1 = fn_00681c7c();
        if (iVar1 != 0) {
          fn_002287d0(DAT_00897894,0x20,1);
          (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_00867230);
          fn_00682a8c();
        }
        puVar2 = local_90;
        if (local_4c < local_90) {
          do {
            puVar2 = puVar2 + 1;
          } while (puVar2 != local_4c);
        }
        fn_001008c4(local_90,(int)local_60 - (int)local_90,0);
        return auStack_88;
      }
    }
  }
  return puVar2;
}


