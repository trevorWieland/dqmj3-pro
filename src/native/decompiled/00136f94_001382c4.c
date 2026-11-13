#include "00136f94_001382c4.h"



undefined4 fn_001382c4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001383e8,(char *)&DAT_001383d0,
                         (char *)&DAT_007bcc98,0x8cc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138404,(char *)&DAT_001383d0,(char *)&DAT_007bcc98
                         ,0x8cf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001383e8,(char *)&DAT_001383d0,
                         (char *)&DAT_007bcc98,0x8d2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015add4(DAT_00898898,local_10[0] & 0xff,local_18,uStack_14);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00137fb8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138098,(char *)&DAT_00138080,(char *)&DAT_007bcce9,
                         0x8fc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001380b4,(char *)&DAT_00138080,(char *)&DAT_007bcce9,
                         0x8ff);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015af10(DAT_00898898,local_c & 0xff,local_10);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00137d38(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  uint local_10 [2];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffc,&local_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137e74,(char *)&DAT_00137e5c,(char *)&DAT_007bc5c5,
                         0x1bc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137e90,(char *)&DAT_00137e5c,(char *)&DAT_007bc5c5,
                         0x1bf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&uStack_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137e74,(char *)&DAT_00137e5c,(char *)&DAT_007bc5c5,
                         0x1c2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_1c,param_1,0xffffffff);
  uVar2 = fn_0014a110(DAT_00898898,local_24,local_10[0] & 0xff,uStack_20,auStack_1c);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00137c54(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137cf0,(char *)&DAT_00137cd8,(char *)&DAT_007bce7a,
                         0xada);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015c0fc(DAT_00898898,local_10 & 0xff);
  uVar3 = fn_002febd8();
  fn_00158128(param_1,uVar2,uVar3);
  return 1;
}



undefined4 fn_00137b9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137c38,(char *)&DAT_00137c20,(char *)&DAT_007bce4b,
                         0xac2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015c0a4(DAT_00898898,local_10 & 0xff);
  uVar3 = fn_002febd8();
  fn_00158128(param_1,uVar2,uVar3);
  return 1;
}



undefined4 fn_00137b44(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined1 local_14 [4];
  uint local_10 [2];
  
  fn_0014d1dc(param_1,local_14,&local_18,local_10);
  uVar1 = fn_0014971c(DAT_00898898,local_10[0] & 0xff,local_18);
  fn_001580cc(param_1,uVar1);
  return 1;
}



undefined4 fn_00137a3c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  undefined1 local_18 [8];
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0014ce74,(char *)&DAT_0014ce5c,
                         (char *)&DAT_007bcf2b,0x866);
    fn_001581d0(param_1,uVar2);
  }
  else {
    fn_00173cb8(param_1,1);
    fn_0014ce94(param_1,local_18,&local_28);
  }
  uVar2 = fn_0016a5e4(DAT_00898898,local_1c & 0xff,&local_28);
  fn_001580cc(param_1,uVar2);
  uVar3 = local_28;
  if (local_24 < local_28) {
    do {
      uVar3 = uVar3 + 0xc;
    } while (uVar3 != local_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) / 0xc,0);
  return 1;
}



undefined4 fn_00137934(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137a08,(char *)&DAT_001379f0,(char *)&DAT_007bc7a2,0x3e4
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137a20,(char *)&DAT_001379f0,(char *)&DAT_007bc7a2,
                         0x3e6);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155914(DAT_00898898,local_c == 1,local_10,2);
  return 0;
}



undefined4 fn_0013782c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137900,(char *)&DAT_001378e8,(char *)&DAT_007bc773,0x3cc
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137918,(char *)&DAT_001378e8,(char *)&DAT_007bc773,
                         0x3ce);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155914(DAT_00898898,local_c == 1,local_10,0);
  return 0;
}



undefined4 fn_0013756c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001376e8,(char *)&DAT_001376d0,(char *)&DAT_007bcddf,
                         0xa70);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001376e8,(char *)&DAT_001376d0,(char *)&DAT_007bcddf,
                         0xa73);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137708,(char *)&DAT_001376d0,(char *)&DAT_007bcddf,0xa76
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137708,(char *)&DAT_001376d0,(char *)&DAT_007bcddf,0xa79
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00149a50(DAT_00898898,local_1c,uStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00137100(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157eb4(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001371d4,(char *)&DAT_001371bc,(char *)&DAT_007bc78b,0x3d8)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001371ec,(char *)&DAT_001371bc,(char *)&DAT_007bc78b,
                         0x3da);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155914(DAT_00898898,local_c == 1,local_10,1);
  return 0;
}



undefined4 fn_00136f94(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  uint local_14;
  int local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001370b8,(char *)&DAT_001370a0,(char *)&DAT_007bc473,
                         0xae);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001370d0,(char *)&DAT_001370a0,(char *)&DAT_007bc473,0xb1
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001370e8,(char *)&DAT_001370a0,(char *)&DAT_007bc473,0xb4);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00155884(DAT_00898898,local_14 & 0xff,local_18);
  return 0;
}


