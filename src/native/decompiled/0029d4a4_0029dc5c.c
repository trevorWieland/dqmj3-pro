#include "0029d4a4_0029dc5c.h"



void fn_0029dc5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00699374(DAT_008977e0);
  if ((*(char *)(param_1 + 100) == '\0') && (iVar1 = fn_006f7a20(DAT_008977e0), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 100) = 1;
    local_10 = 0;
    fn_00163988(DAT_00897808,&local_10,100);
    local_10 = 0;
    fn_00163988(DAT_0089780c,&local_10,100);
    uVar2 = fn_006f72b4(DAT_008977e0);
    fn_00219400(uVar2,0);
  }
  return;
}



bool fn_0029dc20(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x6c) != 0;
  if (!bVar1) {
    fn_00697484(DAT_008977e0);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  return bVar1;
}



undefined4 fn_0029dabc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898c58) goto LAB_0029db04;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0029db04:
  *(undefined4 **)(param_1 + 0x68) = puVar1;
  iVar3 = fn_00250e58(0);
  if ((iVar3 != 0) && (iVar3 = fn_006b5184(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar3 != 0)) {
    if (iVar3 == 1) {
      uVar4 = 0x2bd;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 2) {
      uVar4 = 0x2be;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 3) {
      uVar4 = 0x2bf;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 4) {
      uVar4 = 0x2c0;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 5) {
      uVar4 = 0x2c1;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 6) {
      uVar4 = 0x2c2;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 7) {
      uVar4 = 0x2c3;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 8) {
      uVar4 = 0x2c4;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 9) {
      uVar4 = 0x2c5;
      goto LAB_0029dbb4;
    }
    if (iVar3 == 10) {
      uVar4 = 0x2c6;
      goto LAB_0029dbb4;
    }
  }
  uVar4 = 700;
LAB_0029dbb4:
  fn_00697084(DAT_008977e0,uVar4);
  return 1;
}



void fn_0029da50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fn_00699b60(DAT_008977e0,0);
  if (*(char *)(*(int *)(param_1 + 0x68) + 9) == '\x01') {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
    uVar3 = *(undefined4 *)(iVar2 + 0x78);
    uVar4 = *(undefined4 *)(iVar2 + 0x7c);
    uVar1 = fn_00129004();
    fn_002416b4(uVar1,uVar3,uVar4);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
    uVar1 = fn_00129004();
    fn_002419f4(uVar1,uVar3,0);
    return;
  }
  return;
}



undefined4 * fn_0029d9fc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s0;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0081e5d8;
  puVar1[1] = param_2;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  puVar1[2] = *param_3;
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = in_s0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return puVar1;
}



undefined4 * fn_0029d960(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0081e5c0;
  puVar1[1] = param_2;
  puVar1[2] = in_s0;
  puVar1[3] = in_s1;
  *(undefined1 *)(puVar1 + 4) = 0;
  return puVar1;
}



void fn_0029d90c(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  if ((iVar2 == 0) &&
     (iVar2 = fn_006ac638(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1]), iVar2 != 0)) {
    uVar1 = fn_001c7160();
    *(undefined1 *)(param_1 + 4) = uVar1;
  }
  return;
}



void fn_0029d7bc(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  
  piVar2 = (int *)fn_006ac638(*(undefined4 *)(DAT_008977e0 + 0x30),*(undefined4 *)(param_1 + 4));
  if ((piVar2 == (int *)0x0) || (*(float *)(param_1 + 8) == 0.0)) {
    return;
  }
  if ((char)piVar2[0x37] == '\0') {
    pcVar3 = *(code **)(*piVar2 + 0x88);
  }
  else {
    if ((char)piVar2[0x37] != '\x03') {
      (**(code **)(*piVar2 + 0x88))(piVar2);
      goto LAB_0029d820;
    }
    cVar1 = *(char *)(param_1 + 0xc);
    fn_006f6578(piVar2);
    if (cVar1 != '\0') {
      fn_006f6534(piVar2);
    }
    pcVar3 = *(code **)(*piVar2 + 0x88);
  }
  (*pcVar3)(piVar2);
LAB_0029d820:
  (**(code **)(*piVar2 + 0x34))(piVar2);
                    /* WARNING: Could not recover jumptable at 0x0029d848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xd0))(piVar2,piVar2 + 8);
  return;
}



void fn_0029d704(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &DAT_0081e58c;
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    uVar3 = 0x10;
    do {
      uVar1 = fn_00182994(DAT_008977e4);
      fn_00174fc0(uVar1,uVar3 & 0xff);
      uVar3 = (uint)(char)((char)uVar3 + '\x01');
    } while ((int)uVar3 < 0x18);
    uVar2 = *(uint *)(iVar4 + 0x34);
    uVar3 = uVar2;
    if (*(uint *)(iVar4 + 0x38) <= uVar2) {
      for (; uVar3 != *(uint *)(iVar4 + 0x38); uVar3 = uVar3 + 4) {
      }
    }
    fn_001008c4(uVar2,(int)(*(int *)(iVar4 + 0x3c) - uVar2) >> 2,0);
    fn_002feef8(iVar4);
  }
  fn_002feef8(param_1);
  return;
}



void fn_0029d4a4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  undefined4 in_s4;
  undefined4 in_s5;
  undefined4 in_s6;
  undefined4 in_s7;
  undefined4 in_s8;
  undefined4 in_s9;
  undefined4 in_s10;
  undefined4 in_s11;
  undefined4 in_s12;
  undefined4 in_s13;
  undefined4 in_s14;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar5 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar5 + 0x40) = in_s0;
  *(undefined4 *)(iVar5 + 0x44) = in_s1;
  *(undefined4 *)(iVar5 + 0x48) = in_s2;
  *(undefined4 *)(iVar5 + 0x4c) = in_s3;
  *(undefined4 *)(iVar5 + 0x50) = in_s4;
  *(undefined4 *)(iVar5 + 0x54) = in_s5;
  *(undefined4 *)(iVar5 + 0x58) = in_s6;
  *(undefined4 *)(iVar5 + 0x5c) = in_s7;
  *(undefined4 *)(iVar5 + 0x60) = in_s8;
  *(undefined4 *)(iVar5 + 100) = in_s9;
  *(undefined4 *)(iVar5 + 0x68) = in_s10;
  *(undefined4 *)(iVar5 + 0x6c) = in_s11;
  *(undefined4 *)(iVar5 + 0x70) = in_s12;
  *(undefined4 *)(iVar5 + 0x74) = in_s13;
  *(undefined4 *)(iVar5 + 0x78) = in_s14;
  *(undefined4 *)(iVar5 + 0x7c) = in_stack_00000000;
  *(undefined4 *)(iVar5 + 0x80) = in_stack_00000004;
  *(undefined4 *)(iVar5 + 0x84) = in_stack_00000008;
  fn_00182994(DAT_008977e4);
  uVar2 = fn_00165248();
  *(undefined4 *)(iVar5 + 4) = uVar2;
  uVar2 = fn_00182994(DAT_008977e4);
  fn_001657c8(uVar2,0);
  iVar3 = fn_0061be08();
  *(char *)(iVar5 + 0x1c) = (char)iVar3;
  uVar1 = fn_00608d34(iVar3 == 0);
  *(undefined1 *)(iVar5 + 2) = uVar1;
  uVar1 = fn_00608d34((int)*(char *)(iVar5 + 0x1c));
  *(undefined1 *)(iVar5 + 3) = uVar1;
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF000_12_MONSTER_DEATH_008c5146);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF000_14_SMOKE_FOOT_008c515d);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF010_01_HIT_008c5171);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF010_02_HIT_KAISHIN_008c517e);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF120_01_HOIMI_008c5193);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_01_BAIKIRUTO_008c51a2);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_03_HENATOSU_008c51b5);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_05_SUKARA_008c51c7);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_07_RUKANI_008c51d7);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_09_PIORA_008c51e7);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_11_BOMIE_008c51f6);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_13_INTE_008c5205);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF130_15_FOOL_008c5213);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF000_16_COMBO_SCREEN_008c5221);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar4 + 0x40))(piVar4,s_EF000_17_COMBO_PART_008c5237);
  uVar6 = 0x10;
  do {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00174fc0(uVar2,uVar6 & 0xff);
    uVar6 = (uint)(char)((char)uVar6 + '\x01');
  } while ((int)uVar6 < 0x18);
  return;
}


