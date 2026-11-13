#include "00229474_00229d40.h"



void fn_00229d40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + param_2 * 0xc + 0xb0 + iVar1 * 4) != 0) {
      fn_00688a74();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



void fn_00229bd8(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *local_30;
  undefined4 local_2c [2];
  
  piVar5 = *(int **)(param_1 + 4);
  uVar4 = piVar5[1] - *piVar5 >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,param_2,uVar4);
  }
  uVar2 = *(undefined4 *)(*piVar5 + param_2 * 4);
  fn_0031b764(uVar2,1);
  uVar4 = 0;
  uVar6 = 0;
  do {
    iVar3 = (int)*(short *)(param_3 + uVar6 * 2);
    if (0 < iVar3) {
      fn_002301d8(&local_30,uVar6 & 0xff,iVar3,1,0);
      uVar1 = (&DAT_007c7d2c)[uVar4];
      fn_0031b6ec(uVar2,uVar1,1);
      fn_0031b7c4(uVar2,uVar1,local_30);
      local_2c[0] = *param_4;
      fn_0031b590(uVar2,uVar1,local_2c);
      uVar4 = uVar4 + 1;
      if (local_30 != &DAT_008f9cf4) {
        piVar5 = local_30 + -3;
        iVar3 = *piVar5;
        if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  for (; uVar4 < 3; uVar4 = uVar4 + 1) {
    fn_0031b7c4(uVar2,(&DAT_007c7d2c)[uVar4],&DAT_00229d3c);
  }
  return;
}



void fn_00229ae0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined1 *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *local_2c [2];
  
  iVar3 = 0;
  uVar4 = 0;
  do {
    iVar2 = (int)*(short *)(param_3 + uVar4 * 2);
    if ((param_4 != 0) || (0 < iVar2)) {
      fn_002301d8(local_2c,uVar4 & 0xff,iVar2,*param_6,0);
      fn_00190d50(*(undefined4 *)(param_1 + iVar3 * 4),local_2c[0]);
      iVar3 = iVar3 + 1;
      if (local_2c[0] != &DAT_008f9cf4) {
        piVar1 = local_2c[0] + -3;
        iVar2 = *piVar1;
        if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  iVar2 = 0;
  if (param_5 != 0) {
    iVar2 = iVar3 - param_2;
  }
  if (iVar2 < 0 != (param_5 != 0 && SBORROW4(iVar3,param_2))) {
    do {
      fn_00190d50(*(undefined4 *)(param_1 + iVar3 * 4),&DAT_00229bd4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return;
}



void fn_00229a50(int param_1,int param_2,short param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = fn_00250280();
  psVar3 = (short *)(*(int *)(param_1 + 4) + param_2 * 2);
  *psVar3 = *psVar3 + param_3;
  iVar4 = fn_00660fe0(param_2);
  if (iVar4 < *(short *)(*(int *)(param_1 + 4) + param_2 * 2)) {
    uVar1 = fn_00660fe0(param_2);
    *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 2) = uVar1;
  }
  fn_002507f8(uVar2);
  fn_00144834(0x200,1);
  fn_00289e9c(*(undefined4 *)(DAT_00897804 + 0x24),param_2);
  return;
}



undefined4 fn_00229950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_001746f4();
  if (0 < iVar1) {
    do {
      iVar1 = fn_00163940(iVar3);
      if (iVar1 != 0) {
        if (((iVar3 == 0x30 || iVar3 == 0x43) && (DAT_00897804 != 0)) &&
           (iVar2 = fn_00250280(), iVar1 = DAT_00897804, iVar2 != 0)) {
          *(undefined2 *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60) = 0;
          *(undefined2 *)(*(int *)(*(int *)(iVar1 + 0x14) + 4) + 0x86) = 0;
          fn_0025bddc(*(undefined4 *)(iVar1 + 8));
          fn_002507f8(0);
        }
        if (((0 < *(short *)(*(int *)(param_1 + 4) + iVar3 * 2)) &&
            (iVar1 = fn_00660e88(iVar3), iVar1 != 0)) &&
           ((iVar1 = fn_00660ec0(iVar3), iVar1 != 0x16 || (param_2 == 0)))) {
          return 1;
        }
      }
      iVar3 = (int)(short)((short)iVar3 + 1);
      iVar1 = fn_001746f4();
    } while (iVar3 < iVar1);
  }
  return 0;
}



int fn_002298d8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar1 = fn_00660f10(param_2);
  if (*(short *)(*(int *)(param_1 + 4) + 0x7a) != 0) {
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = (int)(fVar3 * 0.8);
  }
  iVar2 = fn_00154ac8(0x27c);
  if (iVar2 != 0) {
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = (int)(fVar3 * 0.5);
  }
  return iVar1;
}



void fn_0022983c(int param_1,int param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 2) = 0;
  return;
}



void fn_002297bc(int param_1,int param_2,short param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = fn_00250280();
  psVar3 = (short *)(*(int *)(param_1 + 4) + param_2 * 2);
  *psVar3 = *psVar3 - param_3;
  iVar4 = fn_00660fe0(param_2);
  if (iVar4 < *(short *)(*(int *)(param_1 + 4) + param_2 * 2)) {
    uVar1 = fn_00660fe0(param_2);
    *(undefined2 *)(*(int *)(param_1 + 4) + param_2 * 2) = uVar1;
  }
  psVar3 = (short *)(*(int *)(param_1 + 4) + param_2 * 2);
  if (*psVar3 < 0) {
    *psVar3 = 0;
  }
  fn_002507f8(uVar2);
  return;
}



int fn_00229714(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  iVar1 = 0;
  do {
    if (*(int *)(iVar2 + iVar1 * 0x1c) == 0) {
      piVar3 = (int *)(iVar2 + iVar1 * 0x1c);
LAB_00229778:
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      iVar1 = *(int *)(iVar2 + 0xaf0) + 1;
      *(int *)(iVar2 + 0xaf0) = iVar1;
      *piVar3 = iVar1;
      *(undefined1 *)(piVar3 + 1) = param_2;
      fn_0025b440(*(undefined4 *)(DAT_00897804 + 8),1);
      return *piVar3;
    }
    if (*(int *)(iVar2 + iVar1 * 0x1c + 0x1c) == 0) {
      piVar3 = (int *)(iVar2 + iVar1 * 0x1c + 0x1c);
      goto LAB_00229778;
    }
    iVar1 = iVar1 + 2;
    if (99 < iVar1) {
      return 0;
    }
  } while( true );
}



void fn_00229654(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_00114248(&local_20);
  local_28 = local_20;
  uStack_24 = uStack_1c;
  uVar1 = fn_0011a36c(&local_28);
  uVar2 = fn_0011a3c4(&local_28);
  iVar3 = fn_0011a314(&local_28);
  uVar4 = fn_00129e2c(&local_28);
  uVar5 = fn_00129e94(&local_28);
  uVar6 = fn_00129f00(&local_28);
  *(uint *)(*param_1 + 0xb10) = uVar1 & 0xffff | (uVar2 & 0xff) << 0x10 | iVar3 << 0x18;
  *(uint *)(*param_1 + 0xb14) = (uVar6 & 0xff) << 0x10 | uVar4 & 0xff | (uVar5 & 0xff) << 8;
  *(undefined1 *)(*param_1 + 0xb18) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00229524) */
/* WARNING: Removing unreachable block (ram,0x00229510) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_00229474(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  
  iVar1 = *param_1;
  puVar8 = (uint *)(iVar1 + 0xaf8);
  uVar2 = fn_00121630();
  fn_00114248(&local_58);
  local_48 = local_58;
  uStack_44 = local_54;
  fn_00257c24(&local_58,iVar1 + 0xb08,iVar1 + 0xb0c,&local_48);
  local_40 = local_58;
  uStack_3c = local_54;
  local_58 = 0x1c;
  uVar9 = fn_00129f6c(&local_40,local_54,0x68fd3d1d,0x12533fe);
  iVar1 = fn_0011c134((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),5,0);
  if (iVar1 != 0) {
    local_54 = iVar1 + *puVar8;
    *puVar8 = local_54;
    local_58 = 0;
    local_50 = uVar2;
    puVar3 = &local_54;
    if (uVar2 < local_54) {
      puVar3 = &local_50;
    }
    *puVar8 = *puVar3;
    uVar2 = fn_0011a36c(&local_48);
    uVar4 = fn_0011a3c4(&local_48);
    iVar1 = fn_0011a314(&local_48);
    uVar5 = fn_00129e2c(&local_48);
    uVar6 = fn_00129e94(&local_48);
    uVar7 = fn_00129f00(&local_48);
    *(uint *)(*param_1 + 0xb08) = uVar2 & 0xffff | (uVar4 & 0xff) << 0x10 | iVar1 << 0x18;
    *(uint *)(*param_1 + 0xb0c) = (uVar7 & 0xff) << 0x10 | uVar5 & 0xff | (uVar6 & 0xff) << 8;
  }
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0xb18) != '\0') {
    fn_00114248(&local_30);
    local_38 = local_30;
    uStack_34 = uStack_2c;
    fn_00257c24(&local_50,iVar1 + 0xb10,iVar1 + 0xb14,&local_38);
    local_28 = local_50;
    uStack_24 = uStack_4c;
    local_58 = 0x29;
    uVar9 = fn_00129f6c(&local_28,uStack_4c,0xed75ed55,0x9c5fff26);
    if ((int)(uint)((uint)uVar9 < 0x18) <= (int)((ulonglong)uVar9 >> 0x20)) {
      *(undefined1 *)(iVar1 + 0xb18) = 0;
      *(undefined4 *)(iVar1 + 0xb10) = 0;
      *(undefined4 *)(iVar1 + 0xb14) = 0;
    }
  }
  return;
}


