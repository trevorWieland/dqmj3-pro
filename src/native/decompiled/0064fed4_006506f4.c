#include "0064fed4_006506f4.h"



undefined4 fn_006506f4(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *param_1;
  iVar2 = param_1[1];
  cVar1 = *(char *)((int)param_1 + 6);
  iVar3 = fn_0063b21c(iVar4,param_3);
  if ((iVar3 <= (char)iVar2) && ((cVar1 == '\0' || (*(char *)(iVar4 + 4) != param_3)))) {
    bVar5 = *(char *)((int)param_1 + 5) == '\0';
    cVar1 = '\0';
    if (!bVar5) {
      cVar1 = *(char *)(param_2 + 0x85);
    }
    if (bVar5 || cVar1 < '\x01') {
      return 0;
    }
  }
  return 1;
}



bool fn_006506c8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00620708(param_3,*(undefined4 *)(*param_1 + 8));
  return *(short *)(param_2 + 0x1c) <= iVar1;
}



void fn_00650424(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint3 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char *local_38;
  char *local_34;
  char *local_30;
  char local_2c [4];
  undefined4 local_28;
  
  fn_0064f714();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar5 = *(ushort *)puVar2;
    local_2c[0] = *(char *)(param_4 + 6);
    uVar7 = *(uint3 *)puVar2;
    uVar3 = *(undefined1 *)(param_4 + 8);
    uVar14 = *puVar2;
    bVar6 = true;
    uVar15 = 0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    iVar1 = (int)uVar14 >> 0x18;
    local_28 = param_1;
    if (local_2c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_2c[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar8 = fn_006f14ec(local_28), iVar8 != 0)) {
          uVar12 = (uint)*(byte *)(iVar8 + 0x3a4);
          bVar4 = *(byte *)(iVar8 + 0x3a5);
          iVar13 = 0;
          iVar16 = 0xc;
          pbVar11 = (byte *)(iVar8 + 0x3a4);
          do {
            uVar12 = uVar12 + bVar4;
            bVar4 = pbVar11[3];
            iVar16 = iVar16 + -1;
            iVar13 = iVar13 + (uint)pbVar11[2];
            pbVar11 = pbVar11 + 2;
          } while (iVar16 != 0);
          uVar12 = uVar12 + iVar13 + (uint)*(byte *)(iVar8 + 0x3bd);
          if ((bVar6) || ((int)uVar12 < (int)uVar15)) {
            bVar6 = false;
            if (local_38 != local_34) {
              pcVar9 = local_38;
              if (local_34 < local_38) {
                do {
                  pcVar9 = pcVar9 + 1;
                } while (pcVar9 != local_34);
              }
              local_34 = local_38;
            }
            uVar15 = uVar12;
            pcVar9 = local_34;
            if (local_34 == local_30) {
              fn_0079aa0c(&local_38,local_34,local_2c);
            }
            else {
joined_r0x00650588:
              local_34 = pcVar9 + 1;
              if (pcVar9 != (char *)0x0) {
                *pcVar9 = local_2c[0];
              }
            }
          }
          else if (uVar12 == uVar15) {
            pcVar9 = local_34;
            if (local_34 != local_30) goto joined_r0x00650588;
            fn_0079aa0c(&local_38,local_34,local_2c);
          }
        }
        local_2c[0] = local_2c[0] + '\x01';
      } while (local_2c[0] < iVar1);
    }
    uVar12 = (int)((uint)uVar7 << 8) >> 0x18;
    for (uVar10 = uVar12; (int)uVar10 < iVar1; uVar10 = (uint)(char)((char)uVar10 + '\x01')) {
      pcVar9 = local_38;
      while( true ) {
        if (pcVar9 != local_34) {
          uVar15 = (uint)*pcVar9;
        }
        if (pcVar9 == local_34 || uVar15 == uVar10) break;
        pcVar9 = pcVar9 + 1;
      }
      if (pcVar9 == local_34) {
        uVar15 = uVar14 & 0xffff;
        uVar14 = uVar14 & 0xffff0000 | uVar15 & ~(1 << (uVar10 - uVar12 & 0xff));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar14 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar14;
      *(char *)(param_4 + 6) = (char)(uVar14 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar14 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar3;
    }
    pcVar9 = local_38;
    if (local_34 < local_38) {
      do {
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 != local_34);
    }
    fn_001008c4(local_38,(int)local_30 - (int)local_38,0);
  }
  return;
}



int fn_006503e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f4520(param_2);
  iVar2 = fn_006f2fa8(param_2);
  iVar3 = fn_006f4044(param_2);
  iVar4 = fn_006f3f7c(param_2);
  return iVar4 + iVar1 + iVar2 + iVar3;
}



undefined4 fn_00650334(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      iVar3 = (int)*(short *)((byte *)(param_2 + 0x120) + iVar2 * 2 + 4);
      iVar1 = fn_006925f4(iVar3);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = fn_006919b0(iVar3,0x30);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = (int)*(short *)(param_2 + 0x284 + iVar2 * 2);
    if (0x21e < iVar1 - 1U) {
      return 0;
    }
    if (iVar1 == 0xb9) break;
    iVar2 = iVar2 + 1;
    if (0x4b < iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00650268(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar2 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      iVar3 = (int)*(short *)((byte *)(param_2 + 0x120) + iVar2 * 2 + 4);
      iVar1 = fn_00691d5c(iVar3);
      if ((iVar1 == 4) && (iVar1 = fn_006924f4(iVar3), iVar1 != 0)) {
        return 1;
      }
      iVar1 = fn_001639e4(iVar3);
      if (iVar1 == 0x12) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = (int)*(short *)(param_2 + 0x284 + iVar2 * 2);
    if (0x21e < iVar1 - 1U) {
      return 0;
    }
    bVar4 = iVar1 == 0x93;
    bVar5 = iVar1 == 0xb7;
    if (!bVar4 && !bVar5) {
      iVar1 = iVar1 + 99;
    }
    if ((bVar4 || bVar5) || iVar1 == 0x200) break;
    iVar2 = iVar2 + 1;
    if (0x4b < iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00650218(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0xc) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_2 + 0x9d);
  }
  if (!bVar3 || cVar1 < '\x01') {
    iVar2 = fn_00176dc0(param_2);
    iVar2 = fn_00300f74(iVar2 * *(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (*(short *)(param_2 + 0x1c) <= iVar2) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006501c8(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x67) == '\0') {
    cVar1 = *(char *)(param_2 + 0x61);
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_2 + 0x62);
    }
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_2 + 99);
      if (cVar1 < '\x01') {
        cVar1 = *(char *)(param_2 + 100);
      }
      if ((cVar1 < '\x01') && (*(char *)(param_2 + 0x87) < '\x01')) {
        return 0;
      }
    }
  }
  return 1;
}



bool fn_006501a4(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = fn_001cab7c((int)*(char *)(param_2 + 0x59));
  return uVar1 == *param_1;
}



undefined4 fn_00650158(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)((int)param_1 + 6);
  iVar2 = fn_0063b21c(*param_1,param_3);
  if ((cVar1 < iVar2) &&
     (iVar2 = fn_0063b188(*param_1,(int)*(short *)(param_1 + 1),param_3,param_1[2]), iVar2 != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 *
fn_0064ff88(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined2 param_5)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_5;
  uVar1 = fn_006f14ec(param_2,param_4);
  param_1[2] = uVar1;
  return param_1;
}



undefined4 fn_0064fed4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_006f14a4(param_1,param_4);
  iVar2 = fn_006f1be0(param_1,param_2,param_3,param_4,1,0);
  if ((iVar2 < 1) || (iVar3 = fn_00176dc0(uVar1), iVar2 <= (iVar3 * 10) / 100)) {
    return 0;
  }
  return 1;
}


