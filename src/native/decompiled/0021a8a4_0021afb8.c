#include "0021a8a4_0021afb8.h"



void fn_0021afb8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x138);
  if (((iVar1 == 5 || iVar1 == 6) || iVar1 == 1) && (*(int *)(param_1 + 0x24) != -1)) {
    fn_00159f34(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    fn_0021b654(param_1,3,(char *)&DAT_0021b010,0);
    *(undefined4 *)(param_1 + 0x138) = 7;
  }
  return;
}



void fn_0021ad18(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_c0 [10];
  undefined1 local_98 [12];
  undefined4 local_8c [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_48 = 0;
  local_34 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_c0[0] = param_2;
  fn_0017d96c(&local_48,0x20,0x1f,(char *)&DAT_0021afa8);
  iVar1 = fn_00145b00(0x7c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0069ac5c();
  }
  piVar5 = *(int **)(param_1 + 0x694);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x694) = piVar2;
  }
  fn_0069a700(*(undefined4 *)(param_1 + 0x694),&local_48);
  iVar1 = fn_006f7b9c(*(undefined4 *)(param_1 + 0x694));
  if (0 < iVar1) {
    fn_0078ae58(param_1 + 0x1b4,iVar1);
    fn_0078ae58(param_1 + 0x218,iVar1);
    local_4c = (undefined4 *)(param_1 + 0x694);
    iVar8 = 0;
    do {
      iVar3 = fn_006f7b58(*local_4c,iVar8);
      iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
      piVar2 = *(int **)(iVar4 + 0x10);
      iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,iVar3,1);
      if (iVar4 != 0) {
        local_50 = 0;
        local_c0[1] = 0;
        local_c0[2] = 0;
        local_c0[3] = 0;
        local_c0[4] = 0;
        local_c0[5] = 0;
        local_c0[6] = 0;
        local_c0[7] = 0;
        local_c0[8] = 0;
        iVar6 = 0;
        do {
          iVar7 = iVar6 + 1;
          local_c0[iVar6 * 2 + 9] = -1;
          local_98[iVar6 * 8] = 0;
          local_8c[iVar6 * 2] = 0xffffffff;
          local_8c[iVar6 * 2 + 1] = 0xffffffff;
          local_7c = 0xffffffff;
          local_78 = 0xffffffff;
          uStack_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          iVar6 = iVar7;
        } while (iVar7 < 2);
        local_c0[0] = iVar4;
        fn_0017821c(local_c0 + 1,iVar3,0x6c);
        iVar4 = fn_003035b0(iVar3 + 0x48,&DAT_0021afb4);
        if (iVar4 != 0) {
          local_50 = fn_00689210(piVar2,iVar3 + 0x48);
        }
        iVar4 = *(int *)(iVar3 + 0x40);
        bVar9 = iVar4 == -1;
        if (bVar9) {
          iVar4 = *(int *)(iVar3 + 0x44);
        }
        if (!bVar9 || iVar4 != -1) {
          iVar3 = *(int *)(param_1 + 0x1b8);
          if (iVar3 == *(int *)(param_1 + 0x1bc)) {
            fn_0078ab9c(param_1 + 0x1b4,iVar3,local_c0);
          }
          else {
            *(int *)(param_1 + 0x1b8) = iVar3 + 0x74;
            if (iVar3 != 0) {
              fn_0017821c(iVar3,local_c0,0x74);
            }
          }
        }
        iVar3 = *(int *)(param_1 + 0x21c);
        if (iVar3 == *(int *)(param_1 + 0x220)) {
          fn_0078ab9c(param_1 + 0x218,iVar3,local_c0);
        }
        else {
          *(int *)(param_1 + 0x21c) = iVar3 + 0x74;
          if (iVar3 != 0) {
            fn_0017821c(iVar3,local_c0,0x74);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0021aa5c) */
/* WARNING: Removing unreachable block (ram,0x0021aa68) */
/* WARNING: Removing unreachable block (ram,0x0021aa34) */
/* WARNING: Removing unreachable block (ram,0x0021aa38) */
/* WARNING: Removing unreachable block (ram,0x0021aa3c) */
/* WARNING: Removing unreachable block (ram,0x0021aa40) */
/* WARNING: Removing unreachable block (ram,0x0021aa44) */
/* WARNING: Removing unreachable block (ram,0x0021aa84) */
/* WARNING: Removing unreachable block (ram,0x0021aa94) */
/* WARNING: Removing unreachable block (ram,0x0021aa6c) */
/* WARNING: Removing unreachable block (ram,0x0021aa74) */
/* WARNING: Removing unreachable block (ram,0x0021aa78) */
/* WARNING: Removing unreachable block (ram,0x0021aa7c) */

void fn_0021a8a4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  uint local_70 [3];
  uint local_64 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0x2c))
                              (*(int **)(param_1 + 0x68),(char *)&DAT_0021abd0,1);
    puVar7 = *(undefined4 **)(param_1 + 0x654);
    puVar3 = *(undefined4 **)(param_1 + 0x650);
    puVar15 = (uint *)(param_1 + 0x650);
    puVar11 = (undefined4 *)((int)puVar7 - (int)puVar3);
    uVar12 = (int)puVar11 >> 2;
    if (uVar12 < 8) {
      iVar1 = 8 - uVar12;
      if (iVar1 != 0) {
        uVar12 = iVar1 + uVar12;
        if ((uint)(*(int *)(param_1 + 0x658) - (int)puVar3 >> 2) < uVar12) {
          local_70[0] = uVar12;
          uVar5 = (int)(*(int *)(param_1 + 0x654) - *puVar15) >> 2;
          uVar14 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          local_64[0] = uVar5 + 0x20;
          if (uVar5 + 0x20 <= uVar14) {
            local_64[0] = uVar14;
          }
          puVar8 = local_70;
          if (uVar12 < local_64[0]) {
            puVar8 = local_64;
          }
          uVar12 = *puVar8;
          puVar4 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
          puVar3 = puVar4;
          for (puVar11 = (undefined4 *)*puVar15; puVar11 != puVar7; puVar11 = puVar11 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar11;
            }
            puVar3 = puVar3 + 1;
          }
          puVar11 = (undefined4 *)(((int)puVar7 - *puVar15 & 0xfffffffc) + (int)puVar4);
          for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = 0;
            }
            puVar11 = puVar11 + 1;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x654);
          puVar11 = puVar4 + iVar1 + ((int)((int)puVar7 - *puVar15) >> 2);
          for (; puVar7 != puVar3; puVar7 = puVar7 + 1) {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar7;
            }
            puVar11 = puVar11 + 1;
          }
          uVar14 = *puVar15;
          uVar10 = *(uint *)(param_1 + 0x654);
          uVar5 = uVar14;
          if (uVar10 < uVar14) {
            do {
              uVar5 = uVar5 + 4;
            } while (uVar5 != uVar10);
          }
          fn_001008c4(uVar14,(int)(*(int *)(param_1 + 0x658) - uVar14) >> 2,0);
          *(undefined4 **)(param_1 + 0x658) = puVar4 + uVar12;
          *(undefined4 **)(param_1 + 0x654) = puVar4 + ((int)(uVar10 - uVar14) >> 2) + iVar1;
          *puVar15 = (uint)puVar4;
        }
        else {
          puVar11 = puVar7 + iVar1;
          *(undefined4 **)(param_1 + 0x654) = puVar7 + iVar1;
          if (puVar11 < puVar7) {
            puVar13 = puVar7 + -iVar1;
            puVar4 = puVar7;
            for (puVar3 = puVar13; puVar3 != puVar7; puVar3 = puVar3 + 1) {
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = *puVar3;
              }
              puVar4 = puVar4 + 1;
            }
            puVar3 = puVar7;
            if (puVar7 < puVar13) {
              if (0 < (int)puVar13 - (int)puVar7) {
                iVar1 = (int)puVar13 - (int)puVar7 >> 2;
                iVar9 = 0;
                do {
                  iVar1 = iVar1 + -1;
                  puVar7[iVar9 + -1] = puVar13[iVar9 + -1];
                  iVar9 = iVar9 + -1;
                } while (iVar1 != 0);
              }
            }
            else {
              while (puVar7 != puVar13) {
                puVar13 = puVar13 + -1;
                puVar3[-1] = *puVar13;
                puVar3 = puVar3 + -1;
              }
            }
            if (puVar7 < puVar11) {
              iVar1 = (int)puVar11 - (int)puVar7;
              if (0 < iVar1) {
                puVar11 = puVar7;
                if (iVar1 * 0x20000000 < 0) {
                  puVar11 = puVar7 + 1;
                  *puVar7 = 0;
                }
                for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                  puVar7 = puVar11 + 1;
                  *puVar11 = 0;
                  puVar11 = puVar11 + 2;
                  *puVar7 = 0;
                }
              }
            }
            else {
              for (; puVar7 != puVar11; puVar7 = puVar7 + 1) {
                *puVar7 = 0;
              }
            }
          }
          else {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = 0;
              }
              puVar7 = puVar7 + 1;
            }
          }
        }
      }
    }
    else {
      if (uVar12 != 8) {
        puVar11 = puVar3 + 8;
      }
      if (uVar12 != 8 && puVar3 != puVar7) {
        puVar3 = puVar11;
        if (puVar7 < puVar11) {
          do {
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar7);
        }
        *(uint *)(param_1 + 0x654) = (int)puVar7 - ((int)puVar7 - (int)puVar11 & 0xfffffffcU);
      }
    }
    iVar1 = 0;
    do {
      uVar6 = (**(code **)(*piVar2 + 0x2c))(piVar2,(&DAT_00891774)[iVar1],1);
      *(undefined4 *)(*(int *)(param_1 + 0x650) + iVar1 * 4) = uVar6;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
      DAT_008f9e38 = 0x3f800000;
      DAT_008f9e3c = 0;
      DAT_008f9e40 = 0;
      DAT_008f9e44 = 0;
      DAT_008f9e48 = 0;
      DAT_008f9e4c = 0x3f800000;
      DAT_008f9e50 = 0;
      DAT_008f9e54 = 0;
      DAT_008f9e58 = 0;
      DAT_008f9e5c = 0;
      DAT_008f9e60 = 0x3f800000;
      DAT_008f9e64 = 0;
    }
    fn_001781f0(&local_58,&DAT_008f9e38);
    iVar1 = *(int *)(param_1 + 0x100);
    *(undefined4 *)(iVar1 + 0x48) = local_58;
    *(undefined4 *)(iVar1 + 0x4c) = uStack_54;
    *(undefined4 *)(iVar1 + 0x50) = uStack_50;
    *(undefined4 *)(iVar1 + 0x54) = uStack_4c;
    *(undefined4 *)(iVar1 + 0x58) = uStack_48;
    *(undefined4 *)(iVar1 + 0x5c) = uStack_44;
    *(undefined4 *)(iVar1 + 0x60) = local_40;
    *(undefined4 *)(iVar1 + 100) = uStack_3c;
    *(undefined4 *)(iVar1 + 0x68) = local_38;
    *(undefined4 *)(iVar1 + 0x6c) = uStack_34;
    *(undefined4 *)(iVar1 + 0x70) = uStack_30;
    *(undefined4 *)(iVar1 + 0x74) = uStack_2c;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xbf | 0x40;
  }
  return;
}


