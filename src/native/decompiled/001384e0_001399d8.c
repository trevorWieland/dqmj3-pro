#include "001384e0_001399d8.h"



undefined4 fn_001399d8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139a74,(char *)&DAT_00139a5c,(char *)&DAT_007bc320,0xcb);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(local_18,param_1,0xffffffff);
  fn_0016a798(DAT_00898898,local_c & 0xff);
  return 0;
}



undefined4 fn_001396fc(undefined4 param_1)

{
  undefined1 local_10 [4];
  uint local_c [3];
  
  fn_001488c4(param_1,local_c,local_10);
  fn_0017554c(DAT_00898898,local_c[0] & 0xff);
  return 0;
}



undefined4 fn_001392a4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013933c,(char *)&DAT_00139324,(char *)&DAT_007bc328,0xd8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00175430(DAT_00898898,local_c & 0xff);
  fn_00148a34(param_1,local_18);
  return 1;
}



undefined4 fn_001391d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013925c,(char *)&DAT_00139244,(char *)&DAT_007bc330,300);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001753a4(DAT_00898898,local_10 & 0xff);
  fn_00158070(param_1);
  return 1;
}



undefined4 fn_00139074(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139198,(char *)&DAT_00139180,
                         (char *)&DAT_007bccc8,0x8eb);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001391b4,(char *)&DAT_00139180,
                         (char *)&DAT_007bccc8,0x8ee);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00139198,(char *)&DAT_00139180,
                         (char *)&DAT_007bccc8,0x8f1);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015af18(DAT_00898898,local_10[0] & 0xff,local_18,uStack_14);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00138cbc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138d94,(char *)&DAT_00138d7c,(char *)&DAT_007bc7d4
                         ,0x406);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138dac,(char *)&DAT_00138d7c,
                         (char *)&DAT_007bc7d4,0x409);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001559b0(DAT_00898898,local_c == 1,local_10,0);
  return 0;
}



undefined4 fn_00138b08(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  undefined1 local_10 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138c80,(char *)&DAT_00138c68,
                         (char *)&DAT_007bcd8d,0xa34);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138c80,(char *)&DAT_00138c68,
                         (char *)&DAT_007bcd8d,0xa37);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138ca0,(char *)&DAT_00138c68,(char *)&DAT_007bcd8d
                         ,0xa3a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138c80,(char *)&DAT_00138c68,
                         (char *)&DAT_007bcd8d,0xa3d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0014a3f8(DAT_00898898,local_1c,uStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0013894c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138acc,(char *)&DAT_00138ab4,
                         (char *)&DAT_007bcdab,0xa49);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138acc,(char *)&DAT_00138ab4,
                         (char *)&DAT_007bcdab,0xa4c);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138aec,(char *)&DAT_00138ab4,(char *)&DAT_007bcdab
                         ,0xa4f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138aec,(char *)&DAT_00138ab4,(char *)&DAT_007bcdab
                         ,0xa52);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0014a394(DAT_00898898,local_1c,uStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00138740(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = fn_00157fb0(param_1,0xfffffffb,&local_28);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013890c,(char *)&DAT_001388f4,
                         (char *)&DAT_007bcc30,0x93f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffc,local_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138928,(char *)&DAT_001388f4,(char *)&DAT_007bcc30
                         ,0x942);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138928,(char *)&DAT_001388f4,(char *)&DAT_007bcc30
                         ,0x945);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138928,(char *)&DAT_001388f4,(char *)&DAT_007bcc30
                         ,0x948);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138928,(char *)&DAT_001388f4,(char *)&DAT_007bcc30
                         ,0x94b);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  local_20 = (int)local_c;
  local_1c = (int)local_10;
  local_18 = (int)local_14;
  uVar2 = fn_00149d68(DAT_00898898,local_28,&local_20);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00138538(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = fn_00157fb0(param_1,0xfffffffb,&local_28);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138704,(char *)&DAT_001386ec,
                         (char *)&DAT_007bcc13,0x927);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffc,local_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138720,(char *)&DAT_001386ec,(char *)&DAT_007bcc13
                         ,0x92a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138720,(char *)&DAT_001386ec,(char *)&DAT_007bcc13
                         ,0x92d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138720,(char *)&DAT_001386ec,(char *)&DAT_007bcc13
                         ,0x930);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138720,(char *)&DAT_001386ec,(char *)&DAT_007bcc13
                         ,0x933);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  local_20 = (int)local_c;
  local_1c = (int)local_10;
  local_18 = (int)local_14;
  uVar2 = fn_00149c84(DAT_00898898,local_28,&local_20);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_001384e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined1 local_14 [4];
  uint local_10 [2];
  
  fn_0014d1dc(param_1,local_14,&local_18,local_10);
  uVar1 = fn_00149ba0(DAT_00898898,local_10[0] & 0xff,local_18);
  fn_001580cc(param_1,uVar1);
  return 1;
}


