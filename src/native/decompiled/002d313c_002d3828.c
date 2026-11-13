#include "002d313c_002d3828.h"



void fn_002d37e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_0083db8c;
  }
  fn_005df93c(DAT_008977e4,puVar1);
  return;
}



void fn_002d313c(void)

{
  char cVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 uVar11;
  bool bVar12;
  uint local_38;
  char local_34 [4];
  int local_30;
  int local_2c;
  
  local_30 = fn_00174828(DAT_008977e4);
  puVar3 = (undefined2 *)fn_006a7b78(DAT_008977e4);
  local_38 = fn_00174834(DAT_008977e4);
  iVar4 = fn_00174828(DAT_008977e4);
  if (*(char *)(iVar4 + 0xe8) == '\x03') {
    fn_002d3828(local_30,puVar3);
  }
  iVar4 = fn_00154ac8(0x32);
  if (iVar4 != 0) {
    uVar11 = 0x15;
    local_34[0] = '\x14';
    local_34[1] = '\x15';
    local_34[2] = 0x16;
    local_2c = local_30;
    puVar5 = (undefined1 *)fn_00174828(DAT_008977e4);
    switch(*puVar5) {
    case 0:
      bVar12 = *(char *)((int)puVar3 + 0x39) == '\x10';
      if (bVar12) {
        uVar9 = 0x14;
      }
      else {
        uVar9 = 0x15;
      }
      *puVar3 = 0x176;
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = uVar9;
      if (!bVar12) {
        uVar11 = 0x14;
      }
      iVar4 = 0;
      puVar3[3] = 0x176;
      *(undefined1 *)((int)puVar3 + 9) = 0x11;
      *(undefined1 *)(puVar3 + 5) = uVar11;
      do {
        cVar2 = local_34[iVar4];
        iVar4 = iVar4 + 1;
        puVar3[cVar2 * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + cVar2 * 6 + -0x5d) = cVar2;
        *(char *)(puVar3 + cVar2 * 3 + -0x2e) = cVar2;
      } while (iVar4 < 3);
      break;
    case 1:
      bVar12 = *(char *)((int)puVar3 + 0x39) == '\x10';
      if (bVar12) {
        uVar9 = 0x16;
      }
      else {
        uVar9 = 0x15;
      }
      *puVar3 = 0x176;
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = uVar9;
      if (!bVar12) {
        uVar11 = 0x16;
      }
      iVar4 = 0;
      puVar3[3] = 0x176;
      *(undefined1 *)((int)puVar3 + 9) = 0x11;
      *(undefined1 *)(puVar3 + 5) = uVar11;
      do {
        cVar2 = local_34[iVar4];
        iVar4 = iVar4 + 1;
        puVar3[cVar2 * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + cVar2 * 6 + -0x5d) = cVar2;
        *(char *)(puVar3 + cVar2 * 3 + -0x2e) = cVar2;
      } while (iVar4 < 3);
      break;
    case 2:
      *puVar3 = 0x176;
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = 0x15;
      puVar3[3] = 0x176;
      *(undefined1 *)((int)puVar3 + 9) = 0x11;
      *(undefined1 *)(puVar3 + 5) = 0x15;
      puVar3[0xc] = 0x161;
      *(undefined1 *)((int)puVar3 + 0x1b) = 0x14;
      *(undefined1 *)(puVar3 + 0xe) = 0x14;
      puVar3[0x12] = 0x161;
      *(undefined1 *)((int)puVar3 + 0x27) = 0x16;
      *(undefined1 *)(puVar3 + 0x14) = 0x16;
      if (*(char *)((int)puVar3 + 0x37) == '\0') {
        iVar4 = fn_00174828(DAT_008977e4);
        uVar11 = *(undefined1 *)(iVar4 + 0x4282);
      }
      else {
        uVar11 = *(undefined1 *)((int)puVar3 + 0x39);
      }
      puVar3[local_34[1] * 3 + -0x30] = 0x176;
      *(char *)((int)puVar3 + local_34[1] * 6 + -0x5d) = local_34[1];
      *(undefined1 *)(puVar3 + local_34[1] * 3 + -0x2e) = uVar11;
      break;
    case 3:
      *puVar3 = 0x176;
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = 0x15;
      puVar3[3] = 0x176;
      *(undefined1 *)((int)puVar3 + 9) = 0x11;
      iVar4 = 0;
      *(undefined1 *)(puVar3 + 5) = 0x15;
      do {
        cVar2 = local_34[iVar4];
        iVar4 = iVar4 + 1;
        puVar3[cVar2 * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + cVar2 * 6 + -0x5d) = cVar2;
        *(char *)(puVar3 + cVar2 * 3 + -0x2e) = cVar2;
      } while (iVar4 < 3);
      break;
    case 4:
      if (*(char *)(local_2c + 0x11c7) == '\0') {
        *(undefined2 *)(local_2c + 0x117c) = 10;
      }
      if (*(char *)(local_2c + 0x15df) == '\0') {
        *(undefined2 *)(local_2c + 0x1594) = 10;
      }
      if (*(char *)(local_2c + 0x19f7) == '\0') {
        *(undefined2 *)(local_2c + 0x19ac) = 10;
      }
      if (*(char *)(local_2c + 0x1e0f) == '\0') {
        *(undefined2 *)(local_2c + 0x1dc4) = 10;
      }
      *puVar3 = 0x176;
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = 0x15;
      puVar3[3] = 0x176;
      *(undefined1 *)((int)puVar3 + 9) = 0x11;
      iVar4 = 0;
      *(undefined1 *)(puVar3 + 5) = 0x15;
      do {
        cVar2 = local_34[iVar4];
        iVar4 = iVar4 + 1;
        puVar3[cVar2 * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + cVar2 * 6 + -0x5d) = cVar2;
        *(char *)(puVar3 + cVar2 * 3 + -0x2e) = cVar2;
      } while (iVar4 < 3);
      break;
    default:
      *puVar3 = 0x176;
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = 0x15;
      puVar3[3] = 0x176;
      *(undefined1 *)((int)puVar3 + 9) = 0x11;
      iVar4 = 0;
      *(undefined1 *)(puVar3 + 5) = 0x15;
      do {
        cVar2 = local_34[iVar4];
        iVar4 = iVar4 + 1;
        puVar3[cVar2 * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + cVar2 * 6 + -0x5d) = cVar2;
        *(char *)(puVar3 + cVar2 * 3 + -0x2e) = cVar2;
      } while (iVar4 < 3);
    }
  }
  iVar4 = fn_00154ac8(0x31);
  if (iVar4 != 0) {
    local_34[0] = '\x14';
    local_34[1] = '\x15';
    local_34[2] = 0x16;
    pcVar6 = (char *)fn_00174828(DAT_008977e4);
    cVar2 = *pcVar6;
    if (cVar2 == '\0') {
LAB_002d3540:
      *(undefined1 *)((int)puVar3 + 3) = 0x10;
      *(undefined1 *)(puVar3 + 2) = 0x14;
      *puVar3 = 0x259;
      iVar4 = 0;
      do {
        cVar2 = local_34[iVar4];
        iVar4 = iVar4 + 1;
        puVar3[cVar2 * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + cVar2 * 6 + -0x5d) = cVar2;
        *(char *)(puVar3 + cVar2 * 3 + -0x2e) = cVar2;
      } while (iVar4 < 3);
    }
    else if (cVar2 == '\x01') {
      iVar4 = fn_00174828(DAT_008977e4);
      if (*(char *)(iVar4 + 0x514) == '\0') {
        *puVar3 = 0x176;
        *(undefined1 *)((int)puVar3 + 3) = 0x10;
        *(char *)(puVar3 + 2) = local_34[0];
        puVar3[3] = 0x176;
        *(undefined1 *)((int)puVar3 + 9) = 0x11;
        *(char *)(puVar3 + 5) = local_34[1];
        puVar3[local_34[0] * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + local_34[0] * 6 + -0x5d) = local_34[0];
        *(char *)(puVar3 + local_34[0] * 3 + -0x2e) = local_34[0];
        puVar3[local_34[1] * 3 + -0x30] = 0x161;
        *(char *)((int)puVar3 + local_34[1] * 6 + -0x5d) = local_34[1];
        *(char *)(puVar3 + local_34[1] * 3 + -0x2e) = local_34[1];
      }
    }
    else if (cVar2 == '\x02') goto LAB_002d3540;
  }
  uVar10 = local_38;
  fn_001c41d0(local_30,puVar3);
  fn_001c2cac(local_38);
  cVar2 = *(char *)(local_38 + 0x185ec0);
  if (cVar2 != '\x01') {
    uVar10 = (uint)*(byte *)(local_38 + 0x185ec9);
  }
  if (cVar2 == '\x01' || uVar10 == 1) {
    puVar8 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &DAT_0083aeac;
    }
    goto LAB_002d37a4;
  }
  uVar7 = local_38 + 0x185e00;
  cVar1 = *(char *)(local_38 + 0x185eed);
  bVar12 = cVar1 == '\0';
  if (bVar12) {
    cVar1 = *(char *)(local_38 + 0x185eef);
  }
  if (bVar12 && cVar1 == '\0') {
    if ((*(char *)(local_38 + 0x180384) == '\0' && cVar2 == '\0') && uVar10 == 0) {
      bVar12 = *(char *)(local_38 + 0x185ef1) == '\0';
      if (bVar12) {
        uVar7 = (uint)*(byte *)(local_38 + 0x185ef3);
      }
      if (!bVar12 || uVar7 != 0) {
        puVar8 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
        goto joined_r0x002d377c;
      }
    }
    iVar4 = fn_001c2588();
    if (iVar4 != 0) {
      local_38 = 0xff000000;
      fn_00163988(DAT_00897808,&local_38,0xf);
      local_38 = 0xff000000;
      fn_00163988(DAT_0089780c,&local_38,0xf);
      puVar8 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = &DAT_00826a3c;
      }
      fn_005df93c(DAT_008977e4,puVar8);
      return;
    }
    puVar8 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &DAT_0082ad40;
    }
  }
  else {
    puVar8 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
joined_r0x002d377c:
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &DAT_0083db78;
    }
  }
LAB_002d37a4:
  fn_005df93c(DAT_008977e4,puVar8);
  return;
}



void fn_002d3828(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  bool local_1c;
  bool local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39f) != '\0') {
    iVar1 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar1 + 0x39f) == '\0') {
      return;
    }
    iVar1 = fn_00182988(DAT_008977e4);
    if (**(int **)(iVar1 + 0x398) == (*(int **)(iVar1 + 0x398))[1]) {
      return;
    }
  }
  local_1a = 0;
  local_19 = 0;
  local_17 = 0;
  local_1c = false;
  local_16 = 0;
  local_20 = 0;
  local_1b = false;
  local_15 = 0;
  local_18 = *(char *)(param_2 + 0x36) != '\0';
  if (!(bool)local_18) {
    local_1c = *(char *)(param_2 + 0x37) != '\0';
    if (local_1c) {
      local_1a = *(undefined1 *)(param_2 + 0x39);
    }
    local_1b = *(char *)(param_2 + 0x4b) != '\0';
    if (local_1b) {
      local_19 = *(undefined1 *)(param_2 + 0x4d);
    }
    cVar2 = '\x10';
    do {
      iVar1 = param_1 + cVar2 * 0x418;
      if (0 < *(short *)(iVar1 + -0x4080)) {
        auStack_30[cVar2] = *(undefined1 *)(iVar1 + -0x4026);
      }
      cVar2 = cVar2 + '\x01';
    } while (cVar2 < '\x14');
  }
  if (*(char *)(param_2 + 0x79) == '\0') {
    iVar1 = fn_001c2588();
    local_15 = 0;
    if (iVar1 == 0) goto LAB_002d3970;
  }
  local_15 = 1;
LAB_002d3970:
  local_17 = *(undefined1 *)(param_2 + 0x72);
  local_16 = *(undefined1 *)(param_2 + 0x76);
  fn_0023c1d0(DAT_008977e4,&local_20);
  return;
}


