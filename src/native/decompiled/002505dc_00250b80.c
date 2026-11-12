#include "002505dc_00250b80.h"



undefined4 fn_00250b80(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  uVar3 = fn_005e0a2c();
  if ((uVar3 & 0x80000000) != 0) {
    uVar1 = (uVar3 & 0x3fc00) >> 10;
    uVar2 = uVar3 & 0x3ff;
    if (((uVar1 != 0x11) || (uVar2 < 100)) || (0xb3 < uVar2)) {
      if (((uVar1 == 0x11) && (0x153 < uVar2)) && (uVar2 < 0x168)) {
        uVar4 = 4;
      }
      else {
        if ((((uVar1 != 0x11) || (uVar2 < 0x168)) || (0x185 < uVar2)) &&
           (((uVar1 != 0x11 || (uVar2 < 0x186)) || (399 < uVar2)))) {
          if (((uVar1 == 0x11) && (0xe5 < uVar2)) && (uVar2 < 0x154)) {
            uVar4 = 0x250c54;
          }
          else {
            uVar4 = 0x250c64;
          }
          if ((int)uVar3 < 0) {
            fn_0015e590(uVar3,uVar4,uVar2,uVar1,unaff_r4,in_lr);
            return 0;
          }
          return 0;
        }
        uVar4 = 5;
      }
      return uVar4;
    }
  }
  return 0;
}



undefined4 fn_00250ac4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_0089787c == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = fn_00145aac(DAT_0089787c);
    if (iVar2 == 2) {
      fn_0012d73c(DAT_0089787c);
      DAT_0089787c = 0;
      fn_005e0784();
      piVar3 = (int *)*param_1;
      if (*piVar3 != 0) {
        fn_002feef8();
        *piVar3 = 0;
      }
      fn_001076bc(1);
      return 2;
    }
    iVar2 = fn_00145aac();
    if (iVar2 == 1) {
      fn_001c7ea8(1);
      fn_0012d73c(DAT_0089787c);
      DAT_0089787c = 0;
      fn_005e0784();
      piVar3 = (int *)*param_1;
      if (*piVar3 != 0) {
        fn_002feef8();
        *piVar3 = 0;
      }
      fn_001076bc(1);
      uVar1 = 0;
    }
    else {
      uVar1 = 6;
    }
  }
  return uVar1;
}



undefined4 fn_002509fc(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (DAT_00897880 == 0) {
    fn_005e0784();
    piVar3 = (int *)*param_1;
    iVar1 = *piVar3;
  }
  else {
    iVar1 = fn_00145aac();
    if (iVar1 != 2) {
      iVar1 = fn_00145aac();
      if (iVar1 == 1) {
        uVar2 = fn_00145ac0(DAT_00897880);
        fn_002513b4(*param_1,uVar2);
        fn_0012d73c(DAT_00897880);
        DAT_00897880 = 0;
        fn_005e0784();
        uVar2 = 0;
      }
      else {
        uVar2 = 6;
      }
      return uVar2;
    }
    fn_0012d73c(DAT_00897880);
    DAT_00897880 = 0;
    fn_005e0784();
    piVar3 = (int *)*param_1;
    iVar1 = *piVar3;
  }
  if (iVar1 != 0) {
    fn_002feef8();
    *piVar3 = 0;
  }
  return 2;
}



bool fn_002509d8(void)

{
  int iVar1;
  
  fn_005e07a8();
  iVar1 = fn_005e0790();
  if (iVar1 == 0) {
    fn_001076bc(1);
  }
  return iVar1 != 0;
}



bool fn_0025097c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  if (param_2 < 0x21) {
    return false;
  }
  fn_001628b0(auStack_30,param_1,param_2 - 0x20,param_3,param_4);
  iVar1 = fn_001010c8(auStack_30,param_1 + param_2 + -0x20,0x20);
  return iVar1 == 0;
}



undefined4 fn_002508f4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(DAT_0088fcd8 + param_1 * 4) != 0) ||
     (iVar1 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc)), iVar1 != 0)) {
    return 1;
  }
  iVar1 = fn_0014ccb4(param_1,param_2,*(undefined4 *)(DAT_0088fcdc + param_1 * 4));
  if (iVar1 == 0) {
    return 0;
  }
  fn_0028ad34(*(undefined4 *)(DAT_00897804 + 0xc),param_1,param_2);
  return 1;
}



void fn_002507f8(int param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 auStack_30 [32];
  
  iVar1 = DAT_00897804;
  if (param_1 != 0) {
    return;
  }
  if (DAT_00897804 != 0) {
    fn_00301a9c(auStack_78,&DAT_0088fcb8,0x20);
    local_58 = **(undefined4 **)(*(int *)(iVar1 + 0xc) + 4);
    local_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    local_48 = 0;
    local_44 = 0;
    local_40 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_3c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_38 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_34 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_30,auStack_78,0x48);
    fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_30);
  }
  return;
}



undefined4 fn_002506e0(undefined1 *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_120 [240];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar7 = 0;
  bVar1 = false;
  bVar2 = true;
  iVar6 = 0;
  puVar3 = param_1;
  if (param_2 < 1) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    do {
      piVar5 = *(int **)(param_1 + iVar6 * 4);
      if (piVar5 != (int *)0x0) {
        puVar3 = (undefined1 *)*piVar5;
      }
      if (piVar5 != (int *)0x0 && puVar3 != (undefined1 *)0x0) {
        if (bVar1) {
          return 1;
        }
        fn_0017821c(auStack_120,piVar5,0xf0);
        fn_0020bbc4(auStack_30,auStack_120);
        uVar4 = fn_006bfe90(auStack_2c);
        switch(uVar4) {
        case 0:
        case 1:
          iVar7 = iVar7 + 1;
          break;
        case 2:
          iVar7 = iVar7 + 2;
          break;
        case 3:
          iVar7 = iVar7 + 3;
          break;
        case 4:
          iVar7 = iVar7 + 4;
        }
        if (4 < iVar7) {
          return 1;
        }
        bVar2 = false;
        puVar3 = auStack_30;
      }
      else {
        bVar1 = true;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
    if (param_3 != 0) {
      return 0;
    }
    if (!bVar2) {
      return 0;
    }
  }
  return 1;
}



void fn_002505dc(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = fn_00163868(10);
  iVar1 = (uint)bVar2 * 5;
  *(byte *)(param_1 + 0x3e) = bVar2 | 0x80;
  if ((char)(&DAT_007ba008)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007ba008)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x38) = uVar3;
  if ((char)(&DAT_007ba009)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007ba009)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x39) = uVar3;
  if ((char)(&DAT_007ba00a)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007ba00a)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x3f) = uVar3;
  if ((char)(&DAT_007ba00b)[iVar1] < 0) {
    uVar4 = fn_00163868();
  }
  else {
    uVar4 = param_2 >> (((int)(char)(&DAT_007ba00b)[iVar1] & 0x1fU) << 3);
  }
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffc03 | (uVar4 & 0xff) << 2;
  if ((char)(&DAT_007ba00c)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007ba00c)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x43) = uVar3;
  return;
}


