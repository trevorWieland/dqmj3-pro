#include "00326e70_00327a7c.h"



void fn_00327a7c(int param_1)

{
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x68) = 10;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + 160.0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  return;
}



void fn_00327a24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  fn_00327970(param_1,1);
  *(undefined4 *)(param_1 + 0x68) = 10;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  *(float *)(param_1 + 0x50) = fVar1;
  *(float *)(param_1 + 0x54) = fVar2;
  *(float *)(param_1 + 0x58) = fVar3;
  *(float *)(param_1 + 0x50) = fVar1 + 160.0;
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  *(float *)(param_1 + 0x5c) = *param_5;
  *(float *)(param_1 + 0x60) = fVar1;
  *(float *)(param_1 + 100) = fVar2;
  return;
}



void fn_00327970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (param_2 == 0) {
    param_3 = *(int *)(param_1 + 0x38);
  }
  if (param_2 == 0 && param_3 == iVar1) {
    return;
  }
  *(byte *)(*(int *)(param_1 + 0x48) + 0x44) =
       *(int *)(param_1 + 0x70) != iVar1 | *(byte *)(*(int *)(param_1 + 0x48) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) =
       *(int *)(param_1 + 0x6c) != iVar1 | *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) & 0xfe;
  if (((*(int *)(param_1 + 0x70) == iVar1) && (iVar2 = *(int *)(param_1 + 0x74), iVar2 != 0)) ||
     ((*(int *)(param_1 + 0x6c) == iVar1 && (iVar2 = *(int *)(param_1 + 0x78), iVar2 != 0)))) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x44),iVar2);
    return;
  }
  fn_00688c04(*(undefined4 *)(param_1 + 0x44),iVar1,0);
  return;
}



void fn_00327914(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0068ae98();
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) != -1) {
      piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar1 + 0x58))(piVar1,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_003272d4(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  
  pcVar2 = (char *)fn_006b8730(*(undefined4 *)(DAT_00897804 + 0x30));
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    pcVar2 = (char *)(uint)(byte)pcVar2[1];
  }
  uVar3 = fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),0);
  uVar7 = *(uint *)(param_1 + 0xd8);
  uVar8 = *(uint *)(param_1 + 0xd4);
  if (uVar8 != uVar7) {
    uVar4 = uVar8;
    if (uVar7 <= uVar8) {
      do {
        uVar4 = uVar4 + 0xc;
      } while (uVar4 != uVar7);
    }
    *(uint *)(param_1 + 0xd8) = uVar7 + ((int)(uVar7 - uVar8) / 0xc) * -0xc;
  }
  iVar14 = 0;
LAB_003273a4:
  do {
    piVar12 = *(int **)(param_1 + 0xd8);
    puVar15 = (uint *)(param_1 + 0xd4);
    piVar16 = &DAT_007c78f4 + iVar14 * 3;
    if (piVar12 == *(int **)(param_1 + 0xdc)) {
      uVar7 = (int)((int)piVar12 - *puVar15) / 0xc;
      if (uVar7 < (uint)((int)((int)*(int **)(param_1 + 0xdc) - *puVar15) / 0xc)) {
        *(int **)(param_1 + 0xd8) = piVar12 + 3;
        if (piVar12 != (int *)0x0) {
          *piVar12 = piVar12[-3];
          piVar12[1] = piVar12[-2];
          piVar12[2] = piVar12[-1];
        }
        piVar5 = piVar12 + -3;
        piVar13 = piVar12;
        if (piVar12 < piVar5) {
          if (0 < (int)piVar5 - (int)piVar12) {
            uVar7 = ((int)piVar5 - (int)piVar12) / 0xc;
            if ((uVar7 & 1) != 0) {
              piVar5 = piVar12 + -6;
              piVar13 = piVar12 + -3;
              *piVar13 = *piVar5;
              piVar12[-2] = piVar12[-5];
              piVar12[-1] = piVar12[-4];
            }
            for (iVar9 = (int)uVar7 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              iVar10 = piVar5[-2];
              iVar17 = piVar5[-1];
              piVar13[-3] = piVar5[-3];
              piVar13[-2] = iVar10;
              piVar13[-1] = iVar17;
              iVar10 = piVar5[-5];
              iVar17 = piVar5[-4];
              piVar13[-6] = piVar5[-6];
              piVar13[-5] = iVar10;
              piVar13[-4] = iVar17;
              piVar5 = piVar5 + -6;
              piVar13 = piVar13 + -6;
            }
          }
        }
        else {
          while (piVar12 != piVar5) {
            iVar9 = piVar5[-2];
            iVar10 = piVar5[-1];
            piVar13[-3] = piVar5[-3];
            piVar13[-2] = iVar9;
            piVar13[-1] = iVar10;
            piVar13 = piVar13 + -3;
            piVar5 = piVar5 + -3;
          }
        }
        piVar5 = (int *)*piVar16;
        iVar9 = (&DAT_007c78f8)[iVar14 * 3];
        iVar10 = (&DAT_007c78fc)[iVar14 * 3];
        *piVar12 = (int)piVar5;
        piVar12[1] = iVar9;
        piVar12[2] = iVar10;
      }
      else {
        uVar8 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (uVar8 < uVar7 + 0x20) {
          uVar8 = uVar7 + 0x20;
        }
        piVar6 = (int *)fn_00100fc6(uVar8 * 0xc,0);
        piVar13 = piVar6;
        for (piVar5 = (int *)*puVar15; piVar5 != piVar12; piVar5 = piVar5 + 3) {
          if (piVar13 != (int *)0x0) {
            iVar9 = piVar5[1];
            iVar10 = piVar5[2];
            *piVar13 = *piVar5;
            piVar13[1] = iVar9;
            piVar13[2] = iVar10;
          }
          piVar13 = piVar13 + 3;
        }
        piVar5 = piVar6 + ((int)((int)piVar12 - *puVar15) / 0xc) * 3;
        if (piVar5 != (int *)0x0) {
          iVar9 = (&DAT_007c78f8)[iVar14 * 3];
          iVar10 = (&DAT_007c78fc)[iVar14 * 3];
          *piVar5 = *piVar16;
          piVar5[1] = iVar9;
          piVar5[2] = iVar10;
        }
        piVar5 = *(int **)(param_1 + 0xd8);
        piVar16 = piVar6 + ((int)((int)piVar12 - *puVar15) / 0xc) * 3;
        for (; piVar12 != piVar5; piVar12 = piVar12 + 3) {
          piVar13 = piVar16 + 3;
          if (piVar13 != (int *)0x0) {
            iVar9 = piVar12[1];
            iVar10 = piVar12[2];
            *piVar13 = *piVar12;
            piVar16[4] = iVar9;
            piVar16[5] = iVar10;
          }
          piVar16 = piVar13;
        }
        uVar4 = *(uint *)(param_1 + 0xd8);
        uVar11 = *puVar15;
        uVar7 = uVar11;
        if (uVar4 <= uVar11) {
          for (; uVar7 != uVar4; uVar7 = uVar7 + 0xc) {
          }
        }
        fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0xdc) - uVar11) / 0xc,0);
        piVar5 = piVar6 + ((int)(uVar4 - uVar11) / 0xc) * 3 + 3;
        *puVar15 = (uint)piVar6;
        *(int **)(param_1 + 0xd8) = piVar5;
        *(int **)(param_1 + 0xdc) = piVar6 + uVar8 * 3;
      }
    }
    else {
      piVar5 = piVar12 + 3;
      *(int **)(param_1 + 0xd8) = piVar5;
      if (piVar12 != (int *)0x0) {
        piVar5 = (int *)*piVar16;
        iVar9 = (&DAT_007c78f8)[iVar14 * 3];
        iVar10 = (&DAT_007c78fc)[iVar14 * 3];
        *piVar12 = (int)piVar5;
        piVar12[1] = iVar9;
        piVar12[2] = iVar10;
      }
    }
    iVar14 = iVar14 + 1;
    if (4 < iVar14) {
      fn_002c3614(param_1);
      iVar14 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4);
                    /* WARNING: Subroutine does not return */
      fn_006ba250(param_1,iVar14 / 0xc + (iVar14 >> 0x1f));
    }
    while (iVar14 == 3) {
      if (cVar1 != '\0' || pcVar2 != (char *)0x0) goto LAB_003273a4;
      iVar14 = 4;
    }
    if (iVar14 == 1) {
      piVar5 = (int *)(uint)(3 < uVar3);
    }
    if (iVar14 == 1 && piVar5 == (int *)0x0) {
      iVar14 = 2;
    }
  } while( true );
}



void fn_00326e70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar2 == &DAT_00893b10) goto LAB_00326ed4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_00326ed4:
    puVar3[2] = 0;
    fn_006899f4(param_1,0,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    fn_00689bd0(param_1,0,0);
    fn_001076bc(2);
    fn_005f3c30(2);
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  iVar1 = *(int *)(*(int *)(param_1 + 0xd4) + param_2 * 0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0x1000003;
    *(undefined4 *)(param_1 + 0xe0) = 0xf;
    *(code **)(param_1 + 0xc4) = fn_00326bbc;
    *(undefined4 *)(param_1 + 200) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar2 == &DAT_00893b10) goto LAB_0032701c;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        puVar3 = (undefined4 *)fn_001f74ec(param_1,0xac);
        if (puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
          do {
            if (puVar2 == &DAT_00893b1c) goto LAB_003270c4;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
        puVar3 = (undefined4 *)0x0;
LAB_003270c4:
        puVar3[2] = 0xaa;
        fn_006899f4(param_1,0xac,0);
        puVar3 = *(undefined4 **)(param_1 + 0x18);
        if (puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
          do {
            if (puVar2 == &DAT_00893b10) goto LAB_0032707c;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        *(code **)(param_1 + 0xc4) = fn_00326ca0;
        *(undefined4 *)(param_1 + 200) = 0;
        puVar3 = *(undefined4 **)(param_1 + 0x18);
        if (puVar3 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
          do {
            if (puVar2 == &DAT_00893b10) goto LAB_0032707c;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
      }
      puVar3 = (undefined4 *)0x0;
LAB_0032707c:
      puVar3[2] = param_2;
      return;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0x1000003;
    *(undefined4 *)(param_1 + 0xe0) = 0x10;
    *(code **)(param_1 + 0xc4) = fn_00326bbc;
    *(undefined4 *)(param_1 + 200) = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar2 == &DAT_00893b10) goto LAB_0032701c;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_0032701c:
  puVar3[2] = 0;
  return;
}


