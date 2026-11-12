#include "00523270_00523d9c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00523d9c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1e0042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_00523420(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 4) == 0) || (1 < *(byte *)(param_1 + 4))) {
    uVar1 = fn_005236dc(3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0052332c(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  if ((bVar1 == 0) || (0xd < bVar1)) {
    uVar3 = fn_005236dc(0x21);
    return uVar3;
  }
  if (((bVar1 != 1 && bVar1 != 2) && (bVar1 != 3 && bVar1 != 6)) &&
     ((bVar1 != 7 && bVar1 != 8) && bVar1 != 9)) {
    return 0;
  }
  if (param_1[0x218] == 0) {
    uVar3 = 0x1d;
  }
  else if (param_1[3] < 8) {
    if (param_1[5] < 8) {
      if (bVar1 != 1 && bVar1 != 3) {
        return 0;
      }
      bVar2 = param_1[4];
      if (bVar2 == 0) {
        if (param_1[0x18] != 0) {
          return 0;
        }
      }
      else if (bVar2 == 1) {
        if (*(short *)(param_1 + 0x18) != 0) {
          return 0;
        }
      }
      else {
        if (bVar2 == 2) {
          return 0;
        }
        if ((bVar1 == 3) && (bVar2 == 3 || bVar2 == 4)) {
          return 0;
        }
      }
      uVar3 = 0x1e;
    }
    else {
      uVar3 = 0xc1;
    }
  }
  else {
    uVar3 = 0x27;
  }
  uVar3 = fn_005236dc(uVar3);
  return uVar3;
}



undefined4 fn_005232ec(int param_1)

{
  DAT_008bfb34 = 0;
  fn_00523c9c(0x35,param_1,2);
  fn_00523c9c(0x36,param_1 + 8,0x400);
  return DAT_008bfb34;
}



void fn_00523c9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_1c;
  
  if (DAT_008eef95 == '\0') {
    puVar2 = (undefined4 *)0x0;
    iVar1 = fn_005236dc();
  }
  else {
    puVar2 = &DAT_008eefa8;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    if (DAT_008eef94 == '\0') {
      puVar2 = (undefined4 *)0x0;
      iVar1 = fn_005236dc();
    }
    else {
      puVar2 = &DAT_008eefa4;
      iVar1 = 0;
    }
    if (iVar1 < 0) goto LAB_00523d70;
    iVar1 = fn_00524130(puVar2,param_1,param_2,param_3,&local_1c);
  }
  else {
    iVar1 = fn_00522a74(puVar2,param_1,param_2,param_3,&local_1c);
  }
  if ((-1 < iVar1) && (local_1c != param_3)) {
    iVar1 = fn_005236dc(0x2c);
  }
LAB_00523d70:
  if ((iVar1 < 0) && (-1 < DAT_008bfb34)) {
    DAT_008bfb34 = iVar1;
  }
  return;
}



undefined4 fn_005236dc(int param_1)

{
  if (param_1 == 0x2f) {
    return 0xd860f82f;
  }
  if (param_1 < 0x30) {
    switch(param_1) {
    case 0:
      return 0;
    case 1:
      return 0xd8e0f801;
    case 2:
      return 0xd8e0f802;
    case 3:
      return 0xd8e0f803;
    case 4:
      return 0xd8e0f804;
    case 5:
      return 0xd8e0f805;
    case 6:
      return 0xd8e0f806;
    case 7:
      return 0xd8e0f807;
    case 8:
      return 0xc8a0f808;
    case 9:
      return 0xd8e0f809;
    case 10:
      return 0xd8e0f80a;
    case 0xb:
      return 0xd8e0f80b;
    case 0xc:
      return 0xd8e0f80c;
    case 0xd:
      return 0xc8a0f80d;
    case 0xe:
      return 0xd8e0f80e;
    case 0xf:
      return 0xd8e0f80f;
    case 0x10:
      return 0xd8e0f810;
    case 0x11:
      return 0xd8e0f811;
    case 0x12:
      return 0xd8e0f812;
    case 0x13:
      return 0xd8e0f813;
    case 0x14:
      return 0xd8e0f814;
    case 0x15:
      return 0xd8e0f815;
    case 0x1a:
      return 0xd8e0f81a;
    case 0x1b:
      return 0xd8e0f81b;
    case 0x1c:
      return 0xd8e0f81c;
    case 0x1d:
      return 0xd8e0f81d;
    case 0x1e:
      return 0xd8e0f81e;
    case 0x1f:
      return 0xd8e0f81f;
    case 0x20:
      return 0xd8e0f820;
    case 0x21:
      return 0xd8e0f821;
    case 0x22:
      return 0xd8e0f822;
    case 0x23:
      return 0xd860f823;
    case 0x24:
      return 0xd860f824;
    case 0x25:
      return 0xd860f825;
    case 0x26:
      return 0xd8e0f826;
    case 0x27:
      return 0xd8e0f827;
    case 0x28:
      return 0xd8e0f828;
    case 0x29:
      return 0xd840f829;
    case 0x2a:
      return 0xd840f82a;
    case 0x2b:
      return 0xc8a0f82b;
    case 0x2c:
      return 0xd860f82c;
    case 0x2d:
      return 0xd860f82d;
    case 0x2e:
      return 0xc8a0f82e;
    }
  }
  else {
    if (param_1 == 0x45) {
      return 0xd840f845;
    }
    if (param_1 < 0x46) {
      switch(param_1) {
      case 0x30:
        return 0xd860f830;
      case 0x31:
        return 0xd860f831;
      case 0x32:
        return 0xc8a0f832;
      case 0x33:
        return 0xc8a0f833;
      case 0x34:
        return 0xc8a0f834;
      case 0x35:
        return 0xc8a0f835;
      case 0x36:
        return 0xc8a0f836;
      case 0x37:
        return 0xc8a0f837;
      case 0x38:
        return 0xc8a0f838;
      case 0x39:
        return 0xc8a0f839;
      case 0x3a:
        return 0xc8a0f83a;
      case 0x3b:
        return 0xc8a0f83b;
      case 0x3c:
        return 0xc8a0f83c;
      case 0x3d:
        return 0xc8a0f83d;
      case 0x3e:
        return 0xc8a0f83e;
      case 0x3f:
        return 0xc8a0f83f;
      case 0x40:
        return 0xc8a0f840;
      case 0x41:
        return 0xc8a0f841;
      case 0x42:
        return 0xc8a0f842;
      case 0x43:
        return 0xc8a0f843;
      case 0x44:
        return 0xc960f844;
      }
    }
    else {
      if (param_1 == 0xc2) {
        return 0xd860f8c2;
      }
      if (param_1 < 0xc3) {
        if (param_1 == 0x4b) {
          return 0xc960f84b;
        }
        if (param_1 < 0x4c) {
          switch(param_1) {
          case 0x46:
            return 0xd840f846;
          case 0x47:
            return 0xc8a0f847;
          case 0x48:
            return 0xc8a0f848;
          case 0x49:
            return 0xc8a0f849;
          case 0x4a:
            return 0xc960f84a;
          }
        }
        else {
          if (param_1 == 0x4c) {
            return 0xc960f84c;
          }
          if (param_1 != 0x4d) {
            if (param_1 == 0xc0) {
              return 0xd8e0f8c0;
            }
            if (param_1 == 0xc1) {
              return 0xd8e0f8c1;
            }
          }
        }
      }
      else {
        if (param_1 == 0x3ec) {
          return 0xd8e0fbec;
        }
        if (param_1 < 0x3ed) {
          if (param_1 == 0xc3) {
            return 0xd860f8c3;
          }
          if (param_1 == 0xc4) {
            return 0xd860f8c4;
          }
          if (param_1 == 0xc5) {
            return 0xc8a0f8c5;
          }
          if (param_1 == 0xc6) {
            return 0xc8a0f8c6;
          }
        }
        else {
          if (param_1 == 0x3f6) {
            return 0xd8e0fbf6;
          }
          if (param_1 == 0x3fa) {
            return 0xc8a0fbfa;
          }
          if (param_1 == 0x3fc) {
            return 0xc8a0fbfc;
          }
          if (param_1 == 0x3fd) {
            return 0xd8e0fbfd;
          }
        }
      }
    }
  }
  return 0xc960f84d;
}



undefined4 fn_00523270(int param_1)

{
  DAT_008bfb34 = 0;
  fn_00523624(0,param_1,1);
  fn_00523624(1,param_1 + 1);
  fn_00523624(2,param_1 + 4,4);
  fn_00523624(3,param_1 + 8,4);
  fn_00523624(4,param_1 + 0xc);
  fn_00523624(5,param_1 + 2,1);
  return DAT_008bfb34;
}


