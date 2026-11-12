#include "00631450_00631ab8.h"



void fn_00631ab8(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_7a24 [4];
  int local_7a20;
  undefined1 auStack_599c [12508];
  undefined1 local_28c0 [4];
  undefined1 local_28bc;
  undefined1 auStack_28b8 [9828];
  int local_254;
  char local_250;
  char local_24f;
  undefined1 local_24e;
  undefined2 local_24c;
  undefined2 local_238;
  undefined1 auStack_136 [134];
  undefined1 auStack_b0 [5];
  char local_ab;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  int local_74;
  undefined1 *local_70;
  undefined1 local_68 [68];
  
  local_74 = fn_0063a858(local_68,8,param_2);
  iVar4 = 0;
  if (0 < local_74) {
    local_70 = auStack_136;
    local_254 = param_2 + 0x180388;
    do {
      fn_00301f50(auStack_7a24,0x5164);
      uVar1 = local_68[iVar4 * 8];
      fn_006565b8(auStack_b0);
      local_7c = 7;
      local_7a = 0;
      local_79 = uVar1;
      local_78 = uVar1;
      fn_006564f4(auStack_b0,&local_7c,0,1,0);
      cVar2 = local_ab;
      iVar3 = (int)local_ab;
      fn_00301f50(&local_250,0x1a0);
      local_238 = 1;
      local_250 = cVar2;
      local_24f = cVar2;
      local_24e = 4;
      local_24c = 4;
      fn_0062a1cc(param_1,iVar3,param_2,2,local_70);
      iVar3 = local_254;
      fn_0062abdc(param_1,local_254,&local_250,param_2);
      fn_00654c08(param_1,&local_250,iVar3);
      fn_0017821c(auStack_599c + local_7a20 * 0x1a0,&local_250,0x1a0);
      local_7a20 = local_7a20 + 1;
      fn_00626660(param_1,auStack_7a24,param_2);
      fn_0062b720(param_1,local_254,local_28c0);
      local_28c0[0] = 5;
      iVar3 = 0;
      local_28bc = (undefined1)local_7a20;
      if (0 < local_7a20) {
        do {
          fn_0062936c(param_1,auStack_599c + iVar3 * 0x1a0,auStack_28b8 + iVar3 * 0xc4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_7a20);
      }
      fn_0062a720(param_1,param_2,local_28c0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_74);
  }
  return;
}



undefined4 fn_00631744(uint param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 auStack_a428 [20836];
  undefined1 auStack_52c4 [20836];
  undefined1 auStack_160 [52];
  undefined1 auStack_12c [252];
  uint local_30;
  uint uStack_2c;
  
  iVar6 = 0x22;
  iVar9 = param_2 + 0x180388;
  uVar5 = param_2;
  local_30 = param_1;
  uStack_2c = param_2;
  do {
    cVar1 = (char)iVar6;
    if (*(char *)(param_2 + 0x180483) != '\0') {
      uVar3 = iVar6 - 0x10;
      if (uVar3 >= 8) {
        uVar5 = iVar6 - 0x18;
      }
      if (uVar3 < 8 || uVar5 < 8) {
        bVar10 = uVar3 < 4;
        if (!bVar10) {
          uVar3 = iVar6 - 0x18;
        }
        if ((bVar10 || uVar3 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
          cVar2 = cVar1 + '\x04';
        }
        else {
          cVar2 = cVar1 + -4;
        }
        iVar6 = (int)cVar2;
      }
      else if (iVar6 - 0x20U < 2) {
        if (iVar6 == 0x20 || iVar6 == 0x22) {
          iVar6 = 0x21;
        }
        else {
          iVar6 = 0x20;
        }
      }
      else if (iVar6 - 0x22U < 2) {
        if (iVar6 == 0x20 || iVar6 == 0x22) {
          iVar6 = 0x23;
        }
        else {
          iVar6 = 0x22;
        }
      }
      else {
        iVar6 = 0;
      }
    }
    iVar7 = iVar9 + iVar6 * 8;
    psVar8 = (short *)(iVar7 + 0x4180);
    uVar11 = fn_0069ccf8((int)*psVar8);
    uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
    if (((int)uVar11 != 0) && (*(char *)(iVar7 + 0x4183) == '\0')) {
      iVar7 = fn_0061bf48((int)*(char *)psVar8,iVar6,param_2);
      if ((iVar7 - 1U < 699) &&
         ((uVar4 = fn_0061c018((int)*(char *)psVar8,iVar6,param_2), uVar5 = local_30, 0 < iVar7 &&
          (iVar7 < 700)))) {
        fn_0063b050(iVar7,param_2);
        fn_006565b8(auStack_160);
        fn_00656490(auStack_160,iVar7,iVar6,uVar4);
        fn_006228c8(auStack_a428);
        fn_00621a88(uVar5,auStack_160,param_2,auStack_a428);
        fn_00627194(uVar5,auStack_160,param_2,auStack_a428);
        iVar7 = fn_0062285c(uVar5,param_2);
        if (iVar7 == 0) {
          fn_006267fc(uVar5,iVar9,param_2,auStack_a428);
        }
        fn_00622928(uVar5,auStack_160,auStack_a428,param_2);
      }
      uVar4 = fn_0061d0fc((int)*(char *)psVar8,iVar6,param_2);
      uVar11 = fn_0061c708((int)*(char *)psVar8,uVar4,param_2);
      iVar7 = (int)uVar11;
      uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
      if (((iVar7 - 1U < 699) &&
          (uVar4 = fn_0061d42c((int)*(char *)psVar8,iVar6,uVar4,param_2), uVar5 = local_30,
          0 < iVar7)) && (iVar7 < 700)) {
        fn_0063b050(iVar7,param_2);
        fn_006565b8(auStack_12c);
        fn_00656490(auStack_12c,iVar7,iVar6,uVar4);
        fn_006228c8(auStack_52c4);
        fn_00621a88(uVar5,auStack_12c,param_2,auStack_52c4);
        fn_00627194(uVar5,auStack_12c,param_2,auStack_52c4);
        iVar6 = fn_0062285c(uVar5,param_2);
        if (iVar6 == 0) {
          fn_006267fc(uVar5,iVar9,param_2,auStack_52c4);
        }
        fn_00622928(uVar5,auStack_12c,auStack_52c4,param_2);
        uVar5 = extraout_r1;
      }
    }
    iVar6 = (int)(char)(cVar1 + '\x01');
  } while (iVar6 < 0x24);
  return 0;
}



void fn_00631450(int param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined1 local_26b8 [4];
  undefined1 local_26b4;
  undefined1 local_26b3;
  char local_26b2;
  char local_26b1;
  int local_38;
  int iStack_34;
  char *pcStack_30;
  int iStack_2c;
  
  puVar8 = local_26b8;
  cVar7 = *param_3;
  iVar5 = param_5 + 0x180388;
  local_38 = param_1;
  iStack_34 = param_2;
  pcStack_30 = param_3;
  iStack_2c = param_4;
  fn_0062b720(param_1);
  local_26b8[0] = 0xb;
  local_26b4 = *(undefined1 *)(param_2 + 1);
  local_26b3 = *(undefined1 *)(param_2 + 2);
  if (cVar7 == '\0') {
    local_26b2 = '\0';
    local_26b1 = '\0';
    iVar2 = (int)*(char *)(param_2 + 1);
    iVar3 = 0;
    uVar6 = iVar2 - 0x20;
    if (1 < uVar6) {
      puVar8 = (undefined1 *)(iVar2 - 0x22);
    }
    if (1 >= uVar6 || puVar8 < (undefined1 *)0x2) {
      iVar3 = iVar5 + iVar2 * 8 + 0x4180;
    }
    if (*(char *)(iVar3 + 2) != 0) {
      if (uVar6 < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(iVar5 + *(char *)(iVar3 + 2) * 0x418 + -0x4080,0);
      }
    }
    cVar7 = *(char *)(param_2 + 2);
    *(char *)(iVar3 + 2) = cVar7;
    if (cVar7 != 0) {
      if ((int)*(char *)(param_2 + 1) - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(iVar5 + cVar7 * 0x418 + -0x4080,1);
      }
    }
    cVar1 = *(char *)(param_2 + 1);
    cVar7 = *(char *)(param_2 + 2);
  }
  else {
    local_26b2 = param_3[1];
    local_26b1 = param_3[2];
    iVar2 = iVar5 + *(char *)(param_2 + 1) * 8;
    iVar3 = iVar5 + param_3[1] * 8;
    iVar4 = (int)*(char *)(iVar2 + 0x4182);
    if (iVar4 != 0) {
      if ((int)*(char *)(param_2 + 1) - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(iVar5 + iVar4 * 0x418 + -0x4080,0);
      }
    }
    cVar7 = *(char *)(param_2 + 2);
    *(char *)(iVar2 + 0x4182) = cVar7;
    if (cVar7 != 0) {
      if ((int)*(char *)(param_2 + 1) - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(iVar5 + cVar7 * 0x418 + -0x4080,1);
      }
    }
    iVar2 = (int)*(char *)(iVar3 + 0x4182);
    if (iVar2 != 0) {
      if ((int)param_3[1] - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(iVar5 + iVar2 * 0x418 + -0x4080,0);
      }
    }
    cVar7 = param_3[2];
    *(char *)(iVar3 + 0x4182) = cVar7;
    if (cVar7 != 0) {
      if ((int)param_3[1] - 0x20U < 2) {
        fn_0017419c();
      }
      else {
        fn_00174398(iVar5 + cVar7 * 0x418 + -0x4080,1);
      }
    }
    *(undefined1 *)(local_38 + *(char *)(param_2 + 1)) = *(undefined1 *)(param_2 + 2);
    cVar1 = param_3[1];
    cVar7 = param_3[2];
  }
  *(char *)(local_38 + cVar1) = cVar7;
  if (param_4 == 0) {
    fn_0062a720(local_38,param_5,local_26b8);
  }
  return;
}


