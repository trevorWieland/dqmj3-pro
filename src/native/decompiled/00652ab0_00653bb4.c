#include "00652ab0_00653bb4.h"



void fn_00653bb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_007848f4(param_1,param_4);
  return;
}



void fn_00653b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_007837b4(param_1,param_4);
  return;
}



undefined4 fn_00653ab4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = param_1;
  uVar5 = param_2;
  iVar1 = fn_00163c80(param_2);
  if ((iVar1 == 1) && (iVar1 = (int)*(char *)(param_1 + 1), iVar1 < *(char *)((int)param_1 + 5))) {
    do {
      iVar2 = fn_006f14a4(*param_1,iVar1);
      if (iVar2 != 0) {
        iVar3 = fn_006f1be0(*param_1,param_2,param_3,iVar1,1,0,puVar4,uVar5);
        iVar2 = fn_00176dc0(iVar2);
        if (((iVar2 * 10) / 100 < iVar3) && (iVar2 = fn_0069259c(param_2), iVar2 <= iVar3)) {
          return 1;
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    } while (iVar1 < *(char *)((int)param_1 + 5));
  }
  return 0;
}



void fn_00653980(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  fn_0064fbd4();
  iVar2 = fn_001cab7c((int)*(char *)(*(int *)(param_1 + 0xc) + 0x59));
  if (*(char *)(param_4 + 8) == '\0') {
    iVar4 = (int)*(char *)(param_4 + 6);
    uVar1 = *(undefined1 *)(param_4 + 8);
    uVar5 = *(uint *)(param_4 + 4);
    if (iVar4 < *(char *)(param_4 + 7)) {
      do {
        if (((uVar5 & 0xffff & 1 << (iVar4 - ((int)(uVar5 << 8) >> 0x18) & 0xffU)) != 0) &&
           ((iVar3 = fn_006f14ec(param_1,iVar4), iVar3 == 0 ||
            (iVar3 = fn_001cab7c((int)*(char *)(iVar3 + 0x59)), iVar3 != iVar2)))) {
          uVar5 = uVar5 & 0xffff0000 |
                  uVar5 & 0xffff & ~(1 << (iVar4 - ((int)(uVar5 << 8) >> 0x18) & 0xffU));
        }
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      } while (iVar4 < (int)uVar5 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar5 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar5;
      *(char *)(param_4 + 6) = (char)(uVar5 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar5 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar1;
      fn_00784194(param_1,param_4);
      fn_007837b4(param_1,param_4);
    }
  }
  return;
}



void fn_0065395c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00783080(param_1,param_4);
  return;
}



void fn_00653928(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00783a18(param_1,param_4,1);
  fn_00782e1c(param_1,param_4);
  return;
}



undefined4 fn_006536f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_00163a00(param_2);
  if ((uVar1 == *(byte *)(param_1 + 1)) &&
     (iVar3 = (int)*(char *)((int)param_1 + 5), iVar3 < *(char *)((int)param_1 + 6))) {
    do {
      iVar2 = fn_006f14a4(*param_1,iVar3);
      if ((iVar2 != 0) && (iVar2 = fn_0064fed4(*param_1,param_2,param_3,iVar3), iVar2 != 0)) {
        return 1;
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < *(char *)((int)param_1 + 6));
  }
  return 0;
}



void fn_0065366c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00783a18(param_1,param_4,1);
  fn_00784194(param_1,param_4);
  fn_007837b4(param_1,param_4);
  return;
}



undefined4 fn_006535e8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 4);
  bVar5 = *(char *)(param_1 + 0xd) != '\0';
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_2 + 0x9d);
  }
  if ((!bVar5 || cVar1 == '\0') || cVar1 < '\0') {
    iVar2 = fn_00176dc0(param_2);
    iVar4 = fn_00300f74(iVar2 * iVar4,uVar3);
    if ((*(short *)(param_2 + 0x1c) <= iVar4) &&
       (*(char *)((uint)*(byte *)(param_1 + 0xc) + param_2 + 0x5b) < '\x01')) {
      return 1;
    }
  }
  return 0;
}



bool fn_006535c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_0063b188(*param_1,(int)*(short *)(param_1 + 1),param_3,param_1[2]);
  return iVar1 != 0;
}



void fn_006534a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  fn_0064fbd4();
  iVar2 = fn_001cab7c((int)*(char *)(*(int *)(param_1 + 0xc) + 0x59));
  if (*(char *)(param_4 + 8) == '\0') {
    iVar4 = (int)*(char *)(param_4 + 6);
    uVar1 = *(undefined1 *)(param_4 + 8);
    uVar5 = *(uint *)(param_4 + 4);
    if (iVar4 < *(char *)(param_4 + 7)) {
      do {
        if (((uVar5 & 0xffff & 1 << (iVar4 - ((int)(uVar5 << 8) >> 0x18) & 0xffU)) != 0) &&
           ((iVar3 = fn_006f14ec(param_1,iVar4), iVar3 == 0 ||
            (iVar3 = fn_001cab7c((int)*(char *)(iVar3 + 0x59)), iVar3 != iVar2)))) {
          uVar5 = uVar5 & 0xffff0000 |
                  uVar5 & 0xffff & ~(1 << (iVar4 - ((int)(uVar5 << 8) >> 0x18) & 0xffU));
        }
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      } while (iVar4 < (int)uVar5 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar5 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar5;
      *(char *)(param_4 + 6) = (char)(uVar5 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar5 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar1;
      fn_00782e1c(param_1,param_4);
    }
  }
  return;
}



bool fn_00652e4c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f3da8(param_2);
  return *param_1 <= iVar1;
}



undefined4 fn_00652ab0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  char **ppcVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  uint3 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char **ppcVar11;
  int iVar12;
  uint uVar13;
  uint unaff_r7;
  int iVar14;
  char **ppcVar15;
  char local_80 [16];
  int local_70;
  uint local_68;
  char *local_5c;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 local_3c;
  
  fn_0064fbd4();
  bVar3 = *(byte *)(param_1 + 4);
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar4 = *(ushort *)puVar2;
    local_80[0] = *(char *)(param_4 + 6);
    uVar6 = *(uint3 *)puVar2;
    uVar13 = *puVar2;
    local_68 = (uint)*(byte *)(param_4 + 8) | param_2 << 0x10;
    local_5c = (char *)0x0;
    local_58 = (char *)0x0;
    bVar5 = true;
    local_70 = 0;
    local_54 = (char *)0x0;
    iVar12 = (int)uVar13 >> 0x18;
    if (local_80[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_80[0] - ((int)((uint)uVar6 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar7 = fn_006f14ec(param_1), iVar7 != 0)) {
          iVar8 = (int)local_80[0];
          iVar7 = (int)((uint)bVar3 | unaff_r7 & 0xff00 | param_2 << 0x10) >> 0x10;
          iVar14 = (int)(char)bVar3;
          iVar9 = fn_006f1be0(param_1,iVar7,iVar14,iVar8,1,0);
          fn_00655a88(&local_50);
          fn_006558e4(&local_50,iVar7,iVar14,iVar8,*(int *)(param_1 + 0x10) + 0x20,
                       *(undefined4 *)(param_1 + 8),0);
          fn_0061fd6c(iVar7,iVar14,iVar8,*(undefined4 *)(param_1 + 8),local_50,uStack_4c,uStack_48,
                       uStack_44,&local_40);
          iVar7 = fn_00300f74(local_40 * iVar9,local_3c);
          if ((bVar5) || (local_70 < iVar7)) {
            bVar5 = false;
            if (local_5c != local_58) {
              pcVar10 = local_5c;
              if (local_58 < local_5c) {
                do {
                  pcVar10 = pcVar10 + 1;
                } while (pcVar10 != local_58);
              }
              local_58 = local_5c;
            }
            local_70 = iVar7;
            pcVar10 = local_58;
            if (local_58 != local_54) goto joined_r0x00652cac;
LAB_00652cec:
            fn_0079aa0c(&local_5c,local_58,local_80);
          }
          else if (iVar7 == local_70) {
            pcVar10 = local_58;
            if (local_58 == local_54) goto LAB_00652cec;
joined_r0x00652cac:
            local_58 = pcVar10 + 1;
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = local_80[0];
            }
          }
        }
        local_80[0] = local_80[0] + '\x01';
      } while (local_80[0] < iVar12);
    }
    ppcVar1 = (char **)((int)((uint)uVar6 << 8) >> 0x18);
    for (ppcVar11 = ppcVar1; (int)ppcVar11 < iVar12;
        ppcVar11 = (char **)(int)(char)((char)ppcVar11 + '\x01')) {
      ppcVar15 = &local_5c;
      pcVar10 = local_5c;
      while( true ) {
        if (pcVar10 != local_58) {
          ppcVar15 = (char **)(int)*pcVar10;
        }
        if (pcVar10 == local_58 || ppcVar15 == ppcVar11) break;
        pcVar10 = pcVar10 + 1;
      }
      if (pcVar10 == local_58) {
        uVar13 = uVar13 & 0xffff0000 |
                 uVar13 & 0xffff & ~(1 << ((int)ppcVar11 - (int)ppcVar1 & 0xffU));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar13 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar13;
      *(char *)(param_4 + 6) = (char)(uVar13 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar13 >> 0x18);
      bVar5 = true;
      *(char *)(param_4 + 8) = (char)local_68;
    }
    else {
      bVar5 = false;
    }
    pcVar10 = local_5c;
    if (local_58 < local_5c) {
      do {
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != local_58);
    }
    fn_001008c4(local_5c,(int)local_54 - (int)local_5c,0);
    if (((bVar5) && (iVar12 = fn_00783a18(param_1,param_4,1), iVar12 != 0)) &&
       (iVar12 = fn_00784194(param_1,param_4), iVar12 != 0)) {
      return 1;
    }
  }
  return 0;
}


