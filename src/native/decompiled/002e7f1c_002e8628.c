#include "002e7f1c_002e8628.h"



void fn_002e8628(int param_1)

{
  char *local_30 [4];
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  char *pcStack_10;
  char *pcStack_c;
  char *pcStack_8;
  
  local_30[0] = "";
  local_30[1] = "MenuMessageWirelessExchange0036";
  local_30[2] = "MenuMessageWirelessExchange0010";
  local_30[3] = "MenuMessageWirelessExchange0011";
  pcStack_20 = "MenuMessageWirelessExchange0014";
  pcStack_1c = "MenuMessageWirelessExchange0009";
  pcStack_18 = "MenuMessageWirelessExchange0013";
  pcStack_14 = "MenuMessageWirelessExchange0009";
  pcStack_10 = "MenuMessageWirelessExchange0035";
  pcStack_c = (char *)&DAT_00863048;
  pcStack_8 = (char *)&DAT_008630a8;
  fn_0022f584(local_30[param_1],0);
  return;
}



undefined1 fn_002e84fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = fn_002e8660(1,param_1,0);
  uVar2 = iVar1 != 0;
  if (!(bool)uVar2) {
    iVar1 = fn_002e8660(2,param_1,0);
    if (iVar1 == 0) {
      iVar1 = fn_002e8660(3,param_1,0);
      if (iVar1 == 0) {
        iVar1 = fn_002e8660(4,param_1,param_2);
        if (iVar1 == 0) {
          iVar1 = fn_002e8660(5,param_1,0);
          if (iVar1 == 0) {
            iVar1 = fn_002e8660(6,param_1,0);
            if (iVar1 == 0) {
              iVar1 = fn_002e8660(7,param_1,0);
              if (iVar1 == 0) {
                iVar1 = fn_002e8660(8,param_1,0);
                if (iVar1 == 0) {
                  iVar1 = fn_002e8660(9,param_1,0);
                  if (iVar1 == 0) {
                    iVar1 = fn_002e8660(10,param_1,0);
                    if (iVar1 != 0) {
                      uVar2 = 10;
                    }
                  }
                  else {
                    uVar2 = 9;
                  }
                }
                else {
                  uVar2 = 8;
                }
              }
              else {
                uVar2 = 7;
              }
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}



undefined4 fn_002e84d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 == 6 || param_1 == 8) || (param_1 == 9 || param_1 == 10)) {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_002e81d8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  short local_48 [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar8 = *(int **)(*(int *)(param_1 + 0x40) + 4);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar1 = (**(code **)*piVar8)(piVar8);
  uVar2 = (**(code **)(*piVar8 + 4))(piVar8);
  iVar3 = fn_0066e3bc(DAT_00897850);
  if (0 < iVar3) {
    fn_0066e368(DAT_00897850,uVar1,local_48);
    fn_0066e368(DAT_00897850,uVar2,&local_30);
  }
  uVar7 = 0;
  psVar4 = local_48;
  psVar6 = (short *)(param_2 + 0x8f0);
  do {
    uVar7 = uVar7 + 1;
    psVar5 = psVar6 + 1;
    *psVar6 = *psVar4;
    bVar9 = psVar4[1] == 0;
    psVar4 = psVar4 + 1;
    psVar6 = psVar5;
  } while ((bVar9 || uVar7 < 0x40) && (!bVar9 && uVar7 != 0x3f));
  *psVar5 = 0;
  uVar7 = 0;
  psVar4 = (short *)&local_30;
  psVar6 = (short *)(param_2 + 0x970);
  do {
    uVar7 = uVar7 + 1;
    psVar5 = psVar6 + 1;
    *psVar6 = *psVar4;
    bVar9 = psVar4[1] == 0;
    psVar4 = psVar4 + 1;
    psVar6 = psVar5;
  } while ((bVar9 || uVar7 < 0x40) && (!bVar9 && uVar7 != 0x3f));
  *psVar5 = 0;
  uVar1 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  *(undefined4 *)(param_2 + 0x8e8) = uVar1;
  return;
}



void fn_002e8160(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x1c);
  do {
    iVar1 = fn_006b51d8(uVar3,iVar2);
    if (iVar1 == param_1) {
      fn_002426b4(uVar3,iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = fn_006b51c0(uVar3);
  if (iVar2 == param_1) {
    fn_0024269c(uVar3,0);
    return;
  }
  return;
}



undefined4 fn_002e8120(short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  iVar2 = 0;
  while( true ) {
    psVar3 = &DAT_007c6644 + iVar2;
    sVar1 = *psVar3;
    if ((short *)(int)sVar1 != param_1) {
      psVar3 = (short *)(int)(short)(&DAT_007c6646)[iVar2];
    }
    if ((short *)(int)sVar1 == param_1 || psVar3 == param_1) break;
    iVar2 = iVar2 + 2;
    if (0x17 < iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_002e80c4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x1c);
  while ((param_1 == 0 || (iVar1 = fn_006b51d8(uVar3,iVar2), iVar1 != param_1))) {
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}



bool fn_002e8098(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_0028ec90();
  uVar2 = fn_0028ec90(param_2);
  return (uVar1 & uVar2) != 0;
}



bool fn_002e8078(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14);
  uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
  uVar3 = fn_0028ec90(uVar4);
  return (uVar2 & uVar3) != 0;
}



void fn_002e7f1c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_00820f08;
  piVar5 = (int *)param_1[0x25];
  for (piVar4 = (int *)param_1[0x24]; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    if ((undefined4 *)*piVar4 != &DAT_008f9cf4) {
      piVar1 = (undefined4 *)*piVar4 + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
      }
    }
  }
  iVar2 = param_1[0x24];
  fn_001008c4(iVar2,param_1[0x26] - iVar2 >> 2,0);
  iVar6 = param_1[0x22];
  for (iVar2 = param_1[0x21]; iVar2 != iVar6; iVar2 = iVar2 + 0x34) {
    if (*(undefined4 **)(iVar2 + 0x2c) != &DAT_008f9cf4) {
      piVar4 = *(undefined4 **)(iVar2 + 0x2c) + -3;
      iVar3 = *piVar4;
      if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
        fn_001008c4(*(int *)(iVar2 + 0x2c) + -0xc,*(int *)(*(int *)(iVar2 + 0x2c) + -8) + 8,0);
      }
    }
  }
  iVar2 = param_1[0x21];
  fn_001008c4(iVar2,(param_1[0x23] - iVar2) / 0x34,0);
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 4))();
  }
  if ((int *)param_1[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1f] + 4))();
  }
  fn_0069eb00(param_1);
  return;
}


