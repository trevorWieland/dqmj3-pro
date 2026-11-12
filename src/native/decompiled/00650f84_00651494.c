#include "00650f84_00651494.h"



void fn_00651494(int param_1,short param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  ushort uVar4;
  bool bVar5;
  uint3 uVar6;
  int iVar7;
  char *pcVar8;
  char **ppcVar9;
  uint uVar10;
  char **ppcVar11;
  undefined4 uVar12;
  uint unaff_r8;
  int iVar13;
  char local_6c [12];
  char *local_60;
  char *local_5c;
  char *local_58;
  uint local_3c;
  
  fn_0064fbd4();
  uVar12 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(param_4 + 8) == '\0') {
    puVar3 = (uint *)(param_4 + 4);
    uVar4 = *(ushort *)puVar3;
    local_6c[0] = *(char *)(param_4 + 6);
    uVar6 = *(uint3 *)puVar3;
    uVar10 = *puVar3;
    local_3c = unaff_r8 & 0xffff0000 | (uint)*(byte *)(param_4 + 8);
    bVar5 = true;
    local_58 = (char *)0x0;
    iVar13 = 0;
    local_60 = (char *)0x0;
    local_5c = (char *)0x0;
    iVar1 = (int)uVar10 >> 0x18;
    if (local_6c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_6c[0] - ((int)((uint)uVar6 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar7 = fn_006f14ec(param_1), iVar7 != 0)) {
          iVar7 = fn_006f1710(param_1,(int)param_2,uVar12);
          if ((bVar5) || (iVar7 < iVar13)) {
            bVar5 = false;
            if (local_60 != local_5c) {
              pcVar8 = local_60;
              if (local_5c < local_60) {
                do {
                  pcVar8 = pcVar8 + 1;
                } while (pcVar8 != local_5c);
              }
              local_5c = local_60;
            }
            iVar13 = iVar7;
            pcVar8 = local_5c;
            if (local_5c != local_58) goto joined_r0x006515f0;
LAB_00651630:
            fn_0079aa0c(&local_60,local_5c,local_6c);
          }
          else if (iVar7 == iVar13) {
            pcVar8 = local_5c;
            if (local_5c == local_58) goto LAB_00651630;
joined_r0x006515f0:
            local_5c = pcVar8 + 1;
            if (pcVar8 != (char *)0x0) {
              *pcVar8 = local_6c[0];
            }
          }
        }
        local_6c[0] = local_6c[0] + '\x01';
      } while (local_6c[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar6 << 8) >> 0x18);
    for (ppcVar9 = ppcVar2; (int)ppcVar9 < iVar1;
        ppcVar9 = (char **)(int)(char)((char)ppcVar9 + '\x01')) {
      ppcVar11 = &local_60;
      pcVar8 = local_60;
      while( true ) {
        if (pcVar8 != local_5c) {
          ppcVar11 = (char **)(int)*pcVar8;
        }
        if (pcVar8 == local_5c || ppcVar11 == ppcVar9) break;
        pcVar8 = pcVar8 + 1;
      }
      if (pcVar8 == local_5c) {
        uVar10 = uVar10 & 0xffff0000 |
                 uVar10 & 0xffff & ~(1 << ((int)ppcVar9 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar10 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar10;
      *(char *)(param_4 + 6) = (char)(uVar10 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar10 >> 0x18);
      *(char *)(param_4 + 8) = (char)local_3c;
    }
    pcVar8 = local_60;
    if (local_5c < local_60) {
      do {
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 != local_5c);
    }
    fn_001008c4(local_60,(int)local_58 - (int)local_60,0);
  }
  return;
}



void fn_00651208(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  uint3 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  char *local_38;
  char *local_34;
  char *local_30;
  char local_2c [4];
  undefined4 local_28;
  
  fn_0064f714();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar4 = *(ushort *)puVar2;
    local_2c[0] = *(char *)(param_4 + 6);
    uVar6 = *(uint3 *)puVar2;
    uVar3 = *(undefined1 *)(param_4 + 8);
    uVar12 = *puVar2;
    bVar5 = true;
    iVar13 = 0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    iVar1 = (int)uVar12 >> 0x18;
    local_28 = param_1;
    if (local_2c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_2c[0] - ((int)((uint)uVar6 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar7 = fn_006f14ec(local_28), iVar7 != 0)) {
          iVar8 = fn_006f4520();
          iVar9 = fn_006f2fa8(iVar7);
          iVar10 = fn_006f4044(iVar7);
          iVar7 = fn_006f3f7c(iVar7);
          iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
          if ((bVar5) || (iVar7 < iVar13)) {
            bVar5 = false;
            if (local_38 != local_34) {
              pcVar11 = local_38;
              if (local_34 < local_38) {
                do {
                  pcVar11 = pcVar11 + 1;
                } while (pcVar11 != local_34);
              }
              local_34 = local_38;
            }
            iVar13 = iVar7;
            pcVar11 = local_34;
            if (local_34 != local_30) goto joined_r0x00651364;
LAB_006513a4:
            fn_0079aa0c(&local_38,local_34,local_2c);
          }
          else if (iVar7 == iVar13) {
            pcVar11 = local_34;
            if (local_34 == local_30) goto LAB_006513a4;
joined_r0x00651364:
            local_34 = pcVar11 + 1;
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = local_2c[0];
            }
          }
        }
        local_2c[0] = local_2c[0] + '\x01';
      } while (local_2c[0] < iVar1);
    }
    iVar7 = (int)((uint)uVar6 << 8) >> 0x18;
    for (iVar8 = iVar7; iVar8 < iVar1; iVar8 = (int)(char)((char)iVar8 + '\x01')) {
      pcVar11 = local_38;
      while( true ) {
        if (pcVar11 != local_34) {
          iVar13 = (int)*pcVar11;
        }
        if (pcVar11 == local_34 || iVar13 == iVar8) break;
        pcVar11 = pcVar11 + 1;
      }
      if (pcVar11 == local_34) {
        uVar12 = uVar12 & 0xffff0000 | uVar12 & 0xffff & ~(1 << (iVar8 - iVar7 & 0xffU));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar12 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar12;
      *(char *)(param_4 + 6) = (char)(uVar12 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar12 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar3;
    }
    pcVar11 = local_38;
    if (local_34 < local_38) {
      do {
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != local_34);
    }
    fn_001008c4(local_38,(int)local_30 - (int)local_38,0);
  }
  return;
}



int fn_006511c8(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = fn_006f4520(param_2);
  sVar1 = *(short *)(param_2 + 0x1c);
  iVar3 = fn_006f2fa8(param_2);
  iVar4 = fn_006f4044(param_2);
  iVar5 = fn_006f3f7c(param_2);
  return iVar5 + iVar2 + sVar1 * 2 + iVar3 + iVar4;
}



undefined4 fn_00651194(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f31f4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7c) < '\x01')) {
    return 0;
  }
  return 1;
}



undefined4 fn_00651160(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f34d4(param_2);
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x7f) < '\x01')) {
    return 0;
  }
  return 1;
}



bool fn_00651144(int param_1,int param_2)

{
  return *(short *)(param_2 + 0x280) == *(short *)(param_1 + 4);
}



undefined4 fn_00651058(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  cVar2 = *(char *)((int)param_1 + 6);
  iVar4 = fn_0063b21c(*param_1,param_3);
  if ((cVar2 < iVar4) &&
     (iVar4 = fn_0063b188(*param_1,(int)*(short *)(param_1 + 1),param_3,param_1[2]), iVar4 != 0)) {
    uVar1 = *(ushort *)(param_1 + 1);
    cVar3 = *(char *)((int)param_1 + 0xd);
    uVar6 = *param_1;
    for (cVar2 = *(char *)(param_1 + 3); iVar4 = (int)cVar2, iVar4 < cVar3; cVar2 = cVar2 + '\x01')
    {
      iVar5 = fn_006f14a4(uVar6,iVar4);
      if ((iVar5 != 0) &&
         (iVar4 = fn_006f1a78(uVar6,(int)(short)uVar1,
                               (int)(((uint)uVar1 | (param_3 & 0xff) << 0x10) << 8) >> 0x18,iVar4,0,
                               2), iVar4 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



int fn_00650f84(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  sVar2 = fn_0064d364();
  sVar1 = *(short *)(param_5 + 0x1c);
  iVar3 = fn_00176dc0(param_5);
  iVar3 = ((int)sVar1 + (int)sVar2) - iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 * 2;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar4 == 0) {
    uVar6 = 0x14;
  }
  else {
    uVar6 = 0x10;
  }
  iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar4 == 0) {
    uVar5 = 0x18;
  }
  else {
    uVar5 = 0x14;
  }
  if (uVar6 < uVar5) {
    do {
      if ((uVar6 != param_4) && (iVar4 = fn_006f14a4(param_1,uVar6), iVar4 != 0)) {
        sVar1 = *(short *)(iVar4 + 0x1c);
        iVar4 = fn_00176dc0();
        iVar4 = sVar1 - iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 * 2;
        }
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        iVar3 = iVar3 + iVar4;
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
      iVar4 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar4 == 0) {
        iVar4 = 0x18;
      }
      else {
        iVar4 = 0x14;
      }
    } while ((int)uVar6 < iVar4);
  }
  return iVar3;
}


