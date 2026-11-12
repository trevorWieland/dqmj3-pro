#include "00647494_00647b2c.h"



int fn_00647b2c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_18 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return 0;
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064f530(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00647a90(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_1c = unaff_r8 & 0xffff0000 | 0xb2;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d500(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00647a74(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f2afc();
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_006479f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006f3e88(auStack_1c,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0064796c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_18 = CONCAT22(((unsigned int)(local_18) >> 16) & 0xffff,0x86);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006f44ec(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006478e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006f3e1c(auStack_1c,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006478cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f1d3c();
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006477d4(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  iVar4 = fn_006f2d68(param_1,uVar3,uVar2);
  if ((iVar4 != 0) && (iVar4 = fn_006f14a4(param_1,iVar4), iVar4 != 0)) {
    iVar9 = 0;
    iVar8 = 0;
    iVar5 = fn_006f0aa4(param_1);
    iVar6 = fn_006f2df8(param_1);
    if (iVar5 < iVar6) {
      do {
        iVar6 = fn_006f14a4(param_1,iVar5);
        if ((iVar6 != 0) && (iVar7 = fn_006f3f24(), iVar7 == 0)) {
          iVar6 = fn_006f4044(iVar6);
          iVar8 = iVar8 + iVar6;
          iVar9 = iVar9 + 1;
        }
        iVar5 = (int)(char)((char)iVar5 + '\x01');
        iVar6 = fn_006f2df8(param_1);
      } while (iVar5 < iVar6);
      if (iVar9 != 0) {
        iVar8 = fn_00300f74(iVar8,iVar9);
      }
    }
    iVar4 = fn_006f4044(iVar4);
    if (iVar8 + 100 <= iVar4) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_006478c8;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_006478c8:
  return (int)cVar1;
}



int fn_006476f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  iVar4 = fn_006f2d68(param_1,uVar3,uVar2);
  if ((iVar4 != 0) && (iVar4 = fn_006f14a4(param_1), iVar4 != 0)) {
    iVar8 = 9999;
    iVar5 = fn_006f0aa4(param_1);
    iVar6 = fn_006f2df8(param_1);
    if (iVar5 < iVar6) {
      do {
        iVar6 = fn_006f14a4(param_1,iVar5);
        if (((iVar6 != 0) && (iVar7 = fn_006f3f24(), iVar7 == 0)) &&
           (iVar6 = fn_006f4044(iVar6), iVar6 < iVar8)) {
          iVar8 = iVar6;
        }
        iVar5 = (int)(char)((char)iVar5 + '\x01');
        iVar6 = fn_006f2df8(param_1);
      } while (iVar5 < iVar6);
    }
    iVar4 = fn_006f4044(iVar4);
    if (iVar8 + 100 <= iVar4) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_006477cc;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_006477cc:
  return (int)cVar1;
}



int fn_006475f0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_30 [3];
  
  local_30[0] = 0;
  local_30[1] = 0;
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,local_30,local_30 + 1,0);
  iVar9 = 0;
  iVar4 = fn_006f0aa4(param_1);
  iVar5 = fn_006f2df8(param_1);
  if (iVar4 < iVar5) {
    do {
      iVar5 = fn_006f14a4(param_1,iVar4);
      if (iVar5 != 0) {
        iVar7 = 0;
        uVar8 = 0;
        if (*(char *)(iVar5 + 0x120) != '\0') {
          do {
            iVar6 = fn_006f20b8(param_1,(int)*(short *)((byte *)(iVar5 + 0x120) + uVar8 * 2 + 4),
                                 (int)*(char *)(param_1 + 4),2,0);
            if (iVar7 < iVar6) {
              iVar7 = iVar6;
            }
            uVar8 = uVar8 + 1 & 0xff;
          } while (uVar8 < *(byte *)(iVar5 + 0x120));
        }
        iVar9 = iVar9 + iVar7;
      }
      iVar4 = (int)(char)((char)iVar4 + '\x01');
      iVar5 = fn_006f2df8(param_1);
    } while (iVar4 < iVar5);
  }
  if (iVar9 < local_30[0]) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00647494(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  
  cVar7 = '\0';
  iVar1 = fn_006f0ae4(param_1);
  iVar2 = fn_006f0a30(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        pbVar6 = (byte *)(iVar2 + 0x120);
        iVar3 = fn_006f0aa4(param_1);
        iVar4 = fn_006f2df8(param_1);
        if (iVar3 < iVar4) {
          do {
            iVar4 = fn_006f14a4(param_1,iVar3);
            if ((iVar4 != 0) && (uVar5 = 0, *pbVar6 != 0)) {
              do {
                iVar4 = fn_0064fed4(param_1,(int)*(short *)(pbVar6 + uVar5 * 2 + 4),iVar1,iVar3);
                if (iVar4 != 0) {
                  cVar7 = cVar7 + '\x01';
                  iVar3 = fn_006f1b24(param_1,iVar2);
                  if ((iVar3 != 0) ||
                     (iVar2 = fn_006f1838(param_1,(int)*param_2,*(undefined4 *)(param_1 + 0xc),
                                           iVar2), iVar2 != 0)) goto LAB_006475bc;
                  goto LAB_006475e4;
                }
                uVar5 = uVar5 + 1 & 0xff;
              } while (uVar5 < *pbVar6);
            }
            iVar3 = (int)(char)((char)iVar3 + '\x01');
            iVar4 = fn_006f2df8(param_1);
          } while (iVar3 < iVar4);
        }
      }
LAB_006475bc:
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f0a30(param_1);
    } while (iVar1 < iVar2);
    if ('\0' < cVar7) {
      cVar7 = *(char *)(param_3 + 2);
      goto LAB_006475e8;
    }
  }
LAB_006475e4:
  cVar7 = *(char *)(param_3 + 3);
LAB_006475e8:
  return (int)cVar7;
}


