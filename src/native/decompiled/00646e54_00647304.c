#include "00646e54_00647304.h"



int fn_00647304(int param_1,short *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  bVar1 = 0;
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
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
              iVar4 = fn_006f0aa4(param_1);
              iVar5 = fn_006f2df8(param_1);
              if (iVar4 < iVar5) {
                do {
                  iVar5 = fn_006f14a4(param_1,iVar4);
                  if ((((iVar5 != 0) &&
                       (iVar5 = fn_0064fed4(param_1,(int)*(short *)pbVar7,iVar2,iVar4), iVar5 != 0)
                       ) && (iVar5 = fn_006f0d1c(param_1,iVar3,5), iVar5 == 0)) &&
                     (iVar5 = fn_006f1838(param_1,(int)*param_2,*(undefined4 *)(param_1 + 0xc),
                                           iVar3), iVar5 == 0)) {
                    bVar1 = bVar1 + 1;
                    if (1 < bVar1) {
                      return (int)*(char *)(param_3 + 2);
                    }
                    goto LAB_00647440;
                  }
                  iVar4 = (int)(char)((char)iVar4 + '\x01');
                  iVar5 = fn_006f2df8(param_1);
                } while (iVar4 < iVar5);
              }
            }
            uVar6 = uVar6 + 1 & 0xff;
          } while (uVar6 < *(byte *)(iVar3 + 0x120));
        }
      }
LAB_00647440:
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00647280(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r8;
  
  uVar2 = fn_006f0aa4();
  uVar3 = fn_006f2df8(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00781c64(param_1,uVar5,uVar4,param_1,
                       (uVar2 & 0xff) << 8 | unaff_r8 & 0xff000000 | 2 | (uVar3 & 0xff) << 0x10);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00647260(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00653e24(param_1,5);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00647240(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00653e24(param_1,4);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00647220(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00653e24(param_1,3);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00647138(undefined4 param_1,ushort *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f2514(param_1,uVar3,uVar2);
  iVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_006f0a30(param_1);
  local_24 = uVar4 & 0xff | 0x300 | (uint)*param_2 << 0x10;
  iVar8 = 0;
  local_28 = param_1;
  if (iVar5 < iVar6) {
    do {
      iVar7 = fn_006f14a4(param_1,iVar5);
      if ((iVar7 != 0) && (iVar7 = fn_00654aec(&local_28,iVar7,iVar5), iVar7 != 0)) {
        iVar8 = iVar8 + 1;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < iVar6);
    if (1 < iVar8) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00647218;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00647218:
  return (int)cVar1;
}



int fn_006470dc(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar2 = fn_006f2514(param_1,uVar3,uVar2);
  iVar4 = fn_00654900(param_1,uVar2,1,3,(int)*param_2);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00646ff4(undefined4 param_1,ushort *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f2698(param_1,uVar3,uVar2);
  iVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_006f0a30(param_1);
  local_24 = uVar4 & 0xff | 0x1000 | (uint)*param_2 << 0x10;
  iVar8 = 0;
  local_28 = param_1;
  if (iVar5 < iVar6) {
    do {
      iVar7 = fn_006f14a4(param_1,iVar5);
      if ((iVar7 != 0) && (iVar7 = fn_00654a80(&local_28,iVar7,iVar5), iVar7 != 0)) {
        iVar8 = iVar8 + 1;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < iVar6);
    if (1 < iVar8) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_006470d4;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_006470d4:
  return (int)cVar1;
}



int fn_00646f98(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar2 = fn_006f2698(param_1,uVar3,uVar2);
  iVar4 = fn_00654900(param_1,uVar2,0,0x10,(int)*param_2);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00646eb0(undefined4 param_1,ushort *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f2698(param_1,uVar3,uVar2);
  iVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_006f0a30(param_1);
  local_24 = uVar4 & 0xff | 0x200 | (uint)*param_2 << 0x10;
  iVar8 = 0;
  local_28 = param_1;
  if (iVar5 < iVar6) {
    do {
      iVar7 = fn_006f14a4(param_1,iVar5);
      if ((iVar7 != 0) && (iVar7 = fn_00654a80(&local_28,iVar7,iVar5), iVar7 != 0)) {
        iVar8 = iVar8 + 1;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < iVar6);
    if (1 < iVar8) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00646f90;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00646f90:
  return (int)cVar1;
}



int fn_00646e54(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar2 = fn_006f2698(param_1,uVar3,uVar2);
  iVar4 = fn_00654900(param_1,uVar2,0,2,(int)*param_2);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}


