#include "006b9768_006ba178.h"



undefined4 fn_006ba178(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x38c) != '\0') {
    iVar1 = fn_00182988(DAT_008977e4);
    iVar1 = fn_006b89f8(iVar1 + 0x38c);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x34) + 0x10);
}



undefined4 fn_006ba11c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x38c) != '\0') {
    iVar1 = fn_00182988(DAT_008977e4);
    iVar1 = fn_006b89f8(iVar1 + 0x38c);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x34) + 0xc);
}



int fn_006ba108(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x10;
}



int fn_006ba0dc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 0x10;
    iVar3 = iVar3 + 1;
    if (*(int *)(*param_1 + iVar1) != 0) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar3 < 0x2a);
  return iVar2;
}



undefined4 fn_006ba084(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 0x34;
  iVar3 = *(int *)(iVar1 + 0x30);
  if (iVar3 == *(int *)(iVar1 + 0x1c)) {
    uVar2 = 0;
  }
  else if (iVar3 == *(int *)(iVar1 + 0x20)) {
    uVar2 = 1;
  }
  else if (iVar3 == *(int *)(iVar1 + 0x24)) {
    uVar2 = 2;
  }
  else if (iVar3 == *(int *)(iVar1 + 0x28)) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 fn_006ba02c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 0x34;
  iVar3 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == *(int *)(iVar1 + 0x1c)) {
    uVar2 = 0;
  }
  else if (iVar3 == *(int *)(iVar1 + 0x20)) {
    uVar2 = 1;
  }
  else if (iVar3 == *(int *)(iVar1 + 0x24)) {
    uVar2 = 2;
  }
  else if (iVar3 == *(int *)(iVar1 + 0x28)) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



int fn_006ba018(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x34;
}



undefined4 fn_006b9fb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00154ac8(0x35);
  if ((iVar1 == 0) || (iVar1 = fn_006b7654(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006b9f38(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00154ac8(0x4f);
  if (iVar2 == 0) {
    fn_006f7a84(DAT_008977e0);
    iVar2 = fn_006ab108();
    if (iVar2 == 0) {
      fn_006f7a84(DAT_008977e0);
      iVar2 = fn_006aa580();
      cVar1 = '\0';
      if (iVar2 != 0) {
        cVar1 = *(char *)(param_1 + 0x5c);
      }
      if (iVar2 != 0 && cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



void fn_006b99f0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_54;
  uint local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  uVar4 = fn_006f72c8(DAT_008977e0);
  fn_00319728(uVar4,&local_54);
  iVar1 = (int)(local_50 - local_54) >> 1;
  if (iVar1 == 0) {
    uVar7 = local_54;
    if (local_50 < local_54) {
      do {
        uVar7 = uVar7 + 2;
      } while (uVar7 != local_50);
    }
  }
  else {
    uVar7 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = (int)(local_50 - local_54) >> 1;
        if (uVar2 <= uVar7) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar7,uVar2);
        }
        uVar3 = fn_006616a8((int)*(short *)(local_54 + uVar7 * 2));
        local_44 = CONCAT22(((unsigned int)(local_44) >> 16) & 0xffff,uVar3);
        uStack_30 = 0x200000;
        uStack_2c = 0x80010;
        uStack_28 = 0x20004;
        uStack_24 = 1;
        iVar5 = fn_00661600();
        local_44 = CONCAT22(*(undefined2 *)((int)&uStack_30 + iVar5 * 2),(undefined2)local_44);
        puVar6 = *(undefined4 **)(param_2 + 4);
        if (puVar6 == *(undefined4 **)(param_2 + 8)) {
          fn_0078a2f0(param_2,puVar6,&local_44);
        }
        else {
          *(undefined4 **)(param_2 + 4) = puVar6 + 1;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = local_44;
          }
        }
        uVar2 = (int)(local_50 - local_54) >> 1;
        if (uVar2 <= uVar7) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar7,uVar2);
        }
        uVar3 = fn_0066161c((int)*(short *)(local_54 + uVar7 * 2));
        local_48 = CONCAT22(((unsigned int)(local_48) >> 16) & 0xffff,uVar3);
        uStack_40 = 0x200000;
        uStack_3c = 0x80010;
        uStack_38 = 0x20004;
        uStack_34 = 1;
        iVar5 = fn_00661534();
        local_48 = CONCAT22(*(undefined2 *)((int)&uStack_40 + iVar5 * 2),(undefined2)local_48);
        puVar6 = *(undefined4 **)(param_2 + 4);
        if (puVar6 == *(undefined4 **)(param_2 + 8)) {
          fn_0078a2f0(param_2,puVar6,&local_48);
        }
        else {
          *(undefined4 **)(param_2 + 4) = puVar6 + 1;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = local_48;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar1);
    }
    uVar7 = local_54;
    if (local_50 < local_54) {
      do {
        uVar7 = uVar7 + 2;
      } while (uVar7 != local_50);
    }
  }
  fn_001008c4(local_54,(int)(local_4c - local_54) >> 1,0);
  return;
}



undefined4 fn_006b98d0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  int local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar2 = fn_00154ac8(0x30);
  if (iVar2 == 0) {
    fn_0060b75c(&local_20,&DAT_007c0f50,2,uVar1);
    iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
    if (0 < iVar2) {
      fn_0060b75c(&local_20,L"\nz|}",1,uVar1);
    }
  }
  else {
    fn_0060b75c(&local_20,&DAT_007c0f6c,2,uVar1);
    iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
    if (0 < iVar2) {
      fn_0060b75c(&local_20,&DAT_007c0f96,1,uVar1);
    }
  }
  uVar1 = fn_006b9608(param_1,&local_20);
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 2,0);
  return uVar1;
}



void fn_006b9768(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (0 < iVar1) {
    do {
      uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
      if (uVar2 <= uVar5) {
        fn_002ff628(9,&DAT_008c7602,&DAT_008c7602,uVar5,uVar2);
      }
      iVar6 = (int)*(short *)(*(int *)(param_1 + 4) + uVar5 * 4);
      iVar3 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (iVar3 == 8) {
        iVar3 = fn_00660e2c(iVar6);
        if (iVar3 == 1) goto LAB_006b9848;
      }
      else if ((((iVar3 != 9) || (iVar3 = fn_00660e2c(iVar6), iVar3 == 3)) ||
               (iVar3 = fn_00660e2c(iVar6), iVar3 == 4)) ||
              (iVar3 = fn_00660e2c(iVar6), iVar3 == 5)) {
LAB_006b9848:
        uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
        if (uVar2 <= uVar5) {
          fn_002ff628(9,&DAT_008c7602,&DAT_008c7602,uVar5,uVar2);
        }
        iVar3 = *(int *)(param_1 + 4);
        puVar4 = *(undefined4 **)(param_2 + 4);
        if (puVar4 == *(undefined4 **)(param_2 + 8)) {
          fn_0078a2f0();
        }
        else {
          *(undefined4 **)(param_2 + 4) = puVar4 + 1;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)(iVar3 + uVar5 * 4);
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return;
}


