#include "0061de10_0061e728.h"



void fn_0061e728(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00654b60(param_1,param_2,param_4 + 0x180388,param_5,param_6,param_7,1);
  *puVar1 = &DAT_00859568;
  puVar1[0xb] = param_4;
  puVar1[0xc] = param_3;
  return;
}



void fn_0061e370(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort local_28;
  char local_25;
  ushort local_24;
  char local_21;
  undefined1 local_20;
  ushort auStack_1c [8];
  
  puVar3 = &local_28;
  (**(code **)(*param_1 + 8))(param_1);
  cVar1 = *(char *)(param_2 + 5);
  iVar2 = param_1[2] + cVar1 * 0x418;
  if (*(char *)(param_1[4] + (int)cVar1 + -0xc) != '\0') {
    fn_0064e18c(param_1,auStack_1c);
    puVar3 = auStack_1c;
    goto LAB_0061e4d0;
  }
  if (*(short *)(iVar2 + -0x3e00) != 0) {
    fn_0063b410(param_1,param_2);
    return;
  }
  if (*(char *)(iVar2 + -0x3fdd) < '\x01') {
    if (*(char *)(iVar2 + -0x3fdc) < '\x01') {
      if (*(char *)(iVar2 + -0x3fdb) < '\x01') {
        if ('\0' < *(char *)(iVar2 + -0x3fda)) {
          local_28 = 0x155;
          uVar4 = 0x15b;
          if ((*(char *)(iVar2 + -0x3f79) == '\x01') &&
             ((int)*(char *)(param_2 + 0x12) == *(char *)(param_2 + 0x13) + -1)) goto LAB_0061e514;
          goto LAB_0061e478;
        }
        if (*(char *)(iVar2 + -0x3fd9) < '\x01') {
          if (*(char *)(iVar2 + -0x3fd8) < '\x01') {
            fn_0061e5ec(param_1,param_2);
            return;
          }
          local_24 = 0x15d;
          if ((*(char *)(iVar2 + -0x3f77) != '\x01') ||
             ((int)*(char *)(param_2 + 0x12) != *(char *)(param_2 + 0x13) + -1)) {
            local_24 = 0x157;
          }
          local_20 = 0;
          local_21 = cVar1;
          fn_00656458(param_2,&local_24);
          return;
        }
        local_24 = 0x156;
        uVar4 = 0x15c;
        if ((*(char *)(iVar2 + -0x3f78) == '\x01') &&
           ((int)*(char *)(param_2 + 0x12) == *(char *)(param_2 + 0x13) + -1)) goto LAB_0061e55c;
      }
      else {
        local_24 = 0x154;
        uVar4 = 0x15a;
        if ((*(char *)(iVar2 + -0x3f7a) == '\x01') &&
           ((int)*(char *)(param_2 + 0x12) == *(char *)(param_2 + 0x13) + -1)) {
LAB_0061e55c:
          local_24 = uVar4;
        }
      }
      local_20 = 0;
      puVar3 = &local_24;
      local_21 = cVar1;
      goto LAB_0061e4d0;
    }
    local_28 = 0x153;
    uVar4 = 0x159;
    if ((*(char *)(iVar2 + -0x3f7b) == '\x01') &&
       ((int)*(char *)(param_2 + 0x12) == *(char *)(param_2 + 0x13) + -1)) goto LAB_0061e514;
  }
  else {
    local_28 = 0x152;
    uVar4 = 0x158;
    if ((*(char *)(iVar2 + -0x3f7c) == '\x01') &&
       ((int)*(char *)(param_2 + 0x12) == *(char *)(param_2 + 0x13) + -1)) {
LAB_0061e514:
      local_28 = uVar4;
    }
  }
LAB_0061e478:
  local_24 = local_24 & 0xff00;
  local_25 = cVar1;
LAB_0061e4d0:
  fn_00656458(param_2,puVar3);
  return;
}



void fn_0061e5ec(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  short local_24 [2];
  char local_20;
  
  iVar4 = fn_006f0a4c();
  fn_0019bc50(local_24,param_2 + 0xc);
  bVar1 = *(byte *)(param_2 + 0x14);
  cVar2 = *(char *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar5 = fn_006f0ac0(param_1,(int)local_24[0],*(undefined4 *)(param_1 + 0xc));
  cVar3 = *(char *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar6 = fn_00691e94((int)local_24[0]);
  if (((uVar6 ^ 1) & (int)cVar3) != 0 || ((bVar1 & iVar4 != 0) != 0 || (uVar5 & (int)cVar2) != 0)) {
    fn_0064dfdc(param_1,local_24,(int)*(char *)(param_2 + 0x12),(int)*(char *)(param_2 + 0x13),
                 iVar4);
    goto LAB_0061e714;
  }
  iVar4 = (int)local_20;
  if (iVar4 != 0) {
    uVar5 = fn_006925f4((int)local_24[0]);
    iVar4 = *(int *)(param_1 + 8) + iVar4 * 0x418;
    if (*(short *)(iVar4 + -0x4080) < 1) {
LAB_0061e6ec:
      uVar6 = 0;
    }
    else {
      cVar2 = *(char *)(iVar4 + -0x4019);
      bVar8 = cVar2 != '\0';
      if (!bVar8) {
        cVar2 = *(char *)(iVar4 + -0x400a);
      }
      if ((bVar8 || cVar2 != '\0') || (*(char *)(iVar4 + -0x4018) != '\0')) goto LAB_0061e6ec;
      uVar6 = 1;
    }
    if ((uVar5 ^ 1) == uVar6) goto LAB_0061e714;
  }
  uVar7 = fn_006f0a4c(param_1);
  local_20 = fn_0063b594(param_1,(int)local_24[0],uVar7);
LAB_0061e714:
  fn_00656458(param_2,local_24);
  return;
}



int fn_0061e1e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  puVar4 = (undefined4 *)fn_00650758(auStack_20,param_1,0,0);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  iVar6 = 0;
  if (iVar2 < iVar3) {
    do {
      iVar5 = fn_006f14a4(param_1,iVar2);
      if ((iVar5 != 0) && (iVar5 = fn_006506f4(&local_28,iVar5,iVar2), iVar5 != 0)) {
        iVar6 = iVar6 + 1;
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < iVar3);
    if (1 < iVar6) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_0061e284;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0061e284:
  return (int)cVar1;
}



int fn_0061e0d4(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 uVar7;
  int local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  uVar2 = fn_0063b21c(param_1,(int)*(char *)(param_1 + 4));
  iVar3 = fn_006f0ae4(param_1);
  iVar4 = fn_006f0a30(param_1);
  uVar1 = *param_2;
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  local_28 = fn_006f0aa4(param_1);
  uVar5 = fn_006f2df8(param_1);
  local_34 = (uVar2 & 0xff) << 0x10 | (uint)uVar1 | unaff_r10 & 0xff000000;
  local_2c = unaff_r11 & 0xffff0000 | local_28 & 0xff | (uVar5 & 0xff) << 8;
  local_38 = param_1;
  local_30 = uVar7;
  while( true ) {
    if (iVar4 <= iVar3) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar6 = fn_006f14a4(param_1,iVar3);
    if ((iVar6 != 0) && (iVar6 = fn_00651058(&local_38,iVar6,iVar3), iVar6 != 0)) break;
    iVar3 = (int)(char)((char)iVar3 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0061e004(int param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_r10;
  int local_28;
  uint local_24;
  undefined4 uStack_20;
  
  uVar1 = fn_0063b21c(param_1,(int)*(char *)(param_1 + 4));
  iVar2 = fn_006f0ae4(param_1);
  iVar3 = fn_006f0a30(param_1);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  local_24 = (uint)*param_2 | unaff_r10 & 0xff000000 | (uVar1 & 0xff) << 0x10;
  local_28 = param_1;
  while( true ) {
    if (iVar3 <= iVar2) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar4 = fn_006f14a4(param_1,iVar2);
    if ((iVar4 != 0) && (iVar4 = fn_00650158(&local_28,iVar4,iVar2), iVar4 != 0)) break;
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0061df94(int param_1,short *param_2,int param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x2c);
  if (((((int)(*pbVar4 - 1) < 0) || (sVar1 = (short)(*pbVar4 - 1), pbVar4[sVar1 * 0x266c + 4] != 1))
      || (iVar3 = fn_00692284((int)*(short *)(pbVar4 + sVar1 * 0x266c + 0x22)), *param_2 != iVar3))
     || (pbVar4[sVar1 * 0x266c + 0x24] != *(byte *)(param_1 + 4))) {
    cVar2 = *(char *)(param_3 + 3);
  }
  else {
    cVar2 = *(char *)(param_3 + 2);
  }
  return (int)cVar2;
}



undefined4 * fn_0061df88(undefined4 *param_1)

{
  *param_1 = &DAT_008595e8;
  return param_1;
}



void fn_0061df54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00654b60();
  *puVar1 = &DAT_00859538;
  return;
}



byte * fn_0061de10(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  short *psVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  
  bVar2 = false;
  iVar3 = (int)*(char *)(param_1 + 4);
  uVar8 = iVar3 - 0x10;
  bVar11 = 3 < uVar8;
  if (bVar11) {
    uVar8 = iVar3 - 0x18;
  }
  if ((((bVar11 && 3 < uVar8) && (iVar3 != 0x20 && iVar3 != 0x22)) &&
      (iVar3 = fn_006f1648(param_1), iVar3 - 0x20U < 2)) &&
     ((iVar9 = *(int *)(param_1 + 8), iVar3 = fn_006f1648(param_1),
      *(char *)(iVar9 + iVar3 * 8 + 0x4184) != '\0' &&
      (cVar1 = *(char *)(*(int *)(param_1 + 8) + 0xe8),
      (cVar1 == '\x03' || cVar1 == '\b') || cVar1 == '\t')))) {
    bVar2 = true;
  }
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar7 = pbVar4 + 0xc;
  if (*pbVar7 == 2) {
    pbVar4 = (byte *)(uint)*pbVar4;
  }
  if (*pbVar7 != 2 || pbVar4 != (byte *)0x0) {
    if (*(char *)(*(int *)(param_1 + 0x14) + 0x79) == '\0') {
      iVar10 = 0;
      iVar3 = fn_0065e3c4();
      iVar9 = 0;
      if (0 < iVar3) {
        do {
          psVar5 = (short *)fn_0065e56c(iVar9);
          if ((!bVar2) || (iVar6 = fn_0065e494((int)*psVar5,5), iVar6 != 0)) {
            local_28 = 0;
            local_26 = 0;
            local_25 = 0;
            local_24 = 0;
            iVar6 = fn_0063b53c(param_1,&local_28,psVar5);
            if (iVar6 == -0x80) goto LAB_0061df48;
            iVar10 = iVar10 + iVar6;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
      }
      pbVar7 = (byte *)fn_006553d0(iVar10);
      return pbVar7;
    }
LAB_0061df48:
    pbVar4 = (byte *)0x0;
  }
  return pbVar4;
}


