#include "0064e18c_0064e7c0.h"



bool fn_0064e7c0(int param_1,int param_2)

{
  return *(char *)((uint)*(byte *)(param_1 + 4) + param_2 + 0x5b) < '\0';
}



bool fn_0064e7ac(undefined4 param_1,int param_2)

{
  return *(short *)(param_2 + 0x280) != 0;
}



bool fn_0064e774(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00176dc0(param_2);
  iVar1 = fn_00300f74(iVar1 * *param_1,param_1[1]);
  return *(short *)(param_2 + 0x1c) < iVar1;
}



undefined4 fn_0064e730(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    iVar1 = fn_0068fea8((int)(short)iVar2,(int)*(char *)(param_2 + iVar2 + 0x5b));
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x61);
  return 0;
}



int fn_0064e414(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  iVar5 = 0;
  iVar3 = fn_00163cd8(param_2,(int)*(char *)(param_3 + 0x59));
  switch(iVar3) {
  case 7:
    iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar3 == 0) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x14;
    }
    iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar3 == 0) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x18;
    }
    if (uVar7 < uVar4) {
      do {
        iVar3 = *(int *)(param_1 + 8) + uVar7 * 0x418;
        if (0 < *(short *)(iVar3 + -0x4080)) {
          cVar2 = *(char *)(iVar3 + -0x4019);
          bVar8 = cVar2 == '\0';
          if (bVar8) {
            cVar2 = *(char *)(iVar3 + -0x400a);
          }
          bVar9 = bVar8 && cVar2 == '\0';
          if (bVar8 && cVar2 == '\0') {
            bVar9 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if ((bVar9) && (iVar3 = fn_006f2e14(param_1,param_2,param_3), iVar3 != 0)) {
            iVar3 = fn_006f1be0(param_1,param_2,param_4,param_4,1,0);
            return iVar3;
          }
        }
        uVar7 = (uint)(char)((char)uVar7 + '\x01');
        iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
        if (iVar3 == 0) {
          iVar3 = 0x14;
        }
        else {
          iVar3 = 0x18;
        }
      } while ((int)uVar7 < iVar3);
    }
    break;
  case 8:
    iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar3 == 0) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x14;
    }
    iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
    if (iVar3 == 0) {
      uVar4 = 0x14;
    }
    else {
      uVar4 = 0x18;
    }
    if (uVar7 < uVar4) {
      do {
        iVar3 = *(int *)(param_1 + 8) + uVar7 * 0x418;
        if (0 < *(short *)(iVar3 + -0x4080)) {
          cVar2 = *(char *)(iVar3 + -0x4019);
          bVar8 = cVar2 == '\0';
          if (bVar8) {
            cVar2 = *(char *)(iVar3 + -0x400a);
          }
          bVar9 = bVar8 && cVar2 == '\0';
          if (bVar8 && cVar2 == '\0') {
            bVar9 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if ((bVar9) && (iVar3 = fn_006f2e14(param_1,param_2,param_3), iVar3 != 0)) {
            iVar3 = fn_006f1be0(param_1,param_2,param_4,param_4,1,0);
            iVar5 = iVar5 + iVar3;
          }
        }
        uVar7 = (uint)(char)((char)uVar7 + '\x01');
        iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
        if (iVar3 == 0) {
          iVar3 = 0x14;
        }
        else {
          iVar3 = 0x18;
        }
      } while ((int)uVar7 < iVar3);
    }
    break;
  case 9:
  case 10:
  case 0xc:
    cVar2 = '\0';
    uVar7 = 0;
    if (iVar3 == 0xc) {
      uVar4 = 0x10;
      uVar6 = 0x18;
    }
    else {
      iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar3 == 0) {
        uVar4 = 0x10;
      }
      else {
        uVar4 = 0x14;
      }
      iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar3 == 0) {
        uVar6 = 0x14;
      }
      else {
        uVar6 = 0x18;
      }
    }
    if (uVar4 < uVar6) {
      do {
        iVar3 = *(int *)(param_1 + 8) + uVar4 * 0x418;
        if (0 < *(short *)(iVar3 + -0x4080)) {
          cVar1 = *(char *)(iVar3 + -0x4019);
          bVar8 = cVar1 == '\0';
          if (bVar8) {
            cVar1 = *(char *)(iVar3 + -0x400a);
          }
          bVar9 = bVar8 && cVar1 == '\0';
          if (bVar8 && cVar1 == '\0') {
            bVar9 = *(char *)(iVar3 + -0x4018) == '\0';
          }
          if (bVar9) {
            iVar3 = fn_006f2e14(param_1,param_2,param_3);
            if (iVar3 != 0) {
              uVar7 = uVar7 + 1 & 0xff;
            }
            cVar2 = cVar2 + '\x01';
          }
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
      } while ((int)uVar4 < (int)uVar6);
      if (uVar7 != 0 && cVar2 != '\0') {
        iVar3 = fn_006f1be0(param_1,param_2,param_4,param_4,1,0);
        iVar5 = fn_00655b28(param_2,3);
        iVar3 = fn_00300f74(iVar5 * iVar3 * uVar7,cVar2);
        return iVar3;
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}



void fn_0064e3a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint unaff_r6;
  undefined8 uVar2;
  
  fn_0064ecf4();
  uVar2 = fn_0078209c(param_1,param_4,param_1,unaff_r6 & 0xffffff00 | 1);
  if (((int)uVar2 == 0) &&
     (iVar1 = fn_0078209c(param_1,param_4,param_1,(uint)((ulonglong)uVar2 >> 0x20) & 0xffffff00),
     iVar1 == 0)) {
    fn_00784414(param_1,param_4);
  }
  fn_007832e4(param_1,param_4);
  return;
}



void fn_0064e370(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_006f1be0(*param_1,(int)(short)param_1[1],(int)*(char *)(*param_1 + 4),param_3,1,0);
  return;
}



int fn_0064e334(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  do {
    iVar1 = fn_0068fd00((int)(short)iVar2,(int)*(char *)(param_2 + iVar2 + 0x5b));
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x61);
  return iVar3;
}



void fn_0064e18c(int param_1,undefined2 *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 8) + param_3 * 0x418;
  *param_2 = 7;
  uVar1 = (undefined1)param_3;
  *(undefined1 *)((int)param_2 + 3) = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  if (0 < *(short *)(iVar6 + -0x4080)) {
    cVar2 = *(char *)(iVar6 + -0x4019);
    bVar7 = cVar2 == '\0';
    if (bVar7) {
      cVar2 = *(char *)(iVar6 + -0x400a);
    }
    bVar8 = bVar7 && cVar2 == '\0';
    if (bVar7 && cVar2 == '\0') {
      bVar8 = *(char *)(iVar6 + -0x4018) == '\0';
    }
    if (bVar8) {
      cVar2 = *(char *)(iVar6 + -0x401d);
      if (cVar2 < '\x01') {
        cVar2 = *(char *)(iVar6 + -0x401c);
      }
      if (cVar2 < '\x01') {
        cVar2 = *(char *)(iVar6 + -0x3ff9);
        if (cVar2 < '\x01') {
          cVar2 = *(char *)(iVar6 + -0x400b);
        }
        if ((cVar2 < '\x01') &&
           (iVar4 = fn_006f0934(*(undefined4 *)(param_1 + 8),(int)*(char *)(param_1 + 4)),
           iVar4 == 0)) {
          if (*(char *)(iVar6 + -0x401f) < '\x01') {
            if ('\0' < *(char *)(iVar6 + -0x401e)) {
              iVar6 = fn_006f44fc(*(int *)(param_1 + 8) + param_3 * 0x418 + -0x4080,0xcd);
              if (iVar6 == 0) {
                *param_2 = 7;
              }
              else {
                uVar3 = fn_001746c0(0xcd);
                *param_2 = uVar3;
              }
              *(undefined1 *)((int)param_2 + 3) = uVar1;
              *(undefined1 *)(param_2 + 2) = 0;
              return;
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 8) + param_3 * 0x418;
            iVar4 = fn_006f44fc(iVar6 + -0x4080,0xcc);
            if (iVar4 == 0) {
              uVar5 = 0;
              do {
                iVar4 = uVar5 * 8;
                if ((&DAT_007f0084)[uVar5 * 2] == (int)*(char *)(iVar6 + -0x401f)) {
                  iVar6 = fn_0063a54c(1,(int)(char)(&DAT_007f008b)[iVar4]);
                  if ((char)(&DAT_007f0088)[iVar4] < iVar6) {
                    if ((int)(char)(&DAT_007f0088)[iVar4] + (int)(char)(&DAT_007f0089)[iVar4] <
                        iVar6) {
                      uVar3 = 0x160;
                    }
                    else {
                      uVar3 = 0x15f;
                    }
                  }
                  else {
                    uVar3 = 0x15e;
                  }
                  goto LAB_0064e2d0;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < 4);
              uVar3 = 0;
LAB_0064e2d0:
              *param_2 = uVar3;
            }
            else {
              uVar3 = fn_001746c0(0xcc);
              *param_2 = uVar3;
            }
            *(undefined1 *)((int)param_2 + 3) = uVar1;
            *(undefined1 *)(param_2 + 2) = 0;
          }
        }
      }
    }
  }
  return;
}


