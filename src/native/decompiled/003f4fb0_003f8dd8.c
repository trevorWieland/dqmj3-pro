#include "003f4fb0_003f8dd8.h"



void fn_003f8dd8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0xf4) != '\x01') {
    return;
  }
  uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0xd8) + 0x3c);
  uVar1 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  if (uVar7 != 0) {
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x1c) + 0xb);
    iVar2 = fn_0034514c(uVar5);
    iVar3 = fn_0034514c(uVar7);
    uVar6 = uVar5;
    if (uVar7 < uVar5) {
      uVar6 = (uint)(iVar2 - iVar3) >> 1;
    }
    if (uVar5 < uVar7) {
      uVar6 = iVar3 - iVar2;
    }
    if (uVar5 != uVar7) goto LAB_003f8e54;
  }
  uVar6 = 0;
LAB_003f8e54:
  if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  *(undefined1 *)(param_1 + 0xf4) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
  uVar4 = fn_0022eefc(0x391,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 fn_003f874c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  uint *puVar19;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [8];
  undefined1 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_4d;
  undefined1 local_4c [20];
  undefined1 auStack_38 [4];
  undefined1 local_34;
  uint local_30;
  uint local_2c [2];
  
  puVar5 = &local_88;
  puVar17 = *(undefined4 **)(param_1 + 0x18);
  if (puVar17 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar17)(puVar17);
    do {
      if (puVar1 == &DAT_00894004) goto LAB_003f8798;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar17 = (undefined4 *)0x0;
LAB_003f8798:
  *(undefined4 **)(param_1 + 0xd0) = puVar17;
  fn_00121838(DAT_00897800,DAT_0089878c,1);
  fn_00121838(DAT_00897800,DAT_00898794,1);
  local_30 = fn_00344f8c();
  fn_00397b18(&local_80);
  local_80 = DAT_00894008;
  local_7c = DAT_0089400c;
  uVar2 = fn_0022f750((char *)&DAT_003f8b14);
  fn_00147974(auStack_64,uVar2);
  local_6c = local_30;
  puVar19 = &DAT_007c6d94;
  if ((int)local_30 < 9) {
    puVar19 = &local_30;
  }
  local_78 = *puVar19;
  local_4c[0] = 1;
  uVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  fn_00344bf8(local_4c,uVar2,1);
  fn_00345098(local_4c,0);
  local_34 = 1;
  local_54 = 8 < (int)local_30;
  local_74 = *(int *)(*(int *)(param_1 + 0xd0) + 8) % 8;
  iVar3 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
  local_52 = 1;
  local_70 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1d)) >> 3;
  uVar2 = fn_0022f750((char *)&DAT_003f8b24);
  fn_00147974(auStack_60,uVar2);
  local_51 = 1;
  local_4d = 0;
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0xd0) + 0xc);
  *(uint *)(param_1 + 0xdc) = uVar4;
  uVar2 = fn_00231cb8((&DAT_007c6d9c)[uVar4]);
  fn_00147974(auStack_5c,uVar2);
  local_68 = 0x42f40000;
  iVar3 = fn_006896fc(param_1,0x3e);
  if (iVar3 == 0) {
    fn_00689930(param_1,0x3e,0);
  }
  local_84 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar3 = fn_006b2a40();
  puVar19 = (uint *)(param_1 + 0xe4);
  local_2c[0] = local_30;
  if (0x3fffffff < local_30) {
    local_88 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7673);
  }
  if ((uint)((int)(*(int *)(param_1 + 0xec) - *puVar19) >> 2) < local_2c[0]) {
    uVar4 = (int)(*(int *)(param_1 + 0xe8) - *puVar19) >> 2;
    local_88 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (local_88 < uVar4 + 0x20) {
      local_88 = uVar4 + 0x20;
    }
    if (local_88 <= local_2c[0]) {
      puVar5 = local_2c;
    }
    uVar4 = *puVar5;
    puVar6 = (undefined4 *)fn_00100fc6(uVar4 << 2,0);
    puVar16 = *(undefined4 **)(param_1 + 0xe8);
    puVar1 = puVar6;
    for (puVar17 = (undefined4 *)*puVar19; puVar17 != puVar16; puVar17 = puVar17 + 1) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar17;
      }
      puVar1 = puVar1 + 1;
    }
    uVar7 = *puVar19;
    uVar8 = uVar7;
    if (*(uint *)(param_1 + 0xe8) < uVar7) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != *(uint *)(param_1 + 0xe8));
    }
    fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xec) - uVar7) >> 2,0);
    uVar8 = *puVar19;
    *puVar19 = (uint)puVar6;
    *(uint *)(param_1 + 0xe8) = (*(int *)(param_1 + 0xe8) - uVar8 & 0xfffffffc) + (int)puVar6;
    *(undefined4 **)(param_1 + 0xec) = puVar6 + uVar4;
  }
  puVar5 = (uint *)(param_1 + 0xe4);
  iVar18 = 0;
  if (0 < iVar3) {
    do {
      local_88 = fn_006b2948(local_84,iVar18);
      iVar9 = fn_006b2a74(local_84,local_88);
      if ((iVar9 != 0) && (*(char *)(iVar9 + 4) == '\x03')) {
        puVar19 = *(uint **)(param_1 + 0xe8);
        if (puVar19 == *(uint **)(param_1 + 0xec)) {
          uVar4 = (int)((int)puVar19 - *puVar5) >> 2;
          if (uVar4 < (uint)((int)((int)*(uint **)(param_1 + 0xec) - *puVar5) >> 2)) {
            *(uint **)(param_1 + 0xe8) = puVar19 + 1;
            if (puVar19 != (uint *)0x0) {
              *puVar19 = puVar19[-1];
            }
            puVar13 = puVar19 + -1;
            puVar14 = puVar19;
            if (puVar19 < puVar13) {
              iVar9 = (int)puVar13 - (int)puVar19;
              if (0 < iVar9) {
                if (iVar9 * 0x20000000 < 0) {
                  puVar13 = puVar19 + -2;
                  puVar14 = puVar19 + -1;
                  *puVar14 = *puVar13;
                }
                for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
                  puVar14[-1] = puVar13[-1];
                  puVar13 = puVar13 + -2;
                  puVar14 = puVar14 + -2;
                  *puVar14 = *puVar13;
                }
              }
            }
            else {
              while (puVar19 != puVar13) {
                puVar13 = puVar13 + -1;
                puVar14[-1] = *puVar13;
                puVar14 = puVar14 + -1;
              }
            }
            *puVar19 = local_88;
          }
          else {
            local_2c[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (local_2c[0] < uVar4 + 0x20) {
              local_2c[0] = uVar4 + 0x20;
            }
            puVar10 = (uint *)fn_00100fc6(local_2c[0] << 2,0);
            puVar14 = puVar10;
            for (puVar13 = (uint *)*puVar5; puVar13 != puVar19; puVar13 = puVar13 + 1) {
              if (puVar14 != (uint *)0x0) {
                *puVar14 = *puVar13;
              }
              puVar14 = puVar14 + 1;
            }
            puVar13 = (uint *)(((int)puVar19 - *puVar5 & 0xfffffffc) + (int)puVar10);
            if (puVar13 != (uint *)0x0) {
              *puVar13 = local_88;
            }
            puVar14 = *(uint **)(param_1 + 0xe8);
            puVar13 = (uint *)(((int)puVar19 - *puVar5 & 0xfffffffc) + (int)puVar10);
            for (; puVar19 != puVar14; puVar19 = puVar19 + 1) {
              puVar13 = puVar13 + 1;
              if (puVar13 != (uint *)0x0) {
                *puVar13 = *puVar19;
              }
            }
            uVar8 = *(uint *)(param_1 + 0xe8);
            uVar7 = *puVar5;
            uVar4 = uVar7;
            if (uVar8 <= uVar7) {
              for (; uVar4 != uVar8; uVar4 = uVar4 + 4) {
              }
            }
            fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xec) - uVar7) >> 2,0);
            *(uint **)(param_1 + 0xec) = puVar10 + local_2c[0];
            *(uint **)(param_1 + 0xe8) = puVar10 + ((int)(uVar8 - uVar7) >> 2) + 1;
            *puVar5 = (uint)puVar10;
          }
        }
        else {
          *(uint **)(param_1 + 0xe8) = puVar19 + 1;
          if (puVar19 != (uint *)0x0) {
            *puVar19 = local_88;
          }
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar3);
  }
  fn_0022e468(param_1 + 0xe4,*(undefined1 *)(param_1 + 0xdc));
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar2 = fn_00231cb8((&DAT_007c6d9c)[*(int *)(param_1 + 0xdc)]);
    fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar2);
  }
  uVar2 = fn_00397a98(param_1,&local_80);
  uVar11 = fn_00231cb8((&DAT_007c6d9c)[*(int *)(param_1 + 0xdc)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar11);
  iVar3 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar12 = (int *)0x0;
  if (iVar3 != 0) {
    piVar12 = (int *)fn_00327fb4(iVar3,*(undefined4 *)(param_1 + 4),0);
  }
  piVar15 = *(int **)(param_1 + 0xd8);
  if (piVar15 != piVar12) {
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 4))(piVar15);
    }
    *(int **)(param_1 + 0xd8) = piVar12;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x30) = *(undefined4 *)(param_1 + 0x70);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x10))
            (*(int **)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x48));
  iVar3 = fn_001588d4(auStack_38);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -0x10);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return uVar2;
}



void fn_003f7f24(int param_1,int param_2)

{
  undefined1 uVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = fn_006b630c(*(undefined4 *)(DAT_00897804 + 8),bVar2);
    }
    *(undefined1 *)((char)bVar2 + param_1 + 0x25) = uVar1;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_003f4fc8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
  iVar1 = DAT_008977e0;
  piVar2 = *(int **)(DAT_008977e0 + 0x50);
  *(int **)(DAT_008977e0 + 0x180) = piVar2;
  *(code **)(iVar1 + 0x178) = fn_006966bc;
  *(undefined4 *)(iVar1 + 0x17c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00697f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}



void fn_003f4fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
  iVar1 = DAT_008977e0;
  piVar2 = *(int **)(DAT_008977e0 + 0x50);
  *(int **)(DAT_008977e0 + 0x180) = piVar2;
  *(code **)(iVar1 + 0x178) = fn_006966bc;
  *(undefined4 *)(iVar1 + 0x17c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00697f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}


