#include "002e9394_002e9ce8.h"



int fn_002e9ce8(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x18);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(char *)(iVar1 + 6);
}



int fn_002e9c90(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 6);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(char *)(iVar1 + 4);
}



int fn_002e9c38(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x30);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x1a);
}



int fn_002e9be0(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 8);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(char *)(iVar1 + 5);
}



int fn_002e9b88(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(short *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x24);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(short *)(iVar1 + 0x1a);
}



int fn_002e99b0(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    return (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 0x33);
  }
  iVar1 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  return (int)*(char *)(iVar1 + 0x1d);
}



int fn_002e9978(int param_1)

{
  int iVar1;
  
  if (param_1 < 10000) {
    iVar1 = (int)*(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 5);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_002e94f0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  int local_a8;
  short local_a4 [2];
  byte local_a0 [4];
  int local_9c;
  undefined2 local_98;
  undefined2 local_96;
  undefined1 local_93;
  int local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 local_87;
  int local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined1 local_7b;
  int local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined1 local_6f;
  int local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined1 local_63;
  uint local_60;
  int local_5c;
  uint local_54;
  undefined4 local_4c;
  uint local_44;
  int iStack_30;
  int iStack_2c;
  uint local_28;
  
  local_44 = (uint)*(byte *)(param_2 + 0x2e);
  if (param_3 < local_44) {
    return;
  }
  local_5c = 0;
  local_54 = param_3 - local_44 & 0xff;
  if ((*(ushort *)(param_2 + 0x40) & 0x400) != 0) {
    if (local_44 < 100) {
      local_5c = (int)(char)((char)param_3 + -100);
      if (local_5c < 0) {
        local_5c = 0;
      }
    }
    else {
      local_5c = (int)(char)(param_3 - local_44);
    }
  }
  uVar7 = local_54 - local_5c;
  uVar8 = uVar7 & 0xff;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  fn_0017821c(&local_a8,&DAT_007c455c,0x48);
  local_a8 = param_1;
  local_a4[0] = fn_005fe6d8(param_2,0);
  local_a4[1] = fn_005fe6d8(param_2,1);
  local_a0[1] = fn_00661638((int)*(short *)(param_2 + 0x1c));
  local_9c = param_1 + 2;
  local_98 = fn_0020fd1c(param_2,0);
  local_96 = fn_0020fd1c(param_2,1);
  local_93 = fn_00661654((int)*(short *)(param_2 + 0x1c));
  local_90 = param_1 + 4;
  local_8c = fn_002101b4(param_2,0);
  local_8a = fn_002101b4(param_2,1);
  local_87 = fn_0066168c((int)*(short *)(param_2 + 0x1c));
  local_84 = param_1 + 6;
  local_80 = fn_002101c0(param_2,0);
  local_7e = fn_002101c0(param_2,1);
  local_7b = fn_006616c4((int)*(short *)(param_2 + 0x1c));
  local_78 = param_1 + 8;
  local_74 = fn_0021018c(param_2,0);
  local_72 = fn_0021018c(param_2,1);
  local_6f = fn_00661670((int)*(short *)(param_2 + 0x1c));
  local_6c = param_1 + 10;
  local_68 = fn_00210180(param_2,0);
  local_66 = fn_00210180(param_2,1);
  local_63 = fn_006615e4((int)*(short *)(param_2 + 0x1c));
  if (uVar8 != 0) {
    unaff_r7 = 0;
  }
  cVar4 = (char)uVar7;
  if (uVar8 != 0) {
    do {
      cVar1 = *(char *)(param_2 + 0x2e);
      local_60 = (uint)local_a0[unaff_r7 * 0xc + 1];
      local_4c = fn_0039e4a4((int)cVar1);
      sVar5 = fn_0039e4a4((int)(char)(cVar1 + cVar4),local_60);
      iVar2 = (int)sVar5 * (int)local_a4[unaff_r7 * 6];
      iVar3 = (int)(short)local_4c * (int)local_a4[unaff_r7 * 6];
      **(short **)(local_a4 + unaff_r7 * 6 + -2) =
           ((((short)(iVar2 / 1000) + (short)(iVar2 >> 0x1f)) -
            (short)((longlong)iVar2 * 0x10624dd3 >> 0x3f)) -
           (((short)(iVar3 / 1000) + (short)(iVar3 >> 0x1f)) -
           (short)((longlong)iVar3 * 0x10624dd3 >> 0x3f))) +
           **(short **)(local_a4 + unaff_r7 * 6 + -2);
      sVar5 = fn_002e98c0(local_a0[unaff_r7 * 0xc],param_2);
      iVar2 = unaff_r7 * 6;
      unaff_r7 = unaff_r7 + 1;
      **(short **)(local_a4 + iVar2 + -2) =
           sVar5 * (short)uVar8 + **(short **)(local_a4 + iVar2 + -2);
    } while (unaff_r7 < 6);
  }
  if (0 < local_5c) {
    uVar7 = 0;
    cVar1 = (char)local_28;
    do {
      local_60 = (uint)local_a0[uVar7 * 0xc + 1];
      local_4c = fn_0039e4a4((int)(char)(*(char *)(param_2 + 0x2e) + cVar4),local_60);
      sVar5 = fn_0039e4a4((int)cVar1,local_60);
      iVar2 = (int)sVar5 * (int)local_a4[uVar7 * 6 + 1];
      iVar3 = (int)(short)local_4c * (int)local_a4[uVar7 * 6 + 1];
      **(short **)(local_a4 + uVar7 * 6 + -2) =
           ((((short)(iVar2 / 1000) + (short)(iVar2 >> 0x1f)) -
            (short)((longlong)iVar2 * 0x10624dd3 >> 0x3f)) -
           (((short)(iVar3 / 1000) + (short)(iVar3 >> 0x1f)) -
           (short)((longlong)iVar3 * 0x10624dd3 >> 0x3f))) + **(short **)(local_a4 + uVar7 * 6 + -2)
      ;
      sVar5 = fn_002e98c0(local_a0[uVar7 * 0xc],param_2);
      iVar2 = uVar7 * 6;
      uVar7 = uVar7 + 1;
      **(short **)(local_a4 + iVar2 + -2) =
           sVar5 * (short)local_5c + **(short **)(local_a4 + iVar2 + -2);
    } while (uVar7 < 6);
  }
  sVar5 = 0;
  *(char *)(param_1 + 0xc) = (char)local_54 + *(char *)(param_1 + 0xc);
  uVar7 = local_44 + 1;
  if ((int)uVar7 <= (int)local_28) {
    do {
      sVar6 = fn_003886bc(uVar7 & 0xff,param_2);
      sVar6 = sVar6 + *(short *)(param_1 + 0xe);
      *(short *)(param_1 + 0xe) = sVar6;
      if (sVar6 != sVar5) {
        sVar5 = fn_002e98c0(6,param_2);
        *(short *)(param_1 + 0xe) = sVar5 + *(short *)(param_1 + 0xe);
      }
      sVar5 = *(short *)(param_1 + 0xe);
      uVar7 = (uint)(short)((short)uVar7 + 1);
    } while ((int)uVar7 <= (int)local_28);
  }
  return;
}



int fn_002e98c0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short local_b8 [76];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  switch(param_1) {
  case 0:
    sVar2 = 0x17d;
    sVar1 = 0x176;
    break;
  case 1:
    sVar2 = 0x17e;
    sVar1 = 0x177;
    break;
  case 2:
    sVar2 = 0x17f;
    sVar1 = 0x178;
    break;
  case 3:
    sVar2 = 0x180;
    sVar1 = 0x179;
    break;
  case 4:
    sVar2 = 0x181;
    sVar1 = 0x17a;
    break;
  case 5:
    sVar2 = 0x182;
    sVar1 = 0x17b;
    break;
  case 6:
    sVar2 = 0x183;
    sVar1 = 0x17c;
    break;
  default:
    return 0;
  }
  iVar4 = 0;
  fn_00301f50(local_b8,0x98);
  fn_0020bbc4(auStack_20,param_2);
  fn_006bf5ec(auStack_1c,local_b8,0x4c,1,1,1,1,1);
  iVar3 = 0;
  do {
    if (local_b8[iVar3] == sVar1) {
      iVar4 = 1;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x4c);
  fn_00301f50(local_b8,0x98);
  fn_0020bbc4(auStack_20,param_2);
  fn_006bf5ec(auStack_1c,local_b8,0x4c,1,1,1,1,1);
  iVar3 = 0;
  do {
    if (local_b8[iVar3] == sVar2) {
      return iVar4 + 2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x4c);
  return iVar4;
}



void fn_002e9394(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 local_30;
  byte local_2c [8];
  
  pcVar10 = (char *)(param_2 + 0xc);
  pbVar9 = (byte *)&local_30;
  if (*(byte *)(param_1 + 0x2e) < 0x79) {
    bVar3 = *(byte *)(param_1 + 0x2e) + *pcVar10;
    *(byte *)(param_1 + 0x2e) = bVar3;
    local_2c[0] = 0x78;
    if (0x78 < bVar3) {
      pbVar9 = local_2c;
    }
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,bVar3);
    bVar1 = *pbVar9;
    if (bVar1 < bVar3) {
      cVar2 = *pcVar10 - (bVar3 - bVar1);
      *pcVar10 = cVar2;
      local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,cVar2);
      *(byte *)(param_1 + 0x2e) = bVar1;
    }
  }
  uVar4 = fn_005fe128(param_1,0);
  uVar5 = fn_0020ddfc(param_1,0);
  uVar6 = fn_0020fd10(param_1,0);
  uVar7 = fn_00210174(param_1,0);
  uVar8 = fn_0020e628(param_1,0);
  local_30 = fn_0020e3a4(param_1,0);
  fn_00746230(param_1 + 0x1e,param_2,uVar4);
  fn_00746230(param_1 + 0x20,param_2 + 2,uVar5);
  fn_00746230(param_1 + 0x26,param_2 + 4,uVar6);
  fn_00746230(param_1 + 0x28,param_2 + 6,uVar7);
  fn_00746230(param_1 + 0x2a,param_2 + 8,uVar8);
  fn_00746230(param_1 + 0x2c,param_2 + 10,local_30);
  fn_00746230(param_1 + 0x3a,param_2 + 0xe,999);
  fn_0024f108(param_1,param_3);
  return;
}


