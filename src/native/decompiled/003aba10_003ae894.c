#include "003aba10_003ae894.h"



void fn_003ae894(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = -1;
  }
  *(int *)(param_1 + 0x19c) = param_2;
  return;
}



void fn_003acdb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00159f34(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x78));
  iVar1 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x80) = iVar1;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  if (iVar1 == 3) {
    iVar1 = 0;
    *(undefined1 *)(param_1 + 0x68) = 2;
    do {
      fn_003acf1c(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xe);
  }
  else if (iVar1 == 4) {
    *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 0;
  }
  if (*(int *)(param_1 + 0x80) < 10) {
    uVar2 = fn_001c804c(*(undefined4 *)(param_1 + 0x6c),
                         (&PTR_s_staff_roll_lower_Tag_00_bflan_0089109c)[*(int *)(param_1 + 0x80)],
                         *(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0x6c),uVar2);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 100) + 9) = 1;
  *(undefined1 *)(param_1 + 0x68) = 3;
  return;
}



void fn_003acf1c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_110 [260];
  
  uVar1 = fn_0024db98(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x84));
  fn_00101a50(auStack_110,0x80,&LAB_003acfc8,uVar1);
  piVar2 = *(int **)(*(int *)(param_1 + 0x90) + param_2 * 0x10);
  (**(code **)(*piVar2 + 0x68))(piVar2,auStack_110,0);
  iVar3 = fn_0024db7c(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x84));
  uVar1 = 0xffffffff;
  if ((iVar3 != 0) && (iVar3 == 1)) {
    uVar1 = 0xffffff00;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x90) + param_2 * 0x10);
  *(undefined4 *)(iVar3 + 0xac) = uVar1;
  *(undefined4 *)(iVar3 + 0xb0) = uVar1;
  iVar3 = *(int *)(param_1 + 0x84) + 1;
  *(int *)(param_1 + 0x84) = iVar3;
  if (**(int **)(param_1 + 0xa8) <= iVar3) {
    *(int *)(param_1 + 0x88) = param_2;
    *(undefined1 *)(param_1 + 0x8d) = 1;
  }
  return;
}



undefined4 fn_003ac6a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined4 in_s0;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_s16;
  undefined4 in_s17;
  uint local_d4 [3];
  undefined1 auStack_c8 [4];
  uint local_c4 [40];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd7);
  puVar7 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089104c) goto LAB_003ac6f0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003ac6f0:
  *(undefined4 **)(param_1 + 100) = puVar1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x6c),DAT_00891084,&DAT_003aca34,1,1);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x6c),uVar3,DAT_00891088,&DAT_003aca3c,1,1,0);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0x6c),
                       (&PTR_s_staff_roll_lower_Tag_00_bflan_0089109c)[*(int *)(param_1 + 0x80)],
                       uVar3);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  uVar3 = fn_001088e0(*(undefined4 *)(param_1 + 0x6c),uVar3);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  fn_0024dbc8(*(undefined4 *)(param_1 + 0xa8));
  fn_0024dbb0(*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xb4) = in_s0;
  uVar9 = *(uint *)(param_1 + 0x94);
  uVar13 = *(uint *)(param_1 + 0x90);
  if (uVar13 != uVar9) {
    uVar4 = uVar13;
    if (uVar9 <= uVar13) {
      do {
        uVar4 = uVar4 + 0x10;
      } while (uVar4 != uVar9);
    }
    *(uint *)(param_1 + 0x94) = uVar9 - (uVar9 - uVar13 & 0xfffffff0);
  }
  local_d4[0] = 0xe;
  puVar15 = (uint *)(param_1 + 0x90);
  if ((uint)(*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x90) >> 4) < 0xe) {
    uVar9 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 4;
    local_c4[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_c4[0] < uVar9 + 0x20) {
      local_c4[0] = uVar9 + 0x20;
    }
    puVar10 = local_c4;
    if (local_c4[0] < 0xf) {
      puVar10 = local_d4;
    }
    uVar9 = *puVar10;
    puVar5 = (undefined4 *)fn_00100fc6(uVar9 << 4,0);
    puVar14 = *(undefined4 **)(param_1 + 0x94);
    puVar2 = puVar5;
    for (puVar1 = (undefined4 *)*puVar15; puVar1 != puVar14; puVar1 = puVar1 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = puVar1[1];
        uVar17 = puVar1[2];
        uVar18 = puVar1[3];
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
      }
      puVar2 = puVar2 + 4;
    }
    uVar4 = *puVar15;
    uVar13 = uVar4;
    if (*(uint *)(param_1 + 0x94) < uVar4) {
      do {
        uVar13 = uVar13 + 0x10;
      } while (uVar13 != *(uint *)(param_1 + 0x94));
    }
    fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x98) - uVar4) >> 4,0);
    uVar13 = *puVar15;
    *puVar15 = (uint)puVar5;
    *(uint *)(param_1 + 0x94) = (*(int *)(param_1 + 0x94) - uVar13 & 0xfffffff0) + (int)puVar5;
    *(undefined4 **)(param_1 + 0x98) = puVar5 + uVar9 * 4;
  }
  iVar6 = fn_00178f9c(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
  iVar16 = 0;
  do {
    fn_00301f50(auStack_c8,0x80);
    fn_001028d4(auStack_c8,(char *)&DAT_003aca40,iVar16);
    uVar3 = (**(code **)(**(int **)(iVar6 + 0x10) + 0x2c))(*(int **)(iVar6 + 0x10),auStack_c8,1);
    uVar9 = (uint)puVar7 & 0xff000000 | 0x10001;
    puVar1 = *(undefined4 **)(param_1 + 0x94);
    puVar15 = (uint *)(param_1 + 0x90);
    puVar7 = puVar1;
    if (puVar1 == *(undefined4 **)(param_1 + 0x98)) {
      uVar13 = (int)((int)puVar1 - *puVar15) >> 4;
      if (uVar13 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x98) - *puVar15) >> 4)) {
        *(undefined4 **)(param_1 + 0x94) = puVar1 + 4;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar1[-4];
          puVar1[1] = puVar1[-3];
          puVar1[2] = puVar1[-2];
          puVar1[3] = puVar1[-1];
        }
        puVar2 = puVar1 + -4;
        if (puVar1 < puVar2) {
          iVar11 = (int)puVar2 - (int)puVar1;
          if (0 < iVar11) {
            if (iVar11 * 0x8000000 < 0) {
              puVar2 = puVar1 + -8;
              puVar7 = puVar1 + -4;
              *puVar7 = *puVar2;
              puVar1[-3] = puVar1[-7];
              puVar1[-2] = puVar1[-6];
              puVar1[-1] = puVar1[-5];
            }
            for (iVar11 = iVar11 >> 5; iVar11 != 0; iVar11 = iVar11 + -1) {
              uVar17 = puVar2[-3];
              uVar18 = puVar2[-2];
              uVar19 = puVar2[-1];
              puVar7[-4] = puVar2[-4];
              puVar7[-3] = uVar17;
              puVar7[-2] = uVar18;
              puVar7[-1] = uVar19;
              uVar17 = puVar2[-7];
              uVar18 = puVar2[-6];
              uVar19 = puVar2[-5];
              puVar7[-8] = puVar2[-8];
              puVar7[-7] = uVar17;
              puVar7[-6] = uVar18;
              puVar7[-5] = uVar19;
              puVar2 = puVar2 + -8;
              puVar7 = puVar7 + -8;
            }
          }
        }
        else {
          while (puVar1 != puVar2) {
            uVar17 = puVar2[-3];
            uVar18 = puVar2[-2];
            uVar19 = puVar2[-1];
            puVar7[-4] = puVar2[-4];
            puVar7[-3] = uVar17;
            puVar7[-2] = uVar18;
            puVar7[-1] = uVar19;
            puVar7 = puVar7 + -4;
            puVar2 = puVar2 + -4;
          }
        }
        *puVar1 = uVar3;
        puVar1[1] = uVar9;
        puVar1[2] = in_s16;
        puVar1[3] = in_s17;
      }
      else {
        uVar4 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (uVar4 < uVar13 + 0x20) {
          uVar4 = uVar13 + 0x20;
        }
        puVar7 = (undefined4 *)fn_00100fc6(uVar4 << 4,0);
        puVar5 = puVar7;
        for (puVar2 = (undefined4 *)*puVar15; puVar2 != puVar1; puVar2 = puVar2 + 4) {
          if (puVar5 != (undefined4 *)0x0) {
            uVar17 = puVar2[1];
            uVar18 = puVar2[2];
            uVar19 = puVar2[3];
            *puVar5 = *puVar2;
            puVar5[1] = uVar17;
            puVar5[2] = uVar18;
            puVar5[3] = uVar19;
          }
          puVar5 = puVar5 + 4;
        }
        puVar2 = (undefined4 *)(((int)puVar1 - *puVar15 & 0xfffffff0) + (int)puVar7);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uVar3;
          puVar2[1] = uVar9;
          puVar2[2] = in_s16;
          puVar2[3] = in_s17;
        }
        puVar5 = *(undefined4 **)(param_1 + 0x94);
        puVar2 = (undefined4 *)(((int)puVar1 - *puVar15 & 0xfffffff0) + (int)puVar7);
        for (; puVar1 != puVar5; puVar1 = puVar1 + 4) {
          puVar14 = puVar2 + 4;
          if (puVar14 != (undefined4 *)0x0) {
            uVar3 = puVar1[1];
            uVar17 = puVar1[2];
            uVar18 = puVar1[3];
            *puVar14 = *puVar1;
            puVar2[5] = uVar3;
            puVar2[6] = uVar17;
            puVar2[7] = uVar18;
          }
          puVar2 = puVar14;
        }
        uVar13 = *puVar15;
        uVar12 = *(uint *)(param_1 + 0x94);
        uVar9 = uVar13;
        if (uVar12 < uVar13) {
          do {
            uVar9 = uVar9 + 0x10;
          } while (uVar9 != uVar12);
        }
        fn_001008c4(uVar13,(int)(*(int *)(param_1 + 0x98) - uVar13) >> 4,0);
        *(undefined4 **)(param_1 + 0x98) = puVar7 + uVar4 * 4;
        *(undefined4 **)(param_1 + 0x94) = puVar7 + ((int)(uVar12 - uVar13) >> 4) * 4 + 4;
        *puVar15 = (uint)puVar7;
      }
    }
    else {
      *(undefined4 **)(param_1 + 0x94) = puVar1 + 4;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar3;
        puVar1[1] = uVar9;
        puVar1[2] = in_s16;
        puVar1[3] = in_s17;
      }
    }
    piVar8 = *(int **)(*(int *)(param_1 + 0x90) + iVar16 * 0x10);
    if (piVar8[0x29] == 0) {
      (**(code **)(*piVar8 + 0x58))(piVar8,0x100,0);
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0xe);
  fn_003acbc4(param_1);
  return 1;
}



void fn_003aba10(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_18;
  
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  fn_005f3aac(8);
  fn_0026d2e8(*(undefined4 *)(param_1 + 0x70),1);
  uVar2 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
  fn_0026d700(&local_18,*(undefined4 *)(param_1 + 0x70),uVar2);
  puVar1 = local_18;
  fn_001930b8();
  fn_0044d6e4(puVar1);
  if (local_18 != &DAT_008f9cf4) {
    piVar3 = local_18 + -3;
    iVar4 = *piVar3;
    if (iVar4 == -1) {
LAB_003aba9c:
      fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
    }
    else if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = iVar4 + -1;
      if (iVar4 == 0) goto LAB_003aba9c;
    }
  }
  uVar2 = fn_006ba860(*(undefined4 *)(param_1 + 0x98));
  fn_0026d700(&local_18,*(undefined4 *)(param_1 + 0x70),uVar2);
  puVar1 = local_18;
  fn_001930b8();
  fn_0044d6e4(puVar1);
  if (local_18 == &DAT_008f9cf4) goto LAB_003abb28;
  piVar3 = local_18 + -3;
  iVar4 = *piVar3;
  if (iVar4 != -1) {
    if (piVar3 == &DAT_008f9ce8) goto LAB_003abb28;
    *piVar3 = iVar4 + -1;
    if (iVar4 != 0) goto LAB_003abb28;
  }
  fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
LAB_003abb28:
  uVar2 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
  uVar2 = fn_0026e33c(*(undefined4 *)(param_1 + 0x70),uVar2,*(undefined4 *)(param_1 + 0x8c),30000,0
                       ,0);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined1 *)(param_1 + 0x78) = 5;
  return;
}


