#include "0078248c_00782bb8.h"



undefined4 fn_00782bb8(undefined4 param_1,int param_2,undefined4 param_3)

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
          iVar3 = fn_0064d4a8(auStack_24);
          if ((bVar1) || (iVar3 < iVar6)) {
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
            if (local_38 != local_34) goto joined_r0x00782ce0;
LAB_00782d20:
            pcVar5 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_38;
            if (local_38 == local_34) goto LAB_00782d20;
joined_r0x00782ce0:
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



undefined4 fn_00782954(undefined4 param_1,int param_2,undefined4 param_3)

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
          iVar3 = fn_0064d48c(auStack_24);
          if ((bVar1) || (iVar3 < iVar6)) {
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
            if (local_38 != local_34) goto joined_r0x00782a7c;
LAB_00782abc:
            pcVar5 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_38;
            if (local_38 == local_34) goto LAB_00782abc;
joined_r0x00782a7c:
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



undefined4 fn_0078248c(undefined4 param_1,int param_2,undefined4 param_3)

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
          if ((bVar2) || (sVar1 < sVar7)) {
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
            if (local_38 != local_34) goto joined_r0x007825b4;
LAB_007825f4:
            pcVar6 = local_40;
            fn_0079aa0c(&local_3c);
          }
          else if (sVar1 == sVar7) {
            pcVar8 = local_38;
            if (local_38 == local_34) goto LAB_007825f4;
joined_r0x007825b4:
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


