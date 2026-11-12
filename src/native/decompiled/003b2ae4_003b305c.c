#include "003b2ae4_003b305c.h"



int fn_003b305c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 6 == iVar2 >> 0x1f) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c) + param_2 * 0x7c;
  }
  return iVar2;
}



void fn_003b2fac(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0x54444146;
  uStack_1c = 0;
  iVar2 = fn_006edd88(param_2,3);
  iVar3 = fn_006ede84(param_2,3);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar3;
  }
  if (((iVar2 != 0 && iVar3 != 0) && -1 < iVar4) &&
     (iVar4 = fn_00147e6c(iVar2,&local_20,4), iVar4 == 0)) {
    iVar4 = 0;
    uVar1 = (iVar3 - 4U) / 0x28;
    if (uVar1 != 0) {
      do {
        fn_003b2ae4(param_1,iVar2 + 4 + iVar4 * 0x28);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar1);
    }
  }
  return;
}



int fn_003b2f70(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar2 = (int)((longlong)(int)uVar1 * -0x4de9bd37 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (iVar2 >> 6 == iVar2 >> 0x1f) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10) + param_2 * 0x5c;
  }
  return iVar2;
}



int fn_003b2e54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
  if (0 < iVar1) {
    param_1 = *(int *)(param_1 + 4);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(param_1 + iVar2 * 0x28) == param_2) {
        return param_1 + iVar2 * 0x28;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



void fn_003b2ae4(int param_1,uint3 *param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_40 = (uint)*param_2;
  uVar5 = *(uint *)(param_2 + 1);
  cVar1 = *(char *)((int)param_2 + 2);
  if (cVar1 == '\0') {
    switch(*(undefined4 *)(param_2 + 1)) {
    case 1:
    case 4:
    case 5:
switchD_003b2bdc_caseD_5:
      local_38 = (uint)(byte)param_2[2];
      break;
    case 2:
    case 3:
      local_38 = (uint)(ushort)param_2[2];
    }
  }
  else {
    if (cVar1 == '\x01') {
      fn_003b424c(param_1,&local_38,param_2);
      goto switchD_003b2bdc_caseD_0;
    }
    if (cVar1 == '\x02') {
      fn_003b4f50(param_1,&local_38,param_2);
      goto switchD_003b2bdc_caseD_0;
    }
    if (cVar1 != '\x03') goto switchD_003b2bdc_caseD_0;
    switch(*(undefined4 *)(param_2 + 1)) {
    case 5:
      goto switchD_003b2bdc_caseD_5;
    case 10:
      local_38 = (uint)(ushort)param_2[2];
    }
  }
switchD_003b2bdc_caseD_0:
  puVar8 = (uint *)(param_1 + 0x28);
  puVar6 = *(uint **)(param_1 + 0x2c);
  if (puVar6 != *(uint **)(param_1 + 0x30)) {
    *(uint **)(param_1 + 0x2c) = puVar6 + 10;
    if (puVar6 != (uint *)0x0) {
      *puVar6 = local_40;
      puVar6[1] = uVar5;
      puVar6[2] = local_38;
      puVar6[3] = local_34;
      puVar6[4] = local_30;
      puVar6[5] = local_2c;
      puVar6[6] = local_28;
      puVar6[7] = local_24;
      puVar6[8] = local_20;
      puVar6[9] = local_1c;
    }
    return;
  }
  uVar10 = (int)((int)puVar6 - *puVar8) / 0x28;
  if (uVar10 < (uint)((int)((int)*(uint **)(param_1 + 0x30) - *puVar8) / 0x28)) {
    *(uint **)(param_1 + 0x2c) = puVar6 + 10;
    if (puVar6 != (uint *)0x0) {
      *puVar6 = puVar6[-10];
      puVar6[1] = puVar6[-9];
      puVar6[2] = puVar6[-8];
      puVar6[3] = puVar6[-7];
      puVar6[4] = puVar6[-6];
      puVar6[5] = puVar6[-5];
      puVar6[6] = puVar6[-4];
      puVar6[7] = puVar6[-3];
      puVar6[8] = puVar6[-2];
      puVar6[9] = puVar6[-1];
    }
    fn_007a1994(puVar6,puVar6 + -10);
    *puVar6 = local_40;
    puVar6[1] = uVar5;
    puVar6[2] = local_38;
    puVar6[3] = local_34;
    puVar6[4] = local_30;
    puVar6[5] = local_2c;
    puVar6[6] = local_28;
    puVar6[7] = local_24;
    puVar6[8] = local_20;
    puVar6[9] = local_1c;
    return;
  }
  uVar9 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
  if (uVar9 < uVar10 + 0x20) {
    uVar9 = uVar10 + 0x20;
  }
  puVar2 = (uint *)fn_00100fc6(uVar9 * 0x28,0);
  puVar7 = puVar2;
  for (puVar4 = (uint *)*puVar8; puVar4 != puVar6; puVar4 = puVar4 + 10) {
    if (puVar7 != (uint *)0x0) {
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      uVar13 = puVar4[4];
      uVar14 = puVar4[5];
      uVar15 = puVar4[6];
      uVar16 = puVar4[7];
      *puVar7 = *puVar4;
      puVar7[1] = uVar10;
      puVar7[2] = uVar11;
      puVar7[3] = uVar12;
      puVar7[4] = uVar13;
      puVar7[5] = uVar14;
      puVar7[6] = uVar15;
      puVar7[7] = uVar16;
      uVar10 = puVar4[9];
      puVar7[8] = puVar4[8];
      puVar7[9] = uVar10;
    }
    puVar7 = puVar7 + 10;
  }
  puVar4 = puVar2 + ((int)((int)puVar6 - *puVar8) / 0x28) * 10;
  if (puVar4 != (uint *)0x0) {
    *puVar4 = local_40;
    puVar4[1] = uVar5;
    puVar4[2] = local_38;
    puVar4[3] = local_34;
    puVar4[4] = local_30;
    puVar4[5] = local_2c;
    puVar4[6] = local_28;
    puVar4[7] = local_24;
    puVar4[8] = local_20;
    puVar4[9] = local_1c;
  }
  puVar7 = *(uint **)(param_1 + 0x2c);
  puVar4 = puVar2 + ((int)((int)puVar6 - *puVar8) / 0x28) * 10;
  for (; puVar6 != puVar7; puVar6 = puVar6 + 10) {
    puVar3 = puVar4 + 10;
    if (puVar3 != (uint *)0x0) {
      uVar5 = puVar6[1];
      uVar10 = puVar6[2];
      uVar11 = puVar6[3];
      uVar12 = puVar6[4];
      uVar13 = puVar6[5];
      uVar14 = puVar6[6];
      uVar15 = puVar6[7];
      *puVar3 = *puVar6;
      puVar4[0xb] = uVar5;
      puVar4[0xc] = uVar10;
      puVar4[0xd] = uVar11;
      puVar4[0xe] = uVar12;
      puVar4[0xf] = uVar13;
      puVar4[0x10] = uVar14;
      puVar4[0x11] = uVar15;
      uVar5 = puVar6[9];
      puVar4[0x12] = puVar6[8];
      puVar4[0x13] = uVar5;
    }
    puVar4 = puVar3;
  }
  uVar10 = *puVar8;
  uVar11 = *(uint *)(param_1 + 0x2c);
  uVar5 = uVar10;
  if (uVar11 < uVar10) {
    do {
      uVar5 = uVar5 + 0x28;
    } while (uVar5 != uVar11);
  }
  fn_001008c4(uVar10,(int)(*(int *)(param_1 + 0x30) - uVar10) / 0x28,0);
  *puVar8 = (uint)puVar2;
  *(uint **)(param_1 + 0x2c) = puVar2 + ((int)(uVar11 - uVar10) / 0x28) * 10 + 10;
  *(uint **)(param_1 + 0x30) = puVar2 + uVar9 * 10;
  return;
}


