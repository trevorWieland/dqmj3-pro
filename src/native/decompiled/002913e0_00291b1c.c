#include "002913e0_00291b1c.h"



void fn_00291b1c(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_9b8 [4];
  char *local_9b4;
  undefined4 local_9ac;
  undefined2 local_9a8;
  undefined4 local_9a0;
  undefined4 local_99c;
  undefined1 local_998;
  undefined2 local_996;
  short local_994;
  undefined1 local_992;
  undefined1 local_991;
  undefined1 auStack_98a [24];
  undefined1 auStack_972 [30];
  undefined1 auStack_954 [240];
  undefined1 auStack_864 [240];
  undefined1 auStack_774 [240];
  undefined1 auStack_684 [240];
  undefined1 auStack_594 [240];
  undefined1 auStack_4a4 [240];
  undefined1 auStack_3b4 [240];
  undefined1 auStack_2c4 [240];
  undefined1 local_1d4;
  undefined1 auStack_1d0 [104];
  undefined1 auStack_168 [4];
  char *local_164;
  undefined4 local_15c;
  undefined2 local_158;
  uint local_150;
  undefined1 local_148;
  undefined2 local_146;
  short local_144;
  undefined1 local_142;
  undefined1 local_141;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_cc;
  undefined2 local_ca;
  
  if (*(char *)(param_1 + 0xa70) != '\0') {
    fn_001cff74(auStack_168);
    local_15c = 0x1000018;
    local_164 = "bf_O00_08";
    local_150 = local_150 | 0x425;
    local_146 = *(undefined2 *)(param_1 + 0x120);
    local_142 = *(undefined1 *)(param_1 + 0x514);
    local_144 = (short)*(char *)(param_1 + 0x516);
    local_141 = *(undefined1 *)(param_1 + 0x515);
    local_148 = 6;
    local_158 = 5;
    local_138 = *(undefined2 *)(param_1 + 0xa78);
    local_136 = *(undefined2 *)(param_1 + 0x170);
    local_114 = *(undefined2 *)(param_1 + 0xa7a);
    local_112 = *(undefined2 *)(param_1 + 0x260);
    local_f0 = *(undefined2 *)(param_1 + 0xa7c);
    local_ee = *(undefined2 *)(param_1 + 0x350);
    local_cc = *(undefined2 *)(param_1 + 0xa7e);
    local_ca = *(undefined2 *)(param_1 + 0x440);
    uVar1 = fn_00154ae0(DAT_008977e4);
    fn_001d235c(uVar1,auStack_168);
    return;
  }
  fn_0012e864(auStack_9b8);
  local_9a0 = 0x424;
  local_9b4 = "bf_O00_08";
  local_9ac = 0x1000018;
  if ((*(byte *)(param_1 + 0xa74) & 4) != 0) {
    local_9a0 = 0x425;
  }
  local_99c = 0;
  local_996 = *(undefined2 *)(param_1 + 0x120);
  local_992 = *(undefined1 *)(param_1 + 0x514);
  local_994 = (short)*(char *)(param_1 + 0x516);
  local_991 = *(undefined1 *)(param_1 + 0x515);
  local_998 = 6;
  local_9a8 = 5;
  fn_00101144(auStack_98a,param_1 + 4,0xc);
  if (*(char *)(param_1 + 100) != '\0') {
    local_1d4 = 1;
    fn_0017821c(auStack_1d0,param_1 + 0x68,0x60);
  }
  fn_0029432c(param_1 + 4,auStack_972);
  fn_0017821c(auStack_954,param_1 + 0x154,0xf0);
  fn_0017821c(auStack_594,param_1 + 0x518,0xf0);
  fn_0017821c(auStack_864,param_1 + 0x244,0xf0);
  fn_0017821c(auStack_4a4,param_1 + 0x608,0xf0);
  fn_0017821c(auStack_774,param_1 + 0x334,0xf0);
  fn_0017821c(auStack_3b4,param_1 + 0x6f8,0xf0);
  fn_0017821c(auStack_684,param_1 + 0x424,0xf0);
  fn_0017821c(auStack_2c4,param_1 + 0x7e8,0xf0);
  uVar1 = fn_00154ae0(DAT_008977e4);
  fn_001d2340(uVar1,auStack_9b8);
  return;
}



bool fn_00291ae4(void)

{
  int iVar1;
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    fn_002d6900(DAT_00897820);
  }
  return iVar1 == 2;
}



bool fn_00291ad4(int param_1)

{
  return param_1 == 6;
}



void fn_00291a64(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  fn_0012a2d8(param_2);
  if (*(char *)(param_1 + 0xa70) == '\0') {
    uVar1 = fn_00246ec4(param_1 + 0x154,4);
  }
  else {
    uVar1 = fn_002473c0(*(undefined4 *)(param_1 + 0xa84));
  }
  if (8 < uVar1) {
    uVar1 = 8;
  }
  fn_00166824(param_2,&UNK_007c8942 + uVar1 * 8);
  return;
}



int fn_002919ec(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}



undefined4 * fn_002919b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00128f40();
  }
  param_1[1] = uVar2;
  return param_1;
}



void fn_00291888(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00128e7c(*(undefined4 *)(param_1 + 4),DAT_0089101c,param_3 + param_2 * 4);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24));
  if (iVar2 == 0) {
    fn_0022f584(DAT_00891024,0);
    return;
  }
  fn_0015b064((int)(short)iVar1);
  return;
}



void fn_00291828(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  uVar1 = fn_00128e7c(*(undefined4 *)(param_1 + 4),DAT_0089101c,param_2 * 4 + 1);
  fn_00301f50(auStack_90,0x80);
  fn_0017d96c(auStack_90,0x80,0x7f,DAT_00891028,uVar1);
  fn_0022f584(auStack_90,0);
  return;
}



void fn_0029180c(int param_1,int param_2)

{
  fn_00128e7c(*(undefined4 *)(param_1 + 4),DAT_0089101c,param_2 * 4 + 3);
  return;
}



undefined4 * fn_002916ec(undefined4 *param_1)

{
  *param_1 = &DAT_0081e4bc;
  param_1[1] = &DAT_008f9cf4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_008f9cf4;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  fn_0017a1d4(param_1);
  return param_1;
}



undefined4 fn_00291670(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar3 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar3;
  if (*(int *)(*(int *)(param_1 + 4) + -4) == iVar3) {
    uVar1 = 0;
  }
  else {
    psVar2 = (short *)fn_00785320(param_1 + 4);
    iVar3 = *(int *)(param_1 + 0xc);
    if (*psVar2 == 10) {
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0xc) = iVar3;
    }
    *(int *)(param_1 + 8) = iVar3;
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return uVar1;
}



void fn_00291578(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



/* WARNING: Removing unreachable block (ram,0x0029145c) */

int fn_002913e0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar7 = 0;
  iVar9 = 1;
  uVar8 = *(uint *)(*(int *)(param_1 + 4) + -4);
  if (uVar8 != 0) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 4);
      piVar6 = (int *)(param_1 + 4);
      if (1 < puVar1[-3] + 1) {
        uVar5 = puVar1[-1];
        if (0xfffffff1 < uVar5) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
        }
        if (uVar5 == 0) {
          puVar1 = &DAT_008f9ce8;
        }
        else {
          puVar1 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
          }
          puVar3 = (undefined2 *)((int)puVar1 + uVar5 * 2 + 0xc);
          *puVar1 = 0;
          puVar1[1] = uVar5;
          puVar1[2] = uVar5;
          if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
          }
        }
        fn_00301a9c(puVar1 + 3,*piVar6,*(int *)(*piVar6 + -4) << 1);
        if ((undefined4 *)*piVar6 != &DAT_008f9cf4) {
          piVar2 = (undefined4 *)*piVar6 + -3;
          iVar4 = *piVar2;
          if ((iVar4 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
            fn_001008c4(*piVar6 + -0xc,*(int *)(*piVar6 + -8) + 8,0);
          }
        }
        puVar1 = puVar1 + 3;
        *piVar6 = (int)puVar1;
      }
      if (puVar1 + -3 != &DAT_008f9ce8) {
        puVar1[-3] = 0xffffffff;
      }
      iVar4 = uVar7 * 2;
      uVar7 = uVar7 + 1;
      if (*(short *)(*piVar6 + iVar4) == 0x101) {
        iVar9 = iVar9 + 1;
      }
    } while (uVar7 < uVar8);
  }
  return iVar9;
}


