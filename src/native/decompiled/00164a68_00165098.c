#include "00164a68_00165098.h"



int fn_00165020(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = fn_00165098();
  if ((int)sVar1 - 1U < 0x21f) {
    sVar1 = fn_001746c0();
    iVar2 = (int)sVar1;
  }
  else if (((*(char *)(*(int *)(param_1 + 0x84) + 4) != '\0') ||
           (iVar2 = fn_00175be4(), iVar2 == 0)) ||
          (iVar2 = (int)*(short *)(iVar2 + param_2 * 0xc4 + 0x1a), iVar2 == 0)) {
    iVar2 = fn_001642a8(param_1,param_2);
    return iVar2;
  }
  return iVar2;
}



int fn_00165098(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x84) + 4);
  if (cVar1 == '\0') {
    iVar2 = fn_00182dfc();
    if (iVar2 != 0) {
      return (int)*(short *)(iVar2 + param_2 * 0xc4 + 0x1a);
    }
  }
  else if (cVar1 == '\x03') {
    iVar2 = fn_00182dfc();
    if (iVar2 != 0) {
      return (int)*(short *)(iVar2 + param_2 * 0xc4 + 0xf6a);
    }
  }
  else if ((cVar1 == '\b' || cVar1 == '\t') || cVar1 == '\n') {
    psVar3 = (short *)fn_00182dc4();
    if (psVar3 != (short *)0x0) {
      return (int)*psVar3;
    }
  }
  else if (cVar1 == '\x02') {
    iVar2 = fn_00182de8();
    if ((param_2 < iVar2) &&
       (iVar2 = fn_00182d98(*(undefined4 *)(param_1 + 0x84),param_2), iVar2 != 0)) {
      return (int)*(short *)(iVar2 + 0x1a);
    }
  }
  else if ((cVar1 == '\x17') && (psVar3 = (short *)fn_00175bd0(), psVar3 != (short *)0x0)) {
    return (int)*psVar3;
  }
  return 0;
}



void fn_00164f84(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_18 [2];
  
  if (param_4 == 0) {
    fn_00174858(DAT_008977e4);
    uVar2 = fn_0015c948();
    fn_0017faa4(uVar2,param_3,param_2,param_5);
    return;
  }
  if (param_4 == 1) {
    fn_00174858(DAT_008977e4);
    iVar1 = fn_0015c948();
    if (*(int *)(iVar1 + 0x88) - *(int *)(iVar1 + 0x84) >> 2 != 0) {
      fn_0017f8e0(iVar1);
    }
    local_18[0] = (undefined4 *)fn_00145b00(0x60,&DAT_00812c8c);
    if (local_18[0] != (undefined4 *)0x0) {
      local_18[0][1] = 0;
      local_18[0][2] = 0;
      local_18[0][3] = 0;
      local_18[0][4] = 0;
      local_18[0][5] = 0;
      local_18[0][6] = 0;
      local_18[0][8] = 0;
      local_18[0][9] = 0;
      local_18[0][10] = 0;
      local_18[0][0x15] = 1;
      *(undefined1 *)(local_18[0] + 0x14) = 1;
      *(undefined1 *)((int)local_18[0] + 0x51) = 0;
      local_18[0][0x13] = 0;
      local_18[0][0x16] = 0;
      local_18[0][0x17] = 0;
      *local_18[0] = &DAT_00858818;
    }
    *(undefined1 *)(local_18[0] + 0x14) = *(undefined1 *)(iVar1 + 0xa2);
    fn_0017f494(local_18[0],*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x7c),
                 *(undefined4 *)(iVar1 + 0x68),param_3,1);
    fn_00184068(iVar1 + 0x84,local_18);
    *(uint *)(iVar1 + 0x9c) = (uint)param_5;
    return;
  }
  if (param_4 != 2) {
    return;
  }
  fn_00174858(DAT_008977e4);
  iVar1 = fn_0015c948();
  local_18[0] = (undefined4 *)fn_00145b00(0x60,&DAT_00812c8c);
  if (local_18[0] != (undefined4 *)0x0) {
    local_18[0][1] = 0;
    local_18[0][2] = 0;
    local_18[0][3] = 0;
    local_18[0][4] = 0;
    local_18[0][5] = 0;
    local_18[0][6] = 0;
    local_18[0][8] = 0;
    local_18[0][9] = 0;
    local_18[0][10] = 0;
    local_18[0][0x15] = 1;
    *(undefined1 *)(local_18[0] + 0x14) = 1;
    *(undefined1 *)((int)local_18[0] + 0x51) = 0;
    local_18[0][0x13] = 0;
    local_18[0][0x16] = 0;
    local_18[0][0x17] = 0;
    *local_18[0] = &DAT_00858818;
  }
  *(undefined1 *)(local_18[0] + 0x14) = *(undefined1 *)(iVar1 + 0xa2);
  fn_0017f494(local_18[0],*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x78),
               *(undefined4 *)(iVar1 + 0x68),param_3,1);
  fn_00184068(iVar1 + 0x84,local_18);
  *(uint *)(iVar1 + 0x9c) = (uint)param_5;
  return;
}



char * fn_00164d7c(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x84);
  cVar1 = *(char *)(iVar2 + 4);
  if (cVar1 == '\x16') {
LAB_00164e54:
    return "EF030_10_TENSION01";
  }
  if (cVar1 == '\x04') {
    iVar2 = fn_0016533c(iVar2,0,0);
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 6) == '\x04') {
        return "EF130_31_MAHOTORA_ABS";
      }
      if (*(char *)(iVar2 + 6) == '\t') {
        return "EF130_27_TAMETORA_ABS";
      }
    }
  }
  else if (cVar1 == '\x03') {
    iVar2 = fn_00175a0c(iVar2,0);
    if ((*(short *)(iVar2 + 2) == 10) &&
       (iVar2 = fn_0016533c(*(undefined4 *)(param_1 + 0x84),0,0), iVar2 != 0)) {
      cVar1 = *(char *)(iVar2 + 6);
      if (cVar1 == '\x03') {
        return "EF120_01_HOIMI";
      }
      if (cVar1 == '\x04') {
        return "EF130_30_MAHOTORA_REC";
      }
      if (cVar1 == '\t') {
        return "EF130_26_TAMETORA_REC";
      }
    }
  }
  else {
    if (cVar1 == '\x05') {
      return "EF130_31_MAHOTORA_REC";
    }
    if (cVar1 == '\x17') goto LAB_00164e54;
  }
  return (char *)0x0;
}



void fn_00164c80(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_30 [8];
  undefined *local_28;
  undefined4 local_24;
  int *local_20 [5];
  
  fn_001028d4(auStack_30,(char *)&DAT_00164f64,param_2);
  if ((DAT_00897800 == 0) ||
     (puVar1 = (undefined *)fn_0016ba34(DAT_00897800,DAT_0089820c,auStack_30,0),
     puVar1 == (undefined *)0x0)) {
    puVar1 = &DAT_00872764;
  }
  if (param_3 == 0) {
    fn_00174858(DAT_008977e4);
    iVar2 = fn_0015c948();
    if (*(char *)(iVar2 + 0xa3) == '\0') {
      uVar4 = *(undefined4 *)(iVar2 + 0x70);
    }
    else {
      uVar4 = *(undefined4 *)(iVar2 + 0x74);
    }
  }
  else if (param_3 == 1) {
    fn_00174858(DAT_008977e4);
    iVar2 = fn_0015c948();
    uVar4 = *(undefined4 *)(iVar2 + 0x7c);
  }
  else {
    if (param_3 != 2) {
      return;
    }
    fn_00174858(DAT_008977e4);
    iVar2 = fn_0015c948();
    uVar4 = *(undefined4 *)(iVar2 + 0x78);
  }
  piVar3 = (int *)fn_00145b00(0x60,&DAT_00812c8c);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0x15] = 1;
    *(undefined1 *)(piVar3 + 0x14) = 1;
    *(undefined1 *)((int)piVar3 + 0x51) = 0;
    piVar3[0x13] = 0;
    piVar3[0x16] = 0;
    piVar3[0x17] = 0;
    *piVar3 = (int)&DAT_00858818;
  }
  local_24 = 0;
  local_28 = puVar1;
  fn_0017f494(piVar3,*(undefined4 *)(iVar2 + 0x6c),uVar4,*(undefined4 *)(iVar2 + 0x68));
  piVar5 = *(int **)(iVar2 + 0x90);
  if (*(int *)(iVar2 + 0x94) - (int)piVar5 >> 2 != 0) {
    for (; *(int **)(iVar2 + 0x94) != piVar5; piVar5 = piVar5 + 1) {
      puVar1 = (undefined *)(*(int *)(*piVar5 + 0x24) - *(int *)(*piVar5 + 0x20) >> 2);
      if (puVar1 == (undefined *)0x0) {
        local_28 = puVar1;
        fn_002ff628(9,&DAT_008c766e);
      }
    }
  }
  piVar5 = *(int **)(iVar2 + 0x84);
  if (*(int *)(iVar2 + 0x88) - (int)piVar5 >> 2 != 0) {
    for (; *(int **)(iVar2 + 0x88) != piVar5; piVar5 = piVar5 + 1) {
      puVar1 = (undefined *)(*(int *)(*piVar5 + 0x24) - *(int *)(*piVar5 + 0x20) >> 2);
      if (puVar1 == (undefined *)0x0) {
        local_28 = puVar1;
        fn_002ff628(9,&DAT_008c766e);
      }
    }
  }
  (**(code **)(*piVar3 + 0x14))(piVar3,iVar2 + 0xa4);
  *(undefined1 *)(piVar3 + 0x14) = *(undefined1 *)(iVar2 + 0xa2);
  local_20[0] = piVar3;
  fn_00184068(iVar2 + 0x84,local_20);
  return;
}



void fn_00164b0c(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_18;
  
  iVar4 = 0x20;
  do {
    local_18 = iVar4;
    iVar2 = fn_0017484c(DAT_008977e4);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_00175dcc(iVar2,&local_18);
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = piVar3[0x14];
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) {
        uVar1 = fn_001748ec(piVar3);
        local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,uVar1);
        iVar2 = fn_00164a34(param_1,local_18);
        if (((iVar2 != 0) && (iVar2 = fn_0017484c(DAT_008977e4), iVar2 != 0)) &&
           (iVar2 = fn_00165bb4(iVar2,&local_18), iVar2 != 0)) {
          (**(code **)(*piVar3 + 0x14))(piVar3,*(char *)(iVar2 + 0x34) != '\0');
        }
      }
    }
    iVar4 = (int)(char)((char)iVar4 + '\x01');
  } while (iVar4 < 0x22);
  iVar4 = 0x22;
  do {
    local_18 = iVar4;
    iVar2 = fn_0017484c(DAT_008977e4);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_00175d88(iVar2,&local_18);
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = piVar3[0x14];
      }
      if (piVar3 != (int *)0x0 && iVar2 != 0) {
        uVar1 = fn_001748ec(piVar3);
        local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,uVar1);
        iVar2 = fn_00164a34(param_1,local_18);
        if (((iVar2 != 0) && (iVar2 = fn_0017484c(DAT_008977e4), iVar2 != 0)) &&
           (iVar2 = fn_00165bb4(iVar2,&local_18), iVar2 != 0)) {
          (**(code **)(*piVar3 + 0x14))(piVar3,*(char *)(iVar2 + 0x34) != '\0');
        }
      }
    }
    iVar4 = (int)(char)((char)iVar4 + '\x01');
  } while (iVar4 < 0x24);
  return;
}



undefined4 fn_00164a68(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  fn_00183718(&local_2c,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               &DAT_00164b08);
  local_34 = local_18;
  uStack_30 = uStack_14;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  uStack_38 = uStack_1c;
  if (local_2c != 0) {
    uVar3 = 0;
    do {
      uVar1 = fn_0018385c(&uStack_44,uVar3);
      iVar2 = fn_003035b0(uVar1,param_2);
      if (iVar2 == 0) {
        uVar1 = fn_00183840(&uStack_44,uVar3);
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_2c);
  }
  return 0;
}


