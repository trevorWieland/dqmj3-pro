#include "002f4c30_003c42d8.h"



void fn_003c42d8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_b00 [2696];
  undefined1 auStack_78 [80];
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = fn_002e341c();
  if ((iVar1 != 0) && (iVar1 = fn_00227398(), iVar1 != 0)) {
    iVar1 = fn_00227ab4();
    if ((iVar1 != 0) && (uVar2 = fn_00227988(0), uVar2 != 0)) {
      uVar3 = fn_00228bfc(*(undefined4 *)(DAT_00897804 + 0x34));
      if (uVar3 < uVar2) {
        iVar1 = fn_002280b4(uVar2);
        local_28 = 0;
        uStack_24 = 0;
        if (iVar1 != 0) {
          iVar4 = fn_00682340(DAT_00897894,&local_28,uVar2);
          if (iVar4 != 0) {
            fn_001139cc(auStack_78);
            fn_002284f0(auStack_78,iVar1);
            fn_00301f50(auStack_b00,0xa88);
            fn_0029388c(auStack_78,auStack_b00);
            iVar1 = fn_00292df8(auStack_b00);
            if (iVar1 != 0) {
              (**(code **)(*DAT_00897894 + 0x3c))(DAT_00897894,uVar2,1);
              fn_00228c08(*(undefined4 *)(DAT_00897804 + 0x34),uVar2);
            }
          }
        }
      }
      fn_00228298(uVar2);
    }
    fn_00682a8c();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 100) = 5;
  return;
}



int fn_002f4c30(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = -1;
  cVar1 = *(char *)((int)param_1 + 0x3a);
  if (cVar1 == '\0') {
    cVar1 = *(char *)((int)param_1 + 0x39);
    *(undefined1 *)((int)param_1 + 0x39) = 0xff;
    if (cVar1 == '\x01') {
      fn_003ca698(param_1[9]);
      uVar5 = *param_1;
      uVar6 = *(undefined4 *)(param_1[1] + 0x3c);
      uVar2 = fn_00129004();
      fn_002419f4(uVar2,uVar5,uVar6);
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      uVar2 = fn_00129004();
      fn_002416b4(uVar2,uVar5,uVar6);
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar2 = fn_00129004();
      fn_00241948(uVar2,uVar5,uVar6);
      iVar3 = param_1[0xb];
      if (*(char *)(iVar3 + 0x10) == '\0') {
        uVar2 = fn_001c232c(DAT_008977e4);
        fn_002f5fa0(param_1[0xb],*(undefined4 *)(param_1[0xb] + 0xc),uVar2);
        fn_002f7144(uVar2);
        iVar3 = param_1[8];
        uVar2 = 0xe2;
      }
      else {
        fn_003e93d8(iVar3,*(undefined4 *)(iVar3 + 0xc));
        fn_002f7144();
        iVar3 = param_1[8];
        uVar2 = 0xe3;
      }
      *(undefined4 *)(iVar3 + 0x84) = uVar2;
    }
    else {
      fn_005f3c48(2);
      fn_005f3aac(2);
      if ((param_1[0xc] == 0) &&
         (iVar3 = fn_00145b00(0x1db7c,&DAT_00812c8c), param_1[0xc] != iVar3)) {
        fn_002feef8();
        param_1[0xc] = iVar3;
      }
      if ((param_1[0xd] == 0) && (iVar3 = fn_00145b00(0xc88,&DAT_00812c8c), param_1[0xd] != iVar3))
      {
        fn_002feef8();
        param_1[0xd] = iVar3;
      }
      fn_002f4714(param_1);
      *(undefined4 *)(param_1[8] + 0x84) = 0xd4;
    }
    (**(code **)(*(int *)param_1[9] + 0x1c))();
    *(undefined1 *)((int)param_1 + 0x3a) = 1;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      fn_003ca180(param_1[9]);
      (**(code **)(*(int *)param_1[9] + 0x18))();
      iVar3 = (**(code **)(*(int *)param_1[9] + 0x2c))();
      if (iVar3 == 0) {
        if (*(char *)((int)param_1 + 0x39) == '\0') {
          fn_00110c74(DAT_008977e4);
          fn_0011360c(param_1);
          if (param_1[0xd] != 0) {
            fn_002feef8();
            param_1[0xd] = 0;
          }
          if (param_1[0xc] != 0) {
            fn_002feef8();
            param_1[0xc] = 0;
          }
          fn_001076bc(2);
          fn_005f3c30(2);
        }
        else if (*(char *)((int)param_1 + 0x39) == '\x01') {
          fn_00122958(param_1);
        }
        iVar4 = (int)*(char *)((int)param_1 + 0x39);
        *(undefined1 *)((int)param_1 + 0x3a) = 0;
      }
    }
    goto LAB_002f4ecc;
  }
  (**(code **)(*(int *)param_1[9] + 0x18))();
  fn_004204d8(param_1[10]);
  fn_0023e6c8(param_1[1]);
  (**(code **)(*(int *)*param_1 + 0x10))();
LAB_002f4ecc:
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return iVar4;
}


