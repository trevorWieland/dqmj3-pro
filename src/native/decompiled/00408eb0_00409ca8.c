#include "00408eb0_00409ca8.h"



undefined1 * fn_00409ca8(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  fn_0020bbc4(auStack_48,param_1[param_2 + 0x40]);
  puVar1 = (undefined1 *)fn_00660ec0((int)(short)param_1[0x3e]);
  if (puVar1 == &DAT_00000023) {
    iVar6 = param_1[param_2 + 0x40];
    fn_0020bbc4(auStack_50,iVar6);
    iVar2 = fn_006c02d4(auStack_4c,auStack_40,7);
    iVar6 = fn_0020cb7c(iVar6);
    if (iVar6 == iVar2) {
      uVar3 = fn_00660d60((int)(short)param_1[0x3e]);
      puVar1 = (undefined1 *)fn_006aed48(auStack_48,uVar3);
      if (puVar1 == (undefined1 *)0x0) {
        puVar4 = (undefined4 *)fn_001f74ec(param_1,0x5c);
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
          do {
            if (puVar5 == &DAT_00895114) goto LAB_00409e04;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        puVar4 = (undefined4 *)0x0;
LAB_00409e04:
        puVar4[2] = param_1[param_2 + 0x40];
        uVar3 = fn_00660d60((int)(short)param_1[0x3e]);
        puVar4[3] = uVar3;
        puVar4[4] = param_1[0x3e];
        puVar4[8] = 0xd8;
        puVar4[9] = 0xd6;
        *(int *)(param_1[0x3c] + 0x18) = param_2;
        uVar3 = fn_0022f584((char *)&DAT_00409ec0,0);
        (**(code **)(*param_1 + 0x140))(param_1,uVar3,3);
        fn_00689824(param_1,0);
        *(undefined1 *)(param_1 + 0x3f) = 1;
        return auStack_48;
      }
    }
    else {
      puVar1 = auStack_50;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0(puVar1);
}



void fn_00409c64(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x224) + 0x14))();
  if (*(int **)(param_1 + 0x224) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x224) + 4))();
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  fn_003979d0(param_1);
  return;
}



void fn_00409b54(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0057a7ec();
  if (((1 < *(byte *)(param_1 + 0x10c)) && (*(byte *)(param_1 + 0x10c) == 2)) &&
     (*(char *)(param_1 + 0x140) == '\0')) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_00891a10) goto LAB_00409bc4;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_00409bc4:
    if (*(char *)(puVar2 + 0xb) == '\x06') {
      fn_006899f4(param_1,0,0);
      fn_00689d04(param_1,0);
      fn_00689878(param_1,0);
    }
    else {
      fn_006899f4(param_1,0xd4,0,1);
    }
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  return;
}



void fn_00409874(int param_1)

{
  undefined4 uVar1;
  
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  uVar1 = fn_0022f584((char *)&DAT_004098dc,0);
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00689bd0(param_1,0x48,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00409728(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_450 [2];
  undefined1 auStack_448 [1068];
  
  (**(code **)(*param_1 + 0x14c))(param_1);
  (**(code **)(*param_1 + 0x154))(param_1,param_2,param_3);
  piVar3 = (int *)param_1[0x3a];
  uVar1 = piVar3[1] - *piVar3;
  iVar2 = (int)((longlong)(int)uVar1 * -0x99fc267 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 10) - (iVar2 >> 0x1f)) <= param_2) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x99fc267 + ((ulonglong)uVar1 << 0x20) >> 0x20);
    local_450[0] = (iVar2 >> 10) - (iVar2 >> 0x1f);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,param_2);
  }
  fn_0017821c(auStack_448,*piVar3 + param_2 * 0x428,0x428);
  uVar1 = 0;
  do {
    iVar2 = fn_0035bdd0(param_1 + 0x39,auStack_448,(int)(short)(&DAT_007c0d76)[uVar1]);
    if (iVar2 != 0) {
      local_450[0] = _DAT_00891a9c;
      fn_002c37e0(param_1,param_2,local_450);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  local_450[0] = _DAT_00891aa4;
  fn_002c37e0(param_1,param_2,local_450);
  return;
}



void fn_004094a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_00837c7c;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  puVar1[2] = 0;
  return;
}



void fn_0040918c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c [3];
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x4c) + 0x20))();
  if (iVar1 != 0) {
    return;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
    iVar1 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar1;
    if (0 < iVar1) {
      return;
    }
    local_38 = 0xffffffff;
    fn_00163988(DAT_00897808,&local_38,10);
    local_38 = 0xffffffff;
    fn_00163988(DAT_0089780c,&local_38,10);
    *(undefined1 *)(param_1 + 4) = 2;
    *(undefined4 *)(param_1 + 8) = 0;
  case 2:
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 4) = 3;
    }
    break;
  case 3:
    fn_006ccbf8(param_1);
    local_38 = in_s0;
    uStack_34 = in_s1;
    uStack_30 = in_s2;
    uVar5 = fn_006f7a0c(DAT_008977e0);
    fn_00683dec(uVar5,*(undefined1 *)(param_1 + 5),&local_38);
    iVar1 = fn_006f7a5c(DAT_008977e0);
    *(undefined4 *)(iVar1 + 0x1c) = local_38;
    *(undefined4 *)(iVar1 + 0x20) = uStack_34;
    *(undefined4 *)(iVar1 + 0x24) = uStack_30;
    iVar1 = fn_006f7a5c(DAT_008977e0);
    *(undefined4 *)(iVar1 + 0x28) = local_38;
    *(undefined4 *)(iVar1 + 0x2c) = uStack_34;
    *(undefined4 *)(iVar1 + 0x30) = uStack_30;
    fn_006f7a5c(DAT_008977e0);
    fn_001d5f80();
    piVar2 = (int *)fn_006f7508(DAT_008977e0);
    (**(code **)(*piVar2 + 0x60))();
    local_2c[0] = 0;
    fn_00163988(DAT_00897808,local_2c,5);
    local_2c[0] = 0;
    fn_00163988(DAT_0089780c,local_2c,5);
    if (*(char *)(param_1 + 5) == '\0') {
      uVar5 = fn_002b0698(DAT_008977e0);
      uVar3 = 0;
    }
    else {
      if (*(char *)(param_1 + 5) != '\x01') goto LAB_00409364;
      uVar5 = fn_002b0698(DAT_008977e0);
      uVar3 = 1;
    }
    fn_002889cc(uVar3,uVar5);
LAB_00409364:
    uVar5 = fn_002b0698(DAT_008977e0);
    fn_0013af30(DAT_008977d4,uVar5);
    iVar1 = fn_006f7a70(DAT_008977e0);
    iVar6 = 0;
    iVar1 = *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2;
    if (0 < iVar1) {
      do {
        iVar4 = fn_006f7a70(DAT_008977e0);
        piVar2 = *(int **)(*(int *)(iVar4 + 0x18) + iVar6 * 4);
        if ((piVar2 != (int *)0x0) && ((char)piVar2[0x5f] == '#' || (char)piVar2[0x5f] == '\"')) {
          if (*(char *)(param_1 + 5) == '\x01') {
            (**(code **)(*piVar2 + 0xd8))(piVar2);
            (**(code **)(*piVar2 + 0x58))(piVar2,0);
            *(undefined1 *)(piVar2 + 0x6d) = 0;
          }
          else {
            *(undefined1 *)(piVar2 + 0x6d) = 1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 4) = 4;
    return;
  case 4:
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      uVar5 = fn_006f7a84(DAT_008977e0);
      fn_001e60b4(uVar5,0);
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      uVar5 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar5,0);
      return;
    }
  }
  return;
}



void fn_00409120(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 5) == param_2) {
    return;
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  *(char *)(param_1 + 5) = param_2;
  uVar1 = fn_006f7a84(DAT_008977e0);
  fn_001e60b4(uVar1,1);
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,9);
  return;
}



void fn_00408eb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00837b4c;
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 4))();
  }
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))();
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))();
  }
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 4))();
  }
  if ((int *)param_1[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1f] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}


