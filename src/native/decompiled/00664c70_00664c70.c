#include "00664c70_00664c70.h"



int fn_00664c70(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7,int param_8,int *param_9,int *param_10)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint *puVar18;
  uint uVar19;
  char *local_50;
  char *local_4c;
  char *local_48;
  undefined *puStack_44;
  char *pcStack_40;
  undefined *puStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  uint local_2c;
  uint uStack_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005efdbc();
  }
  piVar8 = (int *)*param_1;
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *param_1 = (int)piVar3;
  }
  iVar2 = fn_0068eb30(DAT_008977e8);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= param_2))
  {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4) + param_2 * 0x34;
  }
  iVar2 = fn_0069ee40(*param_1,iVar2,0);
  if (iVar2 != 0) {
    uVar4 = fn_0017fde4(*param_1);
    iVar2 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar2 + 0x24),uVar4);
    fn_005ef16c(*param_1,0);
  }
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005efdbc();
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[1] = (int)piVar3;
  }
  if (param_4 != 0xffffffff) {
    iVar2 = fn_0068eb30(DAT_008977e8);
    if (((int)param_4 < 0) ||
       ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= param_4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + param_4 * 0x34;
    }
    iVar2 = fn_0069ee40(param_1[1],iVar2,0);
    if (iVar2 != 0) {
      uVar4 = fn_0017fde4(param_1[1]);
      iVar2 = fn_0068c694(DAT_008977e8);
      fn_001969a4(*(undefined4 *)(iVar2 + 0x24),uVar4);
      local_50 = s_BG_ground_008c6d69;
      local_4c = s_BG_wall_008c6d73;
      local_48 = s_cloud_fine_008c6d7b;
      puStack_44 = &DAT_008c6d86;
      pcStack_40 = s_galaxy_008c6d8a;
      puStack_3c = &DAT_008c6d91;
      uStack_38 = 0;
      uVar4 = fn_0017fde4(param_1[1]);
      fn_005eb0c4(uVar4,&local_50);
      iVar2 = fn_005ef124(param_1[1]);
      if (0 < iVar2) {
        fn_0017fd4c(param_1[1]);
      }
    }
  }
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005efdbc();
  }
  piVar8 = (int *)param_1[2];
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[2] = (int)piVar3;
  }
  iVar2 = fn_0068eb30(DAT_008977e8);
  if (((int)param_5 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= param_5))
  {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4) + param_5 * 0x34;
  }
  iVar2 = fn_0069ee40(param_1[2],iVar2,0);
  if (iVar2 != 0) {
    uVar4 = fn_0017fde4(param_1[2]);
    iVar5 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar5 + 0x24),uVar4);
  }
  uVar19 = 0;
  if (param_9[1] - *param_9 >> 2 != 0) {
    do {
      iVar2 = fn_00145b00(8,&DAT_00812c8c);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = fn_005efdbc();
      }
      iVar2 = fn_0068eb30(DAT_008977e8);
      uVar9 = *(uint *)(*param_9 + uVar19 * 4);
      if (((int)uVar9 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= uVar9))
      {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + uVar9 * 0x34;
      }
      iVar2 = fn_0069ee40(uVar4,iVar2,0);
      if (iVar2 != 0) {
        puVar18 = (uint *)(param_1 + 3);
        pcVar6 = (char *)param_1[4];
        if (pcVar6 == (char *)param_1[5]) {
          uVar9 = (int)((int)pcVar6 - *puVar18) >> 2;
          if (uVar9 < (uint)((int)(param_1[5] - *puVar18) >> 2)) {
            param_1[4] = (int)(pcVar6 + 4);
            if (pcVar6 != (char *)0x0) {
              *(undefined4 *)pcVar6 = *(undefined4 *)(pcVar6 + -4);
            }
            pcVar14 = pcVar6 + -4;
            pcVar1 = pcVar6;
            if (pcVar6 < pcVar14) {
              if (0 < (int)pcVar14 - (int)pcVar6) {
                iVar5 = (int)pcVar14 - (int)pcVar6 >> 2;
                iVar13 = 0;
                do {
                  iVar5 = iVar5 + -1;
                  *(undefined4 *)(pcVar6 + (iVar13 + -1) * 4) =
                       *(undefined4 *)(pcVar14 + (iVar13 + -1) * 4);
                  iVar13 = iVar13 + -1;
                } while (iVar5 != 0);
              }
            }
            else {
              while (pcVar6 != pcVar14) {
                pcVar14 = pcVar14 + -4;
                *(undefined4 *)(pcVar1 + -4) = *(undefined4 *)pcVar14;
                pcVar1 = pcVar1 + -4;
              }
            }
            *(undefined4 *)pcVar6 = uVar4;
            local_4c = pcVar6;
          }
          else {
            local_48 = (char *)(uVar9 + (uVar9 >> 1) + (uVar9 >> 3));
            if (local_48 < (char *)(uVar9 + 0x20)) {
              local_48 = (char *)(uVar9 + 0x20);
            }
            local_4c = pcVar6;
            local_50 = (char *)fn_00100fc6((int)local_48 << 2,0);
            pcVar14 = local_50;
            for (pcVar6 = (char *)*puVar18; pcVar6 != local_4c; pcVar6 = pcVar6 + 4) {
              if (pcVar14 != (char *)0x0) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
              }
              pcVar14 = pcVar14 + 4;
            }
            if (local_50 + ((int)local_4c - *puVar18 & 0xfffffffc) != (char *)0x0) {
              *(undefined4 *)(local_50 + ((int)local_4c - *puVar18 & 0xfffffffc)) = uVar4;
            }
            pcVar14 = (char *)param_1[4];
            pcVar6 = local_50 + ((int)local_4c - *puVar18 & 0xfffffffc);
            for (; local_4c != pcVar14; local_4c = local_4c + 4) {
              pcVar6 = pcVar6 + 4;
              if (pcVar6 != (char *)0x0) {
                *(undefined4 *)pcVar6 = *(undefined4 *)local_4c;
              }
            }
            uVar7 = *puVar18;
            uVar12 = param_1[4];
            local_4c = (char *)((int)(uVar12 - uVar7) >> 2);
            uVar9 = uVar7;
            if (uVar12 < uVar7) {
              do {
                uVar9 = uVar9 + 4;
              } while (uVar9 != uVar12);
            }
            fn_001008c4(uVar7,(int)(param_1[5] - uVar7) >> 2,0);
            param_1[5] = (int)(local_50 + (int)local_48 * 4);
            *puVar18 = (uint)local_50;
            param_1[4] = (int)(local_50 + (int)(local_4c + 1) * 4);
          }
        }
        else {
          param_1[4] = (int)(pcVar6 + 4);
          if (pcVar6 != (char *)0x0) {
            *(undefined4 *)pcVar6 = uVar4;
          }
        }
        iVar5 = fn_0017fde4(uVar4);
        puVar15 = (undefined4 *)(*param_10 + uVar19 * 0xc);
        uVar16 = puVar15[1];
        uVar17 = puVar15[2];
        *(undefined4 *)(iVar5 + 0x58) = *puVar15;
        *(undefined4 *)(iVar5 + 0x68) = uVar16;
        *(undefined4 *)(iVar5 + 0x78) = uVar17;
        *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) | 0x800;
        iVar5 = fn_0068c694(DAT_008977e8);
        uVar17 = *(undefined4 *)(iVar5 + 0x24);
        uVar16 = fn_0017fde4(uVar4);
        fn_001969a4(uVar17,uVar16);
        puVar15 = (undefined4 *)param_1[7];
        local_4c = (char *)(*param_10 + uVar19 * 0xc);
        puVar18 = (uint *)(param_1 + 6);
        if (puVar15 == (undefined4 *)param_1[8]) {
          uVar9 = (int)((int)puVar15 - *puVar18) / 0xc;
          if (uVar9 < (uint)((int)(param_1[8] - *puVar18) / 0xc)) {
            param_1[7] = (int)(puVar15 + 3);
            if (puVar15 != (undefined4 *)0x0) {
              *puVar15 = puVar15[-3];
              puVar15[1] = puVar15[-2];
              puVar15[2] = puVar15[-1];
            }
            puVar11 = puVar15 + -3;
            puVar10 = puVar15;
            if (puVar15 < puVar11) {
              if (0 < (int)puVar11 - (int)puVar15) {
                uVar9 = ((int)puVar11 - (int)puVar15) / 0xc;
                if ((uVar9 & 1) != 0) {
                  puVar11 = puVar15 + -6;
                  puVar10 = puVar15 + -3;
                  *puVar10 = *puVar11;
                  puVar15[-2] = puVar15[-5];
                  puVar15[-1] = puVar15[-4];
                }
                for (iVar5 = (int)uVar9 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
                  uVar16 = puVar11[-2];
                  uVar17 = puVar11[-1];
                  puVar10[-3] = puVar11[-3];
                  puVar10[-2] = uVar16;
                  puVar10[-1] = uVar17;
                  uVar16 = puVar11[-5];
                  uVar17 = puVar11[-4];
                  puVar10[-6] = puVar11[-6];
                  puVar10[-5] = uVar16;
                  puVar10[-4] = uVar17;
                  puVar10 = puVar10 + -6;
                  puVar11 = puVar11 + -6;
                }
              }
            }
            else {
              while (puVar15 != puVar11) {
                uVar16 = puVar11[-2];
                uVar17 = puVar11[-1];
                puVar10[-3] = puVar11[-3];
                puVar10[-2] = uVar16;
                puVar10[-1] = uVar17;
                puVar10 = puVar10 + -3;
                puVar11 = puVar11 + -3;
              }
            }
            uVar16 = *(undefined4 *)(local_4c + 4);
            uVar17 = *(undefined4 *)(local_4c + 8);
            *puVar15 = *(undefined4 *)local_4c;
            puVar15[1] = uVar16;
            puVar15[2] = uVar17;
          }
          else {
            local_48 = (char *)(uVar9 + (uVar9 >> 1) + (uVar9 >> 3));
            if (local_48 < (char *)(uVar9 + 0x20)) {
              local_48 = (char *)(uVar9 + 0x20);
            }
            local_50 = (char *)fn_00100fc6((int)local_48 * 0xc,0);
            pcVar6 = local_50;
            for (puVar11 = (undefined4 *)*puVar18; puVar11 != puVar15; puVar11 = puVar11 + 3) {
              if (pcVar6 != (char *)0x0) {
                uVar16 = puVar11[1];
                uVar17 = puVar11[2];
                *(undefined4 *)pcVar6 = *puVar11;
                *(undefined4 *)(pcVar6 + 4) = uVar16;
                *(undefined4 *)(pcVar6 + 8) = uVar17;
              }
              pcVar6 = pcVar6 + 0xc;
            }
            pcVar6 = local_50 + ((int)((int)puVar15 - *puVar18) / 0xc) * 0xc;
            if (pcVar6 != (char *)0x0) {
              uVar16 = *(undefined4 *)(local_4c + 4);
              uVar17 = *(undefined4 *)(local_4c + 8);
              *(undefined4 *)pcVar6 = *(undefined4 *)local_4c;
              *(undefined4 *)(pcVar6 + 4) = uVar16;
              *(undefined4 *)(pcVar6 + 8) = uVar17;
            }
            puVar11 = (undefined4 *)param_1[7];
            pcVar6 = local_50 + ((int)((int)puVar15 - *puVar18) / 0xc) * 0xc;
            for (; puVar15 != puVar11; puVar15 = puVar15 + 3) {
              pcVar14 = pcVar6 + 0xc;
              if (pcVar14 != (char *)0x0) {
                uVar16 = puVar15[1];
                uVar17 = puVar15[2];
                *(undefined4 *)pcVar14 = *puVar15;
                *(undefined4 *)(pcVar6 + 0x10) = uVar16;
                *(undefined4 *)(pcVar6 + 0x14) = uVar17;
              }
              pcVar6 = pcVar14;
            }
            uVar7 = *puVar18;
            uVar12 = param_1[7];
            uVar9 = uVar7;
            if (uVar12 < uVar7) {
              do {
                uVar9 = uVar9 + 0xc;
              } while (uVar9 != uVar12);
            }
            fn_001008c4(uVar7,(int)(param_1[8] - uVar7) / 0xc,0);
            *puVar18 = (uint)local_50;
            param_1[7] = (int)(local_50 + (((int)(uVar12 - uVar7) / 0xc) * 3 + 3) * 4);
            param_1[8] = (int)(local_50 + (int)local_48 * 0xc);
          }
        }
        else {
          param_1[7] = (int)(puVar15 + 3);
          if (puVar15 != (undefined4 *)0x0) {
            uVar16 = *(undefined4 *)(local_4c + 4);
            uVar17 = *(undefined4 *)(local_4c + 8);
            *puVar15 = *(undefined4 *)local_4c;
            puVar15[1] = uVar16;
            puVar15[2] = uVar17;
          }
        }
        fn_005ef16c(uVar4,0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < (uint)(param_9[1] - *param_9 >> 2));
  }
  iVar5 = fn_00145b00(0x1c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar5 != 0) {
    piVar3 = (int *)fn_0034f2fc();
  }
  piVar8 = (int *)param_1[9];
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[9] = (int)piVar3;
  }
  uVar4 = fn_0068eb0c(DAT_008977e8);
  iVar5 = fn_0068eb30(DAT_008977e8);
  if (((int)local_2c < 0) ||
     ((uint)((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0x34) <= local_2c)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 4) + local_2c * 0x34;
  }
  fn_00338014(param_1[9],iVar5,uVar4,local_2c);
  iVar5 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar5 + 0x24));
  iVar5 = fn_00145b00(0x28,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar5 != 0) {
    piVar3 = (int *)fn_0023a524();
  }
  piVar8 = (int *)param_1[10];
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[10] = (int)piVar3;
  }
  iVar5 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar5 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_0023a524();
  }
  piVar8 = (int *)param_1[0xb];
  if (piVar8 != piVar3) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    param_1[0xb] = (int)piVar3;
  }
  if (param_6 != -1) {
    uVar4 = fn_0068eb30(DAT_008977e8);
    uVar4 = fn_00265604(uVar4,param_6);
    fn_0023a04c(param_1[10],1,uVar4);
    uVar4 = fn_0068eb30(DAT_008977e8);
    uVar4 = fn_00265604(uVar4,param_6);
    fn_0023a04c(param_1[0xb],1,uVar4);
  }
  if (param_7 != -1) {
    uVar4 = fn_0068eb30(DAT_008977e8);
    uVar4 = fn_00265604(uVar4,param_7);
    fn_0023a04c(param_1[10],0,uVar4);
    uVar4 = fn_0068eb30(DAT_008977e8);
    uVar4 = fn_00265604(uVar4,param_7);
    fn_0023a04c(param_1[0xb],0,uVar4);
  }
  if (param_8 != -1) {
    uVar4 = fn_0068eb30(DAT_008977e8);
    uVar4 = fn_00265604(uVar4,param_8);
    fn_0023a04c(param_1[10],2,uVar4);
    uVar4 = fn_0068eb30(DAT_008977e8);
    uVar4 = fn_00265604(uVar4,param_8);
    fn_0023a04c(param_1[0xb],2,uVar4);
  }
  return iVar2;
}


