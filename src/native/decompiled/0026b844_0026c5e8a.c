#include "0026b844_0026c5e8a.h"



undefined1 fn_0026be6c(int param_1)

{
  int iVar1;
  float local_20;
  float fStack_1c;
  float local_18;
  undefined4 local_14;
  
  fn_00174858(DAT_008977e4);
  iVar1 = fn_006ba8dc();
  if (iVar1 == 0) {
    iVar1 = fn_00174864(DAT_008977e4);
    if (*(char *)(param_1 + 4) == '\0') {
      local_20 = *(float *)(iVar1 + 0x38) + *(float *)(param_1 + 8);
      fStack_1c = *(float *)(iVar1 + 0x3c) + *(float *)(param_1 + 0xc);
      local_18 = *(float *)(iVar1 + 0x40) + *(float *)(param_1 + 0x10);
      fn_00204158(iVar1,&local_20);
      iVar1 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 == 8) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (*(int *)(param_1 + 0x14) == 0x28) {
        local_14 = 0xff000000;
        fn_00163988(DAT_00897808,&local_14,0x14);
        local_14 = 0xff000000;
        fn_00163988(DAT_0089780c,&local_14,0x14);
      }
      if (0x3c < *(int *)(param_1 + 0x14)) {
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
    else if (*(char *)(param_1 + 4) == '\x01') {
      return 1;
    }
  }
  return 0;
}



void fn_0026bb78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_20 [12];
  
  iVar1 = fn_00174864(DAT_008977e4);
  fn_00178b0c();
  fn_00178b7c();
  fn_001c2b7c(1);
  local_20[0] = 0x20;
  uVar2 = fn_0017484c(DAT_008977e4);
  iVar3 = fn_00175dcc(uVar2,local_20);
  local_48 = *(float *)(iVar3 + 0xc);
  local_44 = *(float *)(iVar3 + 0x10);
  local_40 = *(float *)(iVar3 + 0x14);
  local_38 = *(float *)(iVar1 + 0x44) + (*(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0x38));
  local_34 = *(float *)(iVar1 + 0x48) + (*(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x3c));
  local_30 = *(float *)(iVar1 + 0x4c) + (*(float *)(iVar3 + 0x14) - *(float *)(iVar1 + 0x40));
  iVar3 = fn_00174828(DAT_008977e4);
  if (((int)*(char *)(iVar3 + 0x4282) - 0x10U < 8) &&
     ('\x02' < *(char *)(iVar3 + *(char *)(iVar3 + 0x4282) * 0x418 + -0x4027))) {
    local_44 = local_44 + 120.0;
    local_40 = local_40 + 260.0;
  }
  else {
    local_44 = local_44 + 20.0;
    local_40 = local_40 + 15.0;
  }
  fVar10 = 0.0;
  fn_00204158(iVar1,&local_48);
  fn_002041b0(iVar1,&local_38);
  pfVar4 = (float *)(param_1 + 8);
  fVar6 = local_48 - local_38;
  fVar8 = local_44 - local_34;
  *(float *)(param_1 + 0x10) = local_40 - local_30;
  *pfVar4 = fVar6;
  *(float *)(param_1 + 0xc) = fVar8;
  fVar9 = *(float *)(param_1 + 0x10);
  fVar7 = fVar6 * fVar6 + fVar8 * fVar8 + fVar9 * fVar9;
  if (fVar7 == fVar10) {
    *pfVar4 = fVar10;
    *(float *)(param_1 + 0xc) = fVar10;
    *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar7);
    *pfVar4 = fVar6 * fVar7;
    *(float *)(param_1 + 0xc) = fVar8 * fVar7;
    *(float *)(param_1 + 0x10) = fVar9 * fVar7;
  }
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * 5.0;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 5.0;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * 5.0;
  uVar2 = fn_0016ba34(DAT_00897800,DAT_0089820c,(char *)&DAT_0026be50,0);
  fn_00174858(DAT_008977e4);
  iVar1 = fn_0015c948();
  if (iVar1 != 0) {
    fn_00174858(DAT_008977e4);
    uVar5 = fn_0015c948();
    fn_0017faa4(uVar5,uVar2,1,0x5a);
  }
  iVar1 = fn_00174834(DAT_008977e4);
  if (*(char *)(iVar1 + 0x185ef1) != '\0') {
    fn_001c3d30();
    fn_001c3d90();
  }
  fn_0026b144(1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0026bb64(undefined4 *param_1)

{
  *param_1 = &DAT_0081e02c;
  return;
}



undefined4 fn_0026b9c8(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char local_20 [4];
  char local_1c [8];
  
  iVar2 = fn_00174828(DAT_008977e4);
  uVar3 = fn_0017484c(DAT_008977e4);
  local_20[0] = ' ';
  do {
    iVar6 = iVar2 + local_20[0] * 8;
    iVar4 = fn_0069ccf8((int)*(short *)(iVar6 + 0x4180));
    if (iVar4 != 0) {
      uVar5 = fn_00175dcc(uVar3,local_20);
      if (*(char *)(iVar6 + 0x4182) != '\0') {
        fn_0015aa68(uVar5,*(char *)(iVar6 + 0x4182));
        uVar1 = *(undefined1 *)(iVar6 + 0x4182);
        iVar4 = fn_00174858(DAT_008977e4);
        fn_0017b1e8(*(undefined4 *)(iVar4 + 0x54),uVar1,1);
      }
    }
    local_20[0] = local_20[0] + '\x01';
  } while (local_20[0] < '\"');
  local_1c[0] = '\"';
  do {
    iVar6 = iVar2 + local_1c[0] * 8;
    iVar4 = fn_0069ccf8((int)*(short *)(iVar6 + 0x4180));
    if (iVar4 != 0) {
      uVar5 = fn_00175d88(uVar3,local_1c);
      if (*(char *)(iVar6 + 0x4182) != '\0') {
        fn_0015aa68(uVar5,*(char *)(iVar6 + 0x4182));
        uVar1 = *(undefined1 *)(iVar6 + 0x4182);
        iVar4 = fn_00174858(DAT_008977e4);
        fn_0017baa4(*(undefined4 *)(iVar4 + 0x54),uVar1,1);
      }
    }
    local_1c[0] = local_1c[0] + '\x01';
  } while (local_1c[0] < '$');
  return 1;
}



undefined4 fn_0026b844(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_00154ae0(DAT_008977e4);
  fn_001d0cdc();
  fn_00154ae0(DAT_008977e4);
  fn_001d48e4();
  uVar1 = fn_00174828(DAT_008977e4);
  iVar2 = fn_00174834(DAT_008977e4);
  fn_006208d0(uVar1,iVar2);
  fn_0017821c(uVar1,iVar2 + 0x180388,0x5b34);
  fn_0026b5f8(param_1);
  fn_00178b78(param_1);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00207650(uVar1,0);
  return 1;
}


