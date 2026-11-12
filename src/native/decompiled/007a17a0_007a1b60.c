#include "007a17a0_007a1b60.h"



undefined4 * fn_007a1b60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0xc;
      puVar2 = param_3;
      puVar3 = param_2;
      if ((uVar1 & 1) != 0) {
        puVar3 = param_2 + -3;
        puVar2 = param_3 + -3;
        uVar5 = param_2[-2];
        uVar6 = param_2[-1];
        *puVar2 = *puVar3;
        param_3[-2] = uVar5;
        param_3[-1] = uVar6;
      }
      for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar5 = puVar3[-2];
        uVar6 = puVar3[-1];
        puVar2[-3] = puVar3[-3];
        puVar2[-2] = uVar5;
        puVar2[-1] = uVar6;
        uVar5 = puVar3[-5];
        uVar6 = puVar3[-4];
        puVar2[-6] = puVar3[-6];
        puVar2[-5] = uVar5;
        puVar2[-4] = uVar6;
        puVar2 = puVar2 + -6;
        puVar3 = puVar3 + -6;
      }
      param_3 = param_3 + uVar1 * -3;
    }
  }
  else {
    while (param_1 != param_2) {
      uVar5 = param_2[-2];
      uVar6 = param_2[-1];
      param_3[-3] = param_2[-3];
      param_3[-2] = uVar5;
      param_3[-1] = uVar6;
      param_2 = param_2 + -3;
      param_3 = param_3 + -3;
    }
  }
  return param_3;
}



int fn_007a1a80(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_1 < param_2) {
    if (0 < (int)(param_2 - param_1)) {
      uVar1 = (int)(param_2 - param_1) / 0x34;
      iVar4 = param_3;
      if ((uVar1 & 1) != 0) {
        uVar5 = *(undefined4 *)(param_2 - 0x30);
        uVar6 = *(undefined4 *)(param_2 - 0x2c);
        uVar7 = *(undefined4 *)(param_2 - 0x28);
        uVar8 = *(undefined4 *)(param_2 - 0x24);
        uVar9 = *(undefined4 *)(param_2 - 0x20);
        uVar10 = *(undefined4 *)(param_2 - 0x1c);
        uVar11 = *(undefined4 *)(param_2 - 0x18);
        puVar3 = (undefined4 *)(param_2 - 0x14);
        *(undefined4 *)(param_3 + -0x34) = *(undefined4 *)(param_2 - 0x34);
        *(undefined4 *)(param_3 + -0x30) = uVar5;
        *(undefined4 *)(param_3 + -0x2c) = uVar6;
        *(undefined4 *)(param_3 + -0x28) = uVar7;
        *(undefined4 *)(param_3 + -0x24) = uVar8;
        *(undefined4 *)(param_3 + -0x20) = uVar9;
        *(undefined4 *)(param_3 + -0x1c) = uVar10;
        *(undefined4 *)(param_3 + -0x18) = uVar11;
        uVar5 = *(undefined4 *)(param_2 - 0x10);
        uVar6 = *(undefined4 *)(param_2 - 0xc);
        uVar7 = *(undefined4 *)(param_2 - 8);
        uVar8 = *(undefined4 *)(param_2 - 4);
        param_2 = param_2 - 0x34;
        *(undefined4 *)(param_3 + -0x14) = *puVar3;
        *(undefined4 *)(param_3 + -0x10) = uVar5;
        *(undefined4 *)(param_3 + -0xc) = uVar6;
        *(undefined4 *)(param_3 + -8) = uVar7;
        *(undefined4 *)(param_3 + -4) = uVar8;
        iVar4 = param_3 + -0x34;
      }
      for (iVar2 = (int)uVar1 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar5 = *(undefined4 *)(param_2 - 0x30);
        uVar6 = *(undefined4 *)(param_2 - 0x2c);
        uVar7 = *(undefined4 *)(param_2 - 0x28);
        uVar8 = *(undefined4 *)(param_2 - 0x24);
        uVar9 = *(undefined4 *)(param_2 - 0x20);
        uVar10 = *(undefined4 *)(param_2 - 0x1c);
        uVar11 = *(undefined4 *)(param_2 - 0x18);
        *(undefined4 *)(iVar4 + -0x34) = *(undefined4 *)(param_2 - 0x34);
        *(undefined4 *)(iVar4 + -0x30) = uVar5;
        *(undefined4 *)(iVar4 + -0x2c) = uVar6;
        *(undefined4 *)(iVar4 + -0x28) = uVar7;
        *(undefined4 *)(iVar4 + -0x24) = uVar8;
        *(undefined4 *)(iVar4 + -0x20) = uVar9;
        *(undefined4 *)(iVar4 + -0x1c) = uVar10;
        *(undefined4 *)(iVar4 + -0x18) = uVar11;
        uVar5 = *(undefined4 *)(param_2 - 0x10);
        uVar6 = *(undefined4 *)(param_2 - 0xc);
        uVar7 = *(undefined4 *)(param_2 - 8);
        uVar8 = *(undefined4 *)(param_2 - 4);
        *(undefined4 *)(iVar4 + -0x14) = *(undefined4 *)(param_2 - 0x14);
        *(undefined4 *)(iVar4 + -0x10) = uVar5;
        *(undefined4 *)(iVar4 + -0xc) = uVar6;
        *(undefined4 *)(iVar4 + -8) = uVar7;
        *(undefined4 *)(iVar4 + -4) = uVar8;
        uVar5 = *(undefined4 *)(param_2 - 100);
        uVar6 = *(undefined4 *)(param_2 - 0x60);
        uVar7 = *(undefined4 *)(param_2 - 0x5c);
        uVar8 = *(undefined4 *)(param_2 - 0x58);
        uVar9 = *(undefined4 *)(param_2 - 0x54);
        uVar10 = *(undefined4 *)(param_2 - 0x50);
        uVar11 = *(undefined4 *)(param_2 - 0x4c);
        puVar3 = (undefined4 *)(param_2 - 0x48);
        *(undefined4 *)(iVar4 + -0x68) = *(undefined4 *)(param_2 - 0x68);
        *(undefined4 *)(iVar4 + -100) = uVar5;
        *(undefined4 *)(iVar4 + -0x60) = uVar6;
        *(undefined4 *)(iVar4 + -0x5c) = uVar7;
        *(undefined4 *)(iVar4 + -0x58) = uVar8;
        *(undefined4 *)(iVar4 + -0x54) = uVar9;
        *(undefined4 *)(iVar4 + -0x50) = uVar10;
        *(undefined4 *)(iVar4 + -0x4c) = uVar11;
        uVar5 = *(undefined4 *)(param_2 - 0x44);
        uVar6 = *(undefined4 *)(param_2 - 0x40);
        uVar7 = *(undefined4 *)(param_2 - 0x3c);
        uVar8 = *(undefined4 *)(param_2 - 0x38);
        param_2 = param_2 - 0x68;
        *(undefined4 *)(iVar4 + -0x48) = *puVar3;
        *(undefined4 *)(iVar4 + -0x44) = uVar5;
        *(undefined4 *)(iVar4 + -0x40) = uVar6;
        *(undefined4 *)(iVar4 + -0x3c) = uVar7;
        *(undefined4 *)(iVar4 + -0x38) = uVar8;
        iVar4 = iVar4 + -0x68;
      }
      param_3 = param_3 + uVar1 * -0x34;
    }
  }
  else {
    for (; param_1 != param_2; param_2 = param_2 - 0x34) {
      uVar5 = *(undefined4 *)(param_2 - 0x30);
      uVar6 = *(undefined4 *)(param_2 - 0x2c);
      uVar7 = *(undefined4 *)(param_2 - 0x28);
      uVar8 = *(undefined4 *)(param_2 - 0x24);
      uVar9 = *(undefined4 *)(param_2 - 0x20);
      uVar10 = *(undefined4 *)(param_2 - 0x1c);
      uVar11 = *(undefined4 *)(param_2 - 0x18);
      *(undefined4 *)(param_3 + -0x34) = *(undefined4 *)(param_2 - 0x34);
      *(undefined4 *)(param_3 + -0x30) = uVar5;
      *(undefined4 *)(param_3 + -0x2c) = uVar6;
      *(undefined4 *)(param_3 + -0x28) = uVar7;
      *(undefined4 *)(param_3 + -0x24) = uVar8;
      *(undefined4 *)(param_3 + -0x20) = uVar9;
      *(undefined4 *)(param_3 + -0x1c) = uVar10;
      *(undefined4 *)(param_3 + -0x18) = uVar11;
      uVar5 = *(undefined4 *)(param_2 - 0x10);
      uVar6 = *(undefined4 *)(param_2 - 0xc);
      uVar7 = *(undefined4 *)(param_2 - 8);
      uVar8 = *(undefined4 *)(param_2 - 4);
      *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 - 0x14);
      *(undefined4 *)(param_3 + -0x10) = uVar5;
      *(undefined4 *)(param_3 + -0xc) = uVar6;
      *(undefined4 *)(param_3 + -8) = uVar7;
      *(undefined4 *)(param_3 + -4) = uVar8;
      param_3 = param_3 + -0x34;
    }
  }
  return param_3;
}



int fn_007a1994(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x28;
      iVar2 = param_3;
      if ((uVar1 & 1) != 0) {
        uVar5 = param_2[-9];
        uVar6 = param_2[-8];
        uVar7 = param_2[-7];
        uVar8 = param_2[-6];
        uVar9 = param_2[-5];
        uVar10 = param_2[-4];
        uVar11 = param_2[-3];
        puVar3 = param_2 + -2;
        *(undefined4 *)(param_3 + -0x28) = param_2[-10];
        *(undefined4 *)(param_3 + -0x24) = uVar5;
        *(undefined4 *)(param_3 + -0x20) = uVar6;
        *(undefined4 *)(param_3 + -0x1c) = uVar7;
        *(undefined4 *)(param_3 + -0x18) = uVar8;
        *(undefined4 *)(param_3 + -0x14) = uVar9;
        *(undefined4 *)(param_3 + -0x10) = uVar10;
        *(undefined4 *)(param_3 + -0xc) = uVar11;
        uVar5 = param_2[-1];
        param_2 = param_2 + -10;
        *(undefined4 *)(param_3 + -8) = *puVar3;
        *(undefined4 *)(param_3 + -4) = uVar5;
        iVar2 = param_3 + -0x28;
      }
      for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar5 = param_2[-9];
        uVar6 = param_2[-8];
        uVar7 = param_2[-7];
        uVar8 = param_2[-6];
        uVar9 = param_2[-5];
        uVar10 = param_2[-4];
        uVar11 = param_2[-3];
        *(undefined4 *)(iVar2 + -0x28) = param_2[-10];
        *(undefined4 *)(iVar2 + -0x24) = uVar5;
        *(undefined4 *)(iVar2 + -0x20) = uVar6;
        *(undefined4 *)(iVar2 + -0x1c) = uVar7;
        *(undefined4 *)(iVar2 + -0x18) = uVar8;
        *(undefined4 *)(iVar2 + -0x14) = uVar9;
        *(undefined4 *)(iVar2 + -0x10) = uVar10;
        *(undefined4 *)(iVar2 + -0xc) = uVar11;
        uVar5 = param_2[-1];
        *(undefined4 *)(iVar2 + -8) = param_2[-2];
        *(undefined4 *)(iVar2 + -4) = uVar5;
        uVar5 = param_2[-0x13];
        uVar6 = param_2[-0x12];
        uVar7 = param_2[-0x11];
        uVar8 = param_2[-0x10];
        uVar9 = param_2[-0xf];
        uVar10 = param_2[-0xe];
        uVar11 = param_2[-0xd];
        puVar3 = param_2 + -0xc;
        *(undefined4 *)(iVar2 + -0x50) = param_2[-0x14];
        *(undefined4 *)(iVar2 + -0x4c) = uVar5;
        *(undefined4 *)(iVar2 + -0x48) = uVar6;
        *(undefined4 *)(iVar2 + -0x44) = uVar7;
        *(undefined4 *)(iVar2 + -0x40) = uVar8;
        *(undefined4 *)(iVar2 + -0x3c) = uVar9;
        *(undefined4 *)(iVar2 + -0x38) = uVar10;
        *(undefined4 *)(iVar2 + -0x34) = uVar11;
        uVar5 = param_2[-0xb];
        param_2 = param_2 + -0x14;
        *(undefined4 *)(iVar2 + -0x30) = *puVar3;
        *(undefined4 *)(iVar2 + -0x2c) = uVar5;
        iVar2 = iVar2 + -0x50;
      }
      param_3 = param_3 + uVar1 * -0x28;
    }
  }
  else {
    while (param_1 != param_2) {
      uVar5 = param_2[-9];
      uVar6 = param_2[-8];
      uVar7 = param_2[-7];
      uVar8 = param_2[-6];
      uVar9 = param_2[-5];
      uVar10 = param_2[-4];
      uVar11 = param_2[-3];
      *(undefined4 *)(param_3 + -0x28) = param_2[-10];
      *(undefined4 *)(param_3 + -0x24) = uVar5;
      *(undefined4 *)(param_3 + -0x20) = uVar6;
      *(undefined4 *)(param_3 + -0x1c) = uVar7;
      *(undefined4 *)(param_3 + -0x18) = uVar8;
      *(undefined4 *)(param_3 + -0x14) = uVar9;
      *(undefined4 *)(param_3 + -0x10) = uVar10;
      *(undefined4 *)(param_3 + -0xc) = uVar11;
      uVar5 = param_2[-1];
      *(undefined4 *)(param_3 + -8) = param_2[-2];
      *(undefined4 *)(param_3 + -4) = uVar5;
      param_3 = param_3 + -0x28;
      param_2 = param_2 + -10;
    }
  }
  return param_3;
}



undefined1 * fn_007a17a0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_70 [52];
  undefined4 local_3c [2];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  iVar2 = param_2;
  iStack_30 = param_2;
  iStack_34 = param_1;
  while( true ) {
    iVar3 = iVar2 * 2;
    iVar4 = iVar3 + 2;
    if (param_3 <= iVar4) break;
    iVar1 = param_1 + iVar4 * 0x34;
    iVar1 = fn_006f0908(&param_5,iVar1,iVar1 + -0x34);
    if (iVar1 != 0) {
      iVar4 = iVar3 + 1;
    }
    iVar3 = param_1 + iVar4 * 0x34;
    iVar2 = param_1 + iVar2 * 0x34;
    *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(iVar3 + 4);
    *(undefined1 *)(iVar2 + 5) = *(undefined1 *)(iVar3 + 5);
    *(undefined1 *)(iVar2 + 6) = *(undefined1 *)(iVar3 + 6);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
    fn_006f94f4(iVar2 + 0xc,iVar3 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar3 + 0xc);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar3 + 0xc);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar3 + 0xc);
    *(undefined1 *)(iVar2 + 0x16) = *(undefined1 *)(iVar3 + 0x16);
    uVar6 = *(undefined4 *)(iVar3 + 0x1c);
    uVar7 = *(undefined4 *)(iVar3 + 0x20);
    uVar8 = *(undefined4 *)(iVar3 + 0x24);
    uVar9 = *(undefined4 *)(iVar3 + 0x28);
    uVar10 = *(undefined4 *)(iVar3 + 0x2c);
    uVar11 = *(undefined4 *)(iVar3 + 0x30);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = uVar6;
    *(undefined4 *)(iVar2 + 0x20) = uVar7;
    *(undefined4 *)(iVar2 + 0x24) = uVar8;
    *(undefined4 *)(iVar2 + 0x28) = uVar9;
    *(undefined4 *)(iVar2 + 0x2c) = uVar10;
    *(undefined4 *)(iVar2 + 0x30) = uVar11;
    iVar2 = iVar4;
  }
  if (iVar4 == param_3) {
    fn_006565e0(param_1 + iVar2 * 0x34,param_1 + iVar4 * 0x34 + -0x34);
    iVar2 = iVar3 + 1;
  }
  uVar6 = fn_00656538(auStack_70,local_28);
  local_3c[0] = param_5;
  while (iVar3 = (iVar2 + -1) / 2, param_2 < iVar2) {
    iVar1 = param_1 + iVar3 * 0x34;
    iVar4 = fn_006f0908(local_3c,iVar1,uVar6);
    if (iVar4 == 0) break;
    iVar2 = param_1 + iVar2 * 0x34;
    *(undefined1 *)(iVar2 + 4) = *(undefined1 *)(iVar1 + 4);
    *(undefined1 *)(iVar2 + 5) = *(undefined1 *)(iVar1 + 5);
    *(undefined1 *)(iVar2 + 6) = *(undefined1 *)(iVar1 + 6);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    fn_006f94f4(iVar2 + 0xc,iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar1 + 0xc);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar1 + 0xc);
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar1 + 0xc);
    *(undefined1 *)(iVar2 + 0x16) = *(undefined1 *)(iVar1 + 0x16);
    uVar7 = *(undefined4 *)(iVar1 + 0x1c);
    uVar8 = *(undefined4 *)(iVar1 + 0x20);
    uVar9 = *(undefined4 *)(iVar1 + 0x24);
    uVar10 = *(undefined4 *)(iVar1 + 0x28);
    uVar11 = *(undefined4 *)(iVar1 + 0x2c);
    uVar5 = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = uVar7;
    *(undefined4 *)(iVar2 + 0x20) = uVar8;
    *(undefined4 *)(iVar2 + 0x24) = uVar9;
    *(undefined4 *)(iVar2 + 0x28) = uVar10;
    *(undefined4 *)(iVar2 + 0x2c) = uVar11;
    *(undefined4 *)(iVar2 + 0x30) = uVar5;
    iVar2 = iVar3;
  }
  fn_006565e0(param_1 + iVar2 * 0x34,uVar6);
  return auStack_70;
}


