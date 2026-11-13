#include "001c25e4_001c2b7c.h"



void fn_001c2b7c(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  char local_18 [4];
  char local_14 [4];
  
  uVar1 = fn_0017484c(DAT_008977e4);
  local_18[0] = '\x10';
  do {
    piVar2 = (int *)fn_00182e2c(uVar1,local_18);
    if (piVar2 != (int *)0x0) {
      VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      (**(code **)(*piVar2 + 0x2c))(piVar2);
      fn_00238718(piVar2,param_1);
    }
    local_18[0] = local_18[0] + '\x01';
  } while (local_18[0] != '\x18');
  local_14[0] = ' ';
  local_18[0] = '\x18';
  do {
    iVar3 = fn_00165bb4(uVar1,local_14);
    if (iVar3 != 0) {
      VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      fn_001747e0();
    }
    local_14[0] = local_14[0] + '\x01';
  } while (local_14[0] != '\"');
  local_14[0] = '\"';
  do {
    iVar3 = fn_00165bb4(uVar1,local_14);
    if (iVar3 != 0) {
      VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      fn_001747e0();
    }
    local_14[0] = local_14[0] + '\x01';
  } while (local_14[0] != '$');
  return;
}



void fn_001c2ab8(char *param_1,short param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  bool bVar8;
  undefined4 uVar9;
  
  cVar1 = *param_1;
  iVar4 = fn_00174828(DAT_008977e4);
  iVar4 = iVar4 + cVar1 * 0x418;
  fn_001743e8(iVar4 + -0x4080);
  fn_00174610(iVar4 + -0x4080,(int)-param_2);
  iVar5 = fn_00174858(DAT_008977e4);
  fn_0017b278(*(undefined4 *)(iVar5 + 0x54),param_1,iVar4 + -0x4025);
  iVar5 = fn_00174858(DAT_008977e4);
  fn_0017b93c(*(undefined4 *)(iVar5 + 0x54),param_1);
  iVar5 = (int)*param_1;
  uVar6 = iVar5 - 0x10;
  bVar8 = 3 < uVar6;
  if (bVar8) {
    uVar6 = iVar5 - 0x18;
  }
  if ((bVar8 && 3 < uVar6) && (iVar5 != 0x20 && iVar5 != 0x22)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (*(char *)(iVar4 + -0x3c6c) == '\0') {
    return;
  }
  if (bVar8) {
    iVar5 = 0x20;
    iVar7 = 0x22;
  }
  else {
    iVar5 = 0x21;
    iVar7 = 0x23;
  }
  iVar2 = fn_00174828(DAT_008977e4);
  iVar3 = fn_00174828(DAT_008977e4,iVar5 + -0x20);
  *(char *)(iVar2 + iVar5 * 8 + 0x4182) = *param_1;
  *(char *)(iVar3 + iVar7 * 8 + 0x4182) = *param_1;
  fn_00180350(iVar4 + -0x4025,0x4e,1,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8);
  uVar9 = 0;
  fn_00180350(iVar4 + -0x4025,0x4f,1,0);
  iVar4 = fn_00174858(DAT_008977e4);
  fn_0017b1e8(*(undefined4 *)(iVar4 + 0x54),*param_1,1);
  iVar4 = fn_00174858(DAT_008977e4);
  fn_0017baa4(*(undefined4 *)(iVar4 + 0x54),*param_1,1,uVar9);
  return;
}



bool fn_001c2a8c(int param_1)

{
  byte bVar1;
  
  bVar1 = fn_00113ed4();
  return (bVar1 & *(char *)(param_1 + 0xe8) == '\x05') != 0;
}



undefined4 fn_001c2a7c(int param_1)

{
  return *(undefined4 *)(&DAT_007ba834 + param_1 * 4);
}



/* WARNING: Removing unreachable block (ram,0x001c298c) */

bool fn_001c28f0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = fn_00174828(DAT_008977e4);
  iVar5 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar5 + 1);
  if ((*(char *)(iVar4 + 0xfd) != '\x02') &&
     ((*(char *)(iVar4 + 0xfd) != '\x01' || (*(char *)(iVar5 + 0xe4) < '\x01')))) {
    cVar3 = '\x10';
    do {
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + cVar3 * 0x418;
      cVar2 = '\0';
      if (iVar4 != 0x4080) {
        cVar2 = *(char *)(iVar4 + -0x3c6c);
      }
      if (iVar4 != 0x4080 && cVar2 != '\0') {
        return false;
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\x14');
    cVar3 = '\x18';
    do {
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + cVar3 * 0x418;
      cVar2 = '\0';
      if (iVar4 != 0x4080) {
        cVar2 = *(char *)(iVar4 + -0x3c6c);
      }
      if (iVar4 != 0x4080 && cVar2 != '\0') {
        return false;
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < ' ');
    iVar4 = 0x10;
    cVar3 = '\0';
    if (0 < param_2) {
      do {
        iVar5 = fn_00174828(DAT_008977e4);
        iVar5 = iVar5 + (char)iVar4 * 0x418;
        if ((iVar5 != 0x4080) && (*(char *)(iVar5 + -0x4019) == '\0')) {
          cVar3 = cVar3 + '\x01';
        }
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      } while (iVar4 + -0x10 < param_2);
      if ('\x01' < cVar3) {
        return cVar1 != '\r' && param_1 != 0;
      }
    }
  }
  return false;
}



undefined1 * fn_001c26fc(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_148 [248];
  int local_50 [4];
  int local_40 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  uVar7 = 0;
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_50[0] = 0;
  local_50[1] = 0;
  do {
    iVar3 = fn_00144df4(uVar8,*(char *)(param_1 + uVar7 + 0x185eed) + -0x10);
    local_50[uVar7] = iVar3;
    iVar3 = fn_00182988(DAT_008977e4);
    uVar6 = uVar7 & 0xff;
    piVar1 = local_50 + uVar7;
    uVar7 = uVar7 + 1;
    *(int *)(iVar3 + uVar6 * 4 + 0x3b8) = *piVar1;
  } while ((int)uVar7 < 2);
  uVar7 = 0;
  iVar3 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  do {
    iVar4 = fn_00144df4(uVar8,iVar3);
    if (iVar4 != 0) {
      if (local_50[0] == iVar4) {
        local_40[uVar7] = -0x1194d800;
        uVar7 = uVar7 + 1 & 0xff;
      }
      else if (local_50[1] != iVar4) {
        local_40[uVar7] = iVar4;
        uVar7 = uVar7 + 1 & 0xff;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  fn_0028a66c(uVar8);
  iVar3 = 0;
  do {
    iVar4 = fn_0028b3a0(uVar8,local_40[iVar3]);
    if (iVar4 != 0) {
      fn_0028b7ac(uVar8,local_40[iVar3]);
    }
    iVar3 = (int)(char)((char)iVar3 + '\x01');
  } while (iVar3 < 4);
  puVar5 = (undefined4 *)fn_0028aad0(uVar8,4000000000);
  uVar8 = fn_0028aad0(uVar8,local_50[0]);
  fn_0017821c(auStack_148,uVar8,0xf0);
  fn_0017821c(puVar5,auStack_148,0xf0);
  *puVar5 = 4000000000;
  fn_0020bbc4(auStack_30,auStack_148);
  local_50[2] = 0;
  fn_006bf0fc(auStack_2c,local_50 + 2);
  cVar2 = *(char *)(param_1 + 0x185eed);
  if (*(char *)(param_1 + 0x185eee) < cVar2) {
    cVar2 = cVar2 + -1;
  }
  iVar3 = fn_00174828(DAT_008977e4);
  *(undefined2 *)((int)puVar5 + local_50[2] * 2 + 0x44) =
       *(undefined2 *)(iVar3 + cVar2 * 0x418 + -0x3dfc);
  return auStack_30;
}



void fn_001c26d4(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003d1e08(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x18));
  return;
}



void fn_001c26a8(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x18);
  iVar2 = 0;
  do {
    param_1 = param_1 * 0xcccd >> 0x13;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_00102908(&local_40,0x20,DAT_00890878,param_1 % 10);
    fn_0019ba04(*(undefined4 *)(iVar1 + (1 - iVar2) * 4 + 0x94),*(undefined4 *)(iVar1 + 0xb4),
                 &local_40,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_001c263c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = fn_00190e98(DAT_008977e4);
  puVar2 = (undefined4 *)fn_00190ed0(uVar1,1);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uVar1 = fn_00190e98(DAT_008977e4);
  puVar2 = (undefined4 *)fn_00190ee0(uVar1,1);
  local_1c = *puVar2;
  uStack_18 = puVar2[1];
  uStack_14 = puVar2[2];
  uVar1 = fn_00174864(DAT_008977e4);
  fn_00187f00(uVar1,&local_28,&local_1c);
  return;
}



undefined4 fn_001c25e4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x10;
  do {
    iVar1 = fn_00174828(DAT_008977e4);
    if (*(char *)(iVar1 + iVar2 * 0x418 + -0x3c6c) != '\0') {
      return 1;
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while (iVar2 < 0x14);
  return 0;
}


