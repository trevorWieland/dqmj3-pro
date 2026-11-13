#include "00134f64_00136cbc.h"



undefined4 fn_00136cbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00136d58,(char *)&DAT_00136d40,(char *)&DAT_007bce34,
                         0xab6);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015c010(DAT_00898898,local_10 & 0xff);
  uVar3 = fn_002febd8();
  fn_00158128(param_1,uVar2,uVar3);
  return 1;
}



undefined4 fn_00136ba8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  char local_14 [8];
  
  iVar2 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar2 < 0) {
    uVar3 = fn_00148918((char *)&DAT_00136c90,(char *)&DAT_00136c78,(char *)&DAT_007bc876,
                         0x47d);
    uVar3 = fn_001581d0(param_1,uVar3);
    return uVar3;
  }
  iVar2 = fn_00157f58(param_1,0xffffffff,local_14);
  if (iVar2 < 0) {
    uVar3 = fn_00148918((char *)&DAT_00136c90,(char *)&DAT_00136c78,(char *)&DAT_007bcefd,
                         0x44e);
    cVar1 = fn_001581d0(param_1,uVar3);
    iVar2 = (int)cVar1;
  }
  else {
    iVar2 = fn_001752ec(DAT_00898898,local_18 & 0xff,(int)local_14[0]);
  }
  fn_001580cc(param_1,iVar2);
  return 1;
}



undefined4 fn_0013665c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001366d0,(char *)&DAT_001366b8,(char *)&DAT_007bc451,0x97)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001499c8(DAT_00898898,local_10);
  return 0;
}



undefined4 fn_00136554(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  int local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013662c,(char *)&DAT_00136614,(char *)&DAT_007bc48a,0xbe
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00136644,(char *)&DAT_00136614,(char *)&DAT_007bc48a,0xc1);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00175284(DAT_00898898,local_10 & 0xff,local_c == 1);
  return 0;
}



undefined4 fn_00136208(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001362a4,(char *)&DAT_0013628c,(char *)&DAT_007bce64,
                         0xace);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015bf58(DAT_00898898,local_10 & 0xff);
  uVar3 = fn_002febd8();
  fn_00158128(param_1,uVar2,uVar3);
  return 1;
}



undefined4 fn_00135e0c(undefined4 param_1)

{
  fn_0015564c(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_00135af4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135c08,(char *)&DAT_00135bf0,(char *)&DAT_007bc4d8,0x16b
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135c08,(char *)&DAT_00135bf0,(char *)&DAT_007bc4d8,0x16e
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135c08,(char *)&DAT_00135bf0,(char *)&DAT_007bc4d8,0x171
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001555f0(DAT_00898898,local_10[0] & 0xff,local_18,uStack_14);
  return 0;
}



undefined4 fn_001359cc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [4];
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135aa8,(char *)&DAT_00135a90,(char *)&DAT_007bc61f,0x2c2
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,&uStack_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135aa8,(char *)&DAT_00135a90,(char *)&DAT_007bc61f,0x2c5
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00175044(DAT_00898898,(int)local_10[0],uStack_c);
  fn_00158128(param_1,uVar2,0xffffffff);
  return 1;
}



undefined4 fn_00135884(undefined4 param_1)

{
  fn_0015559c(DAT_00898898);
  fn_00158004(param_1,1);
  return 1;
}



undefined4 fn_00135770(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135850,(char *)&DAT_00135838,(char *)&DAT_007bcc5e,0x9ab)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013586c,(char *)&DAT_00135838,(char *)&DAT_007bcc5e,0x9ae);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00179a14(DAT_00898898,local_c & 0xff);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_0013565c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  uint local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0013573c,(char *)&DAT_00135724,(char *)&DAT_007bccb4,0x8dd)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00135754,(char *)&DAT_00135724,(char *)&DAT_007bccb4,0x8e0);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015adcc(DAT_00898898,local_c & 0xff,local_10);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00135348(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_001353e4,(char *)&DAT_001353cc,(char *)&DAT_007bce20,0xaaa)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_0015b374(DAT_00898898,local_10 & 0xff);
  uVar3 = fn_002febd8();
  fn_00158128(param_1,uVar2,uVar3);
  return 1;
}



void fn_00135110(undefined4 param_1)

{
  fn_0015cf54(DAT_00898898);
  fn_001638b0(param_1);
  return;
}



undefined4 fn_00134f64(undefined4 param_1)

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
  uVar2 = fn_001492a4(DAT_00898898,local_1c & 0xff,&local_28);
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


