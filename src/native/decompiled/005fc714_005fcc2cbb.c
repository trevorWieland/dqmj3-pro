#include "005fc714_005fcc2cbb.h"



undefined4 fn_005fcc2c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_28;
  
  sVar1 = *(short *)(*param_1 + 0x1c);
  sVar2 = *(short *)(param_1[1] + 0x1c);
  local_28 = param_4;
  iVar3 = fn_0026cda4();
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      fn_0026cdec(iVar7,&local_28,2);
      if ((short)local_28 == sVar1) {
        iVar5 = 1;
LAB_005fcca0:
        iVar6 = (int)(char)iVar5;
        bVar8 = iVar6 == 0;
        if (bVar8) {
          iVar6 = (int)(short)local_28;
        }
        if (bVar8 && iVar6 == sVar2) {
LAB_005fccc8:
          uVar4 = fn_0026cdd0(iVar7);
          return uVar4;
        }
        iVar5 = (iVar5 << 0x10) >> 0x18;
        bVar8 = iVar5 == 0;
        if (bVar8) {
          iVar5 = (int)((unsigned int)(local_28) >> 16) & 0xffff;
        }
        if (bVar8 && iVar5 == sVar2) goto LAB_005fccc8;
      }
      else if (((unsigned int)(local_28) >> 16) & 0xffff == sVar1) {
        iVar5 = 0x100;
        goto LAB_005fcca0;
      }
      iVar7 = (int)(short)((short)iVar7 + 1);
    } while (iVar7 < iVar3);
  }
  return 0;
}



int fn_005fc9c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined4 *)fn_0036c968();
  *puVar1 = &DAT_0084ec68;
  iVar2 = fn_00113c58(puVar1 + 0x16e);
  iVar2 = fn_00101a1c(iVar2 + 0x78,&LAB_00256038,8,10);
  iVar2 = fn_00255cd0(iVar2 + 0x50);
  iVar2 = fn_00101a1c(iVar2 + 0x1c,&LAB_00256038,8,10);
  iVar2 = fn_00255cd0(iVar2 + 0x50);
  *(undefined4 *)(iVar2 + -0x11c) = 0;
  puVar3 = (undefined1 *)(iVar2 + -0x134);
  *(undefined4 *)(iVar2 + -0x118) = 0;
  *(undefined4 *)(iVar2 + -0x114) = 0;
  *(undefined4 *)(iVar2 + -0x110) = 0;
  *(undefined4 *)(iVar2 + -0x10c) = 0;
  *(undefined4 *)(iVar2 + -0x108) = 0;
  *(undefined4 *)(iVar2 + -0x104) = 0;
  *(undefined4 *)(iVar2 + -0x100) = 0;
  *(undefined4 *)(iVar2 + -0xfc) = 0;
  *(undefined4 *)(iVar2 + -0xf8) = 0;
  *(undefined4 *)(iVar2 + -0xf4) = 0;
  *(undefined4 *)(iVar2 + -0xf0) = 0;
  *(undefined4 *)(iVar2 + -0xec) = 0;
  *(undefined4 *)(iVar2 + -0xe8) = 0;
  *(undefined4 *)(iVar2 + -0xe4) = 0;
  *(undefined4 *)(iVar2 + -0xe0) = 0;
  *(undefined4 *)(iVar2 + -0xdc) = 0;
  *(undefined4 *)(iVar2 + -0xd8) = 0;
  *(undefined4 *)(iVar2 + -0xd4) = 0;
  *(undefined4 *)(iVar2 + -0xd0) = 0;
  *(undefined4 *)(iVar2 + -0xcc) = 0;
  *(undefined4 *)(iVar2 + -200) = 0;
  *(undefined4 *)(iVar2 + -0xc4) = 0;
  *(undefined4 *)(iVar2 + -0xc0) = 0;
  *puVar3 = 6;
  fn_0037cbe0(puVar3,2);
  fn_0037cad0(puVar3,0);
  fn_0037cb60(puVar3,2);
  fn_0037cb50(puVar3,0);
  fn_0037cac0(puVar3,1);
  fn_0037cb0c(puVar3,2);
  fn_0037cbf0(puVar3,0);
  fn_0037cb40(puVar3,0);
  fn_0037cbbc(puVar3,0);
  fn_0037cae0(puVar3,0);
  fn_0037cb1c(puVar3,0);
  *(undefined4 *)(iVar2 + -0x194) = 0;
  *(undefined4 *)(iVar2 + -400) = 0;
  *(undefined4 *)(iVar2 + -0x18c) = 0;
  *(undefined4 *)(iVar2 + -0x188) = 0;
  *(undefined4 *)(iVar2 + -0x184) = 0;
  *(undefined4 *)(iVar2 + -0x180) = 0;
  *(undefined4 *)(iVar2 + -0x17c) = 0;
  *(undefined4 *)(iVar2 + -0x178) = 0;
  *(undefined4 *)(iVar2 + -0x174) = 0;
  *(undefined4 *)(iVar2 + -0x170) = 0;
  *(undefined4 *)(iVar2 + -0x16c) = 0;
  *(undefined4 *)(iVar2 + -0x168) = 0;
  *(undefined4 *)(iVar2 + -0x164) = 0;
  *(undefined4 *)(iVar2 + -0x160) = 0;
  *(undefined4 *)(iVar2 + -0x15c) = 0;
  *(undefined4 *)(iVar2 + -0x158) = 0;
  *(undefined4 *)(iVar2 + -0x154) = 0;
  *(undefined4 *)(iVar2 + -0x150) = 0;
  *(undefined4 *)(iVar2 + -0x14c) = 0;
  *(undefined4 *)(iVar2 + -0x148) = 0;
  *(undefined4 *)(iVar2 + -0x144) = 0;
  *(undefined4 *)(iVar2 + -0x140) = 0;
  *(undefined4 *)(iVar2 + -0x13c) = 0;
  *(undefined4 *)(iVar2 + -0x138) = 0;
  iVar2 = fn_00124be8(iVar2 + 0x24);
  *(undefined2 *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x12) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  iVar2 = fn_00101a1c(iVar2 + 0x30,&LAB_0020c1dc,0x20,0x1e);
  *(undefined4 *)(iVar2 + -0x38) = 0;
  fn_0014f510(iVar2 + -0x30,DAT_008b64f8);
  *(undefined4 *)(iVar2 + -0x28) = 0;
  *(undefined1 *)(iVar2 + -0x24) = 0;
  *(undefined1 *)(iVar2 + -0x23) = 0;
  *(undefined1 *)(iVar2 + 0x3c0) = 0;
  *(undefined1 *)(iVar2 + 0x3c1) = 0;
  *(undefined1 *)(iVar2 + 0x3c2) = 0;
  *(undefined1 *)(iVar2 + 0x3c3) = 0;
  *(undefined1 *)(iVar2 + 0x3c4) = 0;
  return iVar2 + -0x740;
}


