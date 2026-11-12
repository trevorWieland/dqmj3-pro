#include "0054e5b8_0054f1dcb.h"



undefined4 fn_0054f1dc(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  if (param_3 != 0) {
    param_2 = fn_00560b7c(param_2);
  }
  return param_2;
}



undefined4
fn_0054ec64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  
  if (((*(byte *)(param_5 + 0x7c) & 8) == 0) || (*(char *)(param_5 + 0x66) != '\0')) {
    fn_006e1fd8(param_1,param_3,param_4,param_5,param_6);
  }
  bVar1 = *(byte *)(param_5 + 100);
  uVar3 = (uint)bVar1;
  uVar2 = *(undefined1 *)(param_5 + 0x65);
  if (*(uint *)(param_1 + 0x618) != uVar3) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      param_2 = fn_0054f158(param_1);
    }
    *(uint *)(param_1 + 0x618) = uVar3;
  }
  if (uVar3 != 0) {
    if ((1 < uVar3) && (*(char *)(param_1 + 0x30) != '\0')) {
      param_2 = fn_0054f158(param_1);
    }
    uVar4 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x604) = uVar4;
    fn_0017821c(param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10 + 0x3f8,param_5 + 4,uVar3 << 4);
    *(byte *)(param_1 + 0x33) = *(char *)(param_1 + 0x33) + bVar1;
  }
  *(undefined1 *)(param_1 + 0x5fa) = uVar2;
  return param_2;
}



int fn_0054e9b4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint local_78 [22];
  
  uVar1 = *(ushort *)(param_3 + 0x74);
  pbVar5 = (byte *)(*(int *)(param_3 + 0x78) +
                   (uVar1 >> 6 & 8) +
                   (uVar1 & 3) * 0x20 + ((uVar1 & 0xf) >> 2) * 0x14 + (uVar1 >> 1 & 0x18));
  bVar2 = *pbVar5;
  bVar6 = bVar2 == 0;
  if (bVar6) {
    bVar2 = pbVar5[3];
  }
  if (bVar6 && bVar2 == 0) {
    if (*(char *)(param_1 + 0x62a) != '\0') {
      *(undefined1 *)(param_1 + 0x62a) = 0;
      fn_0017821c(param_2,&DAT_007d8774,0x10);
      param_2 = param_2 + 0x10;
    }
    local_78[0] = 0xe40100;
    local_78[1] = 0xf0100;
    local_78[2] = 0x1010000;
    local_78[3] = 0xf0101;
    fn_0017821c(param_2,local_78,0x10);
    return param_2 + 0x10;
  }
  if (*(char *)(param_1 + 0x62a) == '\0') {
    *(undefined1 *)(param_1 + 0x62a) = 1;
    fn_0017821c(param_2,&DAT_007d8794,0x10);
    param_2 = param_2 + 0x10;
  }
  if (*pbVar5 == 0) {
    if (pbVar5[3] != 0) {
      fn_0017821c(local_78,&DAT_007d8804,0x44);
      local_78[0x12] = 0xe40000;
      local_78[0x13] = 0xf0100;
      local_78[0x14] = 0;
      local_78[0x15] = 0xf0102;
      local_78[0x14] = local_78[pbVar5[3]];
      fn_0017821c(param_2,local_78 + 0x12,0x10);
      param_2 = param_2 + 0x10;
    }
  }
  else {
    local_78[10] = 0;
    local_78[0xb] = 0;
    local_78[0xc] = 1;
    local_78[0xd] = 2;
    local_78[0xe] = 3;
    local_78[0xf] = 4;
    local_78[0] = 0;
    local_78[1] = 1;
    local_78[2] = 4;
    local_78[3] = 5;
    local_78[4] = 6;
    local_78[5] = 7;
    local_78[6] = 8;
    local_78[7] = 9;
    local_78[8] = 2;
    local_78[9] = 3;
    uVar1 = *(ushort *)(param_3 + 0x74);
    uVar3 = (uint)uVar1;
    if ((uVar3 & 0xfff) >> 10 == 2) {
      pbVar4 = (byte *)((uVar1 >> 6 & 8) +
                        (uVar3 & 3) * 0x20 + ((uVar3 & 0xf) >> 2) * 0x14 + (uVar1 >> 1 & 0x18) + 4 +
                       *(int *)(param_3 + 0x78));
      local_78[0x10] = 0xe40100;
      local_78[0x11] = 0xf0100;
      local_78[0x12] = 0;
      local_78[0x13] = 0xf0101;
      local_78[0x12] =
           local_78[*pbVar5 + 10] | local_78[*pbVar4 + 10] << 8 |
           local_78[pbVar5[1]] << 0x10 | local_78[pbVar5[2]] << 0x14 | local_78[pbVar4[1]] << 0x18 |
           local_78[pbVar4[2]] << 0x1c;
      fn_0017821c(param_2,local_78 + 0x10,0x10);
      param_2 = param_2 + 0x10;
    }
    else {
      local_78[0x10] = 0xe40100;
      local_78[0x11] = 0xf0100;
      local_78[0x12] = 0;
      local_78[0x13] = 0xf0101;
      local_78[0x12] =
           local_78[*pbVar5 + 10] | local_78[*pbVar5 + 10] << 8 |
           local_78[pbVar5[1]] << 0x10 | local_78[pbVar5[2]] << 0x14 | local_78[pbVar5[1]] << 0x18 |
           local_78[pbVar5[2]] << 0x1c;
      fn_0017821c(param_2,local_78 + 0x10,0x10);
      param_2 = param_2 + 0x10;
    }
  }
  return param_2;
}


