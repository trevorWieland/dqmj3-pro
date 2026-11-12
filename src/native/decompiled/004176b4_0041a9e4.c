#include "004176b4_0041a9e4.h"



undefined4 * fn_0041a9e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_003fced4();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00839950;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00290ba4(iVar2,param_2);
  }
  puVar1[0x28] = uVar3;
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0041a024(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  undefined4 local_60 [2];
  uint local_58 [2];
  undefined4 local_50;
  undefined4 *local_48 [2];
  uint local_40;
  undefined4 *local_3c;
  uint local_38 [4];
  uint local_28;
  
  iVar11 = *(int *)(*(int *)(param_1 + 0x9c) + 0x1c);
  uVar1 = fn_0022fd28((char *)&DAT_0041a3d4);
  fn_00190d50(*(undefined4 *)(param_1 + 0xb0),uVar1);
  uVar1 = fn_0022ed64(iVar11);
  uVar8 = *(uint *)(param_1 + 0xb4);
  fn_00190d50(uVar8,uVar1);
  if (*(char *)(iVar11 + 4) != '\x03') {
    iVar11 = 0;
    do {
      if (iVar11 == 0) {
        uVar8 = 1;
      }
      iVar5 = *(int *)(param_1 + (iVar11 + 3) * 4 + 0xb0);
      if (iVar11 != 0) {
        uVar8 = 0;
      }
      iVar11 = iVar11 + 1;
      uVar8 = uVar8 | *(byte *)(iVar5 + 0x44) & 0xfe;
      *(char *)(iVar5 + 0x44) = (char)uVar8;
    } while (iVar11 < 5);
    uVar1 = fn_0022fd28((char *)&DAT_0041a3ec);
    fn_00190d50(*(undefined4 *)(param_1 + 0xbc),uVar1);
    local_70 = _DAT_0089410c;
    fn_00688d44(*(undefined4 *)(param_1 + 0xbc),&local_70);
    *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
    return;
  }
  local_50 = *(undefined4 *)(DAT_00897804 + 0x24);
  piVar9 = *(int **)(param_1 + 0xa4);
  (**(code **)(*piVar9 + 0x14))(piVar9,iVar11,0);
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  fn_006c9ba4(piVar9,&local_6c);
  iVar10 = 0;
  iVar5 = (int)(local_68 - local_6c) >> 1;
  if (5 < iVar5) {
    iVar5 = 5;
  }
  do {
    if (iVar10 < iVar5) {
      iVar12 = (int)*(short *)(local_6c + iVar10 * 2);
      iVar2 = fn_006b7b34(local_50,iVar12);
      if (((iVar2 != 0) || (iVar3 = fn_006b7b54(local_50,iVar12), iVar3 != 0)) ||
         ((iVar3 = fn_006b8370(local_50,iVar12), iVar3 != 0 &&
          (iVar12 = fn_002e322c(iVar12), iVar12 == 0)))) {
        fn_002317d8(local_48,(int)*(short *)(local_6c + iVar10 * 2),0);
      }
      else {
        local_60[0] = fn_0022fd28((char *)&DAT_0041a404);
        uVar8 = fn_00100b58();
        puVar4 = &DAT_008f9cf4;
        if (uVar8 != 0) {
          puVar6 = &local_40;
          if (0x20 < uVar8) {
            puVar6 = &local_28;
          }
          local_28 = uVar8;
          local_40 = 0x20;
          local_58[0] = *puVar6;
          local_70 = uVar8;
          if (0xfffffff1 < local_58[0]) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,local_58[0],0xfffffff1);
          }
          if (local_58[0] < local_70) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,local_70,local_58[0]);
          }
          if (local_58[0] == 0) {
            puVar4 = &DAT_008f9ce8;
          }
          else {
            puVar4 = (undefined4 *)fn_00100fc6((local_58[0] + 8) * 2,0);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
            }
            *puVar4 = 0;
            puVar4[1] = local_58[0];
            puVar4[2] = local_70;
            puVar7 = (undefined2 *)((int)puVar4 + local_70 * 2 + 0xc);
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = 0;
            }
          }
          puVar4 = puVar4 + 3;
        }
        local_48[0] = puVar4;
        fn_00301a9c(puVar4,local_60[0],uVar8 << 1);
      }
      iVar12 = param_1 + (iVar10 + 3) * 4;
      fn_00190d50(*(undefined4 *)(iVar12 + 0xb0),local_48[0]);
      if (iVar2 != 0) {
        local_38[0] = _DAT_0089410c;
      }
      else {
        local_38[0] = _DAT_00894114;
      }
      fn_00688d44(*(undefined4 *)(iVar12 + 0xb0),local_38);
      *(byte *)(*(int *)(iVar12 + 0xb0) + 0x44) =
           *(byte *)(*(int *)(iVar12 + 0xb0) + 0x44) & 0xfe | 1;
      if (local_48[0] != &DAT_008f9cf4) {
        piVar9 = local_48[0] + -3;
        iVar2 = *piVar9;
        if ((iVar2 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_48[0] + -3,local_48[0][-2] + 8,0);
        }
      }
    }
    else {
      iVar2 = *(int *)(param_1 + (iVar10 + 3) * 4 + 0xb0);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 5);
  if (*(byte *)(iVar11 + 0xb) < 100) {
    fn_0018a618(local_60,3,2,&DAT_0041a418,*(byte *)(iVar11 + 0xb));
    fn_00168a24(&local_3c,local_60,local_58);
  }
  else {
    uVar1 = fn_00231ca0(0x25,0);
    fn_00168a24(&local_3c,uVar1,&local_70);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0xb8),local_3c);
  if (local_3c != &DAT_008f9cf4) {
    piVar9 = local_3c + -3;
    iVar11 = *piVar9;
    if ((iVar11 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar11 + -1, iVar11 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe | 1
  ;
  uVar8 = local_6c;
  if (local_68 < local_6c) {
    do {
      uVar8 = uVar8 + 2;
    } while (uVar8 != local_68);
  }
  fn_001008c4(local_6c,(int)(local_64 - local_6c) >> 1,0);
  return;
}



undefined4 fn_004176b4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  wchar16 *local_88;
  char *pcStack_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [8];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  undefined1 local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  fn_00416f44();
  fn_00397b18(&local_88);
  local_88 = L"rom:/data/Layout/menu/wifi_shop/wifi_shop_exchange.arc";
  pcStack_84 = "wifi_shop_exchange.bflyt";
  local_74 = param_1[0x3e] - param_1[0x3d] >> 8;
  local_80 = local_74;
  if (6 < local_74) {
    local_80 = 7;
  }
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_0041773c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_0041773c:
  local_7c = puVar6[3];
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_0041777c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_0041777c:
  local_78 = puVar6[4];
  uVar2 = fn_0022f750((char *)&DAT_00417ab4);
  fn_00147974(auStack_6c,uVar2);
  uVar2 = fn_0022f750((char *)&DAT_00417ac8);
  fn_00147974(auStack_68,uVar2);
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_004177ec;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_004177ec:
  uVar2 = fn_00231cb8((&DAT_007c7b10)[puVar6[5]]);
  fn_00147974(auStack_64,uVar2);
  local_5c = 1;
  local_5b = 0;
  local_5a = 1;
  local_59 = 1;
  local_70 = 0x428c0000;
  local_55 = 0;
  local_3c = 0;
  local_56 = 1;
  local_54 = 0;
  uVar2 = fn_0022f750((char *)&DAT_00417ae8);
  fn_00147974(auStack_50,uVar2);
  uVar2 = fn_00397a98(param_1,&local_88);
  local_38 = (int *)fn_0068897c(param_1[0x1c],(char *)&DAT_00417b04);
  if (local_38 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*local_38 + 8))(local_38);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00417898;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  local_38 = (int *)0x0;
LAB_00417898:
  local_34 = (int *)fn_0068897c(param_1[0x1c],(char *)&DAT_00417b1c);
  if (local_34 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*local_34 + 8))(local_34);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_004178dc;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  local_34 = (int *)0x0;
LAB_004178dc:
  local_30 = (int *)fn_0068897c(param_1[0x1c],(char *)&DAT_00417b30);
  if (local_30 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*local_30 + 8))(local_30);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00417920;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  local_30 = (int *)0x0;
LAB_00417920:
  local_2c = (int *)fn_0068897c(param_1[0x1c],(char *)&DAT_00417b44);
  if (local_2c != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*local_2c + 8))(local_2c);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00417964;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  local_2c = (int *)0x0;
LAB_00417964:
  iVar3 = fn_00145b00(0x20,&DAT_00812c8c);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = fn_00662a00();
  }
  iVar3 = param_1[0x40];
  if (iVar3 != iVar4) {
    if (iVar3 != 0) {
      fn_00662a1c(iVar3);
      fn_002feef8();
    }
    param_1[0x40] = iVar4;
  }
  fn_00662430(param_1[0x40],&local_38);
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_004179f4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_004179f4:
  fn_00417f00(param_1,puVar6[5]);
  (**(code **)(*param_1 + 0x124))(param_1);
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_00417a44;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00417a44:
  uVar5 = fn_00231cb8((&DAT_007c7b10)[puVar6[5]]);
  fn_00243550(param_1[0x29],uVar5);
  iVar4 = fn_0068897c(param_1[0x1c],(char *)&DAT_00417b5c);
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  param_1[0x39] = (int)&DAT_004176b0;
  param_1[0x3a] = 0;
  param_1[0x37] = (int)&DAT_004176b0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x35] = (int)&DAT_004176b0;
  param_1[0x36] = 0;
  iVar4 = fn_001588d4(auStack_40);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -0x10);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return uVar2;
}


