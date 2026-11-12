#include "002f7714_002f7c64.h"



void fn_002f7c64(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_b0c [100];
  undefined1 local_aa8 [2];
  short local_aa6;
  short local_aa4;
  short local_aa2;
  short local_aa0;
  int local_a9c;
  short local_a98;
  undefined1 auStack_928 [380];
  undefined1 auStack_7ac [964];
  undefined1 auStack_3e8 [960];
  undefined1 local_28;
  undefined1 local_27;
  
  uVar4 = *(undefined4 *)(DAT_008977ec + 0x28);
  fn_00301f50(local_aa8,0x17c);
  iVar3 = 1;
  local_aa8[0] = 3;
  do {
    iVar1 = fn_006cba34(*(undefined4 *)(DAT_008977ec + 0x2c),iVar3);
    fn_0017821c(auStack_b0c + iVar3 * 0x78,iVar1,0x78);
    iVar3 = iVar3 + 1;
    local_aa6 = local_aa6 + *(short *)(iVar1 + 0x48);
    local_aa4 = local_aa4 + *(short *)(iVar1 + 0x4a);
    local_aa2 = local_aa2 + *(short *)(iVar1 + 0x4c);
    local_aa0 = local_aa0 + *(short *)(iVar1 + 0x44);
    local_a9c = (uint)*(ushort *)(iVar1 + 0x48) + (uint)*(ushort *)(iVar1 + 0x4a) +
                (uint)*(ushort *)(iVar1 + 0x4c) + *(int *)(iVar1 + 0x44) + local_a9c;
    local_a98 = local_a98 + (ushort)*(byte *)(iVar1 + 0x4e);
  } while (iVar3 < 4);
  uVar2 = fn_002f8914();
  iVar3 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar2);
  fn_0017821c(auStack_3e8,iVar3,0x3c0);
  local_28 = *(undefined1 *)(iVar3 + 0x3c0);
  local_27 = *(undefined1 *)(iVar3 + 0x3c1);
  fn_0017821c(auStack_928,local_aa8,0x17c);
  fn_0017821c(auStack_7ac,auStack_3e8,0x3c4);
  fn_0041fe58(uVar4,auStack_928);
  return;
}



void fn_002f7a6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_16a0 [17];
  char local_165c [2];
  undefined4 local_165a;
  undefined1 auStack_1656 [6];
  undefined1 auStack_1650 [96];
  undefined1 auStack_15f0 [3244];
  undefined4 local_944 [17];
  char local_900 [2];
  undefined4 local_8fe;
  undefined1 auStack_8fa [6];
  undefined1 auStack_8f4 [96];
  undefined1 auStack_894 [2164];
  
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 0x474;
    puVar2 = (undefined4 *)(param_1 + uVar4 * 0x49c);
    fn_00301f50(local_16a0 + uVar4 * 0x11d,0x474);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    local_16a0[uVar4 * 0x11d] = *puVar2;
    local_16a0[uVar4 * 0x11d + 1] = uVar5;
    local_16a0[uVar4 * 0x11d + 2] = uVar6;
    local_16a0[uVar4 * 0x11d + 3] = uVar7;
    local_16a0[uVar4 * 0x11d + 4] = puVar2[4];
    local_16a0[uVar4 * 0x11d + 5] = puVar2[5];
    local_16a0[uVar4 * 0x11d + 6] = puVar2[6];
    local_16a0[uVar4 * 0x11d + 7] = puVar2[7];
    uVar5 = puVar2[9];
    uVar6 = puVar2[10];
    uVar7 = puVar2[0xb];
    uVar8 = puVar2[0xc];
    uVar9 = puVar2[0xd];
    uVar10 = puVar2[0xe];
    uVar11 = puVar2[0xf];
    local_16a0[uVar4 * 0x11d + 8] = puVar2[8];
    local_16a0[uVar4 * 0x11d + 9] = uVar5;
    local_16a0[uVar4 * 0x11d + 10] = uVar6;
    local_16a0[uVar4 * 0x11d + 0xb] = uVar7;
    local_16a0[uVar4 * 0x11d + 0xc] = uVar8;
    local_16a0[uVar4 * 0x11d + 0xd] = uVar9;
    local_16a0[uVar4 * 0x11d + 0xe] = uVar10;
    local_16a0[uVar4 * 0x11d + 0xf] = uVar11;
    local_16a0[uVar4 * 0x11d + 0x10] = puVar2[0x10];
    local_165c[iVar1] = *(char *)(puVar2 + 0x11);
    local_165c[iVar1 + 1] = *(char *)((int)puVar2 + 0x45);
    *(undefined4 *)(local_165c + iVar1 + 2) = *(undefined4 *)((int)puVar2 + 0x46);
    fn_00176fb0(auStack_1656 + iVar1,(int)puVar2 + 0x4a);
    if (local_165c[iVar1 + 1] != '\0') {
      fn_001f825c();
      fn_0066193c(auStack_1650 + iVar1,puVar2 + 0x14);
      fn_0011ddb8();
    }
    fn_0017821c(auStack_15f0 + iVar1,puVar2 + 0x36,0x3c4);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 0x474;
    puVar2 = local_944 + uVar4 * 0x11d;
    puVar3 = (undefined4 *)(param_2 + uVar4 * 0x49c);
    fn_00301f50(puVar2,0x474);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar2 = *puVar3;
    local_944[uVar4 * 0x11d + 1] = uVar5;
    local_944[uVar4 * 0x11d + 2] = uVar6;
    local_944[uVar4 * 0x11d + 3] = uVar7;
    local_944[uVar4 * 0x11d + 4] = puVar3[4];
    local_944[uVar4 * 0x11d + 5] = puVar3[5];
    local_944[uVar4 * 0x11d + 6] = puVar3[6];
    local_944[uVar4 * 0x11d + 7] = puVar3[7];
    uVar5 = puVar3[9];
    uVar6 = puVar3[10];
    uVar7 = puVar3[0xb];
    uVar8 = puVar3[0xc];
    uVar9 = puVar3[0xd];
    uVar10 = puVar3[0xe];
    uVar11 = puVar3[0xf];
    local_944[uVar4 * 0x11d + 8] = puVar3[8];
    local_944[uVar4 * 0x11d + 9] = uVar5;
    local_944[uVar4 * 0x11d + 10] = uVar6;
    local_944[uVar4 * 0x11d + 0xb] = uVar7;
    local_944[uVar4 * 0x11d + 0xc] = uVar8;
    local_944[uVar4 * 0x11d + 0xd] = uVar9;
    local_944[uVar4 * 0x11d + 0xe] = uVar10;
    local_944[uVar4 * 0x11d + 0xf] = uVar11;
    local_944[uVar4 * 0x11d + 0x10] = puVar3[0x10];
    local_900[iVar1] = *(char *)(puVar3 + 0x11);
    local_900[iVar1 + 1] = *(char *)((int)puVar3 + 0x45);
    *(undefined4 *)(local_900 + iVar1 + 2) = *(undefined4 *)((int)puVar3 + 0x46);
    fn_00176fb0(auStack_8fa + iVar1,(int)puVar3 + 0x4a);
    if (local_900[iVar1 + 1] != '\0') {
      fn_001f825c();
      fn_0066193c(auStack_8f4 + iVar1,puVar3 + 0x14);
      fn_0011ddb8();
    }
    fn_0017821c(auStack_894 + iVar1,puVar3 + 0x36,0x3c4);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  fn_0036a860(*(undefined4 *)(DAT_00897804 + 0x3c),local_16a0);
  fn_0036a874(*(undefined4 *)(DAT_00897804 + 0x3c),local_944);
  return;
}



void fn_002f79d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_450 [982];
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 auStack_78 [72];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x3c);
  fn_00301f50(auStack_78,0x48);
  fn_0036a840(uVar2,auStack_78);
  uVar1 = 0;
  do {
    fn_006c3acc(uVar2,uVar1 & 0xff,auStack_450);
    local_7a = 0;
    local_79 = 0;
    fn_0036a810(uVar2,uVar1 & 0xff,auStack_450);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  fn_0028b908(*(undefined4 *)(DAT_00897804 + 0x30),&local_30);
  return;
}



void fn_002f796c(void)

{
  int iVar1;
  undefined1 auStack_80 [8];
  undefined1 local_78;
  undefined1 auStack_20 [16];
  
  iVar1 = 1;
  do {
    fn_00120ea0(auStack_20);
    fn_00110c80(auStack_80);
    local_78 = 6;
    fn_002f5fa0(*(undefined4 *)(DAT_008977ec + 0x2c),iVar1,auStack_80);
    fn_00120ec8(auStack_20);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



int fn_002f7930(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 1;
  do {
    iVar1 = fn_002f5944(iVar3);
    iVar2 = fn_002f6980(iVar3);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + iVar2 + iVar1;
  } while (iVar3 < 4);
  return iVar4;
}



int fn_002f7908(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  return (int)*(char *)(iVar1 + 0x3d7);
}



undefined4 fn_002f78f4(void)

{
  return *(undefined4 *)(DAT_00897804 + 0x20);
}



void fn_002f7874(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3e8 [963];
  byte local_25;
  
  fn_006c3acc(*(undefined4 *)(DAT_00897804 + 0x3c),param_1,auStack_3e8);
  if (local_25 < 4) {
    uVar1 = fn_002f8914();
    uVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar1);
    iVar2 = fn_00246ec4(uVar1,4);
    if (iVar2 < 5) {
      local_25 = local_25 + 1;
    }
    else {
      local_25 = 4;
    }
  }
  fn_0036a810(*(undefined4 *)(DAT_00897804 + 0x3c),param_1,auStack_3e8);
  return;
}



void fn_002f7714(undefined4 param_1,byte param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 ****ppppuVar7;
  undefined4 uVar8;
  undefined1 auStack_420 [968];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  byte local_4b;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *****local_38 [4];
  undefined4 uStack_28;
  
  iVar2 = *(int *)(DAT_008977ec + 0x28);
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x3c);
  fn_006c3acc(uVar6,param_1,auStack_420);
  local_50 = *(undefined2 *)(iVar2 + 0x10);
  local_4e = *(undefined1 *)(iVar2 + 0x12);
  local_4d = *(undefined1 *)(iVar2 + 0x13);
  local_58 = *(undefined4 *)(iVar2 + 0x18);
  local_54 = *(undefined4 *)(iVar2 + 0x14);
  if (param_3 != 0) {
    local_4b = param_2 ^ 1;
    local_49 = 1;
  }
  fn_0036a810(uVar6,param_1,auStack_420);
  uVar6 = *(undefined4 *)(DAT_008977ec + 0x28);
  uVar8 = *(undefined4 *)(DAT_00897804 + 0x30);
  puVar3 = (undefined4 *)fn_006b8718(uVar8);
  local_38[2] = (undefined4 *****)*puVar3;
  local_38[3] = (undefined4 *****)puVar3[1];
  uStack_28 = puVar3[2];
  puVar3 = (undefined4 *)fn_006b873c(uVar8);
  local_48 = *puVar3;
  uStack_44 = puVar3[1];
  uStack_40 = puVar3[2];
  uVar5 = 0;
  local_38[0] = local_38 + 2;
  local_38[1] = (undefined4 *****)&local_48;
  do {
    puVar3 = (undefined4 *)fn_0041fe48(uVar6,uVar5 & 0xff);
    ppppuVar7 = local_38[uVar5];
    if ((*(char *)ppppuVar7 == '\0') && (uVar4 = fn_002f8914(), uVar4 != uVar5)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)ppppuVar7 = cVar1;
    uVar5 = uVar5 + 1;
    *(undefined2 *)((int)ppppuVar7 + 2) = *(undefined2 *)(puVar3 + 6);
    ppppuVar7[1] = (undefined4 ***)*puVar3;
  } while (uVar5 < 2);
  fn_0028b940(uVar8,local_38 + 2);
  fn_0028b970(uVar8,&local_48);
  return;
}


