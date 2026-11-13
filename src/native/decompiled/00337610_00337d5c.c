#include "00337610_00337d5c.h"



void fn_00337d5c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c);
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0x50 + iVar2 != iVar2) {
    do {
      iVar2 = *(int *)(param_1 + 0x19c) + uVar3 * 0x50;
      iVar1 = *(int *)(iVar2 + 0x38);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      if (iVar1 != 0 && iVar2 != 0) {
        fn_00162d54(*(undefined4 *)(param_1 + 4));
        fn_00162d44(*(undefined4 *)(param_1 + 4));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c)) / 0x50));
  }
  return;
}



void fn_00337ccc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c);
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0x50 + iVar2 != iVar2) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x19c) + uVar3 * 0x50 + 0x38);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 0)) {
        fn_001969a4(*(undefined4 *)(param_1 + 4));
        fn_00162d44(*(undefined4 *)(param_1 + 4));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c)) / 0x50));
  }
  return;
}



undefined4 fn_00337cb8(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x19c) + param_2 * 0x50 + 0x38);
}



void fn_00337b0c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c);
  iVar5 = iVar1 >> 0x1f;
  if (iVar1 / 0x50 + iVar5 != iVar5) {
    do {
      iVar5 = *(int *)(param_1 + 0x19c) + uVar4 * 0x50;
      fn_002e9288(iVar5);
      if (*(int *)(iVar5 + 0x48) != 0) {
        fn_005e16f0(*(int *)(iVar5 + 0x48),*(undefined4 *)(iVar5 + 0x4c));
      }
      fn_003369b4(iVar5);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c)) / 0x50));
  }
  iVar1 = *(int *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x19c) = 0;
  iVar6 = *(int *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  iVar7 = *(int *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  for (iVar5 = iVar1; iVar5 != iVar6; iVar5 = iVar5 + 0x50) {
  }
  fn_001008c4(iVar1,(iVar7 - iVar1) / 0x50,0);
  uVar3 = *(uint *)(param_1 + 400);
  *(undefined4 *)(param_1 + 400) = 0;
  uVar2 = *(uint *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x194) = 0;
  iVar5 = *(int *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x198) = 0;
  uVar4 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar4 = uVar4 + 0x118;
    } while (uVar4 != uVar2);
  }
  uVar4 = iVar5 - uVar3;
  iVar5 = (int)((longlong)(int)uVar4 * -0x15f15f15 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  fn_001008c4(uVar3,(iVar5 >> 8) - (iVar5 >> 0x1f),0);
  if (*(int *)(param_1 + 0x18c) != 0) {
    fn_00127fb4(*(int *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x134));
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  fn_002e9288(param_1 + 0x138);
  if (*(int *)(param_1 + 0x180) != 0) {
    fn_005e16f0(*(int *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
  }
  fn_003369b4(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x18) = 0;
  fn_00337590(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  fn_003369b4(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



undefined1 * fn_00337790(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [52];
  int local_30;
  
  puVar8 = *(undefined1 **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar8 = (undefined1 *)fn_006c0d5c(param_1);
    if (*(undefined1 **)(param_1 + 0x10) == puVar8) {
      return *(undefined1 **)(param_1 + 0x10);
    }
  }
  puVar1 = (undefined1 *)(uint)*(byte *)(param_1 + 0x18);
  if (puVar1 == (undefined1 *)0x0) {
    pbVar4 = (byte *)(*(int *)(param_1 + 400) + (int)puVar8 * 0x118);
    puVar1 = (undefined1 *)(uint)*pbVar4;
    if (puVar1 != (undefined1 *)0x0) {
      if (puVar1 == &DAT_00000001 || puVar1 == (undefined1 *)0x2) {
        if (*(int *)(param_1 + 0xc) == 0) {
          puVar1 = (undefined1 *)fn_006e9f64(*(undefined4 *)(pbVar4 + 0x114));
          puVar2 = (undefined1 *)
                   fn_006e9f50(*(undefined4 *)
                                 (*(int *)(param_1 + 400) + (int)puVar8 * 0x118 + 0x114));
          if (puVar1 == puVar2) {
            return puVar2;
          }
        }
        *(undefined1 **)(param_1 + 0x188) = puVar8;
        fn_0017821c(param_1 + 0x1c,*(int *)(param_1 + 400) + (int)puVar8 * 0x118,0x118);
        if (*(int *)(param_1 + 0xc) == 0) {
          *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x130);
          uVar6 = fn_005e1698();
          *(undefined4 *)(param_1 + 0x184) = uVar6;
          iVar3 = fn_00145b00(0x14,&DAT_00812c8c);
          uVar6 = 0;
          if (iVar3 != 0) {
            uVar6 = fn_002e936c(iVar3,param_1 + 0x1e,param_1 + 0x138,
                                 *(undefined4 *)(param_1 + 0x184));
          }
        }
        else {
          iVar3 = fn_00145b00(0x14,&DAT_00812c8c);
          uVar6 = 0;
          if (iVar3 != 0) {
            uVar6 = fn_002e936c(iVar3,param_1 + 0x1e,param_1 + 0x138,*(undefined4 *)(param_1 + 0xc)
                                );
          }
        }
        *(undefined4 *)(param_1 + 0x134) = uVar6;
        fn_005e0bd4(*(undefined4 *)(param_1 + 8),uVar6);
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(*(int *)(param_1 + 400) + (int)puVar8 * 0x118) = 0;
        puVar8 = (undefined1 *)(*(int *)(param_1 + 400) + (int)puVar8 * 0x118);
        *(undefined4 *)(puVar8 + 0x110) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return puVar8;
      }
      if (puVar1 == (undefined1 *)0x3) {
        *(undefined1 **)(param_1 + 0x188) = puVar8;
        fn_0017821c(param_1 + 0x1c,pbVar4,0x118);
        iVar3 = fn_0017821c(param_1 + 0x138,
                             *(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0x188) * 0x50,0x50);
        iVar5 = *(int *)(param_1 + 0x170);
        if (iVar5 != 0) {
          iVar3 = *(int *)(iVar5 + 0xc);
        }
        if (iVar5 != 0 && iVar3 != 0) {
          fn_00162d54(*(undefined4 *)(param_1 + 4));
          fn_00162d44(*(undefined4 *)(param_1 + 4));
        }
        fn_003369b4(*(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0x188) * 0x50);
        puVar8 = (undefined1 *)fn_00337590(*(int *)(param_1 + 400) + (int)puVar8 * 0x118);
        *(undefined1 *)(param_1 + 0x18) = 2;
        return puVar8;
      }
    }
  }
  else if (puVar1 == &DAT_00000001) {
    puVar1 = (undefined1 *)0x0;
    if (*(char *)(*(int *)(param_1 + 0x134) + 0x10) != '\0') {
      iVar3 = fn_0017821c(auStack_68,*(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0x188) * 0x50,
                           0x50);
      if (local_30 != 0) {
        iVar3 = *(int *)(local_30 + 0xc);
      }
      if (local_30 != 0 && iVar3 != 0) {
        fn_00162d54(*(undefined4 *)(param_1 + 4));
        fn_00162d44(*(undefined4 *)(param_1 + 4));
      }
      if (*(int *)(param_1 + 0x170) != 0) {
        if (*(int *)(*(int *)(param_1 + 0x170) + 0xc) == 0) {
          fn_001969a4(*(undefined4 *)(param_1 + 4));
          fn_00162d44(*(undefined4 *)(param_1 + 4));
        }
        iVar3 = *(int *)(param_1 + 0x170);
        uVar6 = *(undefined4 *)(param_1 + 0x124);
        uVar7 = *(undefined4 *)(param_1 + 0x128);
        *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(iVar3 + 0x68) = uVar6;
        *(undefined4 *)(iVar3 + 0x78) = uVar7;
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
      }
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x120);
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x124);
      *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x128);
      fn_00127fb4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x134));
      *(undefined4 *)(param_1 + 0x134) = 0;
      fn_0017821c(*(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0x188) * 0x50,param_1 + 0x138,0x50
                  );
      fn_0017821c(param_1 + 0x138,auStack_68,0x50);
      *(undefined1 *)(param_1 + 0x18) = 2;
      return auStack_64;
    }
  }
  else if (puVar1 == (undefined1 *)0x2) {
    if (*(int *)(param_1 + 0x18c) != 0) {
      fn_00127fb4(*(int *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x134));
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
    fn_002e9288(param_1 + 0x138);
    if (*(int *)(param_1 + 0x180) != 0) {
      fn_005e16f0(*(int *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
    }
    fn_003369b4(param_1 + 0x138);
    *(undefined1 *)(param_1 + 0x18) = 0;
    fn_00337590(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    puVar1 = (undefined1 *)fn_003369b4(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return puVar1;
}



undefined4 fn_00337750(int param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 400) + param_2 * 0x118);
  *puVar1 = 3;
  if (*(int *)(puVar1 + 0x110) != 0) {
    *(undefined4 *)(puVar1 + 0x110) = *(undefined4 *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return 1;
}



undefined4 fn_003376f4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 400) + param_2 * 0x118);
  *puVar1 = 2;
  fn_001003e0(puVar1 + 2,param_3);
  *(undefined4 *)(puVar1 + 0x114) = param_4;
  if (*(int *)(puVar1 + 0x110) != 0) {
    *(undefined4 *)(puVar1 + 0x110) = *(undefined4 *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return 1;
}



undefined4
fn_00337680(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(*(int *)(param_1 + 400) + param_2 * 0x118);
  *puVar3 = 1;
  fn_001003e0(puVar3 + 2,param_3);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  *(undefined4 *)(puVar3 + 0x104) = *param_4;
  *(undefined4 *)(puVar3 + 0x108) = uVar1;
  *(undefined4 *)(puVar3 + 0x10c) = uVar2;
  *(undefined4 *)(puVar3 + 0x114) = param_5;
  if (*(int *)(puVar3 + 0x110) != 0) {
    *(undefined4 *)(puVar3 + 0x110) = *(undefined4 *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return 1;
}



undefined4 fn_00337610(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(*(int *)(param_1 + 400) + param_2 * 0x118);
  *puVar4 = 1;
  fn_001003e0(puVar4 + 2,param_3);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *(undefined4 *)(puVar4 + 0x114) = 0;
  *(undefined4 *)(puVar4 + 0x104) = uVar1;
  *(undefined4 *)(puVar4 + 0x108) = uVar2;
  *(undefined4 *)(puVar4 + 0x10c) = uVar3;
  if (*(int *)(puVar4 + 0x110) != 0) {
    *(undefined4 *)(puVar4 + 0x110) = *(undefined4 *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return 1;
}


