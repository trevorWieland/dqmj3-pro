#include "0012de54_00131128.h"



undefined4 fn_00131128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001311a0,(char *)&DAT_00131188,(char *)&DAT_007bc756,0x3ab);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00154d9c(DAT_00898898,local_10);
  return 0;
}



undefined4 fn_00130f34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00131008,(char *)&DAT_00130ff0,(char *)&DAT_007bcab3,0x6f2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00131008,(char *)&DAT_00130ff0,(char *)&DAT_007bcab3,0x6f5);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00154d74(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_00130e40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130f14,(char *)&DAT_00130efc,(char *)&DAT_007bcaa6,0x6e6);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130f14,(char *)&DAT_00130efc,(char *)&DAT_007bcaa6,0x6e9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_0016427c(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_00130a0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130a90,(char *)&DAT_00130a78,(char *)&DAT_007bcd4d,0xa06);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00154ac0(DAT_00898898,local_10);
  fn_00158004(param_1,uVar2);
  return 1;
}



undefined4 fn_001308a4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [16];
  
  fn_00148924(local_24,param_1,0xfffffffa);
  fn_00148924(local_30,param_1,0xfffffffb);
  fn_00148924(local_3c,param_1,0xfffffffc);
  fn_00148924(local_48,param_1,0xfffffffd);
  fn_00148924(local_54,param_1,0xfffffffe);
  fn_00148924(local_18,param_1,0xffffffff);
  uVar1 = fn_0014a4a8(DAT_00898898);
  fn_001580cc(param_1,uVar1);
  return 1;
}



undefined4 fn_0013070c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  int local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001307e4,(char *)&DAT_001307cc,(char *)&DAT_007bc467,0xa1);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001307fc,(char *)&DAT_001307cc,(char *)&DAT_007bc467,0xa4);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001749e8(DAT_00898898,local_10 & 0xff,local_c == 1);
  return 0;
}



undefined4 fn_001302f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130390,(char *)&DAT_00130378,(char *)&DAT_007bc70d,0x115);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00174900(DAT_00898898,local_c & 0xff);
  fn_00148a34(param_1,local_18);
  return 1;
}



undefined4 fn_001301a8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 local_1c [12];
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130290,(char *)&DAT_00130278,(char *)&DAT_007bc701,0x107);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001302ac,(char *)&DAT_00130278,(char *)&DAT_007bc701,0x10a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00154ba4(DAT_00898898,local_10[0] & 0xff,local_20);
  fn_00148a34(param_1,local_1c);
  return 1;
}



undefined4 fn_0012ff80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130094,(char *)&DAT_0013007c,(char *)&DAT_007bc4cd,0x15b);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130094,(char *)&DAT_0013007c,(char *)&DAT_007bc4cd,0x15e);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00130094,(char *)&DAT_0013007c,(char *)&DAT_007bc4cd,0x161);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00182c40(DAT_00898898,local_10[0] & 0xff,local_18,uStack_14);
  return 0;
}



undefined4 fn_0012fa14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0012fa98,(char *)&DAT_0012fa80,(char *)&DAT_007bcd65,0xa1e);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00163d3c(DAT_00898898,local_10);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0012f970(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0012f9f8,(char *)&DAT_0012f9e0,(char *)&DAT_007bc4ed,0x188);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00155ec8(DAT_00898898,local_10 & 0xff);
  fn_001580cc(param_1,uVar2);
  return 1;
}



void fn_0012e5d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    fn_001581d0(param_1,&DAT_00148920);
    return;
  }
  fn_0014871c(DAT_00898898,local_10);
  fn_001638b0(param_1);
  return;
}



undefined4 fn_0012e400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  fn_00148700(DAT_00898898,(int)(short)local_10);
  return 0;
}



undefined4 fn_0012e328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  fn_0015b0c0(DAT_00898898,(int)(short)local_10);
  return 0;
}



undefined4 fn_0012e05c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  iVar1 = fn_00157f00(param_1,0xfffffffe,local_10);
  if ((iVar1 < 0) || (iVar1 = fn_00157f58(param_1,0xffffffff,&local_c), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  fn_00148674(DAT_00898898,local_c);
  return 0;
}



undefined4 fn_0012de54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  *(char *)(DAT_00898898 + 0x6b) = (char)local_10;
  return 0;
}


