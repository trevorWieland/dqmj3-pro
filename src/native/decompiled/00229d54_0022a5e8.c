#include "00229d54_0022a5e8.h"



void fn_0022a5e8(int param_1)

{
  if (*(int *)(param_1 + 0x254) != 0) {
    fn_004c42fc();
    fn_00321574(*(undefined4 *)(param_1 + 100));
  }
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))();
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 4))();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x14))();
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 4))();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x80) + 0x18))();
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 4))();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}



undefined4 fn_0022a42c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar5 = 0;
  uVar1 = fn_006f6ac0();
  fVar20 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = fn_006f6acc(param_1);
  iVar2 = *(int *)(param_1 + 0x220);
  iVar3 = *(int *)(param_1 + 0x158);
  iVar4 = *(int *)(param_1 + 0x23c);
  fVar13 = *(float *)(iVar2 + 0x1c);
  fVar9 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = *(float *)(iVar3 + 0x1c);
  fVar11 = *(float *)(iVar3 + 0x20);
  fVar10 = *(float *)(iVar4 + 0x1c);
  fVar14 = *(float *)(iVar4 + 0x20);
  fVar17 = *(float *)(iVar2 + 0x20);
  fVar16 = *(float *)(iVar2 + 0x3c);
  fVar15 = *(float *)(iVar3 + 0x40);
  fVar18 = *(float *)(iVar4 + 0x3c);
  if (fVar13 < fVar20) {
    fVar19 = fVar13 + fVar16 * 7.0;
    bVar6 = fVar19 < fVar20;
    bVar7 = fVar19 == fVar20;
    bVar8 = NAN(fVar19) || NAN(fVar20);
    if (!bVar7 && !bVar6) {
      bVar6 = fVar17 < fVar9;
      bVar7 = fVar17 == fVar9;
      bVar8 = NAN(fVar17) || NAN(fVar9);
    }
    if ((!bVar7 && bVar6 == bVar8) && (fVar17 - *(float *)(iVar2 + 0x40) < fVar9)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(int *)(param_1 + 0x88) = (int)(ABS(fVar13 - fVar20) / fVar16);
      return 1;
    }
  }
  if (fVar12 < fVar20) {
    fVar13 = fVar12 + *(float *)(iVar3 + 0x3c) * 10.0;
    bVar6 = fVar13 < fVar20;
    bVar7 = fVar13 == fVar20;
    bVar8 = NAN(fVar13) || NAN(fVar20);
    if (!bVar7 && !bVar6) {
      bVar6 = fVar11 < fVar9;
      bVar7 = fVar11 == fVar9;
      bVar8 = NAN(fVar11) || NAN(fVar9);
    }
    if ((!bVar7 && bVar6 == bVar8) && (fVar11 - fVar15 * 5.0 < fVar9)) {
      *(int *)(param_1 + 0x88) = (int)(ABS(fVar12 - fVar20) / *(float *)(iVar3 + 0x3c));
      *(int *)(param_1 + 0x8c) = (int)(ABS(fVar11 - fVar9) / fVar15) + 1;
      return 1;
    }
  }
  if (fVar10 < fVar20) {
    fVar11 = fVar10 + fVar18 * 4.0;
    bVar6 = fVar11 < fVar20;
    bVar7 = fVar11 == fVar20;
    bVar8 = NAN(fVar11) || NAN(fVar20);
    if (!bVar7 && !bVar6) {
      bVar6 = fVar14 < fVar9;
      bVar7 = fVar14 == fVar9;
      bVar8 = NAN(fVar14) || NAN(fVar9);
    }
    if ((!bVar7 && bVar6 == bVar8) && (fVar14 - *(float *)(iVar4 + 0x40) < fVar9)) {
      *(undefined4 *)(param_1 + 0x8c) = 6;
      uVar5 = 1;
      *(int *)(param_1 + 0x88) = (int)(ABS(fVar10 - fVar20) / fVar18);
    }
  }
  return uVar5;
}



undefined4 fn_0022a308(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_28;
  
  local_28 = 0;
  iVar4 = *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x84);
  if ((*(int *)(param_1 + 0x84) != *(int *)(param_1 + 0x98)) ||
     (*(short *)(*(int *)(param_1 + iVar4 * 4 + 0xb8) + 0xce) == 0)) {
    iVar4 = iVar4 + -1;
  }
  param_1 = param_1 + iVar4 * 4;
  puVar6 = *(ushort **)(*(int *)(param_1 + 0xb8) + 0xa4);
  if ((puVar6 != (ushort *)0x0) && (iVar4 = 0, 0 < param_3)) {
    do {
      iVar1 = fn_00230acc(*(undefined4 *)(param_2 + iVar4 * 4));
      uVar8 = fn_00100b58();
      uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
      iVar2 = (int)uVar8;
      if (0 < iVar2) {
        uVar5 = (uint)*puVar6;
      }
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          if (uVar5 == *(ushort *)(iVar1 + iVar7 * 2)) {
            iVar7 = iVar7 + 1;
            if (iVar7 == iVar2) {
              iVar7 = 0;
            }
            local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,*(undefined2 *)(iVar1 + iVar7 * 2));
            piVar3 = *(int **)(param_1 + 0xb8);
            (**(code **)(*piVar3 + 0x68))(piVar3,&local_28,0);
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0;
}



void fn_0022a2a8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_LAB_0081caec;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar2;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return;
}



void fn_0022a230(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (*(int *)(param_1 + 0x58) != 0) {
    cVar3 = *(char *)(*(int *)(param_1 + 0x58) + 0x19);
  }
  uVar1 = fn_006f6a38(param_1);
  if (cVar3 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_006f6a44();
  }
  if (iVar2 == 0 && (uVar1 & 0x14f000f) == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x18) = 1;
  fn_00689bd0(param_1,0,0);
  return;
}



void fn_00229f18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001481c8(param_1[0x19],L"rom:/data/Layout/common/help_window.arc",&DAT_00229fdc,1,1);
  param_1[0x1a] = iVar1;
  iVar1 = fn_001480d0(param_1[0x19],iVar1,(char *)&DAT_008648e0,&DAT_00229fe4,1,1,
                       *(undefined4 *)(param_1[0x16] + 0x14));
  param_1[0x1b] = iVar1;
  uVar2 = fn_00178f9c(param_1[0x19],iVar1);
  fn_00229fec(param_1,uVar2);
  fn_00190d50(param_1[0x1f],*(undefined4 *)(param_1[0x16] + 8));
  fn_00190d50(param_1[0x21],*(undefined4 *)(param_1[0x16] + 0xc));
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(param_1[0x16] + 0x10));
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00229fec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_2 + 0x10);
  uVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,&DAT_0022a1a0,1);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  iVar2 = fn_00172c98(param_2,(char *)&DAT_0022a1a8);
  piVar3 = *(int **)(*(int *)(iVar2 + 0xac) + 0x10);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_0022a1bc,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a934) goto LAB_0022a078;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0022a078:
  *(int **)(param_1 + 0x74) = piVar3;
  uVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0022a1d4,1);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  piVar3 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0022a1dc,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0022a0e8;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0022a0e8:
  *(int **)(param_1 + 0x7c) = piVar3;
  uVar1 = (**(code **)(*piVar7 + 0x2c))(piVar7,&DAT_0022a1ec,1);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  piVar3 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_0022a1f4,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0022a158;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0022a158:
  *(int **)(param_1 + 0x84) = piVar3;
  *(int *)(param_1 + 0x88) = (int)*(float *)(*(int *)(param_1 + 0x74) + 0x40);
  iVar2 = *(int *)(param_1 + 0x70);
  uVar1 = *(undefined4 *)(iVar2 + 0x20);
  uVar6 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  iVar2 = piVar3[8];
  iVar5 = piVar3[9];
  *(int *)(param_1 + 0x98) = piVar3[7];
  *(int *)(param_1 + 0x9c) = iVar2;
  *(int *)(param_1 + 0xa0) = iVar5;
  iVar2 = *(int *)(param_1 + 0x80);
  uVar1 = *(undefined4 *)(iVar2 + 0x20);
  uVar6 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  return;
}



void fn_00229dcc(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_00229d84(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0081cab8;
  return;
}



void fn_00229d54(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) != 0) {
        fn_00688a74();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}


