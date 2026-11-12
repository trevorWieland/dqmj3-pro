#include "0037745c_00377814.h"



void fn_00377814(int param_1)

{
  fn_005a8828(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_002d4dd4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_0040451c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_00405724(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_003cfa74(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_003553d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_00313864(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  fn_00313870(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74),0xb,0x12);
  return;
}



void fn_00377784(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 0x80;
    fn_00422178(iVar4 + 0x84,param_2);
    cVar1 = *(char *)(param_1 + 0x285);
    param_2 = extraout_r1;
    if (cVar1 != -1) {
      if (cVar1 == '\0') {
        fn_004220ec(iVar4 + 0x84,0);
        param_2 = extraout_r1_00;
      }
      else {
        if (cVar1 == '\x01') {
          if (iVar3 == 0) {
            uVar2 = 1;
          }
          else {
            uVar2 = 2;
          }
        }
        else {
          if (cVar1 != '\x02') goto LAB_003777fc;
          uVar2 = 2;
        }
        fn_004220ec(iVar4 + 0x84,uVar2);
        param_2 = extraout_r1_01;
      }
    }
LAB_003777fc:
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      *(undefined1 *)(param_1 + 0x284) = 2;
      return;
    }
  } while( true );
}



void fn_0037747c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_38 [5];
  
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_64 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar7 = 0;
  local_50 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  fn_00102908(&local_80,0x40,(char *)&DAT_0085e05c);
  piVar8 = &DAT_008977e4;
  cVar6 = '\x14';
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + cVar6 * 0x418;
    if (0 < *(short *)(iVar2 + -0x4080)) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar10 = cVar1 != '\0';
      if (!bVar10) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      if ((bVar10 || cVar1 != '\0') || (*(char *)(iVar2 + -0x4018) != '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      iVar9 = cVar6 + -0x14;
      iVar3 = param_1 + iVar9 * 0x80;
      fn_001003f2(&local_80,*(undefined4 *)(&DAT_007bb634 + *(char *)(iVar2 + -0x4027) * 4));
      if (bVar10) {
        *(undefined1 *)(iVar3 + 0xfd) = 1;
        *(short **)(iVar3 + 0x100) = (short *)(iVar2 + -0x4080);
      }
      else {
        *(undefined4 *)(iVar3 + 0x100) = 0;
      }
      local_38[iVar7] = iVar9;
      iVar7 = iVar7 + 1;
    }
    cVar6 = cVar6 + '\x01';
  } while (cVar6 < '\x18');
  uVar5 = 0;
  do {
    iVar2 = fn_003035b0(&local_80,(&DAT_007bb648)[uVar5]);
    if (iVar2 == 0) {
      fn_00102908(&local_80,0x40,(char *)&DAT_0085e078);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  bVar10 = false;
  uVar5 = 0;
  do {
    iVar2 = fn_003035b0(&local_80,(&DAT_007bb620)[uVar5]);
    if (iVar2 == 0) {
      if (uVar5 == 0) {
        fn_004220ec(param_1 + 0x84,1);
        fn_004220ec(param_1 + 0x104,0);
      }
      else {
        fn_004220ec(param_1 + 0x84,0);
        fn_004220ec(param_1 + 0x104,2);
      }
      bVar10 = true;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  if ((!bVar10) && (uVar5 = 0, 0 < iVar7)) {
    do {
      fn_004220ec(param_1 + uVar5 * 0x80 + 0x84,0);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar7);
  }
  uVar4 = fn_001828f0(*(undefined4 *)(param_1 + 0x6c),&local_80);
  iVar2 = 0;
  if (0 < iVar7) {
    uVar5 = 0;
    piVar8 = local_38;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  if (0 < iVar7) {
    do {
      iVar9 = piVar8[iVar2];
      local_c0 = uVar5;
      local_bc = uVar5;
      local_b8 = uVar5;
      local_b4 = uVar5;
      local_b0 = uVar5;
      local_ac = uVar5;
      local_a8 = uVar5;
      local_a4 = uVar5;
      local_a0 = uVar5;
      local_9c = uVar5;
      local_98 = uVar5;
      local_94 = uVar5;
      local_90 = uVar5;
      local_8c = uVar5;
      local_88 = uVar5;
      local_84 = uVar5;
      fn_00102908(&local_c0,0x40,(char *)&DAT_0037777c,&local_80,iVar9);
      iVar3 = fn_00689210(*(undefined4 *)(param_1 + 0x7c),&local_c0);
      fn_00422214(param_1 + iVar9 * 0x80 + 0x84,iVar3 + 0x1c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar7);
  }
  return;
}



void fn_0037745c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_38 [5];
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x6c) + 0x10);
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  *(undefined1 *)(param_1 + 0x284) = 1;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iVar5 = 0;
  uStack_50 = 0;
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  aiStack_38[2] = 0;
  aiStack_38[3] = 0;
  fn_00102908(&uStack_80,0x40,"Null_target_");
  piVar8 = &DAT_008977e4;
  cVar7 = '\x14';
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + cVar7 * 0x418;
    if (0 < *(short *)(iVar2 + -0x4080)) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar10 = cVar1 != '\0';
      if (!bVar10) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      if ((bVar10 || cVar1 != '\0') || (*(char *)(iVar2 + -0x4018) != '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      iVar9 = cVar7 + -0x14;
      iVar3 = param_1 + iVar9 * 0x80;
      fn_001003f2(&uStack_80,*(undefined4 *)(&DAT_007bb634 + *(char *)(iVar2 + -0x4027) * 4));
      if (bVar10) {
        *(undefined1 *)(iVar3 + 0xfd) = 1;
        *(short **)(iVar3 + 0x100) = (short *)(iVar2 + -0x4080);
      }
      else {
        *(undefined4 *)(iVar3 + 0x100) = 0;
      }
      aiStack_38[iVar5] = iVar9;
      iVar5 = iVar5 + 1;
    }
    cVar7 = cVar7 + '\x01';
  } while (cVar7 < '\x18');
  uVar6 = 0;
  do {
    iVar2 = fn_003035b0(&uStack_80,(&DAT_007bb648)[uVar6]);
    if (iVar2 == 0) {
      fn_00102908(&uStack_80,0x40,"Null_target_MGTcommon");
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  bVar10 = false;
  uVar6 = 0;
  do {
    iVar2 = fn_003035b0(&uStack_80,(&DAT_007bb620)[uVar6]);
    if (iVar2 == 0) {
      if (uVar6 == 0) {
        fn_004220ec(param_1 + 0x84,1);
        fn_004220ec(param_1 + 0x104,0);
      }
      else {
        fn_004220ec(param_1 + 0x84,0);
        fn_004220ec(param_1 + 0x104,2);
      }
      bVar10 = true;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  if ((!bVar10) && (uVar6 = 0, 0 < iVar5)) {
    do {
      fn_004220ec(param_1 + uVar6 * 0x80 + 0x84,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
  uVar4 = fn_001828f0(*(undefined4 *)(param_1 + 0x6c),&uStack_80);
  iVar2 = 0;
  if (0 < iVar5) {
    uVar6 = 0;
    piVar8 = aiStack_38;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  if (0 < iVar5) {
    do {
      iVar9 = piVar8[iVar2];
      uStack_c0 = uVar6;
      uStack_bc = uVar6;
      uStack_b8 = uVar6;
      uStack_b4 = uVar6;
      uStack_b0 = uVar6;
      uStack_ac = uVar6;
      uStack_a8 = uVar6;
      uStack_a4 = uVar6;
      uStack_a0 = uVar6;
      uStack_9c = uVar6;
      uStack_98 = uVar6;
      uStack_94 = uVar6;
      uStack_90 = uVar6;
      uStack_8c = uVar6;
      uStack_88 = uVar6;
      uStack_84 = uVar6;
      fn_00102908(&uStack_c0,0x40,"%s_%02d",&uStack_80,iVar9);
      iVar3 = fn_00689210(*(undefined4 *)(param_1 + 0x7c),&uStack_c0);
      fn_00422214(param_1 + iVar9 * 0x80 + 0x84,iVar3 + 0x1c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  return;
}


