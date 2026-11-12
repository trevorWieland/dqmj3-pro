#include "005c8868_005c96dc.h"



void fn_005c96dc(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  short local_2a;
  
  iVar5 = 0;
  do {
    local_2a = *(short *)(param_3 + iVar5 * 2 + 0x44);
    puVar1 = (undefined *)(int)local_2a;
    if (puVar1 != (undefined *)0x0) {
      puVar4 = &UNK_00490048;
      puVar6 = (undefined *)0x46;
      if (puVar1 != (undefined *)0x46) {
        puVar6 = (undefined *)0x47;
      }
      if (puVar1 == (undefined *)0x46 || puVar6 == puVar1) {
LAB_005c9754:
        uVar2 = 1;
      }
      else {
        if (puVar1 != (undefined *)0x48) {
          puVar4 = (undefined *)0x49;
        }
        if ((puVar1 == (undefined *)0x48 || puVar4 == puVar1) || (puVar1 == (undefined *)0x4a))
        goto LAB_005c9754;
        uVar2 = 0;
      }
      if ((uVar2 ^ 1) != param_4) {
        local_30 = 0;
        local_2f = 0;
        local_2c = 0;
        local_2e = 0;
        local_2b = 0;
        local_2d = 0;
        iVar3 = *(int *)(param_2 + 4);
        if (iVar3 == *(int *)(param_2 + 8)) {
          fn_00795304(param_2,iVar3,&local_30);
        }
        else {
          *(int *)(param_2 + 4) = iVar3 + 8;
          if (iVar3 != 0) {
            fn_00166824(iVar3,&local_30);
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
    if (8 < iVar5) {
      return;
    }
  } while( true );
}



void fn_005c9214(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 auStack_11c [84];
  undefined2 auStack_c8 [88];
  
  uVar2 = fn_005cea40();
  uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar2,uVar1);
  }
  puVar8 = (undefined4 *)0x0;
  iVar3 = *(int *)(param_1 + 0xcc) + uVar2 * 8;
  if (*(char *)(iVar3 + 1) != '\0') {
    if (*(char *)(iVar3 + 2) != '\0') {
      uVar4 = fn_0022f584((char *)&DAT_005c94d4,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
      fn_00689bd0(param_1,0x48,0);
    }
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  if (*(int *)(param_1 + 0xf8) == 1) {
    uVar4 = fn_0022f584((char *)&DAT_005c9500,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,1,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    fn_0068ab44(param_1,0x1000950);
    fn_005cefa0(param_1,2);
    return;
  }
  uVar2 = fn_005cea40(param_1,param_2);
  uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar2,uVar1);
  }
  iVar3 = *(int *)(param_1 + 0xcc);
  uVar7 = *(uint *)(param_1 + 0xf8);
  uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 3;
  if (uVar1 <= uVar7) {
    fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar7,uVar1);
  }
  fn_00166824(*(int *)(param_1 + 0xec) + uVar7 * 8,iVar3 + uVar2 * 8);
  puVar5 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_00890b08) {
        puVar8 = puVar5;
        break;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  fn_0017821c(auStack_11c,puVar8 + 3,0x104);
  uVar2 = fn_005cea40(param_1,param_2);
  uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar2,uVar1);
  }
  auStack_c8[*(int *)(param_1 + 0xf8)] = *(undefined2 *)(*(int *)(param_1 + 0xcc) + uVar2 * 8 + 6);
  fn_0060167c(puVar8,auStack_11c,param_1 + 0xec);
  fn_006899f4(param_1,0xd6,0);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005c9140(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_118 [260];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b08) goto LAB_005c9194;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c9194:
  fn_0017821c(auStack_118,puVar1 + 3,0x104);
  fn_0060167c(puVar1,auStack_118,param_1 + 0xec);
  fn_006899f4(param_1,0xd6,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005c8f44(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2[1] - *param_2 >> 3 != 0) {
    do {
      uVar3 = param_2[1] - *param_2 >> 3;
      if (uVar3 <= uVar4) {
        fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar4,uVar3);
      }
      if (*(char *)(*param_2 + uVar4 * 8) == '\0') {
        iVar2 = param_2[1];
        uVar3 = uVar4 + 1;
        if (uVar3 < (uint)(iVar2 - *param_2 >> 3)) {
          do {
            uVar1 = iVar2 - *param_2 >> 3;
            if (uVar1 <= uVar3) {
              fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
            }
            if (*(char *)(*param_2 + uVar3 * 8) == '\0') {
              uVar1 = param_2[1] - *param_2 >> 3;
              if (uVar1 <= uVar3) {
                fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
              }
              iVar2 = param_2[1] - *param_2;
              uVar1 = iVar2 >> 3;
              if (*(short *)(*param_2 + uVar3 * 8 + 6) != param_3) {
                if (uVar1 <= uVar4) {
                  fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar4,uVar1);
                }
                iVar2 = *param_2;
                uVar1 = param_2[1] - iVar2 >> 3;
                if (uVar1 <= uVar3) {
                  fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
                }
                if (*(short *)(iVar2 + uVar4 * 8 + 6) != *(short *)(*param_2 + uVar3 * 8 + 6))
                goto LAB_005c9104;
                iVar2 = param_2[1] - *param_2;
                uVar1 = iVar2 >> 3;
              }
              if (uVar1 <= uVar3) {
                fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,iVar2 >> 3);
              }
              *(undefined1 *)(*param_2 + uVar3 * 8) = 1;
            }
LAB_005c9104:
            iVar2 = param_2[1];
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)(iVar2 - *param_2 >> 3));
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_2[1] - *param_2 >> 3));
  }
  return;
}



void fn_005c8868(int param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [68];
  undefined2 auStack_d0 [88];
  undefined1 auStack_20 [8];
  
  uVar3 = fn_005cea40();
  puVar4 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00890b08) goto LAB_005c88c0;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005c88c0:
  fn_0017821c(auStack_124,puVar4 + 3,0x104);
  if (*(int *)(param_1 + 0xf8) == 1) {
    uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
    }
    uVar7 = *(uint *)(param_1 + 0xf8);
    sVar2 = *(short *)(*(int *)(param_1 + 0xcc) + uVar3 * 8 + 6);
    uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 3;
    if (uVar1 <= uVar7) {
      fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar7,uVar1);
    }
    if (sVar2 != *(short *)(*(int *)(param_1 + 0xec) + uVar7 * 8 + 6)) {
      fn_0020bbc4(auStack_20,auStack_114);
      uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
      }
      uVar6 = fn_00660c80((int)*(short *)(*(int *)(param_1 + 0xcc) + uVar3 * 8 + 6));
      fn_0020bb58(auStack_20,uVar6);
    }
    fn_005ce948(param_1,auStack_124);
    fn_005ce90c(param_1);
  }
  else {
    uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar3,uVar1);
    }
    auStack_d0[*(int *)(param_1 + 0xf8)] = *(undefined2 *)(*(int *)(param_1 + 0xcc) + uVar3 * 8 + 6)
    ;
    fn_005c867c(param_1,param_1 + 0xcc,uVar3);
  }
  fn_002a3c70(*(undefined4 *)(param_1 + 0xb0),auStack_114,0xe1,0);
  return;
}


