#include "001cf820_001d1150.h"



int fn_001d1150(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  fn_00301a9c(param_1 + 0x46,param_2 + 0x46,0x1e);
  fn_0017821c(param_1 + 100,param_2 + 100,0x3c0);
  fn_0017821c(param_1 + 0x424,param_2 + 0x424,0x3c0);
  *(undefined1 *)(param_1 + 0x7e4) = *(undefined1 *)(param_2 + 0x7e4);
  fn_0017821c(param_1 + 0x7e8,param_2 + 0x7e8,0x60);
  *(undefined1 *)(param_1 + 0x848) = *(undefined1 *)(param_2 + 0x848);
  *(undefined1 *)(param_1 + 0x849) = *(undefined1 *)(param_2 + 0x849);
  return param_1;
}



void fn_001d0628(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_006c0010(param_2 + 4);
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  param_3[3] = puVar2[3];
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(puVar2 + 4);
  uVar1 = fn_006bf34c(param_2 + 4);
  *(undefined1 *)(param_3 + 7) = uVar1;
  uVar1 = fn_006bf184(param_2 + 4);
  *(undefined1 *)((int)param_3 + 0x1d) = uVar1;
  uVar1 = fn_006bfdec(param_2 + 4);
  *(undefined1 *)((int)param_3 + 0x1e) = uVar1;
  return;
}



void fn_001cff74(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (undefined4 *)fn_0012e7ec();
  *puVar1 = &DAT_00851770;
  *(undefined2 *)((int)puVar1 + 0x2e) = 1;
  uVar5 = 0;
  do {
    uVar6 = uVar5 + 1;
    *(undefined2 *)(puVar1 + uVar5 * 9 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + uVar5 * 0x24 + 0x32) = 0;
    *(undefined2 *)(puVar1 + uVar5 * 9 + 0xd) = 0;
    puVar1[uVar5 * 9 + 0xf] = 0x3f800000;
    *(undefined2 *)(puVar1 + uVar5 * 9 + 0xe) = 0xffff;
    *(undefined1 *)((int)puVar1 + uVar5 * 0x24 + 0x36) = 0;
    *(undefined1 *)((int)puVar1 + uVar5 * 0x24 + 0x37) = 3;
    *(undefined1 *)(puVar1 + uVar5 * 9 + 0x10) = 0;
    *(undefined1 *)((int)puVar1 + uVar5 * 0x24 + 0x41) = 0;
    *(undefined2 *)((int)puVar1 + uVar5 * 0x24 + 0x42) = 0;
    *(undefined2 *)(puVar1 + uVar5 * 9 + 0x11) = 0;
    *(undefined1 *)((int)puVar1 + uVar5 * 0x24 + 0x46) = 0;
    *(undefined1 *)((int)puVar1 + uVar5 * 0x24 + 0x47) = 0;
    *(undefined2 *)(puVar1 + uVar5 * 9 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + uVar5 * 0x24 + 0x4a) = 0;
    *(undefined1 *)(puVar1 + uVar5 * 9 + 0x13) = 0;
    *(undefined1 *)((int)puVar1 + uVar5 * 0x24 + 0x4d) = 0;
    *(undefined2 *)((int)puVar1 + uVar5 * 0x24 + 0x4e) = 0;
    *(undefined2 *)(puVar1 + uVar5 * 9 + 0x14) = 0;
    uVar5 = uVar6;
  } while (uVar6 < 4);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar4 = iVar3 + 1;
    iVar2 = iVar2 + 2;
    *(undefined2 *)((int)puVar1 + iVar3 * 2 + 0xc0) = 0xffff;
    iVar3 = iVar3 + 2;
    *(undefined2 *)((int)puVar1 + iVar4 * 2 + 0xc0) = 0xffff;
  } while (iVar2 < 0x40);
  return;
}



void fn_001cfd80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = fn_00174870(param_1);
  *(undefined1 *)(iVar1 + 0xb) = *(undefined1 *)(iVar2 + 0x10);
  iVar1 = fn_00174828(DAT_008977e4);
  puVar3 = (undefined1 *)(iVar1 + 0xe8);
  iVar1 = fn_00174870(param_1);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(puVar3 + 0xc) = uVar4;
  *puVar3 = *(undefined1 *)(iVar1 + 0x20);
  puVar3[0x10] = *(undefined1 *)(iVar1 + 0x28);
  puVar3[0x11] = *(undefined1 *)(iVar1 + 0x29);
  puVar3[0x14] = *(undefined1 *)(iVar1 + 0x2b);
  puVar3[0x15] = *(undefined1 *)(iVar1 + 0x2c);
  puVar3[0x16] = *(undefined1 *)(iVar1 + 0x2d);
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = fn_00154ac8(0x13);
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 0xf0) = *(uint *)(iVar1 + 0xf0) | 8;
  }
  iVar2 = fn_00154ac8(0x1c);
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 0xf0) = *(uint *)(iVar1 + 0xf0) | 0x800;
  }
  iVar2 = fn_00154ac8(0x38);
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + 0xfd) = 2;
  }
  iVar1 = fn_00154ac8(0x32);
  if ((iVar1 == 0) && (iVar1 = fn_00154ac8(0x31), iVar1 == 0)) {
    uVar5 = 0;
    do {
      iVar2 = (int)*(short *)(param_1 + uVar5 * 0x24 + 0x3a);
      iVar1 = fn_001a46f4(iVar2);
      if (iVar1 != 0) {
        fn_00289dfc(*(undefined4 *)(DAT_00897804 + 0x24),iVar2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    fn_001d30c4(param_1);
  }
  else {
    fn_001d1350(param_1);
  }
  fn_001d14b0(param_1);
  fn_001d2128(param_1,param_1 + 0x148);
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    iVar1 = fn_00174870(param_1);
    if ((*(uint *)(iVar1 + 0x18) >> 8 & 1) != 0) {
      iVar1 = fn_00182988(DAT_008977e4);
      *(undefined1 *)(iVar1 + 0x3b4) = 1;
    }
  }
  fn_001d1a70(param_1,0x14,0x18);
  return;
}



void fn_001cfc80(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = false;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar3 = fn_00174870(param_1);
  iVar4 = iVar2 + 0x1160;
  bVar7 = iVar4 != param_2;
  if (bVar7) {
    iVar4 = iVar2 + 0x1578;
  }
  if (bVar7 && iVar4 != param_2) {
    iVar4 = iVar2 + 0x1990;
    bVar7 = iVar4 != param_2;
    if (bVar7) {
      iVar4 = iVar2 + 0x1da8;
    }
    if (bVar7 && iVar4 != param_2) goto LAB_001cfcec;
  }
  bVar1 = true;
LAB_001cfcec:
  if (*(int *)(param_1 + 0x23f4) == 0 || *(int *)(iVar3 + 4) == 0) {
    return;
  }
  uVar5 = fn_00182cc8();
  if (((*(char *)(param_1 + 0x23f1) == '\0') && (bVar1)) &&
     (iVar4 = fn_006b3ec4(*(undefined4 *)(param_1 + 0x23f4),uVar5), iVar4 != 0)) {
    uVar6 = fn_006f3068(param_2);
    if (uVar6 < 0x4c) {
      *(undefined2 *)(param_2 + uVar6 * 2 + 0x284) = 0x209;
    }
    *(undefined1 *)(param_1 + 0x23f1) = 1;
  }
  fn_00654c74(param_2 + 0x284);
  return;
}



int fn_001cfc5c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    fn_002feef8(*(int *)(param_1 + 8));
  }
  return param_1;
}



undefined4 fn_001cf820(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_120;
  undefined1 auStack_11c [12];
  undefined1 auStack_110 [12];
  undefined1 local_104 [212];
  char local_30 [12];
  
  uVar9 = 0;
  switch(*param_1) {
  case 0:
    iVar8 = fn_00174834(DAT_008977e4);
    if (((int)*(char *)(iVar8 + 0x180385) - 0x14U < 4) &&
       (iVar3 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc)), iVar3 < 500)) {
      fn_00301f50(&local_120,0xf0);
      fn_00236b7c(&local_120,*(undefined1 *)(iVar8 + 0x180385));
      uVar5 = fn_00174858(DAT_008977e4);
      iVar8 = fn_002f96c4(*(undefined4 *)(param_1 + 8),&local_120,uVar5,4);
      if (iVar8 != 0) {
        local_120 = 0xff000000;
        fn_00163988(DAT_00897808,&local_120,0x14);
        local_120 = 0xff000000;
        fn_00163988(DAT_0089780c,&local_120,0x14);
        *param_1 = 1;
        return 0;
      }
    }
    goto LAB_001cf93c;
  case 1:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
      return 0;
    }
    local_30[0] = '\x10';
    do {
      uVar5 = fn_0017484c(DAT_008977e4);
      piVar4 = (int *)fn_00165bb4(uVar5,local_30);
      if (piVar4 != (int *)0x0) {
        iVar8 = fn_00174834(DAT_008977e4);
        if (local_30[0] == *(char *)(iVar8 + 0x180385)) {
          (**(code **)(*piVar4 + 0x14))(piVar4,1);
          fn_00179928(piVar4);
          *(int **)(param_1 + 0xc) = piVar4;
        }
        else {
          (**(code **)(*piVar4 + 0x14))(piVar4,0);
        }
      }
      local_30[0] = local_30[0] + '\x01';
    } while (local_30[0] < '\x18');
    iVar8 = fn_00174834(DAT_008977e4);
    local_104[0] = *(undefined1 *)(iVar8 + 0x180385);
    fn_001c3f90(local_104,auStack_110,auStack_11c);
    uVar5 = fn_00174864(DAT_008977e4);
    fn_00187f00(uVar5,auStack_110,auStack_11c);
    uVar5 = fn_00174858(DAT_008977e4);
    fn_002d3fc8(uVar5,4);
    local_120 = 0;
    fn_00163988(DAT_00897808,&local_120,0x14);
    local_120 = 0;
    fn_00163988(DAT_0089780c,&local_120,0x14);
    uVar2 = 2;
    goto LAB_001cfb40;
  case 2:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
      return 0;
    }
    uVar5 = fn_00174858(DAT_008977e4);
    puVar6 = (undefined4 *)fn_001f751c(uVar5,0x48);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar7 == &DAT_008942d0) goto LAB_001cfafc;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_001cfafc:
    uVar2 = 3;
    *(undefined4 **)(param_1 + 4) = puVar6;
LAB_001cfb40:
    *param_1 = uVar2;
    break;
  case 3:
    cVar1 = *(char *)(*(int *)(param_1 + 4) + 0x31);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        fn_00205888(*(undefined4 *)(param_1 + 0xc),0x3c);
        uVar2 = 5;
      }
      else {
        if (cVar1 != '\x03') {
          return 0;
        }
        uVar2 = 4;
      }
      goto LAB_001cfb40;
    }
    goto LAB_001cf93c;
  case 4:
    iVar8 = fn_00237730(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (iVar8 == 0) {
      return 0;
    }
LAB_001cf93c:
    *param_1 = 6;
    break;
  case 5:
    iVar8 = fn_006add5c(*(undefined4 *)(param_1 + 0xc));
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
    break;
  case 6:
    fn_00174858(DAT_008977e4);
    iVar8 = fn_006ba8bc();
    if (iVar8 == 4) {
      uVar9 = fn_00174858(DAT_008977e4);
      fn_002d3fc8(uVar9,6);
    }
    uVar9 = 1;
  }
  return uVar9;
}


