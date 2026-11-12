#include "0053661c_005586a0b.h"



void fn_005586a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 9000) = param_2;
  iVar1 = fn_00141104();
  iVar2 = fn_00140e98(iVar1,0xb);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x28;
  *(int *)(iVar2 + 0x10) = param_1 + 0x118;
  *(int *)(iVar2 + 0x28) = param_1 + 0x2314;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(iVar2 + 0x18) = *param_3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar3;
  *(undefined4 *)(iVar2 + 0x20) = uVar4;
  *(undefined4 *)(iVar2 + 0x24) = uVar5;
  fn_001411b8(iVar1,iVar2);
  return;
}



void fn_005504d4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xac),(byte)(in_fpscr >> 0x16) & 3);
  local_34 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xae),(byte)(in_fpscr >> 0x16) & 3);
  local_30 = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xb0),(byte)(in_fpscr >> 0x16) & 3);
  local_2c = VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0xb2),(byte)(in_fpscr >> 0x16) & 3);
  cVar1 = *(char *)(param_3 + 0xcd);
  if (cVar1 == '\x01') {
    param_2 = fn_0054f7f0(param_1,param_2,param_3,param_4,param_5,&local_38);
  }
  else if (cVar1 == '\x04') {
    param_2 = fn_0054fb1c(param_1,param_2,param_3,param_4,param_5,&local_38);
  }
  else if (cVar1 == '\b') {
    param_2 = fn_0054ff18(param_1,param_2,param_3,param_4,param_5,&local_38);
  }
  if (((*(byte *)(param_3 + 0xce) & 4) == 0) && (*(int *)(param_3 + 0xd4) != 0)) {
    uVar2 = fn_00550464(param_1,param_2,1,0,7,0);
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      fn_0054e354(param_1,param_3 + 0xb4,*(undefined1 *)(param_3 + 0x46));
    }
    uVar3 = *(undefined4 *)(param_3 + 0xd4);
    uVar2 = fn_0054df04(param_1,uVar2,uVar3);
    uVar2 = fn_0054e7a0(param_1,uVar2,uVar3);
    uVar2 = fn_0054ec64(param_1,uVar2,param_4,param_3,uVar3,*(undefined4 *)(param_3 + 200));
    fn_005502e8(param_1,uVar2,param_3,param_4,param_5,&local_38);
  }
  return;
}


