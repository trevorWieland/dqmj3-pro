#include "006457a8_00645d94.h"



int fn_00645d94(int param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if ((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x2e), iVar4 != 0)) {
        uVar5 = fn_006f1710(param_1,(int)*param_2,*(undefined4 *)(param_1 + 0xc),iVar3);
        if (4 < uVar5) {
          cVar1 = *(char *)(param_3 + 2);
          goto LAB_00645e34;
        }
        break;
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00645e34:
  return (int)cVar1;
}



int fn_00645ce8(int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r9;
  int local_28;
  uint local_24;
  undefined4 uStack_20;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  uStack_20 = *(undefined4 *)(param_1 + 0xc);
  local_24 = (uint)*param_2 | unaff_r9 & 0xffff0000;
  local_28 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064fea0(&local_28,iVar3,iVar1), iVar3 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00645c44(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  puVar4 = (undefined4 *)fn_00650758(auStack_20,param_1,1,0);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  iVar6 = 0;
  if (iVar2 < iVar3) {
    do {
      iVar5 = fn_006f14a4(param_1,iVar2);
      if ((iVar5 != 0) && (iVar5 = fn_006506f4(&local_28,iVar5,iVar2), iVar5 != 0)) {
        iVar6 = iVar6 + 1;
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < iVar3);
    if (2 < iVar6) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00645ce0;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00645ce0:
  return (int)cVar1;
}



int fn_00645ba0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  puVar4 = (undefined4 *)fn_00650758(auStack_20,param_1,1,0);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  iVar6 = 0;
  if (iVar2 < iVar3) {
    do {
      iVar5 = fn_006f14a4(param_1,iVar2);
      if ((iVar5 != 0) && (iVar5 = fn_006506f4(&local_28,iVar5,iVar2), iVar5 != 0)) {
        iVar6 = iVar6 + 1;
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < iVar3);
    if (1 < iVar6) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00645c3c;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00645c3c:
  return (int)cVar1;
}



int fn_00645afc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  puVar3 = (undefined4 *)fn_00650758(auStack_20,param_1,1,0);
  local_28 = *puVar3;
  uStack_24 = puVar3[1];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_00650954(&local_28,iVar4,iVar1), iVar4 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00645a44(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = false;
  iVar3 = fn_001cab7c((int)*(char *)(*(int *)(param_1 + 0xc) + 0x59));
  iVar4 = fn_006f0ae4(param_1);
  iVar5 = fn_006f0a30(param_1);
  if (iVar4 < iVar5) {
    do {
      iVar5 = fn_006f14a4(param_1,iVar4);
      if ((iVar5 != 0) && (iVar6 = fn_001cab7c((int)*(char *)(iVar5 + 0x59)), iVar6 == iVar3)) {
        bVar2 = true;
        iVar5 = fn_006f0c84(param_1,iVar5,0x19);
        if (iVar5 == 0) goto LAB_00645af4;
      }
      iVar4 = (int)(char)((char)iVar4 + '\x01');
      iVar5 = fn_006f0a30(param_1);
    } while (iVar4 < iVar5);
    if (bVar2) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00645af8;
    }
  }
LAB_00645af4:
  cVar1 = *(char *)(param_3 + 3);
LAB_00645af8:
  return (int)cVar1;
}



int fn_006459ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x45;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00645914(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x17;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0064587c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x16;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_006457a8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r9;
  int local_28;
  uint local_24;
  int aiStack_20 [2];
  
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  if (iVar1 == 0) {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    local_24 = unaff_r9 & 0xffffff00 | 0x2e;
    local_28 = param_1;
    aiStack_20[0] = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if (((iVar3 != 0) && (iVar4 = fn_0064d5e4(&local_28,iVar3,iVar1), iVar4 != 0)) &&
         (iVar3 = fn_00651160(aiStack_20,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}


