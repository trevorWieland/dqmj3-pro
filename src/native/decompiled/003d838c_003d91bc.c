#include "003d838c_003d91bc.h"



undefined4 fn_003d91bc(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_00214c4c(*(undefined4 *)(param_1 + 0x14),6,1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x1000981,0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_003d918c(int param_1)

{
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x003d91b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



void fn_003d8f3c(int *param_1)

{
  int iVar1;
  
  if (param_1[3] == 4) {
    fn_002fe164(param_1 + 0x1c,param_1[6],param_1[5]);
    iVar1 = param_1[6];
    param_1[6] = iVar1 + 1U;
    if (0x18 < iVar1 + 1U) {
      param_1[3] = 5;
      param_1[6] = 0;
      param_1[0x16] = (int)(((float)param_1[0x19] + (float)param_1[0x19]) - (float)param_1[0x16]);
      param_1[0x18] = (int)(((float)param_1[0x1b] + (float)param_1[0x1b]) - (float)param_1[0x18]);
      fn_002fe2c0(param_1 + 0x1c,param_1 + 0x19,param_1 + 0x16);
      return;
    }
  }
  else if (param_1[3] == 5) {
    fn_002fe008(param_1 + 0x1c,param_1[6],param_1[5]);
    iVar1 = param_1[6];
    param_1[6] = iVar1 + 1U;
    if (0x18 < iVar1 + 1U) {
                    /* WARNING: Could not recover jumptable at 0x003d8f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_003d8ea8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  iVar1 = fn_006f7a84(DAT_008977e0);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  fn_002fe2c0(param_1 + 0x70,param_1 + 0x58,param_1 + 100);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  fn_001c72c0(*(undefined4 *)(param_1 + 0x14),param_1 + 100);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  return 1;
}



void fn_003d8e68(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 2;
  fn_0021718c(param_1,1,0x3c);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  return;
}



void fn_003d8b08(undefined4 *param_1)

{
  *param_1 = &DAT_008319c8;
  if (param_1[0x1d] != -1) {
    fn_00216938(param_1[5]);
    param_1[0x1d] = 0xffffffff;
  }
  fn_00226f48(param_1);
  fn_002feef8();
  return;
}



undefined4 fn_003d873c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  piVar2 = (int *)fn_006f7508(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = (**(code **)(*piVar2 + 0x80))(piVar2,iVar7);
      cVar1 = '\0';
      if (iVar4 != 0) {
        cVar1 = *(char *)(iVar4 + 0x58);
      }
      if ((iVar4 != 0 && cVar1 != '\0') &&
         ((int)**(short **)(iVar4 + 0x180) == *(int *)(param_1 + 0x58))) goto LAB_003d87bc;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar4 = 0;
LAB_003d87bc:
  *(int *)(param_1 + 0x60) = iVar4;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0;
  uVar6 = 1;
  iVar3 = 0;
  if (DAT_008913ac != -1) {
    do {
      if ((&DAT_008913ac)[iVar3 * 8] == *(short *)(*(int *)(param_1 + 0x14) + 0x16a)) {
        uVar6 = (&DAT_008913b8)[iVar3 * 0x10];
        *(undefined4 *)(param_1 + 0x70) = (&DAT_008913b0)[iVar3 * 4];
        *(undefined4 *)(param_1 + 0x78) = (&DAT_008913b4)[iVar3 * 4];
        break;
      }
      iVar3 = iVar3 + 1;
    } while ((&DAT_008913ac)[iVar3 * 8] != -1);
    if (*(int *)(param_1 + 0x70) != 0) {
      iVar7 = *(int *)(DAT_008977e0 + 0x2c);
      uVar5 = fn_002161d4(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x70),1);
      *(undefined4 *)(param_1 + 0x74) = uVar5;
      iVar3 = fn_006b4d08(iVar7,uVar5);
      if ((iVar3 != 0) && (*(undefined1 *)(iVar7 + 0x34) = uVar6, *(int *)(param_1 + 0x78) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
  }
  iVar3 = fn_006f7a84(DAT_008977e0);
  fn_001c72c0(*(undefined4 *)(param_1 + 0x14),iVar3 + 0x20);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
            (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x68),4,0);
  fn_0069eed8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe4),0);
  fn_006f7a84(DAT_008977e0);
  iVar3 = fn_006aab48();
  if (iVar3 == 0) {
    uVar5 = 4;
  }
  else {
    uVar5 = 5;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}



void fn_003d86c8(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00216938(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x7c) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_003d851c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = (int *)fn_006f7508(DAT_008977e0);
    iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2);
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        uVar7 = (**(code **)(*piVar2 + 0x80))(piVar2,iVar6);
        uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
        iVar4 = (int)uVar7;
        if (iVar4 != 0) {
          uVar5 = (uint)*(byte *)(iVar4 + 0x58);
        }
        if ((iVar4 != 0 && uVar5 != 0) &&
           ((int)**(short **)(iVar4 + 0x180) == *(int *)(param_1 + 0x58))) goto LAB_003d85a8;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    iVar4 = 0;
LAB_003d85a8:
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 != 0) {
      uVar5 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar5;
      if (uVar5 < 6) {
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      do {
        iVar6 = fn_006bb544(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
        iVar3 = 0;
        if (iVar6 != 0) {
          iVar3 = *(int *)(param_1 + 0x14);
        }
        if (iVar6 == 0 || iVar3 == iVar6) {
LAB_003d8608:
          bVar1 = false;
        }
        else {
          iVar3 = fn_006aff38(iVar6,0);
          bVar1 = false;
          if (iVar3 != 0) {
            if (*(int *)(iVar6 + 8) != 1) goto LAB_003d8608;
            fn_00683320(iVar6,4,0);
            bVar1 = true;
          }
        }
        iVar3 = *(int *)(param_1 + 100) + 1;
        *(int *)(param_1 + 100) = iVar3;
        if (*(int *)(*(int *)(param_1 + 0x60) + 0x100) <= iVar3) {
          fn_0069eed8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe4),0);
          break;
        }
        if (bVar1) {
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_003d838c(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int unaff_r5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  if (*(int *)(param_1 + 0x60) == 0) {
    if (*(short *)(param_1 + 0x5c) == 0) {
      *(int *)(param_1 + 0x60) = iVar7;
    }
    else {
      piVar5 = (int *)fn_006f7508(DAT_008977e0);
      iVar7 = (**(code **)(*piVar5 + 0x70))();
      iVar6 = 0;
      if (0 < iVar7) {
        do {
          piVar5 = (int *)fn_006f7508(DAT_008977e0);
          iVar8 = (**(code **)(*piVar5 + 0x74))(piVar5,iVar6);
          if (iVar8 != 0) {
            iVar4 = *(int *)(param_1 + 0x14);
            fVar12 = *(float *)(iVar8 + 0x20) - *(float *)(iVar4 + 0x20);
            fVar11 = *(float *)(iVar8 + 0x28) - *(float *)(iVar4 + 0x28);
            fVar13 = (float)VectorSignedToFloat((uint)*(ushort *)(param_1 + 0x5c) *
                                                (uint)*(ushort *)(param_1 + 0x5c),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
            uVar1 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar11) << 0x1f |
                    (uint)(fVar13 == fVar11) << 0x1e;
            in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar11)) << 0x1c;
            bVar3 = (byte)(uVar1 >> 0x18);
            if ((((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
                 (iVar4 != iVar8)) && (iVar4 = fn_006aff38(iVar8,0), iVar4 != 0)) &&
               (*(int *)(iVar8 + 8) == 1)) {
              fn_00683320(iVar8,4,0);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
    }
  }
  else {
    iVar8 = *(int *)(iVar7 + 0x100);
    cVar2 = *(char *)(*(int *)(param_1 + 0x14) + 0x16c);
    iVar6 = 0;
    if (0 < iVar8) {
      do {
        iVar4 = fn_006bb544(iVar7,iVar6);
        bVar9 = *(char *)(iVar4 + 0x16c) != cVar2;
        if (bVar9) {
          unaff_r5 = iVar4;
        }
        bVar10 = iVar4 != 0;
        if (bVar9 && bVar10) {
          iVar4 = *(int *)(param_1 + 0x14);
        }
        if ((((bVar9 && bVar10) && iVar4 != unaff_r5) &&
            (iVar4 = fn_006aff38(unaff_r5,0), iVar4 != 0)) && (*(int *)(unaff_r5 + 8) == 1)) {
          fn_00683320(unaff_r5,4,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 6;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


