#include "0061d42c_0061d498.h"



undefined4 fn_0061d498(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  cVar1 = param_2[0xc];
  if (*param_2 != '\0' || cVar1 != '\0') {
    iVar5 = param_3 + 0x180388;
    if (*param_2 != '\0') {
      fn_00639b4c(param_1,param_2,0x20,0x22,0x10,0x18,iVar5);
    }
    if (cVar1 != '\0') {
      fn_00639b4c(param_1,param_2 + 0xc,0x21,0x23,0x14,0x1c,iVar5);
    }
    pcVar4 = (char *)(param_3 + 0x185ec0);
    *pcVar4 = *param_2;
    *(char *)(param_3 + 0x185ec1) = param_2[4];
    *(char *)(param_3 + 0x185ec2) = param_2[5];
    *(char *)(param_3 + 0x185ec3) = param_2[6];
    *(char *)(param_3 + 0x185ec4) = param_2[7];
    *(char *)(param_3 + 0x185ec5) = param_2[8];
    *(char *)(param_3 + 0x185ec6) = param_2[9];
    *(char *)(param_3 + 0x185ec7) = param_2[10];
    *(char *)(param_3 + 0x185ec8) = param_2[0xb];
    *pcVar4 = *param_2;
    *(char *)(param_3 + 0x185ec9) = param_2[0xc];
    *(char *)(param_3 + 0x185eca) = param_2[0x10];
    *(char *)(param_3 + 0x185ecb) = param_2[0x11];
    *(char *)(param_3 + 0x185ecc) = param_2[0x12];
    *(char *)(param_3 + 0x185ecd) = param_2[0x13];
    *(char *)(param_3 + 0x185ece) = param_2[0x14];
    *(char *)(param_3 + 0x185ecf) = param_2[0x15];
    *(char *)(param_3 + 0x185ed0) = param_2[0x16];
    *(char *)(param_3 + 0x185ed1) = param_2[0x17];
    *(char *)(param_3 + 0x185ec9) = param_2[0xc];
    if (*pcVar4 == '\x02') {
      iVar3 = fn_00621250(iVar5);
      *(int *)(param_3 + 0x185ed8) = (int)((ulonglong)(uint)(iVar3 * 10000) * 0x28f5c29 >> 0x20);
      fn_00654c30(iVar5);
    }
    if (*(char *)(param_3 + 0x185ec9) == '\x02') {
      iVar3 = fn_00621250(iVar5);
      *(int *)(param_3 + 0x185ed4) = (int)((ulonglong)(uint)(iVar3 * 10000) * 0x28f5c29 >> 0x20);
      fn_00654bf4(iVar5);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_0061d42c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar8;
  undefined4 unaff_r6;
  uint uVar9;
  undefined4 unaff_r7;
  uint uVar10;
  undefined4 unaff_r8;
  short *psVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar5 = fn_00654ee8();
  uVar5 = fn_002697b4(uVar5,*(undefined4 *)(param_4 + 0x180478),*(undefined4 *)(param_4 + 0x180470)
                       ,*(undefined4 *)(param_4 + 0x180474),*(undefined4 *)(param_4 + 0x180478),
                       *(undefined4 *)(param_4 + 0x18047c),*(undefined4 *)(param_4 + 0x180480),
                       *(undefined4 *)(param_4 + 0x180484));
  iVar6 = fn_0025fed0(uVar5,param_3);
  uVar5 = fn_0025ff10(uVar5,param_3);
  param_4 = param_4 + 0x180388;
  uVar8 = param_2 - 0x10;
  uVar9 = param_2 - 0x18;
  switch(uVar5) {
  default:
    return 0;
  case 1:
    if ((3 < uVar8 && 3 < uVar9) && (param_2 != 0x20 && param_2 != 0x22)) {
      return 0x14;
    }
    break;
  case 2:
    iVar6 = 100;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0x18;
    }
    if (uVar2 <= uVar10) {
      return 0;
    }
    do {
      iVar3 = param_4 + uVar10 * 0x418;
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
        if ((bVar15) && (iVar4 = fn_006196d8(uVar10,param_4), iVar4 == 0)) {
          uVar5 = fn_00176dc0((short *)(iVar3 + -0x4080));
          iVar3 = *(short *)(iVar3 + -0x4064) * 100;
          iVar4 = fn_00300f74(iVar3,uVar5,iVar3,100,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8);
          bVar14 = uVar12 != 0;
          iVar3 = 0;
          if (bVar14) {
            iVar3 = iVar4 - iVar6;
          }
          bVar13 = iVar4 == iVar6;
          bVar15 = bVar14 && SBORROW4(iVar4,iVar6);
          if ((!bVar14 || bVar13) || iVar3 < 0 != bVar15) {
            iVar6 = iVar4;
          }
          if ((!bVar14 || bVar13) || iVar3 < 0 != bVar15) {
            uVar12 = uVar10;
          }
        }
      }
      uVar10 = (uint)(char)((char)uVar10 + '\x01');
      if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
        iVar3 = 0x14;
      }
      else {
        iVar3 = 0x18;
      }
    } while ((int)uVar10 < iVar3);
    return uVar12;
  case 3:
    iVar6 = 100;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0x18;
    }
    if (uVar10 < uVar2) {
      do {
        iVar3 = param_4 + uVar10 * 0x418;
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
          if ((bVar15) && (iVar4 = fn_006196d8(uVar10,param_4), iVar4 == 0)) {
            uVar5 = fn_00176e70((short *)(iVar3 + -0x4080));
            iVar4 = fn_00300f74(*(short *)(iVar3 + -0x4062) * 100,uVar5);
            bVar14 = uVar12 != 0;
            iVar3 = 0;
            if (bVar14) {
              iVar3 = iVar4 - iVar6;
            }
            bVar13 = iVar4 == iVar6;
            bVar15 = bVar14 && SBORROW4(iVar4,iVar6);
            if ((!bVar14 || bVar13) || iVar3 < 0 != bVar15) {
              iVar6 = iVar4;
            }
            if ((!bVar14 || bVar13) || iVar3 < 0 != bVar15) {
              uVar12 = uVar10;
            }
          }
        }
        uVar10 = (uint)(char)((char)uVar10 + '\x01');
        if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
          iVar3 = 0x14;
        }
        else {
          iVar3 = 0x18;
        }
      } while ((int)uVar10 < iVar3);
    }
    return uVar12;
  case 4:
    iVar6 = 0;
    uVar12 = 0;
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0x18;
    }
    if (uVar10 < uVar2) {
      do {
        iVar3 = param_4 + uVar10 * 0x418;
        psVar11 = (short *)(iVar3 + -0x4080);
        if (0 < *psVar11) {
          cVar1 = *(char *)(iVar3 + -0x4019);
          bVar14 = cVar1 == '\0';
          if (bVar14) {
            cVar1 = *(char *)(iVar3 + -0x400a);
          }
          bVar15 = bVar14 && cVar1 == '\0';
          if (bVar14 && cVar1 == '\0') {
            bVar15 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if ((bVar15) && ((uVar12 == 0 || (iVar3 = fn_006f3374(psVar11), iVar6 < iVar3)))) {
            iVar6 = fn_006f3374(psVar11);
            uVar12 = uVar10;
          }
        }
        uVar10 = (uint)(char)((char)uVar10 + '\x01');
        if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
          iVar3 = 0x14;
        }
        else {
          iVar3 = 0x18;
        }
      } while ((int)uVar10 < iVar3);
    }
    return uVar12;
  case 5:
    if (iVar6 == 0x23f) {
      if (uVar8 < 4 || uVar9 < 4) {
        return 0x14;
      }
      if (param_2 == 0x20 || param_2 == 0x22) {
        return 0x14;
      }
    }
    else {
      if (iVar6 != 0x240) {
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
      uVar2 = 0x18;
    }
    else {
      uVar2 = 0x14;
    }
    if (uVar2 <= uVar10) {
      return 0;
    }
    do {
      iVar6 = param_4 + uVar10 * 0x418;
      if (0 < *(short *)(iVar6 + -0x4080)) {
        cVar1 = *(char *)(iVar6 + -0x4019);
        bVar14 = cVar1 == '\0';
        if (bVar14) {
          cVar1 = *(char *)(iVar6 + -0x400a);
        }
        bVar15 = bVar14 && cVar1 == '\0';
        if (bVar14 && cVar1 == '\0') {
          bVar15 = *(char *)(iVar6 + -0x4018) == '\0';
        }
        if ((bVar15) && ((uVar12 == 0 || (sVar7 < *(short *)(iVar6 + -0x4064))))) {
          sVar7 = *(short *)(iVar6 + -0x4064);
          uVar12 = uVar10;
        }
      }
      uVar10 = (uint)(char)((char)uVar10 + '\x01');
      if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
        iVar6 = 0x18;
      }
      else {
        iVar6 = 0x14;
      }
    } while ((int)uVar10 < iVar6);
    return uVar12;
  case 8:
    uVar12 = 0;
    iVar6 = fn_00182924(1);
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar10 = 0x10;
    }
    else {
      uVar10 = 0x14;
    }
    if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0x18;
    }
    if (uVar10 < uVar2) {
      do {
        iVar3 = param_4 + uVar10 * 0x418;
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
          if (bVar15) {
            iVar4 = (int)*(char *)(iVar3 + -0x4024);
            bVar14 = uVar12 != 0;
            iVar3 = 0;
            if (bVar14) {
              iVar3 = iVar4 - iVar6;
            }
            bVar13 = iVar4 == iVar6;
            bVar15 = bVar14 && SBORROW4(iVar4,iVar6);
            if ((!bVar14 || bVar13) || iVar3 < 0 != bVar15) {
              iVar6 = iVar4;
            }
            if ((!bVar14 || bVar13) || iVar3 < 0 != bVar15) {
              uVar12 = uVar10;
            }
          }
        }
        uVar10 = (uint)(char)((char)uVar10 + '\x01');
        if ((uVar8 < 4 || uVar9 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
          iVar3 = 0x14;
        }
        else {
          iVar3 = 0x18;
        }
      } while ((int)uVar10 < iVar3);
    }
    return uVar12;
  }
  return 0x10;
}


