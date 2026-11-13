#include "005b4d7c_005b5ed8.h"



undefined4 fn_005b5ed8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined1 auStack_13c [16];
  undefined1 auStack_12c [228];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  
  uVar7 = 0;
  uVar6 = 0;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b20) goto LAB_005b5f34;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b5f34:
  fn_0017821c(&local_150,puVar2 + 3,0x104);
  uVar4 = fn_0020cb7c(&uStack_140);
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    fn_0020bbc4(auStack_48,&uStack_140);
    fn_005b6204(param_1);
    uVar7 = 0;
    uVar6 = 0;
    fn_005d9ae4(param_1,1);
  }
  else if (cVar1 == '\x01' || cVar1 == '\x02') {
    fn_00604728(puVar2,param_1 + 0xc0);
    uVar7 = puVar2[0x48];
    uVar6 = puVar2[0x49];
    fn_005d9ae4(param_1,0);
  }
  for (iVar5 = *(int *)(param_1 + 0xc0); *(int *)(param_1 + 0xc4) != iVar5; iVar5 = iVar5 + 8) {
    if (*(short *)(iVar5 + 4) != 0) {
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
    }
  }
  fn_005d976c(param_1,1,uVar7,uVar6);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b20) goto LAB_005b6068;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b6068:
  *(undefined4 **)(param_1 + 0xdc) = puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_005b60ac;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b60ac:
  *(undefined4 **)(param_1 + 0xe0) = puVar2;
  fn_0017821c(&local_150,*(int *)(param_1 + 0xdc) + 0xc,0x104);
  fn_006e8bec(param_1,&uStack_140);
  fn_00210654(&uStack_140,&uStack_140,local_14c,local_148);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0xe0),&uStack_140);
  fn_00689efc(param_1,0x2d,0);
  if ((*(int *)(param_1 + 0xd8) != 0) && (*(int *)(param_1 + 0xd8) == 1)) {
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd9);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00890b20) goto LAB_005b615c;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005b615c:
    fn_0017821c(auStack_13c,puVar2 + 3,0x104);
    local_150 = fn_0020cb7c(auStack_12c);
    fn_0018a618(auStack_38,8,7,&DAT_005b6624);
    fn_0015b0dc(auStack_38);
    uVar6 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                         (char *)&DAT_005b662c);
    local_148 = 0;
    local_14c = 1;
    local_144 = 0;
    uStack_140 = 1;
    local_150 = 1;
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar6,1,0);
    fn_00689bd0(param_1,0x48,0);
  }
  return 1;
}



void fn_005b5b90(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x10c) == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x104) + 8) = param_2;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x10c) = 1;
      *(undefined4 *)(param_1 + 0x110) = 0;
      return;
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x10c) = 2;
      *(undefined4 *)(param_1 + 0x110) = 0;
      return;
    }
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x10c) = 3;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return;
}



void fn_005b5af8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    iVar1 = fn_0066e158(DAT_00898840);
    if ((iVar1 == 0) && (*(char *)(DAT_00898840 + 0x60) == '\0')) {
      fn_00748990(param_1);
      (**(code **)(**(int **)(param_1 + 0x104) + 0xc))();
      *(undefined4 *)(param_1 + 0x10c) = 4;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return;
}



void fn_005b5554(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_1c;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 0) {
    uVar4 = fn_0022f584((char *)&DAT_005b5730,0);
    fn_00748898(param_1,uVar4);
    uVar4 = 1;
LAB_005b5618:
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    return;
  }
  if (iVar1 == 1) {
    iVar1 = fn_006f5e30(*(undefined4 *)(param_1 + 0x120));
    if (iVar1 != 0) {
      fn_00673354(*(undefined4 *)(param_1 + 0x120));
      local_34 = local_34 & 0xffffff00;
      local_38 = &DAT_00852a4c;
      local_2c = 100;
      local_30 = 0;
      fn_0067a878(*(undefined4 *)(param_1 + 0x118),1,&local_38);
      uVar4 = 2;
      goto LAB_005b5618;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = fn_0023c3b8(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x5c),1);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(param_1 + 0x118) + 0x44) == 0) {
        fn_004b5170(&local_30);
        fn_0023ce58(*(int *)(param_1 + 0x118) + 0x98,&local_30);
        if (local_1c == 0) {
          uVar4 = fn_0022f584((char *)&DAT_005b5754,0);
          local_38 = (undefined *)0x1;
          local_34 = 0;
          fn_00748808(param_1,uVar4,0,1);
          *(undefined4 *)(param_1 + 0x110) = 3;
        }
        else {
          puVar2 = (undefined4 *)fn_001f74ec(param_1,0xf5);
          if (puVar2 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
            do {
              if (puVar3 == &DAT_00899080) goto LAB_005b56c8;
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
          }
          puVar2 = (undefined4 *)0x0;
LAB_005b56c8:
          fn_00607240(puVar2,&local_30);
          fn_006899f4(param_1,0xf5,1,0);
          *(undefined4 *)(param_1 + 0x10c) = 4;
          *(undefined4 *)(param_1 + 0x110) = 0;
        }
        fn_004b51c4(&local_30);
        return;
      }
      *(undefined4 *)(param_1 + 0x110) = 4;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return;
}



undefined4 fn_005b5488(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008990b0) goto LAB_005b54cc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005b54cc:
  *(undefined4 **)(param_1 + 0x104) = puVar4;
  uVar2 = fn_0043cd80(param_1);
  iVar3 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar3 + 0x20);
  iVar3 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar3 + 0x28);
  fn_00689efc(param_1,0x39,0);
  if (*(int *)(*(int *)(param_1 + 0x104) + 0x14) == 1) {
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  return uVar2;
}



void fn_005b4f54(void)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000008;
  
  puVar1 = (undefined4 *)fn_003064c8();
  puVar1[0xc] = in_stack_00000008;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *puVar1 = &DAT_00848430;
  return;
}



undefined1 * fn_005b4d7c(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int local_30;
  undefined1 auStack_2c [8];
  
  if ((char)param_1[0xd] == '\0') {
    puVar3 = (undefined1 *)fn_00306360(param_1);
    return puVar3;
  }
  uVar7 = 0;
  do {
    piVar6 = (int *)param_1[0xc];
    uVar4 = piVar6[1] - *piVar6;
    iVar5 = (int)((longlong)(int)uVar4 * -0x77777777 + ((ulonglong)uVar4 << 0x20) >> 0x20);
    if ((uint)((iVar5 >> 7) - (iVar5 >> 0x1f)) <= uVar7) {
      iVar5 = (int)((longlong)(int)uVar4 * -0x77777777 + ((ulonglong)uVar4 << 0x20) >> 0x20);
      local_30 = (iVar5 >> 7) - (iVar5 >> 0x1f);
      fn_002ff628(9,&DAT_008c7617,&DAT_008c7617,uVar7);
    }
    iVar8 = *piVar6 + uVar7 * 0xf0;
    piVar6 = (int *)(**(code **)(*param_1 + 0x30))(param_1,0,uVar7);
    *(undefined1 *)((int)piVar6 + 0x1d) = *(undefined1 *)((int)param_1 + 0x29);
    fn_0020bbc4(&local_30,iVar8);
    iVar5 = fn_006bfda8(auStack_2c);
    if (iVar5 == 0) {
      (**(code **)(*piVar6 + 0x20))(piVar6,0);
      fn_002b427c(piVar6,0);
      fn_002b4348(piVar6,0);
      *(undefined1 *)((int)piVar6 + 0x3d) = 0;
      uVar1 = fn_006bf184(auStack_2c);
      *(undefined1 *)((int)piVar6 + 0x43) = uVar1;
      *(undefined1 *)((int)piVar6 + 0x41) = 0;
      fn_002b325c(piVar6,0xffffffff);
    }
    else {
      (**(code **)(*piVar6 + 0x20))(piVar6,1);
      uVar2 = fn_006bfda8(auStack_2c);
      fn_002b427c(piVar6,uVar2);
      uVar2 = fn_006bfe90(auStack_2c);
      fn_002b4348(piVar6,uVar2);
      uVar1 = fn_006bf34c(auStack_2c);
      *(undefined1 *)((int)piVar6 + 0x3d) = uVar1;
      uVar1 = fn_006bf184(auStack_2c);
      *(undefined1 *)((int)piVar6 + 0x43) = uVar1;
      uVar1 = fn_001f84ac(iVar8 + 0x72);
      *(undefined1 *)((int)piVar6 + 0x3f) = uVar1;
      *(undefined1 *)((int)piVar6 + 0x41) = 1;
      if ((char)param_1[5] != '\0') {
        fn_002b325c(piVar6,3);
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  return (undefined1 *)&local_30;
}


