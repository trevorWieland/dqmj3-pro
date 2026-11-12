#include "005dba50_005e0bd4.h"



void fn_005e0bd4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_00170704(iVar1 + 0x1c);
  puVar11 = (uint *)(iVar1 + 8);
  puVar10 = *(undefined4 **)(iVar1 + 0xc);
  if (puVar10 == *(undefined4 **)(iVar1 + 0x10)) {
    uVar4 = (int)((int)puVar10 - *puVar11) >> 2;
    if (uVar4 < (uint)((int)((int)*(undefined4 **)(iVar1 + 0x10) - *puVar11) >> 2)) {
      *(undefined4 **)(iVar1 + 0xc) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar6 = puVar10 + -1;
      puVar7 = puVar10;
      if (puVar10 < puVar6) {
        if (0 < (int)puVar6 - (int)puVar10) {
          iVar9 = (int)puVar6 - (int)puVar10 >> 2;
          iVar5 = 0;
          do {
            iVar9 = iVar9 + -1;
            puVar10[iVar5 + -1] = puVar6[iVar5 + -1];
            iVar5 = iVar5 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        while (puVar10 != puVar6) {
          puVar6 = puVar6 + -1;
          puVar7[-1] = *puVar6;
          puVar7 = puVar7 + -1;
        }
      }
      *puVar10 = param_2;
    }
    else {
      uVar12 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (uVar12 < uVar4 + 0x20) {
        uVar12 = uVar4 + 0x20;
      }
      puVar2 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
      puVar7 = puVar2;
      for (puVar6 = (undefined4 *)*puVar11; puVar6 != puVar10; puVar6 = puVar6 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar6;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar2);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = param_2;
      }
      puVar7 = *(undefined4 **)(iVar1 + 0xc);
      puVar6 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar2);
      for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
        puVar6 = puVar6 + 1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar10;
        }
      }
      uVar3 = *puVar11;
      uVar8 = *(uint *)(iVar1 + 0xc);
      uVar4 = uVar3;
      if (uVar8 < uVar3) {
        do {
          uVar4 = uVar4 + 4;
        } while (uVar4 != uVar8);
      }
      fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0x10) - uVar3) >> 2,0);
      *(undefined4 **)(iVar1 + 0x10) = puVar2 + uVar12;
      *(undefined4 **)(iVar1 + 0xc) = puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1;
      *puVar11 = (uint)puVar2;
    }
  }
  else {
    *(undefined4 **)(iVar1 + 0xc) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = param_2;
    }
  }
  fn_001707b4(iVar1 + 0x1c);
  return;
}



void fn_005e0780(void)

{
  fn_0016e9e0("data:");
  return;
}



undefined4 fn_005df5ec(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006cfe7c(param_1 + 8);
  if ((iVar1 == 0) || (uVar2 = fn_004516fc(param_1 + 8), (uVar2 & 0x80000000) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



void fn_005deaf0(float *param_1,float *param_2)

{
  float in_s0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (in_s0 != 0.0) {
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar1 = in_s0 * 0.01;
    *param_1 = *param_1 + (*param_1 - *param_2) * fVar1;
    param_1[1] = param_1[1] + (param_1[1] - fVar2) * fVar1;
    param_1[2] = param_1[2] + (param_1[2] - fVar3) * fVar1;
  }
  return;
}



undefined4 fn_005de630(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00899218) goto LAB_005de67c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005de67c:
  *(undefined4 **)(param_1 + 0xe4) = puVar2;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xf9);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00899128) goto LAB_005de6c0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005de6c0:
  *(undefined4 **)(param_1 + 0xe8) = puVar2;
  *(int *)(param_1 + 0xec) = puVar2[7] + -3;
  fn_00397774(&local_70);
  local_70 = DAT_00899114;
  local_6c = DAT_00899118;
  local_68 = 8;
  local_5c = *(int *)(param_1 + 0xec);
  uVar4 = fn_0022f750((char *)&DAT_005de810);
  fn_00147974(auStack_54,uVar4);
  local_3c = 2;
  uVar4 = fn_0022f750((char *)&DAT_005de820);
  fn_00147974(auStack_30,uVar4);
  fn_00147974(auStack_28,*(int *)(param_1 + 0xe4) + 0x558);
  uVar6 = CONCAT44(local_64,local_60);
  cVar1 = *(char *)(*(int *)(param_1 + 0xe8) + 0x19);
  if (cVar1 == '\0') {
    uVar6 = fn_00300f74(local_5c + -1,local_68);
  }
  else if (cVar1 == '\x01') {
    uVar6 = 0;
  }
  local_64 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_60 = (undefined4)uVar6;
  *(undefined4 *)(param_1 + 0xf0) = local_68;
  uVar4 = fn_00397618(param_1,&local_70);
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x3c) =
       *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0xcc);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x14))();
  fn_00100414(auStack_34,&LAB_0059e0e0,8,4);
  iVar5 = fn_001588d4(auStack_48);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -4);
  fn_001588d4(iVar5 + -4);
  return uVar4;
}



void fn_005dda18(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_005dda74);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 1) {
    puVar2 = *(undefined **)(param_2 + 0x188);
    puVar3 = auStack_10;
  }
  else {
    puVar2 = &DAT_005dda70;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



undefined4 fn_005dba50(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_170;
  undefined1 auStack_16c [240];
  wchar16 *pwStack_7c;
  char *pcStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [4];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [28];
  
  uVar1 = fn_002f8914();
  uVar2 = fn_002f6fa8();
  uVar1 = fn_006cd6d0(uVar2,uVar1);
  iVar5 = 0;
  do {
    local_170 = &DAT_008f9cf4;
    fn_00147974(&local_170,&DAT_008c6666);
    fn_00301f50(auStack_16c,0xf0);
    fn_0015b0f8(iVar5 * 10 + 1);
    fn_0015b0f8(iVar5 * 10 + 10);
    uVar2 = fn_0022f750((char *)&DAT_005dbc24);
    fn_00147974(&local_170,uVar2);
    fn_005d4638(iVar5 * 10,&local_170,uVar1);
    fn_005d4710(param_1,&local_170);
    if (local_170 != &DAT_008f9cf4) {
      piVar3 = local_170 + -3;
      iVar4 = *piVar3;
      if (iVar4 == -1) {
LAB_005dbb24:
        fn_001008c4(local_170 + -3,local_170[-2] + 8,0);
      }
      else if (piVar3 != &DAT_008f9ce8) {
        *piVar3 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_005dbb24;
      }
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      fn_00397774(&pwStack_7c);
      local_68 = 3;
      local_74 = 3;
      pwStack_7c = L"rom:/data/Layout/common/common_0200.arc";
      pcStack_78 = (char *)&DAT_005dbc38;
      local_70 = fn_002f70cc(param_1);
      uVar1 = fn_0022f750((char *)&DAT_005dbc4c);
      fn_00147974(auStack_60,uVar1);
      local_50 = 0;
      local_4f = 0;
      local_48 = 1;
      uVar1 = fn_0022f750((char *)&DAT_005dbc54);
      fn_00147974(auStack_3c,uVar1);
      uVar1 = fn_005d45b8(param_1,0,&pwStack_7c);
      fn_00100414(auStack_40,&LAB_0059e0e0,8,4);
      iVar5 = fn_001588d4(auStack_54);
      iVar5 = fn_001588d4(iVar5 + -4);
      iVar5 = fn_001588d4(iVar5 + -4);
      fn_001588d4(iVar5 + -4);
      return uVar1;
    }
  } while( true );
}


