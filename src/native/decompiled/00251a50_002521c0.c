#include "00251a50_002521c0.h"



void fn_002521c0(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (**(char **)(DAT_00897840 + 0x2c) == '\0') {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    fn_00102908(&local_28,0x20,DAT_00892d80,0x3c);
    fn_0022f584(&local_28,0);
    return;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  fn_00102908(&local_28,0x20,DAT_00892d80,0x3d);
  fn_0022f584(&local_28,0);
  return;
}



void fn_00251f18(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_ae8 [96];
  char local_a88;
  undefined1 auStack_a84 [2164];
  undefined1 auStack_210 [240];
  int local_120 [62];
  
  fn_0017821c(auStack_ae8,param_2 + 0x7a8,0x8d8);
  fn_00101a50(param_1 + 0x2e,0xc,auStack_ae8);
  if (param_3 == 0) {
    iVar4 = 0;
    do {
      fn_002fa418(auStack_210,param_2,iVar4);
      fn_0017821c(param_1 + iVar4 * 0xf0 + 0x424,auStack_210,0xf0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    *(undefined2 *)(param_1 + 0x22) = 1;
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0xcb8);
    *(short *)(param_1 + 0x24) = (short)*(char *)(param_2 + 0xcba);
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0xcb9);
  }
  else {
    *(char *)(param_1 + 0x84a) = (char)param_3;
    fn_002fa3b4(auStack_210,param_2,0);
    fn_0017821c(local_120,auStack_210,0xf0);
    if (local_120[0] == 0) {
      iVar4 = 0;
      cVar1 = *(char *)(DAT_00897840 + 0x34);
      do {
        if (cVar1 == '\x01') {
          uVar2 = fn_00688548(*(undefined4 *)(param_2 + 0x14),iVar4);
          *(undefined2 *)(param_1 + iVar4 * 0x24 + 0x84c) = uVar2;
        }
        else if (cVar1 == '\x02') {
          uVar2 = fn_006885b0(*(undefined4 *)(param_2 + 0x14),iVar4);
          *(undefined2 *)(param_1 + iVar4 * 0x24 + 0x84c) = uVar2;
        }
        else {
          uVar2 = fn_0068857c();
          *(undefined2 *)(param_1 + iVar4 * 0x24 + 0x84c) = uVar2;
        }
        iVar5 = param_1 + iVar4 * 0x24;
        if ((*(short *)(iVar5 + 0x84c) != 0) && (iVar3 = fn_0013add0(), iVar3 != 0)) {
          uVar2 = fn_002ea524((int)*(short *)(iVar5 + 0x84c));
          *(undefined2 *)(iVar5 + 0x84e) = uVar2;
          *(undefined1 *)(iVar5 + 0x852) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      uVar2 = fn_006884e8(*(undefined4 *)(param_2 + 0x14));
      *(undefined2 *)(param_1 + 0x22) = uVar2;
    }
    else {
      iVar4 = 0;
      do {
        fn_002fa418(auStack_210,param_2,iVar4);
        fn_0017821c(param_1 + iVar4 * 0xf0 + 0x424,auStack_210,0xf0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      *(undefined2 *)(param_1 + 0x22) = 1;
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0xcb8);
      *(undefined1 *)(param_1 + 0x84b) = 1;
    }
  }
  iVar4 = 0;
  do {
    fn_002fa3b4(auStack_210,param_2,iVar4);
    fn_0017821c(param_1 + iVar4 * 0xf0 + 100,auStack_210,0xf0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  *(bool *)(param_1 + 0x7e4) = local_a88 != '\0';
  fn_0017821c(param_1 + 0x7e8,auStack_a84,0x60);
  fn_0029432c(auStack_ae8,param_1 + 0x46);
  fn_00370588(DAT_00897828,auStack_ae8);
  return;
}



int fn_00251ec8(int param_1)

{
  if (*(int *)(param_1 + 0x78c0) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x78c0));
    *(undefined4 *)(param_1 + 0x78c0) = 0;
  }
  return param_1;
}



int fn_00251e64(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x10] = 0;
  iVar1 = fn_00662a34(param_1 + 0x8f0);
  *(undefined4 *)(iVar1 + 0x1510) = param_2;
  *(undefined4 *)(iVar1 + 0x1514) = param_3;
  iVar1 = fn_00662a34(iVar1 + 0x1ee8);
  *(undefined4 *)(iVar1 + 0x50e8) = 0;
  fn_00301f50(iVar1 + -0x8d8,0x1de8);
  return iVar1 + -0x27d8;
}



void fn_00251df0(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_18;
  
  cVar1 = *(char *)(DAT_00898840 + 0x4d);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1e00) + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      local_18 = param_4;
      local_18 = fn_00615e64();
    }
    else {
      local_18 = param_2;
    }
    fn_003dccb4(uVar2,&local_18,2);
  }
  *param_1 = 1;
  return;
}



void fn_00251a50(undefined1 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_11d8 [16];
  undefined1 auStack_11c8 [212];
  uint local_10f4;
  undefined1 auStack_8f0 [336];
  undefined4 auStack_7a0 [3];
  undefined1 auStack_794 [948];
  char local_3e0;
  undefined4 auStack_3dc [3];
  undefined1 auStack_3d0 [336];
  int local_280 [57];
  uint local_19c;
  int local_198 [7];
  undefined2 local_17c;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined1 auStack_a0 [124];
  
  cVar1 = *(char *)(DAT_00898840 + 0x4d);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1e00) + 8);
  local_ac = uVar4;
  puVar10 = (undefined4 *)(param_1 + 0x78c0);
  switch(*param_1) {
  case 1:
    uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x1e00))();
    uVar3 = (**(code **)(**(int **)(param_1 + 0x1e00) + 4))();
    if ((cVar1 == '\0') && (iVar7 = fn_006b6530(local_ac,2,uVar3), iVar7 != 0)) {
      puVar10 = (undefined4 *)fn_006cb164(local_ac,uVar3);
      local_b0 = *puVar10;
      fn_003dccb4(local_ac,&local_b0,2);
    }
    iVar7 = fn_0077f7d0(*(undefined4 *)(param_1 + 0x1e00),2);
    if (iVar7 != 0) {
      piVar5 = (int *)fn_006cb164(local_ac,uVar4);
      piVar6 = (int *)fn_006cb164(local_ac,uVar3);
      if ((*piVar5 == *piVar6) && (*piVar5 != 0)) {
        fn_00615ecc();
        *(int *)(param_1 + 0xc) = *piVar5;
        *param_1 = 2;
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    break;
  case 2:
    if (param_1[0x10] != '\0') {
      bVar2 = false;
LAB_00251920:
      fn_0017821c(auStack_11c8,param_1 + 0x18,0x8d8);
      fn_0017821c(auStack_8f0,auStack_11c8,0x8d8);
      if (bVar2) {
        local_10f4 = 0;
        iVar7 = *(int *)(param_1 + 4);
        fn_0017821c(auStack_11d8,auStack_3d0 + iVar7 * 0xf0,0xe4);
        fn_003704a4(*(undefined4 *)(param_1 + 0x1e04),auStack_3dc[iVar7 * 0x3c],
                     auStack_3dc[iVar7 * 0x3c + 1],auStack_3dc[iVar7 * 0x3c + 2]);
        iVar7 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 4) = iVar7 + 1;
        if (iVar7 + 1 == 4) {
          param_1[0x10] = 0;
          *param_1 = 7;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 4);
        local_10f4 = (uint)(iVar7 == local_3e0);
        fn_0017821c(auStack_11d8,auStack_794 + iVar7 * 0xf0,0xe4);
        fn_00370438(*(undefined4 *)(param_1 + 0x1e04),auStack_7a0[iVar7 * 0x3c],
                     auStack_7a0[iVar7 * 0x3c + 1],auStack_7a0[iVar7 * 0x3c + 2]);
        iVar7 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 4) = iVar7 + 1;
        if (iVar7 + 1 == 4) {
          *param_1 = 3;
          *(undefined4 *)(param_1 + 4) = 0;
          return;
        }
      }
      return;
    }
    bVar2 = false;
    goto LAB_0025169c;
  case 3:
    if (param_1[0x10] != '\0') {
      bVar2 = true;
      goto LAB_00251920;
    }
    bVar2 = true;
LAB_0025169c:
    if (bVar2) {
      local_280[0] = 3;
      local_280[1] = 0x84;
      local_280[2] = 0x105;
      local_280[3] = 0x186;
      iVar11 = local_280[*(int *)(param_1 + 4)] + *(int *)(param_1 + 8);
      iVar7 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else {
      local_280[0] = 0x207;
      local_280[1] = 0x288;
      local_280[2] = 0x309;
      local_280[3] = 0x38a;
      iVar11 = local_280[*(int *)(param_1 + 4)] + *(int *)(param_1 + 8);
      iVar7 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    if (iVar7 == 0) {
      local_198[0] = 0;
      local_17c = 0;
    }
    else {
      fn_0017821c(local_198,iVar7,0xf0);
    }
    local_a8 = *(undefined4 *)(param_1 + 4);
    iVar7 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
    if ((iVar7 == 0) || (local_198[0] != iVar7)) {
      local_a4 = 0;
    }
    else {
      local_a4 = 1;
    }
    fn_0044409c(auStack_a0);
    fn_004440a4(auStack_a0,local_198,param_1 + 8);
    fn_003dcea4(uVar4,auStack_a0,iVar11);
    iVar7 = fn_0077f7d0(*(undefined4 *)(param_1 + 0x1e00),iVar11);
    if (iVar7 != 0) {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x1e00) + 4))();
      uVar4 = fn_006cb20c(uVar4,uVar3);
      fn_006ce7f8(uVar4,param_1 + 0x1e08,param_1 + 8);
      if (1 < *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        if (bVar2) {
          local_19c = (uint)(param_1[0x1efc] != '\0');
          fn_0017821c(local_280,param_1 + 0x1e14,0xe4);
          fn_003704a4(*(undefined4 *)(param_1 + 0x1e04),*(undefined4 *)(param_1 + 0x1e08),
                       *(undefined4 *)(param_1 + 0x1e0c),*(undefined4 *)(param_1 + 0x1e10));
          if (*(int *)(param_1 + 4) == 4) {
            *param_1 = 7;
          }
        }
        else {
          local_19c = (uint)(param_1[0x1efc] != '\0');
          fn_0017821c(local_280,param_1 + 0x1e14,0xe4);
          fn_00370438(*(undefined4 *)(param_1 + 0x1e04),*(undefined4 *)(param_1 + 0x1e08),
                       *(undefined4 *)(param_1 + 0x1e0c),*(undefined4 *)(param_1 + 0x1e10));
          if (*(int *)(param_1 + 4) == 4) {
            *param_1 = 3;
            *(undefined4 *)(param_1 + 4) = 0;
          }
        }
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    return;
  case 5:
    fn_00301f50(param_1 + 0x1f00,0x1de8);
    fn_00290734(param_1 + 0x1f00);
    fn_0066481c(param_1 + 0x27d8);
    uVar4 = fn_001287d4(0x416c4,&DAT_00812c8c);
    *(undefined4 *)(param_1 + 0x78c0) = uVar4;
    fn_00158f6c(uVar4,0x416c4);
    local_b0 = *(undefined4 *)(param_1 + 0x78c0);
    iVar7 = fn_0044c558(param_1 + 0x3cec,0x1de8,param_1 + 0x1f00);
    *(int *)(param_1 + 0x3ce8) = iVar7;
    if (iVar7 < 0) {
      fn_0017821c(param_1 + 0x3cec,param_1 + 0x1f00,0x1de8);
    }
    fn_002feca8(*puVar10);
    *puVar10 = 0;
    *param_1 = 6;
  case 6:
    iVar7 = *(int *)(param_1 + 8);
    uVar8 = fn_00444000(&local_a8,param_1 + 0x3ce8,param_1 + 8);
    fn_003dce7c(local_ac,&local_a8,iVar7 + 0x40c);
    iVar7 = fn_0077f7d0(*(undefined4 *)(param_1 + 0x1e00),iVar7 + 0x40c);
    if (iVar7 != 0) {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x1e00) + 4))();
      uVar4 = fn_006cb1f8(local_ac,uVar4);
      uVar9 = fn_006ce720(uVar4,param_1 + 0x5ad4,param_1 + 8);
      if ((uVar8 & uVar9) != 0) {
        if (*(int *)(param_1 + 0x5ad4) < 1) {
          fn_0017821c(param_1 + 0x18,param_1 + 0x5ad8,0x1de8);
        }
        else {
          uVar4 = fn_001287d4(0x1bcc,&DAT_00812c8c);
          *(undefined4 *)(param_1 + 0x78c0) = uVar4;
          fn_00158f6c(uVar4,0x1bcc);
          local_b0 = *(undefined4 *)(param_1 + 0x78c0);
          fn_0044c578(param_1 + 0x18,0x1de8,param_1 + 0x5ad8,*(undefined4 *)(param_1 + 0x5ad4));
          fn_002feca8(*puVar10);
          *puVar10 = 0;
        }
        *param_1 = 7;
        return;
      }
    }
  }
  return;
}


