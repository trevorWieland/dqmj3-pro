#include "002761b4_00276720.h"



void fn_00276720(int param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar10;
  int *piVar11;
  undefined4 unaff_r7;
  int iVar12;
  undefined4 unaff_r8;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined8 in_d8;
  undefined8 in_d9;
  undefined8 uVar15;
  undefined8 in_d10;
  undefined8 uVar16;
  
  fn_001c93c8(*(undefined4 *)(param_1 + 0xc));
  fVar14 = 1.0;
  if (*(int *)(param_1 + 0x34) != -1) {
    iVar6 = fn_001088e0(*(undefined4 *)(param_1 + 0xc));
    uVar7 = fn_00176970();
    fVar13 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = *(float *)(iVar6 + 0x10) + fVar14;
    *(float *)(iVar6 + 0x10) = fVar14;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar14) << 0x1e;
    in_fpscr = uVar1 | (uint)(fVar14 <= fVar13) << 0x1d;
    if (!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0)) {
      if (*(int *)(param_1 + 0x34) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x30) != -1) {
        fn_0016a43c(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 1:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
    goto joined_r0x00276a88;
  case 2:
    iVar6 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    goto LAB_00276844;
  case 3:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
    if (iVar6 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
      uVar7 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           (char *)&DAT_00273ac0,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar7;
    }
    break;
  case 4:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
    if (iVar6 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      fn_0016a43c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(undefined1 *)(param_1 + 8) = 0;
    }
    break;
  case 5:
  case 7:
  case 0xe:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    fn_00154a6c();
    break;
  case 6:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
    if (iVar6 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
      uVar7 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_00892124,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar7;
      *(undefined1 *)(param_1 + 8) = 7;
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_001088e0(*(undefined4 *)(param_1 + 0xc));
      iVar6 = fn_00154a6c();
      if (iVar6 != 0) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      }
    }
    break;
  case 9:
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_001088e0(*(undefined4 *)(param_1 + 0xc));
      iVar6 = fn_00154a6c();
      if (iVar6 != 0) {
        fn_00271e64(param_1,(char *)&DAT_00275ffc,0);
        fn_00275604(param_1);
      }
    }
    break;
  case 10:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
joined_r0x00276a88:
    if (iVar6 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
      uVar7 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_008921c8,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar7;
      *(undefined1 *)(param_1 + 8) = 2;
    }
    break;
  case 0xb:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
    if (iVar6 != 0) {
      fn_00271930(param_1);
    }
    break;
  case 0xc:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    fn_00154a6c();
    fn_00273898(param_1);
    fn_002726ec(param_1);
    fn_00272314(param_1);
    fn_00272108(param_1);
    break;
  case 0xd:
    fn_00274f5c(param_1);
    break;
  case 0xf:
    fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    iVar6 = fn_00154a6c();
    if (iVar6 != 0) {
      fn_00271508(param_1);
      fn_002700fc(param_1);
      fn_001103e0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x1c);
      fn_001103e0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x18);
      fn_001103e0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x4c);
      fn_00110460(*(undefined4 *)(param_1 + 0xc),param_1 + 0x14);
      *(undefined1 *)(param_1 + 8) = 0;
    }
    break;
  case 0x10:
  case 0x11:
    fn_002758b0(param_1);
    break;
  case 0x12:
    iVar6 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
    fVar13 = *(float *)(iVar6 + 0x10);
    uVar7 = fn_00176970();
    fVar14 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar14 <= fVar13) break;
LAB_00276844:
    fn_00154a6c(iVar6);
  }
  if (*(char *)(DAT_008977e0 + 0x170) == '\0') {
    return;
  }
  if (((*(int *)(param_1 + 0x1c) != -1) &&
      (iVar6 = fn_001088e0(*(undefined4 *)(param_1 + 0xc)), iVar6 != 0)) &&
     (iVar6 = fn_00154a6c(), iVar6 != 0)) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
    if (*(char *)(param_1 + 9) == '\x01') {
      (**(code **)(**(int **)(param_1 + 4) + 0x68))();
    }
    uVar7 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
  }
  uVar16 = CONCAT44(unaff_r7,unaff_r6);
  iVar6 = fn_006f7a30(DAT_008977e0);
  if (iVar6 == 0) {
    piVar4 = (int *)fn_006f72e0(DAT_008977e0);
    piVar4 = (int *)(**(code **)(*piVar4 + 0x4c))();
    iVar6 = *piVar4;
    iVar10 = piVar4[1];
    if (iVar6 != iVar10) {
      uVar15 = 0x42f0000043480000;
      uVar7 = 0;
      do {
        if (*(char *)(iVar6 + 0x15) != '\0') {
          iVar12 = *(int *)(iVar6 + 4);
          piVar4 = *(int **)(param_1 + 0x24);
          iVar9 = 0;
          if (piVar4 != *(int **)(param_1 + 0x28)) {
            do {
              iVar8 = *piVar4;
              cVar2 = *(char *)(iVar8 + 0x10);
              if ((cVar2 != '\0') && (*(int *)(iVar8 + 4) == iVar12)) {
                bVar3 = true;
                iVar9 = iVar8;
                goto LAB_00270c14;
              }
              if (iVar9 == 0 && cVar2 == '\0') {
                iVar9 = iVar8;
              }
              piVar4 = piVar4 + 1;
            } while (piVar4 != *(int **)(param_1 + 0x28));
            bVar3 = false;
LAB_00270c14:
            if (iVar9 != 0) {
              if (!bVar3) {
                fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 8),1,cVar2,in_d8
                             ,in_d9,in_d10,unaff_r4,unaff_r5,uVar16,unaff_r8);
                *(int *)(iVar9 + 4) = iVar12;
                fn_00276c78(param_1,iVar9,1);
              }
              fVar13 = *(float *)(iVar6 + 8) - (float)uVar15;
              fVar14 = (float)((ulonglong)uVar15 >> 0x20) - *(float *)(iVar6 + 0xc);
              iVar12 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 8));
              iVar12 = *(int *)(iVar12 + 0x10);
              *(float *)(iVar12 + 0x1c) = fVar13;
              *(float *)(iVar12 + 0x20) = fVar14;
              *(undefined4 *)(iVar12 + 0x24) = uVar7;
              *(byte *)(iVar12 + 0x44) = *(byte *)(iVar12 + 0x44) & 0xef | 0x10;
              cVar2 = *(char *)(iVar9 + 0x10);
              if (cVar2 == '\x01') {
                if ((*(char *)(iVar9 + 0x11) == '\x03') &&
                   (iVar12 = fn_006a9948(*(undefined4 *)(iVar9 + 4)), iVar12 != 0)) {
                  iVar12 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 8));
                  iVar12 = (**(code **)(**(int **)(iVar12 + 0x10) + 0x2c))
                                     (*(int **)(iVar12 + 0x10),(char *)&DAT_00272a70,1);
                  *(undefined1 *)(iVar12 + 0x45) = 0;
                }
                else {
                  fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 0xc));
                  iVar12 = fn_00154a6c();
                  if (iVar12 == 0) goto LAB_00270de8;
                }
                fn_00276c78(param_1,iVar9,2);
              }
              else if (cVar2 == '\x02') {
                if ((*(char *)(iVar9 + 0x11) == '\x03') &&
                   (iVar12 = fn_006a9948(*(undefined4 *)(iVar9 + 4)), iVar12 != 0)) {
                  iVar12 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 8));
                  iVar12 = (**(code **)(**(int **)(iVar12 + 0x10) + 0x2c))
                                     (*(int **)(iVar12 + 0x10),(char *)&DAT_00272a70,1);
                  *(undefined1 *)(iVar12 + 0x45) = 0;
                  fn_00276c78(param_1,iVar9,2);
                }
                fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 0xc));
                fn_00154a6c();
              }
              else if (cVar2 == '\x03') {
                fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar9 + 0xc));
                iVar12 = fn_00154a6c();
                if (iVar12 != 0) {
                  fn_00276c78(param_1,iVar9,0);
                }
              }
            }
          }
        }
LAB_00270de8:
        iVar6 = iVar6 + 0x1c;
      } while (iVar6 != iVar10);
    }
    piVar4 = (int *)fn_006f72e0(DAT_008977e0);
    piVar5 = (int *)(**(code **)(*piVar4 + 0x4c))();
    piVar11 = *(int **)(param_1 + 0x28);
    for (piVar4 = *(int **)(param_1 + 0x24); piVar4 != piVar11; piVar4 = piVar4 + 1) {
      if (*(char *)(*piVar4 + 0x10) != '\0') {
        bVar3 = true;
        for (iVar6 = *piVar5; iVar6 != piVar5[1]; iVar6 = iVar6 + 0x1c) {
          if ((*(char *)(iVar6 + 0x15) != '\0') && (*(int *)(*piVar4 + 4) == *(int *)(iVar6 + 4))) {
            bVar3 = false;
            break;
          }
        }
        if (bVar3) {
          iVar6 = *piVar4;
          cVar2 = *(char *)(iVar6 + 0x10);
          if (cVar2 == '\x01' || cVar2 == '\x02') {
            fn_00276c78(param_1,iVar6,3);
          }
          else if (cVar2 == '\x03') {
            fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar6 + 0xc));
            iVar10 = fn_00154a6c();
            if (iVar10 != 0) {
              fn_00276c78(param_1,iVar6,0);
            }
          }
          if (*(char *)(*piVar4 + 0x10) == '\0') {
            fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*piVar4 + 8),0);
          }
        }
      }
    }
  }
  return;
}



void fn_002761b4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x14) == -1) {
    uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_00892110
                         ,&DAT_002764f4,0,1,0xd);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987a0,(char *)&DAT_00276500,0);
    uVar2 = fn_0026fcd0(param_1,(char *)&DAT_00276518);
    fn_00190d50(uVar2,uVar1);
    fn_00271e64(param_1,(char *)&DAT_00276524,0);
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),(char *)&DAT_00276530,1);
    *(int *)(param_1 + 0x3c) = iVar3;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),(char *)&DAT_0027653c,1);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_00276548,1);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_00276558,1);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_00276568,1);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_00276578,1);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_00276588,1);
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_00276598,1);
    *(undefined4 *)(param_1 + 100) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_002765a8,1);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_002765b8,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                      (*(int **)(iVar3 + 0x10),(char *)&DAT_002765c8,1);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    iVar3 = *(int *)(param_1 + 0x40);
    for (piVar4 = *(int **)(iVar3 + 0x14); piVar4 != (int *)(iVar3 + 0x14); piVar4 = (int *)*piVar4)
    {
      *(byte *)(piVar4 + 0x10) = *(byte *)(piVar4 + 0x10) & 0xfe;
    }
    fn_00271e64(param_1,(char *)&DAT_002755c0,0);
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x60))();
    fn_00270664(param_1,uVar1);
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921c4
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    *(undefined1 *)(param_1 + 9) = 0;
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_0089215c
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


