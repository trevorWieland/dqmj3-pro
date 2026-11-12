#include "0069a028_0069a700.h"



undefined4 fn_0069a700(int param_1,code *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 *local_5c;
  undefined1 auStack_58 [32];
  uint local_38;
  int iStack_2c;
  code *local_28;
  
  uVar5 = 0;
  iStack_2c = param_1;
  local_28 = param_2;
  if ((DAT_008917b0 & 1) == 0) {
    uVar12 = fn_00303afc(&DAT_008917b0);
    param_2 = (code *)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      param_2 = fn_007568c0;
      DAT_008c8d60 = 0;
      DAT_008c8d64 = 0;
      DAT_008c8d68 = 0;
      DAT_008c8d6c = 0;
    }
  }
  if (((DAT_008c8d6c & 0x3fffffff) != 0) || ((DAT_008c8d6c & 0xc0000000) == 0x40000000)) {
    fn_00128f40(auStack_58,param_2);
    uVar5 = fn_005f6c88(auStack_58,DAT_008c8d64,DAT_008c8d68 - DAT_008c8d64);
    iVar1 = fn_005f6e60(auStack_58,local_28);
    if (iVar1 != 0) {
      iVar1 = fn_005f6ce8(auStack_58,local_28);
      iVar4 = 0;
      if (0 < iVar1 / 0xd) {
        do {
          local_d0 = 0;
          local_cc = 0;
          local_c8 = 0;
          local_c4 = 0;
          local_c0 = 0;
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          iVar10 = 0;
          do {
            iVar11 = iVar10 + 1;
            *(undefined4 *)(local_ac + iVar10 * 8 + -4) = 0xffffffff;
            local_ac[iVar10 * 8] = 0;
            local_a0[iVar10 * 2] = 0xffffffff;
            local_a0[iVar10 * 2 + 1] = 0xffffffff;
            local_90 = 0xffffffff;
            local_88 = 0;
            local_8c = 0xffffffff;
            local_84 = 0;
            local_80 = 0;
            local_7c = 0;
            local_78 = 0;
            local_74 = 0;
            local_70 = 0;
            local_6c = 0;
            local_68 = 0;
            iVar10 = iVar11;
          } while (iVar11 < 2);
          iVar10 = iVar4 * 0xd;
          uVar5 = fn_00128eac(auStack_58,local_28,iVar10);
          fn_001782b8(&local_d0,uVar5,0x1f);
          local_b0 = fn_00128e7c(auStack_58,local_28,iVar10 + 1);
          local_ac[0] = fn_005f6d74(auStack_58,local_28,iVar10 + 2);
          local_a8 = fn_00128e7c(auStack_58,local_28,iVar10 + 3);
          local_a4 = fn_005f6d74(auStack_58,local_28,iVar10 + 4);
          local_a0[0] = fn_00128e7c(auStack_58,local_28,iVar10 + 5);
          local_a0[1] = fn_00128e7c(auStack_58,local_28,iVar10 + 6);
          local_a0[2] = fn_00128e7c(auStack_58,local_28,iVar10 + 7);
          local_a0[3] = fn_00128e7c(auStack_58,local_28,iVar10 + 8);
          local_90 = fn_00128e7c(auStack_58,local_28,iVar10 + 9);
          local_8c = fn_00128e7c(auStack_58,local_28,iVar10 + 10);
          local_68 = fn_005f6d74(auStack_58,local_28,iVar10 + 0xb);
          uVar5 = fn_00128eac(auStack_58,local_28,iVar10 + 0xc);
          fn_001782b8(local_a0 + 6,uVar5,0x1f);
          uVar2 = *(uint *)(param_1 + 8);
          puVar8 = (uint *)(param_1 + 4);
          if (uVar2 == *(uint *)(param_1 + 0xc)) {
            uVar9 = (int)(uVar2 - *puVar8) / 0x6c;
            if (uVar9 < (uint)((int)(*(uint *)(param_1 + 0xc) - *puVar8) / 0x6c)) {
              *(uint *)(param_1 + 8) = uVar2 + 0x6c;
              local_5c = (undefined1 *)&local_d0;
              if (uVar2 != 0) {
                local_5c = (undefined1 *)&local_d0;
                fn_0017821c(uVar2,uVar2 - 0x6c,0x6c);
              }
              uVar9 = uVar2 - 0x6c;
              uVar7 = uVar2;
              if (uVar2 < uVar9) {
                if (0 < (int)(uVar9 - uVar2)) {
                  uVar7 = (int)(uVar9 - uVar2) / 0x6c;
                  uVar6 = uVar2;
                  if ((uVar7 & 1) != 0) {
                    uVar9 = uVar2 - 0xd8;
                    uVar6 = uVar2 - 0x6c;
                    fn_0017821c(uVar6,uVar9,0x6c);
                  }
                  for (iVar10 = (int)uVar7 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
                    fn_0017821c(uVar6 - 0x6c,uVar9 - 0x6c,0x6c);
                    uVar9 = uVar9 - 0xd8;
                    uVar6 = uVar6 - 0xd8;
                    fn_0017821c(uVar6,uVar9,0x6c);
                  }
                }
              }
              else {
                while (uVar2 != uVar9) {
                  uVar9 = uVar9 - 0x6c;
                  fn_0017821c(uVar7 - 0x6c,uVar9,0x6c);
                  uVar7 = uVar7 - 0x6c;
                }
              }
              puVar3 = (undefined4 *)local_5c;
              goto LAB_0069aab4;
            }
            local_38 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
            if (local_38 < uVar9 + 0x20) {
              local_38 = uVar9 + 0x20;
            }
            local_5c = (undefined1 *)&local_d0;
            uVar6 = fn_00100fc6(local_38 * 0x6c,0);
            uVar7 = uVar6;
            for (uVar9 = *puVar8; uVar9 != uVar2; uVar9 = uVar9 + 0x6c) {
              if (uVar7 != 0) {
                fn_0017821c(uVar7,uVar9,0x6c);
              }
              uVar7 = uVar7 + 0x6c;
            }
            iVar10 = uVar6 + ((int)(uVar2 - *puVar8) / 0x6c) * 0x6c;
            if (iVar10 != 0) {
              fn_0017821c(iVar10,local_5c);
            }
            uVar9 = *(uint *)(param_1 + 8);
            iVar10 = uVar6 + ((int)(uVar2 - *puVar8) / 0x6c) * 0x6c;
            for (; uVar2 != uVar9; uVar2 = uVar2 + 0x6c) {
              iVar10 = iVar10 + 0x6c;
              if (iVar10 != 0) {
                fn_0017821c(iVar10,uVar2,0x6c);
              }
            }
            uVar9 = *puVar8;
            uVar7 = *(uint *)(param_1 + 8);
            uVar2 = uVar9;
            if (uVar7 < uVar9) {
              do {
                uVar2 = uVar2 + 0x6c;
              } while (uVar2 != uVar7);
            }
            fn_001008c4(uVar9,(int)(*(int *)(param_1 + 0xc) - uVar9) / 0x6c,0);
            *puVar8 = uVar6;
            *(uint *)(param_1 + 8) = uVar6 + ((int)(uVar7 - uVar9) / 0x6c) * 0x6c + 0x6c;
            *(uint *)(param_1 + 0xc) = uVar6 + local_38 * 0x6c;
          }
          else {
            *(uint *)(param_1 + 8) = uVar2 + 0x6c;
            puVar3 = &local_d0;
            if (uVar2 != 0) {
LAB_0069aab4:
              fn_0017821c(uVar2,puVar3,0x6c);
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1 / 0xd);
      }
      uVar5 = 1;
    }
    fn_00128fc4(auStack_58);
  }
  return uVar5;
}



/* WARNING: Removing unreachable block (ram,0x0069a5d8) */
/* WARNING: Removing unreachable block (ram,0x0069a5dc) */
/* WARNING: Removing unreachable block (ram,0x0069a5e0) */
/* WARNING: Removing unreachable block (ram,0x0069a5e4) */
/* WARNING: Removing unreachable block (ram,0x0069a5e8) */
/* WARNING: Removing unreachable block (ram,0x0069a5d0) */
/* WARNING: Removing unreachable block (ram,0x0069a5cc) */
/* WARNING: Removing unreachable block (ram,0x0069a5a4) */
/* WARNING: Removing unreachable block (ram,0x0069a5c4) */
/* WARNING: Removing unreachable block (ram,0x0069a5d4) */
/* WARNING: Removing unreachable block (ram,0x0069a5f4) */
/* WARNING: Removing unreachable block (ram,0x0069a5fc) */
/* WARNING: Removing unreachable block (ram,0x0069a610) */
/* WARNING: Removing unreachable block (ram,0x0069a6cc) */

void fn_0069a418(undefined4 param_1,code *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 uStack00000000;
  int *local_40;
  int local_3c;
  undefined1 auStack_30 [12];
  
  if ((DAT_008917b0 & 1) == 0) {
    uVar9 = fn_00303afc(&DAT_008917b0);
    param_2 = (code *)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      param_2 = fn_007568c0;
      DAT_008c8d60 = (int *)0x0;
      DAT_008c8d64 = 0;
      DAT_008c8d68 = 0;
      DAT_008c8d6c = 0;
    }
  }
  if (((DAT_008c8d6c & 0x3fffffff) != 0) || ((DAT_008c8d6c & 0xc0000000) == 0x40000000)) {
    DAT_008917a8 = DAT_008917a8 + 1;
    return;
  }
  uVar1 = fn_001287b4(DAT_008c8d6c & 0xc0000000,param_2);
  iVar2 = fn_0011c184(DAT_008917ac,uVar1,0x80,5);
  if ((iVar2 == 0) || (iVar3 = fn_00145ac0(), iVar3 == 0)) {
    fn_0012d73c(iVar2);
    return;
  }
  fn_00128f40(auStack_30);
  uVar1 = fn_0012a26c(iVar2);
  uVar4 = fn_00145ac0(iVar2);
  fn_00128ee0(auStack_30,uVar4,uVar1);
  fn_0012d73c(iVar2);
  uVar5 = fn_005f6e14(auStack_30);
  piVar6 = (int *)fn_00118290();
  if (uVar5 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar6 + 8))(piVar6,uVar5,0x20);
  }
  uVar8 = uVar5 & 0x3fffffff;
  uVar7 = uVar5;
  if ((int)uVar5 < 0) {
    if ((int)uVar5 < 0) {
      uVar7 = 0;
    }
  }
  else if ((int)uVar8 < (int)uVar5) {
    uVar7 = uVar8;
  }
  fn_005f6e6c(auStack_30,iVar2,uVar5);
  local_40 = piVar6;
  local_3c = iVar2;
  if ((undefined4 *)&uStack00000000 != &DAT_008c8da0) {
    local_3c = DAT_008c8d64;
    local_40 = DAT_008c8d60;
    DAT_008c8d60 = piVar6;
    DAT_008c8d64 = iVar2;
    DAT_008c8d68 = uVar7 + iVar2;
    DAT_008c8d6c = uVar8;
  }
  iVar2 = 0;
  if (local_40 != (int *)0x0) {
    iVar2 = local_3c;
  }
  if (local_40 != (int *)0x0 && iVar2 != 0) {
    (**(code **)(*local_40 + 0xc))(local_40,local_3c);
  }
  DAT_008917a8 = 1;
  fn_00128fc4(auStack_30);
  return;
}



void fn_0069a318(void)

{
  int iVar1;
  undefined1 uStack00000000;
  int *local_20;
  int local_1c;
  
  if (DAT_008917a8 < 1) {
    return;
  }
  DAT_008917a8 = DAT_008917a8 + -1;
  if (DAT_008917a8 != 0) {
    return;
  }
  local_20 = (int *)0x0;
  local_1c = 0;
  if (((DAT_008917b0 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008917b0), iVar1 != 0)) {
    DAT_008c8d60 = (int *)0x0;
    DAT_008c8d64 = 0;
    DAT_008c8d68 = 0;
    DAT_008c8d6c = 0;
  }
  if ((undefined4 *)&uStack00000000 != &DAT_008c8d80) {
    local_1c = DAT_008c8d64;
    local_20 = DAT_008c8d60;
    DAT_008c8d60 = (int *)0x0;
    DAT_008c8d64 = 0;
    DAT_008c8d68 = 0;
    DAT_008c8d6c = 0;
  }
  iVar1 = 0;
  if (local_20 != (int *)0x0) {
    iVar1 = local_1c;
  }
  if (local_20 != (int *)0x0 && iVar1 != 0) {
    (**(code **)(*local_20 + 0xc))(local_20,local_1c);
  }
  return;
}



void fn_0069a028(undefined4 *param_1)

{
  *param_1 = &DAT_0085139c;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


