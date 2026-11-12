#include "001f497c_001f4fcc.h"



void fn_001f4fcc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  fn_001cee1c();
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = fn_0012a26c(*(undefined4 *)(param_1 + 0xf8c));
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xf8c));
  fn_001ce928(uVar1,(char *)&DAT_001f5020,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(char *)&DAT_001f5020,uVar2);
  return;
}



void fn_001f4f68(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_001eb9e8();
  fn_001f12ac(param_1,param_2);
  iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0035bc24();
  }
  piVar3 = *(int **)(param_1 + 0xe4c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0xe4c) = piVar2;
  }
  return;
}



void fn_001f4d24(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_006a8d68();
  if (iVar1 != 0) {
    if (((char)param_1[0x3e5] != '\0') && (*(char *)(DAT_008977e0 + 0x218) == '\0')) {
      iVar1 = fn_006f72b4();
      if (*(int *)(iVar1 + 0x138) != 2) {
        fn_00698fb8(DAT_008977e0,0xffffffff);
      }
      *(undefined1 *)(param_1 + 0x3e5) = 0;
    }
    *(undefined1 *)(param_1 + 0x3a1) = 0xff;
    fn_00158f50(param_1);
    fn_001484b4(param_1);
    (**(code **)(*param_1 + 0x74))(param_1);
  }
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 != 0) {
    *(uint *)(param_1[0x23] + 0x134) = *(uint *)(param_1[0x23] + 0x134) & 0xfffffffe;
    *(undefined4 *)(param_1[0x23] + 0x114) = 4;
    fn_00129014(2);
  }
  fn_0025a35c(param_1[0x3a2]);
  (**(code **)(*param_1 + 0x44))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((int *)param_1[0x393] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x393] + 4))();
    param_1[0x393] = 0;
  }
  if (param_1[0x1d] != 0) {
    fn_0012d73c();
    param_1[0x1d] = 0;
  }
  if (0 < param_1[0x20]) {
    fn_0025fa58(DAT_00897800);
    param_1[0x20] = 0;
  }
  if (0 < param_1[0x21]) {
    fn_0025fa58(DAT_00897800);
    param_1[0x21] = 0;
  }
  fn_001eb6d0(param_1);
  piVar2 = (int *)param_1[0x23];
  if ((piVar2 != (int *)0x0) && ((char)piVar2[0x37] == '\0' || (char)piVar2[0x37] == '\x03')) {
    (**(code **)(*piVar2 + 0x124))(piVar2,(char *)&DAT_001f5b60);
  }
  fn_001ec554(param_1,0);
  fn_006f7a9c(DAT_008977e0);
  fn_0027921c();
  fn_001f1e6c(param_1);
  fn_006f7a9c(DAT_008977e0);
  fn_00277aa4();
  fn_006f7a9c(DAT_008977e0);
  fn_00279284();
  fn_002dbe64(param_1[0x3a0]);
  if ((int *)param_1[0x394] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x394] + 4))();
    param_1[0x394] = 0;
    fn_0012d73c(param_1[0x395]);
    param_1[0x395] = 0;
  }
  param_1[0x396] = 0;
  (**(code **)(*param_1 + 0x6c))(param_1);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return;
}



void fn_001f4b34(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  fn_001cedc8();
  if (*(char *)((int)param_1 + 0xf97) != '\0') {
    *(undefined1 *)((int)param_1 + 0xf97) = 0;
    uVar2 = fn_006f7a0c(DAT_008977e0);
    fn_00685320(uVar2,1);
    uVar2 = fn_006f7a0c(DAT_008977e0);
    fn_00683dac(uVar2,1);
    iVar3 = fn_006f7a70(DAT_008977e0);
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2) {
      do {
        piVar4 = *(int **)(*(int *)(iVar3 + 0x18) + iVar5 * 4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x54))(piVar4,1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2);
    }
    *(undefined1 *)((int)param_1 + 0xf97) = 0;
  }
  if ((char)param_1[0x3e5] != '\0') {
    if (*(char *)(DAT_008977e0 + 0x218) == '\0') {
      iVar3 = fn_006f72b4();
      if (*(int *)(iVar3 + 0x138) != 2) {
        fn_00698fb8(DAT_008977e0,0xffffffff);
      }
      *(undefined1 *)(param_1 + 0x3e5) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3a1) = 0xff;
  fn_00158f50(param_1);
  fn_001484b4(param_1);
  (**(code **)(*param_1 + 0x74))(param_1);
  if (param_1[0x396] != 0) {
    fn_00697514(DAT_008977e0,param_1[0x397],param_1 + 0x399,param_1[0x39d],
                 (int)(char)param_1[0x39e]);
    param_1[0x397] = -1;
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x398) = 0;
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
      DAT_008f9e2c = iVar3;
      DAT_008f9e30 = iVar3;
      DAT_008f9e34 = iVar3;
    }
    iVar1 = DAT_008f9e34;
    iVar5 = DAT_008f9e30;
    param_1[0x399] = DAT_008f9e2c;
    param_1[0x39a] = iVar5;
    param_1[0x39b] = iVar1;
    param_1[0x39c] = iVar3;
    param_1[0x39d] = 0;
    *(undefined1 *)(param_1 + 0x39e) = 0;
    param_1[0x39f] = -0x40800000;
  }
  return;
}



void fn_001f4b20(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  
  iVar1 = *(int *)(DAT_00897804 + 0x24);
  iVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar2 = fn_006b8478(uVar6);
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b074(uVar6,iVar5);
      fn_0020bbc4(auStack_30,uVar3);
      uVar4 = fn_006bfda8(&local_2c);
      iVar2 = *(int *)(iVar1 + 4);
      *(uint *)(iVar2 + ((int)uVar4 >> 5) * 4) =
           *(uint *)(iVar2 + ((int)uVar4 >> 5) * 4) | 1 << (uVar4 & 0x1f);
      local_24 = local_2c;
      local_28 = &DAT_0081c498;
      fn_00289f80(iVar1,&local_28,0);
      iVar5 = iVar5 + 1;
      iVar2 = fn_006b8478(uVar6);
    } while (iVar5 < iVar2);
  }
  return;
}



void fn_001f4af8(void)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = fn_006f7508(DAT_008977e0);
  *(undefined4 *)(iVar1 + 0x10) = in_s0;
  return;
}



int fn_001f4aa8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe4c);
  if (((iVar2 == 0) || (iVar1 = fn_006abd58(), iVar1 == 0)) ||
     (iVar2 = fn_0035b974(iVar2,iVar1 + 0x20,param_3,0,0), iVar2 == -1)) {
    return -1;
  }
  return iVar2;
}



void fn_001f4a98(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_840 [2048];
  undefined1 auStack_40 [32];
  
  iVar1 = DAT_00891220;
  if (*(int *)(DAT_00891220 + 4) == 0) {
    if (*(int *)(DAT_00891220 + 8) == 0) {
      param_2 = param_2 * 2;
      iVar1 = param_2 + 2;
      do {
        uVar3 = fn_0016a82c((int)(short)(&DAT_007bd95c)[param_2 * 2]);
        fn_001003e0(auStack_840,uVar3);
        fn_0015b0dc(auStack_840);
        fn_00101a50(auStack_40,0xb,&DAT_00318ad0,(int)(short)(&DAT_007bd95e)[param_2 * 2]);
        fn_0015b0dc(auStack_40);
        param_2 = param_2 + 1;
      } while (param_2 < iVar1);
      return;
    }
    uVar3 = fn_0016a82c((int)*(short *)(DAT_00891220 + 0xb0));
    fn_001003e0(auStack_840,uVar3);
    fn_0015b0dc(auStack_840);
    if (1 < *(int *)(iVar1 + 0xb4)) {
      fn_00101a50(auStack_40,0xb,&DAT_00318ad0);
      fn_0015b0dc(auStack_40);
      return;
    }
  }
  else if (*(int *)(DAT_00891220 + 4) == 1) {
    uVar3 = *(undefined4 *)(DAT_00897804 + 8);
    iVar1 = fn_0025b304(uVar3);
    iVar2 = fn_006b64b0(uVar3);
    fn_00101a50(auStack_840,0x20,&DAT_00318ad0,iVar1 - iVar2);
    fn_0015b0dc(auStack_840);
  }
  return;
}



undefined4 fn_001f4a58(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_00573db4(), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



undefined4
fn_001f49d4(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-1 < (int)param_3) && (param_3 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
    if ((iVar1 != 0) && (iVar1 = fn_0017fde4(*(undefined4 *)(iVar1 + 0xe4)), iVar1 != 0)) {
      uVar2 = fn_0015a044(param_1,param_2,iVar1,param_4,param_5);
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_001f497c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xe4c);
  if ((iVar3 == 0) || (iVar1 = fn_006abd58(), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0035b7f0(iVar3,iVar1 + 0x20,iVar1 + 0x2c,iVar1 + 0x38,0,0,0);
  return uVar2;
}


