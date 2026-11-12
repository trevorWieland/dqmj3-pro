#include "00640034_00640738.h"



int fn_00640738(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,3,2);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006406c4(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,3,1);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640658(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,2,2);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006405e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,2,1);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640570(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,1,2);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640504(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,1,1);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006403b0(int param_1,short *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *unaff_r4;
  int iVar6;
  int iVar7;
  int local_38;
  uint local_34;
  int iStack_30;
  short *psStack_2c;
  int local_28;
  
  iVar7 = 0;
  iStack_30 = param_1;
  psStack_2c = param_2;
  local_28 = param_3;
  uVar2 = fn_006f0aa4();
  iVar3 = fn_006f2df8(param_1);
  if ((int)uVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,uVar2);
      if (iVar3 != 0) {
        iVar3 = fn_006f0ae4(param_1);
        iVar4 = fn_006f0a30(param_1);
        iVar5 = fn_006f1be0(param_1,(int)*param_2,(int)*(char *)(param_1 + 4),uVar2,1,0);
        local_34 = (uint)unaff_r4 & 0xff00 | uVar2 & 0xff | iVar5 * -0x10000;
        unaff_r4 = (byte *)((uint)unaff_r4 & 0xffffff00);
        local_38 = param_1;
        for (; iVar3 < iVar4; iVar3 = (int)(char)((char)iVar3 + '\x01')) {
          iVar5 = fn_006f14a4(param_1,iVar3);
          if (iVar5 != 0) {
            unaff_r4 = (byte *)(iVar5 + 0x120);
            iVar6 = 0;
            if (*(char *)(iVar5 + 0x120) != '\0') {
              do {
                iVar5 = fn_006509b8(&local_38,(int)*(short *)(unaff_r4 + iVar6 * 2 + 4),iVar3);
                if (iVar5 != 0) {
                  iVar7 = iVar7 + 1;
                  goto LAB_006404c8;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)(uint)*unaff_r4);
            }
          }
        }
      }
LAB_006404c8:
      uVar2 = (uint)(char)((char)uVar2 + '\x01');
      iVar3 = fn_006f2df8(param_1);
    } while ((int)uVar2 < iVar3);
    if (1 < iVar7) {
      cVar1 = *(char *)(local_28 + 2);
      goto LAB_006404fc;
    }
  }
  cVar1 = *(char *)(local_28 + 3);
LAB_006404fc:
  return (int)cVar1;
}



int fn_00640268(int param_1,short *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *unaff_r4;
  int iVar5;
  int local_38;
  uint local_34;
  int iStack_30;
  short *psStack_2c;
  int local_28;
  
  iStack_30 = param_1;
  psStack_2c = param_2;
  local_28 = param_3;
  uVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  if ((int)uVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,uVar1);
      if (iVar2 != 0) {
        iVar2 = fn_006f0ae4(param_1);
        iVar3 = fn_006f0a30(param_1);
        iVar4 = fn_006f1be0(param_1,(int)*param_2,(int)*(char *)(param_1 + 4),uVar1,1,0);
        local_34 = (uint)unaff_r4 & 0xff00 | uVar1 & 0xff | iVar4 * -0x10000;
        unaff_r4 = (byte *)((uint)unaff_r4 & 0xffffff00);
        local_38 = param_1;
        for (; iVar2 < iVar3; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
          iVar4 = fn_006f14a4(param_1,iVar2);
          if (iVar4 != 0) {
            unaff_r4 = (byte *)(iVar4 + 0x120);
            iVar5 = 0;
            if (*(char *)(iVar4 + 0x120) != '\0') {
              do {
                iVar4 = fn_006509b8(&local_38,(int)*(short *)(unaff_r4 + iVar5 * 2 + 4),iVar2);
                if (iVar4 != 0) {
                  return (int)*(char *)(local_28 + 2);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uint)*unaff_r4);
            }
          }
        }
      }
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f2df8(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(local_28 + 3);
}



int fn_00640148(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *unaff_r4;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  uint local_2c;
  
  iVar7 = 0;
  uVar2 = fn_006f0aa4();
  iVar3 = fn_006f2df8(param_1);
  if ((int)uVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,uVar2);
      if (iVar3 != 0) {
        iVar3 = fn_006f0ae4(param_1);
        iVar4 = fn_006f0a30(param_1);
        local_2c = uVar2 & 0xff | (uint)unaff_r4 & 0xffffff00;
        local_30 = param_1;
        for (; iVar3 < iVar4; iVar3 = (int)(char)((char)iVar3 + '\x01')) {
          iVar5 = fn_006f14a4(param_1,iVar3);
          if (iVar5 != 0) {
            unaff_r4 = (byte *)(iVar5 + 0x120);
            iVar6 = 0;
            if (*(char *)(iVar5 + 0x120) != '\0') {
              do {
                iVar5 = fn_0064ff60(&local_30,(int)*(short *)(unaff_r4 + iVar6 * 2 + 4),iVar3);
                if (iVar5 != 0) {
                  iVar7 = iVar7 + 1;
                  goto LAB_00640234;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)(uint)*unaff_r4);
            }
          }
        }
      }
LAB_00640234:
      uVar2 = (uint)(char)((char)uVar2 + '\x01');
      iVar3 = fn_006f2df8(param_1);
    } while ((int)uVar2 < iVar3);
    if (1 < iVar7) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00640260;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00640260:
  return (int)cVar1;
}



int fn_00640034(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *unaff_r4;
  int iVar5;
  undefined4 local_28;
  uint local_24;
  
  uVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  if ((int)uVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,uVar1);
      if (iVar2 != 0) {
        iVar2 = fn_006f0ae4(param_1);
        iVar3 = fn_006f0a30(param_1);
        local_24 = uVar1 & 0xff | (uint)unaff_r4 & 0xffffff00;
        local_28 = param_1;
        for (; iVar2 < iVar3; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
          iVar4 = fn_006f14a4(param_1,iVar2);
          if (iVar4 != 0) {
            unaff_r4 = (byte *)(iVar4 + 0x120);
            iVar5 = 0;
            if (*(char *)(iVar4 + 0x120) != '\0') {
              do {
                iVar4 = fn_0064ff60(&local_28,(int)*(short *)(unaff_r4 + iVar5 * 2 + 4),iVar2);
                if (iVar4 != 0) {
                  return (int)*(char *)(param_3 + 2);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uint)*unaff_r4);
            }
          }
        }
      }
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f2df8(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 3);
}


