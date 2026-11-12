#include "00220a9c_00221620.h"



undefined4 fn_00221620(int *param_1)

{
  fn_00224908(param_1,1);
  (**(code **)(*param_1 + 0x44))(param_1,0,0,1);
  return 1;
}



void fn_00221500(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x244) = (char)param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x194) != -1) {
      fn_00223e50(param_1);
    }
    fn_00224680(param_1,0);
  }
  else {
    if (*(char *)(param_1 + 0x194) != -1) {
      fn_00223cd4(param_1);
    }
    if (*(char *)(param_1 + 0x23c) == '\0') {
      if (*(char *)(param_1 + 0x243) == '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x184);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x17c);
      }
      uVar1 = fn_0017fde4(uVar1);
      iVar2 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
      if (iVar2 == 0) {
        fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),uVar1);
        *(undefined1 *)(param_1 + 0x23c) = 1;
      }
    }
  }
  fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
  return;
}



void fn_00221240(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_008c92d4;
  uVar3 = DAT_008c92d0;
  uVar2 = DAT_008c92cc;
  DAT_008c92cc = 0;
  DAT_008c92d0 = 0;
  DAT_008c92d4 = 0;
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    for (; uVar1 != uVar3; uVar1 = uVar1 + 0x60) {
    }
  }
  fn_002feef8(uVar2,(int)(iVar4 - uVar2) / 0x60,0);
  return;
}



void fn_00220a9c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_001287b4();
  iVar2 = fn_0011c184(L"patch:/data/Field/Table/npc_info.nut",uVar1,4,5);
  if ((iVar2 != 0) && (iVar3 = fn_00145ac0(), iVar3 != 0)) {
    fn_00128f40(auStack_18);
    uVar1 = fn_0012a26c(iVar2);
    uVar4 = fn_00145ac0(iVar2);
    iVar3 = fn_00128ee0(auStack_18,uVar4,uVar1);
    if (iVar3 == 0) {
      fn_00128fc4(auStack_18);
      return;
    }
    fn_00220b38();
    fn_0012d73c(iVar2);
    fn_00128fc4(auStack_18);
  }
  return;
}



void fn_00220b38(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined4 *local_a4;
  undefined1 auStack_a0 [10];
  undefined1 local_96;
  undefined1 auStack_74 [28];
  undefined4 local_58;
  undefined1 auStack_54 [16];
  undefined2 local_44;
  undefined2 local_42;
  int local_40;
  undefined1 *local_3c;
  uint local_38;
  uint local_34 [3];
  undefined4 local_28;
  
  local_28 = param_1;
  local_40 = fn_00128e54(param_1,DAT_00891e2c);
  iVar11 = 0;
  local_40 = local_40 / 0x11;
  if (0 < local_40) {
    do {
      iVar9 = iVar11 * 0x11;
      local_3c = (undefined1 *)fn_00128eac(local_28,DAT_00891e2c,iVar9);
      uVar1 = fn_002febd8();
      puVar2 = (undefined4 *)&DAT_008f9d04;
      if (uVar1 != 0) {
        puVar8 = local_34;
        if (0x20 < uVar1) {
          puVar8 = &local_38;
        }
        local_38 = uVar1;
        local_34[0] = 0x20;
        uVar12 = *puVar8;
        if (0xfffffff1 < uVar12) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar12,0xfffffff1);
        }
        if (uVar12 < uVar1) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar12);
        }
        if (uVar12 == 0) {
          puVar2 = &DAT_008f9cf8;
        }
        else {
          puVar2 = (undefined4 *)fn_00100fc6(uVar12 + 0xe,0);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
          }
          puVar2[2] = uVar1;
          puVar7 = (undefined1 *)((int)puVar2 + uVar1 + 0xc);
          puVar2[1] = uVar12;
          *puVar2 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
          }
        }
        puVar2 = puVar2 + 3;
      }
      local_a4 = puVar2;
      fn_00301a9c(puVar2,local_3c,uVar1);
      fn_001782b8(auStack_a0,local_a4,10);
      local_96 = fn_00128e7c(local_28,DAT_00891e2c,iVar9 + 1);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 2);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 3);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 4);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 5);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 6);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 7);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 8);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 9);
      uVar3 = fn_00128eac(local_28,DAT_00891e2c,iVar9 + 10);
      fn_001008cc(&local_a4,uVar3);
      fn_001782b8(auStack_74,local_a4,0x18);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 0xb);
      local_3c = (undefined1 *)fn_00128eac(local_28,DAT_00891e2c,iVar9 + 0xc);
      uVar1 = fn_002febd8();
      puVar2 = (undefined4 *)&DAT_008f9d04;
      if (uVar1 != 0) {
        puVar8 = local_34;
        if (0x20 < uVar1) {
          puVar8 = &local_38;
        }
        local_38 = uVar1;
        local_34[0] = 0x20;
        uVar12 = *puVar8;
        if (0xfffffff1 < uVar12) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar12,0xfffffff1);
        }
        if (uVar12 < uVar1) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar12);
        }
        if (uVar12 == 0) {
          puVar2 = &DAT_008f9cf8;
        }
        else {
          puVar2 = (undefined4 *)fn_00100fc6(uVar12 + 0xe,0);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
          }
          puVar7 = (undefined1 *)((int)puVar2 + uVar1 + 0xc);
          *puVar2 = 0;
          puVar2[1] = uVar12;
          puVar2[2] = uVar1;
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
          }
        }
        puVar2 = puVar2 + 3;
      }
      fn_00301a9c(puVar2,local_3c,uVar1);
      local_58 = fn_001639b8(puVar2);
      uVar3 = fn_00128eac(local_28,DAT_00891e2c,iVar9 + 0xd);
      fn_001008cc(&local_a4,uVar3);
      fn_001782b8(auStack_54,local_a4,10);
      fn_005f6dac(local_28,DAT_00891e2c,iVar9 + 0xe);
      local_44 = fn_00128e7c(local_28,DAT_00891e2c,iVar9 + 0xf);
      local_42 = fn_00128e7c(local_28,DAT_00891e2c,iVar9 + 0x10);
      uVar1 = DAT_008c92d0;
      if (DAT_008c92d0 == DAT_008c92d4) {
        local_3c = auStack_a0;
        uVar12 = (int)(DAT_008c92d0 - DAT_008c92cc) / 0x60;
        if (uVar12 < (uint)((int)(DAT_008c92d4 - DAT_008c92cc) / 0x60)) {
          uVar12 = DAT_008c92d0 + 0x60;
          bVar13 = DAT_008c92d0 != 0;
          iVar9 = DAT_008c92d0 - 0x60;
          DAT_008c92d0 = uVar12;
          if (bVar13) {
            fn_0017821c(uVar1,iVar9,0x60);
          }
          uVar12 = uVar1 - 0x60;
          uVar5 = uVar1;
          if (uVar1 < uVar12) {
            if (0 < (int)(uVar12 - uVar1)) {
              uVar5 = (int)(uVar12 - uVar1) / 0x60;
              uVar4 = uVar1;
              if ((uVar5 & 1) != 0) {
                uVar4 = uVar1 - 0x60;
                uVar12 = uVar1 - 0xc0;
                fn_0017821c(uVar4,uVar12,0x60);
              }
              for (iVar9 = (int)uVar5 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
                fn_0017821c(uVar4 - 0x60,uVar12 - 0x60,0x60);
                uVar12 = uVar12 - 0xc0;
                uVar4 = uVar4 - 0xc0;
                fn_0017821c(uVar4,uVar12,0x60);
              }
            }
          }
          else {
            while (uVar1 != uVar12) {
              uVar12 = uVar12 - 0x60;
              fn_0017821c(uVar5 - 0x60,uVar12,0x60);
              uVar5 = uVar5 - 0x60;
            }
          }
          puVar7 = local_3c;
          goto LAB_00221020;
        }
        uVar5 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
        if (uVar5 < uVar12 + 0x20) {
          uVar5 = uVar12 + 0x20;
        }
        uVar6 = fn_00100fc6(uVar5 * 0x60,0);
        uVar4 = uVar6;
        for (uVar12 = DAT_008c92cc; uVar12 != uVar1; uVar12 = uVar12 + 0x60) {
          if (uVar4 != 0) {
            fn_0017821c(uVar4,uVar12,0x60);
          }
          uVar4 = uVar4 + 0x60;
        }
        iVar9 = uVar6 + ((int)(uVar1 - DAT_008c92cc) / 0x60) * 0x60;
        if (iVar9 != 0) {
          fn_0017821c(iVar9,local_3c);
        }
        uVar12 = DAT_008c92d0;
        iVar9 = uVar6 + ((int)(uVar1 - DAT_008c92cc) / 0x60) * 0x60;
        for (; uVar1 != uVar12; uVar1 = uVar1 + 0x60) {
          iVar9 = iVar9 + 0x60;
          if (iVar9 != 0) {
            fn_0017821c(iVar9,uVar1,0x60);
          }
        }
        iVar9 = DAT_008c92d0 - DAT_008c92cc;
        uVar1 = DAT_008c92cc;
        if (DAT_008c92d0 < DAT_008c92cc) {
          do {
            uVar1 = uVar1 + 0x60;
          } while (uVar1 != DAT_008c92d0);
        }
        fn_001008c4(DAT_008c92cc,(int)(DAT_008c92d4 - DAT_008c92cc) / 0x60,0);
        DAT_008c92d4 = uVar6 + uVar5 * 0x60;
        DAT_008c92d0 = uVar6 + (iVar9 / 0x60) * 0x60 + 0x60;
        DAT_008c92cc = uVar6;
      }
      else {
        uVar12 = DAT_008c92d0 + 0x60;
        bVar13 = DAT_008c92d0 != 0;
        DAT_008c92d0 = uVar12;
        if (bVar13) {
          puVar7 = auStack_a0;
LAB_00221020:
          fn_0017821c(uVar1,puVar7,0x60);
        }
      }
      if (puVar2 != (undefined4 *)&DAT_008f9d04) {
        iVar9 = puVar2[-3];
        if ((iVar9 == -1) ||
           ((puVar2 + -3 != &DAT_008f9cf8 && (puVar2[-3] = iVar9 + -1, iVar9 == 0)))) {
          fn_001008c4(puVar2 + -3,puVar2[-2] + 0xe,0);
        }
      }
      if (local_a4 != (undefined4 *)&DAT_008f9d04) {
        piVar10 = local_a4 + -3;
        iVar9 = *piVar10;
        if ((iVar9 == -1) || ((piVar10 != &DAT_008f9cf8 && (*piVar10 = iVar9 + -1, iVar9 == 0)))) {
          fn_001008c4(local_a4 + -3,local_a4[-2] + 0xe,0);
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_40);
  }
  return;
}


