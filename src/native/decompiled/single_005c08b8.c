#include "single_005c08b8.h"
void fn_005c08b8(int *param_1)
{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_274 [72];
  undefined4 local_22c;
  undefined4 local_228;
  undefined1 local_224 [380];
  undefined1 auStack_a8 [98];
  undefined1 auStack_46 [14];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31 [4];
  undefined1 local_2d;
  undefined1 auStack_28 [12];
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  puVar10 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008963ac) goto LAB_005c0910;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005c0910:
  *(char *)((int)param_1 + 0x109) = (char)param_1[0x42];
  param_1[0x43] = param_1[0x43] + 1;
  *(char *)(param_1 + 0x42) = *(char *)((int)param_1 + 0x10a);
  if (*(char *)((int)param_1 + 0x109) == *(char *)((int)param_1 + 0x10a)) {
    param_1[0x44] = param_1[0x44] + 1;
  }
  else {
    param_1[0x44] = 0;
  }
  iVar5 = fn_006e92b4(param_1);
  if (iVar5 != 0) {
    fn_00748e14(param_1);
  }
  uVar6 = fn_006e92b4(param_1);
  fn_001caa40(param_1[0x27],uVar6);
  cVar1 = (char)param_1[0x42];
  if (((cVar1 != '\0' && cVar1 != '\x12') && (cVar1 != '\x13' && cVar1 != '\x14')) &&
     ((cVar1 != '\x10' && cVar1 != '\x0f') && cVar1 != '\x11')) {
    fn_005f6270(puVar3[0x11]);
    iVar5 = fn_001296d0(DAT_00897850);
    if ((iVar5 != 0) && ((char)param_1[0x42] != '\x03' && (char)param_1[0x42] != '\x04')) {
      param_1[0x44] = 0;
      *(undefined1 *)((int)param_1 + 0x10a) = 0x14;
      *(undefined1 *)((int)param_1 + 0x109) = 0x14;
      *(undefined1 *)(param_1 + 0x42) = 0x14;
    }
  }
  switch((char)param_1[0x42]) {
  case '\x01':
    uVar2 = 2;
    goto LAB_005c0a58;
  case '\x02':
    iVar5 = fn_00747044(param_1[0x47],1);
    if (iVar5 != 0) {
      iVar9 = 0;
      iVar5 = *(int *)(param_1[0x47] + 8);
      iVar11 = *(int *)(param_1[0x47] + 0xc);
      do {
        if (iVar9 < (iVar11 - iVar5) / 0x14) {
          fn_0031b78c(param_1,iVar9,0,
                       *(undefined4 *)(*(int *)(param_1[0x47] + 8) + iVar9 * 0x14 + 4));
        }
        else {
          uVar6 = fn_0022f750((char *)&DAT_005c189c);
          fn_0031b78c(param_1,iVar9,0,uVar6);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
                    /* WARNING: Subroutine does not return */
      fn_006ba250(param_1);
    }
    break;
  case '\x03':
    if (param_1[0x44] == 0) {
      fn_007488c0(param_1,DAT_00898214,(char *)&DAT_005c0e08);
    }
    iVar5 = fn_00747044(param_1[0x47],1);
    iVar11 = (**(code **)(**(int **)param_1[0x47] + 0x14))();
    if (iVar11 != 1) {
      if (iVar5 != 0) {
        *(undefined1 *)((int)param_1 + 0x10a) = 0x10;
        *(undefined1 *)(param_1 + 0x46) = 0x11;
        return;
      }
      local_288 = 0;
      fn_00675a7c(puVar3[0x11],1,param_1[0x4c],4);
      uVar2 = 4;
LAB_005c13bc:
      *(undefined1 *)((int)param_1 + 0x10a) = uVar2;
      return;
    }
    break;
  case '\x04':
    if (param_1[0x44] == 0) {
      *(undefined1 *)(param_1[0x4b] + 8) = 0;
    }
    iVar5 = (**(code **)(*(int *)puVar3[0x11] + 0x14))();
    if (iVar5 == 0) {
      if (*(int *)(puVar3[0x11] + 0x44) != 0) {
        iVar5 = fn_002359a8();
        if (iVar5 == 0) {
          *(undefined1 *)((int)param_1 + 0x10a) = 0x10;
          uVar2 = 0x11;
        }
        else {
          uVar2 = 0xf;
          *(undefined1 *)((int)param_1 + 0x10a) = 0x10;
        }
        *(undefined1 *)(param_1 + 0x46) = uVar2;
        return;
      }
      if (0x2c < (uint)param_1[0x44]) {
        puVar10 = (undefined4 *)fn_001f74ec(param_1,0xe7);
        if (puVar10 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
          do {
            if (puVar3 == &DAT_00892ee4) goto LAB_005c0c70;
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        puVar10 = (undefined4 *)0x0;
LAB_005c0c70:
        fn_002358e4(*(undefined4 *)(DAT_00897828 + 0x70),puVar10);
        fn_00689930(param_1,0xf6,0);
        fn_0036c340(param_1[0x17]);
        *(undefined1 *)(param_1[0x4b] + 8) = 1;
        uVar2 = 5;
        goto LAB_005c13bc;
      }
    }
    break;
  case '\x05':
    iVar5 = fn_0066e224(DAT_00897850);
    if (iVar5 != 0) {
      fn_0066eb90(DAT_00897850);
      fn_0066e530(DAT_00897850);
      fn_001fbc28();
      local_38 = 0x5a;
      local_37 = 0xff;
      local_36 = 1;
      local_35 = 1;
      iVar5 = 0;
      do {
        fn_001003e0(auStack_a8 + iVar5 * 0x18,&DAT_008c7328);
        local_31[iVar5] = 0;
        *(undefined4 *)(local_224 + iVar5 * 0x60 + -4) = 0;
        local_224[iVar5 * 0x60] = 0;
        iVar11 = iVar5 + 1;
        iVar5 = iVar5 * 0x12;
        local_274[iVar5] = 0;
        local_274[iVar5 + 6] = 0;
        local_274[iVar5 + 0xc] = 0;
        iVar5 = iVar11;
      } while (iVar11 < 4);
      fn_0011a604(auStack_46);
      local_32 = 0;
      local_22c = 0;
      local_2d = 0;
      local_34 = 1;
      local_33 = 0;
      puVar3 = (undefined4 *)fn_001f74ec(param_1,0xf1);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar4 == &DAT_00894eb0) goto LAB_005c0dbc;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      puVar3 = (undefined4 *)0x0;
LAB_005c0dbc:
      puVar4 = (undefined4 *)fn_001f74ec(param_1,0xe7);
      if (puVar4 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)(**(code **)*puVar4)(puVar4);
        do {
          if (puVar7 == &DAT_00892ee4) {
            puVar10 = puVar4;
            break;
          }
          puVar7 = (undefined4 *)*puVar7;
        } while (puVar7 != (undefined4 *)0x0);
      }
      *(undefined1 *)(puVar10[2] + 9) = 1;
      fn_00235170(puVar10[2],0,(int)*(short *)(puVar3 + 2));
      fn_0023617c(auStack_28,puVar10[2]);
      fn_0068c6c4(DAT_008977e8,&local_288);
      fn_006b37a0(auStack_28,&local_288);
      fn_0068c764(DAT_008977e8,&local_288);
      fn_001fb4b4(&local_288,0);
      uVar2 = 6;
      goto LAB_005c13bc;
    }
    break;
  case '\x06':
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      fn_007488c0(param_1,DAT_00898214,(char *)&DAT_005c1204);
      uVar2 = 7;
      goto LAB_005c13bc;
    }
    break;
  case '\a':
    fn_0066e13c(DAT_00897850);
    if (*(char *)(DAT_00897850 + 0x45) == '\0') {
      return;
    }
    puVar10 = (undefined4 *)0x0;
    cVar1 = **(char **)(param_1[0x49] + 0x9c);
    if (cVar1 == '\x04') {
      local_288 = 1;
      local_280 = 0;
      local_284 = 1;
      fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c1228,0);
      *(undefined1 *)(param_1[0x4b] + 8) = 0;
      fn_001296e8(DAT_00897850);
      uVar2 = 0x13;
      goto LAB_005c13bc;
    }
    if (cVar1 == '\x03') {
      uVar2 = 9;
LAB_005c0f6c:
      *(undefined1 *)((int)param_1 + 0x10a) = uVar2;
    }
    else if (cVar1 != '\0') {
      fn_0036c340(param_1[0x17]);
      uVar2 = 8;
      goto LAB_005c0f6c;
    }
    if ((char)param_1[0x42] == *(char *)((int)param_1 + 0x10a)) {
      return;
    }
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe7);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00892ee4) {
          puVar10 = puVar3;
          break;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    iVar5 = puVar10[2];
    uVar6 = fn_0066e3bc(DAT_00897850);
    *(undefined4 *)(iVar5 + 0xa8) = uVar6;
    piVar8 = (int *)(puVar10[2] + 0x90);
    uVar2 = *(undefined1 *)(*(int *)(param_1[0x49] + 0x9c) + 8);
    goto LAB_005c0a5c;
  case '\b':
    if (param_1[0x44] == 0) {
      local_284 = 0;
      local_288 = 1;
      local_280 = 0;
      fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c1248,0);
    }
    if (param_1[0x44] == 0x2d) {
LAB_005c1194:
      fn_0036c340(param_1[0x17]);
      return;
    }
    if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
      return;
    }
    uVar2 = 10;
    goto LAB_005c0a58;
  case '\t':
    if (param_1[0x44] == 0) {
      fn_007488c0(param_1,DAT_00898214,(char *)&DAT_005c12c4);
    }
    fn_0066e13c(DAT_00897850);
    if (*(char *)(DAT_00897850 + 0x45) != '\0') {
      *(undefined1 *)(param_1[0x49] + 9) = 1;
      uVar2 = 0xc;
      goto LAB_005c13bc;
    }
    break;
  case '\n':
    if (param_1[0x44] == 0) {
      fn_007488c0(param_1,DAT_00898214,(char *)&DAT_005c126c);
    }
    if (((0x2c < (uint)param_1[0x44]) &&
        (fn_0066e13c(DAT_00897850), *(char *)(DAT_00897850 + 0x45) != '\0')) &&
       (**(char **)(param_1[0x49] + 0x9c) == '\x02')) {
      fn_0036c340(param_1[0x17]);
      uVar2 = 0xb;
      goto LAB_005c13bc;
    }
    break;
  case '\v':
    if (param_1[0x44] == 0) {
      uVar2 = *(undefined1 *)(*(int *)(param_1[0x49] + 0x9c) + 9);
      uVar6 = fn_00234d5c(*(undefined1 *)(*(int *)(param_1[0x49] + 0x9c) + 8));
      fn_0016bad4(DAT_00897800,uVar2);
      fn_0016ba84(DAT_00897800,uVar6);
      local_288 = 1;
      local_280 = 0;
      local_284 = 1;
      fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c129c,0);
    }
    if (param_1[0x44] == 0x2d) goto LAB_005c1194;
    if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
      return;
    }
    uVar2 = 9;
    goto LAB_005c0a58;
  case '\f':
    fn_0066e13c(DAT_00897850);
    if ((*(char *)(DAT_00897850 + 0x45) != '\0') && (iVar5 = fn_001fb944(), iVar5 != 0)) {
      fn_001fb678();
      fn_00107aac();
      puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe7);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar4 == &DAT_00892ee4) {
            puVar10 = puVar3;
            break;
          }
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      iVar5 = fn_00235c84(puVar10[2],0,param_1[0x49]);
      if (iVar5 != 0) {
        fn_0066e464(DAT_00897850,0x1fbe14,0x1fbd88,&LAB_001fbf70);
        fn_001fb760(5);
        *(undefined4 *)(DAT_00897828 + 0x68) = 0xf3;
        uVar2 = 0xd;
        goto LAB_005c13bc;
      }
    }
    break;
  case '\r':
    puVar3 = (undefined4 *)fn_001f74d8(param_1,0xf7);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_0089300c) goto LAB_005c1410;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_005c1410:
    if (param_1[0x44] == 0) {
      fn_00748900(param_1);
      puVar4 = (undefined4 *)fn_001f74ec(param_1,0xe7);
      if (puVar4 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)(**(code **)*puVar4)(puVar4);
        do {
          if (puVar7 == &DAT_00892ee4) {
            puVar10 = puVar4;
            break;
          }
          puVar7 = (undefined4 *)*puVar7;
        } while (puVar7 != (undefined4 *)0x0);
      }
      fn_0056a784(puVar3,puVar10[2]);
      fn_00689930(param_1,0xf7,0);
    }
    if (*(char *)(puVar3 + 5) == '\0') {
      return;
    }
    uVar2 = 0xe;
LAB_005c0a58:
    piVar8 = param_1 + 0x41;
LAB_005c0a5c:
    *(undefined1 *)((int)piVar8 + 6) = uVar2;
    break;
  case '\x0e':
    uVar6 = *(undefined4 *)(*(int *)(DAT_00897828 + 0x70) + 0xc);
    if (param_1[0x44] == 0) {
      fn_00235aac(uVar6,10);
    }
    iVar5 = fn_00235ad0(uVar6);
    if (iVar5 != 0) {
      *(undefined1 *)((int)param_1 + 0x10a) = 0;
      return;
    }
    break;
  case '\x0f':
    if (param_1[0x44] == 0) {
      local_288 = 1;
      local_280 = 0;
      local_284 = 1;
      fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c17a4,0);
      *(undefined4 *)(param_1[0x17] + 0x54) = 5;
    }
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      fn_006899f4(param_1,0xe7,1);
      *(undefined1 *)(param_1[0x4b] + 8) = 0;
      fn_001296e8(DAT_00897850);
      fn_0011de7c();
      fn_0036c340(param_1[0x17]);
      uVar2 = 0;
      goto LAB_005c13bc;
    }
    break;
  case '\x10':
    if (param_1[0x44] == 0) {
      local_288 = 0xff000000;
      fn_00163988(DAT_00897808,&local_288,10);
    }
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (0xe < (uint)param_1[0x44])) {
      uVar2 = (undefined1)param_1[0x46];
      goto LAB_005c13bc;
    }
    break;
  case '\x11':
    if (param_1[0x44] == 0) {
      local_288 = 1;
      local_280 = 0;
      local_284 = 1;
      fn_0074879c(param_1,DAT_00898214,(char *)&DAT_005c17c4,0);
      *(undefined4 *)(param_1[0x17] + 0x54) = 5;
    }
    if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
      return;
    }
    goto LAB_005c1638;
  case '\x12':
    if ((uint)param_1[0x44] < 0x2d) {
      return;
    }
    puVar10 = (undefined4 *)param_1[0x47];
    if (*(char *)(puVar10 + 5) != '\0') {
      *(undefined1 *)(puVar10 + 5) = 0;
      fn_00673290(*puVar10);
    }
    fn_005f6270(*puVar10);
    iVar5 = (**(code **)(*(int *)*puVar10 + 0x14))();
    if (iVar5 == 1) {
      return;
    }
    goto LAB_005c1638;
  case '\x13':
    if (param_1[0x44] == 0) {
      puVar10 = (undefined4 *)param_1[0x47];
      if (*(char *)(puVar10 + 5) != '\0') {
        *(undefined1 *)(puVar10 + 5) = 0;
        fn_00673290(*puVar10);
      }
      fn_005f6270(*puVar10);
      (**(code **)(*(int *)*puVar10 + 0x14))();
    }
    if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
      return;
    }
    puVar10 = (undefined4 *)param_1[0x47];
    if (*(char *)(puVar10 + 5) != '\0') {
      *(undefined1 *)(puVar10 + 5) = 0;
      fn_00673290(*puVar10);
    }
    fn_005f6270(*puVar10);
    iVar5 = (**(code **)(*(int *)*puVar10 + 0x14))();
    if (iVar5 == 1) {
      return;
    }
    fn_00748f78(param_1,0x1000950);
LAB_005c1638:
    fn_006899f4(param_1,0xe7,1);
    *(undefined1 *)(param_1[0x4b] + 8) = 0;
    fn_001296e8(DAT_00897850);
    fn_0011de7c();
    fn_0036c340(param_1[0x17]);
    piVar8 = param_1 + 0x41;
    uVar2 = 0;
    goto LAB_005c0a5c;
  case '\x14':
    if (param_1[0x44] == 0) {
      fn_0011de7c();
      return;
    }
  }
  return;
}
