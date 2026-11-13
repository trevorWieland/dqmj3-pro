#include "0027e9fc_00283050.h"



undefined4 fn_00283050(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined1 local_c [4];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffc,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002831a0,(char *)&DAT_0028318c,(char *)&DAT_007c2c0e,0xab6)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_18,param_1,0xfffffffd);
  iVar1 = fn_00157f00(param_1,0xfffffffe,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002831bc,(char *)&DAT_0028318c,(char *)&DAT_007c2c0e,0xabc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002831bc,(char *)&DAT_0028318c,(char *)&DAT_007c2c0e,0xabf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_006f7a84(DAT_008977e0);
  *(undefined4 *)(iVar1 + 0x264) = local_1c;
  fn_006f7a84(DAT_008977e0);
  fn_001e189c();
  fn_001f11d4(DAT_00898898,local_20,auStack_18);
  return 0;
}



undefined4 fn_00282f84(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [12];
  
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00283018,(char *)&DAT_00283004,(char *)&DAT_007c2af1,0x9f1
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_006acbd8(DAT_00898898,local_18);
  fn_00148a34(param_1,local_14);
  return 1;
}



undefined4 fn_00282a40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined1 local_c [4];
  
  fn_00148924(auStack_18,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00282ad8,(char *)&DAT_00282ac4,(char *)&DAT_007c2938,0x7f8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f2644(DAT_00898898,auStack_18);
  return 0;
}



undefined4 fn_00282614(undefined4 param_1)

{
  undefined4 local_10;
  undefined1 local_c [12];
  
  fn_001488c4(param_1,&local_10,local_c);
  fn_001f24a4(DAT_00898898,local_10);
  return 0;
}



undefined4 fn_00281de0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined1 local_c [4];
  
  fn_00148924(auStack_18,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00281e80,(char *)&DAT_00281e6c,(char *)&DAT_007c2102,0x160);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f23ac(DAT_00898898,auStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00281858(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined1 local_c [4];
  
  fn_00148924(auStack_18,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002818f0,(char *)&DAT_002818dc,(char *)&DAT_007c25f7,0x5b8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f21d4(DAT_00898898,auStack_18);
  return 0;
}



undefined4 fn_00281170(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028128c,(char *)&DAT_00281278,(char *)&DAT_007c2471,0x47d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002812a4,(char *)&DAT_00281278,(char *)&DAT_007c2471,0x480);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028128c,(char *)&DAT_00281278,(char *)&DAT_007c2471,0x483);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  VectorSignedToFloat(local_10[0],(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = fn_001f1d38(DAT_00898898,local_18,uStack_14);
  fn_001580cc(param_1,uVar2);
  return 1;
}



void fn_00281060(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028113c,(char *)&DAT_00281128,(char *)&DAT_007c2518,0x516);
    fn_001581d0(param_1,uVar2);
    return;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00281158,(char *)&DAT_00281128,(char *)&DAT_007c2518,0x519);
    fn_001581d0(param_1,uVar2);
    return;
  }
  fn_001f1c70(DAT_00898898,local_10);
  fn_001638b0(param_1);
  return;
}



void fn_002805b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00280630,(char *)&DAT_0028061c,(char *)&DAT_007c2a91,0x965);
    fn_001581d0(param_1,uVar2);
    return;
  }
  fn_001f1a40(DAT_00898898,local_10);
  fn_001638b0(param_1);
  return;
}



undefined4 fn_00280340(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  undefined1 local_10 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00280428,(char *)&DAT_00280414,(char *)&DAT_007c225e,0x2a3);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_1c,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00280444,(char *)&DAT_00280414,(char *)&DAT_007c225e,0x2a9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f1998(DAT_00898898,local_20,auStack_1c);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0028007c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  int local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002801a4,(char *)&DAT_00280190,(char *)&DAT_007c23ba,0x403);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002801c0,(char *)&DAT_00280190,(char *)&DAT_007c23ba,0x406);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002801d8,(char *)&DAT_00280190,(char *)&DAT_007c23ba,0x409);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f18bc(DAT_00898898,local_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0027ef3c(undefined4 param_1)

{
  undefined1 auStack_10 [16];
  
  fn_00148924(auStack_10,param_1,0xffffffff);
  fn_001f15a0(DAT_00898898,auStack_10);
  return 0;
}



undefined4 fn_0027ed08(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar1 = (undefined4 *)fn_006ac078(DAT_00898898);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fn_00148a34(param_1,&local_18);
  return 1;
}



undefined4 fn_0027e9fc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  undefined1 local_10 [8];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffd,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ead8,(char *)&DAT_0027eac4,(char *)&DAT_007c2bfd,0xaa1);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_1c,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027eaf4,(char *)&DAT_0027eac4,(char *)&DAT_007c2bfd,0xaa7);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f11d4(DAT_00898898,local_20,auStack_1c);
  return 0;
}


