#include "00337de8_00338380.h"



undefined4 fn_00338380(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_2,uVar1);
  }
  return *(undefined4 *)(*param_1 + param_2 * 4);
}



void fn_00338248(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  fn_00615ecc(param_2);
  uVar8 = 0;
  do {
    uVar7 = param_1[1] - *param_1 >> 2;
    if (uVar7 <= uVar8) {
      fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar8,uVar7);
    }
    iVar6 = *param_1;
    iVar1 = uVar8 * 4;
    iVar5 = fn_005f65d4();
    iVar5 = iVar5 % 6 + 1;
    while( true ) {
      bVar4 = false;
      uVar7 = 0;
      if (param_1[1] - *param_1 >> 2 == 0) break;
      do {
        uVar2 = param_1[1] - *param_1 >> 2;
        if (uVar2 <= uVar7) {
          fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar7,uVar2);
        }
        iVar3 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        if (*(int *)(*param_1 + iVar3) == iVar5) {
          bVar4 = true;
        }
      } while (uVar7 < (uint)(param_1[1] - *param_1 >> 2));
      if (!bVar4) break;
      uVar7 = iVar5 + 1;
      iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
      iVar5 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar7;
      if (iVar5 == 0) {
        iVar5 = 1;
      }
    }
    uVar8 = uVar8 + 1;
    *(int *)(iVar6 + iVar1) = iVar5;
    if (5 < (int)uVar8) {
      return;
    }
  } while( true );
}



void fn_0033819c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  return;
}



void fn_0033818c(undefined4 *param_1)

{
  *param_1 = &DAT_00824a38;
  return;
}



void fn_00338160(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00824a38;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



void fn_003380cc(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  iVar4 = 0;
  uVar5 = (uint)*(ushort *)(*(int *)(*param_2 + 0x30) + 0x58);
  if (uVar5 != 0) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x54) + iVar4 * 4);
      uVar2 = fn_005e29c4(uVar1,iVar4);
      fn_005e9048(uVar2,*(char *)(iVar3 + 0x29) == '\x01',*(undefined1 *)(iVar3 + 0x2c),
                   *(undefined1 *)(iVar3 + 0x2d),*(undefined1 *)(iVar3 + 0x2e),
                   *(undefined1 *)(iVar3 + 0x28));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar5);
  }
  return;
}



void fn_00338090(void)

{
  if (*(char *)(DAT_008977d8 + 0x44) == '\0') {
    return;
  }
  fn_005eff8c(DAT_008977d8);
  return;
}



void fn_00338058(int param_1)

{
  fn_003696e8();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  if (*(char *)(DAT_008977d8 + 0x44) == '\0') {
    return;
  }
  fn_005eff8c(DAT_008977d8);
  return;
}



undefined4 fn_0033801c(int *param_1,undefined4 param_2,int param_3)

{
  param_1[1] = param_3;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  return 1;
}



undefined4 fn_00338014(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  param_1[6] = param_4;
  param_1[1] = param_3;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  return 1;
}



void fn_00338008(int param_1)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *(undefined4 *)(param_1 + 8) = in_s0;
  *(undefined4 *)(param_1 + 0xc) = in_s1;
  *(undefined4 *)(param_1 + 0x10) = in_s2;
  return;
}



undefined1 * fn_00337f38(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_20;
  
  local_20 = param_4;
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  iVar2 = fn_005e19a4(uVar1,0);
  fn_005eff40(iVar2,1);
  puVar3 = (undefined1 *)fn_00191218(param_2);
  iVar7 = 0;
  iVar6 = 0;
  piVar5 = (int *)puVar3;
  if (0 < (int)puVar3) {
    do {
      fn_001a0b34(&local_20,param_2,iVar6);
      iVar4 = fn_0019bc24(&local_20);
      if (iVar4 == 0) {
        iVar4 = fn_006eb2c0(&local_20);
        if (iVar4 != 0) {
          fn_005e42a8(iVar2 + 0xc,local_20 + 0x30);
        }
      }
      else {
        uVar1 = fn_005eff2c(iVar2,iVar7);
        fn_005e529c(uVar1,&local_20,*(undefined4 *)(param_1 + 4));
        iVar7 = iVar7 + 1;
      }
      iVar6 = iVar6 + 1;
      piVar5 = &local_20;
    } while (iVar6 < (int)puVar3);
  }
  return (undefined1 *)piVar5;
}



int fn_00337de8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00824a28;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_00337590(param_1 + 7);
  iVar1 = fn_002e9318(param_1 + 0x4e);
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  fn_003369b4();
  *(undefined1 *)(iVar1 + -0x120) = 0;
  fn_00337590(iVar1 + -0x11c);
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  fn_003369b4(iVar1);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  return iVar1 + -0x138;
}


