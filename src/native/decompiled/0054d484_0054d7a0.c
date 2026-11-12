#include "0054d484_0054d7a0.h"



undefined4 fn_0054d7a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = fn_00550464(param_1,param_2,1,8,7,1);
  uVar3 = fn_006e1ee8(param_3);
  uVar5 = *(undefined4 *)(param_3 + 0x54);
  uVar7 = *(undefined4 *)(param_3 + 0x4c);
  uVar8 = *(undefined4 *)(param_3 + 0x50);
  *(undefined4 *)(param_4 + 0x74) = *(undefined4 *)(param_3 + 0x48);
  uVar6 = *(undefined4 *)(param_3 + 0x58);
  *(undefined4 *)(param_4 + 0x78) = uVar7;
  uVar7 = *(undefined4 *)(param_3 + 0x5c);
  *(undefined4 *)(param_4 + 0x7c) = uVar8;
  uVar8 = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_4 + 0x80) = uVar5;
  uVar5 = *(undefined4 *)(param_3 + 100);
  *(undefined4 *)(param_4 + 0x84) = uVar6;
  uVar6 = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)(param_4 + 0x88) = uVar7;
  uVar7 = *(undefined4 *)(param_3 + 0x6c);
  *(undefined4 *)(param_4 + 0x8c) = uVar8;
  uVar8 = *(undefined4 *)(param_3 + 0x70);
  uVar9 = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_4 + 0x90) = uVar5;
  *(undefined4 *)(param_4 + 0x94) = uVar6;
  *(undefined4 *)(param_4 + 0x98) = uVar7;
  *(undefined4 *)(param_4 + 0x9c) = uVar8;
  *(undefined4 *)(param_4 + 0xa0) = uVar9;
  *(undefined1 *)(param_4 + 0xba) = 0;
  fn_0054e2f0(param_1,0);
  uVar2 = fn_0054df04(param_1,uVar2,uVar3);
  uVar2 = fn_0054e7a0(param_1,uVar2,uVar3);
  uVar2 = fn_0054ec64(param_1,uVar2,param_4,param_3,uVar3,*(undefined4 *)(param_3 + 0xbc));
  uVar3 = *(undefined4 *)(param_4 + 0x78);
  uVar5 = *(undefined4 *)(param_4 + 0x7c);
  iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
  *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_4 + 0x74);
  uVar6 = *(undefined4 *)(param_4 + 0x80);
  *(undefined4 *)(iVar4 + 0x1fc) = uVar3;
  uVar3 = *(undefined4 *)(param_4 + 0x84);
  *(undefined4 *)(iVar4 + 0x200) = uVar5;
  uVar5 = *(undefined4 *)(param_4 + 0x88);
  *(undefined4 *)(iVar4 + 0x204) = uVar6;
  uVar6 = *(undefined4 *)(param_4 + 0x8c);
  *(undefined4 *)(iVar4 + 0x208) = uVar3;
  uVar8 = *(undefined4 *)(param_4 + 0x90);
  *(undefined4 *)(iVar4 + 0x20c) = uVar5;
  uVar3 = *(undefined4 *)(param_4 + 0x94);
  *(undefined4 *)(iVar4 + 0x210) = uVar6;
  uVar7 = *(undefined4 *)(param_4 + 0x98);
  *(undefined4 *)(iVar4 + 0x214) = uVar8;
  uVar5 = *(undefined4 *)(param_4 + 0x9c);
  uVar6 = *(undefined4 *)(param_4 + 0xa0);
  *(undefined4 *)(iVar4 + 0x218) = uVar3;
  *(undefined4 *)(iVar4 + 0x21c) = uVar7;
  *(undefined4 *)(iVar4 + 0x220) = uVar5;
  *(undefined4 *)(iVar4 + 0x224) = uVar6;
  uVar6 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x5fc) = uVar6;
  *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x03';
  fn_006e1f68(param_3);
  iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
  uVar3 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x600) = uVar3;
  cVar1 = *(char *)(param_1 + 0x33);
  uVar3 = *(undefined4 *)(param_3 + 0x3c);
  uVar5 = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(iVar4 + 0x400) = uVar6;
  *(undefined4 *)(iVar4 + 0x404) = uVar7;
  *(undefined4 *)(iVar4 + 0x3f8) = uVar3;
  *(undefined4 *)(iVar4 + 0x3fc) = uVar5;
  *(char *)(param_1 + 0x33) = cVar1 + '\x01';
  fn_0054e354(param_1,param_3 + 0xa8,*(undefined1 *)(param_3 + 0x46));
  fn_00560974(param_1);
  return uVar2;
}



undefined4 fn_0054d484(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = fn_00550464(param_1,param_2,1,0xe,7,1);
  uVar6 = *(undefined4 *)(param_3 + 0x48);
  uVar10 = *(undefined4 *)(param_3 + 0x4c);
  uVar9 = *(undefined4 *)(param_3 + 0x50);
  uVar8 = *(undefined4 *)(param_3 + 0x54);
  uVar7 = *(undefined4 *)(param_3 + 0x58);
  *(undefined1 *)(param_4 + 0xba) = 0;
  uVar5 = *(undefined4 *)(param_3 + 0x5c);
  *(undefined4 *)(param_4 + 0x74) = uVar6;
  uVar6 = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_4 + 0x78) = uVar10;
  uVar10 = *(undefined4 *)(param_3 + 100);
  *(undefined4 *)(param_4 + 0x7c) = uVar9;
  uVar9 = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)(param_4 + 0x80) = uVar8;
  uVar8 = *(undefined4 *)(param_3 + 0x6c);
  *(undefined4 *)(param_4 + 0x84) = uVar7;
  uVar7 = *(undefined4 *)(param_3 + 0x70);
  uVar11 = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_4 + 0x90) = uVar10;
  *(undefined4 *)(param_4 + 0x94) = uVar9;
  *(undefined4 *)(param_4 + 0x98) = uVar8;
  *(undefined4 *)(param_4 + 0x9c) = uVar7;
  *(undefined4 *)(param_4 + 0xa0) = uVar11;
  *(undefined4 *)(param_4 + 0x88) = uVar5;
  *(undefined4 *)(param_4 + 0x8c) = uVar6;
  fn_006e1f68(param_3);
  local_30 = uVar5;
  uStack_2c = uVar6;
  if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
    uVar9 = *(undefined4 *)(param_4 + 0x78);
    iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
    uVar5 = *(undefined4 *)(param_4 + 0x80);
    uVar6 = *(undefined4 *)(param_4 + 0x84);
    uVar7 = *(undefined4 *)(param_4 + 0x88);
    uVar8 = *(undefined4 *)(param_4 + 0x7c);
    uVar10 = *(undefined4 *)(param_4 + 0x8c);
    *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_4 + 0x74);
    uVar11 = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(iVar4 + 0x1fc) = uVar9;
    uVar9 = *(undefined4 *)(param_4 + 0x94);
    *(undefined4 *)(iVar4 + 0x200) = uVar8;
    uVar8 = *(undefined4 *)(param_4 + 0x98);
    *(undefined4 *)(iVar4 + 0x204) = uVar5;
    uVar5 = *(undefined4 *)(param_4 + 0x9c);
    uVar12 = *(undefined4 *)(param_4 + 0xa0);
    *(undefined4 *)(iVar4 + 0x218) = uVar9;
    *(undefined4 *)(iVar4 + 0x21c) = uVar8;
    *(undefined4 *)(iVar4 + 0x220) = uVar5;
    *(undefined4 *)(iVar4 + 0x224) = uVar12;
    *(undefined4 *)(iVar4 + 0x208) = uVar6;
    *(undefined4 *)(iVar4 + 0x20c) = uVar7;
    *(undefined4 *)(iVar4 + 0x210) = uVar10;
    *(undefined4 *)(iVar4 + 0x214) = uVar11;
    uVar5 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x5fc) = uVar5;
    *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x03';
    fn_0054e354(param_1,0,*(undefined1 *)(param_3 + 0x46));
  }
  else {
    uVar7 = *(undefined4 *)(param_3 + 0x40);
    iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
    *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(iVar4 + 0x1fc) = uVar7;
    *(undefined4 *)(iVar4 + 0x200) = uVar5;
    *(undefined4 *)(iVar4 + 0x204) = uVar6;
    bVar3 = *(char *)(param_1 + 0x31) + 1;
    *(byte *)(param_1 + 0x31) = bVar3;
    iVar4 = param_1 + (uint)bVar3 * 0x10;
    *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_4 + 0x74);
    *(undefined4 *)(iVar4 + 0x1fc) = *(undefined4 *)(param_4 + 0x78);
    *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(param_4 + 0x7c);
    *(undefined4 *)(iVar4 + 0x204) = *(undefined4 *)(param_4 + 0x80);
    *(undefined4 *)(iVar4 + 0x208) = *(undefined4 *)(param_4 + 0x84);
    *(undefined4 *)(iVar4 + 0x20c) = *(undefined4 *)(param_4 + 0x88);
    *(undefined4 *)(iVar4 + 0x210) = *(undefined4 *)(param_4 + 0x8c);
    *(undefined4 *)(iVar4 + 0x214) = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(iVar4 + 0x218) = *(undefined4 *)(param_4 + 0x94);
    *(undefined4 *)(iVar4 + 0x21c) = *(undefined4 *)(param_4 + 0x98);
    *(undefined4 *)(iVar4 + 0x220) = *(undefined4 *)(param_4 + 0x9c);
    *(undefined4 *)(iVar4 + 0x224) = *(undefined4 *)(param_4 + 0xa0);
    uVar5 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x5fc) = uVar5;
    *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x03';
    fn_0054e354(param_1,param_3 + 0xb4,*(undefined1 *)(param_3 + 0x46));
  }
  cVar1 = *(char *)(param_3 + 0xcc);
  if (cVar1 == '\0') {
    uVar2 = fn_005504d4(param_1,uVar2,param_3,param_4,&local_30);
    return uVar2;
  }
  if (cVar1 == '\x01') {
    uVar2 = fn_005508b4(param_1,uVar2,param_3,param_4,&local_30);
    return uVar2;
  }
  if (cVar1 != '\x02') {
    return uVar2;
  }
  local_24 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(param_3 + 0xae),(byte)(in_fpscr >> 0x16) & 3);
  local_20 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xb0),(byte)(in_fpscr >> 0x16) & 3);
  local_1c = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xb2),(byte)(in_fpscr >> 0x16) & 3);
  local_28 = *(float *)(param_3 + 0x3c) - local_24;
  cVar1 = *(char *)(param_3 + 0xcd);
  if (cVar1 == '\x01') {
    uVar2 = fn_00550db8(param_1,uVar2,param_3,param_4,&local_30,&local_28);
  }
  else {
    if (cVar1 != '\x02' && cVar1 != '\x04') {
      return uVar2;
    }
    uVar2 = fn_00550f6c();
  }
  return uVar2;
}


