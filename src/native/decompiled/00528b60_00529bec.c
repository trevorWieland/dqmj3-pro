#include "00528b60_00529bec.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


undefined4 fn_00529bec(void)

{
  return 0xfffffff6;
}



undefined4 * fn_0052950c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  *param_1 = &DAT_008575c4;
  fn_00528a4c(param_1);
  fn_00170704(param_1 + 4);
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    do {
      if (*(int *)(iVar4 + 8) != 0) {
        svc_0x23();
        *(undefined4 *)(iVar4 + 8) = 0;
      }
      iVar1 = 0;
      if ((int *)param_1[1] != (int *)0x0) {
        iVar1 = *(int *)param_1[1];
      }
      bVar5 = iVar1 != iVar4;
      if (bVar5) {
        iVar4 = *(int *)(iVar4 + 4);
      }
    } while (bVar5 && iVar4 != 0);
  }
  while (param_1[9] != 0) {
    fn_001707b4(param_1 + 4);
    fn_0012d6a4(100000000,0);
    fn_00170704(param_1 + 4);
  }
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  fn_001707b4(param_1 + 4);
  fn_00528a4c(param_1);
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    param_1[3] = 0;
  }
  puVar2 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    param_1[2] = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    param_1[1] = 0;
  }
  return param_1;
}



int fn_00529008(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_10;
  
  if (DAT_008c0360 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_10 = DAT_008c0364;
    iVar1 = fn_0052aa5c(&local_10,param_1,param_2,param_3,param_4,param_5);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



int fn_00528b60(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *unaff_r10;
  bool bVar9;
  undefined4 *local_178;
  undefined4 *local_174;
  undefined4 uStack_170;
  int *local_16c;
  undefined4 *local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  int local_30;
  int local_2c;
  undefined1 local_28 [4];
  
  iVar8 = param_1 + 0x3788;
  fn_00170704(iVar8);
  bVar9 = param_2 == (undefined1 *)0x0;
  if (bVar9) {
    param_2 = local_28;
    unaff_r10 = (undefined4 *)0x0;
  }
  local_28[0] = 0;
  if (!bVar9) {
    iVar1 = fn_002febd8(param_2);
    ppuVar2 = &local_174;
    if ((undefined4 *)(iVar1 + 1U) < (undefined4 *)0x101) {
      ppuVar2 = &local_178;
    }
    local_178 = (undefined4 *)(iVar1 + 1U);
    local_174 = (undefined4 *)0x100;
    unaff_r10 = *ppuVar2;
  }
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_28;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar1 = fn_002febd8(param_3);
    puVar6 = (undefined4 *)(iVar1 + 1);
  }
  fn_00301f50(&local_160,0x130);
  uStack_170 = 0;
  if (param_4 != (undefined4 *)0x0) {
    local_160 = *param_4;
    uStack_170 = 0x130;
    local_15c = param_4[1];
    local_158 = param_4[2];
    local_154 = param_4[3];
  }
  local_178 = (undefined4 *)(param_1 + 0x1b08);
  local_30 = 0;
  fn_00301f50(local_178,0x1c80);
  local_16c = &local_30;
  local_2c = 0;
  local_168 = local_178;
  uStack_164 = 0x1c80;
  local_174 = &local_160;
  local_178 = puVar6;
  iVar1 = fn_005280a4(&local_2c,param_2,unaff_r10,param_3);
  if (iVar1 < 0) {
    iVar1 = fn_00529b0c();
    fn_001707b4(iVar8);
    return iVar1;
  }
  if (local_2c != 0) {
LAB_00528cb0:
    iVar1 = local_2c;
    fn_001707b4(iVar8);
    return iVar1;
  }
  puVar6 = (undefined4 *)0x0;
  iVar1 = 0;
  puVar7 = (undefined4 *)0x0;
  if (0 < local_30) {
    do {
      iVar3 = param_1 + iVar1 * 0x130;
      puVar4 = puVar7;
      if (*(int *)(iVar3 + 0x1b0c) == 2 || *(int *)(iVar3 + 0x1b0c) == 0x17) {
        puVar4 = (undefined4 *)fn_0052b8b4(0x20,4);
        if (puVar4 == (undefined4 *)0x0) goto joined_r0x00528e1c;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *puVar4 = *(undefined4 *)(iVar3 + 0x1b08);
        puVar4[1] = *(undefined4 *)(iVar3 + 0x1b0c);
        puVar4[2] = *(undefined4 *)(iVar3 + 0x1b10);
        puVar4[3] = *(undefined4 *)(iVar3 + 0x1b14);
        puVar4[4] = *(undefined4 *)(iVar3 + 0x1b18);
        iVar5 = fn_002febd8(iVar3 + 0x1b1c);
        if (iVar5 != 0) {
          iVar5 = fn_002febd8(iVar3 + 0x1b1c);
          local_178 = (undefined4 *)(iVar5 + 1);
          iVar5 = fn_0052b8b4(local_178,4);
          puVar4[5] = iVar5;
          if (iVar5 == 0) goto joined_r0x00528e68;
          fn_001ad654(iVar5,iVar3 + 0x1b1c,local_178);
        }
        iVar5 = fn_0052b8b4(puVar4[4],4);
        puVar4[6] = iVar5;
        if (iVar5 == 0) goto joined_r0x00528efc;
        fn_00301a9c(iVar5,iVar3 + 0x1c1c,puVar4[4]);
        puVar4[7] = 0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[7] = puVar4;
        }
        if (iVar1 == 0) {
          puVar6 = puVar4;
        }
      }
      iVar1 = iVar1 + 1;
      puVar7 = puVar4;
    } while (iVar1 < local_30);
    if (puVar6 != (undefined4 *)0x0) {
      *param_5 = puVar6;
      goto LAB_00528cb0;
    }
  }
  fn_001707b4(iVar8);
  return -0x131;
joined_r0x00528e1c:
  while (puVar6 != (undefined4 *)0x0) {
    if (puVar6[5] != 0) {
      fn_0052a79c();
      puVar6[5] = 0;
    }
    if (puVar6[6] != 0) {
      fn_0052a79c();
      puVar6[6] = 0;
    }
    puVar7 = (undefined4 *)puVar6[7];
    fn_0052a79c(puVar6);
    puVar6 = puVar7;
  }
  goto LAB_00528f88;
joined_r0x00528e68:
  while (puVar6 != (undefined4 *)0x0) {
    if (puVar6[5] != 0) {
      fn_0052a79c();
      puVar6[5] = 0;
    }
    if (puVar6[6] != 0) {
      fn_0052a79c();
      puVar6[6] = 0;
    }
    puVar7 = (undefined4 *)puVar6[7];
    fn_0052a79c(puVar6);
    puVar6 = puVar7;
  }
  while (puVar4 != (undefined4 *)0x0) {
    if (puVar4[5] != 0) {
      fn_0052a79c();
      puVar4[5] = 0;
    }
    if (puVar4[6] != 0) {
      fn_0052a79c();
      puVar4[6] = 0;
    }
    puVar6 = (undefined4 *)puVar4[7];
    fn_0052a79c(puVar4);
    puVar4 = puVar6;
  }
  goto LAB_00528f88;
joined_r0x00528efc:
  while (puVar6 != (undefined4 *)0x0) {
    if (puVar6[5] != 0) {
      fn_0052a79c();
      puVar6[5] = 0;
    }
    if (puVar6[6] != 0) {
      fn_0052a79c();
      puVar6[6] = 0;
    }
    puVar7 = (undefined4 *)puVar6[7];
    fn_0052a79c(puVar6);
    puVar6 = puVar7;
  }
  while (puVar4 != (undefined4 *)0x0) {
    if (puVar4[5] != 0) {
      fn_0052a79c();
      puVar4[5] = 0;
    }
    if (puVar4[6] != 0) {
      fn_0052a79c();
      puVar4[6] = 0;
    }
    puVar6 = (undefined4 *)puVar4[7];
    fn_0052a79c(puVar4);
    puVar4 = puVar6;
  }
LAB_00528f88:
  fn_001707b4(iVar8);
  return -0x130;
}



undefined4 fn_00529b0c(uint param_1)

{
  uint uVar1;
  
  if (-1 < (int)param_1) {
    return 0;
  }
  uVar1 = (param_1 & 0x3fc00) >> 10;
  param_1 = param_1 & 0x3ff;
  if (((uVar1 != 1) && (uVar1 == 6)) && (param_1 == 0x1a)) {
switchD_00529bc0_caseD_3f8:
    return 0xffffffd9;
  }
  if (param_1 == 0x3f1) {
    return 0xffffffe4;
  }
  if (0x3f0 < param_1) {
    switch(param_1) {
    default:
      return 0xffffffe4;
    case 0x3f3:
      return 0xffffffcf;
    case 0x3f8:
      goto switchD_00529bc0_caseD_3f8;
    case 0x3f9:
      return 0xfffffff9;
    }
  }
  if (param_1 == 0x3ec) {
    return 0xffffffe4;
  }
  if (param_1 < 0x3ed) {
    if (param_1 == 7) {
      return 0xfffffff8;
    }
    if (param_1 != 8) {
      if (param_1 == 1000) {
        return 0xffffffe4;
      }
      if (param_1 == 0x3ea) {
        return 0xfffffffe;
      }
      return 0xffffffe4;
    }
  }
  else {
    param_1 = param_1 - 0x3ed;
    if (param_1 < 2) {
      return 0xffffffe4;
    }
    if (param_1 == 2) {
      return 0xffffffd5;
    }
    if (param_1 != 3) {
      return 0xffffffe4;
    }
  }
  return 0xfffffff6;
}


