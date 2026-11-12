#include "00486978_004872e4.h"



int fn_004872e4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00468824(param_1 + 4);
  iVar1 = fn_0014ee88(iVar1 + 0x230);
  iVar1 = fn_004b3294(iVar1 + 0xb0);
  return iVar1 + -0x2e4;
}



void fn_004871b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_008bad44 + 0x14))(DAT_008bad44,param_1,param_2,param_3,param_4,DAT_008bad40);
  return;
}



undefined4 fn_00487100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2f0 [560];
  undefined1 auStack_c0 [176];
  
  fn_00468824(auStack_2f0);
  fn_0014ee88(auStack_c0);
  iVar1 = fn_0014f200(auStack_c0,param_4);
  if (((iVar1 == 0) || (iVar1 = fn_0048b3d8(auStack_2f0,param_4), iVar1 == 0)) ||
     (iVar1 = fn_004687f4(auStack_2f0,param_2,param_3), iVar1 != 0)) {
    fn_0045af48(auStack_c0);
    fn_00468958(auStack_2f0);
    return 0;
  }
  uVar2 = fn_00480e30(auStack_c0,param_3);
  fn_0045af48(auStack_c0);
  fn_00468958(auStack_2f0);
  return uVar2;
}



bool fn_00487018(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_310 [560];
  undefined1 auStack_e0 [176];
  undefined1 auStack_30 [32];
  
  fn_0014ee88(auStack_e0);
  iVar1 = fn_0014f200(auStack_e0,param_4);
  if (iVar1 != 0) {
    fn_004b5404(auStack_30,param_2);
    iVar1 = fn_00480f60(auStack_e0,auStack_30);
    if (iVar1 != 0) {
      fn_00468824(auStack_310);
      iVar1 = fn_0048b3d8(auStack_310,param_4);
      if (iVar1 != 0) {
        iVar1 = fn_004687a4(auStack_310,auStack_30,param_3);
        fn_00468958(auStack_310);
        fn_0014f480(auStack_30);
        fn_0045af48(auStack_e0);
        return iVar1 == 0;
      }
      fn_00468958(auStack_310);
    }
    fn_0014f480(auStack_30);
  }
  fn_0045af48(auStack_e0);
  return false;
}



bool fn_00486fa8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  fn_004b5404(auStack_30);
  iVar1 = fn_00480f60(param_1 + 0x234,auStack_30);
  if (iVar1 == 0) {
    fn_0014f480(auStack_30);
    return false;
  }
  iVar1 = fn_004687a4(param_1 + 4,auStack_30,param_3);
  fn_0014f480(auStack_30);
  return iVar1 == 0;
}



void fn_00486e8c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0xd0));
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x80) != '\x01')) {
    pcVar3 = fn_004869ec;
    uVar4 = 0;
    fn_0013d0fc(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined4 *)(param_1 + 0x44) = uStack_1c;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_00486f5c;
    return;
  }
  fn_004b301c(param_1,2);
  puVar2 = (undefined4 *)fn_0015ece0(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_004869ec;
    puVar2[2] = 0;
    puVar2[3] = &DAT_00486f5c;
  }
  fn_00479b1c(param_1,param_1 + 0x70,puVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_004869ec(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_48;
  undefined *puStack_44;
  undefined4 auStack_40 [7];
  
  iVar2 = fn_004b7748();
  if (iVar2 != 0) {
    iVar3 = fn_004b7748();
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x90);
    }
    uVar7 = 0;
    if (iVar3 != 0 && iVar2 != 0) {
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        fn_004b301c(param_1,2);
        puVar6 = (undefined4 *)fn_0015ece0(0x10);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = &DAT_00853500;
          puVar6[1] = fn_004869ec;
          puVar6[2] = 0;
          puVar6[3] = &DAT_00486d60;
        }
        fn_00479b1c(param_1,param_1 + 0xd8,puVar6);
        return;
      }
      iVar2 = fn_001249d0();
      iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0xd0));
      if (iVar2 != 0) {
        if ((*(int *)(param_1 + 0x138) != 0) &&
           ((*(uint *)(*(int *)(param_1 + 0x138) + 0x94) & 0xff) == 1)) {
          iVar2 = fn_004b7748();
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + 0x90);
          }
          if (*(char *)(iVar2 + 0xfd) == '\0') {
            iVar3 = fn_004b7748();
            iVar2 = 0;
            if (iVar3 != 0) {
              iVar2 = *(int *)(iVar3 + 0x90);
            }
            if (iVar3 == 0) {
              iVar2 = 0;
            }
            fn_00170fa4(iVar2 + 0x130,*(int *)(param_1 + 0x138) + 0x88);
            fn_00456400(param_1 + 0x140);
            iVar2 = fn_00455e10(param_1 + 0x140);
            if (iVar2 != 0) {
              iVar2 = fn_0015ece0(0xb8);
              if (iVar2 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                uVar11 = 0x468ed8;
                uVar10 = _DAT_008b6448;
                puVar6 = (undefined4 *)fn_00479cd8(iVar2,0,&local_48);
                *puVar6 = &PTR_FUN_00853120;
                puVar6[0x1a] = 0;
                puVar6[0x1b] = &DAT_80010001;
                puVar6[0x1c] = &DAT_007dba44;
                puVar6[0x1d] = 0x71;
                puVar6[0x1e] = 0;
                puVar4 = (undefined4 *)fn_004745d8(puVar6 + 0x1f,1);
                puVar6 = puVar4 + -0x1f;
                *puVar4 = &PTR_LAB_00854110;
                puVar4[10] = (int)uVar10;
                puVar4[0xb] = (int)((ulonglong)uVar10 >> 0x20);
                puVar4[0xc] = (int)uVar11;
                puVar4[0xd] = (int)((ulonglong)uVar11 >> 0x20);
                iVar2 = fn_004b7748();
                if (iVar2 == 0) {
                  iVar2 = fn_0015ece0(0x3e4);
                  if (iVar2 != 0) {
                    fn_004b7d34();
                  }
                }
                else {
                  iVar2 = fn_004b7748();
                  piVar5 = (int *)(iVar2 + 4);
                  do {
                    bVar1 = (bool)hasExclusiveAccess(piVar5);
                  } while (!bVar1);
                  *piVar5 = *piVar5 + 1;
                }
              }
              uVar8 = *(undefined4 *)(param_1 + 0x184);
              iVar2 = fn_001249d0();
              if (iVar2 == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = *(int *)(iVar2 + 0xc);
              }
              piVar5 = (int *)(iVar2 + 0x50);
              (**(code **)(*piVar5 + 8))(piVar5);
              puVar6[0x1a] = uVar8;
              pcVar9 = fn_0046e9e0;
              uVar8 = 0;
              fn_0013d0fc(&local_48);
              puVar6[0x10] = local_48;
              puVar6[0x11] = puStack_44;
              puVar6[0x14] = pcVar9;
              puVar6[0x15] = uVar8;
              puVar6[0x16] = &DAT_007db524;
              (**(code **)(*piVar5 + 0xc))(piVar5);
              iVar2 = fn_001249d0();
              if (iVar2 != 0) {
                uVar7 = *(undefined4 *)(iVar2 + 0xc);
              }
              fn_004bdba4(uVar7,puVar6,1);
              iVar2 = fn_001249d0();
              local_48 = *(undefined4 *)(param_1 + 0xd0);
              puStack_44 = *(undefined **)(param_1 + 0x184);
              fn_001777e0(auStack_40,*(int *)(iVar2 + 0x10) + 0x3c,&local_48);
              fn_004b301c(param_1,2);
              puVar6 = (undefined4 *)fn_0015ece0(0x10);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = &DAT_00853500;
                puVar6[1] = fn_00486d7c;
                puVar6[2] = 0;
                puVar6[3] = &DAT_00486d60;
              }
              fn_00479b1c(param_1,param_1 + 0x140,puVar6);
              return;
            }
            goto LAB_00486c14;
          }
        }
        fn_0013d0fc(&local_48);
        *(undefined4 *)(param_1 + 0x40) = local_48;
        *(undefined **)(param_1 + 0x44) = puStack_44;
        *(undefined **)(param_1 + 0x58) = &DAT_00486d60;
        *(code **)(param_1 + 0x50) = fn_00486924;
        *(undefined4 *)(param_1 + 0x54) = 0;
        return;
      }
    }
  }
LAB_00486c14:
  local_48 = 0x80010004;
  puStack_44 = &DAT_007dba44;
  auStack_40[0] = 0x71;
  fn_00486978(param_1,&local_48);
  return;
}



void fn_00486d7c(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0xd0));
  if (iVar2 == 0) {
    pcVar3 = fn_00493aa4;
    uVar4 = 0;
    fn_0013d0fc(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined **)(param_1 + 0x44) = puStack_1c;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_00486e80;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\x01') {
    fn_004b301c(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = 10;
    return;
  }
  if ((cVar1 == '\x02') || (cVar1 != '\x03')) {
    pcVar3 = fn_00486924;
    uVar4 = 0;
    fn_0013d0fc(&local_20);
    *(undefined4 *)(param_1 + 0x40) = local_20;
    *(undefined **)(param_1 + 0x44) = puStack_1c;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_00486e80;
    return;
  }
  local_20 = 0x80050014;
  puStack_1c = &DAT_007dba44;
  uStack_18 = 0x71;
  fn_00486978(param_1,&local_20);
  return;
}



void fn_00486978(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0xd0));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x70,4);
  }
  else {
    local_18 = *param_2;
    iStack_14 = param_2[1];
    iStack_10 = param_2[2];
    if (local_18 < 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 2;
    }
    fn_00455e8c(iVar1,uVar2,&local_18,1);
  }
  fn_004b301c(param_1,5);
  return;
}


