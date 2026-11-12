#include "0042d068_0042db00.h"



void fn_0042db00(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



undefined4 fn_0042d8e0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893a00) goto LAB_0042d928;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0042d928:
  param_1[0x32] = (int)puVar1;
  fn_00396280(param_1);
  fn_0036bae4(*(undefined4 *)(param_1[0x2c] + 0x10),param_1[0x29],param_1 + 0x33);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00689efc(param_1,0x41,0);
  return 1;
}



int fn_0042d680(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x18);
  iVar2 = fn_006b4f84();
  iVar15 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)fn_0024222c(uVar1,iVar15);
      puVar12 = *(undefined4 **)(param_1 + 0xd0);
      puVar14 = (uint *)(param_1 + 0xcc);
      if (puVar12 == *(undefined4 **)(param_1 + 0xd4)) {
        uVar6 = (int)((int)puVar12 - *puVar14) >> 4;
        if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xd4) - *puVar14) >> 4)) {
          *(undefined4 **)(param_1 + 0xd0) = puVar12 + 4;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-4];
            puVar12[1] = puVar12[-3];
            puVar12[2] = puVar12[-2];
            puVar12[3] = puVar12[-1];
          }
          puVar8 = puVar12 + -4;
          puVar13 = puVar12;
          if (puVar12 < puVar8) {
            iVar4 = (int)puVar8 - (int)puVar12;
            if (0 < iVar4) {
              if (iVar4 * 0x8000000 < 0) {
                puVar8 = puVar12 + -8;
                puVar13 = puVar12 + -4;
                *puVar13 = *puVar8;
                puVar12[-3] = puVar12[-7];
                puVar12[-2] = puVar12[-6];
                puVar12[-1] = puVar12[-5];
              }
              for (iVar4 = iVar4 >> 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar10 = puVar8[-3];
                uVar11 = puVar8[-2];
                uVar17 = puVar8[-1];
                puVar13[-4] = puVar8[-4];
                puVar13[-3] = uVar10;
                puVar13[-2] = uVar11;
                puVar13[-1] = uVar17;
                uVar10 = puVar8[-7];
                uVar11 = puVar8[-6];
                uVar17 = puVar8[-5];
                puVar13[-8] = puVar8[-8];
                puVar13[-7] = uVar10;
                puVar13[-6] = uVar11;
                puVar13[-5] = uVar17;
                puVar8 = puVar8 + -8;
                puVar13 = puVar13 + -8;
              }
            }
          }
          else {
            while (puVar12 != puVar8) {
              uVar10 = puVar8[-3];
              uVar11 = puVar8[-2];
              uVar17 = puVar8[-1];
              puVar13[-4] = puVar8[-4];
              puVar13[-3] = uVar10;
              puVar13[-2] = uVar11;
              puVar13[-1] = uVar17;
              puVar13 = puVar13 + -4;
              puVar8 = puVar8 + -4;
            }
          }
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar17 = puVar3[3];
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar17;
        }
        else {
          uVar7 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          uVar16 = uVar6 + 0x20;
          if (uVar6 + 0x20 <= uVar7) {
            uVar16 = uVar7;
          }
          puVar5 = (undefined4 *)fn_00100fc6(uVar16 << 4,0);
          puVar13 = puVar5;
          for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar12; puVar8 = puVar8 + 4) {
            if (puVar13 != (undefined4 *)0x0) {
              uVar10 = puVar8[1];
              uVar11 = puVar8[2];
              uVar17 = puVar8[3];
              *puVar13 = *puVar8;
              puVar13[1] = uVar10;
              puVar13[2] = uVar11;
              puVar13[3] = uVar17;
            }
            puVar13 = puVar13 + 4;
          }
          puVar8 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar5);
          if (puVar8 != (undefined4 *)0x0) {
            uVar10 = puVar3[1];
            uVar11 = puVar3[2];
            uVar17 = puVar3[3];
            *puVar8 = *puVar3;
            puVar8[1] = uVar10;
            puVar8[2] = uVar11;
            puVar8[3] = uVar17;
          }
          puVar8 = *(undefined4 **)(param_1 + 0xd0);
          puVar3 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar5);
          for (; puVar12 != puVar8; puVar12 = puVar12 + 4) {
            puVar13 = puVar3 + 4;
            if (puVar13 != (undefined4 *)0x0) {
              uVar10 = puVar12[1];
              uVar11 = puVar12[2];
              uVar17 = puVar12[3];
              *puVar13 = *puVar12;
              puVar3[5] = uVar10;
              puVar3[6] = uVar11;
              puVar3[7] = uVar17;
            }
            puVar3 = puVar13;
          }
          uVar7 = *puVar14;
          uVar9 = *(uint *)(param_1 + 0xd0);
          uVar6 = uVar7;
          if (uVar9 < uVar7) {
            do {
              uVar6 = uVar6 + 0x10;
            } while (uVar6 != uVar9);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xd4) - uVar7) >> 4);
          *(undefined4 **)(param_1 + 0xd4) = puVar5 + uVar16 * 4;
          *(undefined4 **)(param_1 + 0xd0) = puVar5 + ((int)(uVar9 - uVar7) >> 4) * 4 + 4;
          *puVar14 = (uint)puVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xd0) = puVar12 + 4;
        if (puVar12 != (undefined4 *)0x0) {
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar17 = puVar3[3];
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar17;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar2);
  }
  return *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4;
}



void fn_0042d570(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0083bac8;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
  }
  uVar1 = param_1[0x26];
  uVar2 = uVar1;
  if ((uint)param_1[0x27] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x27]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x28] - uVar1) >> 2,0);
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x22]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1d];
  uVar2 = uVar1;
  if ((uint)param_1[0x1e] <= uVar1) {
    for (; uVar2 != param_1[0x1e]; uVar2 = uVar2 + 0x10) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x1f] - uVar1) >> 4,0);
  fn_0068ad5c(param_1);
  return;
}



void fn_0042d068(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_18 [12];
  
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if ((*(char *)(param_1 + 0xa8) == '\x01') && (iVar3 = fn_006f6a6c(param_1), iVar3 == 1)) {
      fn_0042d284(param_1);
      *(undefined1 *)(param_1 + 0xa8) = 2;
    }
    goto LAB_0042d224;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x90))();
  if (-1 < iVar3) {
    if (iVar3 == 0) {
      fn_0042c29c(param_1);
      uVar2 = fn_006ce034(param_1);
      fn_0068974c(param_1,uVar2,0,1);
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
    else if (iVar3 == 1) {
      cVar1 = *(char *)(*(int *)(param_1 + 100) + 8);
      if (cVar1 == '\0') {
LAB_0042d10c:
        fn_006899f4(param_1,0x82,0);
      }
      else if (cVar1 == '\x01') {
        fn_006899f4(param_1,0x85,0);
      }
      else {
        if (cVar1 != '\x02') goto LAB_0042d10c;
        fn_006899f4(param_1,0x84,0);
      }
      fn_004450b8(*(undefined4 *)(param_1 + 100));
      fn_0068ab44(param_1,0x100094c);
      *(undefined1 *)(param_1 + 0xa8) = 2;
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x6c))();
  if (-1 < iVar3) {
    fn_002b20a4(*(undefined4 *)(*(int *)(param_1 + 0x98) + iVar3 * 4),0);
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 100))();
  if (-1 < iVar3) {
    fn_002b20a4(*(undefined4 *)(*(int *)(param_1 + 0x98) + iVar3 * 4),1);
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + iVar3 * 4) + 0x1c);
    fn_00688ff8(iVar3);
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x90),local_18);
    fn_0025e378(*(undefined4 *)(param_1 + 0x90),iVar3 + 0x3c);
  }
LAB_0042d224:
  (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
  iVar3 = *(int *)(param_1 + 0x98);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x9c) - iVar3 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar3 + uVar4 * 4) + 0x14))();
      iVar3 = *(int *)(param_1 + 0x98);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x9c) - iVar3 >> 2));
  }
  return;
}



void fn_0042d284(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  cVar1 = *(char *)(*(int *)(param_1 + 100) + 8);
  if (cVar1 == '\0') {
    iVar2 = fn_0036bb48();
    if ((iVar2 != 0) && (piVar3 = (int *)fn_001f74ec(param_1,0x82), piVar3 != (int *)0x0)) {
      puVar4 = (undefined4 *)(**(code **)*piVar3)(piVar3);
      do {
        if (puVar4 == &DAT_008939cc) goto LAB_0042d344;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
  }
  else if (((cVar1 == '\x02') && (iVar2 = fn_0036bb20(), iVar2 != 0)) &&
          (piVar3 = (int *)fn_001f74ec(param_1,0x84), piVar3 != (int *)0x0)) {
    puVar4 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar4 == &DAT_008939cc) goto LAB_0042d344;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
LAB_0042d388:
  cVar1 = *(char *)(*(int *)(param_1 + 100) + 8);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fn_006899f4(param_1,0x85,0);
      goto LAB_0042d3bc;
    }
    if (cVar1 == '\x02') {
      fn_006899f4(param_1,0x84,0);
      goto LAB_0042d3bc;
    }
  }
  fn_006899f4(param_1,0x82,0);
LAB_0042d3bc:
  fn_004450b8(*(undefined4 *)(param_1 + 100));
  return;
LAB_0042d344:
  if (piVar3 != (int *)0x0) {
    fn_006899f4(param_1,0x81,0);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004450b8(*(undefined4 *)(param_1 + 100));
    return;
  }
  goto LAB_0042d388;
}


