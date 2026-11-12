#include "002838e8_00286674.h"



undefined4 fn_00286674(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286790,(char *)&DAT_0028677c,(char *)&DAT_007c264d,
                         0x5e8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002867ac,(char *)&DAT_0028677c,(char *)&DAT_007c264d,
                         0x5eb);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002867ac,(char *)&DAT_0028677c,(char *)&DAT_007c264d,
                         0x5ee);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  local_14 = 0;
  local_10 = local_1c;
  uStack_c = uStack_18;
  fn_001f3f54(DAT_00898898,local_20,&local_14);
  return 0;
}



undefined4 fn_00286280(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_002dbcfc(DAT_00898898);
  uVar2 = fn_002febd8();
  fn_00158128(param_1,uVar1,uVar2);
  return 1;
}



undefined4 fn_002860fc(undefined4 param_1)

{
  fn_001580cc(param_1,*(undefined4 *)(DAT_00898898 + 0xf88));
  return 1;
}



undefined4 fn_00285cdc(undefined4 param_1)

{
  fn_001580cc(param_1,*(undefined4 *)(DAT_00898898 + 0xf84));
  return 1;
}



undefined4 fn_00285a34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00285b98,(char *)&DAT_00285b84,(char *)&DAT_007c243a,
                         0x457);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00285bb4,(char *)&DAT_00285b84,(char *)&DAT_007c243a,
                         0x45a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00285bb4,(char *)&DAT_00285b84,(char *)&DAT_007c243a,
                         0x45d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00285bb4,(char *)&DAT_00285b84,(char *)&DAT_007c243a,
                         0x460);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f3b4c(DAT_00898898,local_1c,uStack_18,uStack_14,local_10[0]);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00285500(undefined4 param_1)

{
  undefined1 local_18 [16];
  
  fn_006ad17c(DAT_00898898);
  fn_00148a34(param_1,local_18);
  return 1;
}



undefined4 fn_002854c8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_001f3a50(DAT_00898898);
  uVar2 = fn_002febd8();
  fn_00158128(param_1,uVar1,uVar2);
  return 1;
}



undefined4 fn_002853ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [12];
  
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00285480,(char *)&DAT_0028546c,(char *)&DAT_007c2b07,
                         0x9fb);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_006ad0ac(DAT_00898898,local_18);
  fn_00148a34(param_1,local_14);
  return 1;
}



undefined4 fn_00285148(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002852a0,(char *)&DAT_0028528c,(char *)&DAT_007c208c,
                         0x106);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002852a0,(char *)&DAT_0028528c,(char *)&DAT_007c208c,
                         0x109);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002852bc,(char *)&DAT_0028528c,(char *)&DAT_007c208c,
                         0x10c);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002852a0,(char *)&DAT_0028528c,(char *)&DAT_007c208c,
                         0x10f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f3840(DAT_00898898,local_1c,uStack_18,uStack_14,local_10[0]);
  return 0;
}



undefined4 fn_00284e40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284f5c,(char *)&DAT_00284f48,(char *)&DAT_007c2635,
                         0x5d9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284f78,(char *)&DAT_00284f48,(char *)&DAT_007c2635,0x5dc
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284f78,(char *)&DAT_00284f48,(char *)&DAT_007c2635,0x5df
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  local_14 = 0;
  local_10 = local_1c;
  uStack_c = uStack_18;
  fn_001f35f0(DAT_00898898,local_20,&local_14);
  return 0;
}



void fn_002841ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  int local_10 [2];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284318,(char *)&DAT_00284304,(char *)&DAT_007c252b,0x524
                        );
    fn_001581d0(param_1,uVar2);
    return;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284334,(char *)&DAT_00284304,(char *)&DAT_007c252b,0x527)
    ;
    fn_001581d0(param_1,uVar2);
    return;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028434c,(char *)&DAT_00284304,(char *)&DAT_007c252b,0x52a);
    fn_001581d0(param_1,uVar2);
    return;
  }
  fn_001f3348(DAT_00898898,local_18);
  fn_001638b0(param_1);
  return;
}



undefined4 fn_00284034(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined1 local_c [4];
  
  fn_00148924(auStack_18,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002840cc,(char *)&DAT_002840b8,(char *)&DAT_007c260b,0x5c4)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f32e4(DAT_00898898,auStack_18);
  return 0;
}



undefined4 fn_00283c48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00283cd8,(char *)&DAT_00283cc4,(char *)&DAT_007c2b5b,
                         0xa43);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_002dbbe0(DAT_00898898,local_10);
  uVar3 = fn_002febd8();
  fn_00158128(param_1,uVar2,uVar3);
  return 1;
}



undefined4 fn_002838e8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  uint local_14;
  undefined1 local_10 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002839c8,(char *)&DAT_002839b4,(char *)&DAT_007c2c24,
                         0xaca);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_20,param_1,0xfffffffe);
  iVar1 = fn_00157f00(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002839e0,(char *)&DAT_002839b4,(char *)&DAT_007c2c24,0xad0)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f3228(DAT_00898898,local_14 & 0xff,auStack_20);
  return 0;
}


