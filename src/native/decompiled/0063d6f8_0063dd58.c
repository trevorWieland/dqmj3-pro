#include "0063d6f8_0063dd58.h"



int fn_0063dd58(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar2 = fn_00145ad0();
  if (iVar2 == 0) {
    iVar2 = fn_006f0aa4(param_1);
    iVar3 = fn_006f2df8(param_1);
    uStack_1c = unaff_r5 & 0xffffff00 | 1;
    local_24 = 1;
    uStack_20 = 2;
    iVar5 = 0;
    local_28 = param_1;
    if (iVar2 < iVar3) {
      do {
        iVar4 = fn_006f14a4(param_1,iVar2);
        if ((iVar4 != 0) && (iVar4 = fn_00650218(&local_28,iVar4,iVar2), iVar4 != 0)) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < iVar3);
      if (1 < iVar5) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_0063de04;
      }
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063de04:
  return (int)cVar1;
}



int fn_0063dca8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar2 = fn_00145ad0();
  if (iVar2 == 0) {
    iVar2 = fn_006f0aa4(param_1);
    iVar3 = fn_006f2df8(param_1);
    uStack_1c = unaff_r5 & 0xffffff00 | 1;
    local_24 = 3;
    uStack_20 = 4;
    iVar5 = 0;
    local_28 = param_1;
    if (iVar2 < iVar3) {
      do {
        iVar4 = fn_006f14a4(param_1,iVar2);
        if ((iVar4 != 0) && (iVar4 = fn_00650218(&local_28,iVar4,iVar2), iVar4 != 0)) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < iVar3);
      if (1 < iVar5) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_0063dd50;
      }
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063dd50:
  return (int)cVar1;
}



int fn_0063dbf0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 == 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 10;
    local_24 = 1;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063db38(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 == 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 4;
    local_24 = 1;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063da80(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 == 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 2;
    local_24 = 1;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063d9cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 == 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 4;
    local_24 = 3;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063d918(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar2 = fn_00145ad0();
  if (iVar2 != 0) {
    iVar2 = fn_006f0aa4(param_1);
    iVar3 = fn_006f2df8(param_1);
    uStack_1c = unaff_r5 & 0xffffff00 | 1;
    local_24 = 1;
    uStack_20 = 2;
    iVar5 = 0;
    local_28 = param_1;
    if (iVar2 < iVar3) {
      do {
        iVar4 = fn_006f14a4(param_1,iVar2);
        if ((iVar4 != 0) && (iVar4 = fn_00650218(&local_28,iVar4,iVar2), iVar4 != 0)) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < iVar3);
      if (1 < iVar5) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_0063d9c4;
      }
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063d9c4:
  return (int)cVar1;
}



int fn_0063d868(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar2 = fn_00145ad0();
  if (iVar2 != 0) {
    iVar2 = fn_006f0aa4(param_1);
    iVar3 = fn_006f2df8(param_1);
    uStack_1c = unaff_r5 & 0xffffff00 | 1;
    local_24 = 3;
    uStack_20 = 4;
    iVar5 = 0;
    local_28 = param_1;
    if (iVar2 < iVar3) {
      do {
        iVar4 = fn_006f14a4(param_1,iVar2);
        if ((iVar4 != 0) && (iVar4 = fn_00650218(&local_28,iVar4,iVar2), iVar4 != 0)) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < iVar3);
      if (1 < iVar5) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_0063d910;
      }
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063d910:
  return (int)cVar1;
}



int fn_0063d7b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 != 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 10;
    local_24 = 1;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063d6f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 != 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 4;
    local_24 = 1;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}


