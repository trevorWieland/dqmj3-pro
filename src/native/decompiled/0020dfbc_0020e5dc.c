#include "0020dfbc_0020e5dc.h"



int fn_0020e5dc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  fn_0020bbc4(auStack_10,param_1);
  iVar1 = fn_006bfe90(auStack_c);
  return (int)*(short *)(&UNK_007c4282 + iVar1 * 2 + param_2 * 10);
}



uint fn_0020e42c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_220 [60];
  undefined1 local_1e4;
  undefined1 auStack_130 [60];
  undefined1 local_f4;
  undefined1 auStack_40 [8];
  uint local_38;
  undefined1 auStack_34 [2];
  undefined2 auStack_32 [9];
  
  fn_0024ef64(auStack_220,param_4);
  fn_0024ef64(auStack_130,param_5);
  local_1e4 = param_6;
  local_f4 = param_7;
  local_38 = 0;
  puVar2 = (undefined4 *)fn_00101a1c(auStack_34,&LAB_0020cd8c,4,5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[-3] = auStack_220;
  puVar2[-2] = auStack_130;
  fn_0020ccdc(auStack_40,0);
  uVar1 = fn_005fcc2c(auStack_40);
  iVar3 = fn_001a46f4();
  if (iVar3 != 0) {
    auStack_34[local_38 * 4] = 3;
    auStack_34[local_38 * 4 + 1] = 3;
    auStack_32[local_38 * 2] = uVar1;
    local_38 = local_38 + 1;
  }
  uVar1 = fn_005fdff8(auStack_40);
  iVar3 = fn_001a46f4();
  if (iVar3 != 0) {
    auStack_34[local_38 * 4] = 4;
    auStack_34[local_38 * 4 + 1] = 3;
    auStack_32[local_38 * 2] = uVar1;
    local_38 = local_38 + 1;
  }
  if (local_38 < 2) {
    fn_0020ccdc(auStack_40,1);
    fn_0020ccdc(auStack_40,2);
  }
  else if (local_38 < 3) {
    fn_0020ccdc(auStack_40,1);
  }
  fn_006aedec(auStack_40,param_1,0);
  fn_006aedec(auStack_40,param_2,1);
  fn_006aedec(auStack_40,param_3,2);
  return local_38;
}



void fn_0020e3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_208 [240];
  undefined1 auStack_118 [240];
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar1 = 0;
  do {
    fn_00301f50(auStack_208 + iVar1 * 0xf0,0xf0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  fn_0024ef64(auStack_208,param_2);
  fn_0024ef64(auStack_118,param_3);
  local_24 = auStack_118;
  local_28 = auStack_208;
  fn_005fccf4(param_1,&local_28,param_4,0);
  return;
}



undefined4 fn_0020e260(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  iVar5 = fn_0020c298();
  iVar9 = 0;
  if (0 < iVar5) {
    do {
      fn_0020c2e0(iVar9,&local_30,4);
      iVar7 = 0;
      iVar8 = 0;
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
        if ((bVar4) || (local_30 != *(short *)(param_1 + iVar8 * 2))) {
          if ((bVar3) || (local_2e != *(short *)(param_1 + iVar8 * 2))) {
            if ((bVar2) || (local_2c != *(short *)(param_1 + iVar8 * 2))) {
              if ((bVar1) || (local_2a != *(short *)(param_1 + iVar8 * 2))) break;
              bVar1 = true;
            }
            else {
              bVar2 = true;
            }
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar4 = true;
        }
        iVar7 = iVar7 + 1;
        iVar8 = (int)(short)((short)iVar8 + 1);
      } while (iVar8 < 4);
      if (iVar7 == 4) {
        uVar6 = fn_0020c2c4(iVar9);
        return uVar6;
      }
      iVar9 = (int)(short)((short)iVar9 + 1);
    } while (iVar9 < iVar5);
  }
  return 0;
}



undefined4 fn_0020dfbc(undefined4 *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_56;
  undefined2 local_54;
  undefined4 local_50;
  int local_4c;
  short local_48 [2];
  int local_44;
  undefined2 local_40 [2];
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined1 local_34 [4];
  int local_30 [2];
  undefined4 local_28;
  
  local_4c = param_2 + 0x10;
  uVar9 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_50 = fn_0028aad0(uVar9,*(undefined4 *)(param_2 + 4));
  local_5c = fn_0028aad0(uVar9,*(undefined4 *)(param_2 + 8));
  pcVar4 = (char *)fn_006c0010(&local_4c);
  cVar1 = *pcVar4;
  bVar11 = cVar1 == '\0';
  if (bVar11) {
    cVar1 = pcVar4[6];
  }
  bVar12 = bVar11 && cVar1 == '\0';
  if (bVar11 && cVar1 == '\0') {
    bVar12 = pcVar4[0xc] == '\0';
  }
  if (bVar12) {
    uVar3 = fn_006bfda8(&local_5c);
    local_3c = fn_006c0010(&local_5c);
    local_40[0] = uVar3;
    sVar2 = fn_006bfda8(&local_50);
    local_44 = fn_006c0010(&local_50);
    local_48[0] = sVar2;
    iVar5 = fn_002101cc(&local_58,local_48,local_40);
    if (iVar5 != 0) {
LAB_0020e188:
      fn_0017821c(param_1,param_2 + 0x10,0xf0);
      *param_1 = 0;
      *(undefined2 *)(param_1 + 7) = 0x18b;
      *(undefined4 *)((int)param_1 + 0x72) = 0;
      *(undefined4 *)((int)param_1 + 0x76) = 0;
      *(undefined4 *)((int)param_1 + 0x7a) = 0;
      *(undefined4 *)((int)param_1 + 0x7e) = 0;
      *(undefined2 *)((int)param_1 + 0x82) = 0;
      fn_0019bc50((int)param_1 + 0x72,&local_58);
      fn_0010288c(param_1 + 1,0x18,&DAT_0020e25c,&local_5c,&DAT_0020e25c);
      uVar3 = fn_0066128c(0x18b);
      *(undefined2 *)(param_1 + 0x11) = uVar3;
      fn_005fd484(param_1);
      do {
        uVar3 = fn_006617a8((int)*(short *)(param_1 + 7));
        *(undefined2 *)((int)param_1 + 0x56) = uVar3;
        *(undefined2 *)(param_1 + 0x16) = 0;
        uVar7 = 1;
        do {
          uVar8 = uVar7 + 1;
          *(undefined2 *)((int)param_1 + uVar7 * 4 + 0x56) = 0;
          *(undefined2 *)(param_1 + uVar7 + 0x16) = 0;
          if (6 < uVar8) {
            return 1;
          }
          uVar7 = uVar8;
        } while (uVar8 != 0);
      } while( true );
    }
  }
  else {
    iVar5 = fn_006c0010(&local_5c);
    local_48[0] = fn_006bfda8(&local_5c);
    iVar10 = 0;
    do {
      pcVar4 = (char *)(iVar5 + iVar10 * 6);
      if (*pcVar4 != '\0') {
        local_44 = iVar5;
        iVar5 = fn_002429d0((int)local_48[0]);
        local_3c = CONCAT31(((unsigned int)(local_3c) >> 8) & 0xffffff,*(undefined1 *)(iVar5 + iVar10));
        local_30[0] = (int)pcVar4[1];
        fn_006a82f4(auStack_38,&local_3c,local_30);
        puVar6 = (undefined1 *)fn_002429d0(0x18b);
        local_34[0] = *puVar6;
        fn_006a82e0(&local_28,auStack_38,local_34);
        local_58 = 1;
        local_57 = fn_001c801c(local_28);
        local_56 = *(undefined2 *)(pcVar4 + 2);
        local_54 = *(undefined2 *)(pcVar4 + 4);
        goto LAB_0020e188;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  return 0;
}


