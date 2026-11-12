#include "00373bf8_0037bd5c.h"



void fn_0037bd5c(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,1);
  *puVar1 = &PTR_LAB_00829000;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}



undefined4 * fn_00378c0c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f750(param_2);
  *param_1 = uVar1;
  return param_1;
}



uint fn_00377324(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x2c);
  iVar1 = fn_0031390c(uVar5,0xb,param_3,param_4,param_4);
  if (iVar1 != 0) {
    uVar2 = fn_00313844(uVar5,0x12,0,1,2);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    uVar2 = fn_00178f9c(uVar5,uVar2);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    do {
      piVar3 = (int *)fn_0017dd54(*(undefined4 *)(param_1 + 0x6c),(&DAT_007bb628)[uVar4],0);
      *(int **)(param_1 + uVar4 * 4 + 0x70) = piVar3;
      (**(code **)(*piVar3 + 100))();
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
    uVar4 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x10);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    do {
      fn_004218ec(param_1 + uVar4 * 0x80 + 0x84,uVar5);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    uVar4 = 1;
  }
  return uVar4;
}



void fn_00376dc0(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  float fVar5;
  
  if (param_2 == 0) {
    puVar4 = (undefined1 *)(param_1 + 0x7c);
  }
  else {
    puVar4 = (undefined1 *)(param_1 + 100);
  }
  switch(*puVar4) {
  case 0:
    fn_00376c70(param_1);
    *(undefined2 *)(puVar4 + 2) = 0;
    if (*(float *)(puVar4 + 4) != *(float *)(puVar4 + 8)) {
      uVar2 = 1;
LAB_00376e34:
      *puVar4 = uVar2;
      return;
    }
    *puVar4 = 6;
    break;
  case 1:
    sVar1 = *(short *)(puVar4 + 2);
    *(short *)(puVar4 + 2) = sVar1 + 1;
    if (3 < sVar1) {
      *(undefined2 *)(puVar4 + 2) = 0;
      if (NAN(*(float *)(puVar4 + 4)) || NAN(*(float *)(puVar4 + 8))) {
        fn_00377140(param_1,*(undefined4 *)(puVar4 + 0x10));
        *puVar4 = 3;
        return;
      }
      uVar2 = 2;
      goto LAB_00376e34;
    }
    break;
  case 2:
    fVar5 = *(float *)(puVar4 + 8);
    *(float *)(puVar4 + 8) = fVar5 + 0.06;
    if (*(float *)(puVar4 + 4) < fVar5 + 0.06) {
      *(float *)(puVar4 + 8) = *(float *)(puVar4 + 4);
      *puVar4 = 5;
    }
    fn_00377140(param_1,*(undefined4 *)(puVar4 + 0x14));
    fn_00377140(param_1,*(undefined4 *)(puVar4 + 0x10));
    goto LAB_00376f18;
  case 3:
    iVar3 = *(byte *)(*(int *)(puVar4 + 0x14) + 0x45) - 0x12;
    if (iVar3 < 0) {
      iVar3 = 0;
      *puVar4 = 4;
    }
    *(char *)(*(int *)(puVar4 + 0x14) + 0x45) = (char)iVar3;
    return;
  case 4:
    fVar5 = *(float *)(puVar4 + 8);
    *(float *)(puVar4 + 8) = fVar5 - 0.06;
    if (fVar5 - 0.06 < *(float *)(puVar4 + 4)) {
      *(float *)(puVar4 + 8) = *(float *)(puVar4 + 4);
      *puVar4 = 5;
    }
LAB_00376f18:
    fn_00377140(param_1,*(undefined4 *)(puVar4 + 0xc));
    return;
  case 5:
    fn_00377140(param_1,*(undefined4 *)(puVar4 + 0x14));
    *(undefined1 *)(*(int *)(puVar4 + 0x14) + 0x45) = 0xff;
    *puVar4 = 6;
    return;
  }
  return;
}



void fn_00376840(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_30;
  int local_2c;
  
  param_1[0x19] = param_2;
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar1 = fn_001924e0(*(undefined4 *)(iVar1 + 8),1);
  param_1[0x1d] = iVar1;
  piVar6 = *(int **)(param_1[0x19] + 0x10);
  iVar1 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0085dcbc,1);
  param_1[0x1a] = iVar1;
  iVar1 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0085dde0,1);
  local_2c = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0085ddb4,1);
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0085db7c,1);
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x39e) == '\0') {
    iVar3 = fn_0017dd54(param_1[0x19],DAT_0089083c,1);
    param_1[0x1b] = iVar3;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    *(byte *)(local_2c + 0x44) = *(byte *)(local_2c + 0x44) & 0xfe;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    iVar2 = fn_0017dd54(param_1[0x19],DAT_00890840,1);
    param_1[0x1b] = iVar2;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    *(byte *)(local_2c + 0x44) = *(byte *)(local_2c + 0x44) & 0xfe;
    iVar1 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar1 + 0x39d) == '\0') {
      uVar4 = fn_00746fd4(param_1,0xe);
      uVar5 = fn_0022f750((char *)&DAT_00376bd4);
      fn_00190d50(uVar4,uVar5);
    }
    uVar4 = fn_00746fd4(param_1,0x10);
    local_30 = (local_30 & ~((unsigned int)0xff << 0)) | ((unsigned int)(0x20) & 0xff);
    uVar5 = fn_00182988(DAT_008977e4);
    iVar1 = fn_0026a558(uVar5,&local_30);
    fn_00190d50(uVar4,iVar1 + 0x1e);
    uVar4 = fn_00746fd4(param_1,0x11);
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,0x21);
    uVar5 = fn_00182988(DAT_008977e4);
    iVar1 = fn_0026a558(uVar5,&local_30);
    fn_00190d50(uVar4,iVar1 + 0x1e);
    iVar1 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar1 + 0x38c) == '\0') {
      iVar1 = 0;
      do {
        iVar2 = fn_006888c0(param_2,(&DAT_007bb56c)[iVar1]);
        bVar7 = iVar1 == 2;
        iVar1 = iVar1 + 1;
        *(byte *)(iVar2 + 0x44) = bVar7 | *(byte *)(iVar2 + 0x44) & 0xfe;
      } while (iVar1 < 3);
      *(undefined1 *)(param_1 + 0x1e) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      iVar1 = fn_00182988(DAT_008977e4);
      iVar1 = fn_006b8a1c(iVar1 + 0x38c);
      if (param_1[0x21] != iVar1) {
        iVar2 = 0;
        param_1[0x21] = iVar1;
        do {
          uVar4 = fn_006888c0(param_1[0x19],(&DAT_007bb56c)[iVar2]);
          local_30 = 0;
          fn_0019ba04(uVar4,param_1[0x1d],(&PTR_s_time_count_0_bflim_00890850)[iVar1 % 10],0);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 / 10;
        } while (iVar2 < 2);
      }
    }
  }
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(short *)(iVar1 + 0x3a0) != 0) {
    *(byte *)(local_2c + 0x44) = *(byte *)(local_2c + 0x44) & 0xfe | 1;
    iVar1 = fn_00182988(DAT_008977e4);
    iVar1 = (int)*(short *)(iVar1 + 0x3a0);
    iVar2 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar2 + 0x39e) == '\0') {
      uVar4 = fn_00746fd4(param_1,0xb);
      if (9999 < iVar1) {
        iVar1 = 9999;
      }
    }
    else {
      uVar4 = fn_00746fd4(param_1,0xf);
    }
    fn_00688c04(uVar4,iVar1,0);
  }
  (**(code **)(*(int *)param_1[0x1b] + 100))();
                    /* WARNING: Could not recover jumptable at 0x00376ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}



void fn_0037567c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00335988();
  *puVar1 = &DAT_008285e4;
  return;
}



void fn_003755c4(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *(undefined2 *)((int)puVar1 + 6) = param_2;
  *puVar1 = &DAT_008285b0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = param_3;
  return;
}



undefined4 fn_00373bf8(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  wchar16 *pwStack_48;
  char *pcStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  
  fn_002c330c(&pwStack_48);
  local_40 = 2;
  uStack_3c = 0;
  local_34 = 2;
  local_38 = 0;
  pwStack_48 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_44 = (char *)&DAT_00373de8;
  uVar1 = fn_0022f750((char *)&DAT_00373dfc);
  fn_00147974(&local_2c,uVar1);
  fn_00147974(&local_28,&DAT_00373e10);
  fn_00147974(&local_24,&DAT_00373e10);
  fn_00147974(&local_20,&DAT_00373e10);
  local_1c = 0;
  fn_002c29a0(param_1,&pwStack_48);
  iVar3 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_007c7a24)[iVar3 * 2]);
    fn_0031b78c(param_1,iVar3,0,uVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  fn_00689efc(param_1,0x36,0);
  if (local_20 != &DAT_008f9cf4) {
    piVar2 = local_20 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar2 = local_24 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar2 = local_28 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar2 = local_2c + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return 1;
}


