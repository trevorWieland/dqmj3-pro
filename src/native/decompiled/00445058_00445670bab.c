#include "00445058_00445670bab.h"



void fn_004454b4(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 auStack_e30 [8];
  undefined1 auStack_e28 [512];
  undefined1 auStack_c28 [2560];
  undefined1 auStack_228 [520];
  
  *(undefined1 *)(param_1 + 0xe15) = 1;
  fn_0012a2d8(auStack_e30);
  fn_00158f6c(auStack_e28,0x200);
  fn_00158f6c(auStack_c28,0xa00);
  fn_00158f6c(auStack_228,0x200);
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      fn_001003e0(auStack_c28 + uVar2 * 0x200,*(undefined4 *)(param_2 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  *(uint *)(param_1 + 0xe18) = param_3;
  fn_00301a9c(param_1 + 8,auStack_e30,0xe08);
  *(undefined1 *)(param_1 + 0xe10) = 0;
  *(char *)(param_1 + 0xe12) = (char)param_4;
  *(undefined1 *)(param_1 + 0xe14) = 1;
  if (param_4 == 0) {
    *(undefined1 *)(param_1 + 0xe13) = 1;
  }
  else {
    uVar1 = fn_00154ac8(0x446);
    *(undefined1 *)(param_1 + 0xe13) = uVar1;
  }
  return;
}



void fn_00445408(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 auStack_e28 [8];
  undefined1 auStack_e20 [512];
  undefined1 auStack_c20 [2560];
  undefined1 auStack_220 [520];
  
  *(undefined1 *)(param_1 + 0xe15) = 1;
  fn_0012a2d8(auStack_e28);
  fn_00158f6c(auStack_e20,0x200);
  fn_00158f6c(auStack_c20,0xa00);
  fn_00158f6c(auStack_220,0x200);
  fn_001003e0(auStack_c20,param_2);
  fn_00301a9c(param_1 + 8,auStack_e28,0xe08);
  *(undefined1 *)(param_1 + 0xe10) = 0;
  *(char *)(param_1 + 0xe12) = (char)param_3;
  *(undefined1 *)(param_1 + 0xe14) = 1;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0xe13) = 1;
  }
  else {
    uVar1 = fn_00154ac8(0x446);
    *(undefined1 *)(param_1 + 0xe13) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xe18) = 0;
  return;
}



void fn_004453d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_0083e5cc;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}


