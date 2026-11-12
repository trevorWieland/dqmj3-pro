#include "00649c30_0064a344.h"



int fn_0064a344(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  uStack_1c = unaff_r8 & 0xffff0000 | 0x152;
  local_24 = 3;
  uStack_20 = 4;
  local_28 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006535e8(&local_28,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0064a2ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x52;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0064a1d0(int param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0x1b6);
  if (iVar2 == 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x9a);
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x9b);
    }
    if (cVar1 < '\x01') {
      iVar2 = fn_006f0ae4(param_1);
      iVar3 = fn_006f0a30(param_1);
      if (iVar2 < iVar3) {
        do {
          iVar3 = fn_006f14a4(param_1,iVar2);
          if ((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x2e), iVar4 != 0)) {
            uVar5 = fn_006f1710(param_1,(int)*param_2,*(undefined4 *)(param_1 + 0xc),iVar3);
            if (4 < uVar5) {
              cVar1 = *(char *)(param_3 + 2);
              goto LAB_0064a22c;
            }
            break;
          }
          iVar2 = (int)(char)((char)iVar2 + '\x01');
          iVar3 = fn_006f0a30(param_1);
        } while (iVar2 < iVar3);
      }
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0064a22c:
  return (int)cVar1;
}



int fn_0064a138(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x5f;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0064a060(int param_1,ushort *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r9;
  int local_28;
  uint local_24;
  undefined4 uStack_20;
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  uStack_20 = *(undefined4 *)(param_1 + 0xc);
  local_24 = (uint)*param_2 | unaff_r9 & 0xffff0000;
  local_28 = param_1;
  for (; iVar2 < iVar3; iVar2 = (int)(char)((char)iVar2 + '\x01')) {
    iVar4 = fn_006f14a4(param_1,iVar2);
    if ((iVar4 != 0) && (iVar4 = fn_0064fea0(&local_28,iVar4,iVar2), iVar4 == 0))
    goto LAB_0064a128;
  }
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0x1b6);
  if (iVar2 == 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x9a);
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x9b);
    }
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_0064a12c;
    }
  }
LAB_0064a128:
  cVar1 = *(char *)(param_3 + 3);
LAB_0064a12c:
  return (int)cVar1;
}



int fn_00649fa8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x12;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00649f10(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 5;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00649e78(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 4;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00649de0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 3;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00649d48(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 2;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00649cd4(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = fn_006f4868(*(int *)(param_1 + 8) + 0xe8,param_2,0x100,0);
  if (iVar2 != 0) {
    iVar2 = (int)*(char *)(param_1 + 4);
    uVar3 = iVar2 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar2 - 0x18;
    }
    if (((bVar4 && 3 < uVar3) && (iVar2 != 0x20 && iVar2 != 0x22)) &&
       (iVar2 = fn_00183704(*(int *)(param_1 + 0xc) + 0x406,4), iVar2 != 0)) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00649d44;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00649d44:
  return (int)cVar1;
}



int fn_00649c30(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = fn_006f144c();
  if (iVar2 - 0x10U < 8) {
    uVar3 = fn_006f144c(param_1);
    iVar2 = fn_006f14a4(param_1,uVar3);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x5a) == '\0')) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00649c7c;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00649c7c:
  return (int)cVar1;
}


