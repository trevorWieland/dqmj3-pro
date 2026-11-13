#include "00728918_0072923c.h"



void fn_0072923c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_008e3104;
  puVar2 = (undefined1 *)(*(int *)(DAT_008e3104 + 0x18) + *(int *)(DAT_008e3104 + 0x20) * 0x1c);
  *puVar2 = 4;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)(puVar2 + 8) = param_1;
  *(undefined4 *)(puVar2 + 0xc) = param_3;
  *(undefined2 *)(puVar2 + 0x10) = param_4;
  *(undefined2 *)(puVar2 + 0x12) = param_5;
  *(undefined2 *)(puVar2 + 0x14) = param_6;
  *(undefined2 *)(puVar2 + 0x16) = param_7;
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



void fn_0072917c(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_008e3104;
  puVar2 = (undefined1 *)(*(int *)(DAT_008e3104 + 0x18) + *(int *)(DAT_008e3104 + 0x20) * 0x1c);
  *puVar2 = 3;
  *(undefined4 *)(puVar2 + 4) = param_1;
  *(undefined4 *)(puVar2 + 8) = param_2;
  *(undefined2 *)(puVar2 + 0x10) = param_3;
  *(short *)(puVar2 + 0xc) = (short)*(undefined4 *)(puVar2 + 0x10);
  *(undefined2 *)(puVar2 + 0x12) = param_4;
  *(short *)(puVar2 + 0xe) = (short)((uint)*(undefined4 *)(puVar2 + 0x10) >> 0x10);
  *(uint *)(puVar2 + 0x14) =
       *(uint *)(puVar2 + 0x14) & 0xfffff800 | (param_5 & 7) << 3 | param_5 & 7 | 0x900;
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



void fn_00729080(void)

{
  DAT_0089a7c8 = 10000000;
  DAT_0089a7cc = 0;
  return;
}



void fn_00729008(void)

{
  DAT_00898eb0 = 0x42300000;
  DAT_00898eb4 = 0x42300000;
  DAT_008d1284 = 0xc1200000;
  DAT_008d1288 = 0x41200000;
  DAT_008d128c = 0;
  DAT_008d1298 = 0;
  DAT_008d1290 = 0xc1b00000;
  DAT_008d1294 = 0x41b00000;
  DAT_00898eac = &DAT_008951d8;
  return;
}



void fn_00728ff0(void)

{
  DAT_00897158 = &DAT_00897134;
  return;
}



void fn_00728f78(void)

{
  DAT_008944dc = 0x42300000;
  DAT_008944e0 = 0x42300000;
  DAT_008cb3d8 = 0xc1200000;
  DAT_008cb3dc = 0x41200000;
  DAT_008cb3e0 = 0;
  DAT_008cb3ec = 0;
  DAT_008cb3e4 = 0xc1b00000;
  DAT_008cb3e8 = 0x41b00000;
  DAT_008944d8 = &DAT_00894678;
  return;
}



void fn_00728e28(void)

{
  DAT_00898dc8 = 0x42300000;
  DAT_00898dcc = 0x42300000;
  DAT_008d1214 = 0;
  DAT_008d120c = 0xc1200000;
  DAT_008d1210 = 0x41200000;
  DAT_008d1218 = 0xc1b00000;
  DAT_008d121c = 0x41b00000;
  DAT_008d1220 = 0;
  DAT_00898da4 = 0xff;
  DAT_00898da5 = 0xff;
  DAT_00898da6 = 0xff;
  DAT_00898da7 = 0xff;
  DAT_00898da8 = 0;
  DAT_00898da9 = 0;
  DAT_00898daa = 0;
  DAT_00898dab = 0xff;
  DAT_00898dac = 0xb4;
  DAT_00898dad = 0xb4;
  DAT_00898dae = 0xb4;
  DAT_00898daf = 0xff;
  DAT_00898db0 = 0xff;
  DAT_00898db1 = 0;
  DAT_00898db2 = 0;
  DAT_00898db3 = 0xff;
  DAT_00898db4 = 0;
  DAT_00898db5 = 0xff;
  DAT_00898db6 = 0;
  DAT_00898db7 = 0xff;
  DAT_00898db8 = 0;
  DAT_00898db9 = 0;
  DAT_00898dba = 0xff;
  DAT_00898dbb = 0xff;
  DAT_00898dbc = 0x52;
  DAT_00898dbd = 0xbc;
  DAT_00898dbe = 0xde;
  DAT_00898dbf = 0xff;
  DAT_00898dc0 = 0xff;
  DAT_00898dc1 = 0xff;
  DAT_00898dc2 = 0;
  DAT_00898dc3 = 0xff;
  DAT_00898dc4 = 0;
  DAT_00898dc5 = 0xff;
  DAT_00898dc6 = 0xff;
  DAT_00898dc7 = 0xff;
  DAT_00898da0 = &DAT_0089466c;
  return;
}



void fn_00728db0(void)

{
  DAT_00898ce4 = 0x42300000;
  DAT_00898ce8 = 0x42300000;
  DAT_008d1194 = 0xc1200000;
  DAT_008d1198 = 0x41200000;
  DAT_008d119c = 0;
  DAT_008d11a8 = 0;
  DAT_008d11a0 = 0xc1b00000;
  DAT_008d11a4 = 0x41b00000;
  DAT_00898ce0 = &DAT_00893b1c;
  return;
}



void fn_00728d38(void)

{
  DAT_008944e8 = 0x42300000;
  DAT_008944ec = 0x42300000;
  DAT_008cb3f0 = 0xc1200000;
  DAT_008cb3f4 = 0x41200000;
  DAT_008cb3f8 = 0;
  DAT_008cb404 = 0;
  DAT_008cb3fc = 0xc1b00000;
  DAT_008cb400 = 0x41b00000;
  DAT_008944e4 = &DAT_00894678;
  return;
}



void fn_00728cc0(void)

{
  DAT_00898ee0 = 0x42300000;
  DAT_00898ee4 = 0x42300000;
  DAT_008d12cc = 0xc1200000;
  DAT_008d12d0 = 0x41200000;
  DAT_008d12d4 = 0;
  DAT_008d12e0 = 0;
  DAT_008d12d8 = 0xc1b00000;
  DAT_008d12dc = 0x41b00000;
  DAT_00898edc = &DAT_008951fc;
  return;
}



void fn_00728b70(void)

{
  DAT_00898e74 = 0x42300000;
  DAT_00898e78 = 0x42300000;
  DAT_008d125c = 0;
  DAT_008d1254 = 0xc1200000;
  DAT_008d1258 = 0x41200000;
  DAT_008d1260 = 0xc1b00000;
  DAT_008d1264 = 0x41b00000;
  DAT_008d1268 = 0;
  DAT_00898e50 = 0xff;
  DAT_00898e51 = 0xff;
  DAT_00898e52 = 0xff;
  DAT_00898e53 = 0xff;
  DAT_00898e54 = 0;
  DAT_00898e55 = 0;
  DAT_00898e56 = 0;
  DAT_00898e57 = 0xff;
  DAT_00898e58 = 0xb4;
  DAT_00898e59 = 0xb4;
  DAT_00898e5a = 0xb4;
  DAT_00898e5b = 0xff;
  DAT_00898e5c = 0xff;
  DAT_00898e5d = 0;
  DAT_00898e5e = 0;
  DAT_00898e5f = 0xff;
  DAT_00898e60 = 0;
  DAT_00898e61 = 0xff;
  DAT_00898e62 = 0;
  DAT_00898e63 = 0xff;
  DAT_00898e64 = 0;
  DAT_00898e65 = 0;
  DAT_00898e66 = 0xff;
  DAT_00898e67 = 0xff;
  DAT_00898e68 = 0x52;
  DAT_00898e69 = 0xbc;
  DAT_00898e6a = 0xde;
  DAT_00898e6b = 0xff;
  DAT_00898e6c = 0xff;
  DAT_00898e6d = 0xff;
  DAT_00898e6e = 0;
  DAT_00898e6f = 0xff;
  DAT_00898e70 = 0;
  DAT_00898e71 = 0xff;
  DAT_00898e72 = 0xff;
  DAT_00898e73 = 0xff;
  DAT_00898e4c = &DAT_008953e0;
  return;
}



void fn_00728af8(void)

{
  DAT_00898ebc = 0x42300000;
  DAT_00898ec0 = 0x42300000;
  DAT_008d129c = 0xc1200000;
  DAT_008d12a0 = 0x41200000;
  DAT_008d12a4 = 0;
  DAT_008d12b0 = 0;
  DAT_008d12a8 = 0xc1b00000;
  DAT_008d12ac = 0x41b00000;
  DAT_00898eb8 = &DAT_00894678;
  return;
}



void fn_00728a80(void)

{
  DAT_00898cf0 = 0x42300000;
  DAT_00898cf4 = 0x42300000;
  DAT_008d11ac = 0xc1200000;
  DAT_008d11b0 = 0x41200000;
  DAT_008d11b4 = 0;
  DAT_008d11c0 = 0;
  DAT_008d11b8 = 0xc1b00000;
  DAT_008d11bc = 0x41b00000;
  DAT_00898cec = &DAT_00894678;
  return;
}



void fn_00728a68(void)

{
  DAT_00896fe8 = &DAT_00897134;
  return;
}



void fn_00728918(void)

{
  DAT_00898ea4 = 0x42300000;
  DAT_00898ea8 = 0x42300000;
  DAT_008d1274 = 0;
  DAT_008d126c = 0xc1200000;
  DAT_008d1270 = 0x41200000;
  DAT_008d1278 = 0xc1b00000;
  DAT_008d127c = 0x41b00000;
  DAT_008d1280 = 0;
  DAT_00898e80 = 0xff;
  DAT_00898e81 = 0xff;
  DAT_00898e82 = 0xff;
  DAT_00898e83 = 0xff;
  DAT_00898e84 = 0;
  DAT_00898e85 = 0;
  DAT_00898e86 = 0;
  DAT_00898e87 = 0xff;
  DAT_00898e88 = 0xb4;
  DAT_00898e89 = 0xb4;
  DAT_00898e8a = 0xb4;
  DAT_00898e8b = 0xff;
  DAT_00898e8c = 0xff;
  DAT_00898e8d = 0;
  DAT_00898e8e = 0;
  DAT_00898e8f = 0xff;
  DAT_00898e90 = 0;
  DAT_00898e91 = 0xff;
  DAT_00898e92 = 0;
  DAT_00898e93 = 0xff;
  DAT_00898e94 = 0;
  DAT_00898e95 = 0;
  DAT_00898e96 = 0xff;
  DAT_00898e97 = 0xff;
  DAT_00898e98 = 0x52;
  DAT_00898e99 = 0xbc;
  DAT_00898e9a = 0xde;
  DAT_00898e9b = 0xff;
  DAT_00898e9c = 0xff;
  DAT_00898e9d = 0xff;
  DAT_00898e9e = 0;
  DAT_00898e9f = 0xff;
  DAT_00898ea0 = 0;
  DAT_00898ea1 = 0xff;
  DAT_00898ea2 = 0xff;
  DAT_00898ea3 = 0xff;
  DAT_00898e7c = &DAT_008953e0;
  return;
}


