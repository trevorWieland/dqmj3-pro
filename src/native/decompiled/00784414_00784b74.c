#include "00784414_00784b74.h"



undefined4 fn_00784b74(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_40 [4];
  char *local_3c;
  char *local_38;
  char *local_34;
  undefined *local_30;
  short local_2c;
  char local_2a;
  char local_29;
  undefined1 local_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar2 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    bVar1 = true;
    iVar6 = 0;
    local_30 = &DAT_008595d8;
    local_2c = *(short *)(param_2 + 4);
    local_40[0] = *(char *)(param_2 + 6);
    local_29 = *(char *)(param_2 + 7);
    pcVar5 = (char *)(int)local_29;
    local_28 = *(undefined1 *)(param_2 + 8);
    local_38 = (char *)0x0;
    local_3c = (char *)0x0;
    local_34 = (char *)0x0;
    local_2a = local_40[0];
    uStack_20 = param_1;
    iStack_1c = param_2;
    uStack_18 = param_3;
    if ((int)local_40[0] < (int)pcVar5) {
      do {
        iVar3 = fn_006f0a88(&local_30,(int)local_40[0]);
        if ((iVar3 != 0) && (iVar3 = fn_006f14ec(param_1,(int)local_40[0]), iVar3 != 0)) {
          pcVar5 = (char *)(int)local_40[0];
          iVar3 = fn_0064fb64(auStack_24);
          if ((bVar1) || (iVar6 < iVar3)) {
            bVar1 = false;
            if (local_3c != local_38) {
              pcVar5 = local_3c;
              if (local_38 <= local_3c) {
                for (; pcVar5 != local_38; pcVar5 = pcVar5 + 1) {
                }
              }
              local_38 = local_3c;
            }
            iVar6 = iVar3;
            pcVar7 = local_38;
            if (local_38 != local_34) goto joined_r0x00784c9c;
LAB_00784cdc:
            pcVar5 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_38;
            if (local_38 == local_34) goto LAB_00784cdc;
joined_r0x00784c9c:
            local_38 = pcVar7 + 1;
            pcVar5 = local_34;
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = local_40[0];
            }
          }
        }
        local_40[0] = local_40[0] + '\x01';
      } while (local_40[0] < local_29);
    }
    pcVar7 = (char *)(int)local_2a;
    if ((int)pcVar7 < (int)local_29) {
      do {
        pcVar4 = local_3c;
        while( true ) {
          if (pcVar4 != local_38) {
            pcVar5 = (char *)(int)*pcVar4;
          }
          if (pcVar4 == local_38 || pcVar5 == pcVar7) break;
          pcVar4 = pcVar4 + 1;
        }
        if (pcVar4 == local_38) {
          fn_0063b148(&local_30,pcVar7);
        }
        pcVar7 = (char *)(int)(char)((char)pcVar7 + '\x01');
      } while ((int)pcVar7 < (int)local_29);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_2c != 0)) {
      *(short *)(param_2 + 4) = local_2c;
      uVar2 = 1;
      *(char *)(param_2 + 6) = local_2a;
      *(char *)(param_2 + 7) = local_29;
      *(undefined1 *)(param_2 + 8) = local_28;
    }
    else {
      uVar2 = 0;
    }
    pcVar5 = local_3c;
    if (local_38 < local_3c) {
      do {
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c,0);
  }
  return uVar2;
}



undefined4 fn_007848f4(undefined4 param_1,int param_2)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  uint3 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char **ppcVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  char **ppcVar15;
  char local_60;
  char *local_58;
  char *local_54;
  char *local_50;
  
  uVar12 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    puVar3 = (uint *)(param_2 + 4);
    uVar5 = *(ushort *)puVar3;
    local_60 = *(char *)(param_2 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar4 = *(undefined1 *)(param_2 + 8);
    uVar13 = *puVar3;
    bVar6 = true;
    iVar14 = 0;
    local_58 = (char *)0x0;
    local_54 = (char *)0x0;
    local_50 = (char *)0x0;
    iVar1 = (int)uVar13 >> 0x18;
    if (local_60 < *(char *)(param_2 + 7)) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_60 - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) != 0)
           && (iVar8 = fn_006f14ec(param_1), iVar8 != 0)) {
          iVar9 = fn_006f2fa8();
          iVar8 = (int)*(short *)(iVar8 + 0x1c) + iVar9 * 2;
          if ((bVar6) || (iVar14 < iVar8)) {
            bVar6 = false;
            if (local_58 != local_54) {
              pcVar10 = local_58;
              if (local_54 < local_58) {
                do {
                  pcVar10 = pcVar10 + 1;
                } while (pcVar10 != local_54);
              }
              local_54 = local_58;
            }
            iVar14 = iVar8;
            pcVar10 = local_54;
            if (local_54 != local_50) goto joined_r0x00784a2c;
LAB_00784a74:
            fn_0079aa0c(&local_58);
          }
          else if (iVar8 == iVar14) {
            pcVar10 = local_54;
            if (local_54 == local_50) goto LAB_00784a74;
joined_r0x00784a2c:
            local_54 = pcVar10 + 1;
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = local_60;
            }
          }
        }
        local_60 = local_60 + '\x01';
      } while (local_60 < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar11 = ppcVar2; (int)ppcVar11 < iVar1;
        ppcVar11 = (char **)(int)(char)((char)ppcVar11 + '\x01')) {
      ppcVar15 = &local_58;
      pcVar10 = local_58;
      while( true ) {
        if (pcVar10 != local_54) {
          ppcVar15 = (char **)(int)*pcVar10;
        }
        if (pcVar10 == local_54 || ppcVar15 == ppcVar11) break;
        pcVar10 = pcVar10 + 1;
      }
      if (pcVar10 == local_54) {
        uVar13 = uVar13 & 0xffff0000 |
                 uVar13 & 0xffff & ~(1 << ((int)ppcVar11 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar13 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar13;
      *(char *)(param_2 + 6) = (char)(uVar13 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar13 >> 0x18);
      uVar12 = 1;
      *(undefined1 *)(param_2 + 8) = uVar4;
    }
    else {
      uVar12 = 0;
    }
    pcVar10 = local_58;
    if (local_54 < local_58) {
      do {
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != local_54);
    }
    fn_001008c4(local_58,(int)local_50 - (int)local_58,0);
  }
  return uVar12;
}



undefined4 fn_00784414(undefined4 param_1,int param_2)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  uint3 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char **ppcVar12;
  uint uVar13;
  int iVar14;
  char **ppcVar15;
  char local_60 [8];
  char *local_58;
  char *local_54;
  char *local_50;
  undefined4 local_40;
  
  uVar8 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    puVar3 = (uint *)(param_2 + 4);
    uVar5 = *(ushort *)puVar3;
    local_60[0] = *(char *)(param_2 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar4 = *(undefined1 *)(param_2 + 8);
    uVar13 = *puVar3;
    bVar6 = true;
    iVar14 = 0;
    local_58 = (char *)0x0;
    local_54 = (char *)0x0;
    local_50 = (char *)0x0;
    iVar1 = (int)uVar13 >> 0x18;
    local_40 = param_1;
    if (local_60[0] < *(char *)(param_2 + 7)) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_60[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar9 = fn_006f14ec(local_40), iVar9 != 0)) {
          iVar10 = fn_006f2fa8();
          iVar9 = fn_00176dc0(iVar9);
          iVar10 = iVar10 + iVar9 * 2;
          if ((bVar6) || (iVar14 < iVar10)) {
            bVar6 = false;
            if (local_58 != local_54) {
              pcVar11 = local_58;
              if (local_54 < local_58) {
                do {
                  pcVar11 = pcVar11 + 1;
                } while (pcVar11 != local_54);
              }
              local_54 = local_58;
            }
            iVar14 = iVar10;
            pcVar11 = local_54;
            if (local_54 != local_50) goto joined_r0x00784550;
LAB_00784590:
            fn_0079aa0c(&local_58,local_54,local_60);
          }
          else if (iVar10 == iVar14) {
            pcVar11 = local_54;
            if (local_54 == local_50) goto LAB_00784590;
joined_r0x00784550:
            local_54 = pcVar11 + 1;
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = local_60[0];
            }
          }
        }
        local_60[0] = local_60[0] + '\x01';
      } while (local_60[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar12 = ppcVar2; (int)ppcVar12 < iVar1;
        ppcVar12 = (char **)(int)(char)((char)ppcVar12 + '\x01')) {
      ppcVar15 = &local_58;
      pcVar11 = local_58;
      while( true ) {
        if (pcVar11 != local_54) {
          ppcVar15 = (char **)(int)*pcVar11;
        }
        if (pcVar11 == local_54 || ppcVar15 == ppcVar12) break;
        pcVar11 = pcVar11 + 1;
      }
      if (pcVar11 == local_54) {
        uVar13 = uVar13 & 0xffff0000 |
                 uVar13 & 0xffff & ~(1 << ((int)ppcVar12 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar13 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar13;
      *(char *)(param_2 + 6) = (char)(uVar13 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar13 >> 0x18);
      uVar8 = 1;
      *(undefined1 *)(param_2 + 8) = uVar4;
    }
    else {
      uVar8 = 0;
    }
    pcVar11 = local_58;
    if (local_54 < local_58) {
      do {
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != local_54);
    }
    fn_001008c4(local_58,(int)local_50 - (int)local_58,0);
  }
  return uVar8;
}


