#include "002442e8_00259f7c.h"



uint fn_00259f7c(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0x51) {
    iVar5 = fn_002d8370(0xffffffff);
    if (iVar5 != 0) {
      return 0;
    }
    goto LAB_0025a230;
  }
  if (param_1 == 8) {
    iVar5 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    if (iVar5 < 1) {
      return 0;
    }
    goto LAB_0025a230;
  }
  if (param_1 == 4) {
    iVar5 = fn_00154ac8(0x1e2);
    if (iVar5 == 0) {
      uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
      iVar5 = fn_006b83e4(uVar7);
      iVar3 = fn_006b84b0(uVar7);
      iVar4 = fn_006b8478(uVar7);
      if (iVar4 <= iVar5 + iVar3) {
        bVar2 = 0;
        uVar6 = 0;
        iVar5 = fn_006b8478(uVar7);
        if (iVar5 < 1) {
          return 0;
        }
        do {
          iVar5 = fn_0028b074(uVar7,uVar6);
          if (iVar5 != 0) {
            fn_0020bbc4(auStack_28);
            fn_006bfe90(auStack_24);
            cVar1 = fn_001cab7c();
            bVar2 = cVar1 + bVar2;
            if (4 < bVar2) goto LAB_0025a100;
          }
          uVar6 = uVar6 + 1 & 0xff;
          iVar5 = fn_006b8478(uVar7);
        } while ((int)uVar6 < iVar5);
        if (bVar2 < 5) {
          return 0;
        }
      }
    }
LAB_0025a100:
    fn_00144834(0x1e2,1);
    goto LAB_0025a230;
  }
  if (param_1 == 2 || param_1 == 6) {
LAB_0025a118:
    if (**(int **)(DAT_008977e0 + 0x40) != 0) {
      return 0;
    }
    iVar5 = fn_002fb61c();
    if (iVar5 != 0) {
      return 0;
    }
    iVar5 = fn_002d8370(0xffffffff);
    if (iVar5 != 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006aa2ec();
    if (iVar5 == 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006aaa00();
    if (iVar5 != 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006aa580();
    if (iVar5 == 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006a9960();
  }
  else {
    if (param_1 != 10) {
      if (param_1 != 0xb) goto LAB_0025a230;
      goto LAB_0025a118;
    }
    fn_006f7a84();
    iVar5 = fn_006aa2ec();
    if (iVar5 == 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006aaa00();
    if (iVar5 != 0) {
      return 0;
    }
    fn_006f7a84(DAT_008977e0);
    iVar5 = fn_006a9960();
  }
  if (iVar5 != 0) {
    return 0;
  }
LAB_0025a230:
  uVar6 = fn_00154ac8(*(undefined4 *)(&DAT_007c0ce8 + param_1 * 4));
  return uVar6 ^ 1;
}



undefined4 fn_002442e8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *unaff_r11;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [4];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x69);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894230) goto LAB_00244340;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00244340:
  param_1[0x2c] = (int)puVar1;
  iVar3 = fn_006c2278();
  if (iVar3 == 0) {
    uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar3 = fn_006b83e4(uVar6);
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        local_30 = 0;
        local_2c = 0;
        local_30 = fn_00144df4(uVar6,iVar4);
        fn_00348e8c(param_1[0x2c],&local_30);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (*(char *)(param_1[0x2c] + 0x1d) == '\0') {
      iVar3 = fn_006b84b0(uVar6);
      if (0 < iVar3) {
        unaff_r11 = &DAT_007c6de0;
      }
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          local_30 = *unaff_r11;
          local_2c = unaff_r11[1];
          local_30 = fn_006b8538(uVar6,iVar4);
          fn_00348e8c(param_1[0x2c],&local_30);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
  }
  fn_002c330c(&local_68);
  local_68 = DAT_00894254;
  local_64 = DAT_00894258;
  local_60 = fn_006c2278(param_1[0x2c]);
  local_5c = *(undefined4 *)(param_1[0x2c] + 0xc);
  uVar6 = fn_0022f584((char *)&DAT_002445d4,0);
  fn_00147974(auStack_4c,uVar6);
  local_3c = 0;
  uVar6 = fn_0022f750(&DAT_002445ec);
  fn_00147974(auStack_40,uVar6);
  local_3b = 1;
  uVar6 = fn_0022f584((char *)&DAT_002445f0,0);
  fn_00147974(auStack_48,uVar6);
  local_3a = 1;
  fn_002c29a0(param_1,&local_68);
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942d0) goto LAB_002444cc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002444cc:
  param_1[0x2d] = (int)puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) {
        puVar5 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  param_1[0x2e] = (int)puVar5;
  fn_00689930(param_1,0x2d,0);
  if (*(char *)(param_1[0x2c] + 0x1c) != '\0') {
    fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  (**(code **)(*param_1 + 0x124))(param_1);
  iVar4 = *(int *)(param_1[0x2c] + 0xc);
  iVar3 = fn_006c2278();
  if (iVar4 < iVar3) {
    puVar5 = (undefined4 *)fn_006c226c(param_1[0x2c],iVar4);
    uVar6 = *puVar5;
  }
  else {
    uVar6 = 0;
  }
  fn_0025f354(param_1[0x2e],uVar6);
  iVar3 = fn_001588d4(auStack_40);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return 1;
}


