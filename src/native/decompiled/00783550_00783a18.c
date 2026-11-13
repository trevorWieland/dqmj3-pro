#include "00783550_00783a18.h"



undefined4 fn_00783a18(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  char **ppcVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  uint3 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  char **ppcVar11;
  uint uVar12;
  char cVar13;
  char **ppcVar14;
  char local_64 [12];
  char *local_58;
  char *local_54;
  char *local_50;
  
  uVar8 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    puVar3 = (uint *)(param_2 + 4);
    uVar4 = *(ushort *)puVar3;
    local_64[0] = *(char *)(param_2 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar12 = *puVar3;
    bVar6 = true;
    local_50 = (char *)0x0;
    cVar13 = '\0';
    local_58 = (char *)0x0;
    local_54 = (char *)0x0;
    iVar1 = (int)uVar12 >> 0x18;
    if (local_64[0] < *(char *)(param_2 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_64[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar9 = fn_006f14ec(param_1), iVar9 != 0)) {
          cVar5 = *(char *)(iVar9 + 0x5b + (param_3 & 0xff));
          if ((bVar6) || (cVar13 < cVar5)) {
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
            cVar13 = cVar5;
            pcVar10 = local_54;
            if (local_54 == local_50) {
              fn_0079aa0c(&local_58,local_54,local_64);
            }
            else {
joined_r0x00783b58:
              local_54 = pcVar10 + 1;
              if (pcVar10 != (char *)0x0) {
                *pcVar10 = local_64[0];
              }
            }
          }
          else if (cVar5 == cVar13) {
            pcVar10 = local_54;
            if (local_54 != local_50) goto joined_r0x00783b58;
            fn_0079aa0c(&local_58,local_54,local_64);
          }
        }
        local_64[0] = local_64[0] + '\x01';
      } while (local_64[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar11 = ppcVar2; (int)ppcVar11 < iVar1;
        ppcVar11 = (char **)(int)(char)((char)ppcVar11 + '\x01')) {
      ppcVar14 = &local_58;
      pcVar10 = local_58;
      while( true ) {
        if (pcVar10 != local_54) {
          ppcVar14 = (char **)(int)*pcVar10;
        }
        if (pcVar10 == local_54 || ppcVar14 == ppcVar11) break;
        pcVar10 = pcVar10 + 1;
      }
      if (pcVar10 == local_54) {
        uVar12 = uVar12 & 0xffff0000 |
                 uVar12 & 0xffff & ~(1 << ((int)ppcVar11 - (int)ppcVar2 & 0xffU));
      }
    }
    if ((*(char *)(param_2 + 8) == '\0') && ((uVar12 & 0xffff) != 0)) {
      *(short *)(param_2 + 4) = (short)uVar12;
      *(char *)(param_2 + 6) = (char)(uVar12 >> 0x10);
      *(char *)(param_2 + 7) = (char)(uVar12 >> 0x18);
      uVar8 = 1;
      *(undefined1 *)(param_2 + 8) = 0;
    }
    else {
      uVar8 = 0;
    }
    pcVar10 = local_58;
    if (local_54 < local_58) {
      do {
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != local_54);
    }
    fn_001008c4(local_58,(int)local_50 - (int)local_58,0);
  }
  return uVar8;
}



undefined4 fn_007837b4(undefined4 param_1,int param_2,undefined4 param_3)

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
          iVar3 = fn_006f4518(auStack_24);
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
            if (local_38 != local_34) goto joined_r0x007838dc;
LAB_0078391c:
            pcVar5 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_38;
            if (local_38 == local_34) goto LAB_0078391c;
joined_r0x007838dc:
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



undefined4 fn_00783550(undefined4 param_1,int param_2,undefined4 param_3)

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
          iVar3 = fn_006f403c(auStack_24);
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
            if (local_38 != local_34) goto joined_r0x00783678;
LAB_007836b8:
            pcVar5 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_38;
            if (local_38 == local_34) goto LAB_007836b8;
joined_r0x00783678:
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


