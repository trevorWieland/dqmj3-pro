#include "005f95c4_005fdf34.h"



void fn_005fdf34(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined2 param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(*param_4 + 0x1c);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_4[1] + 0x1c);
  *param_1 = param_6;
  *(undefined2 *)(param_1 + 0x2c) = param_5;
  iVar2 = fn_00154ac8(0x19);
  if (iVar2 != 0) {
    bVar3 = *(char *)(*param_4 + 0x2e) + *(char *)(param_4[1] + 0x2e);
    cVar1 = *(char *)(*param_4 + 0x3c) + *(char *)(param_4[1] + 0x3c);
    if (bVar3 < 0x1f) {
      bVar3 = cVar1 + 1;
    }
    else {
      if (bVar3 < 0x4c) {
        if ((byte)(cVar1 + 6U) < 100) {
          return;
        }
        goto LAB_005fdfec;
      }
      bVar3 = cVar1 + 0xb;
    }
    if (99 < bVar3) {
LAB_005fdfec:
      *param_1 = 5;
      return;
    }
  }
  return;
}



void fn_005fdbd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *param_1;
  bVar1 = *(byte *)(iVar6 + 0x3c);
  iVar2 = fn_00661714((int)*(short *)(iVar6 + 0x1c));
  uVar3 = iVar2 - 1;
  if (((uVar3 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
    uVar4 = fn_00661560();
  }
  else if (((uVar3 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
    uVar4 = fn_00661550();
  }
  else if ((uVar3 < 7) && (99 < bVar1)) {
    uVar4 = fn_006615d4();
  }
  else {
    uVar4 = fn_00661308((int)*(short *)(iVar6 + 0x1c));
  }
  iVar6 = param_1[1];
  bVar1 = *(byte *)(iVar6 + 0x3c);
  iVar2 = fn_00661714((int)*(short *)(iVar6 + 0x1c));
  uVar3 = iVar2 - 1;
  if (((uVar3 < 3) && (0x18 < bVar1)) && (bVar1 < 0x32)) {
    uVar5 = fn_00661560();
  }
  else if (((uVar3 < 5) && (0x31 < bVar1)) && (bVar1 < 100)) {
    uVar5 = fn_00661550();
  }
  else if ((uVar3 < 7) && (99 < bVar1)) {
    uVar5 = fn_006615d4();
  }
  else {
    uVar5 = fn_00661308((int)*(short *)(iVar6 + 0x1c));
  }
  fn_005fdd14(uVar4,uVar5,param_2,param_3,param_4);
  return;
}



void fn_005fb93c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_005fb9b0);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 1) {
    puVar3 = auStack_14;
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_005fb9bc,param_2,1);
  }
  else {
    puVar2 = &DAT_005fb9ac;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



void fn_005fb4a8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  fn_00321598(param_1[0x19]);
  *(undefined1 *)(param_1[0x19] + 0x24) = 1;
  iVar4 = param_1[0x19];
  uVar1 = (**(code **)(*param_1 + 0x10c))(param_1);
  *(undefined4 *)(iVar4 + 0x44) = uVar1;
  *(undefined1 *)(param_1[0x19] + 8) = 9;
  uVar1 = fn_0022f750((char *)&DAT_005fb59c);
  fn_003212cc(param_1[0x19],uVar1);
  fn_00321574(param_1[0x19]);
  uVar1 = fn_0022f584((char *)&DAT_005fb5b0,0);
  fn_00321584(param_1[0x19],6,uVar1);
  uVar1 = fn_0022f584((char *)&DAT_005fb5d4,0);
  *(undefined4 *)(param_1[0x19] + 0x30) = uVar1;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xe0);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_0089905c) goto LAB_005fb588;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005fb588:
  fn_003212bc(param_1[0x19],(int)puVar2 + 0x1ca);
  return;
}



void fn_005fb128(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x10c))(param_1);
  if (iVar2 != 0) {
    uVar3 = fn_006f6a5c(param_1);
    if ((uVar3 & 0x100000) == 0) {
      if ((uVar3 & 0x200000) != 0) {
        *(undefined1 *)(iVar2 + 0x18) = 2;
      }
    }
    else {
      *(undefined1 *)(iVar2 + 0x18) = 1;
    }
  }
  cVar1 = *(char *)(param_1[0x19] + 0x1c);
  if ((char)param_1[0x1a] == '\0') {
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      fn_00689bd0(param_1,0,0,1);
      *(undefined1 *)(param_1 + 0x1a) = 1;
    }
  }
  else if ((char)param_1[0x1a] != '\x01') {
    return;
  }
  iVar2 = fn_001f7424(param_1,0x4c);
  if (iVar2 == 0) {
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0x114))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005fb20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x118))(param_1);
      return;
    }
    if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x005fb1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x11c))(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_005faaa0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  iVar2 = fn_0023c2a8();
  fn_004a2190(param_1 + 0xe8,iVar2 + 0x30);
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00899218) goto LAB_005fab04;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005fab04:
  *(undefined4 **)(param_1 + 0x158) = puVar3;
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xf9);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00899128) goto LAB_005fab48;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005fab48:
  *(undefined4 **)(param_1 + 0x15c) = puVar3;
  fn_00397774(&local_70);
  local_70 = DAT_00899100;
  local_6c = DAT_00899104;
  uStack_68 = 3;
  local_5c = 3;
  uVar5 = fn_0022f750((char *)&DAT_005fac44);
  fn_00147974(auStack_54,uVar5);
  local_3c = 2;
  uVar5 = fn_0022f750((char *)&DAT_005fac54);
  fn_00147974(auStack_30,uVar5);
  fn_00147974(auStack_28,*(int *)(param_1 + 0x158) + 0x558);
  cVar1 = *(char *)(*(int *)(param_1 + 0x15c) + 0x18);
  if (cVar1 == '\0') {
    local_64 = 2;
  }
  else if (cVar1 == '\x01') {
    local_64 = 0;
  }
  uVar5 = fn_00397618(param_1,&local_70);
  fn_00100414(auStack_34,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_48);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return uVar5;
}



void fn_005fa768(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  fn_00321598(param_1[0x19]);
  *(undefined1 *)(param_1[0x19] + 0x24) = 1;
  iVar5 = param_1[0x19];
  uVar1 = (**(code **)(*param_1 + 0x10c))(param_1);
  *(undefined4 *)(iVar5 + 0x44) = uVar1;
  *(undefined1 *)(param_1[0x19] + 8) = 8;
  uVar1 = fn_0022f750((char *)&DAT_005fa880);
  fn_003212cc(param_1[0x19],uVar1);
  uVar1 = fn_0022f584((char *)&DAT_005fa894,0);
  uVar2 = fn_0022f584((char *)&DAT_005fa8bc,0);
  fn_003212dc(param_1[0x19],uVar2,uVar1,0);
  uVar1 = fn_0022f584((char *)&DAT_005fa8e8,0);
  *(undefined4 *)(param_1[0x19] + 0x34) = uVar1;
  uVar1 = fn_0022f584((char *)&DAT_005fa908,0);
  *(undefined4 *)(param_1[0x19] + 0x30) = uVar1;
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_0089905c) goto LAB_005fa870;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005fa870:
  fn_003212bc(param_1[0x19],puVar3 + 0xf);
  return;
}



void fn_005f95c4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


