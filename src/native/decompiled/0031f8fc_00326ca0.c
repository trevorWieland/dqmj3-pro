#include "0031f8fc_00326ca0.h"



void fn_00326ca0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_00689824(param_1,0);
    fn_00689878(param_1,0xab);
    return;
  }
  iVar1 = fn_001f7e04(param_1,0xab);
  if (iVar1 == 0) {
    fn_00689824(param_1,1);
    fn_003272d4(param_1);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_00325cc0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  
  local_10 = param_4;
  iVar4 = fn_006ba284();
  puVar5 = (undefined4 *)(param_2 + iVar4 * 8);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1);
  if (puVar1 <= puVar5) {
    local_10 = puVar1;
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,puVar5);
  }
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0xe0) + (int)puVar5 * 2);
  fn_0023097c(&local_10,iVar4,0);
  uVar2 = fn_0022ee7c(iVar4);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),local_10,uVar2);
  fn_00689bd0(param_1,0x49,0);
  if (local_10 != &DAT_008f9cf4) {
    piVar3 = local_10 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_00324f0c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)0x0;
  if (param_1[0x38] == 0) {
    param_1[0x42] = -1;
    puVar9 = (undefined4 *)fn_001f7510(param_1,0x4c);
    if (puVar9 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar9)(puVar9);
      do {
        if (puVar4 == &DAT_008946d4) goto LAB_00324ff0;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar9 = (undefined4 *)0x0;
LAB_00324ff0:
    fn_00321598(puVar9);
    uVar3 = fn_0030e2cc(param_1[0x3b],param_1[0x43]);
    fn_003212bc(puVar9,uVar3);
    *(undefined1 *)(puVar9 + 2) = 6;
    *(undefined1 *)(puVar9 + 7) = 0;
    *(undefined1 *)(puVar9 + 0x12) = 1;
    *(undefined1 *)(puVar9 + 9) = 1;
    uVar3 = fn_0022f750((char *)&DAT_0032527c);
    fn_003212cc(puVar9,uVar3);
    fn_001f7d54(param_1,0xf,0,1);
    param_1[0x4b] = 0;
    return;
  }
  iVar2 = param_1[0x4b];
  if (iVar2 == 0) {
    iVar2 = fn_006ad868(param_1,0,1);
    if (iVar2 != 0) {
      fn_00689bd0(param_1,0x4c,0);
      param_1[0x4b] = 1;
      return;
    }
  }
  else if (iVar2 == 1) {
    puVar4 = (undefined4 *)fn_001f7510(param_1,0x4c);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar5 == &DAT_008946d4) {
          puVar9 = puVar4;
          break;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    cVar1 = *(char *)(puVar9 + 7);
    if ((cVar1 != '\0') && (iVar2 = fn_001f7424(param_1,0x4c), iVar2 == 0)) {
      fn_001f7810(param_1,0xf,0,1);
      param_1[0x4b] = 2;
      if (cVar1 == '\x01') {
        psVar7 = (short *)puVar9[5];
        if (*psVar7 == 0) {
          iVar2 = param_1[0x43];
          fn_0031b78c(param_1,iVar2,0,&DAT_00324ef8);
          fn_0030e38c(param_1[0x3b],iVar2);
        }
        else {
          fn_0030e304(param_1[0x3b],param_1[0x43],psVar7);
          iVar2 = fn_0030e41c(param_1[0x3b]);
          if (iVar2 == 0) {
            fn_0031b78c(param_1,param_1[0x43],0,psVar7);
            uVar8 = 1;
            do {
              iVar2 = param_1[0x43] + uVar8;
              if (iVar2 == 5) break;
              iVar6 = fn_0030e2e0(param_1[0x3b],iVar2);
              if (iVar6 != 0) {
                uVar8 = uVar8 + 1;
              }
            } while (iVar6 != 0 && uVar8 < 5);
            fn_0031b364(param_1,param_1[0x43],0);
            fn_002c3798(param_1,iVar2);
            (**(code **)(*param_1 + 0x120))(param_1,iVar2);
          }
          else {
            iVar2 = param_1[0x43];
            fn_0031b78c(param_1,iVar2,0,&DAT_00324ef8);
            fn_0030e38c(param_1[0x3b],iVar2);
            param_1[0x4b] = 3;
          }
        }
      }
      fn_00321598(puVar9);
      fn_00689bd0(param_1,0,0);
      return;
    }
  }
  else {
    if (iVar2 == 2) {
      iVar2 = fn_006ad868(param_1,0,1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = 6;
    }
    else {
      if (iVar2 != 3) {
        return;
      }
      iVar2 = fn_006ad868(param_1,0,1);
      if (iVar2 == 0) {
        return;
      }
      uVar3 = fn_0022f584((char *)&DAT_0032525c,0);
      fn_00328be0(param_1,uVar3,0,1,1,0);
      param_1[0x39] = 7;
      iVar2 = 9;
    }
    param_1[0x36] = iVar2;
  }
  return;
}



void fn_00321118(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  fn_00147974(param_1 + 8);
  fn_00147974(param_1 + 0xc,param_3);
  iVar1 = fn_0022eb34(param_3);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



undefined4 fn_003204f4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [4];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_6c;
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [36];
  
  fn_00397774(&local_a0);
  local_a0 = DAT_008909d8;
  local_9c = DAT_008909dc;
  uVar1 = fn_0022f584(DAT_008909e0,0);
  fn_00147974(auStack_84,uVar1);
  local_74 = 0;
  local_72 = 0;
  local_98 = 8;
  local_6c = 1;
  uVar1 = fn_0022f750((char *)&DAT_003206f8);
  fn_00147974(auStack_78,uVar1);
  local_70 = 1;
  local_6f = 5;
  local_73 = 1;
  fn_00689efc(param_1,0xa8,0);
  if (*(char *)(param_1[0x39] + 0x10) != -1) {
    local_94 = (int)*(char *)(param_1[0x39] + 0x10);
  }
  uVar1 = fn_00397618(param_1,&local_a0);
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_00178f9c(*(undefined4 *)(iVar2 + 8),param_1[0x1b]);
  piVar4 = (int *)fn_00689220(uVar3,DAT_008909f4);
  uVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_008909f8,1);
  uVar5 = fn_0022f584(DAT_008909e4,0);
  fn_00190d50(uVar3,uVar5);
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_00178f9c(*(undefined4 *)(iVar2 + 8),param_1[0x1b]);
  iVar2 = 0;
  do {
    fn_001028d4(auStack_40,DAT_008909fc,iVar2);
    iVar6 = fn_006888c0(uVar3,auStack_40);
    fn_001028d4(auStack_40,DAT_00890a00,iVar2);
    uVar5 = fn_001827b0(uVar3,auStack_40);
    if (iVar2 < 5) {
      *(int *)(param_1[0x3b] + iVar2 * 4) = iVar6;
      *(undefined4 *)(param_1[0x3e] + iVar2 * 4) = uVar5;
    }
    else {
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  fn_003f7d6c(param_1[0x39]);
  fn_00100414(auStack_64,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_78);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return uVar1;
}



void fn_0031f8fc(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x7d) = param_2;
  fn_0031f684(param_1,0);
  *(undefined1 *)(param_1 + 0x7f) = param_3;
  fn_0031ef00(param_1,0,0);
  *(undefined1 *)(param_1 + 0x81) = param_4;
  fn_0031f3f4(param_1,0);
  *(undefined1 *)(param_1 + 0x83) = param_5;
  if (*(char *)(param_1 + 0x82) == *(char *)(param_1 + 0x83)) {
    return;
  }
  iVar4 = (int)*(char *)(param_1 + 0x7d);
  if ((int)*(char *)(param_1 + 0x7c) == (int)*(char *)(param_1 + 0x7d)) {
    iVar4 = (int)*(char *)(param_1 + 0x7c);
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  cVar2 = *(char *)(param_1 + 0x83);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  switch(iVar4) {
  case 0:
    if (cVar2 == -1) {
      return;
    }
    if (cVar2 == '\0') {
      uVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
      if (uVar1 < 3) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,2,uVar1,unaff_r4,unaff_r5,in_lr);
      }
      iVar4 = *(int *)(param_1 + 0x34);
      goto LAB_0031faf0;
    }
LAB_0031fa14:
    uVar3 = 0;
    break;
  case 1:
    if (cVar2 == -1) {
      return;
    }
    if (cVar2 == '\0') {
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 0xb) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,10,uVar1,unaff_r4,unaff_r5,in_lr);
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x28);
    }
    else {
      if (cVar2 != '\x01') goto LAB_0031fa14;
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 0xc) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,0xb,uVar1,unaff_r4,unaff_r5,in_lr);
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c);
    }
    break;
  case 2:
    if (cVar2 == -1) {
      return;
    }
    if (cVar2 != '\x03') goto LAB_0031fa14;
    uVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
    if (uVar1 < 3) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,2,uVar1,unaff_r4,unaff_r5,in_lr);
    }
    iVar4 = *(int *)(param_1 + 0x4c);
LAB_0031faf0:
    uVar3 = *(undefined4 *)(iVar4 + 8);
    break;
  case 3:
    goto switchD_0031f9b0_caseD_3;
  default:
    goto switchD_0031f9b0_caseD_ffffffff;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
switchD_0031f9b0_caseD_ffffffff:
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
  }
switchD_0031f9b0_caseD_3:
  return;
}


