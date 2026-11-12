#include "002867cc_00287f1c.h"



undefined4 fn_00287f1c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287fb4,(char *)&DAT_00287fa0,(char *)&DAT_007c1f60,0x1ff);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  puVar3 = (undefined4 *)fn_006ad62c(DAT_00898898,local_18);
  local_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  fn_00148a34(param_1,&local_14);
  return 1;
}



undefined4 fn_002879b8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffc,&local_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287ae8,(char *)&DAT_00287ad4,
                         (char *)&DAT_007c2d46,0xbca);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287b04,(char *)&DAT_00287ad4,
                         (char *)&DAT_007c2d46,0xbcd);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&uStack_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287ae8,(char *)&DAT_00287ad4,
                         (char *)&DAT_007c2d46,0xbd0);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_18,param_1,0xffffffff);
  uVar2 = fn_001f49d4(DAT_00898898,local_24,uStack_20,uStack_1c,auStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00287804(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [4];
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002878e0,(char *)&DAT_002878cc,
                         (char *)&DAT_007c2eb8,0xcac);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002878e0,(char *)&DAT_002878cc,
                         (char *)&DAT_007c2eb8,0xcaf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_006ad4e8(DAT_00898898,(int)local_10[0],(int)local_c[0]);
  fn_00158004(param_1,uVar2);
  return 1;
}



undefined4 fn_002875f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287750,(char *)&DAT_0028773c,
                         (char *)&DAT_007c228b,0x2c9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287768,(char *)&DAT_0028773c,(char *)&DAT_007c228b
                         ,0x2cc);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287780,(char *)&DAT_0028773c,
                         (char *)&DAT_007c228b,0x2cf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,&uStack_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287780,(char *)&DAT_0028773c,
                         (char *)&DAT_007c228b,0x2d2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f455c(DAT_00898898,local_18,local_10,uStack_c);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00287450(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002875b4,(char *)&DAT_002875a0,
                         (char *)&DAT_007c2453,0x46a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002875d0,(char *)&DAT_002875a0,
                         (char *)&DAT_007c2453,0x46d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002875d0,(char *)&DAT_002875a0,
                         (char *)&DAT_007c2453,0x470);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002875d0,(char *)&DAT_002875a0,
                         (char *)&DAT_007c2453,0x473);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f453c(DAT_00898898,local_1c,uStack_18,uStack_14,local_10[0]);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_002872e4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffc,&local_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287414,(char *)&DAT_00287400,
                         (char *)&DAT_007c2d0d,0xba5);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287430,(char *)&DAT_00287400,
                         (char *)&DAT_007c2d0d,0xba8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&uStack_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287430,(char *)&DAT_00287400,
                         (char *)&DAT_007c2d0d,0xbab);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_18,param_1,0xffffffff);
  uVar2 = fn_001f44b8(DAT_00898898,local_24,uStack_20,uStack_1c,auStack_18);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_00287040(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined1 auStack_10 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00287150,(char *)&DAT_0028713c,
                         (char *)&DAT_007c2131,0x177);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffe,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028716c,(char *)&DAT_0028713c,(char *)&DAT_007c2131,
                         0x17a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,auStack_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028716c,(char *)&DAT_0028713c,(char *)&DAT_007c2131,
                         0x17b);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f43b0(DAT_00898898,local_18);
  return 0;
}



undefined4 fn_00286dac(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_001f41a0(DAT_00898898);
  uVar2 = fn_002febd8();
  fn_00158128(param_1,uVar1,uVar2);
  return 1;
}



undefined4 fn_00286d1c(undefined4 param_1)

{
  undefined1 local_18 [16];
  
  fn_006ad37c(DAT_00898898);
  fn_00148a34(param_1,local_18);
  return 1;
}



undefined4 fn_002869c8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffb,&local_24);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286b44,(char *)&DAT_00286b30,(char *)&DAT_007c2270,
                         0x2b3);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_18,param_1,0xfffffffc);
  iVar1 = fn_00157f00(param_1,0xfffffffd,local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286b60,(char *)&DAT_00286b30,(char *)&DAT_007c2270,
                         0x2b9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286b74,(char *)&DAT_00286b30,(char *)&DAT_007c2270,
                         700);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286b74,(char *)&DAT_00286b30,(char *)&DAT_007c2270,
                         0x2bf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f40f4(DAT_00898898,local_24,auStack_18,local_1c,local_c);
  fn_001580cc(param_1,uVar2);
  return 1;
}



undefined4 fn_002867cc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10 [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffb,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286974,(char *)&DAT_00286960,(char *)&DAT_007c22bb,
                         0x2ec);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffc,local_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286990,(char *)&DAT_00286960,(char *)&DAT_007c22bb,
                         0x2ef);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xfffffffd,local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286990,(char *)&DAT_00286960,(char *)&DAT_007c22bb,
                         0x2f2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002869ac,(char *)&DAT_00286960,(char *)&DAT_007c22bb,
                         0x2f5);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_20);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002869ac,(char *)&DAT_00286960,(char *)&DAT_007c22bb,
                         0x2f8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_001f406c(DAT_00898898,local_10[0],local_1c,local_20);
  fn_001580cc(param_1,uVar2);
  return 1;
}


