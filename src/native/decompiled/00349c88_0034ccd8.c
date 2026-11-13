#include "00349c88_0034ccd8.h"



undefined4 fn_0034cbd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  *(undefined4 *)(param_1 + 0xf8) = 2;
  iVar1 = fn_006b83e4(uVar5);
  iVar2 = fn_006b84b0(uVar5);
  *(int *)(param_1 + 0xbc) = iVar2 + iVar1;
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0x6b);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894248) goto LAB_0034cc4c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0034cc4c:
  *(undefined4 **)(param_1 + 0x100) = puVar3;
  *(undefined1 *)(puVar3 + 0x151) = 1;
  fn_003fe7ac(param_1);
  fn_0034ccd8(param_1);
  fn_003e5b40(param_1);
  fn_003e5550(param_1);
  uVar5 = fn_0022f750((char *)&DAT_0034cf70);
  fn_0059e074(param_1 + 0xcc,1,0,uVar5);
  fn_00689930(param_1,0x6b,0);
  fn_0034d0c8(param_1,0);
  return 1;
}



void fn_0034ccd8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_2c [2];
  
  iVar5 = 0;
  iVar6 = 0;
  uVar1 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar2 = fn_006b83e4();
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b0a0(uVar1,iVar6);
      *(undefined4 *)(param_1 + iVar5 * 4 + 0x104) = uVar3;
      iVar2 = fn_006ba284(param_1);
      if (iVar2 * *(int *)(param_1 + 0xfc) <= iVar5) {
        iVar2 = fn_006ba284(param_1);
        if (iVar5 < iVar2 * *(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xfc)) {
          iVar2 = fn_006ba284(param_1);
          iVar2 = iVar5 - iVar2 * *(int *)(param_1 + 0xfc);
          fn_00231074(local_2c,uVar3,0);
          fn_0031b78c(param_1,iVar2,1,local_2c[0]);
          uVar3 = fn_00230a84(0,0);
          fn_0031b78c(param_1,iVar2,7,uVar3);
          if (local_2c[0] != &DAT_008f9cf4) {
            piVar4 = local_2c[0] + -3;
            iVar2 = *piVar4;
            if (iVar2 == -1) {
LAB_0034cde4:
              fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
            }
            else if (piVar4 != &DAT_008f9ce8) {
              *piVar4 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_0034cde4;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar2 = fn_006b83e4(uVar1);
    } while (iVar6 < iVar2);
  }
  iVar6 = 0;
  iVar2 = fn_006b84b0(uVar1);
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b348(uVar1,iVar6);
      *(undefined4 *)(param_1 + iVar5 * 4 + 0x104) = uVar3;
      iVar2 = fn_006ba284(param_1);
      if (iVar2 * *(int *)(param_1 + 0xfc) <= iVar5) {
        iVar2 = fn_006ba284(param_1);
        if (iVar5 < iVar2 * *(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xfc)) {
          iVar2 = fn_006ba284(param_1);
          iVar2 = iVar5 - iVar2 * *(int *)(param_1 + 0xfc);
          fn_00231074(local_2c,uVar3,0);
          fn_0031b78c(param_1,iVar2,1,local_2c[0]);
          uVar3 = fn_00230a84(1,0);
          fn_0031b78c(param_1,iVar2,7,uVar3);
          if (local_2c[0] != &DAT_008f9cf4) {
            piVar4 = local_2c[0] + -3;
            iVar2 = *piVar4;
            if (iVar2 == -1) {
LAB_0034cf04:
              fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
            }
            else if (piVar4 != &DAT_008f9ce8) {
              *piVar4 = iVar2 + -1;
              if (iVar2 == 0) goto LAB_0034cf04;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar2 = fn_006b84b0(uVar1);
    } while (iVar6 < iVar2);
  }
  return;
}



void fn_0034b5b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_28;
  
  local_28 = param_4;
  fn_002c3e78();
  iVar1 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),
                       *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc));
  iVar5 = 0;
  if (*(char *)(iVar1 + 6) != '\0') {
    do {
      uVar2 = fn_00230af0(iVar5,0);
      fn_0031b78c(param_1,iVar5,7,uVar2);
      uVar2 = fn_0022f750((&DAT_00893aa4)[iVar5]);
      fn_0031b78c(param_1,iVar5,1,uVar2);
      iVar6 = (int)*(short *)(iVar1 + iVar5 * 2 + 8);
      iVar3 = fn_00163940(iVar6);
      if (iVar3 == 0) {
        uVar2 = fn_0022f750(&LAB_0034b700);
        fn_0031b78c(param_1,iVar5,6,uVar2);
      }
      else {
        fn_0023097c(&local_28,iVar6,0);
        fn_0031b78c(param_1,iVar5,6,local_28);
        if (local_28 != &DAT_008f9cf4) {
          piVar4 = local_28 + -3;
          iVar3 = *piVar4;
          if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
            fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(iVar1 + 6));
  }
  return;
}



void fn_0034b350(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  uVar1 = fn_0022f750((char *)&DAT_0034b3cc);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar1);
  uVar1 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1[0x39] + 0xc));
  fn_00231690(&local_10,uVar1,0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,local_10);
  fn_001588d4(&local_10);
  return;
}



undefined4 fn_0034b0e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [5];
  undefined1 local_4b;
  undefined1 local_46;
  undefined4 local_44;
  undefined1 auStack_3c [32];
  undefined4 local_1c;
  
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_008939f4) goto LAB_0034b12c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0034b12c:
  param_1[0x39] = (int)puVar5;
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00893a00) goto LAB_0034b170;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0034b170:
  param_1[0x3a] = (int)puVar5;
  iVar2 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1[0x39] + 0xc));
  fn_00397774(&local_78);
  local_78 = DAT_00893a90;
  local_74 = DAT_00893a94;
  uVar3 = fn_0022f750((char *)&DAT_0034b32c);
  fn_00147974(auStack_5c,uVar3);
  local_44 = 1;
  local_70 = (uint)*(byte *)(iVar2 + 6);
  local_6c = *(undefined4 *)(param_1[0x39] + 8);
  local_4b = 1;
  uVar3 = fn_0022f750((char *)&DAT_0034b340);
  fn_00147974(auStack_50,uVar3);
  local_46 = 1;
  fn_00397618(param_1,&local_78);
  uVar3 = fn_0022f750((char *)&DAT_0034b3cc);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar3);
  uVar3 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1[0x39] + 0xc));
  fn_00231690(&local_1c,uVar3,0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,local_1c);
  fn_001588d4(&local_1c);
  (**(code **)(*param_1 + 0x124))(param_1);
  puVar5 = (undefined4 *)
           fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(param_1[0x39] + 0xc));
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  uVar6 = puVar5[3];
  iVar2 = param_1[0x3a];
  *(undefined4 *)(iVar2 + 0x558) = *puVar5;
  *(undefined4 *)(iVar2 + 0x55c) = uVar3;
  *(undefined4 *)(iVar2 + 0x560) = uVar4;
  *(undefined4 *)(iVar2 + 0x564) = uVar6;
  *(undefined1 *)(param_1[0x3a] + 0x568) = 1;
  fn_00689efc(param_1,0x41,0);
  fn_00100414(auStack_3c,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_50);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}



undefined4 fn_00349c88(int *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar16 *pwStack_a0;
  char *pcStack_9c;
  undefined4 uStack_98;
  int local_94;
  int local_90 [3];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  iVar2 = (**(code **)(*param_1 + 0x140))(param_1);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  uVar8 = *(undefined4 *)(iVar2 + 0x10);
  uVar3 = *(undefined4 *)(iVar2 + 0x18);
  uVar4 = *(undefined4 *)(iVar2 + 0x1c);
  fn_00397774(&pwStack_a0);
  local_6c = 2;
  local_68 = 0;
  fn_001028d4(auStack_40,(char *)&DAT_00349e3c,uVar7);
  uVar3 = fn_0025f9d8(DAT_00897800,uVar3,auStack_40);
  fn_00147974(auStack_60,uVar3);
  fn_001028d4(auStack_40,&DAT_00349e50,uVar8);
  uVar3 = fn_0025f9d8(DAT_00897800,uVar4,auStack_40);
  fn_00147974(auStack_58,uVar3);
  pwStack_a0 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_9c = "common_0200.bflyt";
  uStack_98 = 7;
  uVar5 = *(uint *)(iVar2 + 0x14);
  iVar6 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
  local_94 = uVar5 + ((iVar6 >> 2) - (iVar6 >> 0x1f)) * -7;
  lVar1 = (longlong)(int)*(uint *)(iVar2 + 0x14) * -0x6db6db6d +
          ((ulonglong)*(uint *)(iVar2 + 0x14) << 0x20);
  iVar2 = (int)((ulonglong)lVar1 >> 0x20);
  local_90[0] = (iVar2 >> 2) - (iVar2 >> 0x1f);
  local_90[1] = 9;
  local_90[2] = 0x41100000;
  uVar3 = fn_0022f750((char *)&DAT_00349e7c,local_90,(int)lVar1);
  fn_00147974(auStack_84,uVar3);
  fn_00147974(auStack_80,&DAT_00349e58);
  fn_00147974(auStack_7c,&DAT_00349e58);
  fn_00147974(auStack_78,&DAT_00349e58);
  local_74 = 1;
  local_73 = 0;
  local_72 = 0;
  local_71 = 0;
  uVar3 = fn_00397618(param_1,&pwStack_a0);
  fn_00100414(auStack_64,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_78);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return uVar3;
}


