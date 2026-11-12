#include "0056a850_0056b8b0.h"



undefined4 fn_0056b8b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0056b8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0);
    return uVar1;
  }
  if ((param_2 == 1 || param_2 == 2) || param_2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0056b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x30))(*(int **)(param_1 + 0xb0),param_2 + -1)
    ;
    return uVar1;
  }
  return 0;
}



void fn_0056b3ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  uint local_38;
  undefined4 local_2c;
  
  local_2c = fn_006e9c60(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2));
  iVar1 = fn_006ba284(param_1);
  local_4c = iVar1 * 9 & 0xff;
  local_38 = local_4c + 9 & 0xff;
  iVar1 = 0;
  do {
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    fn_00102908(&local_70,0x20,DAT_00893f14,iVar1);
    iVar2 = fn_00689210(*(undefined4 *)(param_1 + 0x70),&local_70);
    iVar1 = iVar1 + 1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  } while (iVar1 < 9);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



undefined4 *
fn_0056b240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_00397a0c(iVar1,param_1,param_3,param_4,unaff_r4);
  *puVar2 = &DAT_008406ac;
  puVar3 = (undefined4 *)fn_001f74ec(puVar2,0x6d);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00893fac) goto LAB_0056b88c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0056b88c:
  puVar2[0x39] = puVar3;
  return puVar2;
}



void fn_0056b1dc(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_0056b144(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint local_18;
  
  fn_002c34a4();
  iVar1 = fn_006ba284(param_1);
  uVar4 = param_2 + iVar1 * 9;
  piVar2 = (int *)fn_006e9c60(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2));
  iVar1 = *piVar2;
  iVar3 = piVar2[1];
  local_18 = param_4;
  if ((uint)(iVar3 - iVar1) <= uVar4) {
    fn_002ff628(9,&DAT_008c7601,&DAT_008c7601,uVar4);
    local_18 = iVar3 - iVar1;
  }
  fn_005dafac(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2),
               *(undefined1 *)(*piVar2 + uVar4),local_18);
  return;
}



undefined4 fn_0056af88(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined1 local_44;
  undefined1 local_42;
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [32];
  
  fn_00121838(DAT_00897800,DAT_0089878c,1);
  *(undefined1 *)(param_1 + 0xe2) = *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x18);
  uVar2 = fn_006e9c88();
  uVar2 = uVar2 & 0xff;
  uVar1 = fn_006e9d4c(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2));
  *(undefined1 *)(param_1 + 0xe8) = uVar1;
  fn_00345208(*(undefined4 *)(param_1 + 0xe4),1,*(undefined1 *)(param_1 + 0xe2));
  fn_00397774(&local_70);
  uVar3 = fn_0022f584(*(undefined4 *)(&DAT_00893f64 + (uint)*(byte *)(param_1 + 0xe2) * 4),0);
  fn_00147974(auStack_30,uVar3);
  local_70 = DAT_00893f08;
  local_6c = DAT_00893f0c;
  uVar3 = fn_0022f584(DAT_00893f10,0);
  fn_00147974(auStack_54,uVar3);
  local_5c = fn_006e9c94(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2));
  local_68 = local_5c;
  if (8 < local_5c) {
    local_68 = 9;
  }
  local_3c = 1;
  local_44 = 1;
  if (uVar2 == 0) {
    local_60 = 0;
    local_64 = 0;
  }
  else {
    local_64 = uVar2 % 9;
    local_60 = uVar2 / 9;
  }
  local_42 = 1;
  uVar3 = fn_0022f584(*(undefined4 *)(&DAT_00893f58 + (uint)*(byte *)(param_1 + 0xe2) * 4),0);
  fn_00147974(auStack_50,uVar3);
  uVar3 = fn_00397618(param_1,&local_70);
  fn_00100414(auStack_34,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_48);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x0056ab60) */
/* WARNING: Removing unreachable block (ram,0x0056abc0) */

undefined4 * fn_0056a8dc(undefined4 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined1 *unaff_r7;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint local_c4;
  uint local_c0 [2];
  undefined1 local_b8;
  undefined2 local_b6;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [104];
  int local_30;
  
  iVar4 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)fn_0028e264(iVar4,param_1);
  *puVar5 = &DAT_00840684;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 0;
  *(undefined1 *)((int)puVar5 + 0x15) = 0;
  local_b8 = 0;
  piVar13 = puVar5 + 2;
  local_b6 = 0;
  local_9c = 0;
  local_a0 = &DAT_008f9cf4;
  iVar4 = fn_0012f128(auStack_98);
  puVar15 = (undefined1 *)(iVar4 + -0x20);
  puVar12 = (undefined1 *)puVar5[3];
  puVar6 = (undefined1 *)*piVar13;
  uVar10 = ((int)puVar12 - (int)puVar6) / 0x88;
  if (uVar10 < 4) {
    iVar14 = 4 - uVar10;
    if (iVar14 != 0) {
      uVar10 = uVar10 + iVar14;
      if ((uint)((puVar5[4] - (int)puVar6) / 0x88) < uVar10) {
        local_c4 = uVar10;
        uVar1 = (puVar5[3] - *piVar13) / 0x88;
        local_c0[0] = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_c0[0] < uVar1 + 0x20) {
          local_c0[0] = uVar1 + 0x20;
        }
        puVar7 = local_c0;
        if (local_c0[0] <= uVar10) {
          puVar7 = &local_c4;
        }
        uVar10 = *puVar7;
        iVar8 = fn_00100fc6(uVar10 * 0x88,0);
        fn_007b5c70(*piVar13,puVar12,iVar8,piVar13);
        fn_007b6138(iVar8 + (((int)puVar12 - *piVar13) / 0x88) * 0x88,iVar14,puVar15,piVar13);
        fn_007b5c70(puVar12,puVar5[3],iVar8 + (((int)puVar12 - *piVar13) / 0x88 + iVar14) * 0x88,
                     piVar13);
        iVar4 = *piVar13;
        iVar16 = puVar5[3];
        local_30 = (iVar16 - iVar4) / 0x88;
        for (; iVar4 != iVar16; iVar4 = iVar4 + 0x88) {
          if (*(undefined4 **)(iVar4 + 0x18) != &DAT_008f9cf4) {
            piVar9 = *(undefined4 **)(iVar4 + 0x18) + -3;
            iVar11 = *piVar9;
            if ((iVar11 == -1) ||
               ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar11 + -1, iVar11 == 0)))) {
              fn_001008c4(*(int *)(iVar4 + 0x18) + -0xc,*(int *)(*(int *)(iVar4 + 0x18) + -8) + 8,0
                          );
            }
          }
        }
        fn_001008c4(*piVar13,(puVar5[4] - *piVar13) / 0x88,0);
        *piVar13 = iVar8;
        puVar5[3] = iVar8 + local_30 * 0x88 + iVar14 * 0x88;
        puVar5[4] = iVar8 + uVar10 * 0x88;
      }
      else {
        puVar6 = puVar12 + iVar14 * 0x88;
        puVar5[3] = puVar12 + iVar14 * 0x88;
        if (puVar6 < puVar12) {
          fn_007b5c70(puVar12 + iVar14 * -0x88,puVar12,puVar12,piVar13);
          puVar2 = puVar12;
          puVar3 = puVar12 + iVar14 * -0x88;
          while (puVar12 != puVar3) {
            puVar2[-0x88] = puVar3[-0x88];
            *(undefined2 *)(puVar2 + -0x86) = *(undefined2 *)(puVar3 + -0x86);
            fn_0017821c(puVar2 + -0x84,puVar3 + -0x84,0x12);
            fn_007854f8(puVar2 + -0x70,puVar3 + -0x70);
            *(undefined4 *)(puVar2 + -0x6c) = *(undefined4 *)(puVar3 + -0x6c);
            fn_0017821c(puVar2 + -0x68,puVar3 + -0x68,100);
            *(undefined2 *)(puVar2 + -4) = *(undefined2 *)(puVar3 + -4);
            puVar2 = puVar2 + -0x88;
            puVar3 = puVar3 + -0x88;
          }
          for (; puVar12 != puVar6; puVar12 = puVar12 + 0x88) {
            *puVar12 = *puVar15;
            *(undefined2 *)(puVar12 + 2) = *(undefined2 *)(iVar4 + -0x1e);
            fn_0017821c(puVar12 + 4,iVar4 + -0x1c,0x12);
            fn_007854f8(puVar12 + 0x18,iVar4 + -8);
            *(undefined4 *)(puVar12 + 0x1c) = *(undefined4 *)(iVar4 + -4);
            fn_0017821c(puVar12 + 0x20,iVar4,100);
            *(undefined2 *)(puVar12 + 0x84) = *(undefined2 *)(iVar4 + 100);
          }
        }
        else {
          fn_007b6138(puVar12,iVar14,puVar15,piVar13);
          fn_007b5c70(puVar12,puVar12,puVar6,piVar13);
        }
      }
    }
  }
  else {
    if (uVar10 != 4) {
      unaff_r7 = puVar6 + 0x220;
    }
    puVar15 = unaff_r7;
    if (uVar10 != 4 && puVar6 != puVar12) {
      for (; puVar15 != puVar12; puVar15 = puVar15 + 0x88) {
        if (*(undefined4 **)(puVar15 + 0x18) != &DAT_008f9cf4) {
          piVar13 = *(undefined4 **)(puVar15 + 0x18) + -3;
          iVar4 = *piVar13;
          if ((iVar4 == -1) || ((piVar13 != &DAT_008f9ce8 && (*piVar13 = iVar4 + -1, iVar4 == 0))))
          {
            fn_001008c4(*(int *)(puVar15 + 0x18) + -0xc,*(int *)(*(int *)(puVar15 + 0x18) + -8) + 8
                         ,0);
          }
        }
      }
      puVar5[3] = puVar5[3] + (((int)puVar12 - (int)unaff_r7) / 0x88) * -0x88;
    }
  }
  fn_001588d4(&local_a0);
  return puVar5;
}



void fn_0056a850(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (0 < param_3) {
    do {
      puVar2 = (undefined1 *)(param_2 + iVar3 * 0x88);
      puVar1 = (undefined1 *)(*(int *)(param_1 + 8) + iVar3 * 0x88);
      *puVar1 = *puVar2;
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
      fn_0017821c(puVar1 + 4,puVar2 + 4,0x12);
      fn_007854f8(puVar1 + 0x18,puVar2 + 0x18);
      *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(puVar2 + 0x1c);
      fn_0017821c(puVar1 + 0x20,puVar2 + 0x20,100);
      iVar3 = iVar3 + 1;
      *(undefined2 *)(puVar1 + 0x84) = *(undefined2 *)(puVar2 + 0x84);
    } while (iVar3 < param_3);
  }
  return;
}


