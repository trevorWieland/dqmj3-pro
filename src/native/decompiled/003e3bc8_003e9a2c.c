#include "003e3bc8_003e9a2c.h"



void fn_003e9a2c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int local_a4;
  undefined1 auStack_a0 [44];
  undefined4 local_74;
  int local_70 [2];
  undefined1 auStack_68 [68];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xc1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895c20) goto LAB_003e9a74;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e9a74:
  if (*(char *)(puVar1 + 4) != '\0') {
    local_74 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    local_a4 = 5;
    piVar6 = &local_a4;
    if ((int)puVar1[3] < 5) {
      piVar6 = local_70;
    }
    local_70[0] = puVar1[3];
    iVar8 = 0;
    if (0 < *piVar6) {
      do {
        local_a4 = 5;
        puVar2 = (undefined4 *)(puVar1[2] + iVar8 * 0x128);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9ea0,iVar8 + 1);
        uVar3 = fn_001827b0(local_74,auStack_a0);
        fn_00688c04(uVar3,*puVar2,0);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9eb0,iVar8 + 1);
        uVar3 = fn_001827b0(local_74,auStack_a0);
        fn_00190d50(uVar3,puVar2 + 9);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9ec4,iVar8 + 1);
        uVar3 = fn_002303c0(*(undefined2 *)((int)puVar2 + 0x6e));
        uVar4 = fn_001827b0(local_74,auStack_a0);
        fn_00190d50(uVar4,uVar3);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9ed4,iVar8 + 1);
        fn_00231700(auStack_68,0x20,(int)*(short *)(puVar2 + 0x1b),0);
        uVar3 = fn_001827b0(local_74,auStack_a0);
        fn_00190d50(uVar3,auStack_68);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9ee8,iVar8 + 1);
        uVar7 = puVar2[1];
        uVar3 = fn_001827b0(local_74,auStack_a0);
        fn_00688c04(uVar3,uVar7 / 0x708,0);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9efc,iVar8 + 1);
        iVar5 = fn_001828f0(local_74,auStack_a0);
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        fn_001028d4(auStack_a0,(char *)&DAT_003e9f0c,iVar8 + 1);
        uVar7 = puVar2[1];
        uVar3 = fn_001827b0(local_74,auStack_a0,(uVar7 / 0x1e) * -0x77777777);
        fn_00688c04(uVar3,(uVar7 / 0x1e) % 0x3c,2);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9f1c,iVar8 + 1);
        iVar5 = fn_001828f0(local_74,auStack_a0);
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        fn_001028d4(auStack_a0,(char *)&DAT_003e9f2c,iVar8 + 1);
        uVar7 = puVar2[1];
        uVar3 = fn_001827b0(local_74,auStack_a0,uVar7 * -0x77777777);
        fn_00688c04(uVar3,((uVar7 % 0x1e) * 100) / 0x1e,2);
        fn_001028d4(auStack_a0,(char *)&DAT_003e9f3c,iVar8 + 1);
        uVar3 = fn_001828f0(local_74,auStack_a0);
        fn_00289ac0(*(undefined4 *)(param_1 + 0x70),uVar3,*(undefined2 *)((int)puVar2 + 0x6e));
        iVar5 = fn_001828f0(local_74,auStack_a0);
        iVar8 = iVar8 + 1;
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        local_a4 = 5;
        piVar6 = &local_a4;
        if ((int)puVar1[3] < 5) {
          piVar6 = local_70;
        }
        local_70[0] = puVar1[3];
        if (*piVar6 <= iVar8) goto joined_r0x003e9d38;
      } while( true );
    }
    do {
      fn_001028d4(auStack_a0,(char *)&DAT_003e9ea0,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9eb0,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9ec4,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9ed4,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9ee8,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9efc,iVar8 + 1);
      iVar5 = fn_001828f0(local_74,auStack_a0);
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
      fn_001028d4(auStack_a0,(char *)&DAT_003e9f0c,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9f1c,iVar8 + 1);
      iVar5 = fn_001828f0(local_74,auStack_a0);
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
      fn_001028d4(auStack_a0,(char *)&DAT_003e9f2c,iVar8 + 1);
      uVar3 = fn_001827b0(local_74,auStack_a0);
      fn_00190d50(uVar3,"");
      fn_001028d4(auStack_a0,(char *)&DAT_003e9f3c,iVar8 + 1);
      iVar5 = fn_001828f0(local_74,auStack_a0);
      iVar8 = iVar8 + 1;
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
joined_r0x003e9d38:
    } while (iVar8 < 5);
    *(undefined1 *)(puVar1 + 4) = 0;
  }
  return;
}



undefined4 * fn_003e8784(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_8f8 [2272];
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_0083388c;
  fn_0028e434(puVar1[4],&DAT_007c8b24);
  fn_0028e434(puVar1[5],&DAT_007c8c28);
  fn_0028e434(puVar1[3],&DAT_007c909c);
  fn_0028e434(puVar1[6],&DAT_007c90ec);
  puVar2 = (undefined4 *)fn_001f74f8(puVar1,0x95);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894c6c) goto LAB_003e8810;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003e8810:
  fn_00290734(auStack_8f8);
  fn_0017821c(puVar2 + 0x12,auStack_8f8,0x8d8);
  fn_0017821c(puVar2 + 0x248,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),0xcc);
  fn_001f748c(puVar1,0x95,0);
  return puVar1;
}



undefined4 fn_003e3bc8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  wchar16 *local_938;
  char *pcStack_934;
  int local_930;
  int local_92c;
  undefined4 uStack_928;
  int local_924;
  undefined4 local_920;
  undefined4 *local_91c;
  undefined4 *local_918;
  undefined4 *local_914;
  undefined4 *local_910;
  undefined4 local_90c;
  undefined1 local_906;
  undefined4 local_904;
  undefined1 auStack_900 [196];
  undefined1 local_83c [2072];
  
  iVar2 = fn_002e2dc8(*(undefined4 *)(DAT_00897804 + 0x20),4);
  puVar9 = (undefined4 *)0x0;
  if (iVar2 == 0) {
    fn_0079cfec(param_1 + 0xb8,7,0);
    **(undefined4 **)(param_1 + 0xb8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 8) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0xc) = 3;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x10) = 4;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x14) = 5;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x18) = 7;
  }
  else {
    fn_0079cfec(param_1 + 0xb8,8,0);
    **(undefined4 **)(param_1 + 0xb8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 8) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0xc) = 3;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x10) = 4;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x14) = 5;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x18) = 6;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0x1c) = 7;
  }
  piVar3 = (int *)fn_001f74ec(param_1,0x95);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar4 == &DAT_00894c6c) goto LAB_003e3cf4;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003e3cf4:
  fn_002c330c(&local_938);
  local_938 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_934 = "common_0100.bflyt";
  local_930 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 2;
  local_92c = piVar3[0x27e];
  uStack_928 = 0;
  local_924 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 2;
  local_920 = 0;
  uVar5 = fn_0022f750((char *)&DAT_003e4078);
  fn_00147974(&local_91c,uVar5);
  fn_00147974(&local_918,&DAT_003e408c);
  fn_00147974(&local_914,&DAT_003e408c);
  fn_00147974(&local_910,&DAT_003e408c);
  local_90c = 0;
  local_906 = 1;
  fn_002c29a0(param_1,&local_938);
  iVar2 = *(int *)(param_1 + 0xb8);
  uVar8 = 0;
  if (*(int *)(param_1 + 0xbc) - iVar2 >> 2 != 0) {
    do {
      uVar5 = fn_0022f750(*(undefined4 *)(&DAT_007c719c + *(int *)(iVar2 + uVar8 * 4) * 8));
      fn_0031b78c(param_1,uVar8,0,uVar5);
      iVar2 = *(int *)(param_1 + 0xb8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(param_1 + 0xbc) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0xb4) = piVar3[0xc];
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar6 == &DAT_00894d28) {
        puVar9 = puVar4;
        break;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  if ((char)piVar3[0x10] == '\0') {
    if (*(char *)((int)piVar3 + 0x9f5) != '\0') {
      fn_0017821c(auStack_900,puVar9 + 7,0x8d8);
      uVar8 = 0;
      do {
        uVar1 = fn_006b630c(*(undefined4 *)(DAT_00897804 + 8),uVar8 & 0xff);
        uVar7 = uVar8 + 1;
        local_83c[uVar8] = uVar1;
        uVar8 = uVar7;
      } while ((int)uVar7 < 5);
      fn_0017821c(puVar9 + 7,auStack_900,0x8d8);
      *(undefined1 *)((int)piVar3 + 0x9f5) = 0;
    }
  }
  else {
    (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 100));
    *(undefined1 *)(piVar3 + 0x10) = 0;
    *(undefined1 *)((int)piVar3 + 0x9f6) = 0;
    fn_0017821c(puVar9 + 7,piVar3 + 0x12,0x8d8);
  }
  fn_00689efc(param_1,0x3c,0);
  uVar7 = 0;
  uVar8 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 2;
  if (uVar8 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0xb8) + uVar7 * 4) == 6) {
        if (*(char *)(puVar9 + 0x1f) == '\0') {
          local_904 = DAT_00894cc8;
        }
        else {
          local_904 = DAT_00894cd0;
        }
        fn_002c37e0(param_1,uVar7,&local_904);
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if (local_910 != &DAT_008f9cf4) {
    piVar3 = local_910 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_910 + -3,local_910[-2] + 8,0);
    }
  }
  if (local_914 != &DAT_008f9cf4) {
    piVar3 = local_914 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_914 + -3,local_914[-2] + 8,0);
    }
  }
  if (local_918 != &DAT_008f9cf4) {
    piVar3 = local_918 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_918 + -3,local_918[-2] + 8,0);
    }
  }
  if (local_91c != &DAT_008f9cf4) {
    piVar3 = local_91c + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_91c + -3,local_91c[-2] + 8,0);
    }
  }
  return 1;
}


