#include "006ad428_006ad904.h"



undefined4 fn_006ad904(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_r12;
  
  if (-2 < param_2) {
    uVar3 = *(uint *)(param_1 + 4);
    if ((int)uVar3 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar3 & 1;
      if (uVar1 != 0) {
        in_r12 = *(int *)(param_1 + 8);
      }
      iVar2 = 0;
      if (uVar1 != 0) {
        do {
          if (*(short *)(in_r12 + iVar2 * 0xc) == param_2) goto code_r0x006ad9a0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar1);
      }
    }
    if ((int)uVar1 < (int)uVar3) {
      do {
        if ((*(short *)(*(int *)(param_1 + 8) + uVar1 * 0xc) == param_2) ||
           (*(short *)(*(int *)(param_1 + 8) + uVar1 * 0xc + 0xc) == param_2)) {
code_r0x006ad9a0:
          iVar2 = fn_006ad9ac();
          return *(undefined4 *)(iVar2 + 8);
        }
        uVar1 = uVar1 + 2;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  return 0;
}



undefined4 fn_006ad87c(undefined4 param_1,uint param_2,uint param_3)

{
  if ((param_2 & ~param_3) == 0) {
    if ((param_3 & ~param_2) == 0) {
      if ((((param_2 & param_3) != 0) &&
          (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
         (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
        return 1;
      }
    }
    else if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      return 1;
    }
  }
  else if (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) {
    return 1;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x006ad8b0) */
/* WARNING: Removing unreachable block (ram,0x006ad8c0) */
/* WARNING: Removing unreachable block (ram,0x006ad88c) */
/* WARNING: Removing unreachable block (ram,0x006ad89c) */

undefined4 fn_006ad868(void)

{
  if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    return 1;
  }
  return 0;
}



void fn_006ad81c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00163d68(uVar2,param_3);
  return;
}



void fn_006ad7f0(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    return;
  }
  fn_006b759c();
  return;
}



void fn_006ad7c4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00163d44(uVar2);
  return;
}



undefined4 fn_006ad788(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006ad7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0x50))();
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_006ad760(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50));
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



int fn_006ad72c(int param_1,uint param_2)

{
  int iVar1;
  
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(iVar1 + 0x58);
  }
  return iVar1;
}



void fn_006ad6f4(void)

{
  return;
}



void fn_006ad6cc(void)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  fn_00114248(&local_10);
  local_18 = local_10;
  uStack_14 = uStack_c;
  fn_006d0618(&local_18);
  return;
}



void fn_006ad6b8(void)

{
  fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



undefined4 * fn_006ad62c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((DAT_0089225c & 1) == 0) && (iVar1 = fn_00303afc(&DAT_0089225c), iVar1 != 0)) {
    DAT_008c9400 = 0;
    DAT_008c9404 = 0;
    DAT_008c9408 = 0;
  }
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 == 0)) {
    puVar2 = &DAT_008c9400;
  }
  else {
    puVar2 = (undefined4 *)(iVar1 + 0x20);
  }
  return puVar2;
}



void fn_006ad5f0(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    if (*(int *)(param_1 + param_2 * 0x2c + 0x8c) != 0) {
      fn_00163890();
      return;
    }
  }
  return;
}



undefined4 fn_006ad4e8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  if (param_2 == 0) {
    iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    iVar1 = fn_006b84b0();
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (param_2 == 0) {
        iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
LAB_006ad57c:
        if (iVar2 != 0) {
          fn_0020bbc4(auStack_28);
          iVar2 = fn_006bfda8(auStack_24);
          if ((iVar2 == param_3) && (iVar2 = fn_006bf184(auStack_24), iVar2 != 0)) {
            return 1;
          }
        }
      }
      else if (param_2 == 1) {
        iVar2 = fn_0028b348();
        goto LAB_006ad57c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



undefined4 fn_006ad428(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    iVar2 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    iVar2 = fn_006b84b0();
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = 0;
      if (param_2 == 0) {
        iVar3 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
      }
      else if (param_2 == 1) {
        iVar3 = fn_0028b348();
      }
      cVar1 = *(char *)(iVar3 + 0x72);
      bVar5 = cVar1 == '\0';
      if (bVar5) {
        cVar1 = *(char *)(iVar3 + 0x78);
      }
      bVar6 = bVar5 && cVar1 == '\0';
      if (bVar5 && cVar1 == '\0') {
        bVar6 = *(char *)(iVar3 + 0x7e) == '\0';
      }
      if (!bVar6) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}


