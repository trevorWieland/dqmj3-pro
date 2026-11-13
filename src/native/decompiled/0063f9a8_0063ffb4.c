#include "0063f9a8_0063ffb4.h"



int fn_0063ffb4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_18 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006506c8(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063fe60(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  bVar1 = 0;
  iVar2 = fn_006f0aa4(param_1);
  iVar3 = fn_006f2df8(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if (iVar3 != 0) {
        uVar6 = 0;
        if (*(char *)(iVar3 + 0x120) != '\0') {
          do {
            pbVar7 = (byte *)(iVar3 + 0x120) + uVar6 * 2 + 4;
            iVar4 = fn_00163a00((int)*(short *)pbVar7);
            if (iVar4 == 2) {
              iVar4 = fn_006f0ae4(param_1);
              iVar5 = fn_006f0a30(param_1);
              if (iVar4 < iVar5) {
                do {
                  iVar5 = fn_006f14a4(param_1,iVar4);
                  if (((iVar5 != 0) &&
                      (iVar5 = fn_0064fed4(param_1,(int)*(short *)pbVar7,iVar2,iVar4), iVar5 != 0))
                     && (iVar5 = fn_006f0cf0(param_1,iVar3,5), iVar5 == 0)) {
                    bVar1 = bVar1 + 1;
                    if (1 < bVar1) {
                      return (int)*(char *)(param_3 + 2);
                    }
                    goto LAB_0063ff70;
                  }
                  iVar4 = (int)(char)((char)iVar4 + '\x01');
                  iVar5 = fn_006f0a30(param_1);
                } while (iVar4 < iVar5);
              }
            }
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < *(byte *)(iVar3 + 0x120));
        }
      }
LAB_0063ff70:
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f2df8(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063fe40(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00653bd4(param_1,5);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063fe20(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00653bd4(param_1,4);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063fe00(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00653bd4(param_1,3);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063fd28(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint unaff_r9;
  undefined4 local_20;
  uint local_1c;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  uVar4 = fn_006f2514(param_1,uVar3,uVar2);
  iVar5 = fn_006f0aa4(param_1);
  iVar6 = fn_006f2df8(param_1);
  local_1c = unaff_r9 & 0xffff0000 | uVar4 & 0xff | 0x300;
  iVar8 = 0;
  local_20 = param_1;
  if (iVar5 < iVar6) {
    do {
      iVar7 = fn_006f14a4(param_1,iVar5);
      if ((iVar7 != 0) && (iVar7 = fn_00654740(&local_20,iVar7,iVar5), iVar7 != 0)) {
        iVar8 = iVar8 + 1;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < iVar6);
    if (1 < iVar8) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_0063fdf8;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063fdf8:
  return (int)cVar1;
}



int fn_0063fcd8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  uVar2 = fn_006f2514(param_1,uVar3,uVar2);
  iVar4 = fn_00654364(param_1,uVar2,1,3);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063fc00(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint unaff_r9;
  undefined4 local_20;
  uint local_1c;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  uVar4 = fn_006f2698(param_1,uVar3,uVar2);
  iVar5 = fn_006f0aa4(param_1);
  iVar6 = fn_006f2df8(param_1);
  local_1c = unaff_r9 & 0xffff0000 | uVar4 & 0xff | 0x200;
  iVar8 = 0;
  local_20 = param_1;
  if (iVar5 < iVar6) {
    do {
      iVar7 = fn_006f14a4(param_1,iVar5);
      if ((iVar7 != 0) && (iVar7 = fn_00654448(&local_20,iVar7,iVar5), iVar7 != 0)) {
        iVar8 = iVar8 + 1;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < iVar6);
    if (1 < iVar8) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_0063fcd0;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063fcd0:
  return (int)cVar1;
}



int fn_0063fbb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  uVar2 = fn_006f2698(param_1,uVar3,uVar2);
  iVar4 = fn_00654364(param_1,uVar2,0,2);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063fac8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_r4;
  int iVar7;
  undefined4 local_28;
  uint local_24;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  uVar3 = fn_006f0ae4(param_1);
  uVar4 = fn_006f0a30(param_1);
  local_24 = unaff_r4 & 0xffff0000 | uVar3 & 0xff | (uVar4 & 0xff) << 8;
  local_28 = param_1;
  do {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar5 = fn_006f14a4(param_1,iVar1);
    if (iVar5 != 0) {
      iVar7 = 0;
      if (*(char *)(iVar5 + 0x120) != '\0') {
        do {
          iVar6 = fn_00653ab4(&local_28,(int)*(short *)((byte *)(iVar5 + 0x120) + iVar7 * 2 + 4),
                               iVar1);
          if (iVar6 != 0) {
            return (int)*(char *)(param_3 + 2);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(iVar5 + 0x120));
      }
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while( true );
}



int fn_0063f9a8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  byte *pbVar5;
  int local_28;
  uint local_24;
  
  uVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  if ((int)uVar1 < iVar2) {
    do {
      if (uVar1 != (int)*(char *)(param_1 + 4)) {
        iVar2 = fn_006f0ae4(param_1);
        iVar3 = fn_006f0a30(param_1);
        local_24 = uVar1 & 0xff | unaff_r4 & 0xffffff00;
        local_28 = param_1;
        iVar4 = fn_006f14a4(param_1,uVar1);
        if (iVar4 != 0) {
          pbVar5 = (byte *)(iVar4 + 0x120);
          for (; iVar2 < iVar3; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
            iVar4 = fn_006f14a4(param_1,iVar2);
            if ((iVar4 != 0) && (unaff_r4 = 0, *pbVar5 != 0)) {
              do {
                iVar4 = fn_00652e3c(&local_28,(int)*(short *)(pbVar5 + unaff_r4 * 2 + 4),iVar2);
                if (iVar4 != 0) {
                  return (int)*(char *)(param_3 + 3);
                }
                unaff_r4 = unaff_r4 + 1;
              } while ((int)unaff_r4 < (int)(uint)*pbVar5);
            }
          }
        }
      }
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f2df8(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}


