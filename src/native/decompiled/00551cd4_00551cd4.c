#include "00551cd4_00551cd4.h"



undefined4 fn_00551cd4(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint uVar14;
  int *local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int *local_e0;
  undefined4 local_dc;
  int *piStack_d8;
  undefined4 local_d4;
  int **local_d0;
  int **local_cc;
  ushort local_c8;
  ushort local_c6;
  ushort local_c4;
  int local_c0;
  uint local_bc;
  int *local_b8;
  char local_b4;
  char local_b3;
  int local_b0;
  int *local_ac;
  uint uStack_a8;
  int *local_a4;
  int **ppiStack_a0;
  float local_9c;
  float fStack_98;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int *local_4c;
  uint local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int iStack_34;
  int *piStack_30;
  
  param_1[9] = param_3;
  fn_001718c4(param_2,0x54594c46,0x7020100,1);
  local_40 = (int *)0x0;
  local_3c = (int *)0x0;
  uVar13 = 0x3f800000;
  local_38 = (int *)0x0;
  if (param_5 == (uint *)0x0) {
    local_f0 = 0x3f800000;
    local_ec = 0x3f800000;
    local_cc = (int **)0x0;
  }
  else {
    local_ec = param_5[6];
    local_f0 = param_5[5];
    local_cc = (int **)param_5[4];
  }
  local_e0 = *(int **)(param_4 + 0x10);
  local_48 = 0;
  local_44 = 0;
  local_50 = 0;
  local_dc = *(undefined4 *)(param_4 + 0x14);
  iVar9 = 0;
  local_d4 = *(undefined4 *)(param_4 + 0x1c);
  local_c8 = 0;
  local_c4 = 0;
  local_d0 = &local_40;
  local_bc = 0;
  local_b4 = *(char *)(param_4 + 0x3c);
  local_b3 = *(char *)(param_4 + 0x3d);
  local_e8 = 0;
  local_e4 = 0;
  param_1[0xd] = 0;
  piVar8 = (int *)((uint)*(ushort *)(param_2 + 6) + param_2);
  piStack_d8 = param_1;
  iStack_34 = param_3;
  piStack_30 = param_1;
  if (*(short *)(param_2 + 0x10) != 0) {
    do {
      iVar10 = *piVar8;
      if (iVar10 == 0x31707267) {
        if (local_44 == 0) {
          local_44 = 1;
          puVar3 = (undefined4 *)(**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0xc,4);
          if (puVar3 != (undefined4 *)0x0) {
            puVar3[1] = puVar3 + 1;
            *puVar3 = 0;
            puVar3[2] = puVar3 + 1;
          }
          param_1[5] = (int)puVar3;
        }
        else if ((param_1[5] != 0) && (local_50 == 1)) {
          iVar2 = param_1[4];
          iVar10 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x20,4);
          if ((iVar10 != 0) && (iVar10 = fn_0054d240(iVar10,piVar8,iVar2), iVar10 != 0)) {
            fn_0054a918(param_1[5]);
          }
        }
      }
      else if (iVar10 < 0x31707267) {
        if (iVar10 == 0x31657267) {
          local_50 = local_50 + -1;
LAB_0055234c:
        }
        else if (iVar10 < 0x31657268) {
          bVar12 = iVar10 == 0x31636970;
          iVar2 = 0;
          if (!bVar12) {
            iVar2 = iVar10 + -0x31646e62;
            bVar12 = iVar2 == 0;
          }
          if (!bVar12) {
            bVar12 = iVar2 == 0x15;
          }
          if (bVar12) {
LAB_00551f50:
            local_c8 = 0;
            local_c6 = 0;
            local_c4 = 0;
            local_c0 = 0;
            local_b8 = (int *)0x0;
            uVar14 = 0;
            local_f4 = (int *)0x0;
            piVar5 = piVar8;
            if ((iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) &&
               (piVar6 = (int *)(piVar8[1] + (int)piVar8), *piVar6 == 0x31647375)) {
              iVar9 = iVar9 + 1;
              piVar5 = piVar6;
              local_b8 = piVar6;
            }
            local_4c = piVar8;
            if (param_5 == (uint *)0x0) {
              if ((param_1[4] == 0) && (local_b3 != '\0')) {
                fn_0017821c(&local_b0,piVar8,0x54);
                local_5c = 0;
                local_b0 = 0x31747270;
                local_58 = (undefined4)uVar13;
                local_54 = local_58;
                uVar14 = (**(code **)(*param_1 + 0x3c))(param_1,0x31747270,&local_b0,0,&local_f0);
                *(int **)(uVar14 + 0xac) = param_1;
                goto LAB_00552154;
              }
LAB_00552160:
              uVar14 = (**(code **)(*param_1 + 0x3c))(param_1,iVar10,local_4c,local_f4,&local_f0);
              piVar8 = piVar5;
              if (uVar14 == 0) goto LAB_00552350;
            }
            else {
              if (param_1[4] == 0) {
                uVar14 = param_5[2];
              }
              else {
                uVar11 = 0;
                if (*param_5 == 0) goto LAB_00552160;
                bVar12 = false;
                do {
                  iVar2 = 0;
                  while (cVar1 = *(char *)((int)piVar8 + iVar2 + 0xc),
                        cVar1 == *(char *)(param_5[1] + uVar11 * 0x28 + iVar2)) {
                    if ((cVar1 == '\0') || (iVar2 = iVar2 + 1, 0x17 < iVar2)) {
                      iVar2 = param_5[1] + uVar11 * 0x28;
                      if (iVar2 != 0) {
                        if (*(int *)(iVar2 + 0x1c) == 0) {
                          local_f4 = (int *)0x0;
                        }
                        else {
                          local_f4 = (int *)(param_5[3] + *(int *)(iVar2 + 0x1c));
                        }
                        local_c8 = (ushort)*(byte *)(iVar2 + 0x18);
                        local_c6 = (ushort)*(byte *)(iVar2 + 0x19);
                        local_c4 = (ushort)*(byte *)(iVar2 + 0x1a);
                        local_c0 = *(int *)(iVar2 + 0x24);
                        if (local_c0 != 0) {
                          local_c0 = local_c0 + param_5[3];
                        }
                        piVar8 = *(int **)(iVar2 + 0x20);
                        if (piVar8 != (int *)0x0) {
                          if (piVar8 == (int *)&DAT_00000001) {
                            piVar8 = (int *)0x0;
                            bVar12 = true;
                          }
                          else {
                            bVar12 = true;
                            piVar8 = (int *)((int)piVar8 + param_5[3]);
                          }
                        }
                        if (bVar12) {
                          local_b8 = piVar8;
                        }
                      }
                      goto LAB_00552160;
                    }
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *param_5);
              }
LAB_00552154:
              if (uVar14 == 0) goto LAB_00552160;
            }
            if (param_1[4] == 0) {
              param_1[4] = uVar14;
            }
            if (local_bc != 0) {
              fn_0018a69c(local_bc,uVar14);
            }
            uVar11 = uVar14;
            if (iVar10 == 0x31747270) {
              if (local_f4 == (int *)0x0) {
                ppiStack_a0 = &local_40;
                local_f4 = local_4c;
              }
              else {
                ppiStack_a0 = local_cc;
              }
              local_b0 = local_f4[0x15];
              local_ac = local_f4 + 0x18;
              local_9c = (*(float *)(uVar14 + 0x3c) / (float)local_4c[0x13]) * (float)local_f4[0x16]
              ;
              fStack_98 = (*(float *)(uVar14 + 0x40) / (float)local_4c[0x14]) *
                          (float)local_f4[0x17];
              uStack_a8 = uVar14;
              local_a4 = local_f4;
              iVar10 = (**(code **)(*param_1 + 0x40))
                                 (param_1,local_f4 + local_f4[0x15] * 10 + 0x18,&local_b0,&local_f0)
              ;
              if (iVar10 != 0) {
                *(int *)(uVar14 + 0xac) = iVar10;
                fn_0017d948(param_1 + 10,param_1 + 0xb,uVar14 + 0xa4);
              }
            }
            piVar8 = piVar5;
            local_48 = uVar11;
          }
          else if (iVar2 == 0xf30e) {
            local_48 = local_bc;
            local_bc = *(uint *)(local_bc + 0xc);
            goto LAB_00552284;
          }
        }
        else if (iVar10 == 0x316c6e66) {
          local_3c = piVar8;
        }
        else if (iVar10 == 0x316c7874) {
          local_40 = piVar8;
        }
        else if (iVar10 == 0x316e6170) goto LAB_00551f50;
      }
      else if (iVar10 + -0x31707267 == 0x3fbfc) {
        if (local_e0 != (int *)0x0) {
          piVar5 = (int *)0x0;
          piVar6 = piVar8;
          if ((iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) &&
             (piVar7 = (int *)(piVar8[1] + (int)piVar8), *piVar7 == 0x31647375)) {
            iVar9 = iVar9 + 1;
            piVar5 = piVar7;
            piVar6 = piVar7;
          }
          fn_0054a2d4(&local_b0,piVar8,piVar5);
          (**(code **)(*local_e0 + 8))(local_e0,&local_b0,param_1);
          piVar8 = piVar6;
        }
      }
      else if (iVar10 + -0x31707267 < 0x3fbfc) {
        if (iVar10 == 0x31736170) {
          local_bc = local_48;
LAB_00552284:
        }
        else {
          if (iVar10 == 0x31737267) {
            local_50 = local_50 + 1;
            goto LAB_0055234c;
          }
          if (iVar10 == 0x3174616d) {
            local_38 = piVar8;
          }
        }
      }
      else {
        bVar12 = iVar10 == 0x31747270;
        iVar2 = 0;
        if (!bVar12) {
          iVar2 = iVar10 + -0x31747874;
          bVar12 = iVar2 == 0;
        }
        if (bVar12) goto LAB_00551f50;
        if (iVar2 == 0xf8) {
          param_1[6] = piVar8[3];
          param_1[7] = piVar8[4];
          param_1[8] = (int)(piVar8 + 7);
          local_e8 = piVar8[5];
          local_e4 = piVar8[6];
        }
      }
LAB_00552350:
      iVar9 = iVar9 + 1;
      piVar8 = (int *)((int)piVar8 + piVar8[1]);
    } while (iVar9 < (int)(uint)*(ushort *)(param_2 + 0x10));
  }
  if (((local_b4 != '\0') && (*(int *)(param_1[4] + 0xc) == 0)) && (param_1[0xd] != 0)) {
    uVar4 = fn_00127a60();
    iVar9 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,uVar4,4);
    param_1[0xe] = iVar9;
  }
  return 1;
}


