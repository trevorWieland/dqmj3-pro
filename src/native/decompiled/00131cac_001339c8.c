#include "00131cac_001339c8.h"



undefined4 fn_001339c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 auStack_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133ad0,(char *)&DAT_00133ab8,(char *)&DAT_007bc51c,500);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133ad0,(char *)&DAT_00133ab8,(char *)&DAT_007bc51c,0x1f7);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,auStack_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133ad0,(char *)&DAT_00133ab8,(char *)&DAT_007bc51c,0x1fa);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001553b0(DAT_00898898,local_18,uStack_14,auStack_10[0]);
  return 0;
}



undefined4 fn_001338d4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [4];
  char local_c [4];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001339a8,(char *)&DAT_00133990,(char *)&DAT_007bcaf4,0x72e);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001339a8,(char *)&DAT_00133990,(char *)&DAT_007bcaf4,0x731);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001649ec(DAT_00898898,(int)local_10[0],(int)local_c[0]);
  return 0;
}



undefined4 fn_0013389c(undefined4 param_1)

{
  undefined1 local_10 [16];
  
  fn_00148924(local_10,param_1,0xffffffff);
  fn_00149534(DAT_00898898);
  return 0;
}



undefined4 fn_00133564(undefined4 param_1)

{
  fn_001552cc(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_001332f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001333c8,(char *)&DAT_001333b0,(char *)&DAT_007bcad0,0x70a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001333c8,(char *)&DAT_001333b0,(char *)&DAT_007bcad0,0x70d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155240(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_00133064(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133138,(char *)&DAT_00133120,(char *)&DAT_007bcac0,0x6fe);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133138,(char *)&DAT_00133120,(char *)&DAT_007bcac0,0x701);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155194(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_00132f74(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133048,(char *)&DAT_00133030,(char *)&DAT_007bcb1e,0x74d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00133048,(char *)&DAT_00133030,(char *)&DAT_007bcb1e,0x750);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001493b4(DAT_00898898,local_10 & 0xff,(int)local_c[0]);
  return 0;
}



undefined4 fn_00132cb4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [4];
  char local_c [4];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00132d94,(char *)&DAT_00132d7c,(char *)&DAT_007bc8d5,0x4c5);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00132d94,(char *)&DAT_00132d7c,(char *)&DAT_007bc8d5,0x4c8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001659c0(DAT_00898898,(int)local_10[0],(int)local_c[0]);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00132b58(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  
  iVar2 = fn_00157f58(param_1,0xfffffffd,&local_10);
  if (iVar2 < 0) {
    uVar3 = fn_00148918((char *)&DAT_00132c84,(char *)&DAT_00132c6c,(char *)&DAT_007bc845,0x456);
    uVar3 = fn_001581d0(param_1,uVar3);
    return uVar3;
  }
  iVar2 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar2 < 0) {
    uVar3 = fn_00148918((char *)&DAT_00132c84,(char *)&DAT_00132c6c,(char *)&DAT_007bceee,0x443);
    cVar1 = fn_001581d0(param_1,uVar3);
    iVar2 = (int)cVar1;
  }
  else {
    iVar2 = fn_00157f58(param_1,0xffffffff,&uStack_14);
    if (iVar2 < 0) {
      uVar3 = fn_00148918((char *)&DAT_00132c84,(char *)&DAT_00132c6c,(char *)&DAT_007bceee,0x446);
      cVar1 = fn_001581d0(param_1,uVar3);
      iVar2 = (int)cVar1;
    }
    else {
      iVar2 = fn_00174c34(DAT_00898898,local_10 & 0xff,local_18,uStack_14);
    }
  }
  fn_001580cc(param_1,iVar2);
  return 1;
}



undefined4 fn_00132b2c(undefined4 param_1)

{
  fn_00148a34(param_1,DAT_00898898 + 0xc4);
  return 1;
}



undefined4 fn_00132574(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  uint local_c;
  
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00132654,(char *)&DAT_0013263c,(char *)&DAT_007bc5b6,0x1ae);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00132670,(char *)&DAT_0013263c,(char *)&DAT_007bc5b6,0x1b1);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00179990(DAT_00898898,local_10,local_c & 0xff);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00131ce4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00131db8,(char *)&DAT_00131da0,(char *)&DAT_007bc7ba,0x3f0);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00131dd0,(char *)&DAT_00131da0,(char *)&DAT_007bc7ba,0x3f2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00154ff8(DAT_00898898,local_c == 1,local_10,1);
  return 0;
}



undefined4 fn_00131cac(undefined4 param_1)

{
  undefined1 local_10 [16];
  
  fn_00148924(local_10,param_1,0xffffffff);
  fn_00149390(DAT_00898898);
  return 0;
}


