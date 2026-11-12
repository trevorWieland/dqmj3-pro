#include "005a74bc_005a7abca.h"



void fn_005a777c(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0);
  fn_00579630(*(undefined4 *)(param_1 + 0x28),iVar1,(int)*(char *)(*(int *)(param_1 + 0x30) + 0x58)
              );
  iVar1 = fn_005795e0(*(undefined4 *)(param_1 + 0x28),iVar1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 3;
  }
  return;
}



void fn_005a7750(int param_1)

{
  fn_00579668(*(undefined4 *)(param_1 + 0x28),
               (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0),
               (int)*(char *)(*(int *)(param_1 + 0x30) + 0x58));
  *(undefined1 *)(param_1 + 0x2c) = 4;
  return;
}



void fn_005a76f4(int param_1)

{
  fn_005798b4(*(undefined4 *)(param_1 + 0x28),
               (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0),
               (int)*(char *)(*(int *)(param_1 + 0x30) + 0x58));
  fn_00579518(*(undefined4 *)(param_1 + 0x28),
               (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0),
               (int)*(char *)(*(int *)(param_1 + 0x30) + 0x58));
  fn_00579630(*(undefined4 *)(param_1 + 0x28),
               (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0),
               (int)*(char *)(*(int *)(param_1 + 0x30) + 0x58));
  *(undefined1 *)(param_1 + 0x2c) = 2;
  return;
}



void fn_005a74bc(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [24];
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x30) + (uint)*(byte *)(param_1 + 0x35) * 4 + 0x44);
  iVar3 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    fn_00608f1c(uVar4);
    fn_00579814(*(undefined4 *)(param_1 + 0x28),iVar3);
    uVar1 = fn_00608f3c(uVar4);
  }
  else {
    fn_00608f1c(uVar4);
    fn_00579864(*(undefined4 *)(param_1 + 0x28),iVar3);
    uVar1 = fn_00608f3c(uVar4);
  }
  if ((uVar1 & ~(int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 100) + 0x28)) != 0) {
    if (((byte)DAT_008c62fc & 1) == 0) {
      iVar3 = fn_00303afc(&DAT_008c62fc);
      uVar2 = 0;
      if (iVar3 != 0) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
        DAT_008f9e2c = uVar2;
        DAT_008f9e30 = uVar2;
        DAT_008f9e34 = uVar2;
      }
    }
    iVar3 = *(int *)(param_1 + 0x30);
    if (*(char *)(iVar3 + 0x58) == '\0') {
      fn_0057979c(*(undefined4 *)(param_1 + 0x28),auStack_34,
                   (int)*(char *)(*(int *)(iVar3 + 0x40) + 0xe0));
      fn_005797d8(*(undefined4 *)(param_1 + 0x28),auStack_28,
                   (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0));
    }
    else {
      *(undefined1 *)(*(int *)(iVar3 + 100) + 0x28) = 1;
      fn_0057979c(*(undefined4 *)(param_1 + 0x28),auStack_34,2);
      fn_005797d8(*(undefined4 *)(param_1 + 0x28),auStack_28,2);
    }
    uVar2 = fn_00608ea8(uVar4,(int)*(char *)(param_1 + 0x34),auStack_28);
    iVar3 = *(int *)(param_1 + 0x30);
    if (*(char *)(iVar3 + 0x58) == '\0') {
      if (*(char *)(param_1 + 0x37) == '\0') {
        uVar4 = fn_006ef0e8(uVar4,uVar2,(int)*(char *)(param_1 + 0x34));
        uVar4 = fn_006e8314(*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x35),uVar2,
                             uVar4);
        fn_005a789c(*(undefined4 *)(param_1 + 0x30),auStack_34,uVar4,0,
                     (int)*(char *)(param_1 + 0x37));
      }
    }
    else {
      fn_005a789c(iVar3,auStack_34,*(undefined1 *)(iVar3 + 0x5a),0,(int)*(char *)(iVar3 + 0x5b));
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}


