#include "007a29d0_007a2cc0.h"



void fn_007a2cc0(int param_1,int param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 auStack_54 [48];
  
  iVar8 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (iVar1 = iVar8 + 0x2c, iVar1 != param_2) {
    iVar3 = fn_001c6ba4(auStack_80,iVar1);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar8 + 0x54);
    iVar3 = (*param_3)(auStack_80,param_1);
    if (iVar3 == 0) {
      iVar4 = fn_001c6ba4(auStack_54,auStack_80);
      *(undefined4 *)(iVar4 + 0x28) = local_58;
      iVar5 = (*param_3)();
      iVar3 = iVar1;
      while (iVar2 = iVar8, iVar5 != 0) {
        fn_003007d0(iVar3,iVar2);
        uVar6 = *(undefined4 *)(iVar2 + 8);
        uVar7 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar3 + 8) = uVar6;
        *(undefined4 *)(iVar3 + 0xc) = uVar7;
        uVar6 = *(undefined4 *)(iVar2 + 0x14);
        uVar7 = *(undefined4 *)(iVar2 + 0x18);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)(iVar3 + 0x14) = uVar6;
        *(undefined4 *)(iVar3 + 0x18) = uVar7;
        uVar6 = *(undefined4 *)(iVar2 + 0x20);
        uVar7 = *(undefined4 *)(iVar2 + 0x24);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
        *(undefined4 *)(iVar3 + 0x20) = uVar6;
        *(undefined4 *)(iVar3 + 0x24) = uVar7;
        *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
        iVar5 = (*param_3)(iVar4,iVar2 + -0x2c);
        iVar8 = iVar2 + -0x2c;
        iVar3 = iVar2;
      }
      fn_003007d0(iVar3,iVar4);
      uVar6 = *(undefined4 *)(iVar4 + 8);
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar3 + 8) = uVar6;
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
      uVar6 = *(undefined4 *)(iVar4 + 0x14);
      uVar7 = *(undefined4 *)(iVar4 + 0x18);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(iVar3 + 0x14) = uVar6;
      *(undefined4 *)(iVar3 + 0x18) = uVar7;
      uVar6 = *(undefined4 *)(iVar4 + 0x20);
      uVar7 = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(iVar3 + 0x20) = uVar6;
      *(undefined4 *)(iVar3 + 0x24) = uVar7;
      *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
      fn_002fedf4(auStack_54);
    }
    else {
      iVar8 = iVar8 + 0x58;
      for (iVar3 = iVar1; param_1 != iVar3; iVar3 = iVar3 + -0x2c) {
        fn_003007d0(iVar8 + -0x2c,iVar3 + -0x2c);
        uVar6 = *(undefined4 *)(iVar3 + -0x24);
        uVar7 = *(undefined4 *)(iVar3 + -0x20);
        *(undefined4 *)(iVar8 + -0x28) = *(undefined4 *)(iVar3 + -0x28);
        *(undefined4 *)(iVar8 + -0x24) = uVar6;
        *(undefined4 *)(iVar8 + -0x20) = uVar7;
        uVar6 = *(undefined4 *)(iVar3 + -0x18);
        uVar7 = *(undefined4 *)(iVar3 + -0x14);
        *(undefined4 *)(iVar8 + -0x1c) = *(undefined4 *)(iVar3 + -0x1c);
        *(undefined4 *)(iVar8 + -0x18) = uVar6;
        *(undefined4 *)(iVar8 + -0x14) = uVar7;
        uVar6 = *(undefined4 *)(iVar3 + -0xc);
        uVar7 = *(undefined4 *)(iVar3 + -8);
        *(undefined4 *)(iVar8 + -0x10) = *(undefined4 *)(iVar3 + -0x10);
        *(undefined4 *)(iVar8 + -0xc) = uVar6;
        *(undefined4 *)(iVar8 + -8) = uVar7;
        puVar9 = (undefined4 *)(iVar8 + -4);
        iVar8 = iVar8 + -0x2c;
        *puVar9 = *(undefined4 *)(iVar3 + -4);
      }
      fn_003007d0(param_1,auStack_80);
      *(undefined4 *)(param_1 + 4) = local_7c;
      *(undefined4 *)(param_1 + 8) = uStack_78;
      *(undefined4 *)(param_1 + 0xc) = uStack_74;
      *(undefined4 *)(param_1 + 0x10) = local_70;
      *(undefined4 *)(param_1 + 0x14) = uStack_6c;
      *(undefined4 *)(param_1 + 0x18) = uStack_68;
      *(undefined4 *)(param_1 + 0x1c) = local_64;
      *(undefined4 *)(param_1 + 0x20) = uStack_60;
      *(undefined4 *)(param_1 + 0x24) = uStack_5c;
      *(undefined4 *)(param_1 + 0x28) = local_58;
    }
    fn_002fedf4(auStack_80);
    iVar8 = iVar1;
  }
  return;
}



void fn_007a2b20(int param_1,int param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [44];
  
  iVar6 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (iVar1 = iVar6 + 0x28, iVar1 != param_2) {
    fn_001c6ba4(auStack_80,iVar1);
    iVar2 = (*param_3)(auStack_80,param_1);
    if (iVar2 == 0) {
      iVar2 = fn_001c6ba4(auStack_50,auStack_80);
      iVar3 = (*param_3)();
      iVar6 = iVar1;
      while (iVar3 != 0) {
        fn_003007d0(iVar6,iVar6 + -0x28);
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar6 + -0x24);
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar6 + -0x20);
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar6 + -0x1c);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + -0x18);
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + -0x14);
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + -0x10);
        *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + -0xc);
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar6 + -8);
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar6 + -4);
        iVar3 = (*param_3)(iVar2);
        iVar6 = iVar6 + -0x28;
      }
      fn_003007d0(iVar6,iVar2);
      uVar4 = *(undefined4 *)(iVar2 + 8);
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar6 + 8) = uVar4;
      *(undefined4 *)(iVar6 + 0xc) = uVar5;
      uVar4 = *(undefined4 *)(iVar2 + 0x14);
      uVar5 = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar6 + 0x14) = uVar4;
      *(undefined4 *)(iVar6 + 0x18) = uVar5;
      uVar4 = *(undefined4 *)(iVar2 + 0x20);
      uVar5 = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar6 + 0x20) = uVar4;
      *(undefined4 *)(iVar6 + 0x24) = uVar5;
      fn_002fedf4(auStack_50);
    }
    else {
      iVar6 = iVar6 + 0x50;
      for (iVar2 = iVar1; param_1 != iVar2; iVar2 = iVar2 + -0x28) {
        fn_003007d0(iVar6 + -0x28,iVar2 + -0x28);
        uVar4 = *(undefined4 *)(iVar2 + -0x20);
        uVar5 = *(undefined4 *)(iVar2 + -0x1c);
        *(undefined4 *)(iVar6 + -0x24) = *(undefined4 *)(iVar2 + -0x24);
        *(undefined4 *)(iVar6 + -0x20) = uVar4;
        *(undefined4 *)(iVar6 + -0x1c) = uVar5;
        uVar4 = *(undefined4 *)(iVar2 + -0x14);
        uVar5 = *(undefined4 *)(iVar2 + -0x10);
        *(undefined4 *)(iVar6 + -0x18) = *(undefined4 *)(iVar2 + -0x18);
        *(undefined4 *)(iVar6 + -0x14) = uVar4;
        *(undefined4 *)(iVar6 + -0x10) = uVar5;
        uVar4 = *(undefined4 *)(iVar2 + -8);
        uVar5 = *(undefined4 *)(iVar2 + -4);
        *(undefined4 *)(iVar6 + -0xc) = *(undefined4 *)(iVar2 + -0xc);
        *(undefined4 *)(iVar6 + -8) = uVar4;
        *(undefined4 *)(iVar6 + -4) = uVar5;
        iVar6 = iVar6 + -0x28;
      }
      fn_003007d0(param_1,auStack_80);
      *(undefined4 *)(param_1 + 4) = local_7c;
      *(undefined4 *)(param_1 + 8) = uStack_78;
      *(undefined4 *)(param_1 + 0xc) = uStack_74;
      *(undefined4 *)(param_1 + 0x10) = local_70;
      *(undefined4 *)(param_1 + 0x14) = uStack_6c;
      *(undefined4 *)(param_1 + 0x18) = uStack_68;
      *(undefined4 *)(param_1 + 0x1c) = local_64;
      *(undefined4 *)(param_1 + 0x20) = uStack_60;
      *(undefined4 *)(param_1 + 0x24) = uStack_5c;
    }
    fn_002fedf4(auStack_80);
    iVar6 = iVar1;
  }
  return;
}



void fn_007a29d0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar1 = puVar2 + 4, puVar1 != param_2) {
    local_40 = *puVar1;
    uStack_3c = puVar2[5];
    uStack_38 = puVar2[6];
    uStack_34 = puVar2[7];
    iVar3 = (*param_3)(&local_40,param_1);
    if (iVar3 == 0) {
      local_30 = local_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      iVar3 = (*param_3)(&local_30);
      puVar4 = puVar1;
      while (puVar6 = puVar2, iVar3 != 0) {
        uVar5 = puVar6[1];
        uVar7 = puVar6[2];
        uVar8 = puVar6[3];
        *puVar4 = *puVar6;
        puVar4[1] = uVar5;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        iVar3 = (*param_3)(&local_30,puVar6 + -4);
        puVar2 = puVar6 + -4;
        puVar4 = puVar6;
      }
      *puVar4 = local_30;
      puVar4[1] = uStack_2c;
      puVar4[2] = uStack_28;
      puVar4[3] = uStack_24;
      puVar2 = puVar1;
    }
    else {
      puVar4 = puVar2 + 8;
      puVar6 = puVar1;
      if (param_1 < puVar1) {
        iVar3 = (int)puVar1 - (int)param_1;
        if (0 < iVar3) {
          if (iVar3 * 0x8000000 < 0) {
            *puVar1 = *puVar2;
            puVar2[5] = puVar2[1];
            puVar2[6] = puVar2[2];
            puVar2[7] = puVar2[3];
            puVar4 = puVar1;
            puVar6 = puVar2;
          }
          for (iVar3 = iVar3 >> 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar5 = puVar6[-3];
            uVar7 = puVar6[-2];
            uVar8 = puVar6[-1];
            puVar4[-4] = puVar6[-4];
            puVar4[-3] = uVar5;
            puVar4[-2] = uVar7;
            puVar4[-1] = uVar8;
            uVar5 = puVar6[-7];
            uVar7 = puVar6[-6];
            uVar8 = puVar6[-5];
            puVar4[-8] = puVar6[-8];
            puVar4[-7] = uVar5;
            puVar4[-6] = uVar7;
            puVar4[-5] = uVar8;
            puVar4 = puVar4 + -8;
            puVar6 = puVar6 + -8;
          }
        }
      }
      else {
        while (param_1 != puVar6) {
          uVar5 = puVar6[-3];
          uVar7 = puVar6[-2];
          uVar8 = puVar6[-1];
          puVar4[-4] = puVar6[-4];
          puVar4[-3] = uVar5;
          puVar4[-2] = uVar7;
          puVar4[-1] = uVar8;
          puVar4 = puVar4 + -4;
          puVar6 = puVar6 + -4;
        }
      }
      *param_1 = local_40;
      param_1[1] = uStack_3c;
      param_1[2] = uStack_38;
      param_1[3] = uStack_34;
      puVar2 = puVar1;
    }
  }
  return;
}


