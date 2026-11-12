#include "00435740_0043776c.h"



void fn_0043776c(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  short local_5c [2];
  char local_58 [4];
  short local_54 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  char local_44 [4];
  short local_40 [2];
  char local_3c [4];
  short local_38 [2];
  byte local_34 [4];
  undefined1 auStack_30 [4];
  byte local_2c [8];
  
  iVar3 = fn_0022cdf0();
  if (iVar3 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x20);
  uVar8 = *(uint *)(*(int *)(param_1 + 0xac) + -4);
  uVar4 = fn_00100b58(uVar10);
  uVar5 = *(uint *)(*(int *)(param_1 + 0xac) + -4);
  if (uVar5 < uVar8) {
    uVar8 = uVar5;
  }
  iVar3 = fn_001006de(*(int *)(param_1 + 0xac),uVar10);
  if (iVar3 != 0 || uVar8 != uVar4) {
    fn_0043721c(param_1);
  }
  if ((((*(short *)(param_1 + 0xa8) != *(short *)(*(int *)(param_1 + 0x98) + 0x1c)) ||
       ((uint)*(byte *)(*(int *)(param_1 + 0x98) + 0x26) != *(uint *)(param_1 + 0xf4))) ||
      (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != *(char *)(param_1 + 0xf8))) ||
     (*(char *)(*(int *)(param_1 + 0x98) + 0x45a) != *(char *)(param_1 + 0xf9))) {
    fn_00437134(param_1);
  }
  if (*(char *)(param_1 + 0xb0) != *(char *)(*(int *)(param_1 + 0x98) + 0x27)) {
    bVar2 = *(byte *)(*(int *)(param_1 + 0x98) + 0x27);
    *(byte *)(*(int *)(param_1 + 0x100) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x100) + 0x44) & 0xfe | bVar2;
    *(byte *)(param_1 + 0xb0) = bVar2;
  }
  iVar3 = 0;
  do {
    fn_0042ec40(*(undefined4 *)(param_1 + 0x98),iVar3,local_54,&local_50,local_44);
    iVar11 = param_1 + iVar3 * 0x20;
    iVar6 = fn_00101d80(iVar11 + 0xb4,local_50);
    if (iVar6 != 0) {
      fn_004374f4(param_1,iVar3);
    }
    if (*(short *)(iVar11 + 0xb2) != local_54[0]) {
      fn_0042ec40(*(undefined4 *)(param_1 + 0x98),iVar3,&local_4c,local_34,local_38);
      if ((short)local_4c == 0) {
        uVar10 = fn_0022f584((char *)&DAT_004374e0,0);
        fn_00190d50(*(undefined4 *)(param_1 + iVar3 * 4 + 0x104),uVar10);
      }
      else {
        uVar10 = fn_0015b064();
        fn_00190d50(*(undefined4 *)(param_1 + iVar3 * 4 + 0x104),uVar10);
      }
      *(short *)(iVar11 + 0xb2) = (short)local_4c;
      local_4c = 0x504;
      fn_0042ec40(*(undefined4 *)(param_1 + 0x98),iVar3,local_38,auStack_30,auStack_48);
      uVar4 = (uint)(byte)auStack_48[iVar3 + -4];
      uVar8 = *(int *)(param_1 + 0x130) - *(int *)(param_1 + 300) >> 2;
      if (uVar8 <= uVar4) {
        fn_002ff628(9,&DAT_008c7651,&DAT_008c7651,uVar4,uVar8);
      }
      iVar6 = *(int *)(*(int *)(param_1 + 300) + uVar4 * 4);
      if (local_38[0] == 0) {
        fn_002b427c(iVar6,1);
        *(undefined1 *)(iVar6 + 0x3b) = 1;
        *(undefined1 *)(iVar6 + 0x3d) = 0;
        *(undefined1 *)(iVar6 + 0x43) = 0;
        *(undefined1 *)(iVar6 + 0x3f) = 0;
        *(undefined1 *)(iVar6 + 0x41) = 0;
      }
      else {
        fn_002b427c(iVar6);
        *(undefined1 *)(iVar6 + 0x3b) = 0;
        *(undefined1 *)(iVar6 + 0x3d) = 0;
        *(undefined1 *)(iVar6 + 0x43) = 0;
        *(undefined1 *)(iVar6 + 0x3f) = 0;
        *(undefined1 *)(iVar6 + 0x41) = 0;
      }
    }
    if ((int)local_44[0] != (*(byte *)(iVar11 + 0xd1) & 3) >> 1) {
      fn_0042ec40(*(undefined4 *)(param_1 + 0x98),iVar3,auStack_48,local_38,local_2c);
      iVar6 = *(int *)(param_1 + iVar3 * 4 + 0x114);
      *(byte *)(iVar6 + 0x44) = local_2c[0] | *(byte *)(iVar6 + 0x44) & 0xfe;
      *(byte *)(iVar11 + 0xd1) = *(byte *)(iVar11 + 0xd1) & 0xfd | local_2c[0] << 1;
    }
    fn_0042e8f4(*(undefined4 *)(param_1 + 0x98),iVar3,local_40,local_3c,local_5c,local_58);
    if ((*(short *)(iVar11 + 0xcc) != local_40[0]) || (*(short *)(iVar11 + 0xce) != local_5c[0])) {
      fn_0043761c(param_1,iVar3);
    }
    if (((int)local_3c[0] != (*(byte *)(iVar11 + 0xd1) & 7) >> 2) ||
       ((int)local_58[0] != (*(byte *)(iVar11 + 0xd1) & 0xf) >> 3)) {
      fn_0042e8f4(*(undefined4 *)(param_1 + 0x98),iVar3,local_2c,local_38,auStack_30,local_34);
      iVar7 = param_1 + iVar3 * 4;
      iVar6 = *(int *)(iVar7 + 0x11c);
      *(byte *)(iVar6 + 0x44) = (byte)local_38[0] | *(byte *)(iVar6 + 0x44) & 0xfe;
      iVar6 = *(int *)(iVar7 + 0x124);
      *(byte *)(iVar6 + 0x44) = local_34[0] | *(byte *)(iVar6 + 0x44) & 0xfe;
      bVar2 = *(byte *)(iVar11 + 0xd1) & 0xfb | (byte)local_38[0] << 2;
      *(byte *)(iVar11 + 0xd1) = bVar2;
      *(byte *)(iVar11 + 0xd1) = bVar2 & 0xf7 | local_34[0] << 3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  if ((((*(short *)(param_1 + 0xa8) != sVar1) ||
       ((uint)*(byte *)(*(int *)(param_1 + 0x98) + 0x26) != *(uint *)(param_1 + 0xf4))) ||
      (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != *(char *)(param_1 + 0xf8))) ||
     (*(char *)(*(int *)(param_1 + 0x98) + 0x45a) != *(char *)(param_1 + 0xf9))) {
    fn_0022cdb4(param_1,sVar1 != 0);
    *(short *)(param_1 + 0xa8) = sVar1;
    *(uint *)(param_1 + 0xf4) = (uint)*(byte *)(*(int *)(param_1 + 0x98) + 0x26);
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x338);
  }
  piVar9 = *(int **)(param_1 + 300);
  if (*(int **)(param_1 + 0x130) != piVar9) {
    do {
      if ((int *)*piVar9 != (int *)0x0) {
        (**(code **)(*(int *)*piVar9 + 0x14))();
      }
      piVar9 = piVar9 + 1;
    } while (*(int **)(param_1 + 0x130) != piVar9);
  }
  fn_003bbde0(param_1);
  return;
}



void fn_0043745c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  short local_1c [2];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  fn_0042ec40(*(undefined4 *)(param_1 + 0x98),param_2,local_1c,auStack_18,auStack_14);
  iVar2 = param_1 + param_2 * 4;
  if (local_1c[0] == 0) {
    uVar1 = fn_0022f584((char *)&DAT_004374e0,0);
    fn_00190d50(*(undefined4 *)(iVar2 + 0x104),uVar1);
  }
  else {
    uVar1 = fn_0015b064();
    fn_00190d50(*(undefined4 *)(iVar2 + 0x104),uVar1);
  }
  *(short *)(param_1 + param_2 * 0x20 + 0xb2) = local_1c[0];
  return;
}



void fn_004358cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r1;
  char *pcVar7;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_48 [36];
  
  iVar8 = 0;
  iVar5 = param_2;
  do {
    iVar1 = iVar8 + *(int *)(param_1 + 0x84) * 10;
    if ((((iVar1 < 0) || (*(int *)(param_2 + 0x4c4) <= iVar1)) ||
        (iVar5 = *(int *)(param_2 + 0x4bc) + iVar1, iVar5 < 0)) ||
       (*(int *)(param_2 + 0x4b8) <= iVar5)) {
      iVar9 = 0;
    }
    else {
      iVar5 = param_2 + iVar5 * 0xc;
      iVar9 = iVar5 + 8;
    }
    bVar10 = iVar1 == 0;
    if (iVar1 >= 0) {
      iVar5 = *(int *)(param_2 + 0x4c8);
      bVar10 = iVar5 == iVar1;
    }
    if (((bVar10 || (iVar1 < 0 || iVar5 < iVar1)) ||
        (iVar1 = iVar1 + *(int *)(param_2 + 0x4c0), iVar1 < 0)) ||
       (*(int *)(param_2 + 0x4b8) <= iVar1)) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_2 + iVar1 * 0xc + 8;
    }
    uVar6 = iVar8 * 3;
    iVar1 = param_1 + iVar8 * 0xc;
    if (iVar9 != 0) {
      uVar6 = (uint)*(byte *)(iVar9 + 1);
    }
    if (iVar9 == 0 || uVar6 == 0) {
      if (iVar8 == 0 && *(int *)(param_2 + 0x4b8) == 0) {
        pcVar7 = (char *)fn_00231db4(9000,uVar6);
      }
      else {
        pcVar7 = "";
      }
      fn_00190d50(*(undefined4 *)(iVar1 + 0xac),pcVar7);
      fn_00190d50(*(undefined4 *)(iVar1 + 0xb0),"");
      uVar6 = fn_00190d50(*(undefined4 *)(iVar1 + 0xb4),"");
    }
    else {
      uVar2 = fn_00231db4(uVar6);
      fn_00190d50(*(undefined4 *)(iVar1 + 0xac),uVar2);
      iVar3 = fn_0036fc5c(*(undefined1 *)(iVar9 + 1));
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar9 + 4);
      }
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      fn_0017d96c(auStack_48,0x20,0x1f,(char *)&DAT_00435870,iVar4);
      uVar2 = fn_0022f584(auStack_48,0);
      fn_00190d50(*(undefined4 *)(iVar1 + 0xb0),uVar2);
      if (*(int *)(iVar9 + 8) < 1) {
        pcVar7 = "";
        uVar2 = *(undefined4 *)(iVar1 + 0xb4);
      }
      else {
        fn_0015b0f8(*(int *)(iVar9 + 8),extraout_r1);
        pcVar7 = (char *)fn_0022f584((char *)&DAT_004358a0,0);
        uVar2 = *(undefined4 *)(iVar1 + 0xb4);
      }
      uVar6 = fn_00190d50(uVar2,pcVar7);
    }
    if (iVar5 != 0) {
      uVar6 = (uint)*(byte *)(iVar5 + 1);
    }
    if (iVar5 == 0 || uVar6 == 0) {
      fn_00190d50(*(undefined4 *)(iVar1 + 0x124),"");
      fn_00190d50(*(undefined4 *)(iVar1 + 0x128),"");
      pcVar7 = "";
      uVar2 = *(undefined4 *)(iVar1 + 300);
LAB_00435b4c:
      fn_00190d50(uVar2,pcVar7);
      iVar5 = extraout_r1_01;
    }
    else {
      uVar2 = fn_00231db4();
      fn_00190d50(*(undefined4 *)(iVar1 + 0x124),uVar2);
      iVar4 = fn_0036fc5c(*(undefined1 *)(iVar5 + 1));
      iVar9 = 0;
      if (iVar4 != 0) {
        iVar9 = *(int *)(iVar5 + 4);
      }
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      fn_0017d96c(auStack_48,0x20,0x1f,(char *)&DAT_00435888,iVar9);
      uVar2 = fn_0022f584(auStack_48,0);
      fn_00190d50(*(undefined4 *)(iVar1 + 0x128),uVar2);
      if (0 < *(int *)(iVar5 + 8)) {
        fn_0015b0f8();
        pcVar7 = (char *)fn_0022f584((char *)&DAT_004358a0,0);
        uVar2 = *(undefined4 *)(iVar1 + 300);
        goto LAB_00435b4c;
      }
      fn_00190d50(*(undefined4 *)(iVar1 + 300),"");
      iVar5 = extraout_r1_00;
    }
    iVar8 = iVar8 + 1;
    if (9 < iVar8) {
      return;
    }
  } while( true );
}



void fn_00435740(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_30 [32];
  
  uVar1 = param_1 + param_3 * 0xc;
  if (param_4 == 0) {
    puVar4 = (undefined4 *)(uVar1 + 0x124);
  }
  else {
    puVar4 = (undefined4 *)(uVar1 + 0xac);
  }
  if (param_2 != 0) {
    uVar1 = (uint)*(byte *)(param_2 + 1);
  }
  if (param_2 != 0 && uVar1 != 0) {
    uVar2 = fn_00231db4();
    fn_00190d50(*puVar4,uVar2);
    fn_0036fc5c(*(undefined1 *)(param_2 + 1));
    fn_0017d96c(auStack_30,0x20,0x1f);
    uVar2 = fn_0022f584(auStack_30,0);
    fn_00190d50(puVar4[1],uVar2);
    if (*(int *)(param_2 + 8) < 1) {
      uVar2 = puVar4[2];
      pcVar3 = "";
    }
    else {
      fn_0015b0f8(*(int *)(param_2 + 8),extraout_r1);
      pcVar3 = (char *)fn_0022f584((char *)&DAT_004358a0,0);
      uVar2 = puVar4[2];
    }
    fn_00190d50(uVar2,pcVar3);
    return;
  }
  if (((param_3 == 0) && (param_4 != 0)) && (param_5 == 0)) {
    pcVar3 = (char *)fn_00231db4(9000);
  }
  else {
    pcVar3 = "";
  }
  fn_00190d50(*puVar4,pcVar3);
  fn_00190d50(puVar4[1],"");
  fn_00190d50(puVar4[2],"");
  return;
}


