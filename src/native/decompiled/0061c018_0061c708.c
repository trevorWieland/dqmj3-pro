#include "0061c018_0061c708.h"



int fn_0061c708(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = fn_00654ee8();
  iVar2 = fn_002697b4(uVar1,*(undefined4 *)(param_3 + 0x180478),*(undefined4 *)(param_3 + 0x180470)
                       ,*(undefined4 *)(param_3 + 0x180474),*(undefined4 *)(param_3 + 0x180478),
                       *(undefined4 *)(param_3 + 0x18047c),*(undefined4 *)(param_3 + 0x180480),
                       *(undefined4 *)(param_3 + 0x180484));
  if ((((-1 < iVar2 && -1 < param_2) && (iVar3 = fn_0025fed0(iVar2,param_2), iVar3 - 1U < 699)) &&
      (iVar2 = fn_006196d8(0,param_3 + 0x180388), iVar2 != 0)) &&
     (iVar2 = fn_006924f4(iVar3), iVar2 != 0)) {
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 fn_0061c62c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = param_1 - 0x18;
  uVar6 = param_1 - 0x10;
  if ((uVar6 < 4 || uVar5 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0x14;
  }
  if ((uVar6 < 4 || uVar5 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 0x18;
  }
  if (uVar3 < uVar1) {
    do {
      iVar4 = param_2 + 0x180388 + (char)uVar3 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        iVar2 = fn_00176dc0((short *)(iVar4 + -0x4080));
        bVar7 = iVar2 == *(short *)(iVar4 + -0x4064);
        if (iVar2 <= *(short *)(iVar4 + -0x4064)) {
          bVar7 = *(char *)(iVar4 + -0x4019) == '\0';
        }
        if (!bVar7) {
          return 1;
        }
      }
      uVar3 = uVar3 + 1;
      if ((uVar6 < 4 || uVar5 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar4 = 0x14;
      }
      else {
        iVar4 = 0x18;
      }
    } while ((int)uVar3 < iVar4);
  }
  return 0;
}



uint fn_0061c018(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar8;
  undefined4 unaff_r7;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar2 = fn_00654ee8();
  uVar2 = fn_002697b4(uVar2,*(undefined4 *)(param_3 + 0x180478),*(undefined4 *)(param_3 + 0x180470)
                       ,*(undefined4 *)(param_3 + 0x180474),*(undefined4 *)(param_3 + 0x180478),
                       *(undefined4 *)(param_3 + 0x18047c),*(undefined4 *)(param_3 + 0x180480),
                       *(undefined4 *)(param_3 + 0x180484));
  iVar3 = fn_0025fd9c();
  uVar2 = fn_0025fdc0(uVar2);
  param_3 = param_3 + 0x180388;
  uVar8 = param_2 - 0x10;
  uVar9 = param_2 - 0x18;
  switch(uVar2) {
  default:
    return 0;
  case 1:
    if ((3 < uVar8 && 3 < uVar9) && (param_2 != 0x20 && param_2 != 0x22)) {
      return 0x14;
    }
    break;
  case 2:
    iVar3 = 100;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x18;
    }
    if (uVar4 <= uVar10) {
      return 0;
    }
    do {
      iVar5 = param_3 + uVar10 * 0x418;
      if (0 < *(short *)(iVar5 + -0x4080)) {
        cVar1 = *(char *)(iVar5 + -0x4019);
        bVar14 = cVar1 == '\0';
        if (bVar14) {
          cVar1 = *(char *)(iVar5 + -0x400a);
        }
        bVar15 = bVar14 && cVar1 == '\0';
        if (bVar14 && cVar1 == '\0') {
          bVar15 = *(char *)(iVar5 + -0x4018) == '\0';
        }
        if ((bVar15) && (iVar6 = fn_006196d8(uVar10,param_3), iVar6 == 0)) {
          uVar2 = fn_00176dc0((short *)(iVar5 + -0x4080));
          iVar5 = *(short *)(iVar5 + -0x4064) * 100;
          iVar6 = fn_00300f74(iVar5,uVar2,iVar5,100,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
          bVar14 = uVar12 != 0;
          iVar5 = 0;
          if (bVar14) {
            iVar5 = iVar6 - iVar3;
          }
          bVar13 = iVar6 == iVar3;
          bVar15 = bVar14 && SBORROW4(iVar6,iVar3);
          if ((!bVar14 || bVar13) || iVar5 < 0 != bVar15) {
            iVar3 = iVar6;
          }
          if ((!bVar14 || bVar13) || iVar5 < 0 != bVar15) {
            uVar12 = uVar10;
          }
        }
      }
      uVar10 = (uint)(char)((char)uVar10 + '\x01');
      if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
        iVar5 = 0x14;
      }
      else {
        iVar5 = 0x18;
      }
    } while ((int)uVar10 < iVar5);
    return uVar12;
  case 3:
    iVar3 = 100;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x18;
    }
    if (uVar10 < uVar4) {
      do {
        iVar5 = param_3 + uVar10 * 0x418;
        if (0 < *(short *)(iVar5 + -0x4080)) {
          cVar1 = *(char *)(iVar5 + -0x4019);
          bVar14 = cVar1 == '\0';
          if (bVar14) {
            cVar1 = *(char *)(iVar5 + -0x400a);
          }
          bVar15 = bVar14 && cVar1 == '\0';
          if (bVar14 && cVar1 == '\0') {
            bVar15 = *(char *)(iVar5 + -0x4018) == '\0';
          }
          if ((bVar15) && (iVar6 = fn_006196d8(uVar10,param_3), iVar6 == 0)) {
            uVar2 = fn_00176e70((short *)(iVar5 + -0x4080));
            iVar6 = fn_00300f74(*(short *)(iVar5 + -0x4062) * 100,uVar2);
            bVar14 = uVar12 != 0;
            iVar5 = 0;
            if (bVar14) {
              iVar5 = iVar6 - iVar3;
            }
            bVar13 = iVar6 == iVar3;
            bVar15 = bVar14 && SBORROW4(iVar6,iVar3);
            if ((!bVar14 || bVar13) || iVar5 < 0 != bVar15) {
              iVar3 = iVar6;
            }
            if ((!bVar14 || bVar13) || iVar5 < 0 != bVar15) {
              uVar12 = uVar10;
            }
          }
        }
        uVar10 = (uint)(char)((char)uVar10 + '\x01');
        if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
          iVar5 = 0x14;
        }
        else {
          iVar5 = 0x18;
        }
      } while ((int)uVar10 < iVar5);
    }
    return uVar12;
  case 4:
    iVar3 = 0;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x18;
    }
    if (uVar10 < uVar4) {
      do {
        iVar5 = param_3 + uVar10 * 0x418;
        psVar11 = (short *)(iVar5 + -0x4080);
        if (0 < *psVar11) {
          cVar1 = *(char *)(iVar5 + -0x4019);
          bVar14 = cVar1 == '\0';
          if (bVar14) {
            cVar1 = *(char *)(iVar5 + -0x400a);
          }
          bVar15 = bVar14 && cVar1 == '\0';
          if (bVar14 && cVar1 == '\0') {
            bVar15 = *(char *)(iVar5 + -0x4018) == '\0';
          }
          if ((bVar15) && ((uVar12 == 0 || (iVar5 = fn_006f3374(psVar11), iVar3 < iVar5)))) {
            iVar3 = fn_006f3374(psVar11);
            uVar12 = uVar10;
          }
        }
        uVar10 = (uint)(char)((char)uVar10 + '\x01');
        if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
          iVar5 = 0x14;
        }
        else {
          iVar5 = 0x18;
        }
      } while ((int)uVar10 < iVar5);
    }
    return uVar12;
  case 5:
    if (iVar3 == 0x23f) {
      if (uVar8 < 4 || uVar9 < 4) {
        return 0x14;
      }
      if (param_2 == 0x20 || param_2 == 0x22) {
        return 0x14;
      }
    }
    else {
      if (iVar3 != 0x240) {
        return 0;
      }
      if (uVar8 < 4 || uVar9 < 4) {
        return 0x14;
      }
      if (param_2 == 0x20 || param_2 == 0x22) {
        return 0x14;
      }
    }
    break;
  case 6:
    if (uVar8 < 4 || uVar9 < 4) {
      return 0x14;
    }
    if (param_2 == 0x20 || param_2 == 0x22) {
      return 0x14;
    }
    break;
  case 7:
    sVar7 = 0;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x14;
    }
    else {
      uVar10 = 0x10;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar4 = 0x18;
    }
    else {
      uVar4 = 0x14;
    }
    if (uVar4 <= uVar10) {
      return 0;
    }
    do {
      iVar3 = param_3 + uVar10 * 0x418;
      if (0 < *(short *)(iVar3 + -0x4080)) {
        cVar1 = *(char *)(iVar3 + -0x4019);
        bVar14 = cVar1 == '\0';
        if (bVar14) {
          cVar1 = *(char *)(iVar3 + -0x400a);
        }
        bVar15 = bVar14 && cVar1 == '\0';
        if (bVar14 && cVar1 == '\0') {
          bVar15 = *(char *)(iVar3 + -0x4018) == '\0';
        }
        if ((bVar15) && ((uVar12 == 0 || (sVar7 < *(short *)(iVar3 + -0x4064))))) {
          sVar7 = *(short *)(iVar3 + -0x4064);
          uVar12 = uVar10;
        }
      }
      uVar10 = (uint)(char)((char)uVar10 + '\x01');
      if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
        iVar3 = 0x18;
      }
      else {
        iVar3 = 0x14;
      }
    } while ((int)uVar10 < iVar3);
    return uVar12;
  case 8:
    uVar12 = 0;
    iVar3 = fn_00182924(1);
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x18;
    }
    if (uVar10 < uVar4) {
      do {
        iVar5 = param_3 + uVar10 * 0x418;
        if (0 < *(short *)(iVar5 + -0x4080)) {
          cVar1 = *(char *)(iVar5 + -0x4019);
          bVar14 = cVar1 == '\0';
          if (bVar14) {
            cVar1 = *(char *)(iVar5 + -0x400a);
          }
          bVar15 = bVar14 && cVar1 == '\0';
          if (bVar14 && cVar1 == '\0') {
            bVar15 = *(char *)(iVar5 + -0x4018) == '\0';
          }
          if (bVar15) {
            iVar6 = (int)*(char *)(iVar5 + -0x4024);
            bVar14 = uVar12 != 0;
            iVar5 = 0;
            if (bVar14) {
              iVar5 = iVar6 - iVar3;
            }
            bVar13 = iVar6 == iVar3;
            bVar15 = bVar14 && SBORROW4(iVar6,iVar3);
            if ((!bVar14 || bVar13) || iVar5 < 0 != bVar15) {
              iVar3 = iVar6;
            }
            if ((!bVar14 || bVar13) || iVar5 < 0 != bVar15) {
              uVar12 = uVar10;
            }
          }
        }
        uVar10 = (uint)(char)((char)uVar10 + '\x01');
        if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
          iVar5 = 0x14;
        }
        else {
          iVar5 = 0x18;
        }
      } while ((int)uVar10 < iVar5);
    }
    return uVar12;
  }
  return 0x10;
}


