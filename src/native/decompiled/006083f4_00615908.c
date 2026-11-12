#include "006083f4_00615908.h"



undefined4 fn_00615908(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0034bec4();
  uVar2 = fn_0022f750((char *)&DAT_00615938);
  fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
  return uVar1;
}



undefined4 fn_0060f30c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0034bec4();
  uVar2 = fn_0022f750((char *)&DAT_0060f33c);
  fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
  return uVar1;
}



void fn_0060c2ec(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int extraout_r1;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar10 = fn_001f74d8(param_1,0x7e);
  iVar7 = (int)((ulonglong)uVar10 >> 0x20);
  puVar8 = (undefined4 *)uVar10;
  if (puVar8 != (undefined4 *)0x0) {
    uVar10 = (**(code **)*puVar8)(puVar8);
    iVar7 = (int)((ulonglong)uVar10 >> 0x20);
    puVar3 = (undefined4 *)uVar10;
    do {
      if (puVar3 == &DAT_00894a9c) goto LAB_0060c33c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_0060c33c:
  if (*(char *)(param_1 + 100) == '\0') {
    bVar9 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\0';
    cVar2 = '\0';
    if (bVar9) {
      cVar2 = *(char *)((int)puVar8 + 9);
    }
    if (bVar9 && cVar2 != '\0') {
      fn_006899f4(param_1,0xd7,1);
      fn_00689d04(param_1,0);
      *(undefined1 *)(param_1 + 100) = 1;
      iVar7 = extraout_r1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x68);
  bVar9 = SCARRY4(iVar4,1);
  iVar1 = iVar4 + 1;
  if (iVar4 != -1) {
    iVar7 = *(int *)(param_1 + 0x6c);
    bVar9 = SBORROW4(iVar7,iVar4);
    iVar1 = iVar7 - iVar4;
  }
  if ((iVar4 == -1 || iVar7 == iVar4) || iVar1 < 0 != bVar9) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    return;
  }
  iVar7 = fn_001c232c(DAT_008977e4);
  cVar2 = *(char *)(iVar7 + 8);
  pcVar5 = (char *)0x0;
  if (cVar2 == '\x01') {
    pcVar5 = (char *)&DAT_0060c268;
    goto LAB_0060c3dc;
  }
  if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      pcVar5 = (char *)&DAT_0060c284;
      goto LAB_0060c3dc;
    }
    if (cVar2 != '\x06') goto LAB_0060c3dc;
  }
  pcVar5 = (char *)&DAT_0060c2a0;
LAB_0060c3dc:
  uVar6 = fn_0022f584(pcVar5,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar6,1,0,1,1,0,0,1);
  iVar7 = fn_001c232c(DAT_008977e4);
  if (*(char *)(iVar7 + 8) == '\x01') {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  }
  fn_00689bd0(param_1,0x48,0);
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  return;
}



undefined4 fn_0060af5c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_538 [1044];
  char local_124;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [32];
  
  iVar2 = fn_0060e880();
  cVar1 = *(char *)(iVar2 + 0xc);
  if (cVar1 == '\x01') {
    fn_0060ecf8(param_1);
    iVar2 = fn_0060e880(param_1);
    fn_00574768(auStack_538,iVar2 + 0x14);
    iVar2 = fn_0060e880(param_1);
    if (((*(char *)(iVar2 + 0xd) == '\x01') && (local_124 != '\0')) &&
       (iVar2 = fn_006e6e6c(auStack_538), 0 < iVar2)) {
      local_124 = '\0';
      fn_00574374(auStack_538);
      uVar5 = fn_0060e880(param_1);
      fn_00659544(uVar5,auStack_538);
    }
    goto LAB_0060b16c;
  }
  if (cVar1 == '\x03') {
    fn_0060e9c0(param_1);
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0x50);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_008944b4) goto LAB_0060b070;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_0060b070:
    if (*(char *)(puVar3 + 6) == '\0') goto LAB_0060b16c;
    iVar2 = fn_0060e880(param_1);
    fn_00574768(auStack_538,iVar2 + 0x14);
    iVar2 = fn_0060e880(param_1);
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  else {
    if (cVar1 != '\x04') goto LAB_0060b16c;
    fn_0060e9c0(param_1);
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0x56);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00894498) goto LAB_0060b110;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_0060b110:
    if (*(char *)((int)puVar3 + 0x11) == '\0') goto LAB_0060b16c;
    iVar2 = fn_0060e880(param_1);
    fn_00574768(auStack_538,iVar2 + 0x14);
    iVar2 = fn_0060e880(param_1);
    cVar1 = *(char *)(iVar2 + 0xd);
  }
  if (cVar1 == '\x01') {
    local_124 = '\0';
    fn_00574374(auStack_538);
  }
  uVar5 = fn_0060e880(param_1);
  fn_00659544(uVar5,auStack_538);
LAB_0060b16c:
  fn_0060e65c(param_1);
  fn_00397774(&local_80);
  local_80 = DAT_00898d28;
  local_7c = DAT_00898d2c;
  local_78 = 3;
  iVar2 = fn_0060e880(param_1);
  if (*(char *)(iVar2 + 0xd) == '\0') {
    local_78 = local_78 + -1;
  }
  iVar2 = fn_0060e880(param_1);
  local_74 = *(undefined4 *)(iVar2 + 0x10);
  uVar5 = fn_0022f750(DAT_00898d30);
  fn_00147974(auStack_64,uVar5);
  local_4c = 2;
  iVar2 = fn_0060e880(param_1);
  if (*(char *)(iVar2 + 0xd) == '\0') {
    pcVar6 = (char *)&DAT_0060b2b4;
  }
  else {
    pcVar6 = (char *)&DAT_0060b2d0;
  }
  uVar5 = fn_0022f584(pcVar6,0);
  fn_00147974(auStack_40,uVar5);
  iVar2 = fn_0060e880(param_1);
  if (*(char *)(iVar2 + 0xd) == '\0') {
    pcVar6 = (char *)&DAT_0060b2ec;
  }
  else {
    pcVar6 = (char *)&DAT_0060b308;
  }
  uVar5 = fn_0022f584(pcVar6,0);
  fn_00147974(auStack_38,uVar5);
  uVar5 = fn_00397618(param_1,&local_80);
  fn_00100414(auStack_44,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_58);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return uVar5;
}



undefined4 fn_0060a9ac(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [28];
  
  iVar1 = fn_0060e880();
  if (*(char *)(iVar1 + 0xc) == '\0') {
    fn_0060ecf8(param_1);
  }
  fn_0060e65c(param_1);
  fn_00397774(&local_68);
  local_68 = DAT_00898e0c;
  local_64 = DAT_00898e10;
  local_60 = 3;
  iVar1 = fn_0060e880(param_1);
  local_5c = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = fn_0022f750(DAT_00898e14);
  fn_00147974(auStack_4c,uVar2);
  local_34 = 1;
  iVar1 = fn_0060e880(param_1);
  if (*(char *)(iVar1 + 0xd) == '\0') {
    pcVar3 = (char *)&DAT_0060aaa8;
  }
  else {
    pcVar3 = (char *)&DAT_0060aac4;
  }
  uVar2 = fn_0022f584(pcVar3,0);
  fn_00147974(auStack_28,uVar2);
  fn_00397618(param_1,&local_68);
  fn_00100414(auStack_2c,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_40);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  return 1;
}



void fn_0060a7e4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_007c7018)[iVar2]);
    fn_0031b78c(param_1,iVar2,0,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_0060a080(void)

{
                    /* WARNING: Subroutine does not return */
  fn_005ab924();
}



void fn_006094f8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0xe4);
    if (*(int *)(iVar2 + 0x54) == -1) {
      fn_0010301c(*(int *)(iVar2 + 0x24),(*(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24)) / 0x104,
                   0x104,fn_00609dc0);
      *(undefined1 *)(param_1 + 0x108) = 0;
    }
    else {
      *(char *)(param_1 + 0x108) = (char)*(int *)(iVar2 + 0x54);
    }
    fn_00609ad8(param_1);
    uVar1 = fn_00231cb8((&DAT_007bd6e8)[*(char *)(param_1 + 0x108)]);
    fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
    return;
  }
  if (*(char *)(param_1 + 0x108) == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + 0x24);
    fn_0010301c(iVar2,(*(int *)(*(int *)(param_1 + 0xe4) + 0x28) - iVar2) / 0x104,0x104,
                 fn_00609fb4);
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  else if (*(char *)(param_1 + 0x108) == '\x01') {
    iVar2 = *(int *)(*(int *)(param_1 + 0xe4) + 0x24);
    fn_0010301c(iVar2,(*(int *)(*(int *)(param_1 + 0xe4) + 0x28) - iVar2) / 0x104,0x104,
                 fn_00609dc0);
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



int fn_00608464(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = &DAT_0084fa90;
  *(undefined1 *)(puVar1 + 5) = 1;
  iVar2 = fn_0020be00(puVar1 + 6);
  return iVar2 + -0x18;
}



undefined1 * fn_006083f4(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [352];
  
  fn_0039536c();
  *(undefined1 *)(param_1 + 0x14) = 1;
  uVar1 = fn_0020be00(auStack_1c8);
  fn_0017821c(param_1 + 0x18,uVar1,0x1c0);
  return auStack_168;
}


