#include "002e0768_002e0768.h"



void fn_002e0768(int *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  float in_s0;
  int in_s1;
  float fVar14;
  float fVar15;
  float local_38 [6];
  
  if (param_1[0x37] == 4) {
    return;
  }
  iVar11 = 0;
  fVar14 = 2.139095e+09;
  iVar10 = 0;
  fVar15 = fVar14;
  do {
    if ((int *)param_1[iVar10 + 0x50] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar10 + 0x50] + 0xa8))();
      iVar4 = param_1[iVar10 + 0x50];
      if (*(float *)(iVar4 + 0x188) < fVar15) {
        fVar15 = *(float *)(iVar4 + 0x188);
      }
      in_s0 = *(float *)(iVar4 + 0x18c);
      if (in_s0 < fVar14) {
        fVar14 = in_s0;
      }
      if ((iVar11 == 0) && (*(char *)(iVar4 + 0x5a) != '\0')) {
        iVar11 = 1;
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x10);
  (**(code **)(*param_1 + 0x5c))(param_1,iVar11);
  param_1[0x48] = (int)fVar15;
  param_1[0x49] = (int)fVar14;
  if (*(char *)(DAT_008977e0 + 0x170) == '\x01') {
    return;
  }
  piVar12 = (int *)0x0;
  switch(param_1[0x37]) {
  case 0:
    sVar3 = (short)param_1[0x41] + -1;
    *(short *)(param_1 + 0x41) = sVar3;
    if (0 < sVar3) {
      return;
    }
    if ((*(short *)((int)param_1 + 0x106) == 0) &&
       (piVar5 = (int *)param_1[0x61], piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 0x18))(piVar5,param_1 + 0x50);
    }
    iVar10 = (int)*(short *)((int)param_1 + 0x106);
    if (param_1[0x60] != 0) {
      if (iVar10 < param_1[0x40]) {
        iVar4 = 0;
        iVar11 = iVar10;
        do {
          if (iVar11 < 0) break;
          iVar8 = iVar11;
          if ((param_1[iVar4 + 0x50] != 0) && (iVar8 = iVar11 + -1, iVar11 < 1)) {
            piVar12 = (int *)param_1[iVar4 + 0x50];
            break;
          }
          iVar4 = iVar4 + 1;
          iVar11 = iVar8;
        } while (iVar4 < 0x10);
      }
      fn_0021472c(piVar12);
      (**(code **)(*(int *)param_1[0x61] + 0x24))((int *)param_1[0x61],iVar10);
      local_38[0] = in_s0;
      (**(code **)(*(int *)param_1[0x61] + 0x28))((int *)param_1[0x61],iVar10);
      piVar12[0xc] = in_s1;
      (**(code **)(*piVar12 + 0xd0))(piVar12,local_38);
    }
    sVar3 = *(short *)((int)param_1 + 0x106) + 1;
    *(short *)((int)param_1 + 0x106) = sVar3;
    if (param_1[0x40] <= (int)sVar3) {
      param_1[0x37] = 1;
    }
    *(undefined2 *)(param_1 + 0x41) = 2;
    return;
  case 1:
    iVar10 = fn_006f7a0c();
    iVar10 = fn_006c3a84(*(undefined4 *)(iVar10 + 0x30));
    if (iVar10 != param_1[0x3c]) {
LAB_002e09a0:
      param_1[0x37] = 4;
      return;
    }
    iVar10 = fn_00369238();
    if (iVar10 != param_1[0x3b]) {
      iVar10 = fn_006f7a0c(DAT_008977e0);
      iVar10 = (**(code **)(**(int **)(*(int *)(iVar10 + 0x30) + 0x24) + 0x18))();
      if (iVar10 != 0) goto LAB_002e09a0;
    }
    iVar10 = fn_006f7508(DAT_008977e0);
    iVar11 = *(int *)(iVar10 + 8);
    iVar10 = fn_003f2d04(iVar11,param_1);
    if ((iVar10 == 0) || (*(char *)(iVar11 + 10) != '\x01')) {
      iVar10 = param_1[0x3f];
      uVar9 = fn_006f7508(DAT_008977e0);
      iVar10 = fn_00365890(uVar9,iVar10);
      bVar1 = 0;
      if (iVar10 != 0) {
        bVar1 = *(byte *)(iVar10 + 0x20);
      }
      if (iVar10 == 0 || (bVar1 & 1) == 0) {
        if ((param_1[0x38] != 0) &&
           (iVar10 = param_1[0x38] + -1, param_1[0x38] = iVar10, iVar10 != 0)) {
          return;
        }
        iVar10 = 0;
        if (param_1[0x60] != 0) {
          iVar10 = param_1[0x37];
        }
        if (param_1[0x60] == 0 || iVar10 == 5) {
          return;
        }
        if (*(char *)((int)param_1 + 0x10e) == '\0') {
          fn_006f7508(DAT_008977e0);
          fn_00366d90();
          iVar11 = param_1[0x40];
          iVar10 = 0;
          if ((char)param_1[0x44] != '\0') {
            in_s0 = 0.0;
          }
          if (0 < iVar11) {
            do {
              if (iVar10 < iVar11) {
                iVar8 = 0;
                iVar4 = iVar10;
                do {
                  if (iVar4 < 0) break;
                  iVar6 = iVar4;
                  if ((param_1[iVar8 + 0x50] != 0) && (iVar6 = iVar4 + -1, iVar4 < 1)) {
                    iVar4 = param_1[iVar8 + 0x50];
                    goto LAB_002e0b24;
                  }
                  iVar8 = iVar8 + 1;
                  iVar4 = iVar6;
                } while (iVar8 < 0x10);
              }
              iVar4 = 0;
LAB_002e0b24:
              if (*(float *)(iVar4 + 0x188) < in_s0 * in_s0) {
                return;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar11);
          }
        }
        iVar10 = 0;
        do {
          piVar12 = (int *)param_1[iVar10 + 0x50];
          if ((piVar12 != (int *)0x0) &&
             ((iVar11 = (**(code **)(*piVar12 + 0x144))(piVar12,0), iVar11 != 0 ||
              (iVar11 = fn_00212a24(param_1[iVar10 + 0x50]), iVar11 == 0)))) {
            param_1[0x38] = 0x1e;
            return;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x10);
      }
    }
    param_1[0x37] = 2;
    param_1[0x38] = 0;
    return;
  case 2:
    iVar10 = fn_006f7508();
    iVar11 = *(int *)(iVar10 + 8);
    iVar10 = fn_003f2d04(iVar11,param_1);
    if ((iVar10 == 0) || (*(char *)(iVar11 + 10) != '\x01')) {
      iVar10 = param_1[0x40];
      iVar11 = 0;
      if (0 < iVar10) {
        do {
          if (iVar11 < param_1[0x40]) {
            iVar4 = 0;
            iVar10 = iVar11;
            while (-1 < iVar10) {
              iVar8 = iVar10;
              if ((param_1[iVar4 + 0x50] != 0) && (iVar8 = iVar10 + -1, iVar10 < 1)) {
                piVar12 = (int *)param_1[iVar4 + 0x50];
                iVar10 = (**(code **)(*piVar12 + 0x1c0))(piVar12);
                if (iVar10 == 0) {
                  (**(code **)(*piVar12 + 0x54))(piVar12,1);
                }
                break;
              }
              iVar4 = iVar4 + 1;
              iVar10 = iVar8;
              if (0xf < iVar4) break;
            }
          }
          iVar10 = param_1[0x40];
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
      }
      bVar13 = false;
      iVar11 = 0;
      if (0 < iVar10) {
        do {
          if (iVar11 < iVar10) {
            iVar8 = 0;
            iVar4 = iVar11;
            while (-1 < iVar4) {
              iVar6 = iVar4;
              if ((param_1[iVar8 + 0x50] != 0) && (iVar6 = iVar4 + -1, iVar4 < 1)) {
                if (*(int *)(param_1[iVar8 + 0x50] + 8) == -1 ||
                    *(int *)(param_1[iVar8 + 0x50] + 8) == 0) {
                  bVar13 = true;
                }
                break;
              }
              iVar8 = iVar8 + 1;
              iVar4 = iVar6;
              if (0xf < iVar8) break;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
        if (bVar13) goto switchD_002e0840_default;
      }
      param_1[0x37] = 3;
      cVar2 = (char)param_1[1];
    }
    else {
      iVar10 = fn_006f7508(DAT_008977e0);
      iVar10 = *(int *)(iVar10 + 8);
      if ((int)*(short *)(iVar10 + 4) < param_1[0x40]) {
        iVar4 = 0;
        iVar11 = (int)*(short *)(iVar10 + 4);
        do {
          if (iVar11 < 0) break;
          iVar8 = iVar11;
          if ((param_1[iVar4 + 0x50] != 0) && (iVar8 = iVar11 + -1, iVar11 < 1)) {
            piVar12 = (int *)param_1[iVar4 + 0x50];
            (**(code **)(*piVar12 + 0x54))(piVar12,1);
            *(undefined1 *)(piVar12 + 0xdb) = *(undefined1 *)(iVar10 + 10);
            (**(code **)(*piVar12 + 0x10))(piVar12,iVar10 + 0xc);
            (**(code **)(*piVar12 + 0x1dc))(piVar12,2,0x1a,0);
            if ((char)piVar12[1] == '\0') {
              piVar12[3] = 2;
            }
            fn_003f2dd0(iVar10);
            break;
          }
          iVar4 = iVar4 + 1;
          iVar11 = iVar8;
        } while (iVar4 < 0x10);
      }
      param_1[0x37] = 3;
      cVar2 = (char)param_1[1];
    }
    if (cVar2 == '\0') {
      param_1[3] = 0;
    }
    goto switchD_002e0840_default;
  case 3:
    iVar10 = fn_0036959c(param_1[0x62]);
    (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*(int *)param_1[0x61] + 0x1c))();
    (**(code **)(*(int *)param_1[0x61] + 0x20))();
    iVar11 = 0;
    do {
      iVar4 = param_1[iVar11 + 0x50];
      cVar2 = '\0';
      if (iVar4 != 0) {
        cVar2 = *(char *)(iVar4 + 0x58);
      }
      if (iVar4 != 0 && cVar2 != '\0') {
        iVar11 = 0;
        goto LAB_002e0e84;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x10);
    break;
  case 4:
    return;
  case 5:
    iVar10 = 0;
    do {
      iVar11 = param_1[iVar10 + 0x50];
      cVar2 = '\0';
      if (iVar11 != 0) {
        cVar2 = *(char *)(iVar11 + 0x58);
      }
      if (iVar11 != 0 && cVar2 != '\0') goto switchD_002e0840_default;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    break;
  default:
    goto switchD_002e0840_default;
  }
  param_1[0x37] = 4;
switchD_002e0840_default:
  iVar10 = 0;
  do {
    if ((int *)param_1[iVar10 + 0x50] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar10 + 0x50] + 0x128))();
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x10);
  return;
  while (iVar11 = iVar11 + 1, iVar11 < 0x10) {
LAB_002e0e84:
    if ((param_1[iVar11 + 0x50] != 0) && (*(int *)(param_1[iVar11 + 0x50] + 8) < 2))
    goto LAB_002e0ec8;
  }
  if ((param_1[2] == 0) && ((char)param_1[1] == '\0')) {
    param_1[3] = 1;
  }
LAB_002e0ec8:
  iVar11 = fn_006f7a0c(DAT_008977e0);
  iVar11 = fn_006c3a84(*(undefined4 *)(iVar11 + 0x30));
  if (iVar11 != param_1[0x3c]) {
    iVar11 = fn_006f7a0c(DAT_008977e0);
    iVar11 = fn_006c3a84(*(undefined4 *)(iVar11 + 0x30));
    param_1[0x3c] = iVar11;
    iVar11 = fn_006c393c(param_1[0x62],iVar11);
    if ((1 < (uint)param_1[0x47]) && ((iVar11 == 2 || iVar11 == 3) || iVar11 == 0xf)) {
      uVar9 = 0xffffffff;
      if (iVar11 == 2) {
        uVar9 = 2;
      }
      else if (iVar11 == 3) {
        uVar9 = 3;
      }
      else if (iVar11 == 0xf) {
        uVar9 = 5;
      }
      (**(code **)(*param_1 + 0x6c))(param_1,0,uVar9);
    }
    iVar11 = 0;
    do {
      if (param_1[iVar11 + 0x50] != 0) {
        fn_00683320(param_1[iVar11 + 0x50],7,0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x10);
  }
  if (iVar10 == 0) {
    iVar10 = param_1[0x3d];
    uVar9 = fn_006f7508(DAT_008977e0);
    iVar10 = fn_006c3400(uVar9,(int)(short)iVar10);
    if (iVar10 == 0) {
      iVar10 = param_1[0x3d];
      uVar9 = fn_006f7508(DAT_008977e0);
      iVar10 = fn_006c328c(uVar9,(int)(short)iVar10);
      if (iVar10 == 0) {
        iVar10 = param_1[0x3d];
        uVar9 = fn_006f7508(DAT_008977e0);
        uVar7 = fn_006c32a8(uVar9,(int)(short)iVar10);
        bVar13 = uVar7 == 0;
        if (bVar13) {
          uVar7 = (uint)*(byte *)((int)param_1 + 0x10e);
        }
        if ((bVar13 && uVar7 == 0) && (iVar10 = 0, 0 < param_1[0x40])) {
          do {
            if (iVar10 < param_1[0x40]) {
              iVar4 = 0;
              iVar11 = iVar10;
              do {
                if (iVar11 < 0) break;
                iVar8 = iVar11;
                if ((param_1[iVar4 + 0x50] != 0) && (iVar8 = iVar11 + -1, iVar11 < 1)) {
                  (**(code **)(*(int *)param_1[iVar4 + 0x50] + 0x54))
                            ((int *)param_1[iVar4 + 0x50],0);
                  break;
                }
                iVar4 = iVar4 + 1;
                iVar11 = iVar8;
              } while (iVar4 < 0x10);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < param_1[0x40]);
        }
      }
    }
    if (param_1[0x38] != 0) {
      param_1[0x38] = param_1[0x38] + -1;
    }
  }
  else {
    iVar10 = 0;
    do {
      if (param_1[iVar10 + 0x50] != 0) {
        fn_00683320(param_1[iVar10 + 0x50],6,0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    param_1[0x37] = 5;
  }
  goto switchD_002e0840_default;
}


