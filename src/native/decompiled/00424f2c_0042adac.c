#include "00424f2c_0042adac.h"



void fn_0042adac(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_38 = 0x20000;
  uStack_34 = 0;
  uStack_30 = 0x10002;
  uStack_2c = 0x20001;
  uStack_28 = 0;
  uStack_24 = 0x20000;
  uStack_20 = 0x10001;
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892ee4) goto LAB_0042ae08;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0042ae08:
  pcVar5 = (char *)fn_006e7ac8(puVar3);
  iVar11 = (int)*pcVar5;
  if ((*(int *)(param_1 + 0x9c) == iVar11) && (iVar6 = fn_0057dd88(puVar3), iVar6 == 0)) {
    return;
  }
  if (iVar11 < 0) {
    iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a76c);
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a778);
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    goto LAB_0042b46c;
  }
  iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a76c);
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a778);
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  if (iVar11 == 2) {
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 1);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042ac74);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a8f4);
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 2);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042acc4);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042aa48);
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 3);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042ab80);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a874);
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 4);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042ab80);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a7f4);
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 5);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042abd0);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a710);
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 6);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750(&DAT_0042ab78);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a690);
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    if (*(char *)(iVar6 + 7) == '\0') goto LAB_0042b418;
    if (*(char *)(iVar6 + 7) != '\x01') goto LAB_0042b238;
LAB_0042b420:
    puVar10 = &DAT_0042ad58;
LAB_0042b2e8:
    puVar7 = (undefined1 *)fn_0022f750(puVar10);
  }
  else {
    iVar6 = iVar11 * 0xe;
    sVar2 = *(short *)((int)&local_38 + iVar6);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042ac74);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a8f4);
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&local_38 + iVar6 + 2);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042acc4);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042aa48);
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_34 + iVar6);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042ab80);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a874);
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_34 + iVar6 + 2);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042ab80);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a7f4);
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_30 + iVar6);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750((char *)&DAT_0042abd0);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a710);
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_30 + iVar6 + 2);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750(&DAT_0042ab78);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042a690);
    fn_00190d50(uVar8,puVar7);
    if (*(short *)((int)&uStack_2c + iVar6) == 0) {
LAB_0042b418:
      puVar10 = &LAB_0042ad5c;
      goto LAB_0042b2e8;
    }
    if (*(short *)((int)&uStack_2c + iVar6) == 1) goto LAB_0042b420;
LAB_0042b238:
    puVar7 = &LAB_0042aac8;
  }
  uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_0042ab24);
  fn_00190d50(uVar8,puVar7);
  iVar6 = fn_0057dcdc(puVar3);
  if (*(int *)(iVar6 + 8) == -1) {
    uVar8 = fn_0022f584((char *)&DAT_0042ad14,0);
  }
  else {
    local_1c = iVar6;
    uVar8 = fn_006b2dec();
  }
  uVar9 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),&DAT_0042aabc);
  fn_00190d50(uVar9,uVar8);
LAB_0042b46c:
  *(int *)(param_1 + 0x9c) = iVar11;
  return;
}



void fn_00428190(int param_1,undefined4 param_2,int param_3,short param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = fn_00154ac8(0x47);
  if (((iVar3 != 0) && (iVar3 = fn_002d8370(0xffffffff), iVar3 == 0)) &&
     (**(int **)(DAT_008977e0 + 0x40) == 0)) {
    if (param_3 == 2) {
      fn_00428284(param_1);
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      iVar3 = fn_004282d0(param_1,param_2);
      if ((iVar3 != 0) || (iVar3 = fn_00427ee4(param_1,param_2), iVar3 != 0)) {
        if (*(char *)(iVar3 + 5) != '\0') {
          if (*(char *)(iVar3 + 5) != '\x01') {
            return;
          }
          if (param_3 == 1) {
            cVar1 = fn_00163868(5);
            *(char *)(iVar3 + 4) = cVar1 + '\b' + *(char *)(iVar3 + 4);
          }
        }
        uVar2 = *(short *)(iVar3 + 2) + param_4;
        *(ushort *)(iVar3 + 2) = uVar2;
        if (100 < uVar2) {
          *(undefined2 *)(iVar3 + 2) = 100;
        }
        return;
      }
    }
  }
  return;
}



void fn_00424f2c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [4];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [12];
  undefined1 local_3c;
  undefined1 local_23;
  
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00891c90) goto LAB_00424f78;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00424f78:
  param_1[0x3e] = (int)puVar6;
  uVar2 = fn_0022f584((char *)&DAT_00425254,0);
  fn_005b741c(param_1[0x3e]);
  fn_00398180(&local_84);
  local_84 = DAT_00891cc4;
  local_80 = DAT_00891cc8;
  local_7c = fn_006e8d10(param_1[0x3e]);
  uStack_78 = 0;
  fn_00147974(auStack_68,uVar2);
  uVar2 = fn_0022f584((char *)&DAT_00425274,0);
  fn_00147974(auStack_64,uVar2);
  local_58 = 0;
  local_57 = 1;
  uVar2 = fn_0022f750(&DAT_00425294);
  fn_00147974(auStack_5c,uVar2);
  local_56 = 1;
  local_50 = 1;
  local_23 = 1;
  fn_006cdc38(param_1,*(undefined4 *)(param_1[0x3e] + 0xc));
  uVar2 = fn_0022f584((char *)&DAT_00425298,0);
  fn_00147974(auStack_48,uVar2);
  fn_00101a50((int)param_1 + 0x126,4,&DAT_004254dc,(int)*(short *)(param_1[0x3e] + 0x4a));
  fn_00147974(auStack_4c,(int)param_1 + 0x126);
  local_3c = 0;
  if (6 < local_7c) {
    local_70 = 7;
    local_58 = 1;
  }
  fn_00397ff4(param_1,&local_84);
  if (*(char *)(param_1[0x3e] + 0x104) == '\0') {
    uVar2 = 0x33;
  }
  else {
    uVar2 = 0x34;
  }
  puVar6 = (undefined4 *)fn_001f74d8(param_1,uVar2);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008951c0) goto LAB_004250ec;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_004250ec:
  param_1[0x3f] = (int)puVar6;
  fn_00689930(param_1,uVar2,0);
  fn_0036c924(param_1[0x3f],0);
  iVar3 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_00327fb4(iVar3,param_1[1],0);
  }
  piVar5 = (int *)param_1[0x41];
  if (piVar5 != piVar4) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x41] = (int)piVar4;
  }
  *(int *)(param_1[0x41] + 0x30) = param_1[0x1c];
  (**(code **)(*(int *)param_1[0x41] + 0x10))((int *)param_1[0x41],param_1[0x12]);
  fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
  iVar3 = param_1[0x1d];
  *(undefined1 *)(iVar3 + 0x81) = 1;
  fn_0031f3f4(iVar3,0);
  iVar3 = fn_00689210(param_1[0x1c],DAT_00891ccc);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  iVar3 = fn_00689210(param_1[0x1c],DAT_00891cd0);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}


