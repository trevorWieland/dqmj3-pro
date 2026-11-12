#include "00521108_0052174c.h"



int fn_0052174c(int param_1,int param_2,undefined1 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_44 [24];
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = fn_005236dc();
    return iVar1;
  }
  param_1 = param_1 + 0xc;
  iVar1 = fn_00522f90(param_1);
  if ((iVar1 == 0) || (iVar1 = fn_00522fa8(param_1), iVar1 == 0)) {
    iVar1 = fn_005236dc(0x1a);
  }
  else if (param_5 == 0x80) {
    iVar1 = fn_005236dc(0x1b);
  }
  else {
    iVar1 = fn_0052332c(param_2 + 4);
    if ((-1 < iVar1) && ((param_4 == 0 || (iVar1 = fn_00523420(param_4), -1 < iVar1)))) {
      fn_00521008(auStack_44);
      if (param_3 == (undefined1 *)0x0) {
        fn_00520fd0(auStack_44,1);
        param_3 = auStack_44;
      }
      fn_00520e74(param_3,4,&DAT_007d6438);
      fn_00520e74(param_3,3,&DAT_007d6438,4);
      iVar2 = 0;
      bVar3 = param_4 != 0;
      if (bVar3) {
        iVar2 = param_4 + 4;
      }
      iVar1 = fn_00523270(param_3 + 4);
      if (((-1 < iVar1) && (iVar1 = fn_0052302c(param_2 + 4), -1 < iVar1)) &&
         ((param_4 == 0 || (iVar1 = fn_00523200(iVar2), -1 < iVar1)))) {
        iVar1 = fn_00523544(&local_2c);
        if (iVar1 < 0) {
          iVar1 = fn_00522ff8(local_28);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = fn_002febd8(param_1);
          iVar1 = fn_0052441c(local_28[0],param_1,iVar1 + 1,bVar3,param_5);
        }
        else {
          iVar1 = fn_002febd8(param_1);
          iVar1 = fn_00522d9c(local_2c,param_1,iVar1 + 1,bVar3,param_5);
        }
      }
    }
  }
  return iVar1;
}



void fn_00521734(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00520de8();
  *puVar1 = &DAT_00857424;
  return;
}



int fn_00521688(uint param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if (param_2 != (byte *)0x0) {
    uVar1 = (uint)*param_2;
  }
  if ((param_2 == (byte *)0x0 || uVar1 == 0) || (uVar1 = fn_005244b0(param_2,0x200), 0x1ff < uVar1)
     ) {
    iVar2 = fn_005236dc(0x1d);
  }
  else {
    fn_00301f50(param_1 + 4,0x7d4);
    *(undefined1 *)(param_1 + 4) = 2;
    fn_001ad654(param_1 + 0x21c,param_2,0x200);
    iVar2 = fn_005213e4(param_1,7);
    if ((-1 < iVar2) && (iVar2 = fn_005213e4(param_1,3), -1 < iVar2)) {
      iVar2 = fn_005213e4(param_1,6);
      if (-1 < iVar2) {
        iVar2 = 0;
      }
      return iVar2;
    }
  }
  return iVar2;
}



void fn_005215f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  bVar3 = param_3 == 0;
  if (bVar3) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x48000;
  }
  uVar4 = fn_00523544(&local_20);
  if ((int)uVar4 < 0) {
    uVar1 = fn_00522ff8(local_1c);
    if (-1 < (int)(uVar1 & 0x80000000)) {
      fn_00524188(local_1c[0],uVar1 & 0x80000000,param_1,uVar2,param_2,bVar3);
      return;
    }
  }
  else {
    fn_00522acc(local_20,(int)((ulonglong)uVar4 >> 0x20),param_1,uVar2,param_2,bVar3);
  }
  return;
}



int fn_005214f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  
  if (param_2 != 0) {
    if ((*(uint *)(param_2 + 0x10) != 0) && (*(uint *)(param_2 + 0x10) < 0x1001)) {
      iVar1 = fn_00523544(local_20);
      if (iVar1 < 0) {
        iVar1 = fn_00522ff8(local_18);
        if (-1 < iVar1) {
          iVar1 = fn_005240c4(local_18[0],param_1,*(undefined4 *)(param_2 + 0xc),
                               *(undefined4 *)(param_2 + 0x10),param_2 + 4,
                               *(undefined2 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),param_2 + 6
                              );
        }
      }
      else {
        iVar1 = fn_00522a08(local_20[0],param_1,*(undefined4 *)(param_2 + 0xc),
                             *(undefined4 *)(param_2 + 0x10),param_2 + 4,
                             *(undefined2 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),param_2 + 6);
      }
      if (iVar1 == -0x27bf07bb) {
        uVar2 = fn_005210b0(param_2,*(short *)(param_2 + 4) + -1);
        *(undefined4 *)(param_2 + 8) = uVar2;
      }
      return iVar1;
    }
  }
  iVar1 = fn_005236dc(7);
  return iVar1;
}



void fn_0052144c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  if (param_1 != 0) {
    param_1 = param_1 + 0xc;
    iVar1 = fn_00522f90();
    if (iVar1 != 0) {
      iVar1 = fn_00523544(&local_18);
      if (iVar1 < 0) {
        iVar1 = fn_00522ff8(local_14);
        if (-1 < iVar1) {
          iVar1 = fn_002febd8(param_1);
          fn_00524078(local_14[0],param_1,iVar1 + 1,param_2);
          return;
        }
      }
      else {
        iVar1 = fn_002febd8(param_1);
        fn_005229bc(local_18,param_1,iVar1 + 1,param_2);
      }
      return;
    }
  }
  fn_005236dc(0x1a);
  return;
}



undefined4 fn_005213e4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x78c);
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (*(int *)(param_1 + uVar2 * 4 + 0x77c) == param_2) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  if (uVar3 < 3) {
    *(int *)(param_1 + uVar3 * 4 + 0x77c) = param_2;
    *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
    return 0;
  }
  uVar1 = fn_005236dc(0x25);
  return uVar1;
}



void fn_00521370(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  local_18 = 0;
  iVar1 = fn_00523544(&local_14);
  if (iVar1 < 0) {
    iVar1 = fn_00522ff8(local_10);
    if (-1 < iVar1) {
      fn_00524044(local_10[0],&local_18);
    }
  }
  else {
    fn_00522988(local_14,&local_18);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_18;
  }
  return;
}



void fn_005212f0(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  if (param_1 == 0) {
    fn_005236dc(5);
    return;
  }
  iVar1 = fn_00523544(&local_18);
  if (iVar1 < 0) {
    iVar1 = fn_00522ff8(local_14);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_00523fbc(local_14[0]);
  }
  else {
    iVar1 = fn_00522900(local_18);
  }
  if (-1 < iVar1) {
    fn_005232ec(param_1 + 4);
  }
  return;
}



int fn_00521108(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1 == 0) {
    iVar1 = fn_005236dc(0x1a);
    return iVar1;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar1 = fn_005236dc();
    return iVar1;
  }
  param_1 = param_1 + 0xc;
  iVar1 = fn_00522f90(param_1);
  if ((iVar1 == 0) || (iVar1 = fn_00522fa8(param_1), iVar1 != 0)) {
    uVar2 = 0x1a;
  }
  else {
    if (param_5 != 0x80) {
      iVar1 = fn_00523448(param_2);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = fn_0052332c(param_3 + 4);
      if (iVar1 < 0) {
        return iVar1;
      }
      if ((param_4 != 0) && (iVar1 = fn_00523420(param_4), iVar1 < 0)) {
        return iVar1;
      }
      iVar1 = 0;
      bVar4 = param_4 != 0;
      if (bVar4) {
        iVar1 = param_4 + 4;
      }
      iVar3 = fn_00523270(param_2 + 4);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = fn_0052302c(param_3 + 4);
      if (iVar3 < 0) {
        return iVar3;
      }
      if ((param_4 != 0) && (iVar1 = fn_00523200(iVar1), iVar1 < 0)) {
        return iVar1;
      }
      iVar1 = fn_00523544(&local_28);
      if (-1 < iVar1) {
        iVar1 = fn_002febd8(param_1);
        iVar1 = fn_00522860(local_28,param_1,iVar1 + 1,bVar4,param_5);
        return iVar1;
      }
      iVar1 = fn_00522ff8(&local_24);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = fn_002febd8(param_1);
      iVar1 = fn_00523f1c(local_24,param_1,iVar1 + 1,bVar4,param_5);
      return iVar1;
    }
    uVar2 = 0x1b;
  }
  iVar1 = fn_005236dc(uVar2);
  return iVar1;
}


