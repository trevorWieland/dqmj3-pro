#include "0056db6c_00570d9c.h"



void fn_00570d9c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  fn_00112e58(*(undefined4 *)(DAT_00897804 + 8),param_2 == 0);
  fn_0068ab44(param_1,0x100094b);
  uVar3 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_008959a8)[uVar3]);
    fn_0031b78c(param_1,uVar3,2,uVar1);
    uVar2 = fn_006b6398(*(undefined4 *)(DAT_00897804 + 8));
    if (uVar2 == (uVar3 ^ 1)) {
      uVar1 = 0x31;
    }
    else {
      uVar1 = 0x30;
    }
    uVar1 = fn_00192cb4(DAT_00897800,uVar1,0);
    fn_0031b78c(param_1,uVar3,8,uVar1);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  return;
}



undefined4 fn_00570ae0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar16 *pwStack_74;
  char *pcStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [4];
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [20];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_00570b30;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00570b30:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  fn_00397774(&pwStack_74);
  local_60 = 2;
  pwStack_74 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_70 = (char *)&DAT_00570cc8;
  uStack_6c = 2;
  uStack_68 = 0;
  uVar3 = fn_0022f750((char *)&DAT_00866ea8);
  fn_00147974(auStack_58,uVar3);
  local_48 = 0;
  local_47 = 0;
  local_40 = 2;
  uVar3 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7628 + *(int *)(*(int *)(param_1 + 0xe4) + 0x10) * 4));
  fn_00147974(auStack_34,uVar3);
  uVar3 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7620 + *(int *)(*(int *)(param_1 + 0xe4) + 0x18) * 4));
  fn_00147974(auStack_2c,uVar3);
  fn_00397618(param_1,&pwStack_74);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar4 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar4 + 0x81) = 1;
  fn_0031f3f4(iVar4,0);
  fn_00100414(auStack_38,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_4c);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  uVar6 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_008959a8)[uVar6]);
    fn_0031b78c(param_1,uVar6,2,uVar3);
    uVar5 = fn_006b6398(*(undefined4 *)(DAT_00897804 + 8));
    if (uVar5 == (uVar6 ^ 1)) {
      uVar3 = 0x31;
    }
    else {
      uVar3 = 0x30;
    }
    uVar3 = fn_00192cb4(DAT_00897800,uVar3,0);
    fn_0031b78c(param_1,uVar6,8,uVar3);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 2);
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0056dcbc) */
/* WARNING: Removing unreachable block (ram,0x0056dcc0) */
/* WARNING: Removing unreachable block (ram,0x0056dcc4) */
/* WARNING: Removing unreachable block (ram,0x0056dcc8) */
/* WARNING: Removing unreachable block (ram,0x0056dccc) */

int fn_0056db6c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  int iStack_2c;
  int local_28;
  
  piVar12 = (int *)0x0;
  piVar14 = (int *)0x0;
  iVar13 = 0;
  piVar6 = (int *)0x0;
  iStack_2c = param_1;
  local_28 = param_2;
  do {
    iVar15 = *(int *)(*(int *)(param_1 + 0x8c) + iVar13 * 4);
    piVar4 = piVar6;
    if (iVar15 != 0) {
      if (piVar6 == piVar14) {
        uVar1 = (int)piVar6 - (int)piVar12 >> 2;
        if (uVar1 < (uint)((int)piVar14 - (int)piVar12 >> 2)) {
          piVar8 = piVar6 + -1;
          if (piVar6 != (int *)0x0) {
            *piVar6 = piVar6[-1];
          }
          piVar4 = piVar6 + 1;
          piVar3 = piVar6;
          if (piVar6 < piVar8) {
            iVar5 = (int)piVar8 - (int)piVar6;
            if (0 < iVar5) {
              if (iVar5 * 0x20000000 < 0) {
                piVar8 = piVar6 + -2;
                piVar3 = piVar6 + -1;
                *piVar3 = *piVar8;
              }
              for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                piVar3[-1] = piVar8[-1];
                piVar8 = piVar8 + -2;
                piVar3 = piVar3 + -2;
                *piVar3 = *piVar8;
              }
            }
          }
          else {
            while (piVar6 != piVar8) {
              piVar8 = piVar8 + -1;
              piVar3[-1] = *piVar8;
              piVar3 = piVar3 + -1;
            }
          }
          *piVar6 = iVar15;
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          uVar2 = uVar1 + 0x20;
          if (uVar1 + 0x20 <= uVar9) {
            uVar2 = uVar9;
          }
          piVar3 = (int *)fn_00100fc6(uVar2 << 2,0);
          piVar8 = piVar3;
          for (piVar4 = piVar12; piVar4 != piVar6; piVar4 = piVar4 + 1) {
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar4;
            }
            piVar8 = piVar8 + 1;
          }
          piVar4 = (int *)(((int)piVar6 - (int)piVar12 & 0xfffffffcU) + (int)piVar3);
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar15;
          }
          piVar4 = piVar12;
          if (piVar6 < piVar12) {
            do {
              piVar4 = piVar4 + 1;
            } while (piVar4 != piVar6);
          }
          fn_001008c4(piVar12,(int)piVar14 - (int)piVar12 >> 2,0);
          piVar4 = piVar3 + ((int)piVar6 - (int)piVar12 >> 2) + 1;
          piVar14 = piVar3 + uVar2;
          piVar12 = piVar3;
        }
      }
      else {
        piVar4 = piVar6 + 1;
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar15;
        }
      }
    }
    iVar13 = iVar13 + 1;
    piVar6 = piVar4;
  } while (iVar13 < 4);
  iVar13 = 0;
  iVar5 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  local_40 = 0;
  iVar15 = iVar13;
  if (0 < iVar5) {
    do {
      iVar15 = fn_006b85d0(*(undefined4 *)(DAT_00897804 + 0xc),local_40);
      if (iVar15 != 0) {
        piVar6 = piVar12;
        if (piVar12 < piVar4) {
          iVar10 = 1;
          iVar11 = (int)piVar4 - (int)piVar12 >> 2;
          if (1 < iVar11 + 1) {
            do {
              if (*piVar6 == iVar15) goto LAB_0056de78;
              iVar10 = iVar10 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar10 < iVar11 + 1);
          }
        }
        else {
          for (; piVar6 != piVar4; piVar6 = piVar6 + 1) {
            if (*piVar6 == iVar15) goto LAB_0056de78;
          }
        }
        if (local_28 != 0) {
          uVar7 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar15);
          fn_0020bbc4(auStack_38,uVar7);
          uVar7 = fn_006bfe90(auStack_34);
          switch(uVar7) {
          case 0:
          case 1:
            iVar11 = 1;
            break;
          case 2:
            iVar11 = 2;
            break;
          default:
            iVar11 = 3;
          }
          if (iVar11 != local_28) goto LAB_0056de78;
        }
        *(int *)(*(int *)(param_1 + 0x98) + iVar13 * 4) = iVar15;
        iVar13 = iVar13 + 1;
      }
LAB_0056de78:
      local_40 = local_40 + 1;
    } while (local_40 < iVar5);
    iVar15 = iVar13;
    if (0x203 < iVar13) goto LAB_0056deb8;
  }
  do {
    iVar5 = iVar13 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x98) + iVar13 * 4) = 0;
    iVar13 = iVar5;
  } while (iVar5 < 0x204);
LAB_0056deb8:
  fn_0022da78(param_1 + 0x98,(&DAT_007c6fb0)[*(int *)(param_1 + 0x114)],0);
  uVar7 = fn_0016ba34(DAT_00897800,DAT_00898228,
                       *(undefined4 *)(&DAT_008945cc + *(int *)(param_1 + 0x114) * 4),0);
  fn_00243550(*(undefined4 *)(param_1 + 0xcc),uVar7);
  if (*(int *)(param_1 + 0xb8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x83) = 0;
    fn_0031f954();
  }
  piVar6 = piVar12;
  if (piVar4 < piVar12) {
    do {
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar4);
  }
  fn_001008c4(piVar12,(int)piVar14 - (int)piVar12 >> 2,0);
  return iVar15;
}


