#include "00322f7c_003236a4.h"



void fn_00323534(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    fn_0030e640(*(undefined4 *)(param_1 + 0xec));
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    uVar2 = fn_0022f584((char *)&DAT_00323684);
    fn_00328be0(param_1,uVar2,0,1,0,0);
    *(undefined4 *)(param_1 + 0xf4) = 0x3c;
    *(undefined1 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    return;
  }
  iVar1 = fn_006b7258();
  if (iVar1 == 0) {
    iVar1 = fn_006be168(*(undefined4 *)(param_1 + 0xec));
    if (iVar1 == 0) {
      uVar4 = 0;
      uVar5 = uVar4;
      do {
        uVar2 = *(undefined4 *)(param_1 + 0xec);
        uVar3 = fn_0030e2cc(uVar2,uVar4);
        iVar1 = fn_0030e954(uVar2,uVar3);
        if (iVar1 != 0) {
          uVar5 = 1;
          fn_0030e6d0(*(undefined4 *)(param_1 + 0xec),uVar4,8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 5);
      if (uVar5 == 0) {
        uVar2 = 0x14;
      }
      else {
        uVar2 = 0x13;
      }
      *(undefined4 *)(param_1 + 300) = 0;
    }
    else {
      fn_0030ea28(*(undefined4 *)(param_1 + 0xec));
      fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 0;
      uVar2 = 0x1e;
    }
  }
  else {
    iVar1 = fn_006b72c0();
    if (iVar1 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x104) = 1;
    *(undefined4 *)(param_1 + 0xe4) = 0x1b;
    uVar2 = 0x1a;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  return;
}



void fn_00323218(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_58 [15];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894aac) goto LAB_00323268;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00323268:
  if (*(int *)(param_1 + 0xe0) == 0) {
    fn_003236a4(param_1);
    uVar6 = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    iVar3 = 0;
    uVar7 = 0;
    do {
      iVar4 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
      if ((iVar4 != 0) && (iVar4 = fn_0030dea8(*(undefined4 *)(param_1 + 0xec),uVar7), iVar4 == 0))
      {
        uVar5 = fn_0030e3a4(*(undefined4 *)(param_1 + 0xec),uVar7);
        local_58[iVar3] = uVar5;
        iVar3 = iVar3 + 1;
        iVar4 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
        if ((iVar4 != 0) &&
           (iVar4 = fn_006c48fc(*(undefined4 *)(param_1 + 0xec),uVar7), iVar4 == 0)) {
          uVar6 = 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    fn_004454b4(puVar1,local_58,iVar3,uVar6);
    fn_00689930(param_1,0x5b,0);
  }
  else if (*(char *)(puVar1 + 900) != '\0') {
    fn_006898b8(param_1,0x5b,0);
    uVar7 = 0;
    do {
      iVar3 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
      if ((iVar3 != 0) && (iVar3 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar7), iVar3 == 1))
      {
        fn_00388f90(local_58);
        uVar6 = fn_006c496c(*(undefined4 *)(param_1 + 0xec),uVar7);
        iVar3 = fn_0030eb4c(*(undefined4 *)(param_1 + 0xec),local_58,uVar6);
        if (iVar3 != 0) {
          fn_003221d0(param_1,local_58,uVar6);
        }
        fn_00388fd4(local_58);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    if (*(int *)(param_1 + 0x13c) - (int)*(undefined4 **)(param_1 + 0x138) >> 2 == 0) {
      uVar6 = 0x18;
    }
    else {
      local_58[0] = 1;
      local_58[1] = 0;
      fn_00328be0(param_1,**(undefined4 **)(param_1 + 0x138),0,1);
      *(undefined4 *)(param_1 + 0xe4) = 0x18;
      uVar6 = 9;
    }
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    return;
  }
  return;
}



void fn_00322f7c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_58 [15];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894aac) goto LAB_00322fcc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00322fcc:
  if (*(int *)(param_1 + 0xe0) == 0) {
    fn_003236a4(param_1);
    uVar6 = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    iVar3 = 0;
    uVar7 = 0;
    do {
      iVar4 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
      if ((iVar4 != 0) && (iVar4 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar7), iVar4 == 1))
      {
        uVar5 = fn_0030e3a4(*(undefined4 *)(param_1 + 0xec),uVar7);
        local_58[iVar3] = uVar5;
        iVar3 = iVar3 + 1;
        iVar4 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
        if ((iVar4 != 0) &&
           (iVar4 = fn_006c48fc(*(undefined4 *)(param_1 + 0xec),uVar7), iVar4 == 0)) {
          uVar6 = 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    fn_004454b4(puVar1,local_58,iVar3,uVar6);
    fn_00689930(param_1,0x5b,0);
  }
  else if (*(char *)(puVar1 + 900) != '\0') {
    fn_006898b8(param_1,0x5b,0);
    uVar7 = 0;
    do {
      iVar3 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
      if ((iVar3 != 0) && (iVar3 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar7), iVar3 == 1))
      {
        fn_00388f90(local_58);
        uVar6 = fn_006c496c(*(undefined4 *)(param_1 + 0xec),uVar7);
        iVar3 = fn_0030eb4c(*(undefined4 *)(param_1 + 0xec),local_58,uVar6);
        if (iVar3 != 0) {
          fn_003221d0(param_1,local_58,uVar6);
        }
        fn_00388fd4(local_58);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    uVar7 = 0;
    do {
      iVar3 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar7);
      if ((iVar3 != 0) && (iVar3 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar7), iVar3 == 1))
      {
        fn_0031b78c(param_1,uVar7,0,&DAT_00324ef8);
        fn_0030e38c(*(undefined4 *)(param_1 + 0xec),uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
    if (*(char *)(param_1 + 0x128) == '\0') {
      uVar6 = 6;
    }
    else {
      *(undefined1 *)(param_1 + 0x128) = 0;
      local_58[1] = 0;
      local_58[0] = 1;
      fn_00328be0(param_1,**(undefined4 **)(param_1 + 0x138),0,1);
      *(undefined4 *)(param_1 + 0xe4) = 6;
      uVar6 = 9;
    }
    *(undefined4 *)(param_1 + 0xd8) = uVar6;
    return;
  }
  return;
}



void fn_003236a4(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 auStack_70 [20];
  int local_5c;
  undefined4 local_48;
  int local_3c;
  short *local_38;
  undefined1 auStack_34 [20];
  
  uVar5 = 0;
  do {
    iVar2 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar5);
    if ((iVar2 != 0) && (iVar2 = fn_006c48e0(*(undefined4 *)(param_1 + 0xec),uVar5), iVar2 == 1)) {
      fn_00388f90(auStack_70);
      uVar3 = fn_006c496c(*(undefined4 *)(param_1 + 0xec),uVar5);
      iVar2 = fn_0030eb4c(*(undefined4 *)(param_1 + 0xec),auStack_70,uVar3);
      if (iVar2 != 0) {
        iVar4 = fn_006c4918(auStack_70);
        psVar1 = local_38;
        iVar2 = local_3c;
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x108) = local_5c;
          if (local_5c == 0) {
            fn_00615e18(auStack_34,local_48);
            uVar3 = fn_00230604(auStack_34);
            fn_0016ba84(DAT_00897800,uVar3);
            uVar3 = fn_0022f584((char *)&DAT_00322578,0);
            *(undefined4 *)(param_1 + 0xf0) = uVar3;
          }
          else if (local_5c == 1) {
            puVar6 = &DAT_00322590;
            iVar4 = fn_006c4918(auStack_70);
            if (iVar4 != 0) {
              uVar3 = fn_006bc7ec(*(undefined4 *)(DAT_00897804 + 0x5c),(int)*(char *)(iVar2 + 1));
              puVar6 = (undefined *)fn_0025f988(DAT_00897800,uVar3);
            }
            fn_0016ba84(DAT_00897800,puVar6);
            uVar3 = fn_0022f584((char *)&DAT_003225a0,0);
            *(undefined4 *)(param_1 + 0xf0) = uVar3;
          }
          else if (local_5c == 2) {
            if (local_38[1] < 2) {
              uVar3 = fn_0016a82c((int)*local_38);
              fn_0016ba84(DAT_00897800,uVar3);
              uVar3 = fn_0022f584((char *)&DAT_003225bc,0);
              *(undefined4 *)(param_1 + 0xf0) = uVar3;
            }
            else {
              uVar3 = fn_0016a82c((int)*local_38);
              fn_0016ba84(DAT_00897800,uVar3);
              fn_0016bad4(DAT_00897800,(int)psVar1[1]);
              uVar3 = fn_0022f584((char *)&DAT_0032255c,0);
              *(undefined4 *)(param_1 + 0xf0) = uVar3;
            }
          }
        }
        fn_0030e3b8(*(undefined4 *)(param_1 + 0xec),uVar5,*(undefined4 *)(param_1 + 0xf0));
        fn_00388ed0(*(undefined4 *)(param_1 + 0xec),uVar5,*(undefined4 *)(param_1 + 0x108));
      }
      fn_00388fd4(auStack_70);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  return;
}


