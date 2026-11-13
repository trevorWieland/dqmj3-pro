#include "0063f174_0063f894.h"



int fn_0063f894(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  byte *pbVar5;
  undefined4 local_28;
  uint local_24;
  
  uVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  if ((int)uVar1 < iVar2) {
    do {
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
      uVar1 = (uint)(char)((char)uVar1 + '\x01');
      iVar2 = fn_006f2df8(param_1);
    } while ((int)uVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063f810(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r8;
  
  uVar2 = fn_006f0ae4();
  uVar3 = fn_006f0a30(param_1);
  uVar4 = fn_006f2df8(param_1);
  uVar5 = fn_006f0aa4(param_1);
  iVar6 = fn_00781c64(param_1,uVar5,uVar4,param_1,
                       (uVar2 & 0xff) << 8 | unaff_r8 & 0xff000000 | 3 | (uVar3 & 0xff) << 0x10);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063f78c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r8;
  
  uVar2 = fn_006f0ae4();
  uVar3 = fn_006f0a30(param_1);
  uVar4 = fn_006f2df8(param_1);
  uVar5 = fn_006f0aa4(param_1);
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



int fn_0063f708(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r8;
  
  uVar2 = fn_006f0ae4();
  uVar3 = fn_006f0a30(param_1);
  uVar4 = fn_006f2df8(param_1);
  uVar5 = fn_006f0aa4(param_1);
  iVar6 = fn_00781c64(param_1,uVar5,uVar4,param_1,
                       (uVar2 & 0xff) << 8 | unaff_r8 & 0xff000000 | 1 | (uVar3 & 0xff) << 0x10);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063f654(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  uVar3 = fn_006f0a30(param_1);
  uVar4 = fn_006f0ae4(param_1);
  puVar5 = (undefined4 *)fn_0065287c(auStack_20,param_1,uVar4,uVar3);
  local_28 = *puVar5;
  uStack_24 = puVar5[1];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar6 = fn_006f14a4(param_1,iVar1);
    if ((iVar6 != 0) && (iVar6 = fn_00652908(&local_28,iVar6,iVar1), iVar6 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063f4a8(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int local_28;
  uint local_24;
  
  uVar7 = param_2 & 0xffffff00 | (uint)*(byte *)(param_1 + 4);
  uVar1 = fn_006f0a30(param_1);
  uVar2 = fn_006f0ae4(param_1);
  local_28 = param_1;
  local_24 = uVar7;
  iVar3 = fn_00781bc4(param_1,(int)*(char *)(param_1 + 4),uVar2,uVar1);
  if (iVar3 == 0) {
    uVar4 = fn_006f0aa4(param_1);
    iVar3 = fn_006f2df8(param_1);
    if ((int)uVar4 < iVar3) {
      do {
        if ((uVar4 != (int)*(char *)(param_1 + 4)) &&
           (iVar3 = fn_006f14a4(param_1,uVar4), iVar3 != 0)) {
          uVar1 = fn_0063b21c(param_1,(int)*(char *)(param_1 + 4));
          iVar3 = fn_0064fa84(param_1,uVar1,uVar4,0);
          if (iVar3 != 0) {
            iVar3 = fn_006f0ae4(param_1);
            iVar5 = fn_006f0a30(param_1);
            local_24 = uVar4 & 0xff | uVar7 & 0xffffff00;
            local_28 = param_1;
            iVar6 = fn_006f14a4(param_1,uVar4);
            if (iVar6 != 0) {
              pbVar8 = (byte *)(iVar6 + 0x120);
              for (; iVar3 < iVar5; iVar3 = (int)(char)((char)iVar3 + '\x01')) {
                iVar6 = fn_006f14a4(param_1,iVar3);
                if ((iVar6 != 0) && (uVar7 = 0, *pbVar8 != 0)) {
                  do {
                    iVar6 = fn_00652e3c(&local_28,(int)*(short *)(pbVar8 + uVar7 * 2 + 4),iVar3);
                    if (iVar6 != 0) {
                      return (int)*(char *)(param_3 + 2);
                    }
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)(uint)*pbVar8);
                }
              }
            }
          }
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
        iVar3 = fn_006f2df8(param_1);
      } while ((int)uVar4 < iVar3);
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063f340(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int local_28;
  uint local_24;
  
  uVar7 = param_2 & 0xffffff00 | (uint)*(byte *)(param_1 + 4);
  uVar1 = fn_006f0a30(param_1);
  uVar2 = fn_006f0ae4(param_1);
  local_28 = param_1;
  local_24 = uVar7;
  iVar3 = fn_00781bc4(param_1,(int)*(char *)(param_1 + 4),uVar2,uVar1);
  if (iVar3 == 0) {
    uVar4 = fn_006f0aa4(param_1);
    iVar3 = fn_006f2df8(param_1);
    if ((int)uVar4 < iVar3) {
      do {
        if (uVar4 != (int)*(char *)(param_1 + 4)) {
          iVar3 = fn_006f0ae4(param_1);
          iVar5 = fn_006f0a30(param_1);
          local_24 = uVar4 & 0xff | uVar7 & 0xffffff00;
          local_28 = param_1;
          iVar6 = fn_006f14a4(param_1,uVar4);
          if (iVar6 != 0) {
            pbVar8 = (byte *)(iVar6 + 0x120);
            for (; iVar3 < iVar5; iVar3 = (int)(char)((char)iVar3 + '\x01')) {
              iVar6 = fn_006f14a4(param_1,iVar3);
              if ((iVar6 != 0) && (uVar7 = 0, *pbVar8 != 0)) {
                do {
                  iVar6 = fn_00652e3c(&local_28,(int)*(short *)(pbVar8 + uVar7 * 2 + 4),iVar3);
                  if (iVar6 != 0) {
                    return (int)*(char *)(param_3 + 2);
                  }
                  uVar7 = uVar7 + 1;
                } while ((int)uVar7 < (int)(uint)*pbVar8);
              }
            }
          }
        }
        uVar4 = (uint)(char)((char)uVar4 + '\x01');
        iVar3 = fn_006f2df8(param_1);
      } while ((int)uVar4 < iVar3);
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063f29c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  puVar3 = (undefined4 *)fn_00650758(auStack_20,param_1,0,0);
  local_28 = *puVar3;
  uStack_24 = puVar3[1];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_00650954(&local_28,iVar4,iVar1), iVar4 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063f1f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  puVar3 = (undefined4 *)fn_00650758(auStack_20,param_1,0,0);
  local_28 = *puVar3;
  uStack_24 = puVar3[1];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_006506f4(&local_28,iVar4,iVar1), iVar4 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063f174(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e334(auStack_1c,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}


