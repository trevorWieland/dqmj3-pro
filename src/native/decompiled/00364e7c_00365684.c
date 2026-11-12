#include "00364e7c_00365684.h"



void fn_00365684(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar2 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x2c + iVar2;
  if (iVar3 != iVar2) {
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c);
      if ((*piVar4 == param_2) &&
         (cVar1 = *(char *)((int)piVar4 + 0x17), cVar1 == '\x02' || cVar1 == '\x03')) {
        if (param_3 != 0) {
          fn_00364e7c(param_1,*(int *)(param_1 + 0x18) + uVar5 * 0x2c,0);
        }
        fn_002e0708(*(undefined4 *)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8));
        piVar4 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8);
        (**(code **)(*piVar4 + 0x54))(piVar4,1);
        *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 0x17) = 4;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(iVar3 - iVar2));
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x003650d0) */
/* WARNING: Removing unreachable block (ram,0x003650d4) */
/* WARNING: Removing unreachable block (ram,0x003650d8) */
/* WARNING: Removing unreachable block (ram,0x003650dc) */
/* WARNING: Removing unreachable block (ram,0x003650f8) */
/* WARNING: Removing unreachable block (ram,0x00365110) */
/* WARNING: Removing unreachable block (ram,0x00365114) */
/* WARNING: Removing unreachable block (ram,0x00365120) */
/* WARNING: Removing unreachable block (ram,0x0036512c) */
/* WARNING: Removing unreachable block (ram,0x0036513c) */
/* WARNING: Removing unreachable block (ram,0x00365144) */
/* WARNING: Removing unreachable block (ram,0x00365170) */

void fn_00364e7c(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 *local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [16];
  uint local_38;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  local_4c = fn_006f7a9c(DAT_008977e0);
  local_58 = (undefined4 *)0x0;
  local_54 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)fn_001c6d34(auStack_48);
  puVar6 = local_54;
  uVar8 = ((int)local_54 - (int)local_58) / 0xc;
  if (uVar8 < 0x20) {
    iVar12 = 0x20 - uVar8;
    if (iVar12 != 0) {
      uVar8 = uVar8 + iVar12;
      if ((uint)(((int)local_50 - (int)local_58) / 0xc) < uVar8) {
        local_64 = uVar8;
        uVar1 = ((int)local_54 - (int)local_58) / 0xc;
        local_6c = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_6c < uVar1 + 0x20) {
          local_6c = uVar1 + 0x20;
        }
        puVar9 = &local_6c;
        if (local_6c <= uVar8) {
          puVar9 = &local_64;
        }
        local_38 = *puVar9;
        puVar5 = (undefined4 *)fn_00100fc6(local_38 * 0xc,0);
        puVar11 = puVar5;
        for (puVar4 = local_58; puVar4 != puVar6; puVar4 = puVar4 + 3) {
          if (puVar11 != (undefined4 *)0x0) {
            fn_001c6c38(puVar11,puVar4);
          }
          puVar11 = puVar11 + 3;
        }
        puVar11 = puVar5 + (((int)puVar6 - (int)local_58) / 0xc) * 3;
        puVar4 = local_54;
        for (iVar7 = iVar12; local_54 = puVar4, iVar7 != 0; iVar7 = iVar7 + -1) {
          if (puVar11 != (undefined4 *)0x0) {
            fn_001c6c38(puVar11,puVar3);
          }
          puVar11 = puVar11 + 3;
          puVar4 = local_54;
        }
        puVar3 = puVar5 + (((int)puVar6 - (int)local_58) / 0xc + iVar12) * 3;
        for (; puVar6 != puVar4; puVar6 = puVar6 + 3) {
          if (puVar3 != (undefined4 *)0x0) {
            fn_001c6c38(puVar3,puVar6);
          }
          puVar3 = puVar3 + 3;
        }
        iVar7 = (int)local_54 - (int)local_58;
        puVar6 = local_58;
        if (local_54 < local_58) {
          do {
            puVar6 = puVar6 + 3;
          } while (puVar6 != local_54);
        }
        fn_001008c4(local_58,((int)local_50 - (int)local_58) / 0xc,0);
        local_54 = puVar5 + (iVar7 / 0xc) * 3 + iVar12 * 3;
        local_50 = puVar5 + local_38 * 3;
        local_58 = puVar5;
      }
      else {
        puVar11 = local_54 + iVar12 * 3;
        if (puVar11 < local_54) {
          puVar4 = local_54 + iVar12 * -3;
          puVar2 = local_54 + iVar12 * 3;
          local_70 = puVar4;
          puVar5 = local_54;
          for (; local_54 = puVar2, puVar4 != puVar6; puVar4 = puVar4 + 3) {
            if (puVar5 != (undefined4 *)0x0) {
              fn_001c6c38(puVar5,puVar4);
            }
            puVar5 = puVar5 + 3;
            puVar2 = local_54;
          }
          puVar4 = puVar6;
          puVar5 = local_70;
          if (puVar6 < local_70) {
            if (0 < (int)local_70 - (int)puVar6) {
              uVar8 = ((int)local_70 - (int)puVar6) / 0xc;
              puVar4 = local_70;
              puVar5 = puVar6;
              if ((uVar8 & 1) != 0) {
                puVar4 = local_70 + -3;
                puVar5 = puVar6 + -3;
                uVar10 = local_70[-2];
                uVar13 = local_70[-1];
                *puVar5 = *puVar4;
                puVar6[-2] = uVar10;
                puVar6[-1] = uVar13;
              }
              for (iVar12 = (int)uVar8 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
                uVar10 = puVar4[-2];
                uVar13 = puVar4[-1];
                puVar5[-3] = puVar4[-3];
                puVar5[-2] = uVar10;
                puVar5[-1] = uVar13;
                uVar10 = puVar4[-5];
                uVar13 = puVar4[-4];
                puVar5[-6] = puVar4[-6];
                puVar5[-5] = uVar10;
                puVar5[-4] = uVar13;
                puVar4 = puVar4 + -6;
                puVar5 = puVar5 + -6;
              }
            }
          }
          else {
            while (puVar6 != puVar5) {
              uVar10 = puVar5[-2];
              uVar13 = puVar5[-1];
              puVar4[-3] = puVar5[-3];
              puVar4[-2] = uVar10;
              puVar4[-1] = uVar13;
              puVar4 = puVar4 + -3;
              puVar5 = puVar5 + -3;
            }
          }
          if (puVar6 < puVar11) {
            if (0 < (int)puVar11 - (int)puVar6) {
              uVar8 = ((int)puVar11 - (int)puVar6) / 0xc;
              puVar11 = puVar6;
              if ((uVar8 & 1) != 0) {
                uVar10 = puVar3[1];
                uVar13 = puVar3[2];
                puVar11 = puVar6 + 3;
                *puVar6 = *puVar3;
                puVar6[1] = uVar10;
                puVar6[2] = uVar13;
              }
              for (iVar12 = (int)uVar8 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
                uVar10 = puVar3[1];
                uVar13 = puVar3[2];
                *puVar11 = *puVar3;
                puVar11[1] = uVar10;
                puVar11[2] = uVar13;
                uVar10 = puVar3[1];
                uVar13 = puVar3[2];
                puVar11[3] = *puVar3;
                puVar11[4] = uVar10;
                puVar11[5] = uVar13;
                puVar11 = puVar11 + 6;
              }
            }
          }
          else {
            for (; puVar6 != puVar11; puVar6 = puVar6 + 3) {
              uVar10 = puVar3[1];
              uVar13 = puVar3[2];
              *puVar6 = *puVar3;
              puVar6[1] = uVar10;
              puVar6[2] = uVar13;
            }
          }
        }
        else {
          local_64 = 0;
          local_68 = 0;
          puVar11 = local_54 + iVar12 * 3;
          for (; local_54 = puVar11, iVar12 != 0; iVar12 = iVar12 + -1) {
            if (puVar6 != (undefined4 *)0x0) {
              fn_001c6c38(puVar6,puVar3);
            }
            puVar6 = puVar6 + 3;
            puVar11 = local_54;
          }
        }
      }
    }
  }
  else if ((0x20 < uVar8) && (puVar6 = local_58 + 0x60, local_58 != local_54)) {
    puVar3 = puVar6;
    if (local_54 < puVar6) {
      do {
        puVar3 = puVar3 + 3;
      } while (puVar3 != local_54);
    }
    local_54 = local_54 + (((int)local_54 - (int)puVar6) / 0xc) * -3;
  }
  local_80 = 0;
  uVar8 = 0;
  local_7c = 0;
  local_78 = 0;
  iVar12 = (int)local_54 - (int)local_58 >> 0x1f;
  if (((int)local_54 - (int)local_58) / 0xc + iVar12 != iVar12) {
    do {
      puVar6 = local_58 + uVar8 * 3;
      local_70 = (undefined4 *)&DAT_ffffffff;
      local_6c = 0xffffffff;
      local_68 = 0xffffffff;
      uVar8 = uVar8 + 1;
      *puVar6 = 0xffffffff;
      puVar6[1] = 0xffffffff;
      puVar6[2] = 0xffffffff;
    } while (uVar8 < (uint)(((int)local_54 - (int)local_58) / 0xc));
  }
  if (*(short *)(param_2 + 0x12) != -1) {
    fn_003b1ab8(*(undefined4 *)(param_1 + 0x28),(int)*(short *)(param_2 + 0x12),&local_80);
    uVar8 = 0;
    if ((int)(local_7c - local_80) >> 1 != 0) {
      do {
        iVar12 = fn_003b2730(*(undefined4 *)(param_1 + 0x28),(int)*(short *)(local_80 + uVar8 * 2))
        ;
        if (iVar12 != 0) {
          uVar10 = fn_002e9f54((int)*(short *)(iVar12 + 2));
          fn_00278ec8(&local_64,local_4c,(int)*(short *)(iVar12 + 4),local_28,uVar10,
                       (int)*(char *)(iVar12 + 0x3c));
          puVar9 = local_58 + uVar8 * 3;
          *puVar9 = local_64;
          puVar9[1] = uStack_60;
          puVar9[2] = uStack_5c;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((int)(local_7c - local_80) >> 1));
    }
    uVar8 = 0;
    if ((int)(local_7c - local_80) >> 1 != 0) {
      do {
        iVar12 = fn_003b2730(*(undefined4 *)(param_1 + 0x28),(int)*(short *)(local_80 + uVar8 * 2))
        ;
        if ((iVar12 != 0) && (iVar7 = fn_0013add0((int)*(short *)(iVar12 + 8)), iVar7 != 0)) {
          uVar10 = fn_002ea524((int)*(short *)(iVar12 + 8));
          iVar7 = fn_001a46f4();
          if ((iVar7 != 0) &&
             (iVar7 = fn_006cdec0(*(undefined4 *)(param_1 + 0xc),uVar10), iVar7 != 0)) {
            uVar13 = fn_002e9f54((int)*(short *)(iVar12 + 8));
            fn_00278ec8(&local_64,local_4c,uVar10,local_28,uVar13,(int)*(char *)(iVar12 + 0x3c));
            puVar9 = local_58 + (uVar8 + 0x10) * 3;
            *puVar9 = local_64;
            puVar9[1] = uStack_60;
            puVar9[2] = uStack_5c;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((int)(local_7c - local_80) >> 1));
    }
  }
  fn_002dfa58(*(undefined4 *)(param_2 + 8),&local_80,&local_58);
  uVar8 = local_80;
  if (local_7c < local_80) {
    do {
      uVar8 = uVar8 + 2;
    } while (uVar8 != local_7c);
  }
  fn_001008c4(local_80,(int)(local_78 - local_80) >> 1,0);
  puVar6 = local_58;
  if (local_54 < local_58) {
    do {
      puVar6 = puVar6 + 3;
    } while (puVar6 != local_54);
  }
  fn_001008c4(local_58,((int)local_50 - (int)local_58) / 0xc,0);
  return;
}


