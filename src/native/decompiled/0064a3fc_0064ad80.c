#include "0064a3fc_0064ad80.h"



undefined ** fn_0064ad80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
          iVar3 = fn_006f2fa0(auStack_1c,iVar3);
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
            if (local_30 != local_2c) goto joined_r0x0064aea8;
LAB_0064aee8:
            pcVar5 = local_38;
            fn_0079aa0c(&local_34);
          }
          else if (iVar3 == iVar6) {
            pcVar7 = local_30;
            if (local_30 == local_2c) goto LAB_0064aee8;
joined_r0x0064aea8:
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



void fn_0064ad54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0064f714();
  fn_00784b74(param_1,param_4);
  fn_00783550(param_1,param_4);
  return;
}



void fn_0064ad34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0064f714();
  fn_00784b74(param_1,param_4);
  return;
}



void fn_0064a98c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *local_20;
  short local_1c;
  char local_1a;
  char local_19;
  undefined1 local_18;
  undefined1 auStack_14 [4];
  
  fn_0064f714();
  if (*(char *)(param_4 + 8) == '\0') {
    local_20 = &DAT_008595d8;
    local_1c = *(short *)(param_4 + 4);
    local_1a = *(char *)(param_4 + 6);
    iVar2 = (int)local_1a;
    local_19 = *(char *)(param_4 + 7);
    local_18 = *(undefined1 *)(param_4 + 8);
    if (iVar2 < local_19) {
      do {
        iVar1 = fn_006f0a88(&local_20,iVar2);
        if ((iVar1 != 0) &&
           ((iVar1 = fn_006f14ec(param_1,iVar2), iVar1 == 0 ||
            (iVar1 = fn_0064df40(auStack_14,iVar1,iVar2), iVar1 == 0)))) {
          fn_0063b148(&local_20,iVar2);
        }
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      } while (iVar2 < local_19);
    }
    if ((*(char *)(param_4 + 8) == '\0') && (local_1c != 0)) {
      *(short *)(param_4 + 4) = local_1c;
      *(char *)(param_4 + 6) = local_1a;
      *(char *)(param_4 + 7) = local_19;
      *(undefined1 *)(param_4 + 8) = local_18;
    }
  }
  fn_00782bb8(param_1,param_4);
  fn_0078248c(param_1,param_4);
  return;
}



undefined1 * fn_0064a888(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *local_20;
  short local_1c;
  char local_1a;
  char local_19;
  undefined1 local_18;
  undefined1 auStack_14 [4];
  
  fn_0064f714();
  ppuVar2 = (undefined **)(uint)*(byte *)(param_4 + 8);
  if ((undefined1 *)(uint)*(byte *)(param_4 + 8) == (undefined1 *)0x0) {
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
            (iVar1 = fn_0064df40(auStack_14,iVar1,iVar3), iVar1 == 0)))) {
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
    }
    ppuVar2 = &local_20;
  }
  return (undefined1 *)ppuVar2;
}



void fn_0064a85c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0064f124();
  fn_007821e0(param_1,param_4);
  fn_00782954(param_1,param_4);
  return;
}



void fn_0064a800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0064f124();
  fn_007821e0(param_1,param_4);
  fn_00782954(param_1,param_4);
  return;
}



int fn_0064a5f0(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  puVar3 = (undefined4 *)
           fn_0064ff88(auStack_48,param_1,4,(int)*(char *)(param_1 + 4),(int)*param_2);
  local_38 = *puVar3;
  uStack_34 = puVar3[1];
  uStack_30 = puVar3[2];
  uStack_2c = puVar3[3];
  for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_0064fb18(&local_38,iVar4,iVar1), iVar4 == 0))
    goto LAB_0064a724;
  }
  iVar1 = fn_006f0ae4(param_1);
  iVar2 = fn_006f0a30(param_1);
  puVar3 = (undefined4 *)
           fn_0064ff88(auStack_28,param_1,5,(int)*(char *)(param_1 + 4),(int)*param_2);
  local_38 = *puVar3;
  uStack_34 = puVar3[1];
  uStack_30 = puVar3[2];
  uStack_2c = puVar3[3];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_0064fb18(&local_38,iVar4,iVar1), iVar4 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
LAB_0064a724:
  return (int)*(char *)(param_3 + 3);
}



int fn_0064a4b0(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  puVar3 = (undefined4 *)
           fn_0064ff88(auStack_48,param_1,2,(int)*(char *)(param_1 + 4),(int)*param_2);
  local_38 = *puVar3;
  uStack_34 = puVar3[1];
  uStack_30 = puVar3[2];
  uStack_2c = puVar3[3];
  for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_0064fb18(&local_38,iVar4,iVar1), iVar4 == 0))
    goto LAB_0064a5e4;
  }
  iVar1 = fn_006f0ae4(param_1);
  iVar2 = fn_006f0a30(param_1);
  puVar3 = (undefined4 *)
           fn_0064ff88(auStack_28,param_1,3,(int)*(char *)(param_1 + 4),(int)*param_2);
  local_38 = *puVar3;
  uStack_34 = puVar3[1];
  uStack_30 = puVar3[2];
  uStack_2c = puVar3[3];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_0064fb18(&local_38,iVar4,iVar1), iVar4 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
LAB_0064a5e4:
  return (int)*(char *)(param_3 + 3);
}



int fn_0064a3fc(int param_1,short *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [16];
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  puVar3 = (undefined4 *)
           fn_0064ff88(auStack_28,param_1,0x52,(int)*(char *)(param_1 + 4),(int)*param_2);
  local_3c = *puVar3;
  uStack_38 = puVar3[1];
  uStack_34 = puVar3[2];
  uStack_30 = puVar3[3];
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar4 = fn_006f14a4(param_1,iVar1);
    if ((iVar4 != 0) && (iVar4 = fn_0064facc(&local_3c,iVar4,iVar1), iVar4 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}


