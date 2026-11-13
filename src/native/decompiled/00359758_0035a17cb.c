#include "00359758_0035a17cb.h"



undefined4 fn_0035a17c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  fn_0017821c(auStack_50,DAT_00892448 + param_1 * 0x44,0x44);
  uVar1 = 0xffffffff;
  switch(param_2) {
  case 1:
    uVar1 = local_4c;
    break;
  case 2:
    uVar1 = local_48;
    break;
  case 3:
    uVar1 = local_44;
    break;
  case 4:
    uVar1 = local_40;
    break;
  case 5:
    uVar1 = local_3c;
    break;
  case 6:
    uVar1 = local_38;
    break;
  case 7:
    uVar1 = local_34;
    break;
  case 8:
    uVar1 = local_30;
    break;
  case 9:
    uVar1 = local_2c;
    break;
  case 10:
    uVar1 = local_28;
    break;
  case 0xb:
    uVar1 = local_24;
    break;
  case 0xc:
    uVar1 = local_20;
    break;
  case 0xd:
    uVar1 = local_1c;
    break;
  case 0xe:
    uVar1 = local_18;
    break;
  case 0xf:
    uVar1 = local_14;
    break;
  case 0x10:
    uVar1 = local_10;
  }
  return uVar1;
}



undefined4 fn_0035a0ec(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0035a170,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x44;
  iVar2 = 0;
  DAT_0089244c = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_0089244c = 0;
  }
  DAT_00892448 = param_1;
  return 1;
}



void fn_0035a0cc(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00826aa4;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_00359fdc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0011c1b4(param_4,0,0,0,0,0,0,0,5);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_00145ac0();
    if ((iVar1 != 0) && (iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 4)), iVar1 == 1)) {
      iVar2 = fn_00145ac0(*(undefined4 *)(param_1 + 4));
      iVar1 = fn_00147e6c(iVar2,param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = fn_0012a26c(*(undefined4 *)(param_1 + 4));
        iVar2 = iVar2 + param_3;
        *(uint *)(param_1 + 0x14) = (uint)(iVar1 - param_3) / 0x28;
        *(int *)(param_1 + 8) = iVar2;
        *(int *)(param_1 + 0xc) = iVar2 + 8;
        *(int *)(param_1 + 0x10) = iVar2 + *(int *)(iVar2 + 4);
        return;
      }
    }
    fn_0012d73c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_00359fb8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


