#include "00363594_00364500.h"



void fn_00364500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_158 [4];
  undefined4 local_154;
  undefined1 local_150;
  undefined1 local_14f;
  undefined4 local_14c;
  undefined2 local_148;
  uint local_140;
  undefined1 local_12c;
  undefined1 local_12b;
  
  iVar1 = fn_006f7508(DAT_008977e0);
  fn_003f2b10(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 4));
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    uVar4 = (uint)*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x19c) + 0x2a);
    if (uVar4 == 0xffffffff) {
      uVar4 = 0;
      iVar1 = fn_00163d44(0x1e);
      iVar2 = fn_00163868(100);
      iVar1 = iVar1 * 0x10;
      if (-1 < iVar2 - *(int *)(&DAT_007be438 + iVar1)) {
        iVar2 = (iVar2 - *(int *)(&DAT_007be438 + iVar1)) - *(int *)(&DAT_007be43c + iVar1);
        uVar4 = (uint)(iVar2 < 0);
        if (iVar2 >= 0) {
          if (iVar2 - *(int *)(&DAT_007be440 + iVar1) < 0) {
            uVar4 = 2;
          }
          else if ((iVar2 - *(int *)(&DAT_007be440 + iVar1)) - *(int *)(&DAT_007be444 + iVar1) < 0)
          {
            uVar4 = 3;
          }
        }
      }
    }
    *(uint *)(param_1 + 8) = uVar4;
  }
  fn_001cff74(auStack_158);
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  local_150 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
    local_150 = 0;
    if (iVar1 != 0) {
      local_150 = 1;
    }
  }
  iVar1 = fn_006afb24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  local_14f = 0;
  if (iVar1 != 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
    local_14f = 0;
    if (iVar1 != 0) {
      local_14f = 1;
    }
  }
  local_12b = fn_006b6398(*(undefined4 *)(DAT_00897804 + 8));
  fn_00363594(param_1,auStack_158);
  local_148 = fn_006c2fc4(param_1);
  fn_006f7a84(DAT_008977e0);
  local_154 = fn_006ab040();
  local_14c = 0x1000014;
  fn_006f7a0c(DAT_008977e0);
  iVar1 = fn_006f637c();
  if ((iVar1 == 0) || (*(char *)(*(int *)(param_1 + 4) + 0x36c) != '\0')) {
    local_140 = local_140 | 8;
  }
  iVar1 = fn_006f6fe8(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar1 != 0) {
    local_140 = local_140 | 0x11;
    local_14c = 0x1000015;
  }
  if (**(int **)(DAT_008977e0 + 0x40) != 0) {
    local_140 = local_140 | 0x1000;
  }
  iVar2 = *(int *)(DAT_008977e0 + 0xa8);
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31ac);
  if ((((iVar1 == iVar2) ||
       (iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31b4), iVar1 == iVar2)) ||
      (iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31bc), iVar1 == iVar2)) ||
     (iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006c31c4), iVar1 == iVar2)) {
    local_140 = local_140 | 0x40;
    local_12c = 2;
  }
  uVar3 = fn_00154ae0(DAT_008977e4);
  fn_001d1284(uVar3,auStack_158);
  fn_006952bc(DAT_008977e0);
  return;
}



void fn_00363594(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  undefined4 in_s0;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ushort *local_50;
  ushort *local_4c;
  int local_48;
  ushort local_44 [2];
  ushort local_40 [2];
  short local_3c [6];
  int local_30;
  int local_2c;
  
  local_44[0] = 0;
  local_40[0] = 0;
  iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x170);
  iVar14 = *(int *)(*(int *)(param_1 + 4) + 0x19c);
  sVar1 = *(short *)(iVar11 + 0xf4);
  uVar3 = fn_006f7508(DAT_008977e0);
  iVar4 = fn_006c3400(uVar3,(int)sVar1);
  if (iVar4 != 0) {
    fn_00144834((int)*(short *)(iVar11 + 0xf4),1);
  }
  local_4c = *(ushort **)(param_1 + 4);
  local_50 = local_40;
  uVar13 = *(ushort *)(param_1 + 8) + 1 & 0xffff;
  local_48 = 0;
  puVar8 = local_44;
  fn_003633a0(param_1,param_2,puVar8,uVar13);
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = 0;
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_3c[2] = 0;
    local_3c[3] = 0;
    local_3c[4] = 0;
    local_3c[5] = 0;
    do {
      iVar11 = iVar14 + iVar4 * 4;
      if ((*(short *)(iVar11 + 0xc) != 0) &&
         (iVar5 = fn_00163868(100), iVar5 < *(short *)(iVar11 + 0xe))) {
        local_4c = (ushort *)fn_00215e7c((int)*(short *)(iVar11 + 0xc));
        sVar1 = *(short *)(*(int *)(param_1 + 4) + 0x16a);
        iVar5 = fn_002ea524((int)*(short *)(iVar11 + 0xc));
        if (iVar5 == sVar1) {
          local_48 = (int)(short)*(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0);
        }
        else {
          if (0 < iVar4) {
            puVar8 = (ushort *)(int)*(short *)(iVar11 + 0xc);
          }
          iVar5 = 0;
          if (0 < iVar4) {
            do {
              if ((ushort *)(int)local_3c[iVar5 * 2] == puVar8) {
                local_48 = (int)local_3c[iVar5 * 2 + 1];
                goto LAB_003636f8;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar4);
          }
          sVar1 = *(short *)(iVar11 + 0xc);
          local_3c[iVar4 * 2] = sVar1;
          local_48 = fn_002aaac8((int)sVar1,0);
          local_3c[iVar4 * 2 + 1] = (short)local_48;
        }
LAB_003636f8:
        iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x1c4);
        if ((iVar5 == 0xf) &&
           (sVar1 = *(short *)(*(int *)(param_1 + 4) + 0x16a),
           iVar6 = fn_002ea524((int)*(short *)(iVar11 + 0xc)), sVar1 != iVar6)) {
          iVar5 = 0;
        }
        iVar6 = local_48;
        puVar10 = (ushort *)(int)*(short *)(iVar11 + 0xc);
        if (uVar13 <= local_44[0]) break;
        puVar8 = (ushort *)(uint)local_40[0];
        if ((int)(4 - (uint)(byte)(&DAT_007be488)[(int)local_4c * 4]) < (int)puVar8) break;
        local_40[0] = (byte)(&DAT_007be488)[(int)local_4c * 4] + local_40[0];
        iVar15 = param_2 + (uint)local_44[0] * 0x24;
        *(short *)(iVar15 + 0x30) = *(short *)(iVar11 + 0xc);
        local_50 = puVar10;
        local_4c = puVar10;
        uVar2 = fn_002ea524(puVar10);
        *(undefined2 *)(iVar15 + 0x32) = uVar2;
        fn_002cd56c(local_4c);
        *(undefined4 *)(iVar15 + 0x3c) = in_s0;
        *(short *)(iVar15 + 0x34) = (short)iVar5;
        *(undefined1 *)(iVar15 + 0x36) = 0;
        *(char *)(iVar15 + 0x37) = (char)iVar6;
        puVar8 = (ushort *)0x0;
        *(undefined2 *)(iVar15 + 0x38) = 0xffff;
        fn_002ea030(local_50,iVar15 + 0x40);
        local_44[0] = local_44[0] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    if (*(char *)(iVar14 + 0x1a) != '\0') {
      local_50 = (ushort *)0x0;
      local_4c = (ushort *)0x0;
      local_48 = 0;
      in_s0 = *(undefined4 *)(param_1 + 0x10);
      fn_00363d1c(param_1,*(int *)(param_1 + 4) + 0x20,&local_50);
      iVar11 = 0;
      iVar4 = (int)local_4c - (int)local_50 >> 2;
      if (0 < iVar4) {
        do {
          piVar12 = *(int **)(local_50 + iVar11 * 2);
          if ((((piVar12[2] != 2) ||
               (iVar5 = (**(code **)(*piVar12 + 0x70))(piVar12,2), iVar5 != 0x23)) &&
              (iVar5 = fn_006b06e8(piVar12), iVar5 != 0)) && ((char)piVar12[0xdb] == '\0')) {
            bVar16 = 0;
            bVar7 = 0;
            iVar6 = *(int *)(*(int *)(local_50 + iVar11 * 2) + 0x19c);
            iVar5 = 0;
            do {
              sVar1 = *(short *)(iVar14 + 0x1c + iVar5 * 2);
              if (sVar1 != 0) {
                bVar16 = 1;
                if ((((*(short *)(iVar6 + 0x22) != 0) &&
                     (bVar7 = 1, sVar1 == *(short *)(iVar6 + 0x22))) ||
                    ((*(short *)(iVar6 + 0x24) != 0 &&
                     (bVar7 = 1, sVar1 == *(short *)(iVar6 + 0x24))))) ||
                   ((*(short *)(iVar6 + 0x26) != 0 && (bVar7 = 1, sVar1 == *(short *)(iVar6 + 0x26))
                    ))) goto LAB_003638f0;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
            if (!(bool)(bVar16 & bVar7)) {
LAB_003638f0:
              iVar5 = fn_00163d44(0x1f);
              if (*(short *)(iVar14 + 0x18) <= iVar5) {
                iVar5 = *(int *)(param_1 + 4);
                iVar6 = *(int *)(local_50 + iVar11 * 2);
                local_2c = iVar6 + 0x100;
                bVar19 = *(short *)(iVar5 + 0x16a) == *(short *)(iVar6 + 0x16a);
                if (bVar19) {
                  iVar5 = *(int *)(iVar5 + 0x1d0);
                }
                if (bVar19) {
                  iVar5 = (int)(short)iVar5;
                }
                else {
                  iVar5 = 3;
                }
                if ((uVar13 <= local_44[0]) ||
                   ((int)(4 - (uint)(byte)(&DAT_007be488)[*(char *)(iVar6 + 0x1be) * 4]) <
                    (int)(uint)local_40[0])) break;
                local_40[0] = (byte)(&DAT_007be488)[*(char *)(iVar6 + 0x1be) * 4] + local_40[0];
                if (iVar5 == 0) {
                  iVar5 = *(int *)(iVar6 + 0x1d0);
                }
                iVar15 = param_2 + (uint)local_44[0] * 0x24;
                local_30 = iVar5;
                uVar2 = fn_006b09bc(iVar6);
                *(undefined2 *)(iVar15 + 0x30) = uVar2;
                *(undefined2 *)(iVar15 + 0x32) = *(undefined2 *)(local_2c + 0x6a);
                fn_006b0964(iVar6,1);
                *(undefined4 *)(iVar15 + 0x3c) = in_s0;
                *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(iVar6 + 0x1d4);
                *(undefined4 *)(iVar15 + 0x44) = *(undefined4 *)(iVar6 + 0x1d8);
                *(undefined4 *)(iVar15 + 0x48) = *(undefined4 *)(iVar6 + 0x1dc);
                *(undefined4 *)(iVar15 + 0x4c) = *(undefined4 *)(iVar6 + 0x1e0);
                *(undefined2 *)(iVar15 + 0x50) = *(undefined2 *)(iVar6 + 0x1e4);
                *(short *)(iVar15 + 0x34) = (short)*(undefined4 *)(iVar6 + 0x1c4);
                *(undefined1 *)(iVar15 + 0x36) = *(undefined1 *)(local_2c + 0x6d);
                *(char *)(iVar15 + 0x37) = (char)local_30;
                uVar2 = fn_006bb52c(*(undefined4 *)(iVar6 + 0x170));
                *(undefined2 *)(iVar15 + 0x38) = uVar2;
                bVar19 = false;
                iVar5 = -1;
                local_44[0] = local_44[0] + 1;
                iVar15 = 0;
                do {
                  iVar9 = (int)*(short *)(param_2 + iVar15 * 2 + 0xc0);
                  if (iVar9 == -1) {
                    if (iVar5 == -1) {
                      iVar5 = iVar15;
                    }
                  }
                  else if (iVar9 == *(int *)(*(int *)(iVar6 + 0x170) + 0xfc)) {
                    bVar19 = true;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 0x40);
                if (!bVar19) {
                  *(undefined2 *)(param_2 + iVar5 * 2 + 0xc0) =
                       *(undefined2 *)(*(int *)(iVar6 + 0x170) + 0xfc);
                }
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar4);
      }
      puVar8 = local_50;
      if (local_4c < local_50) {
        do {
          puVar8 = puVar8 + 2;
        } while (puVar8 != local_4c);
      }
      puVar8 = (ushort *)0x0;
      fn_001008c4(local_50,local_48 - (int)local_50 >> 2);
    }
    if ((*(char *)(iVar14 + 0x28) != '\0') && (*(char *)(*(int *)(param_1 + 4) + 0x36c) == '\0')) {
      iVar4 = 0;
      do {
        iVar11 = *(int *)(param_1 + 4);
        if (uVar13 <= local_44[0]) break;
        puVar8 = (ushort *)(uint)local_40[0];
        if ((int)(4 - (uint)(byte)(&DAT_007be488)[*(char *)(iVar11 + 0x1be) * 4]) < (int)puVar8)
        break;
        local_40[0] = (byte)(&DAT_007be488)[*(char *)(iVar11 + 0x1be) * 4] + local_40[0];
        iVar14 = param_2 + (uint)local_44[0] * 0x24;
        uVar2 = fn_006b09bc(iVar11);
        *(undefined2 *)(iVar14 + 0x30) = uVar2;
        *(undefined2 *)(iVar14 + 0x32) = *(undefined2 *)(iVar11 + 0x16a);
        fn_006b0964(iVar11,1);
        *(undefined4 *)(iVar14 + 0x3c) = in_s0;
        *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(iVar11 + 0x1d4);
        *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(iVar11 + 0x1d8);
        *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(iVar11 + 0x1dc);
        *(undefined4 *)(iVar14 + 0x4c) = *(undefined4 *)(iVar11 + 0x1e0);
        *(undefined2 *)(iVar14 + 0x50) = *(undefined2 *)(iVar11 + 0x1e4);
        *(short *)(iVar14 + 0x34) = (short)*(undefined4 *)(iVar11 + 0x1c4);
        *(undefined1 *)(iVar14 + 0x36) = *(undefined1 *)(iVar11 + 0x16d);
        *(undefined1 *)(iVar14 + 0x37) = 0;
        uVar2 = fn_006bb52c(*(undefined4 *)(iVar11 + 0x170));
        *(undefined2 *)(iVar14 + 0x38) = uVar2;
        iVar4 = iVar4 + 1;
        local_44[0] = local_44[0] + 1;
      } while (iVar4 < 4);
    }
  }
  iVar14 = *(int *)(*(int *)(param_1 + 4) + 0x19c);
  iVar11 = (int)*(char *)(iVar14 + 0x29);
  bVar19 = iVar11 == -1;
  iVar4 = iVar11 + 1;
  if (!bVar19) {
    iVar4 = iVar11;
  }
  bVar18 = bVar19 && SCARRY4(iVar11,1);
  if (!bVar19 && iVar11 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x34);
    uVar17 = *(undefined4 *)(param_2 + 0x38);
    if (iVar4 < 0 == bVar18) {
      puVar8 = (ushort *)0x0;
    }
    uVar23 = *(undefined4 *)(param_2 + 0x30);
    uVar24 = *(undefined4 *)(param_2 + 0x44);
    uVar26 = *(undefined4 *)(param_2 + 0x48);
    uVar20 = *(undefined4 *)(param_2 + 0x4c);
    uVar25 = *(undefined4 *)(param_2 + 0x50);
    uVar21 = *(undefined4 *)(param_2 + 0x3c);
    uVar22 = *(undefined4 *)(param_2 + 0x40);
    if (iVar4 < 0 == bVar18) {
      do {
        iVar11 = iVar11 + -1;
        iVar4 = param_2 + (int)puVar8 * 0x24;
        puVar8 = (ushort *)((int)puVar8 + 1);
        *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar4 + 0x54);
        *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar4 + 0x58);
        *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar4 + 0x5c);
        *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(iVar4 + 0x60);
        *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 100);
        *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x68);
        *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x6c);
        *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x70);
        *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar4 + 0x74);
      } while (iVar11 != 0);
    }
    param_2 = param_2 + *(char *)(iVar14 + 0x29) * 0x24;
    *(undefined4 *)(param_2 + 0x30) = uVar23;
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    *(undefined4 *)(param_2 + 0x38) = uVar17;
    *(undefined4 *)(param_2 + 0x44) = uVar24;
    *(undefined4 *)(param_2 + 0x48) = uVar26;
    *(undefined4 *)(param_2 + 0x4c) = uVar20;
    *(undefined4 *)(param_2 + 0x50) = uVar25;
    *(undefined4 *)(param_2 + 0x3c) = uVar21;
    *(undefined4 *)(param_2 + 0x40) = uVar22;
  }
  return;
}


