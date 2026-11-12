#include "00644e60_006456d4.h"



int fn_006456d4(int param_1,undefined4 param_2,int param_3)

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
         (iVar3 = fn_00651c64(aiStack_20,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00645600(int param_1,undefined4 param_2,int param_3)

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
         (iVar3 = fn_006509e0(aiStack_20,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0064552c(int param_1,undefined4 param_2,int param_3)

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
         (iVar3 = fn_00651194(aiStack_20,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00645458(int param_1,undefined4 param_2,int param_3)

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
         (iVar3 = fn_006522b4(aiStack_20,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00645388(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if (((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x29), iVar4 == 0)) &&
         (((iVar4 = fn_006f0c84(param_1,iVar3,0x24), iVar4 == 0 &&
           (iVar3 = fn_006f34d4(iVar3), iVar3 == 0)) || (iVar1 != 0)))) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006452b8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if (((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x28), iVar4 == 0)) &&
         (((iVar4 = fn_006f0c84(param_1,iVar3,0x23), iVar4 == 0 &&
           (iVar3 = fn_006f3500(iVar3), iVar3 == 0)) || (iVar1 != 0)))) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006451e8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if (((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x27), iVar4 == 0)) &&
         (((iVar4 = fn_006f0c84(param_1,iVar3,0x22), iVar4 == 0 &&
           (iVar3 = fn_006f34b4(iVar3), iVar3 == 0)) || (iVar1 != 0)))) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00645110(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if (((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x26), iVar4 == 0)) &&
         (((iVar4 = fn_006f0c84(param_1,iVar3,0x1f), iVar4 == 0 &&
           (iVar3 = fn_006f0c84(param_1,iVar3,0x21), iVar3 == 0)) || (iVar1 != 0)))) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0064501c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      if ((((iVar3 != 0) && (iVar4 = fn_006f0c84(param_1,iVar3,0x25), iVar4 == 0)) &&
          (iVar4 = fn_006f0c84(param_1,iVar3,0x60), iVar4 == 0)) &&
         (((iVar4 = fn_006f0c84(param_1,iVar3,0x1e), iVar4 == 0 &&
           (iVar3 = fn_006f0c84(param_1,iVar3,0x20), iVar3 == 0)) || (iVar1 != 0)))) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00644f88(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  if (iVar1 == 0) {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    local_18 = param_1;
    while( true ) {
      if (iVar2 <= iVar1) {
        return (int)*(char *)(param_3 + 2);
      }
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00651160(&local_18,iVar3,iVar1), iVar3 == 0)) break;
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00644ef4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  if (iVar1 == 0) {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    local_18 = param_1;
    while( true ) {
      if (iVar2 <= iVar1) {
        return (int)*(char *)(param_3 + 2);
      }
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00651c64(&local_18,iVar3,iVar1), iVar3 == 0)) break;
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00644e60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0c84(param_1,*(undefined4 *)(param_1 + 0xc),1);
  if (iVar1 == 0) {
    iVar1 = fn_006f0ae4(param_1);
    iVar2 = fn_006f0a30(param_1);
    local_18 = param_1;
    while( true ) {
      if (iVar2 <= iVar1) {
        return (int)*(char *)(param_3 + 2);
      }
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_006509e0(&local_18,iVar3,iVar1), iVar3 == 0)) break;
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    }
  }
  return (int)*(char *)(param_3 + 3);
}


