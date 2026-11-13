#include "006bc48c_006bcce8.h"



int fn_006bcce8(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x1c;
}



void fn_006bcc5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_0018367c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    fn_0018367c();
    return;
  }
  iVar1 = fn_006ec290(*(undefined4 *)(param_1 + 0x10));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006ec29c(*(undefined4 *)(param_1 + 0x10),iVar4);
      iVar3 = fn_006ec21c(*(undefined4 *)(param_1 + 0x10),uVar2);
      if (iVar3 != 0) {
        fn_006ec21c(*(undefined4 *)(param_1 + 0x10),uVar2);
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



undefined4 fn_006bcbc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_0018367c(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 != 0) && (*(float *)(iVar1 + 4) < *(float *)(iVar1 + 0xc))) {
    return 0;
  }
  iVar1 = fn_006ec290(*(undefined4 *)(param_1 + 0x10));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006ec29c(*(undefined4 *)(param_1 + 0x10),iVar4);
      iVar3 = fn_006ec21c(*(undefined4 *)(param_1 + 0x10),uVar2);
      if ((iVar3 != 0) && (*(float *)(iVar3 + 4) < *(float *)(iVar3 + 0xc))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 1;
}



void fn_006bcb34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_0018367c(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    fn_0018367c();
    return;
  }
  iVar1 = fn_006ec290(*(undefined4 *)(param_1 + 0x10));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006ec29c(*(undefined4 *)(param_1 + 0x10),iVar4);
      iVar3 = fn_006ec21c(*(undefined4 *)(param_1 + 0x10),uVar2);
      if (iVar3 != 0) {
        fn_006ec21c(*(undefined4 *)(param_1 + 0x10),uVar2);
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



undefined4 fn_006bc9a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    return 1;
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 0xb4) + param_2 * 0xc + 4)) {
  case 0x82:
    iVar1 = fn_0036bb48();
    goto joined_r0x006bca48;
  default:
    goto switchD_006bc9d8_caseD_83;
  case 0x84:
    iVar1 = fn_0036bb20();
joined_r0x006bca48:
    if (iVar1 == 0) {
      return 1;
    }
    return 0;
  case 0x85:
    iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    break;
  case 0x86:
    uVar4 = *(undefined4 *)(DAT_00897804 + 0x18);
    iVar1 = fn_006b4f84(uVar4);
    iVar3 = 0;
    if (iVar1 < 1) {
      return 0;
    }
    do {
      iVar2 = fn_0024222c(uVar4,iVar3);
      if (*(char *)(iVar2 + 6) != '\0') {
        iVar1 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
        if (iVar1 < 1) {
          return 0;
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    return 0;
  case 0x89:
    iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    break;
  case 0x8a:
    iVar1 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
  }
  if (iVar1 < 1) {
    return 0;
  }
switchD_006bc9d8_caseD_83:
  return 1;
}



int fn_006bc914(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = *(int *)(param_3 + 0x100);
  if (param_2 != 0) {
    if ((param_2 & 0x80000001) == 1) {
      iVar1 = (int)(param_2 + 1) / 2;
      VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
      return iVar1;
    }
    iVar1 = (int)param_2 / 2;
    VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  }
  return iVar1;
}



uint fn_006bc840(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *unaff_r6;
  int iVar4;
  
  if (0 < param_2) {
    unaff_r6 = &DAT_007c44f4;
  }
  iVar4 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      uVar2 = (uint)(char)iVar1;
      iVar3 = 0;
      if ((-1 < (int)uVar2) && (uVar2 < 7)) {
        iVar3 = *(int *)(unaff_r6 + uVar2 * 4);
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + iVar3;
    } while (iVar1 < param_2);
  }
  return *(uint *)(*(int *)(param_1 + 4) + ((uint)(iVar4 + param_3) >> 5) * 4) >>
         (iVar4 + param_3 & 0x1fU) & 1;
}



undefined4 fn_006bc7fc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && (param_2 < 7)) {
    uVar1 = *(undefined4 *)(&DAT_007c44f4 + param_2 * 4);
  }
  return uVar1;
}



undefined * fn_006bc7ec(undefined4 param_1,int param_2)

{
  return (&PTR_s_wgroup_joker_008925e0)[param_2];
}



uint fn_006bc5dc(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x58 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



uint fn_006bc5bc(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + 0x54 + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



ushort fn_006bc590(int param_1,uint param_2)

{
  return *(ushort *)(*(int *)(param_1 + 4) + 0x40 + (param_2 >> 4 & 0xfff) * 2) >> (param_2 & 0xf) &
         1;
}



int fn_006bc53c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 4 + iVar2 * 4) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 0x20);
  return iVar1;
}



undefined4 fn_006bc4d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x84 + iVar2 * 4) == 0) break;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 4);
  if (0 < iVar1) {
    iVar1 = fn_00163868();
    if ((-1 < iVar1) && (iVar1 < 4)) {
      return *(undefined4 *)(*(int *)(param_1 + 4) + 0x84 + iVar1 * 4);
    }
  }
  return 0;
}



undefined4 fn_006bc4b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (0x1f < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 4 + param_2 * 4);
  }
  return uVar1;
}



undefined2 fn_006bc4a0(void)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  return *(undefined2 *)(iVar1 + 0x18);
}



int fn_006bc48c(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x20 + 0x98;
}


