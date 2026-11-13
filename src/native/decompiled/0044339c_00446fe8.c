#include "0044339c_00446fe8.h"



undefined4 fn_00446fe8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
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
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  fn_00416c80();
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893d34) goto LAB_00447040;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00447040:
  *(undefined4 **)(param_1 + 0xdc) = puVar1;
  iVar5 = 1;
  uVar7 = *(undefined4 *)(DAT_00897804 + 0x24);
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0xd0) + 8);
  do {
    iVar3 = fn_006b7b34(uVar7);
    if ((iVar3 != 0) && (uVar4 = fn_00661094((int)(short)iVar5), uVar4 == uVar6 || uVar6 == 0)) {
      *(short *)(*(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xf8) * 2) = (short)iVar5;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x3ff);
  fn_00397b18(&local_88);
  local_88 = L"rom:/data/Layout/menu/wifi_shop/wifi_shop_exchange.arc";
  pcStack_84 = "wifi_shop_exchange.bflyt";
  local_74 = *(int *)(param_1 + 0xf8);
  local_80 = local_74;
  if (6 < local_74) {
    local_80 = 7;
  }
  uVar7 = fn_00416d40(param_1,*(undefined1 *)(*(int *)(param_1 + 0xd0) + 8));
  fn_00147974(auStack_6c,uVar7);
  local_5c = 1;
  local_7c = 0;
  local_78 = 0;
  local_5a = 1;
  uVar7 = fn_0022f750((char *)&DAT_00447478);
  fn_00147974(auStack_68,uVar7);
  local_59 = 1;
  uVar7 = fn_00231cb8((&DAT_007c7a94)[*(int *)(param_1 + 0xe4)]);
  fn_00147974(auStack_64,uVar7);
  local_70 = 0x42c00000;
  local_54 = 0;
  uVar7 = fn_0022f750((char *)&DAT_00447498);
  fn_00147974(auStack_50,uVar7);
  fn_00397a98(param_1,&local_88);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar5 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar5 + 0x81) = 2;
  fn_0031f3f4(iVar5,0);
  local_38 = (int *)fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_004474b4);
  if (local_38 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*local_38 + 8))(local_38);
    do {
      if (puVar1 == &DAT_0089a930) goto LAB_004471e4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  local_38 = (int *)0x0;
LAB_004471e4:
  local_34 = (int *)fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_004474cc);
  if (local_34 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*local_34 + 8))(local_34);
    do {
      if (puVar1 == &DAT_0089a930) goto LAB_0044722c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  local_34 = (int *)0x0;
LAB_0044722c:
  local_30 = (int *)fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_004474e0);
  if (local_30 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*local_30 + 8))(local_30);
    do {
      if (puVar1 == &DAT_0089a930) goto LAB_00447274;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  local_30 = (int *)0x0;
LAB_00447274:
  local_2c = (int *)fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_004474f4);
  if (local_2c != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*local_2c + 8))(local_2c);
    do {
      if (puVar1 == &DAT_0089a930) goto LAB_004472b8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  local_2c = (int *)0x0;
LAB_004472b8:
  iVar3 = fn_00145b00(0x20,&DAT_00812c8c);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = fn_00662a00();
  }
  iVar3 = *(int *)(param_1 + 0xe0);
  if (iVar3 != iVar5) {
    if (iVar3 != 0) {
      fn_00662a1c(iVar3);
      fn_002feef8();
    }
    *(int *)(param_1 + 0xe0) = iVar5;
  }
  fn_00662430(*(undefined4 *)(param_1 + 0xe0),&local_38);
  fn_0025f2d0(*(undefined4 *)(param_1 + 0x9c),0);
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x3c) = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 0x1c);
  uVar7 = 0;
  *(int *)(param_1 + 0xe4) = iVar5;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar7 = 5;
    }
    else if (iVar5 == 2) {
      uVar7 = 2;
    }
  }
  fn_0022de40(param_1 + 0xec,uVar7);
  fn_00447520(param_1);
  uVar7 = fn_00231cb8((&DAT_007c7a94)[*(int *)(param_1 + 0xe4)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar7);
  iVar5 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar5 + 0x83) = 0;
  fn_0031f954(iVar5,0);
  fn_00447520(param_1);
  fn_00447fb4(param_1,0);
  fn_00689930(param_1,0xc9,0);
  iVar5 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_0044750c);
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  iVar5 = fn_001588d4(auStack_40);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -0x10);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -4);
  fn_001588d4(iVar5 + -4);
  return 1;
}



void fn_00446d50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar7 = (undefined4 *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008946d4) goto LAB_00446dbc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00446dbc:
  *(undefined1 *)(puVar1 + 2) = 3;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)(puVar1 + 9) = 1;
  iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xfc));
  fn_00231700(&local_40,0x10,(int)*(short *)(iVar3 + 0x1c),0);
  uVar4 = fn_0022f750((char *)&DAT_00446ee4);
  uVar5 = fn_00100b58();
  fn_00231d04(&local_40,0x10,uVar4,uVar5);
  fn_003212cc(puVar1,&local_40);
  uVar4 = fn_0015b064((int)*(short *)(iVar3 + 0x1c));
  fn_003212bc(puVar1,uVar4);
  fn_00689bd0(param_1,0x4c,1);
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar6 == &DAT_008951dc) {
        puVar7 = puVar2;
        break;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  fn_0025f3f4(puVar7,iVar3);
  puVar1[0x11] = puVar7;
  fn_00689efc(param_1,0x2d,0);
  *(undefined1 *)(param_1 + 0xd8) = 5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0044339c(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  undefined4 local_58 [2];
  short local_50 [22];
  
  fn_003f5908();
  uVar17 = 0;
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x24);
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar13 = *(int *)(param_1 + 0xb4);
  uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  iVar5 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc);
  if (uVar1 != 0) {
    do {
      uVar14 = iVar5 * uVar1 + uVar17;
      if ((int)uVar14 < iVar4 - iVar13 >> 1) {
        uVar2 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
        if (uVar2 <= uVar14) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar14,uVar2);
        }
        iVar15 = (int)*(short *)(*(int *)(param_1 + 0xb4) + uVar14 * 2);
        uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
        iVar7 = fn_006b83e4();
        iVar16 = 0;
        if (0 < iVar7) {
          do {
            iVar8 = fn_0028b0a0(uVar6,iVar16);
            if (*(short *)(iVar8 + 0x1c) == iVar15) {
              uVar6 = 0x1d;
              goto LAB_004434f8;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar7);
        }
        iVar7 = fn_006b84b0(uVar6);
        iVar16 = 0;
        if (0 < iVar7) {
          do {
            iVar8 = fn_0028b348(uVar6,iVar16);
            if (*(short *)(iVar8 + 0x1c) == iVar15) {
              uVar6 = 0x1e;
              goto LAB_004434f8;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar7);
        }
        iVar7 = fn_006b8478(uVar6);
        iVar16 = 0;
        if (0 < iVar7) {
LAB_004434dc:
          iVar8 = fn_0028b074(uVar6,iVar16);
          if (*(short *)(iVar8 + 0x1c) != iVar15) goto LAB_0044353c;
          uVar6 = 0x1f;
LAB_004434f8:
          puVar9 = (undefined *)fn_00231ca0(uVar6,0);
          goto LAB_00443504;
        }
LAB_00443548:
        puVar9 = &DAT_0044367c;
LAB_00443504:
        fn_0031b78c(param_1,uVar17,7,puVar9);
        iVar7 = fn_006b7b34(uVar3,iVar15);
        bVar18 = iVar7 != 0;
        bVar19 = bVar18;
        if ((!bVar18) &&
           ((iVar7 = fn_006b7b54(uVar3,iVar15), iVar7 != 0 ||
            ((iVar7 = fn_006b8370(uVar3,iVar15), iVar7 != 0 &&
             (iVar7 = fn_002e322c(iVar15), iVar7 == 0)))))) {
          bVar19 = true;
        }
        local_50[0] = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[4] = 0;
        local_50[5] = 0;
        local_50[6] = 0;
        local_50[7] = 0;
        local_50[8] = 0;
        local_50[9] = 0;
        local_50[10] = 0;
        local_50[0xb] = 0;
        local_50[0xc] = 0;
        local_50[0xd] = 0;
        local_50[0xe] = 0;
        local_50[0xf] = 0;
        if (bVar19) {
          fn_00231700(local_50,0x10,iVar15,1);
        }
        else {
          psVar10 = (short *)fn_0022f584((char *)&DAT_00443680,0);
          uVar14 = 0;
          psVar11 = local_50;
          do {
            uVar14 = uVar14 + 1;
            psVar12 = psVar11 + 1;
            *psVar11 = *psVar10;
            bVar19 = psVar10[1] == 0;
            psVar10 = psVar10 + 1;
            psVar11 = psVar12;
          } while ((bVar19 || uVar14 < 0x10) && (!bVar19 && uVar14 != 0xf));
          *psVar12 = 0;
        }
        fn_0031b78c(param_1,uVar17,1,local_50);
        if (bVar18) {
          local_58[0] = _DAT_00892a74;
        }
        else {
          local_58[0] = _DAT_00892a7c;
        }
        fn_002c37e0(param_1,uVar17,local_58);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar1);
  }
  return;
LAB_0044353c:
  iVar16 = iVar16 + 1;
  if (iVar7 <= iVar16) goto LAB_00443548;
  goto LAB_004434dc;
}


