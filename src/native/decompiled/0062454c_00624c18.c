#include "0062454c_00624c18.h"



void fn_00624c18(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = 0;
  for (iVar3 = param_3; iVar3 < param_4; iVar3 = iVar3 + 1) {
    iVar9 = param_2 + iVar3 * 0x1a0;
    uVar7 = (uint)*(short *)(iVar9 + 0x18);
    if (0 < (int)(uVar7 - 1)) {
      piVar1 = (int *)(iVar9 + 0x14);
      if ((uVar7 & 1) == 0) {
        piVar1 = (int *)(iVar9 + 0x1c);
        iVar4 = iVar4 + *piVar1;
      }
      iVar5 = piVar1[2];
      iVar8 = 0;
      for (iVar2 = (int)(uVar7 - 1) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar4 = iVar4 + iVar5;
        iVar5 = piVar1[6];
        iVar8 = iVar8 + piVar1[4];
        piVar1 = piVar1 + 4;
      }
      iVar4 = iVar4 + iVar8;
    }
    if (-1 < (int)(uVar7 - 1)) {
      iVar4 = iVar4 + *(int *)(iVar9 + (uVar7 - 1) * 8 + 0x1c);
    }
  }
  pcVar6 = (char *)(param_2 + param_3 * 0x1a0);
  param_5 = param_5 + 0x180388;
  iVar3 = fn_006196d8((int)*pcVar6);
  if (iVar3 == 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar3 = param_6 + *(int *)(param_6 + 4) * 0x1a0;
  *(undefined2 *)(iVar3 + 0x20a0) = 1;
  *(int *)(iVar3 + 0x20a4) = iVar4;
  *(undefined1 *)(iVar3 + 0x208a) = 4;
  *(undefined2 *)(iVar3 + 0x208c) = 10;
  *(char *)(iVar3 + 0x2088) = *pcVar6;
  *(char *)(iVar3 + 0x2089) = *pcVar6;
  *(undefined1 *)(iVar3 + 0x208e) = 4;
  *(undefined1 *)(iVar3 + 0x208f) = 8;
  *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  fn_0062187c(param_1,(char *)(iVar3 + 0x2088),param_5);
  fn_00654bf4(param_5,*(undefined4 *)(iVar3 + 0x221c));
  fn_00654c30(param_5,*(undefined4 *)(iVar3 + 0x2220));
  return;
}



void fn_00624960(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  iVar5 = 0x10;
  uVar4 = param_2;
  do {
    cVar1 = (char)iVar5;
    if (*(char *)(param_2 + 0xfb) != '\0') {
      uVar3 = iVar5 - 0x10;
      if (uVar3 >= 8) {
        uVar4 = iVar5 - 0x18;
      }
      if (uVar3 < 8 || uVar4 < 8) {
        bVar6 = uVar3 < 4;
        if (!bVar6) {
          uVar3 = iVar5 - 0x18;
        }
        if ((bVar6 || uVar3 < 4) || (iVar5 == 0x20 || iVar5 == 0x22)) {
          cVar2 = cVar1 + '\x04';
        }
        else {
          cVar2 = cVar1 + -4;
        }
        iVar5 = (int)cVar2;
      }
      else if (iVar5 - 0x20U < 2) {
        if (iVar5 == 0x20 || iVar5 == 0x22) {
          iVar5 = 0x21;
        }
        else {
          iVar5 = 0x20;
        }
      }
      else if (iVar5 - 0x22U < 2) {
        if (iVar5 == 0x20 || iVar5 == 0x22) {
          iVar5 = 0x23;
        }
        else {
          iVar5 = 0x22;
        }
      }
      else {
        iVar5 = 0;
      }
    }
    uVar7 = fn_006f447c(param_2 + iVar5 * 0x418 + -0x4080);
    uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      *(undefined1 *)(param_1 + iVar5 + -8) = 1;
    }
    iVar5 = (int)(char)(cVar1 + '\x01');
  } while (iVar5 < 0x18);
  return;
}



void fn_0062454c(int param_1,char *param_2,uint param_3,int param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int unaff_r5;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 local_1d8;
  int iStack_1d4;
  int local_1d0 [102];
  char *local_38;
  int local_34;
  char *pcStack_30;
  uint uStack_2c;
  int local_28;
  
  local_34 = param_1;
  pcStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_0017821c(&local_1d8,param_2,0x1a0);
  iVar4 = param_3 + ((unsigned int)(local_1d8) >> 8) & 0xff * 0x418;
  if (*param_2 != '\0') {
    unaff_r5 = (int)param_2[1];
  }
  if (*param_2 != '\0' && unaff_r5 != 0) {
    iVar5 = fn_0061be08();
    if (iVar5 == 0) {
      fn_0061be08(unaff_r5);
    }
    else {
      fn_0061be08(unaff_r5);
    }
  }
  local_38 = param_2 + 0x11a;
  uVar12 = 1;
  do {
    if (param_2[6] == '\t') {
      fn_0017821c(&local_1d8,param_2,0x1a0);
      iVar5 = param_3 + ((unsigned int)(local_1d8) >> 8) & 0xff * 0x418;
      cVar2 = param_2[0x59];
      pcVar1 = (char *)-(int)cVar2;
      iVar6 = fn_00182924(1);
      iVar6 = *(char *)(iVar5 + -0x4024) - iVar6;
      iVar7 = fn_00182944(1);
      iVar7 = *(char *)(iVar5 + -0x4024) - iVar7;
      if (param_2[0xba] == '\x01') {
        local_1d8 = pcVar1;
        iStack_1d4 = iVar6;
        local_1d0[0] = iVar7;
        if (iVar7 < iVar6) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        if ((int)pcVar1 < iVar6) {
          piVar11 = &iStack_1d4;
        }
        else {
          piVar11 = &local_1d8;
        }
        if (iVar7 < *piVar11) {
          piVar11 = local_1d0;
        }
        *(int *)(param_2 + 0x1c) = *piVar11;
        if (cVar2 == 0) {
          param_2[0xba] = '\0';
        }
      }
    }
LAB_0062467c:
    do {
      if (param_2[uVar12 + 0x11a] == '\0') {
        cVar2 = '\0';
        if (param_2[uVar12 + 0xb9] != '\0') {
          cVar2 = param_2[uVar12 + 0x58];
        }
        if (param_2[uVar12 + 0xb9] != '\0' && cVar2 != '\0') {
          if (uVar12 == 0xc) {
            if ('\0' < param_2[100]) {
              fn_00180278(iVar4 + -0x4080,-(int)*(short *)(iVar4 + -0x4064));
            }
            uVar12 = 0xd;
            goto LAB_0062467c;
          }
          uVar8 = fn_00182904();
          uVar9 = fn_0068f8dc((int)(short)uVar12);
          cVar2 = fn_0063a54c(uVar9,uVar8);
          iVar5 = fn_0068fbdc((int)(short)uVar12);
          if ((iVar5 == 1) && (local_28 != 0)) {
            cVar2 = cVar2 + '\x01';
          }
          local_1d8 = local_38;
          fn_00180350(iVar4 + -0x4025,uVar12 & 0xff,(int)param_2[uVar12 + 0x58],(int)cVar2);
        }
      }
      else {
        *(undefined1 *)(iVar4 + -0x4025 + (uVar12 & 0xff)) = 0;
        *(undefined1 *)(iVar4 + -0x4025 + (uVar12 & 0xff) + 0x61) = 0;
      }
      uVar12 = uVar12 + 1;
      if (0x60 < (int)uVar12) {
        if (param_5 != 0) {
          fn_00625c54(local_34,param_2,0);
        }
        iVar4 = local_34;
        iVar6 = (int)param_2[1];
        iVar5 = param_3 + iVar6 * 0x418;
        if ((*(char *)(iVar5 + -0x407e) != '\x01') || (*(short *)(iVar5 + -0x4080) < 1))
        goto LAB_0062484c;
        cVar2 = *(char *)(iVar5 + -0x4019);
        bVar13 = cVar2 == '\0';
        if (bVar13) {
          cVar2 = *(char *)(iVar5 + -0x400a);
        }
        bVar14 = bVar13 && cVar2 == '\0';
        if (bVar13 && cVar2 == '\0') {
          bVar14 = *(char *)(iVar5 + -0x4018) == '\0';
        }
        if (!bVar14) goto LAB_0062484c;
        fn_00621304(iVar6,param_3,&local_1d8);
        iVar5 = 1;
        goto LAB_006247d8;
      }
    } while (uVar12 != 1);
  } while( true );
LAB_006247d8:
  do {
    if (param_2[iVar5 + 0x11a] == '\0') {
      cVar2 = '\0';
      if (param_2[iVar5 + 0xb9] != '\0') {
        cVar2 = param_2[iVar5 + 0x58];
      }
      if (((param_2[iVar5 + 0xb9] != '\0' && cVar2 != '\0') &&
          (iVar7 = fn_0068f87c(iVar5), iVar7 == 3)) &&
         (iVar7 = fn_00655430(&local_1d8), iVar7 != 0)) {
        fn_00655e10(iVar4 + 4,iVar6);
        break;
      }
    }
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  } while (iVar5 < 0x61);
LAB_0062484c:
  fn_00629ba8(local_34,param_2,param_3);
  iVar4 = local_34;
  iVar6 = (int)param_2[1];
  iVar5 = param_3 + iVar6 * 0x418;
  if ((*(char *)(iVar5 + -0x407e) == '\a') && (0 < *(short *)(iVar5 + -0x4080))) {
    cVar2 = *(char *)(iVar5 + -0x4019);
    bVar13 = cVar2 == '\0';
    if (bVar13) {
      cVar2 = *(char *)(iVar5 + -0x400a);
    }
    bVar14 = bVar13 && cVar2 == '\0';
    if (bVar13 && cVar2 == '\0') {
      bVar14 = *(char *)(iVar5 + -0x4018) == '\0';
    }
    if (bVar14) {
      fn_00621304(iVar6,param_3,&local_1d8);
      iVar5 = 1;
      do {
        do {
          iVar5 = (int)(char)((char)iVar5 + '\x01');
          if (0x60 < iVar5) goto LAB_0062494c;
        } while ((iVar5 == 1 || iVar5 == 0x32) || (param_2[iVar5 + 0x11a] != '\0'));
        cVar2 = '\0';
        if (param_2[iVar5 + 0xb9] != '\0') {
          cVar2 = param_2[iVar5 + 0x58];
        }
      } while (((param_2[iVar5 + 0xb9] == '\0' || cVar2 == '\0') ||
               (iVar7 = fn_0068f87c(iVar5), iVar7 != 1)) ||
              (iVar7 = fn_00655430(&local_1d8), iVar7 == 0));
      fn_00655e10(iVar4 + 4,iVar6);
    }
  }
LAB_0062494c:
  iVar4 = local_34;
  iVar5 = 0x10;
  uVar12 = param_3;
  do {
    cVar2 = (char)iVar5;
    if (*(char *)(param_3 + 0xfb) != '\0') {
      uVar10 = iVar5 - 0x10;
      if (uVar10 >= 8) {
        uVar12 = iVar5 - 0x18;
      }
      if (uVar10 < 8 || uVar12 < 8) {
        bVar13 = uVar10 < 4;
        if (!bVar13) {
          uVar10 = iVar5 - 0x18;
        }
        if ((bVar13 || uVar10 < 4) || (iVar5 == 0x20 || iVar5 == 0x22)) {
          cVar3 = cVar2 + '\x04';
        }
        else {
          cVar3 = cVar2 + -4;
        }
        iVar5 = (int)cVar3;
      }
      else if (iVar5 - 0x20U < 2) {
        if (iVar5 == 0x20 || iVar5 == 0x22) {
          iVar5 = 0x21;
        }
        else {
          iVar5 = 0x20;
        }
      }
      else if (iVar5 - 0x22U < 2) {
        if (iVar5 == 0x20 || iVar5 == 0x22) {
          iVar5 = 0x23;
        }
        else {
          iVar5 = 0x22;
        }
      }
      else {
        iVar5 = 0;
      }
    }
    uVar15 = fn_006f447c(param_3 + iVar5 * 0x418 + -0x4080);
    uVar12 = (uint)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 == 0) {
      *(undefined1 *)(iVar4 + iVar5 + -8) = 1;
    }
    iVar5 = (int)(char)(cVar2 + '\x01');
  } while (iVar5 < 0x18);
  return;
}


