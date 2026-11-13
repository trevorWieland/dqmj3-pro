#include "00488e74_00489a74.h"



undefined4 * fn_00489a74(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  
  *param_1 = &DAT_00853a50;
  param_1[1] = &DAT_00855a94;
  uVar1 = fn_0015e6f0(param_1 + 2,*(undefined4 *)(param_2 + 4),&DAT_00855a94,param_4,param_4);
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = uVar1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(0x300);
  piVar2[2] = iVar3;
  *piVar2 = param_1[3];
  piVar2[1] = 0x20;
  param_1[3] = piVar2;
  puVar4 = (undefined1 *)piVar2[2];
  param_1[5] = puVar4;
  param_1[6] = puVar4 + 0x300;
  param_1[5] = puVar4 + 0x18;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  param_1[7] = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(param_1[7] + 8) = param_1[7];
  *(undefined4 *)(param_1[7] + 0xc) = param_1[7];
  return param_1;
}



void fn_004899e0(undefined4 param_1)

{
  int *piVar1;
  undefined1 auStack_18 [8];
  
  (**(code **)(DAT_008e69b0 + 8))();
  while (piVar1 = (int *)**(int **)(DAT_008aec6c + 0x10), piVar1 != *(int **)(DAT_008aec6c + 0x10))
  {
    (**(code **)(*(int *)piVar1[2] + 0xc))(auStack_18);
    fn_004898d8(param_1,auStack_18);
    fn_00170f54(auStack_18);
  }
                    /* WARNING: Could not recover jumptable at 0x00489a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
  return;
}



undefined4 fn_004898d8(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  (**(code **)(DAT_008e69b0 + 8))();
  piVar2 = (int *)**(undefined4 **)(DAT_008aec6c + 0x10);
  while( true ) {
    if (piVar2 == *(int **)(DAT_008aec6c + 0x10)) {
      (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
      return 0;
    }
    (**(code **)(*(int *)piVar2[2] + 0xc))(auStack_20);
    iVar1 = fn_004b626c(local_1c,*(undefined4 *)(param_2 + 4));
    fn_00170f54(auStack_20);
    if (iVar1 != 0) break;
    piVar2 = (int *)*piVar2;
  }
  if ((int *)piVar2[2] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[2] + 4))();
  }
  iVar1 = DAT_008aec6c;
  if (piVar2 != *(int **)(DAT_008aec6c + 0x10)) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    *piVar2 = *(int *)(iVar1 + 4);
    *(int **)(iVar1 + 4) = piVar2;
  }
  (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
  return 1;
}



int fn_004894d4(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  (**(code **)(DAT_008e69b0 + 8))();
  if (DAT_008aec74 == 0) {
    piVar1 = (int *)fn_0015ecdc(0x18);
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(0xc);
      piVar2[2] = iVar3;
      *piVar2 = *piVar1;
      piVar2[1] = 1;
      *piVar1 = (int)piVar2;
      iVar3 = piVar2[2];
      piVar1[2] = iVar3;
      piVar1[3] = iVar3 + 0xc;
      iVar3 = piVar1[2];
      piVar1[4] = iVar3;
      piVar1[2] = iVar3 + 0xc;
      *(int *)iVar3 = iVar3;
      *(int *)(piVar1[4] + 4) = piVar1[4];
    }
    DAT_008aec6c = piVar1;
  }
  DAT_008c3dd0 = &DAT_008aec70;
  iVar3 = DAT_008aec74 + 1;
  DAT_008aec74 = iVar3;
  (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
  return iVar3;
}



void fn_00488e74(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined *local_d0;
  char local_cc [4];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 auStack_a0 [8];
  int local_98;
  int local_94;
  int local_90;
  undefined1 auStack_88 [12];
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  int local_54;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  *(undefined1 *)(param_2 + 4) = 0;
  local_4c = (uint)*(char *)(param_1 + 0x3b);
  local_6c = 0;
  if (((local_4c != 0) ||
      ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_6c), *(char *)(param_1 + 4) == '\0')))) &&
     (local_68 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) {
    puVar7 = *(undefined4 **)(param_2 + 0xc);
    puVar11 = *(undefined4 **)(param_2 + 8);
    piVar10 = (int *)(param_2 + 8);
    puVar6 = puVar11;
    if (puVar11 != puVar7) {
      do {
        (**(code **)*puVar6)(puVar6);
        puVar6 = puVar6 + 0x14;
      } while (puVar6 != puVar7);
      *(int *)(param_2 + 0xc) =
           *(int *)(param_2 + 0xc) + (((int)puVar7 - (int)puVar11) / 0x50) * -0x50;
    }
    iVar3 = fn_0074a528(param_1,&local_64);
    uVar9 = local_64;
    if (iVar3 != 0) {
      if (0x3333333 < local_64) {
        fn_002ff628(8,&DAT_0048931c,&DAT_0048931c,local_64,0x3333333);
      }
      if ((uint)((*(int *)(param_2 + 0x10) - *piVar10) / 0x50) < uVar9) {
        uVar5 = (*(int *)(param_2 + 0xc) - *piVar10) / 0x50;
        uVar13 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (uVar13 < uVar5 + 0x20) {
          uVar13 = uVar5 + 0x20;
        }
        if (uVar13 <= uVar9) {
          uVar13 = uVar9;
        }
        iVar4 = fn_0015ece0(uVar13 * 0x50);
        iVar12 = *(int *)(param_2 + 0xc);
        iVar8 = iVar4;
        for (iVar3 = *piVar10; iVar3 != iVar12; iVar3 = iVar3 + 0x50) {
          if (iVar8 != 0) {
            fn_0047717c(iVar8,iVar3);
          }
          iVar8 = iVar8 + 0x50;
        }
        puVar7 = *(undefined4 **)(param_2 + 0xc);
        for (puVar6 = (undefined4 *)*piVar10; puVar6 != puVar7; puVar6 = puVar6 + 0x14) {
          (**(code **)*puVar6)(puVar6);
        }
        fn_0014f1bc(*piVar10);
        iVar3 = *piVar10;
        *piVar10 = iVar4;
        *(int *)(param_2 + 0xc) = iVar4 + ((*(int *)(param_2 + 0xc) - iVar3) / 0x50) * 0x50;
        *(uint *)(param_2 + 0x10) = iVar4 + uVar13 * 0x50;
      }
      local_38 = &local_98;
      uVar9 = 0;
      local_58 = &DAT_0085345c;
      while ((uVar9 < local_64 && (*(char *)(param_1 + 4) == '\0'))) {
        local_cc[0] = '\x01';
        local_d0 = &DAT_008540c0;
        local_ac = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_ac = fn_0015ece0(0x20);
        piVar2 = local_38;
        local_a4 = local_ac + 0x20;
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_a8 = local_ac;
        local_98 = fn_0015ece0(0x20);
        local_90 = local_98 + 0x20;
        local_94 = local_98;
        iVar8 = fn_00124be8(piVar2 + 4);
        *(undefined **)(iVar8 + -0x48) = local_58;
        *(undefined4 *)(iVar8 + -0x40) = 0;
        *(undefined4 *)(iVar8 + -0x30) = 0;
        *(undefined4 *)(iVar8 + -0x2c) = 0;
        *(undefined4 *)(iVar8 + -0x28) = 0;
        *(undefined4 *)(iVar8 + -0x38) = 0;
        *(undefined4 *)(iVar8 + -0x34) = 0;
        *(undefined4 *)(iVar8 + -0x18) = 0;
        *(undefined4 *)(iVar8 + -0x14) = 0;
        iVar4 = *(int *)(iVar8 + -0x10);
        iVar3 = iVar4;
        if (iVar4 != *(int *)(iVar8 + -0xc)) {
          do {
            iVar3 = iVar3 + 1;
          } while (iVar3 != *(int *)(iVar8 + -0xc));
          *(int *)(iVar8 + -0xc) = iVar4;
        }
        fn_0014f510(iVar8,DAT_008b64f8);
        local_cc[0] = '\0';
        cVar1 = *(char *)(param_1 + 0x3b);
        local_7c = 0;
        if ((((cVar1 == '\0') &&
             ((fn_0074a4c8(param_1,local_cc), *(char *)(param_1 + 4) != '\0' ||
              (fn_0074a528(param_1,&local_7c), *(char *)(param_1 + 4) != '\0')))) ||
            (local_54 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0')) ||
           (((((fn_0074a528(param_1,auStack_c8), *(char *)(param_1 + 4) != '\0' ||
               (fn_0074a5fc(param_1,auStack_c0), *(char *)(param_1 + 4) != '\0')) ||
              (fn_0074a528(param_1,auStack_b8), *(char *)(param_1 + 4) != '\0')) ||
             ((fn_0074a528(param_1,auStack_b4), *(char *)(param_1 + 4) != '\0' ||
              (fn_0074a528(param_1,auStack_b0), *(char *)(param_1 + 4) != '\0')))) ||
            ((fn_0074af34(param_1,&local_ac), *(char *)(param_1 + 4) != '\0' ||
             ((fn_0074a5fc(param_1,auStack_a0), *(char *)(param_1 + 4) != '\0' ||
              (fn_0074af34(param_1,&local_98), *(char *)(param_1 + 4) != '\0')))))))) {
LAB_00489380:
          puVar7 = *(undefined4 **)(param_2 + 0xc);
          puVar11 = (undefined4 *)*piVar10;
          puVar6 = puVar11;
          if (puVar11 != puVar7) {
            do {
              (**(code **)*puVar6)(puVar6);
              puVar6 = puVar6 + 0x14;
            } while (puVar6 != puVar7);
            *(int *)(param_2 + 0xc) =
                 *(int *)(param_2 + 0xc) + (((int)puVar7 - (int)puVar11) / 0x50) * -0x50;
          }
          local_d0 = &DAT_008540c0;
          fn_0014f1bc(local_98);
          fn_0014f1bc(local_ac);
          break;
        }
        if (local_cc[0] != '\0') {
          fn_0074a5fc(param_1,&local_30);
          local_78 = local_30;
          uStack_74 = uStack_2c;
          fn_0014f510(auStack_88);
          if (*(char *)(param_1 + 4) != '\0') goto LAB_00489380;
        }
        if (cVar1 == '\0') {
          uVar5 = local_54 + local_7c;
          if ((uVar5 < *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar5)) {
            *(undefined1 *)(param_1 + 4) = 1;
            goto LAB_00489380;
          }
          *(uint *)(param_1 + 0xc) = uVar5;
        }
        iVar3 = *(int *)(param_2 + 0xc);
        if (iVar3 == *(int *)(param_2 + 0x10)) {
          fn_007920fc(piVar10,iVar3,&local_d0);
        }
        else {
          *(int *)(param_2 + 0xc) = iVar3 + 0x50;
          if (iVar3 != 0) {
            fn_0047717c(iVar3,&local_d0);
          }
        }
        local_d0 = &DAT_008540c0;
        fn_0014f1bc(local_98);
        fn_0014f1bc(local_ac);
        uVar9 = uVar9 + 1;
      }
    }
    if ((*(char *)(param_1 + 4) == '\0') &&
       (fn_0074a528(param_1,param_2 + 0x14), *(char *)(param_1 + 4) == '\0')) {
      fn_0074a5fc(param_1,&local_48);
      local_60 = local_48;
      uStack_5c = uStack_44;
      fn_0014f510(param_2 + 0x18);
      uVar5 = (uint)*(byte *)(param_1 + 4);
      uVar9 = uVar5;
      if (uVar5 == 0) {
        uVar9 = local_4c;
      }
      if (uVar5 == 0 && uVar9 == 0) {
        uVar9 = local_68 + local_6c;
        if ((uVar9 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar9))
        {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc) = uVar9;
        }
      }
    }
  }
  return;
}


