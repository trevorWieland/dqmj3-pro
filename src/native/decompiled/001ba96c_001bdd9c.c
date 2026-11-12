#include "001ba96c_001bdd9c.h"



void fn_001bdd9c(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
  }
  return;
}



void fn_001bd4bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x2a00) == 0) {
    iVar1 = fn_00192114();
    *(undefined1 *)(iVar1 + 0xc0) = 0;
    iVar1 = fn_00192114();
    if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
      iVar1 = fn_00192114();
      *(undefined4 *)(iVar1 + 200) = 0;
      iVar1 = fn_00192114();
      *(undefined4 *)(iVar1 + 0xcc) = 0;
    }
    return;
  }
  *(code **)(param_1 + 0x2a0c) = fn_001bec64;
  if (((DAT_008bf51c == 0) || (iVar1 = fn_00184c20(1), iVar1 != 0)) ||
     (iVar2 = fn_00184c20(0), iVar1 = DAT_008bf514, iVar2 != 0)) {
    fn_001af244(&LAB_001bd498);
    return;
  }
  *(undefined1 *)(DAT_008bf514 + 0x12) = 1;
  *(undefined1 *)(iVar1 + 0x13) = 1;
  fn_00184c6c(iVar1,fn_001bc064);
  return;
}



void fn_001bd144(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 auStack_350 [272];
  char local_130 [256];
  undefined4 local_30;
  undefined4 local_2c;
  
  fn_001ad654(local_130,param_1,0x100);
  bVar1 = true;
  pcVar8 = local_130;
  do {
    iVar2 = fn_001be608(pcVar8,0x2f);
    if (pcVar8[iVar2] == '\0') {
      return;
    }
    if ((!bVar1) && (*pcVar8 != '.')) {
      pcVar7 = local_130;
      pcVar8[iVar2] = '\0';
      fn_001930b8();
      local_30 = 0;
      local_2c = 0;
      fn_00102388(&local_30);
      puVar6 = auStack_350;
      while ((iVar3 = fn_0010239a(pcVar7,0x105,&local_30), iVar3 != 0 &&
             (iVar4 = fn_00101ce8(puVar6,pcVar7,iVar3,&local_30), iVar4 != 0))) {
        puVar6 = puVar6 + 1;
        pcVar7 = pcVar7 + iVar3;
      }
      *puVar6 = 0;
      uVar5 = fn_0044d750(auStack_350);
      pcVar8[iVar2] = '/';
      if ((int)uVar5 < 0) {
        if ((uVar5 & 0x3fc00) != 0x4400) {
          return;
        }
        if ((uVar5 & 0x3ff) < 0xb4) {
          return;
        }
        if (199 < (uVar5 & 0x3ff)) {
          return;
        }
      }
    }
    bVar1 = false;
    pcVar8 = pcVar8 + iVar2 + (pcVar8[iVar2] == '/');
  } while( true );
}



undefined4 fn_001bd01c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 auStack_248 [272];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar6 = auStack_248;
  fn_001930b8();
  iVar7 = param_1 + 0x2c;
  local_28 = 0;
  local_24 = 0;
  fn_00102388(&local_28);
  while ((iVar2 = fn_0010239a(iVar7,0x105,&local_28), iVar2 != 0 &&
         (iVar3 = fn_00101ce8(puVar6,iVar7,iVar2,&local_28), iVar3 != 0))) {
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + iVar2;
  }
  *puVar6 = 0;
  uVar4 = fn_0044d6e4(auStack_248);
  *(uint *)(param_1 + 0x14) = uVar4;
  if ((int)uVar4 < 0) {
    uVar1 = (uVar4 & 0x3fc00) >> 10;
    if (((uVar1 == 0x11) && (99 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0xb4)) {
      uVar5 = 0xfffffffe;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      if (((uVar1 == 0x11) && (0xe5 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0x154)) {
        *(undefined4 *)(param_1 + 8) = 0xfffffffd;
        *(undefined4 *)(param_1 + 4) = 0xb;
        goto LAB_001bd120;
      }
      uVar5 = 0xffffff80;
      *(undefined4 *)(param_1 + 4) = 0xb;
    }
    *(undefined4 *)(param_1 + 8) = uVar5;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_001bd120:
  return *(undefined4 *)(param_1 + 4);
}



int fn_001bb3d0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,int param_7,int param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int local_f4 [5];
  uint local_e0;
  uint local_d8;
  undefined4 local_d0;
  undefined4 local_b8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  local_f4[0] = param_6;
  local_f4[1] = param_7;
  local_f4[2] = param_8;
  uVar6 = 0;
  if (param_6 != 0) {
    uVar6 = *(uint *)(param_2 + 0x3c);
  }
  uVar4 = (uint)(param_6 != 0);
  if (param_7 != 0) {
    iVar8 = uVar4 << 2;
    uVar4 = uVar4 + 1;
    uVar6 = uVar6 | *(int *)(param_2 + 0x40) << iVar8;
  }
  if (param_8 != 0) {
    iVar8 = uVar4 << 2;
    uVar4 = uVar4 + 1;
    uVar6 = uVar6 | *(int *)(param_2 + 0x44) << iVar8;
  }
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_0017821c(local_f4 + 3,&DAT_007e1250,0x58);
  local_e0 = uVar4 - 1 & 0xf;
  local_f4[3] = local_e0 | 0xa0000000;
  local_b8 = 0x100;
  local_d0 = 0;
  local_d8 = uVar6;
  fn_00301a9c(param_1,local_f4 + 3,0x58);
  local_34 = param_1 + 0x58;
  puVar1 = (uint *)fn_00192124(local_28 * 0x30,4);
  iVar8 = 0;
  puVar7 = puVar1;
  if (0 < local_28) {
    do {
      iVar5 = 0;
      do {
        if (local_f4[iVar5] != 0) {
          uVar6 = fn_001b85a0();
          uVar4 = fn_001b85a0();
          uVar2 = fn_001b85a0();
          iVar3 = fn_001b85a0();
          *puVar7 = iVar3 << 8 | uVar2 >> 0x10;
          puVar7[1] = 0x802f0233;
          puVar7[2] = uVar2 << 0x10 | uVar4 >> 8;
          puVar7[3] = uVar6 | uVar4 << 0x18;
          puVar7 = puVar7 + 4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_28);
  }
  iVar8 = local_34;
  fn_00301a9c(local_34,puVar1,(int)puVar7 - (int)puVar1);
  iVar8 = iVar8 + ((int)puVar7 - (int)puVar1 & 0xfffffffcU);
  fn_001920f4(puVar1);
  local_90 = 1;
  uStack_8c = 0x10245;
  uStack_88 = 1;
  uStack_84 = 0xf0231;
  uStack_80 = 0;
  uStack_7c = 0x10253;
  uStack_78 = 1;
  uStack_74 = 0xf0111;
  local_60 = 0x7fff0000;
  local_70 = 0;
  uStack_6c = 0x8025e;
  uStack_68 = 0;
  uStack_64 = 0x8025e;
  local_5c = 0xc02ba;
  fn_00301a9c(iVar8,&local_90,0x38);
  return iVar8 + 0x38;
}



void fn_001bacc4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = fn_001851bc();
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(DAT_008bf51c + 0xe4cc);
    iVar1 = fn_00191f08();
    if ((iVar1 != 0) &&
       (((iVar1 = fn_00191f08(), iVar1 == 0 ||
         (iVar1 = fn_00192114(), *(char *)(iVar1 + 0xc0) == '\0')) && (DAT_008bf51c != 0)))) {
      puVar2 = (undefined4 *)(DAT_008bf51c + 0xe4d4);
      *(undefined4 *)(DAT_008bf51c + 0xe4c8) = uVar3;
      *puVar2 = &LAB_001c0bcc;
      iVar1 = DAT_008bf514;
      *(undefined1 *)(DAT_008bf514 + 0x12) = 0;
      *(undefined1 *)(iVar1 + 0x13) = 1;
      fn_00184c6c(iVar1,fn_001bf270);
      fn_001851bc();
      return;
    }
  }
  else if (*(code **)(DAT_008bf51c + 0xe4dc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001bad08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_008bf51c + 0xe4dc))(param_1,0);
    return;
  }
  return;
}



undefined4 fn_001ba96c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 auStack_240 [264];
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar5 = auStack_240;
  iVar6 = param_1 + 0x2c;
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar7 = 1;
  }
  else {
    uVar7 = 3;
  }
  local_30 = 0;
  local_2c = 0;
  fn_00102388(&local_30);
  while ((iVar2 = fn_0010239a(iVar6,0x105,&local_30), iVar2 != 0 &&
         (iVar3 = fn_00101ce8(puVar5,iVar6,iVar2,&local_30), iVar3 != 0))) {
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + iVar2;
  }
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar4 = fn_0014d6cc(param_1 + 0x138,auStack_240,uVar7);
  *(uint *)(param_1 + 0x14) = uVar4;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if ((int)uVar4 < 0) {
    uVar1 = (uVar4 & 0x3fc00) >> 10;
    if ((((uVar1 == 0x11) && (99 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0xb4)) ||
       (((uVar1 != 0x11 || ((uVar4 & 0x3ff) < 0xe6)) || (0x153 < (uVar4 & 0x3ff))))) {
      *(undefined4 *)(param_1 + 4) = 0xb;
      *(undefined4 *)(param_1 + 8) = 0xfffffffe;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
      *(undefined4 *)(param_1 + 4) = 0xb;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return *(undefined4 *)(param_1 + 4);
}


