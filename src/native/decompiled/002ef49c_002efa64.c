#include "002ef49c_002efa64.h"



void fn_002efa64(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002f1bd8(iVar1,puVar5,0xffffffff);
    piVar2[0x19] = 0;
    *piVar2 = (int)&DAT_00851eac;
    piVar2[0x18] = (int)&DAT_00851ed8;
  }
  piVar4 = (int *)*puVar5;
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *puVar5 = piVar2;
    piVar4 = piVar2;
  }
  uVar3 = fn_0068cab0(DAT_008977e8);
  uVar3 = fn_006c7ff8(uVar3,0);
  (**(code **)(*piVar4 + 0xc))(piVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x002efb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*puVar5 + 0x10))();
  return;
}



void fn_002ef9e4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002f1bd8(iVar1,puVar4,0);
    piVar2[0x19] = 0;
    *piVar2 = (int)&DAT_00851eac;
    piVar2[0x18] = (int)&DAT_00851ed8;
  }
  piVar3 = (int *)*puVar4;
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *puVar4 = piVar2;
  }
  puVar4[4] = 1;
  return;
}



void fn_002ef9dc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x22c) + 4);
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002f1bd8(iVar1,puVar4,0);
    piVar2[0x19] = 0;
    *piVar2 = (int)&DAT_00851eac;
    piVar2[0x18] = (int)&DAT_00851ed8;
  }
  piVar3 = (int *)*puVar4;
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *puVar4 = piVar2;
  }
  puVar4[4] = 1;
  return;
}



undefined4 * fn_002ef988(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_002ef928(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  
  param_1 = (undefined4 *)*param_1;
  if (*(char *)(param_1 + 6) == '\0') {
    iVar1 = fn_001088e0(*param_1,param_1[5]);
    iVar2 = fn_00154a6c();
    if (iVar2 != 0) {
      uVar3 = fn_00176970(iVar1);
      uVar3 = VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  fn_0023e6c8(param_1[7]);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002ef5f4) */
/* WARNING: Removing unreachable block (ram,0x002ef600) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x002ef608 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_002ef49c(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint in_fpscr;
  int *local_7c;
  int *local_78;
  int *local_74;
  char *local_70 [4];
  char *local_60 [4];
  char *local_50 [4];
  char *local_40 [4];
  undefined4 local_30;
  
  param_1 = (undefined4 *)*param_1;
  *param_1 = param_2;
  uVar2 = fn_001481c8(param_2,DAT_00896f18,&DAT_008c54b2,1,1);
  param_1[1] = uVar2;
  uVar2 = fn_001480d0(*param_1,uVar2,DAT_00896f20,&DAT_008c54b4,0,1);
  param_1[2] = uVar2;
  uVar2 = fn_001481c8(*param_1,DAT_00896f1c,&DAT_008c54b2,1,1);
  param_1[3] = uVar2;
  uVar2 = fn_001480d0(*param_1,uVar2,DAT_00896f24,&DAT_008c54b4,0,1);
  param_1[4] = uVar2;
  uVar2 = fn_0010887c(*param_1,param_1[1],DAT_00896f28,param_1[2]);
  param_1[5] = uVar2;
  iVar3 = fn_00178f9c(*param_1,param_1[2]);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  iVar3 = fn_00178f9c(*param_1,param_1[4]);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  local_70[0] = s_winner_player_p1_008c54b5;
  local_70[1] = s_winner_player_p2_008c54c6;
  local_70[2] = s_winner_player_p3_008c54d7;
  local_70[3] = s_winner_player_p4_008c54e8;
  local_60[0] = s_winner_player_p1_00_008c54f9;
  local_60[1] = s_winner_player_p2_00_008c550d;
  local_60[2] = s_winner_player_p3_00_008c5521;
  local_60[3] = s_winner_player_p4_00_008c5535;
  local_50[0] = s_Null_blue_008c5549;
  local_50[1] = s_Null_red_008c5553;
  local_50[2] = s_Null_yellow_008c555c;
  local_50[3] = s_Null_green_008c5568;
  local_7c = (int *)0x0;
  local_78 = (int *)0x0;
  local_74 = (int *)0x0;
  local_40[0] = s_Null_rrbg_blue_008c5573;
  local_40[1] = s_Null_rrbg_red_008c5582;
  local_40[2] = s_Null_rrbg_yellow_008c5590;
  local_40[3] = s_Null_rrbg_green_008c55a1;
  local_30 = 0x20;
  piVar5 = (int *)fn_00100fc6(0x80,0);
  piVar9 = piVar5;
  for (piVar10 = local_7c; piVar10 != local_78; piVar10 = piVar10 + 1) {
    if (piVar9 != (int *)0x0) {
      *piVar9 = *piVar10;
    }
    piVar9 = piVar9 + 1;
  }
  piVar10 = local_7c;
  if (local_78 < local_7c) {
    do {
      piVar10 = piVar10 + 1;
    } while (piVar10 != local_78);
  }
  fn_001008c4(local_7c,(int)local_74 - (int)local_7c >> 2,0);
  local_78 = (int *)(((int)local_78 - (int)local_7c & 0xfffffffcU) + (int)piVar5);
  local_74 = piVar5 + 0x20;
  local_7c = piVar5;
  uVar6 = fn_00144810(DAT_008977e8);
  uVar6 = fn_0014495c(uVar6,0);
  uVar7 = fn_0014481c(DAT_008977e8);
  fn_00144ac0(uVar7,uVar6,&local_7c);
  iVar3 = *local_7c;
  uVar11 = 0;
  bVar1 = *(byte *)(iVar3 + 0x104);
  do {
    if (uVar11 != bVar1) {
      iVar8 = fn_00689210(uVar2,local_70[uVar11]);
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
      iVar8 = fn_00689210(uVar2,local_70[uVar11 + 4]);
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
      iVar8 = fn_00689210(uVar2,local_70[uVar11 + 8]);
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
      iVar8 = fn_00689210(uVar4,local_70[uVar11 + 0xc]);
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 4);
  uVar2 = fn_0068897c(uVar2,s_tb_name_008c55b1);
  uVar4 = fn_006f83f4(iVar3);
  fn_00190d50(uVar2,uVar4);
  *(undefined1 *)(param_1 + 6) = 0;
  uVar11 = 0;
  iVar3 = (int)local_78 - (int)local_7c >> 2;
  VectorUnsignedToFloat((iVar3 + -1) * 0x1e,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar3 != 0) {
    do {
      VectorSignedToFloat(uVar11 * 0x1e,(byte)(in_fpscr >> 0x16) & 3);
      fn_006a34f4(local_7c[uVar11],uVar11 * 0x1e);
      fn_0018d034(local_7c[uVar11]);
      (**(code **)(*(int *)local_7c[uVar11] + 0xc))();
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)((int)local_78 - (int)local_7c >> 2));
  }
  iVar3 = fn_00145b00(0x40,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)fn_0023e8ec(iVar3,4);
  }
  piVar9 = (int *)param_1[7];
  if (piVar9 != piVar10) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    param_1[7] = piVar10;
    piVar9 = piVar10;
  }
  iVar3 = fn_00154ab4(DAT_008977e8);
  piVar9[1] = iVar3;
  fn_002a4648(param_1[7],0xc73f);
  fn_0023ddec(param_1[7],0xc73f);
  piVar10 = local_7c;
  if (local_78 < local_7c) {
    do {
      piVar10 = piVar10 + 1;
    } while (piVar10 != local_78);
  }
  fn_001008c4(local_7c,(int)local_74 - (int)local_7c >> 2,0);
  return;
}


