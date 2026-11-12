#include "0024ad8c_0024b5bc.h"



void fn_0024b5bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_00262044(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = fn_00261e88(param_2,iVar3);
      fn_006a3c74();
      fn_002625d0(param_2,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = fn_00262044(param_2);
    } while (iVar3 < iVar1);
  }
  if (DAT_00896f48 != -1) {
    fn_00265538(param_1);
    DAT_00896f48 = -1;
  }
  return;
}



undefined1 *
fn_0024b488(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [72];
  
  fn_00692e98(auStack_a0);
  fn_00183718(&local_ec,auStack_a0,&DAT_0024b5a8);
  puVar4 = &local_ec;
  if (local_ec != 0) {
    puVar4 = &DAT_00896f34;
  }
  local_f4 = local_d8;
  uStack_f0 = uStack_d4;
  uStack_104 = uStack_e8;
  uStack_100 = uStack_e4;
  uStack_fc = uStack_e0;
  uStack_f8 = uStack_dc;
  uVar3 = 0;
  if (local_ec != 0) {
    do {
      fn_001028d4(auStack_88,(char *)&DAT_0024b5b4,param_3,param_4);
      uVar1 = fn_002febd8(auStack_88);
      fn_00176ec8(auStack_68,&uStack_104,uVar3);
      fn_0017821c(&uStack_e8,auStack_68,0x44);
      iVar2 = fn_00147e6c(&uStack_e8,auStack_88,uVar1);
      if (iVar2 == 0) {
        fn_00176ec8(auStack_68,&uStack_104,uVar3);
        fn_0017821c(&uStack_e8,auStack_68,0x44);
        local_98 = local_c8;
        uStack_94 = uStack_c4;
        uStack_90 = uStack_c0;
        uVar1 = fn_00261d04(param_1,puVar4[3],puVar4[4]);
        fn_00232f80(uVar1,&local_98);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_ec);
  }
  return auStack_a0;
}



void fn_0024ae30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_20c;
  uint local_208;
  undefined4 uStack_204;
  uint uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint local_1f0;
  undefined1 *local_1ec;
  undefined1 *local_1e8;
  undefined1 *local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 uStack_1d8;
  uint local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 *local_19c;
  undefined1 *local_198;
  undefined1 *local_194;
  char cStack_190;
  char local_18f [31];
  uint local_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined1 uStack_14c;
  char local_14b [67];
  undefined1 auStack_108 [2];
  undefined1 auStack_106 [74];
  undefined1 uStack_bc;
  char local_bb;
  undefined1 auStack_78 [68];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_00183718(&local_1e0,param_3,(char *)&DAT_0024b21c);
  local_20c = local_1e0;
  local_1fc = local_1d0;
  uStack_1f8 = uStack_1cc;
  uStack_1f4 = uStack_1c8;
  local_208 = local_1dc;
  uStack_204 = uStack_1d8;
  uStack_200 = local_1d4;
  local_1dc = local_1e0;
  puVar6 = &local_1d4;
  if (0x1f < local_1e0) {
    puVar6 = &local_1dc;
  }
  local_1e8 = (undefined1 *)0x0;
  local_1ec = (undefined1 *)0x0;
  local_1e4 = (undefined1 *)0x0;
  local_1d4 = 0x20;
  uVar8 = *puVar6;
  local_1ec = (undefined1 *)fn_00100fc6(uVar8,0);
  puVar5 = local_1ec;
  for (uVar7 = local_1dc; uVar7 != 0; uVar7 = uVar7 - 1) {
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
    }
    puVar5 = puVar5 + 1;
  }
  local_19c = (undefined1 *)0x0;
  local_1e4 = local_1ec + uVar8;
  local_1e8 = local_1ec + local_1dc;
  puVar6 = &local_1dc;
  local_1f0 = local_20c;
  local_1dc = 0x20;
  local_198 = (undefined1 *)0x0;
  local_194 = (undefined1 *)0x0;
  if (0x1f < local_20c) {
    puVar6 = &local_1f0;
  }
  uVar8 = *puVar6;
  local_19c = (undefined1 *)fn_00100fc6(uVar8,0);
  puVar5 = local_19c;
  for (uVar7 = local_1f0; uVar7 != 0; uVar7 = uVar7 - 1) {
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 0;
    }
    puVar5 = puVar5 + 1;
  }
  uVar7 = 0;
  local_194 = local_19c + uVar8;
  local_198 = local_19c + local_1f0;
  if (local_20c != 0) {
    do {
      fn_00176ec8(&cStack_190,&local_208,uVar7);
      fn_0017821c(&local_1e0,&cStack_190,0x44);
      uVar8 = fn_002febd8(&local_1e0);
      if (10 < uVar8) {
        uVar8 = 0;
        while( true ) {
          fn_00176ec8(&uStack_14c,&local_208,uVar7);
          fn_0017821c(&cStack_190,&uStack_14c,0x44);
          uVar1 = fn_002febd8(&cStack_190);
          if (uVar1 <= uVar8) break;
          fn_00176ec8(auStack_108,&local_208,uVar7);
          fn_0017821c(&local_1e0,auStack_108,0x44);
          if ((&cStack_190)[uVar8 - 0x50] == '_') break;
          uVar8 = uVar8 + 1;
        }
        fn_00176ec8(&local_1e0,&local_208,uVar7);
        fn_0017821c(&uStack_14c,&local_1e0,0x44);
        iVar2 = fn_00101c78(local_14b + uVar8,0,10);
        do {
          uVar1 = uVar8;
          fn_00176ec8(&local_1e0,&local_208,uVar7);
          fn_0017821c(&uStack_14c,&local_1e0,0x44);
          uVar8 = fn_002febd8(&uStack_14c);
          if (uVar8 <= uVar1 + 1) break;
          fn_00176ec8(auStack_108,&local_208,uVar7);
          fn_0017821c(&cStack_190,auStack_108,0x44);
          uVar8 = uVar1 + 1;
        } while ((&cStack_190)[uVar1 + 1] != '_');
        fn_00176ec8(&local_1e0,&local_208,uVar7);
        fn_0017821c(auStack_108,&local_1e0,0x44);
        iVar3 = fn_00101c78(auStack_106 + uVar1,0,10);
        fn_00144810(DAT_008977e8);
        uVar8 = fn_006a8708();
        iVar4 = (int)((longlong)(int)uVar8 * -0x6e5d4c3b + ((ulonglong)uVar8 << 0x20) >> 0x20);
        iVar4 = uVar8 + ((iVar4 >> 0xb) - (iVar4 >> 0x1f)) * -0xe10;
        if ((iVar4 < iVar2 * 0x1e) || (iVar3 * 0x1e < iVar4)) {
          local_19c[uVar7] = 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_20c);
  }
  fn_00248f44(&local_1ec,&local_20c,&DAT_008cd570,&local_19c,param_4);
  iVar2 = 0;
  uVar7 = 0;
  if (local_20c != 0) {
    do {
      if (local_1ec[uVar7] != '\0') {
        fn_00176ec8(&uStack_bc,&local_208,uVar7);
        fn_0017821c(&uStack_14c,&uStack_bc,0x44);
        if (local_14b[0] == 'f') {
LAB_0024b280:
          fn_00144810(DAT_008977e8);
          iVar3 = fn_006b551c();
          if (iVar3 == 1) {
            iVar3 = 2;
          }
          else {
            iVar3 = fn_00163868(100);
            if (iVar3 < 0x14) {
              iVar3 = fn_00163868(DAT_008cd550 - DAT_008cd54c >> 2);
              iVar3 = *(int *)(DAT_008cd54c + iVar3 * 4);
            }
            else {
              iVar3 = fn_00163868(DAT_008cd544 - DAT_008cd540 >> 2);
              iVar3 = *(int *)(DAT_008cd540 + iVar3 * 4);
            }
          }
        }
        else {
          fn_00176ec8(auStack_108,&local_208,uVar7);
          fn_0017821c(&local_1e0,auStack_108,0x44);
          if ('/' < ((unsigned int)(local_1e0) >> 8) & 0xff) {
            fn_00176ec8(auStack_78,&local_208,uVar7);
            fn_0017821c(&cStack_190,auStack_78,0x44);
            if (local_18f[0] < ':') goto LAB_0024b280;
          }
          fn_00176ec8(&local_1e0,&local_208,uVar7);
          fn_0017821c(&uStack_bc,&local_1e0,0x44);
          if (local_bb != 'p') goto LAB_0024b280;
          fn_00176ec8(&local_1e0,&local_208,uVar7);
          fn_0017821c(auStack_108,&local_1e0,0x44);
          iVar3 = fn_00101c78(auStack_106,0,10);
        }
        iVar4 = fn_00371254();
        if (iVar3 < iVar4) {
          fn_00176ec8(&uStack_14c,&local_208,uVar7);
          fn_0017821c(&cStack_190,&uStack_14c,0x44);
          local_1e0 = local_170;
          local_1dc = uStack_16c;
          uStack_1d8 = uStack_168;
          iVar4 = fn_0024aa90(local_34,uStack_30,(int)(short)iVar3);
          *(char *)(iVar4 + 100) = (char)uVar7;
          iVar3 = fn_003711a8(iVar3);
          fn_00247fd4(iVar4,param_3,*(undefined1 *)(iVar3 + 5));
          fn_0024bdc8(uVar7,1);
          iVar2 = iVar2 + 1;
          if (uVar7 != 0xffffffff) {
            if ((uint)(DAT_008cd574 - DAT_008cd570) <= uVar7) {
              fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,uVar7,DAT_008cd574 - DAT_008cd570);
            }
            *(undefined1 *)(DAT_008cd570 + uVar7) = 1;
          }
          if (param_4 <= iVar2) break;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_20c);
  }
  puVar5 = local_19c;
  if (local_198 < local_19c) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_198);
  }
  fn_001008c4(local_19c,(int)local_194 - (int)local_19c,0);
  puVar5 = local_1ec;
  if (local_1e8 < local_1ec) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_1e8);
  }
  fn_001008c4(local_1ec,(int)local_1e4 - (int)local_1ec,0);
  return;
}



undefined4 fn_0024ad8c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int in_r3;
  int local_10;
  
  piVar5 = &local_10;
  local_10 = in_r3;
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006b551c();
  if (iVar1 == 2) {
    uVar2 = 0;
  }
  else {
    fn_00144810(DAT_008977e8);
    iVar1 = fn_006a86a0();
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    else {
      fn_00144810(DAT_008977e8);
      uVar3 = fn_006a86a0();
      iVar1 = (int)((longlong)(int)uVar3 * -0x77777777 + ((ulonglong)uVar3 << 0x20) >> 0x20);
      fn_00144810(DAT_008977e8);
      iVar4 = fn_006a86b8();
      iVar1 = (((iVar1 >> 4) - (iVar1 >> 0x1f)) - iVar4) / 100;
    }
    if (10 < iVar1 + 6) {
      piVar5 = &DAT_007c9e48;
    }
    local_10 = iVar1 + 6;
    uVar2 = *piVar5;
  }
  return uVar2;
}


