#include "005b3840_005b7a08b.h"



void fn_005b7a08(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x18);
  *puVar1 = &DAT_00848a44;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x17] = 0xffffffff;
  puVar1[0x18] = 0;
  *(byte *)((int)puVar1 + 0x59) = ~(byte)(*(uint *)(puVar1[5] + 0x39c) >> 0xb) & 1;
  return;
}



void fn_005b4fcc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  undefined1 auStack_2c [16];
  int local_1c;
  
  piVar7 = (int *)0x0;
  switch(*(undefined4 *)(param_1 + 0x110)) {
  case 0:
    uVar1 = fn_006896fc(param_1,0x39);
    if (uVar1 == 0) {
      return;
    }
    uVar2 = fn_00689c3c(param_1);
    bVar8 = uVar2 == uVar1;
    if (bVar8) {
      uVar2 = (uint)*(byte *)(uVar1 + 0xc);
    }
    if (!bVar8 || uVar2 != 3) {
      return;
    }
    piVar4 = (int *)fn_006896fc(param_1,0x39);
    if (piVar4 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
      do {
        if (puVar5 == &DAT_00894d38) {
          piVar7 = piVar4;
          break;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    uVar1 = fn_0025dbb0(piVar7);
    uVar2 = fn_006ad87c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),1);
    if ((uVar2 & ~uVar1) == 0) {
      return;
    }
    uVar6 = 1;
    goto LAB_005b5278;
  case 1:
    fn_00234b60(auStack_38,0xe);
    fn_00234948(auStack_38);
    iVar3 = fn_006b2de0(auStack_38);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      uVar6 = fn_006b2dd4(auStack_38);
      fn_00168a24(&local_30,uVar6,auStack_2c);
      uVar9 = fn_0023cbbc();
      *(undefined8 *)(param_1 + 0x128) = uVar9;
      if (local_30 != &DAT_008f9cf4) {
        piVar7 = local_30 + -3;
        iVar3 = *piVar7;
        if ((iVar3 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
        }
      }
      iVar3 = fn_004a0be4(*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300));
      if (iVar3 == 0) {
        uVar6 = fn_0022f584((char *)&DAT_005b5418,0);
        fn_00748808(param_1,uVar6,0,1,1,0);
        uVar6 = 3;
      }
      else {
        uVar6 = fn_0022f584((char *)&DAT_005b5400,0);
        fn_00748898(param_1,uVar6);
        uVar6 = 4;
      }
      *(undefined4 *)(param_1 + 0x110) = uVar6;
    }
    fn_00234c60(auStack_38);
    return;
  case 2:
    iVar3 = fn_006f6a6c(param_1);
    if (iVar3 != 1) {
      return;
    }
    iVar3 = fn_0066e158(DAT_00898840);
    if (iVar3 == 0) {
      fn_006899f4(param_1,0xf4,1,0);
      return;
    }
    break;
  case 3:
    iVar3 = fn_006f6a6c(param_1);
    if (iVar3 != 1) {
      return;
    }
    iVar3 = fn_001f7424(param_1,0x48);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = fn_0066e158(DAT_00898840);
    if (iVar3 == 0) {
      uVar6 = 0;
      goto LAB_005b5278;
    }
    break;
  case 4:
    iVar3 = fn_0066e158(DAT_00898840);
    if (iVar3 == 0) {
      iVar3 = fn_006f5e30(*(undefined4 *)(param_1 + 0x11c));
      if (iVar3 == 0) {
        return;
      }
      fn_00673354(*(undefined4 *)(param_1 + 0x11c));
      uVar6 = fn_004a0d18(*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300));
      fn_0067901c(*(undefined4 *)(param_1 + 0x114),uVar6);
      uVar6 = 5;
    }
    else {
      fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
      uVar6 = 6;
    }
    goto LAB_005b5278;
  case 5:
    iVar3 = fn_0023c3b8(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x5c),1);
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x114) + 0x44) == 0) {
      fn_004b5170(&local_30);
      fn_0023ce58(*(int *)(param_1 + 0x114) + 0x98,&local_30);
      if (local_1c == 0) {
        uVar6 = fn_0022f584((char *)&DAT_005b5454,0);
        fn_00748808(param_1,uVar6,0,1,1,0);
        uVar6 = 3;
      }
      else {
        uVar6 = fn_0022f584((char *)&DAT_005b5434,0);
        fn_00748808(param_1,uVar6,0,1,1,0);
        piVar4 = (int *)fn_001f74ec(param_1,0xf4);
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*piVar4)(piVar4);
          do {
            if (puVar5 == &DAT_00899080) {
              piVar7 = piVar4;
              break;
            }
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        fn_00607240(piVar7,&local_30);
        uVar6 = 2;
      }
      *(undefined4 *)(param_1 + 0x110) = uVar6;
      fn_004b51c4(&local_30);
      return;
    }
    break;
  default:
    return;
  }
  uVar6 = 6;
LAB_005b5278:
  *(undefined4 *)(param_1 + 0x110) = uVar6;
  return;
}



void fn_005b4a2c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  fn_0068ab44(param_1,0x100094b);
  uVar1 = fn_002f8914();
  iVar2 = fn_002f6fa8();
  piVar3 = (int *)fn_001f74d8(param_1,0xf8);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*piVar3)(piVar3);
    do {
      if (puVar4 == &DAT_008971c0) goto LAB_005b4a9c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_005b4a9c:
  (**(code **)(*piVar3 + 0xc))(piVar3);
  piVar3[4] = iVar2 + 0x40;
  piVar7 = (int *)0x0;
  piVar3[5] = *(int *)(iVar2 + 0x38);
  if (param_2 == 0) {
    piVar5 = (int *)fn_0041fe24(iVar2,uVar1);
    if ((*piVar5 != 0) && (iVar2 = fn_002f7e84(uVar1), *(char *)(iVar2 + 0x3d5) == '\0')) {
      piVar7 = piVar5;
    }
    uVar1 = fn_0022f584((char *)&DAT_005b4c10,0);
    fn_0068974c(param_1,uVar1,0,1);
  }
  else {
    if (param_2 != 1) goto LAB_005b4be0;
    iVar6 = fn_002f7e84(uVar1);
    if (*(char *)(iVar6 + 0x3d4) != '\0') {
      piVar7 = (int *)fn_006cd9d8(iVar2,uVar1);
    }
    uVar1 = fn_0022f584((char *)&DAT_005b4c2c,0);
    fn_0068974c(param_1,uVar1,0,1);
  }
  if (piVar7 != (int *)0x0) {
    piVar3[6] = *piVar7;
    piVar3[7] = piVar7[1];
    piVar3[8] = piVar7[10];
    piVar3[9] = piVar7[9] - piVar7[10];
    piVar3[10] = piVar7[5];
    piVar3[0xb] = piVar7[8];
    piVar3[0xc] = piVar7[6] + piVar7[7];
    piVar3[0xd] = piVar7[8] + piVar7[6] + piVar7[7] + piVar7[5];
  }
LAB_005b4be0:
  fn_00689930(param_1,0xf8,0);
  *(code **)(param_1 + 0xf8) = fn_005b49a4;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}



undefined4 fn_005b4838(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  wchar16 *pwStack_78;
  char *pcStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [32];
  
  fn_00397774(&pwStack_78);
  local_64 = 2;
  local_70 = 2;
  uStack_6c = 0;
  pwStack_78 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_74 = (char *)&DAT_005b4964;
  uVar1 = fn_0022f750((char *)&DAT_005b4978);
  fn_00147974(auStack_5c,uVar1);
  local_4c = 0;
  local_44 = 1;
  local_4b = 0;
  uVar1 = fn_0022f750((char *)&DAT_005b4984);
  fn_00147974(auStack_38,uVar1);
  uVar1 = fn_00397618(param_1,&pwStack_78);
  uVar4 = 0;
  do {
    uVar2 = fn_0022f750((&DAT_007cafc4)[uVar4]);
    fn_0031b78c(param_1,uVar4,0,uVar2);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  *(undefined **)(param_1 + 0xf8) = &DAT_005b49a0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined **)(param_1 + 0xf0) = &DAT_005b49a0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined **)(param_1 + 0xe8) = &DAT_005b49a0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  fn_00100414(auStack_3c,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_50);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return uVar1;
}


