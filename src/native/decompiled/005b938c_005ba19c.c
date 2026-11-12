#include "005b938c_005ba19c.h"



void fn_005ba19c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0023d070();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return;
}



undefined4 fn_005ba0e0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_005baef4();
  fn_005bcf78(param_1,(char *)&DAT_005ba184,(char *)&DAT_005ba168);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_00899080) goto LAB_005ba13c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005ba13c:
  fn_004a2190(param_1 + 0x118,*(int *)puVar3[9] + 8);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  return uVar1;
}



undefined4 * fn_005ba068(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00849138;
  puVar1[0x19] = &DAT_008591a0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return puVar1;
}



void fn_005b9fb8(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    pcVar1 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar1)();
    uVar2 = *(uint *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x68)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar2) & 1) == 0)) || (uVar3 == uVar2)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  return;
}



void fn_005b9860(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_408 [7];
  short local_3ec [478];
  int local_30 [4];
  
  if (param_1[0x21] == 0) {
    puVar7 = (undefined4 *)fn_002f7e70();
    iVar1 = fn_00100b58(*puVar7);
    if (iVar1 == 0) {
      uVar3 = fn_0022f584((char *)&DAT_005b9c7c,0);
      fn_0068974c(param_1,uVar3,0,1);
      return;
    }
    puVar7 = (undefined4 *)fn_002f7e70();
    uVar3 = *puVar7;
    fn_00246e68(local_408);
    fn_00246e00(local_408);
    iVar1 = fn_006b5424(local_408,uVar3);
    fn_00246e74(local_408);
    if (iVar1 != 0) {
      uVar3 = fn_0022f584((char *)&DAT_005b9c60,0);
      fn_0068974c(param_1,uVar3,0,1);
      return;
    }
    uVar3 = fn_002f7e70();
    uVar4 = fn_002f8914();
    iVar1 = fn_006c3ab0(uVar3,uVar4);
    uVar6 = 0;
    do {
      iVar8 = iVar1 + uVar6 * 0xf0;
      iVar5 = fn_001a46f4((int)*(short *)(iVar8 + 0x1c));
      if (iVar5 != 0) {
        iVar5 = fn_00100b58(iVar8 + 4);
        if (iVar5 == 0) {
LAB_005b9a4c:
          uVar3 = fn_0022f584((char *)&DAT_005b9c9c,0);
          fn_0068974c(param_1,uVar3,0,1);
          return;
        }
        fn_00246e68(local_408);
        fn_00246e00(local_408);
        iVar5 = fn_006b5424(local_408,iVar8 + 4);
        fn_00246e74(local_408);
        if (iVar5 != 0) goto LAB_005b9a4c;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    iVar1 = fn_001f82ac();
    if (iVar1 != 0) {
      uVar3 = fn_0022f584((char *)&DAT_005b9cbc,0);
      fn_0068974c(param_1,uVar3,0,1);
      return;
    }
    iVar1 = fn_002f6b58();
    if (iVar1 != 1) {
      uVar3 = fn_0022f584((char *)&DAT_005b9cd8,0);
      fn_0068974c(param_1,uVar3,0,1);
      return;
    }
    uVar3 = fn_002f7e70();
    uVar4 = fn_002f8914();
    iVar1 = fn_006c3ab0(uVar3,uVar4);
    uVar6 = 0;
    local_408[0] = 0;
    local_408[1] = 0;
    local_408[2] = 0;
    local_408[3] = 0;
    do {
      iVar8 = iVar1 + uVar6 * 0xf0;
      iVar5 = fn_001a46f4((int)*(short *)(iVar8 + 0x1c));
      if (iVar5 == 0) {
        local_408[uVar6] = 0;
      }
      else {
        local_408[uVar6] = iVar8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    iVar1 = fn_002506e0(local_408,4,0);
    if (iVar1 != 0) {
LAB_005b9b90:
      uVar3 = fn_0022f584((char *)&DAT_005b9cf8,0);
      fn_0068974c(param_1,uVar3,0,1);
      return;
    }
    iVar1 = 0;
    do {
      if ((local_408[iVar1] != 0) && (iVar5 = fn_0024e350(), iVar5 != 0)) goto LAB_005b9b90;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    uVar6 = fn_002f7e70();
    uVar3 = fn_002f8914();
    iVar1 = fn_006c3ab0(uVar6,uVar3);
    uVar10 = 0;
    do {
      iVar8 = iVar1 + uVar10 * 0xf0;
      iVar5 = fn_001a46f4((int)*(short *)(iVar8 + 0x1c));
      if (iVar5 != 0) {
        uVar6 = uVar10 + 1;
      }
      if (iVar5 != 0 && uVar6 < 4) {
        do {
          iVar9 = iVar1 + uVar6 * 0xf0;
          iVar5 = fn_001a46f4((int)*(short *)(iVar9 + 0x1c));
          if ((iVar5 != 0) && (*(short *)(iVar8 + 0x1c) == *(short *)(iVar9 + 0x1c))) {
            uVar3 = fn_0022f584((char *)&DAT_005b9d14,0);
            fn_0068974c(param_1,uVar3,0,1);
            return;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 4);
    uVar3 = fn_002f7e70();
    uVar4 = fn_002f8914();
    iVar1 = fn_006c3ab0(uVar3,uVar4);
    uVar6 = 0;
    do {
      local_408[0] = iVar1 + uVar6 * 0xf0;
      iVar5 = fn_006bf198(local_408);
      if ((iVar5 != 0) && (iVar5 = fn_006bf2b4(local_408), iVar5 != 0)) {
        uVar3 = fn_0022f584((char *)&DAT_005b9ea4,0);
        fn_0068974c(param_1,uVar3,0,1);
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    uVar3 = fn_002f7e70();
    uVar4 = fn_002f8914();
    uVar3 = fn_006c3ab0(uVar3,uVar4);
    fn_0017821c(local_408,uVar3,0x3d8);
    iVar5 = 0;
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    iVar1 = 0;
    do {
      iVar8 = fn_001a46f4((int)local_3ec[iVar1 * 0x78]);
      if (iVar8 != 0) {
        local_30[iVar5] = (int)(local_408 + iVar1 * 0x3c);
        iVar5 = iVar5 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = fn_002f7e9c(local_30,iVar5,0);
    if (iVar1 != 1) {
      uVar3 = fn_0022f584((char *)&DAT_005b9ebc,0);
      fn_0068974c(param_1,uVar3,0,1);
      return;
    }
    param_1[0x1e] = (int)fn_005b9594;
    param_1[0x1f] = 0;
  }
  else {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      puVar7 = (undefined4 *)param_1[6];
      if (puVar7 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar7)(puVar7);
        do {
          if (puVar2 == &DAT_0089704c) goto LAB_005b98c4;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar7 = (undefined4 *)0x0;
LAB_005b98c4:
      *(undefined1 *)(puVar7 + 4) = 2;
                    /* WARNING: Could not recover jumptable at 0x005b98ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
  }
  return;
}



void fn_005b9464(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_002f6fa8();
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_002f7618();
    fn_00268758(*(undefined4 *)(iVar1 + 0x5b3a4),(char *)&DAT_0042021c,iVar1 + 0x41200,0xc4,1,1);
    return;
  }
  iVar2 = fn_006cda14(iVar1);
  if (iVar2 == 0) {
    *(code **)(param_1 + 0x78) = fn_005b9ee0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  iVar2 = fn_006cda24(iVar1);
  if (iVar2 != 0) {
    uVar3 = fn_006b723c(iVar1);
    uVar4 = fn_002f8364(param_1);
    fn_003ca418(uVar4,2,uVar3);
    *(undefined **)(param_1 + 0x78) = &DAT_005b9388;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005b938c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_002f88b4(param_1);
    iVar1 = fn_002f6180();
    fn_002f61f4(uVar2,iVar1 + -1);
    fn_002f6824(uVar2);
    fn_002f7874(uVar2);
    fn_002f72c8(uVar2,1);
    fn_002f4624(DAT_008977ec,0);
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1);
    return;
  }
  iVar1 = fn_002f5908();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1[0x17] + 0x30) = 1;
    fn_002f6100(param_1);
    fn_0015b0dc();
    uVar2 = fn_0022f584((char *)&DAT_005b9448,0);
    fn_0068974c(param_1,uVar2,0,1);
    param_1[0x1e] = (int)fn_005b9504;
    param_1[0x1f] = 0;
  }
  return;
}



void fn_005b9504(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1[0x21] == 0) || (*(char *)(param_1[0x17] + 0x31) != '\x01')) {
    return;
  }
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_0089704c) goto LAB_005b9564;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b9564:
  *(undefined1 *)(puVar2 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x005b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0,0);
  return;
}


