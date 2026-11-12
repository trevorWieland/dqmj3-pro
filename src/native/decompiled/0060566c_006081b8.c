#include "0060566c_006081b8.h"



void fn_006081b8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_007c7020)[iVar2]);
    fn_0031b78c(param_1,iVar2,0,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_006079b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_00607a7c);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 1) {
    uVar1 = fn_0022f750((char *)&DAT_00607a90);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 2) {
    uVar1 = fn_0022f750((char *)&DAT_00607aa0);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 3) {
    puVar3 = auStack_14;
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_00607aa8,param_2,3);
  }
  else {
    puVar2 = &DAT_00607a78;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



void fn_00607240(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  int *piVar18;
  undefined4 *puVar19;
  uint local_2c [2];
  
  piVar18 = (int *)(param_1 + 0x14);
  if (piVar18 != param_2) {
    piVar15 = *(int **)(param_1 + 0x24);
    puVar19 = (undefined4 *)param_2[4];
    puVar14 = (undefined4 *)*puVar19;
    for (piVar12 = (int *)*piVar15; piVar12 != piVar15 && puVar14 != puVar19;
        piVar12 = (int *)*piVar12) {
      fn_004a2190(piVar12 + 2,puVar14 + 2);
      puVar14 = (undefined4 *)*puVar14;
    }
    if (puVar14 == puVar19) {
      while (piVar18 = piVar12, piVar18 != piVar15) {
        piVar12 = *(int **)(param_1 + 0x24);
        if (piVar18 != *(int **)(param_1 + 0x24)) {
          piVar12 = (int *)*piVar18;
          *(int **)piVar18[1] = piVar12;
          *(int *)(*piVar18 + 4) = piVar18[1];
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          (**(code **)piVar18[2])(piVar18 + 2);
          *piVar18 = *(int *)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar18;
        }
      }
    }
    else {
      do {
        puVar16 = *(undefined4 **)(param_1 + 0x18);
        if (puVar16 == (undefined4 *)0x0) {
          if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20)) {
            if (*piVar18 == 0) {
              uVar17 = 0x20;
            }
            else {
              uVar1 = *(uint *)(*piVar18 + 4);
              uVar17 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
              if (uVar17 < uVar1 + 0x20) {
                uVar17 = uVar1 + 0x20;
              }
            }
            piVar12 = (int *)fn_0015ece0(0xc);
            iVar2 = fn_0015ece0(uVar17 * 0x78);
            piVar12[2] = iVar2;
            *piVar12 = *piVar18;
            piVar12[1] = uVar17;
            *piVar18 = (int)piVar12;
            iVar2 = piVar12[2];
            *(int *)(param_1 + 0x1c) = iVar2;
            *(uint *)(param_1 + 0x20) = iVar2 + uVar17 * 0x78;
          }
          puVar16 = *(undefined4 **)(param_1 + 0x1c);
          *(undefined4 **)(param_1 + 0x1c) = puVar16 + 0x1e;
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = *puVar16;
        }
        if (puVar16 + 2 != (undefined4 *)0x0) {
          puVar16[2] = &DAT_00853388;
          *(undefined1 *)(puVar16 + 3) = *(undefined1 *)(puVar14 + 3);
          puVar16[4] = puVar14[4];
          puVar16[5] = puVar14[5];
          puVar16[6] = puVar14[6];
          *(undefined2 *)(puVar16 + 7) = *(undefined2 *)(puVar14 + 7);
          *(undefined2 *)((int)puVar16 + 0x1e) = *(undefined2 *)((int)puVar14 + 0x1e);
          puVar16[8] = puVar14[8];
          puVar16[9] = puVar14[9];
          puVar16[10] = puVar14[10];
          puVar16[0xb] = puVar14[0xb];
          iVar2 = fn_004b637c(puVar16 + 0xc,puVar14 + 0xc);
          *(undefined ***)(iVar2 + -0x28) = &PTR_FUN_00854c0c;
          *(undefined1 *)(iVar2 + 8) = *(undefined1 *)(puVar14 + 0xe);
          *(undefined4 *)(iVar2 + 0xc) = puVar14[0xf];
          iVar2 = fn_004b637c(iVar2 + 0x10,puVar14 + 0x10);
          piVar12 = (int *)(iVar2 + 8);
          *piVar12 = 0;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          local_2c[0] = (int)(puVar14[0x13] - puVar14[0x12]) >> 2;
          local_2c[1] = 0x20;
          puVar3 = local_2c;
          if (local_2c[0] < 0x20) {
            puVar3 = local_2c + 1;
          }
          uVar17 = *puVar3;
          puVar4 = (undefined4 *)fn_0015ece0(uVar17 << 2);
          *piVar12 = (int)puVar4;
          puVar10 = (undefined4 *)puVar14[0x13];
          for (puVar7 = (undefined4 *)puVar14[0x12]; puVar7 != puVar10; puVar7 = puVar7 + 1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar7;
            }
            puVar4 = puVar4 + 1;
          }
          *(uint *)(iVar2 + 0xc) = (puVar14[0x13] - puVar14[0x12] & 0xfffffffc) + *piVar12;
          piVar13 = (int *)(iVar2 + 0x14);
          *(uint *)(iVar2 + 0x10) = *piVar12 + uVar17 * 4;
          *piVar13 = 0;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          local_2c[0] = puVar14[0x16] - puVar14[0x15];
          local_2c[1] = 0x20;
          puVar3 = local_2c;
          if ((uint)(puVar14[0x16] - puVar14[0x15]) < 0x20) {
            puVar3 = local_2c + 1;
          }
          uVar17 = *puVar3;
          puVar5 = (undefined1 *)fn_0015ece0(uVar17);
          *piVar13 = (int)puVar5;
          puVar11 = (undefined1 *)puVar14[0x16];
          for (puVar8 = (undefined1 *)puVar14[0x15]; puVar8 != puVar11; puVar8 = puVar8 + 1) {
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = *puVar8;
            }
            puVar5 = puVar5 + 1;
          }
          iVar6 = puVar14[0x16];
          iVar9 = puVar14[0x15];
          *(uint *)(iVar2 + 0x1c) = *piVar13 + uVar17;
          *(int *)(iVar2 + 0x18) = (iVar6 - iVar9) + *piVar13;
          iVar2 = fn_004b9b4c(iVar2 + 0x20,puVar14 + 0x18);
          iVar2 = fn_004b9b4c(iVar2 + 8,puVar14 + 0x1a);
          *(undefined4 *)(iVar2 + 8) = puVar14[0x1c];
          *(undefined4 *)(iVar2 + 0xc) = puVar14[0x1d];
          *(undefined ***)(iVar2 + -0x60) = &PTR_FUN_00853b40;
        }
        *puVar16 = piVar15;
        puVar16[1] = piVar15[1];
        *(undefined4 **)piVar15[1] = puVar16;
        piVar15[1] = (int)puVar16;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        puVar14 = (undefined4 *)*puVar14;
      } while (puVar14 != puVar19);
    }
  }
  return;
}



void fn_00605b00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_002c3d68();
  fn_0025acf8(DAT_0089784c);
  fn_0025ac1c(DAT_0089784c);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00898cec) goto LAB_00605b5c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00605b5c:
  fn_00127ac8(puVar2);
  fn_006899f4(param_1,0,1);
  fn_00689d04(param_1,0);
  fn_00689878(param_1,0);
  return;
}



void fn_0060566c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [5];
  undefined1 local_4b;
  undefined1 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  
  pcVar6 = "standardrules";
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00898cec) goto LAB_006056c0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_006056c0:
  cVar1 = *(char *)(puVar5 + 2);
  if (cVar1 == '\0') {
    iVar3 = fn_0025ad34(DAT_0089784c);
    if (iVar3 == 0) {
      fn_0057481c(param_1 + 0xd0,DAT_0089784c + 0x4c);
    }
    else {
      fn_0025ac1c();
      fn_0057446c(param_1 + 0xd0);
    }
    puVar5 = (undefined4 *)fn_001f74ec(param_1,0x7b);
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar2 == &DAT_00893d28) goto LAB_00605788;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_00605788:
    iVar3 = DAT_0089784c + 0x36;
    fn_0044517c(puVar5,iVar3);
    pcVar6 = (char *)fn_006c44c0(iVar3);
    puVar5 = (undefined4 *)fn_001f74d8(param_1,0xdc);
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar2 == &DAT_00898eb8) goto LAB_006057f4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_006057f4:
    fn_0057481c(puVar5 + 2,param_1 + 0xd0);
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      fn_0025adb4(DAT_0089784c);
    }
    else if (cVar1 == '\x03') {
      fn_0025adc8(DAT_0089784c);
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00898cec) goto LAB_0060584c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0060584c:
  if (*(char *)(puVar5 + 2) != '\0') {
    puVar5 = *(undefined4 **)(param_1 + 0x18);
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar2 == &DAT_00898cec) goto LAB_00605890;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_00605890:
    fn_0057481c(param_1 + 0xd0,puVar5 + 4);
    puVar5 = (undefined4 *)fn_001f74d8(param_1,0xdc);
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar2 == &DAT_00898eb8) goto LAB_006058dc;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_006058dc:
    fn_0057481c(puVar5 + 2,param_1 + 0xd0);
    puVar5 = (undefined4 *)fn_001f74ec(param_1,0x7b);
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar2 == &DAT_00893d28) goto LAB_00605928;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_00605928:
    pcVar6 = (char *)fn_006c44c0(puVar5[4]);
  }
  fn_00689efc(param_1,0xdc,0);
  fn_00397b18(&local_78);
  local_78 = DAT_00898dd0;
  local_74 = DAT_00898dd4;
  local_70 = 4;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00898cec) goto LAB_006059a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_006059a4:
  local_6c = puVar5[3];
  uVar4 = fn_0022f750(DAT_00898dd8);
  fn_00147974(auStack_5c,uVar4);
  local_4b = 1;
  uVar4 = fn_0022f750(&DAT_00605a84);
  fn_00147974(auStack_50,uVar4);
  local_44 = 0;
  uVar4 = fn_0022f750((char *)&DAT_00605a88);
  fn_00147974(auStack_40,uVar4);
  uVar4 = fn_0022f750(pcVar6);
  fn_00147974(auStack_3c,uVar4);
  fn_00397a98(param_1,&local_78);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


