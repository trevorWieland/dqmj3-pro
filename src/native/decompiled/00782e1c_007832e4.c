#include "00782e1c_007832e4.h"



undefined4 fn_007832e4(undefined4 param_1,int param_2)

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
  char **ppcVar10;
  char *pcVar11;
  char **ppcVar12;
  uint uVar13;
  int iVar14;
  char *local_30;
  char *local_2c;
  char *local_28;
  char local_24 [4];
  
  uVar8 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    puVar3 = (uint *)(param_2 + 4);
    uVar5 = *(ushort *)puVar3;
    local_24[0] = *(char *)(param_2 + 6);
    uVar7 = *(uint3 *)puVar3;
    uVar4 = *(undefined1 *)(param_2 + 8);
    uVar13 = *puVar3;
    ppcVar12 = (char **)(int)*(char *)(param_2 + 7);
    bVar6 = true;
    iVar14 = 0;
    local_30 = (char *)0x0;
    local_2c = (char *)0x0;
    local_28 = (char *)0x0;
    iVar1 = (int)uVar13 >> 0x18;
    if ((int)local_24[0] < (int)ppcVar12) {
      do {
        if ((((uint)uVar5 & 1 << ((int)local_24[0] - ((int)((uint)uVar7 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar9 = fn_006f14ec(param_1), iVar9 != 0)) {
          iVar9 = fn_00176dc0();
          if ((bVar6) || (iVar14 < iVar9)) {
            bVar6 = false;
            if (local_30 != local_2c) {
              pcVar11 = local_30;
              if (local_2c <= local_30) {
                for (; pcVar11 != local_2c; pcVar11 = pcVar11 + 1) {
                }
              }
              local_2c = local_30;
            }
            iVar14 = iVar9;
            pcVar11 = local_2c;
            if (local_2c != local_28) goto joined_r0x00783410;
LAB_00783450:
            ppcVar12 = &local_2c;
            fn_0079aa0c(&local_30,local_2c,local_24);
          }
          else if (iVar9 == iVar14) {
            pcVar11 = local_2c;
            if (local_2c == local_28) goto LAB_00783450;
joined_r0x00783410:
            local_2c = pcVar11 + 1;
            ppcVar12 = &local_2c;
            if (pcVar11 != (char *)0x0) {
              ppcVar12 = &local_2c;
              *pcVar11 = local_24[0];
            }
          }
        }
        local_24[0] = local_24[0] + '\x01';
      } while (local_24[0] < iVar1);
    }
    ppcVar2 = (char **)((int)((uint)uVar7 << 8) >> 0x18);
    for (ppcVar10 = ppcVar2; (int)ppcVar10 < iVar1;
        ppcVar10 = (char **)(int)(char)((char)ppcVar10 + '\x01')) {
      pcVar11 = local_30;
      while( true ) {
        if (pcVar11 != local_2c) {
          ppcVar12 = (char **)(int)*pcVar11;
        }
        if (pcVar11 == local_2c || ppcVar12 == ppcVar10) break;
        pcVar11 = pcVar11 + 1;
      }
      if (pcVar11 == local_2c) {
        ppcVar12 = (char **)(uVar13 & 0xffff0000);
        uVar13 = (uint)ppcVar12 | uVar13 & 0xffff & ~(1 << ((int)ppcVar10 - (int)ppcVar2 & 0xffU));
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
    pcVar11 = local_30;
    if (local_2c < local_30) {
      do {
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != local_2c);
    }
    fn_001008c4(local_30,(int)local_28 - (int)local_30,0);
  }
  return uVar8;
}



undefined4 fn_00783080(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  short sVar7;
  char *pcVar8;
  char local_40 [4];
  char *local_3c;
  char *local_38;
  char *local_34;
  undefined *local_30;
  short local_2c;
  char local_2a;
  char local_29;
  undefined1 local_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar3 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    bVar2 = true;
    sVar7 = 0;
    local_30 = &DAT_008595d8;
    local_2c = *(short *)(param_2 + 4);
    local_40[0] = *(char *)(param_2 + 6);
    local_29 = *(char *)(param_2 + 7);
    pcVar6 = (char *)(int)local_29;
    local_28 = *(undefined1 *)(param_2 + 8);
    local_38 = (char *)0x0;
    local_3c = (char *)0x0;
    local_34 = (char *)0x0;
    local_2a = local_40[0];
    uStack_20 = param_1;
    iStack_1c = param_2;
    uStack_18 = param_3;
    if ((int)local_40[0] < (int)pcVar6) {
      do {
        iVar4 = fn_006f0a88(&local_30,(int)local_40[0]);
        if ((iVar4 != 0) && (iVar4 = fn_006f14ec(param_1,(int)local_40[0]), iVar4 != 0)) {
          pcVar6 = (char *)(int)local_40[0];
          sVar1 = *(short *)(iVar4 + 0x1e);
          if ((bVar2) || (sVar7 < sVar1)) {
            bVar2 = false;
            if (local_3c != local_38) {
              pcVar6 = local_3c;
              if (local_38 <= local_3c) {
                for (; pcVar6 != local_38; pcVar6 = pcVar6 + 1) {
                }
              }
              local_38 = local_3c;
            }
            sVar7 = sVar1;
            pcVar8 = local_38;
            if (local_38 != local_34) goto joined_r0x007831a8;
LAB_007831e8:
            pcVar6 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (sVar1 == sVar7) {
            pcVar8 = local_38;
            if (local_38 == local_34) goto LAB_007831e8;
joined_r0x007831a8:
            local_38 = pcVar8 + 1;
            pcVar6 = local_34;
            if (pcVar8 != (char *)0x0) {
              *pcVar8 = local_40[0];
            }
          }
        }
        local_40[0] = local_40[0] + '\x01';
      } while (local_40[0] < local_29);
    }
    pcVar8 = (char *)(int)local_2a;
    if ((int)pcVar8 < (int)local_29) {
      do {
        pcVar5 = local_3c;
        while( true ) {
          if (pcVar5 != local_38) {
            pcVar6 = (char *)(int)*pcVar5;
          }
          if (pcVar5 == local_38 || pcVar6 == pcVar8) break;
          pcVar5 = pcVar5 + 1;
        }
        if (pcVar5 == local_38) {
          fn_0063b148(&local_30,pcVar8);
        }
        pcVar8 = (char *)(int)(char)((char)pcVar8 + '\x01');
      } while ((int)pcVar8 < (int)local_29);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_2c != 0)) {
      *(short *)(param_2 + 4) = local_2c;
      uVar3 = 1;
      *(char *)(param_2 + 6) = local_2a;
      *(char *)(param_2 + 7) = local_29;
      *(undefined1 *)(param_2 + 8) = local_28;
    }
    else {
      uVar3 = 0;
    }
    pcVar6 = local_3c;
    if (local_38 < local_3c) {
      do {
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c,0);
  }
  return uVar3;
}



undefined4 fn_00782e1c(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  short sVar7;
  char *pcVar8;
  char local_40 [4];
  char *local_3c;
  char *local_38;
  char *local_34;
  undefined *local_30;
  short local_2c;
  char local_2a;
  char local_29;
  undefined1 local_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar3 = 0;
  if (*(char *)(param_2 + 8) == '\0') {
    bVar2 = true;
    sVar7 = 0;
    local_30 = &DAT_008595d8;
    local_2c = *(short *)(param_2 + 4);
    local_40[0] = *(char *)(param_2 + 6);
    local_29 = *(char *)(param_2 + 7);
    pcVar6 = (char *)(int)local_29;
    local_28 = *(undefined1 *)(param_2 + 8);
    local_38 = (char *)0x0;
    local_3c = (char *)0x0;
    local_34 = (char *)0x0;
    local_2a = local_40[0];
    uStack_20 = param_1;
    iStack_1c = param_2;
    uStack_18 = param_3;
    if ((int)local_40[0] < (int)pcVar6) {
      do {
        iVar4 = fn_006f0a88(&local_30,(int)local_40[0]);
        if ((iVar4 != 0) && (iVar4 = fn_006f14ec(param_1,(int)local_40[0]), iVar4 != 0)) {
          pcVar6 = (char *)(int)local_40[0];
          sVar1 = *(short *)(iVar4 + 0x1c);
          if ((bVar2) || (sVar7 < sVar1)) {
            bVar2 = false;
            if (local_3c != local_38) {
              pcVar6 = local_3c;
              if (local_38 <= local_3c) {
                for (; pcVar6 != local_38; pcVar6 = pcVar6 + 1) {
                }
              }
              local_38 = local_3c;
            }
            sVar7 = sVar1;
            pcVar8 = local_38;
            if (local_38 != local_34) goto joined_r0x00782f44;
LAB_00782f84:
            pcVar6 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (sVar1 == sVar7) {
            pcVar8 = local_38;
            if (local_38 == local_34) goto LAB_00782f84;
joined_r0x00782f44:
            local_38 = pcVar8 + 1;
            pcVar6 = local_34;
            if (pcVar8 != (char *)0x0) {
              *pcVar8 = local_40[0];
            }
          }
        }
        local_40[0] = local_40[0] + '\x01';
      } while (local_40[0] < local_29);
    }
    pcVar8 = (char *)(int)local_2a;
    if ((int)pcVar8 < (int)local_29) {
      do {
        pcVar5 = local_3c;
        while( true ) {
          if (pcVar5 != local_38) {
            pcVar6 = (char *)(int)*pcVar5;
          }
          if (pcVar5 == local_38 || pcVar6 == pcVar8) break;
          pcVar5 = pcVar5 + 1;
        }
        if (pcVar5 == local_38) {
          fn_0063b148(&local_30,pcVar8);
        }
        pcVar8 = (char *)(int)(char)((char)pcVar8 + '\x01');
      } while ((int)pcVar8 < (int)local_29);
    }
    if ((*(char *)(param_2 + 8) == '\0') && (local_2c != 0)) {
      *(short *)(param_2 + 4) = local_2c;
      uVar3 = 1;
      *(char *)(param_2 + 6) = local_2a;
      *(char *)(param_2 + 7) = local_29;
      *(undefined1 *)(param_2 + 8) = local_28;
    }
    else {
      uVar3 = 0;
    }
    pcVar6 = local_3c;
    if (local_38 < local_3c) {
      do {
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c,0);
  }
  return uVar3;
}


