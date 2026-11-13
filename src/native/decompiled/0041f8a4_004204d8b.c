#include "0041f8a4_004204d8b.h"



void fn_004204d8(int param_1)

{
  fn_00268030(*(undefined4 *)(param_1 + 0x5b3a4));
  return;
}



void fn_004203e0(int param_1)

{
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),(char *)&DAT_00420444,param_1 + 0x79c4,
               0xdd4,3,1);
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),(char *)&DAT_00420468,param_1 + 0x8798,
               0x938,0,1);
  return;
}



void fn_0042038c(int param_1)

{
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),(char *)&DAT_004203c8,param_1 + 4,8,3,1);
  return;
}



void fn_0042029c(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    pcVar2 = "09_Grade_PrivateDlBattle.bin";
    pcVar1 = (char *)&DAT_00420330;
  }
  else {
    pcVar2 = (char *)&DAT_0042034c;
    pcVar1 = (char *)&DAT_0042036c;
  }
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),pcVar1,param_1 + 0x26cc,0x297c,3,1);
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),pcVar2,param_1 + 0x5048,0x297c,0,1);
  return;
}



void fn_0042022c(int param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = (char *)&DAT_00420270;
  }
  else {
    pcVar1 = (char *)&DAT_00420284;
  }
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),pcVar1,param_1 + 0x412c4,0x540,1,1);
  return;
}



void fn_0042017c(int param_1)

{
  fn_00268758(*(undefined4 *)(param_1 + 0x5b3a4),(char *)&DAT_004201c4,param_1 + 0x41808,0x19b98,
               1,1);
  return;
}



void fn_00420130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b4();
  fn_00268300(*(undefined4 *)(param_1 + 0x5b3a4),(char *)&DAT_00420164,param_1,uVar1,0x80);
  return;
}



void fn_0041fe68(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  char *local_30 [3];
  
  puVar1 = (undefined4 *)(param_1 + 0x5b3a4);
  fn_00268758(*puVar1,(char *)&DAT_00420054,param_1 + 0xc,0x14,3,1);
  fn_00268758(*puVar1,(char *)&DAT_00420068,param_1 + 0x9918,0x28,3,1);
  fn_00268758(*puVar1,(char *)&DAT_00420084,param_1 + 0x99d2,0x58,3,1);
  fn_00268758(*puVar1,(char *)&DAT_00420098,param_1 + 0x9940,0x54,3,1);
  fn_00268758(*puVar1,(char *)&DAT_004200b0,param_1 + 0x9994,0x3e,3,1);
  fn_00268758(*puVar1,(char *)&DAT_004200d0,param_1 + 0x90d0,0x848,3,1);
  uVar2 = 0;
  fn_00268758(*puVar1,(char *)&DAT_004200ec,param_1 + 0x34,0x2698,0,1);
  fn_00268758(*puVar1,(char *)&DAT_00420100,param_1 + 0x5b3a0,4,0,1);
  fn_00268758(*puVar1,(char *)&DAT_00869db8,param_1 + 0x9a2a,0x7fe,3,1);
  local_30[0] = (char *)&DAT_00869d50;
  local_30[1] = (char *)&DAT_00869d68;
  do {
    fn_00268758(*puVar1,local_30[uVar2],param_1 + uVar2 * 0x600 + 0x40600,0x600,3,1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  uVar2 = 0;
  local_30[0] = (char *)&DAT_00869d80;
  local_30[1] = (char *)&DAT_00869d9c;
  do {
    fn_00268758(*puVar1,local_30[uVar2],param_1 + uVar2 * 0x19998 + 0xd2d0,0x19998,3,1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  uVar2 = 0;
  local_30[0] = (char *)&DAT_00869d10;
  local_30[1] = (char *)&DAT_00869d30;
  do {
    fn_00268758(*puVar1,local_30[uVar2],param_1 + uVar2 * 0x1454 + 0xaa28,0x1454,3,1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}



void fn_0041fe58(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x412c4,param_2,0x540);
  return;
}


