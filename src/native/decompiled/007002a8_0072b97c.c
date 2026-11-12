#include "007002a8_0072b97c.h"



void fn_0072b97c(void)

{
  fn_00731dd0();
  return;
}



undefined4 fn_007292d0(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0x20) &&
     (puVar1 = *(undefined4 **)(DAT_008bfad8 + param_1 * 4 + 0x828), puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0072909c(void)

{
  DAT_0089319c = 0;
  DAT_008931a0 = 0;
  DAT_008931a4 = 0;
  DAT_008931a8 = 0;
  DAT_008931ac = 0;
  DAT_008931b0 = 0;
  fn_00303b10(&DAT_008931b0,fn_0079ecac,0x100000);
  return;
}



void fn_007073ec(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  
  DAT_008f0bd0 = 0;
  DAT_008f0bd4 = 0;
  DAT_008f0bd8 = 0xffffffff;
  puVar4 = &DAT_008f0bdc;
  puVar5 = &DAT_008f15fc;
  iVar3 = 0;
  do {
    iVar1 = 0;
    if (puVar4 != (undefined *)0x0) {
      iVar1 = fn_0051e3dc(puVar4,iVar3);
    }
    piVar6 = &DAT_008f249c + iVar3;
    *piVar6 = iVar1;
    puVar4 = puVar4 + 0x6c;
    if (puVar5 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_0051e568(puVar5,iVar3);
    }
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 0x9c;
    *(undefined4 *)(*piVar6 + 0x68) = uVar2;
  } while (iVar3 < 0x18);
  fn_00303b10(&DAT_008f0bc0,&DAT_0051e2ac,0x100000);
  return;
}



void fn_00703fe4(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00456a78(&DAT_008e96ec);
  fn_00303b10(uVar1,&DAT_00456a9c,0x100000);
  return;
}



void fn_007036e8(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  DAT_008cfdcc = (undefined4 *)0x0;
  DAT_008cfddc = (undefined1 *)0x0;
  DAT_008cfde0 = 0;
  DAT_008cfde4 = 0;
  DAT_008cfdd8 = (undefined1 *)0x0;
  DAT_008cfdd4 = (undefined1 *)0x0;
  DAT_008cfdd0 = 0;
  DAT_008cfde5 = param_1;
  puVar1 = (undefined4 *)fn_00100fc6(0xc,0);
  uVar2 = fn_00100fc6(0x300,0);
  puVar1[2] = uVar2;
  *puVar1 = DAT_008cfdcc;
  puVar1[1] = 0x20;
  DAT_008cfddc = (undefined1 *)puVar1[2];
  DAT_008cfdd8 = DAT_008cfddc + 0x300;
  DAT_008cfdd4 = DAT_008cfddc + 0x18;
  DAT_008cfdcc = puVar1;
  *(undefined4 *)(DAT_008cfddc + 8) = 0;
  *(undefined4 *)(DAT_008cfddc + 0xc) = 0;
  *DAT_008cfddc = 0;
  *(undefined4 *)(DAT_008cfddc + 4) = 0;
  *(undefined1 **)(DAT_008cfddc + 8) = DAT_008cfddc;
  *(undefined1 **)(DAT_008cfddc + 0xc) = DAT_008cfddc;
  fn_00303b10(&DAT_008cfdcc,fn_006f8544,0x100000,param_4);
  return;
}



void fn_007018c8(void)

{
  undefined4 uVar1;
  
  DAT_008c06d8 = &DAT_008599e0;
  DAT_008c06dc = 0;
  fn_00657340(&DAT_008eef30,&DAT_00658d50,0x100000);
  DAT_008eef3c = 0;
  DAT_008eef40 = 0;
  DAT_008eef44 = 0;
  fn_00656aec(&DAT_008eef3c,4,&DAT_008eef48);
  DAT_008eef74 = 0;
  DAT_008eef78 = 0;
  DAT_008eef7c = 0;
  fn_00656aec(&DAT_008eef74,4,&DAT_008eef80);
  uVar1 = fn_00656cac(&DAT_008eef58);
  fn_00303b10(uVar1,&DAT_00656cd8,0x100000);
  return;
}



void fn_00701140(void)

{
  DAT_008981a8 = 0;
  fn_00303b10(&DAT_008981a8,fn_0079ef78,0x100000);
  return;
}



void fn_007002a8(void)

{
  int iVar1;
  undefined4 local_10;
  
  DAT_0089a7a8 = 0;
  local_10 = 0;
  iVar1 = fn_001ad608(&local_10,0xffff8000);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  DAT_0089a7a8 = local_10;
  DAT_0089a7ac = 0;
  DAT_0089a7ad = 0;
  fn_00303b10(&DAT_0089a7a8,fn_0044fbb0,0x100000,local_10);
  return;
}


