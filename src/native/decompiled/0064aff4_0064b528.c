#include "0064aff4_0064b528.h"



undefined ** fn_0064b528(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_38 [4];
  char *local_34;
  char *local_30;
  char *local_2c;
  undefined *local_28;
  short local_24;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined1 auStack_1c [8];
  
  fn_00651208();
  ppuVar2 = (undefined **)0x0;
  if (*(char *)(param_4 + 8) == '\0') {
    bVar1 = true;
    iVar6 = 0;
    local_28 = &DAT_008595d8;
    local_24 = *(short *)(param_4 + 4);
    local_38[0] = *(char *)(param_4 + 6);
    local_21 = *(char *)(param_4 + 7);
    pcVar5 = (char *)(int)local_21;
    local_20 = *(undefined1 *)(param_4 + 8);
    local_30 = (char *)0x0;
    local_34 = (char *)0x0;
    local_2c = (char *)0x0;
    local_22 = local_38[0];
    if ((int)local_38[0] < (int)pcVar5) {
      do {
        iVar3 = fn_006f0a88(&local_28,(int)local_38[0]);
        if ((iVar3 != 0) && (iVar3 = fn_006f14ec(param_1,(int)local_38[0]), iVar3 != 0)) {
          pcVar5 = (char *)(int)local_38[0];
          iVar3 = fn_0064df00(auStack_1c,iVar3);
          if ((bVar1) || (iVar6 < iVar3)) {
            bVar1 = false;
            if (local_34 != local_30) {
              pcVar5 = local_34;
              if (local_30 < local_34) {
                do {
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != local_30);
              }
              local_30 = local_34;
            }
            iVar6 = iVar3;
            pcVar7 = local_30;
            if (local_30 != local_2c) goto joined_r0x0064b650;
LAB_0064b690:
            pcVar5 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_30;
            if (local_30 == local_2c) goto LAB_0064b690;
joined_r0x0064b650:
            local_30 = pcVar7 + 1;
            pcVar5 = local_2c;
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = local_38[0];
            }
          }
        }
        local_38[0] = local_38[0] + '\x01';
      } while (local_38[0] < local_21);
    }
    pcVar7 = (char *)(int)local_22;
    if ((int)pcVar7 < (int)local_21) {
      do {
        pcVar4 = local_34;
        while( true ) {
          if (pcVar4 != local_30) {
            pcVar5 = (char *)(int)*pcVar4;
          }
          if (pcVar4 == local_30 || pcVar5 == pcVar7) break;
          pcVar4 = pcVar4 + 1;
        }
        if (pcVar4 == local_30) {
          fn_0063b148(&local_28,pcVar7);
        }
        pcVar7 = (char *)(int)(char)((char)pcVar7 + '\x01');
      } while ((int)pcVar7 < (int)local_21);
    }
    if ((*(char *)(param_4 + 8) == '\0') && (local_24 != 0)) {
      *(short *)(param_4 + 4) = local_24;
      *(char *)(param_4 + 6) = local_22;
      *(char *)(param_4 + 7) = local_21;
      *(undefined1 *)(param_4 + 8) = local_20;
    }
    pcVar5 = local_34;
    if (local_30 < local_34) {
      do {
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != local_30);
    }
    fn_001008c4(local_34,(int)local_2c - (int)local_34,0);
    ppuVar2 = &local_28;
  }
  return ppuVar2;
}



void fn_0064b508(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651208();
  fn_00783080(param_1,param_4);
  return;
}



void fn_0064b4e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651208();
  fn_00783080(param_1,param_4);
  return;
}



void fn_0064b268(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_38 [4];
  char *local_34;
  char *local_30;
  char *local_2c;
  undefined *local_28;
  short local_24;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined1 auStack_1c [8];
  
  fn_0064f714();
  if (*(char *)(param_4 + 8) == '\0') {
    bVar1 = true;
    iVar5 = 0;
    local_28 = &DAT_008595d8;
    local_24 = *(short *)(param_4 + 4);
    local_38[0] = *(char *)(param_4 + 6);
    local_21 = *(char *)(param_4 + 7);
    pcVar4 = (char *)(int)local_21;
    local_20 = *(undefined1 *)(param_4 + 8);
    local_30 = (char *)0x0;
    local_34 = (char *)0x0;
    local_2c = (char *)0x0;
    local_22 = local_38[0];
    if ((int)local_38[0] < (int)pcVar4) {
      do {
        iVar2 = fn_006f0a88(&local_28,(int)local_38[0]);
        if ((iVar2 != 0) && (iVar2 = fn_006f14ec(param_1,(int)local_38[0]), iVar2 != 0)) {
          pcVar4 = (char *)(int)local_38[0];
          iVar2 = fn_006f3f74(auStack_1c);
          if ((bVar1) || (iVar2 < iVar5)) {
            bVar1 = false;
            if (local_34 != local_30) {
              pcVar4 = local_34;
              if (local_30 < local_34) {
                do {
                  pcVar4 = pcVar4 + 1;
                } while (pcVar4 != local_30);
              }
              local_30 = local_34;
            }
            iVar5 = iVar2;
            pcVar6 = local_30;
            if (local_30 != local_2c) goto joined_r0x0064b38c;
LAB_0064b3cc:
            pcVar4 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar2 == iVar5) {
            pcVar6 = local_30;
            if (local_30 == local_2c) goto LAB_0064b3cc;
joined_r0x0064b38c:
            local_30 = pcVar6 + 1;
            pcVar4 = local_2c;
            if (pcVar6 != (char *)0x0) {
              *pcVar6 = local_38[0];
            }
          }
        }
        local_38[0] = local_38[0] + '\x01';
      } while (local_38[0] < local_21);
    }
    pcVar6 = (char *)(int)local_22;
    if ((int)pcVar6 < (int)local_21) {
      do {
        pcVar3 = local_34;
        while( true ) {
          if (pcVar3 != local_30) {
            pcVar4 = (char *)(int)*pcVar3;
          }
          if (pcVar3 == local_30 || pcVar4 == pcVar6) break;
          pcVar3 = pcVar3 + 1;
        }
        if (pcVar3 == local_30) {
          fn_0063b148(&local_28,pcVar6);
        }
        pcVar6 = (char *)(int)(char)((char)pcVar6 + '\x01');
      } while ((int)pcVar6 < (int)local_21);
    }
    if ((*(char *)(param_4 + 8) == '\0') && (local_24 != 0)) {
      *(short *)(param_4 + 4) = local_24;
      *(char *)(param_4 + 6) = local_22;
      *(char *)(param_4 + 7) = local_21;
      *(undefined1 *)(param_4 + 8) = local_20;
    }
    pcVar4 = local_34;
    if (local_30 < local_34) {
      do {
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 != local_30);
    }
    fn_001008c4(local_34,(int)local_2c - (int)local_34,0);
  }
  fn_00783080(param_1,param_4);
  return;
}



undefined ** fn_0064aff4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_38 [4];
  char *local_34;
  char *local_30;
  char *local_2c;
  undefined *local_28;
  short local_24;
  char local_22;
  char local_21;
  undefined1 local_20;
  undefined1 auStack_1c [8];
  
  fn_0064f714();
  ppuVar2 = (undefined **)0x0;
  if (*(char *)(param_4 + 8) == '\0') {
    bVar1 = true;
    iVar6 = 0;
    local_28 = &DAT_008595d8;
    local_24 = *(short *)(param_4 + 4);
    local_38[0] = *(char *)(param_4 + 6);
    local_21 = *(char *)(param_4 + 7);
    pcVar5 = (char *)(int)local_21;
    local_20 = *(undefined1 *)(param_4 + 8);
    local_30 = (char *)0x0;
    local_34 = (char *)0x0;
    local_2c = (char *)0x0;
    local_22 = local_38[0];
    if ((int)local_38[0] < (int)pcVar5) {
      do {
        iVar3 = fn_006f0a88(&local_28,(int)local_38[0]);
        if ((iVar3 != 0) && (iVar3 = fn_006f14ec(param_1,(int)local_38[0]), iVar3 != 0)) {
          pcVar5 = (char *)(int)local_38[0];
          iVar3 = fn_006f403c(auStack_1c,iVar3);
          if ((bVar1) || (iVar3 < iVar6)) {
            bVar1 = false;
            if (local_34 != local_30) {
              pcVar5 = local_34;
              if (local_30 < local_34) {
                do {
                  pcVar5 = pcVar5 + 1;
                } while (pcVar5 != local_30);
              }
              local_30 = local_34;
            }
            iVar6 = iVar3;
            pcVar7 = local_30;
            if (local_30 != local_2c) goto joined_r0x0064b11c;
LAB_0064b15c:
            pcVar5 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_30;
            if (local_30 == local_2c) goto LAB_0064b15c;
joined_r0x0064b11c:
            local_30 = pcVar7 + 1;
            pcVar5 = local_2c;
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = local_38[0];
            }
          }
        }
        local_38[0] = local_38[0] + '\x01';
      } while (local_38[0] < local_21);
    }
    pcVar7 = (char *)(int)local_22;
    if ((int)pcVar7 < (int)local_21) {
      do {
        pcVar4 = local_34;
        while( true ) {
          if (pcVar4 != local_30) {
            pcVar5 = (char *)(int)*pcVar4;
          }
          if (pcVar4 == local_30 || pcVar5 == pcVar7) break;
          pcVar4 = pcVar4 + 1;
        }
        if (pcVar4 == local_30) {
          fn_0063b148(&local_28,pcVar7);
        }
        pcVar7 = (char *)(int)(char)((char)pcVar7 + '\x01');
      } while ((int)pcVar7 < (int)local_21);
    }
    if ((*(char *)(param_4 + 8) == '\0') && (local_24 != 0)) {
      *(short *)(param_4 + 4) = local_24;
      *(char *)(param_4 + 6) = local_22;
      *(char *)(param_4 + 7) = local_21;
      *(undefined1 *)(param_4 + 8) = local_20;
    }
    pcVar5 = local_34;
    if (local_30 < local_34) {
      do {
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != local_30);
    }
    fn_001008c4(local_34,(int)local_2c - (int)local_34,0);
    ppuVar2 = &local_28;
  }
  return ppuVar2;
}


