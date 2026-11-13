#include "00649478_00649bc0.h"



int fn_00649bc0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = fn_006f144c();
  if (iVar3 - 0x10U < 8) {
    uVar4 = fn_006f144c(param_1);
    iVar3 = fn_006f14a4(param_1,uVar4);
    if (iVar3 != 0) {
      sVar2 = fn_00176dc0();
      if ((sVar2 * 0x32) / 100 <= (int)*(short *)(iVar3 + 0x1c)) {
        cVar1 = *(char *)(param_3 + 2);
        goto LAB_00649c28;
      }
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00649c28:
  return (int)cVar1;
}



int fn_00649b30(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = fn_006f1648();
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = iVar3 + iVar1 * 10;
  iVar1 = fn_006f1800(param_1);
  iVar4 = iVar4 + iVar1 * 10;
  if ((ushort *)(iVar3 + -0x110) != (ushort *)0x0) {
    uVar2 = *(ushort *)(iVar3 + -0x110);
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = (ushort)*(byte *)(iVar3 + -0x10c);
    }
    bVar6 = bVar5 && uVar2 == 0;
    if (bVar5 && uVar2 == 0) {
      bVar6 = *(char *)(iVar3 + -0x10a) == '\0';
    }
    if (!bVar6) goto LAB_00649bb0;
  }
  if ((ushort *)(iVar4 + -0x110) != (ushort *)0x0) {
    uVar2 = *(ushort *)(iVar4 + -0x110);
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = (ushort)*(byte *)(iVar4 + -0x10c);
    }
    bVar6 = bVar5 && uVar2 == 0;
    if (bVar5 && uVar2 == 0) {
      bVar6 = *(char *)(iVar4 + -0x10a) == '\0';
    }
    if (!bVar6) {
LAB_00649bb0:
      return (int)*(char *)(param_3 + 2);
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00649ad8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_1 + 0x14);
  iVar2 = fn_006f1648();
  iVar6 = *(int *)(param_1 + 0x14);
  iVar3 = fn_006f1800(param_1);
  pbVar4 = (byte *)(iVar6 + iVar3 * 10 + -0x109);
  bVar7 = *(char *)(iVar5 + iVar2 * 10 + -0x109) == '\0';
  if (bVar7) {
    pbVar4 = (byte *)(uint)*pbVar4;
  }
  if (bVar7 && pbVar4 == (byte *)0x0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00649a9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f1f18(param_1,uVar3,uVar2);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006498e0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f44fc(*(undefined4 *)(param_1 + 0xc),0x1b5);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006498b8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0xba) < '\x01') {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00649868(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f144c();
  if ((iVar2 != 0) && (iVar2 = fn_006f1ff8(param_1), iVar2 != 0)) {
    iVar2 = fn_006f144c(param_1);
    iVar3 = fn_006f1ff8(param_1);
    if (iVar2 != iVar3) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_006498b4;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_006498b4:
  return (int)cVar1;
}



int fn_00649804(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f0c9c(param_1,uVar3,uVar2);
  uVar2 = fn_006f162c(param_1);
  uVar3 = fn_006f181c(param_1);
  iVar5 = fn_006f0c9c(param_1,uVar3,uVar2);
  if (iVar5 == 0 && iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00649768(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145ad0();
  if (iVar1 == 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    if (iVar1 < iVar2) {
      do {
        if (((iVar1 != *(char *)(param_1 + 4)) && (iVar2 = fn_006f14a4(param_1,iVar1), iVar2 != 0))
           && (iVar2 = fn_006f0b00(param_1,iVar2,0x140), iVar2 != 0)) {
          return (int)*(char *)(param_3 + 2);
        }
        iVar1 = (int)(char)((char)iVar1 + '\x01');
        iVar2 = fn_006f2df8(param_1);
      } while (iVar1 < iVar2);
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_006496c0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_188 [4];
  short local_184 [176];
  
  iVar7 = 0;
  iVar4 = 0;
  fn_0017821c(local_188,*(int *)(param_1 + 0xc) + 0x120,0x160);
  iVar6 = 0;
  if (local_188[0] != 0) {
    do {
      sVar2 = local_184[iVar6];
      iVar3 = fn_006f20b8(param_1,(int)sVar2,(int)*(char *)(param_1 + 4),1,0);
      iVar5 = iVar4;
      if (iVar4 < iVar3) {
        iVar5 = iVar3;
      }
      if (iVar4 < iVar3) {
        iVar7 = (int)sVar2;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar5;
    } while (iVar6 < (int)(uint)local_188[0]);
    if ((iVar7 != 0) && (iVar4 = fn_00163a00(iVar7), iVar4 == 4)) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_00649760;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_00649760:
  return (int)cVar1;
}



int fn_0064963c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f162c();
  uVar3 = fn_006f181c(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,1);
  if ((local_14 < 1) || (local_18 < (local_14 * 0x5f) / 100)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00649558(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_20 [4];
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_20[0] = fn_001cab7c((int)*(char *)(iVar4 + 0x59));
  iVar4 = fn_006f3da8(iVar4);
  local_1c = (iVar4 * 0xf) / 10;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if (((iVar4 != 0) && (iVar3 = fn_006501a4(local_20,iVar4,iVar1), iVar3 != 0)) &&
       (iVar4 = fn_00652e4c(&local_1c,iVar4,iVar1), iVar4 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00649478(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_20 [4];
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_20[0] = fn_001cab7c((int)*(char *)(iVar4 + 0x59));
  iVar4 = fn_006f3da8(iVar4);
  local_1c = (iVar4 * 0xc) / 10;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if (((iVar4 != 0) && (iVar3 = fn_006501a4(local_20,iVar4,iVar1), iVar3 != 0)) &&
       (iVar4 = fn_00652e4c(&local_1c,iVar4,iVar1), iVar4 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}


