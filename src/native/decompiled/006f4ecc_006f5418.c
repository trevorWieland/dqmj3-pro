#include "006f4ecc_006f5418.h"



undefined4 fn_006f5418(void)

{
  int iVar1;
  
  iVar1 = fn_006cf94c(DAT_008c06e0 + 0x24);
  return *(undefined4 *)(iVar1 + 100);
}



void fn_006f537c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar1 = param_1 + 0x50;
  }
  fn_006f4ecc(param_1);
  fn_006f4f38(param_1);
  if (iVar1 == 0) {
    return;
  }
  fn_00656ca4(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x006f50a8) */
/* WARNING: Removing unreachable block (ram,0x006f50b4) */
/* WARNING: Removing unreachable block (ram,0x006f50c0) */
/* WARNING: Removing unreachable block (ram,0x006f50ac) */

undefined4 fn_006f4fa4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if ((uVar1 & uVar1 - 1) != 0) {
    return 0;
  }
  iVar4 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar4 = param_1 + 0x50;
  }
  iVar3 = (int)*(char *)(param_1 + 0x4c) * param_2;
  if (iVar3 < 0) {
    if (iVar3 == -4 || -iVar3 < 4) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x7c) < 1) {
        iVar2 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x74) == 0) goto LAB_006f5100;
        iVar2 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x80);
      }
      if (iVar2 == 0) goto LAB_006f5120;
      do {
        if ((3 < *(uint *)(iVar2 + 8)) &&
           ((iVar3 == 0 || (*(uint *)(iVar3 + 8) < *(uint *)(iVar2 + 8))))) {
          iVar3 = iVar2;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x80) + iVar2);
        bVar6 = iVar2 == param_1 + 0x74;
        if (!bVar6) {
          iVar2 = iVar2 - *(int *)(param_1 + 0x80);
          bVar6 = iVar2 == 0;
        }
      } while (!bVar6);
    }
    else {
      iVar3 = fn_006f529c(param_1,4,-iVar3,2);
    }
  }
  else if (iVar3 < 5) {
    iVar3 = fn_006f5134(param_1,4,2);
  }
  else {
    iVar3 = fn_006f51d0(param_1,4,iVar3,2);
  }
LAB_006f5100:
  if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 8);
    if (iVar4 != 0) {
      fn_00656ca4(iVar4);
    }
    return uVar5;
  }
LAB_006f5120:
  if (iVar4 != 0) {
    fn_00656ca4(iVar4);
  }
  return 0;
}



int fn_006f529c(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x74) == 0) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x80);
  }
  if (iVar5 != 0) {
    iVar2 = iVar1;
    iVar1 = iVar5;
    while( true ) {
      uVar4 = *(uint *)(iVar1 + 8);
      if ((uVar4 < param_2) ||
         (uVar3 = *(int *)(iVar1 + 0xc) + 0x10 + iVar1 + (uVar4 - param_2),
         uVar4 < (uVar3 - (uVar3 & ~(param_3 - 1U))) + param_2)) goto LAB_006f535c;
      if (param_4 == 0) break;
      if (iVar2 == 0) {
LAB_006f5358:
        iVar2 = iVar1;
      }
      else if (param_4 == 1) {
        if (uVar4 < *(uint *)(iVar2 + 8)) goto LAB_006f5358;
      }
      else if ((param_4 == 2) && (*(uint *)(iVar2 + 8) < uVar4)) goto LAB_006f5358;
LAB_006f535c:
      iVar1 = *(int *)(*(int *)(param_1 + 0x80) + iVar1);
      bVar6 = iVar1 == param_1 + 0x74;
      if (!bVar6) {
        iVar1 = iVar1 - *(int *)(param_1 + 0x80);
        bVar6 = iVar1 == 0;
      }
      if (bVar6) {
        return iVar2;
      }
    }
  }
  return iVar1;
}



int fn_006f51d0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x80);
  iVar5 = *(int *)(param_1 + 0x78) - iVar3;
  do {
    if (iVar5 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) {
      return iVar1;
    }
    uVar4 = *(uint *)(iVar5 + 8);
    if ((uVar4 < param_2) ||
       (iVar2 = *(int *)(iVar5 + 0xc) + 0x10 + iVar5,
       uVar4 < (((iVar2 + param_3) - 1U & ~(param_3 - 1U)) - iVar2) + param_2)) goto LAB_006f5274;
    if (param_4 == 0) {
      return iVar5;
    }
    if (iVar1 == 0) {
LAB_006f5270:
      iVar1 = iVar5;
    }
    else if (param_4 == 1) {
      if (uVar4 < *(uint *)(iVar1 + 8)) goto LAB_006f5270;
    }
    else if ((param_4 == 2) && (*(uint *)(iVar1 + 8) < uVar4)) goto LAB_006f5270;
LAB_006f5274:
    iVar5 = *(int *)(iVar5 + iVar3 + 4) - iVar3;
  } while( true );
}



int fn_006f5134(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  do {
    iVar2 = iVar2 - *(int *)(param_1 + 0x80);
    if (iVar2 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) {
      return iVar1;
    }
    uVar3 = *(uint *)(iVar2 + 8);
    if (uVar3 < param_2) goto LAB_006f51a8;
    if (param_3 == 0) {
      return iVar2;
    }
    if (iVar1 == 0) {
LAB_006f51a4:
      iVar1 = iVar2;
    }
    else if (param_3 == 1) {
      if (uVar3 < *(uint *)(iVar1 + 8)) goto LAB_006f51a4;
    }
    else if ((param_3 == 2) && (*(uint *)(iVar1 + 8) < uVar3)) goto LAB_006f51a4;
LAB_006f51a8:
    iVar2 = *(int *)(iVar2 + *(int *)(param_1 + 0x80) + 4);
  } while( true );
}



void fn_006f4f38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar2 = param_1 + 0x50;
  }
  for (iVar1 = *(int *)(param_1 + 0x78); iVar1 = iVar1 - *(int *)(param_1 + 0x80),
      iVar1 != (param_1 + 0x74) - *(int *)(param_1 + 0x80);
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x80) + 4)) {
  }
  if (iVar2 == 0) {
    return;
  }
  fn_00656ca4(iVar2);
  return;
}



void fn_006f4ecc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar2 = param_1 + 0x50;
  }
  for (iVar1 = *(int *)(param_1 + 0x88); iVar1 = iVar1 - *(int *)(param_1 + 0x90),
      iVar1 != (param_1 + 0x84) - *(int *)(param_1 + 0x90);
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x90) + 4)) {
  }
  if (iVar2 == 0) {
    return;
  }
  fn_00656ca4(iVar2);
  return;
}


