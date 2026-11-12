#include "0064c9f4_0064d55c.h"



uint fn_0064d55c(short *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_006f44fc(param_2,(int)*param_1);
  return uVar1 ^ 1;
}



bool fn_0064d544(undefined4 param_1,int param_2)

{
  return *(char *)(param_2 + 0x59) == '\x03' || *(char *)(param_2 + 0x59) == '\x04';
}



undefined4 fn_0064d500(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x120);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*(short *)((byte *)(param_2 + 0x120) + uVar1 * 2 + 4) == *(short *)(param_1 + 4)) {
        return 1;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < uVar2);
  }
  return 0;
}



int fn_0064d48c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f2fa8(param_2);
  return iVar1 + *(short *)(param_2 + 0x1c) * 2;
}



void fn_0064d1dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_006507f8();
  iVar1 = fn_00781e20(param_1,param_4,0xe8);
  if (iVar1 == 0) {
    fn_0064fbd4(param_1,param_2,param_3,param_4);
    iVar1 = fn_00781e20(param_1,param_4,0xe8);
    if (iVar1 == 0) {
      fn_00785054(param_1,param_4);
    }
  }
  return;
}



void fn_0064d198(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_0064fbd4();
  iVar1 = fn_00781e20(param_1,param_4,0xe8);
  if (iVar1 == 0) {
    fn_00785054(param_1,param_4);
  }
  return;
}



undefined1 * fn_0064d06c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *local_20;
  short local_1c;
  char local_1a;
  char local_19;
  undefined1 local_18;
  undefined2 local_14 [2];
  
  fn_0064f714();
  local_14[0] = 0xea;
  if (*(char *)(param_4 + 8) == '\0') {
    local_20 = &DAT_008595d8;
    local_1c = *(short *)(param_4 + 4);
    local_1a = *(char *)(param_4 + 6);
    iVar3 = (int)local_1a;
    local_19 = *(char *)(param_4 + 7);
    local_18 = *(undefined1 *)(param_4 + 8);
    if (iVar3 < local_19) {
      do {
        iVar1 = fn_006f0a88(&local_20,iVar3);
        if ((iVar1 != 0) &&
           ((iVar1 = fn_006f14ec(param_1,iVar3), iVar1 == 0 ||
            (iVar1 = fn_006f44ec(local_14,iVar1,iVar3), iVar1 == 0)))) {
          fn_0063b148(&local_20,iVar3);
        }
        iVar3 = (int)(char)((char)iVar3 + '\x01');
      } while (iVar3 < local_19);
    }
    if ((*(char *)(param_4 + 8) == '\0') && (local_1c != 0)) {
      *(short *)(param_4 + 4) = local_1c;
      *(char *)(param_4 + 6) = local_1a;
      *(char *)(param_4 + 7) = local_19;
      *(undefined1 *)(param_4 + 8) = local_18;
      return (undefined1 *)&local_20;
    }
  }
  puVar2 = (undefined1 *)fn_00785054(param_1,param_4);
  return puVar2;
}



void fn_0064d048(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0064f714();
  fn_00785054(param_1,param_4);
  return;
}



void fn_0064cc54(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  fn_0064fbd4();
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
          iVar2 = fn_006511c8(auStack_1c);
          if ((bVar1) || (iVar5 < iVar2)) {
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
            if (local_30 != local_2c) goto joined_r0x0064cd78;
LAB_0064cdb8:
            pcVar4 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar2 == iVar5) {
            pcVar6 = local_30;
            if (local_30 == local_2c) goto LAB_0064cdb8;
joined_r0x0064cd78:
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
  fn_007837b4(param_1,param_4);
  return;
}



void fn_0064c9f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  
  fn_0064fbd4();
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
          iVar2 = fn_006503e4(auStack_1c);
          if ((bVar1) || (iVar5 < iVar2)) {
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
            if (local_30 != local_2c) goto joined_r0x0064cb18;
LAB_0064cb58:
            pcVar4 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar2 == iVar5) {
            pcVar6 = local_30;
            if (local_30 == local_2c) goto LAB_0064cb58;
joined_r0x0064cb18:
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
  fn_007837b4(param_1,param_4);
  return;
}


