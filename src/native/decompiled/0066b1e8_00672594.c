#include "0066b1e8_00672594.h"



undefined4 fn_00672594(int *param_1)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = DAT_00898840;
  local_20 = 0xe7e3ffff;
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    fn_00301a9c(param_1 + 0x116,(char *)&DAT_007ce986,0x25);
    *(undefined1 *)((int)param_1 + 0x557) = 0x25;
    param_1[0x115] = (int)(param_1 + *(int *)(iVar2 + 0x48) * 0x43 + 0x15a);
    local_20 = fn_004de3fc(DAT_008bf504,param_1 + 0x115);
    if ((local_20 & 0x80000000) == 0) {
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar2 = fn_00673be8(param_1);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    iVar1 = fn_004debdc(DAT_008bf504);
    if (iVar1 == 0) {
      return 0;
    }
    local_20 = fn_004de880(DAT_008bf504);
    if ((local_20 & 0x80000000) == 0) {
      iVar2 = fn_0066eb80(iVar2,9);
      local_20 = (**(code **)*DAT_008bf4fc)();
      local_20 = fn_006d50d4(DAT_008bf4fc,iVar2 + 0x80);
      param_1[0x13] = param_1[0x13] | 0x18;
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 0;
    }
  }
  fn_0067253c(param_1,param_1 + 0x313,&local_20);
  return 0xffffffff;
}



undefined4 fn_00671104(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_70 [17];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined4 local_20;
  
  fn_004d9c98(local_70);
  local_2c = 0x14;
  uStack_28 = 0;
  uVar1 = 0;
  do {
    iVar4 = *(int *)(param_1 + uVar1 * 4 + 0x80);
    if (iVar4 == 0) {
      DAT_00898870 = (1 << (uVar1 & 0xff)) + -1;
      break;
    }
    local_70[uVar1] = iVar4;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  local_24 = 0;
  local_20 = 5;
  uVar2 = fn_004d5ca0();
  fn_004d5b8c(uVar2);
  iVar4 = DAT_008bf4d4;
  iVar5 = DAT_008bf4d4 + 0x10;
  if (*(char *)(DAT_008bf4d4 + 0x28) == '\0') {
    iVar3 = fn_0050c68c(iVar5,0x710);
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = fn_004da490();
    }
    uVar2 = fn_0050c920(iVar5,uVar2,0x18100000);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = fn_0050c6d8(iVar4 + 0x10,uVar2,0x1810);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  fn_006d48ac();
  uVar2 = fn_004d5de4(*(undefined4 *)(param_1 + 0x6c),local_70);
  fn_004da55c(uVar2);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  return 0;
}



undefined4 fn_0066b1e8(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  int local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined *puStack_40;
  int *local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  uVar13 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_144 = fn_001287d4(0xb0,&DAT_00812c8c);
  if (local_144 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = (undefined4 *)fn_0047e0b0();
  }
  uVar2 = fn_0013d3e8(auStack_38,L"PiaInet Matchmake");
  fn_004bb538(puVar12,uVar2);
  fn_00170f54(auStack_38);
  *(undefined1 *)(puVar12 + 0x11) = 0;
  puVar12[0xd] = *(undefined4 *)(param_1 + 0xa8);
  *(undefined2 *)(puVar12 + 5) = 1;
  *(undefined2 *)((int)puVar12 + 0x16) = *(undefined2 *)(param_1 + 0xac);
  fn_0014f51c(puVar12,*(undefined1 *)(param_1 + 0xae),0);
  uVar11 = 0;
  puVar12[0x2a] = *(undefined4 *)(param_1 + 0xb0);
  do {
    fn_0047dfb4(puVar12,uVar11,*(undefined4 *)(param_1 + uVar11 * 4 + 0x1b4));
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  uVar11 = 0;
  local_150 = (undefined1 *)0x0;
  local_14c = (undefined1 *)0x0;
  local_148 = (undefined1 *)0x0;
  do {
    puVar9 = local_14c;
    uVar1 = *(undefined1 *)(param_1 + uVar11 + 0xb4);
    if (local_14c == local_148) {
      uVar3 = (int)local_14c - (int)local_150;
      if (uVar3 < (uint)((int)local_148 - (int)local_150)) {
        if (local_14c != (undefined1 *)0x0) {
          *local_14c = local_14c[-1];
        }
        puVar9 = local_14c + -1;
        puVar4 = local_14c;
        if (local_14c < puVar9) {
          uVar3 = (int)puVar9 - (int)local_14c;
          if (0 < (int)uVar3) {
            if ((uVar3 & 1) != 0) {
              puVar9 = local_14c + -2;
              puVar4 = local_14c + -1;
              *puVar4 = *puVar9;
            }
            for (iVar7 = (int)uVar3 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar4[-1] = puVar9[-1];
              puVar9 = puVar9 + -2;
              puVar4 = puVar4 + -2;
              *puVar4 = *puVar9;
            }
          }
        }
        else {
          while (local_14c != puVar9) {
            puVar9 = puVar9 + -1;
            puVar4[-1] = *puVar9;
            puVar4 = puVar4 + -1;
          }
        }
        *local_14c = uVar1;
        puVar9 = local_14c + 1;
      }
      else {
        uVar14 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        if (uVar14 < uVar3 + 0x20) {
          uVar14 = uVar3 + 0x20;
        }
        puVar5 = (undefined1 *)fn_0015ece0(uVar14);
        puVar6 = puVar5;
        for (puVar4 = local_150; puVar4 != puVar9; puVar4 = puVar4 + 1) {
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = *puVar4;
          }
          puVar6 = puVar6 + 1;
        }
        if (puVar5 + ((int)puVar9 - (int)local_150) != (undefined1 *)0x0) {
          puVar5[(int)puVar9 - (int)local_150] = uVar1;
        }
        puVar4 = puVar5 + ((int)puVar9 - (int)local_150);
        for (; puVar9 != local_14c; puVar9 = puVar9 + 1) {
          puVar4 = puVar4 + 1;
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = *puVar9;
          }
        }
        iVar7 = (int)local_14c - (int)local_150;
        puVar9 = local_150;
        if (local_150 < local_14c) {
          if (0 < iVar7) {
            for (iVar10 = iVar7 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
            }
          }
        }
        else {
          for (; puVar9 != local_14c; puVar9 = puVar9 + 1) {
          }
        }
        fn_0014f1bc(local_150);
        local_148 = puVar5 + uVar14;
        local_150 = puVar5;
        puVar9 = puVar5 + iVar7 + 1;
      }
    }
    else {
      puVar9 = local_14c + 1;
      if (local_14c != (undefined1 *)0x0) {
        *local_14c = uVar1;
      }
    }
    local_14c = puVar9;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x100);
  fn_0047dfc0(puVar12,&local_150);
  puVar12[8] = puVar12[8] | 0x10;
  puStack_40 = &DAT_008533d0;
  local_3c = puVar12;
  fn_0079bd60();
  uVar2 = fn_0013d3e8(auStack_30,&DAT_0066b56c);
  iVar7 = fn_004a0b70(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),&puStack_40,
                       &DAT_00898848,param_1 + 0x5a8,uVar2);
  fn_00170f54(auStack_30);
  if (iVar7 == 0) {
    uVar13 = 0xffffffff;
    uVar2 = fn_0045a590();
    uVar8 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar2,&local_140,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar7 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar7 + 0x10) == '\x02') {
      DAT_00898844 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 8) + 0xc);
    }
    else {
      local_140 = *(undefined4 *)(iVar7 + 0x38);
      uStack_13c = *(undefined4 *)(iVar7 + 0x3c);
      uStack_138 = *(undefined4 *)(iVar7 + 0x40);
      uVar13 = 0xffffffff;
      fn_006688a0(param_1,param_1 + 0x74,&local_140,0);
    }
  }
  local_3c = (int *)0x0;
  (**(code **)*puVar12)(puVar12);
  fn_002feca8(local_144);
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 4))();
  }
  puVar9 = local_150;
  if (local_150 < local_14c) {
    if (0 < (int)local_14c - (int)local_150) {
      for (iVar7 = (int)local_14c - (int)local_150 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      }
    }
  }
  else {
    for (; puVar9 != local_14c; puVar9 = puVar9 + 1) {
    }
  }
  fn_0014f1bc(local_150);
  return uVar13;
}


