#include "0043d3a0_0043f3d4.h"



void fn_0043f3d4(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined1 *local_90;
  int local_8c;
  undefined1 auStack_88 [24];
  undefined4 local_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [36];
  
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_00178f9c(*(undefined4 *)(iVar2 + 8),param_1[0x1a]);
  puVar9 = (undefined4 *)param_1[6];
  if (puVar9 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar4 == &DAT_0089715c) goto LAB_0043f43c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_0043f43c:
  iVar2 = 0;
  do {
    iVar7 = iVar2 + 1;
    iVar8 = 0;
    fn_001028d4(&local_90,(char *)&DAT_007caea3,iVar7);
    fn_006889d8(uVar3,&local_90,0);
    fn_001028d4(&local_90,(char *)&DAT_007caeb9,iVar7);
    fn_006889d8(uVar3,&local_90,0);
    fn_001028d4(&local_90,(char *)&DAT_007caed1,iVar7);
    fn_006889d8(uVar3,&local_90,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  iVar2 = fn_006e8ec0(puVar9);
  if (iVar2 == 0) {
    fn_006889d8(uVar3,(char *)&DAT_007caf61,1);
    uVar6 = fn_0022f750((char *)&DAT_0043f940);
    fn_00688cc4(uVar3,(char *)&DAT_007caf61,uVar6);
    iVar2 = 0;
    do {
      fn_001028d4(&local_90,(char *)&DAT_007cae8f,iVar2 + 1);
      fn_006889d8(uVar3,&local_90,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    return;
  }
  fn_006889d8(uVar3,(char *)&DAT_007caf61,0);
  do {
    iVar7 = iVar8 + 1;
    iVar2 = fn_006e8f10(puVar9,iVar8);
    if (iVar2 == 0) {
      fn_001028d4(&local_90,(char *)&DAT_007cae8f,iVar7);
      fn_006889d8(uVar3,&local_90,0);
    }
    else {
      piVar5 = (int *)fn_005b85c0(puVar9,iVar8);
      bVar11 = puVar9[0x41] == iVar8;
      fn_001028d4(&local_90,(char *)&DAT_007cae8f,iVar7);
      fn_006889d8(uVar3,&local_90,1);
      iVar2 = piVar5[1];
      fn_001028d4(&local_90,(char *)&DAT_007caee9,iVar7);
      fn_00688cc4(uVar3,&local_90,iVar2);
      if (bVar11) {
        fn_001827b0(uVar3,&local_90);
        fn_00688e60();
      }
      local_8c = param_1[0x1b];
      iVar2 = piVar5[2];
      fn_001028d4(auStack_88,(char *)&DAT_007caf03,iVar7);
      fn_001028d4(auStack_68,(char *)&DAT_007caef6,iVar7);
      local_90 = auStack_68;
      fn_0028be4c(local_8c,uVar3,(short)iVar2,auStack_88);
      if (bVar11) {
        fn_001827b0(uVar3,auStack_88);
        fn_00688e60();
      }
      iVar2 = piVar5[3];
      fn_001028d4(&local_90,(char *)&DAT_007caf13,iVar7);
      fn_00688cc4(uVar3,&local_90,iVar2);
      if (bVar11) {
        fn_001827b0(uVar3,&local_90);
        fn_00688e60();
      }
      iVar2 = piVar5[4];
      fn_001028d4(auStack_48,(char *)&DAT_007caf24,iVar7);
      local_90 = (undefined1 *)(int)(short)iVar2;
      fn_0018a618(auStack_88,0x20,0x1f,&DAT_0043f924);
      fn_00688cc4(uVar3,auStack_48,auStack_88);
      if (bVar11) {
        fn_001827b0(uVar3,auStack_48);
        fn_00688e60();
      }
      sVar1 = *(short *)((int)piVar5 + 0x12);
      fn_001028d4(auStack_48,(char *)&DAT_007caf34,iVar7);
      local_90 = (undefined1 *)(int)sVar1;
      fn_0018a618(auStack_88,0x20,0x1f,&DAT_0043f924);
      fn_00688cc4(uVar3,auStack_48,auStack_88);
      if (bVar11) {
        fn_001827b0(uVar3,auStack_48);
        fn_00688e60();
      }
      local_70 = fn_0022f750((char *)&DAT_0043f934);
      fn_001028d4(&local_90,(char *)&DAT_007caf45,iVar7);
      fn_00688cc4(uVar3,&local_90,local_70);
      if (bVar11) {
        fn_001827b0(uVar3,&local_90);
        fn_00688e60();
      }
      puVar10 = (undefined1 *)piVar5[5];
      fn_001028d4(auStack_48,(char *)&DAT_007caf53,iVar7);
      local_90 = puVar10;
      fn_0018a618(auStack_88,0x20,0x1f,&DAT_0043f924);
      fn_00688cc4(uVar3,auStack_48,auStack_88);
      if (bVar11) {
        fn_001827b0(uVar3,auStack_48);
        fn_00688e60();
      }
      if (*(char *)(puVar9 + 4) == '\0') {
        if (*piVar5 < 1) {
          if (*piVar5 < 0) {
            fn_001028d4(&local_90,(char *)&DAT_007caeb9,iVar7);
            fn_006889d8(uVar3,&local_90,1);
          }
          else {
            fn_001028d4(&local_90,(char *)&DAT_007caed1,iVar7);
            fn_006889d8(uVar3,&local_90,1);
          }
        }
        else {
          fn_001028d4(&local_90,(char *)&DAT_007caea3,iVar7);
          fn_006889d8(uVar3,&local_90,1);
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 10);
  return;
}



undefined4 fn_0043d3a0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 auStack_5c [24];
  undefined1 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  uVar16 = (**(code **)(*param_1 + 0x138))(param_1,&local_7c);
  puVar4 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
  iVar12 = 0;
  if (0 < local_7c) {
    do {
      puVar13 = (undefined4 *)((int)uVar16 + iVar12 * 0x10);
      puVar9 = (undefined4 *)param_1[0x38];
      puVar11 = (uint *)(param_1 + 0x37);
      if (puVar9 == (undefined4 *)param_1[0x39]) {
        uVar3 = (int)((int)puVar9 - *puVar11) >> 4;
        if (uVar3 < (uint)((int)(param_1[0x39] - *puVar11) >> 4)) {
          param_1[0x38] = (int)(puVar9 + 4);
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-4];
            puVar9[1] = puVar9[-3];
            puVar9[2] = puVar9[-2];
            puVar9[3] = puVar9[-1];
          }
          puVar4 = puVar9 + -4;
          puVar10 = puVar9;
          if (puVar9 < puVar4) {
            iVar5 = (int)puVar4 - (int)puVar9;
            if (0 < iVar5) {
              if (iVar5 * 0x8000000 < 0) {
                puVar4 = puVar9 + -8;
                puVar10 = puVar9 + -4;
                *puVar10 = *puVar4;
                puVar9[-3] = puVar9[-7];
                puVar9[-2] = puVar9[-6];
                puVar9[-1] = puVar9[-5];
              }
              for (iVar5 = iVar5 >> 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                uVar7 = puVar4[-3];
                uVar8 = puVar4[-2];
                uVar15 = puVar4[-1];
                puVar10[-4] = puVar4[-4];
                puVar10[-3] = uVar7;
                puVar10[-2] = uVar8;
                puVar10[-1] = uVar15;
                uVar7 = puVar4[-7];
                uVar8 = puVar4[-6];
                uVar15 = puVar4[-5];
                puVar10[-8] = puVar4[-8];
                puVar10[-7] = uVar7;
                puVar10[-6] = uVar8;
                puVar10[-5] = uVar15;
                puVar4 = puVar4 + -8;
                puVar10 = puVar10 + -8;
              }
            }
          }
          else {
            while (puVar9 != puVar4) {
              uVar7 = puVar4[-3];
              uVar8 = puVar4[-2];
              uVar15 = puVar4[-1];
              puVar10[-4] = puVar4[-4];
              puVar10[-3] = uVar7;
              puVar10[-2] = uVar8;
              puVar10[-1] = uVar15;
              puVar10 = puVar10 + -4;
              puVar4 = puVar4 + -4;
            }
          }
          puVar4 = (undefined4 *)puVar13[1];
          uVar7 = puVar13[2];
          uVar8 = puVar13[3];
          *puVar9 = *puVar13;
          puVar9[1] = puVar4;
          puVar9[2] = uVar7;
          puVar9[3] = uVar8;
        }
        else {
          uVar14 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar14 < uVar3 + 0x20) {
            uVar14 = uVar3 + 0x20;
          }
          puVar1 = (undefined4 *)fn_00100fc6(uVar14 << 4,0);
          puVar10 = puVar1;
          for (puVar4 = (undefined4 *)*puVar11; puVar4 != puVar9; puVar4 = puVar4 + 4) {
            if (puVar10 != (undefined4 *)0x0) {
              uVar7 = puVar4[1];
              uVar8 = puVar4[2];
              uVar15 = puVar4[3];
              *puVar10 = *puVar4;
              puVar10[1] = uVar7;
              puVar10[2] = uVar8;
              puVar10[3] = uVar15;
            }
            puVar10 = puVar10 + 4;
          }
          puVar4 = (undefined4 *)(((int)puVar9 - *puVar11 & 0xfffffff0) + (int)puVar1);
          if (puVar4 != (undefined4 *)0x0) {
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar15 = puVar13[3];
            *puVar4 = *puVar13;
            puVar4[1] = uVar7;
            puVar4[2] = uVar8;
            puVar4[3] = uVar15;
          }
          puVar13 = (undefined4 *)param_1[0x38];
          puVar4 = (undefined4 *)(((int)puVar9 - *puVar11 & 0xfffffff0) + (int)puVar1);
          for (; puVar9 != puVar13; puVar9 = puVar9 + 4) {
            puVar10 = puVar4 + 4;
            if (puVar10 != (undefined4 *)0x0) {
              uVar7 = puVar9[1];
              uVar8 = puVar9[2];
              uVar15 = puVar9[3];
              *puVar10 = *puVar9;
              puVar4[5] = uVar7;
              puVar4[6] = uVar8;
              puVar4[7] = uVar15;
            }
            puVar4 = puVar10;
          }
          uVar2 = *puVar11;
          uVar6 = param_1[0x38];
          uVar3 = uVar2;
          if (uVar6 < uVar2) {
            do {
              uVar3 = uVar3 + 0x10;
            } while (uVar3 != uVar6);
          }
          fn_001008c4(uVar2,(int)(param_1[0x39] - uVar2) >> 4);
          puVar4 = puVar1 + ((int)(uVar6 - uVar2) >> 4) * 4 + 4;
          param_1[0x39] = (int)(puVar1 + uVar14 * 4);
          param_1[0x38] = (int)puVar4;
          *puVar11 = (uint)puVar1;
        }
      }
      else {
        puVar4 = puVar9 + 4;
        param_1[0x38] = (int)puVar4;
        if (puVar9 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)*puVar13;
          uVar7 = puVar13[1];
          uVar8 = puVar13[2];
          uVar15 = puVar13[3];
          *puVar9 = puVar4;
          puVar9[1] = uVar7;
          puVar9[2] = uVar8;
          puVar9[3] = uVar15;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_7c);
  }
  fn_00397b18(&local_78,puVar4);
  local_78 = DAT_008965c0;
  local_74 = DAT_008965c4;
  local_70 = (**(code **)(*param_1 + 0x140))(param_1);
  uVar7 = (**(code **)(*param_1 + 0x15c))(param_1);
  fn_00300f74(uVar7,local_70);
  local_6c = extraout_r1;
  uVar7 = (**(code **)(*param_1 + 0x15c))(param_1);
  local_68 = fn_00300f74(uVar7,local_70);
  local_64 = param_1[0x38] - param_1[0x37] >> 4;
  uVar7 = fn_0022f750(param_1[0x35]);
  fn_00147974(auStack_5c,uVar7);
  local_44 = (**(code **)(*param_1 + 0x150))(param_1);
  uVar7 = (**(code **)(*param_1 + 0x158))(param_1,0);
  fn_00147974(auStack_40,uVar7);
  uVar7 = (**(code **)(*param_1 + 0x158))(param_1,1);
  fn_00147974(auStack_3c,uVar7);
  uVar7 = (**(code **)(*param_1 + 0x158))(param_1,2);
  fn_00147974(auStack_38,uVar7);
  uVar7 = (**(code **)(*param_1 + 0x158))(param_1,3);
  fn_00147974(auStack_34,uVar7);
  uVar7 = (**(code **)(*param_1 + 0x158))(param_1,4);
  fn_00147974(auStack_30,uVar7);
  fn_00397a98(param_1,&local_78);
  (**(code **)(*param_1 + 0x124))(param_1);
  if ((char)param_1[0x36] != '\0') {
    fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
    iVar12 = param_1[0x1d];
    *(undefined1 *)(iVar12 + 0x81) = 1;
    fn_0031f3f4(iVar12,0);
  }
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x39);
  if (puVar4 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar9 == &DAT_00894d28) goto LAB_0043d7e4;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0043d7e4:
  param_1[0x3a] = (int)puVar4;
  iVar12 = fn_001588d4(auStack_30);
  iVar12 = fn_001588d4(iVar12 + -4);
  iVar12 = fn_001588d4(iVar12 + -4);
  iVar12 = fn_001588d4(iVar12 + -4);
  iVar12 = fn_001588d4(iVar12 + -4);
  iVar12 = fn_001588d4(iVar12 + -0x10);
  iVar12 = fn_001588d4(iVar12 + -4);
  iVar12 = fn_001588d4(iVar12 + -4);
  fn_001588d4(iVar12 + -4);
  return 1;
}


