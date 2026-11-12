#include "005960bc_0059ec40.h"



undefined4 fn_0059ec40(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_74;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [4];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_54;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [28];
  undefined4 local_2c [2];
  
  puVar15 = (undefined4 *)param_1[6];
  if (puVar15 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar15)(puVar15);
    do {
      if (puVar2 == &DAT_008944a4) goto LAB_0059ec88;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar15 = (undefined4 *)0x0;
LAB_0059ec88:
  uVar6 = param_1[0x3c];
  uVar10 = param_1[0x3d];
  if (uVar6 != uVar10) {
    uVar3 = uVar6;
    if (uVar10 <= uVar6) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar10);
    }
    param_1[0x3d] = uVar10 - (uVar10 - uVar6 & 0xfffffffc);
  }
  cVar1 = *(char *)(puVar15 + 3);
  if (((cVar1 == '\x06' || cVar1 == '\a') || (cVar1 == '\x01' || cVar1 == '\x02')) ||
     (cVar1 == '\t')) {
    local_2c[0] = 0;
    puVar2 = (undefined4 *)param_1[0x3d];
    if (puVar2 == (undefined4 *)param_1[0x3e]) {
      fn_0079ce44(param_1 + 0x3c,puVar2,local_2c);
    }
    else {
      param_1[0x3d] = (int)(puVar2 + 1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
    }
    local_2c[0] = 2;
    puVar2 = (undefined4 *)param_1[0x3d];
    if (puVar2 == (undefined4 *)param_1[0x3e]) {
      fn_0079ce44(param_1 + 0x3c,puVar2,local_2c);
    }
    else {
      param_1[0x3d] = (int)(puVar2 + 1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 2;
      }
    }
  }
  else {
    iVar14 = 0;
    do {
      piVar12 = (int *)param_1[0x3d];
      puVar13 = (uint *)(param_1 + 0x3c);
      if (piVar12 == (int *)param_1[0x3e]) {
        uVar6 = (int)((int)piVar12 - *puVar13) >> 2;
        if (uVar6 < (uint)((int)(param_1[0x3e] - *puVar13) >> 2)) {
          param_1[0x3d] = (int)(piVar12 + 1);
          if (piVar12 != (int *)0x0) {
            *piVar12 = piVar12[-1];
          }
          piVar8 = piVar12 + -1;
          piVar9 = piVar12;
          if (piVar12 < piVar8) {
            iVar7 = (int)piVar8 - (int)piVar12;
            if (0 < iVar7) {
              if (iVar7 * 0x20000000 < 0) {
                piVar8 = piVar12 + -2;
                piVar9 = piVar12 + -1;
                *piVar9 = *piVar8;
              }
              for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
                piVar9[-1] = piVar8[-1];
                piVar8 = piVar8 + -2;
                piVar9 = piVar9 + -2;
                *piVar9 = *piVar8;
              }
            }
          }
          else {
            while (piVar12 != piVar8) {
              piVar8 = piVar8 + -1;
              piVar9[-1] = *piVar8;
              piVar9 = piVar9 + -1;
            }
          }
          *piVar12 = iVar14;
        }
        else {
          uVar10 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          if (uVar10 < uVar6 + 0x20) {
            uVar10 = uVar6 + 0x20;
          }
          piVar4 = (int *)fn_00100fc6(uVar10 << 2,0);
          piVar9 = piVar4;
          for (piVar8 = (int *)*puVar13; piVar8 != piVar12; piVar8 = piVar8 + 1) {
            if (piVar9 != (int *)0x0) {
              *piVar9 = *piVar8;
            }
            piVar9 = piVar9 + 1;
          }
          piVar8 = (int *)(((int)piVar12 - *puVar13 & 0xfffffffc) + (int)piVar4);
          if (piVar8 != (int *)0x0) {
            *piVar8 = iVar14;
          }
          piVar9 = (int *)param_1[0x3d];
          piVar8 = (int *)(((int)piVar12 - *puVar13 & 0xfffffffc) + (int)piVar4);
          for (; piVar12 != piVar9; piVar12 = piVar12 + 1) {
            piVar8 = piVar8 + 1;
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar12;
            }
          }
          uVar3 = param_1[0x3d];
          uVar11 = *puVar13;
          uVar6 = uVar11;
          if (uVar3 <= uVar11) {
            for (; uVar6 != uVar3; uVar6 = uVar6 + 4) {
            }
          }
          fn_001008c4(uVar11,(int)(param_1[0x3e] - uVar11) >> 2,0);
          param_1[0x3e] = (int)(piVar4 + uVar10);
          param_1[0x3d] = (int)(piVar4 + ((int)(uVar3 - uVar11) >> 2) + 1);
          *puVar13 = (uint)piVar4;
        }
      }
      else {
        param_1[0x3d] = (int)(piVar12 + 1);
        if (piVar12 != (int *)0x0) {
          *piVar12 = iVar14;
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
  }
  param_1[0x3a] = puVar15[2];
  iVar14 = fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10));
  fn_00397774(&local_88);
  local_88 = DAT_00894558;
  local_84 = DAT_0089455c;
  local_80 = param_1[0x3d] - param_1[0x3c] >> 2;
  local_7c = 0;
  local_74 = param_1[0x3d] - param_1[0x3c] >> 2;
  uVar5 = fn_0022f750(DAT_00894560);
  fn_00147974(auStack_6c,uVar5);
  local_5c = 0;
  local_54 = 1;
  local_5b = 0;
  fn_00147974(auStack_48,iVar14 + 4);
  fn_00397618(param_1,&local_88);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00100414(auStack_4c,&LAB_0059e0e0,8,4);
  iVar14 = fn_001588d4(auStack_60);
  iVar14 = fn_001588d4(iVar14 + -4);
  iVar14 = fn_001588d4(iVar14 + -4);
  fn_001588d4(iVar14 + -4);
  return 1;
}



void fn_005981a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_00406e9c();
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2);
  local_20 = uVar2;
  iVar3 = fn_0024e350(uVar2);
  if (iVar3 == 0) {
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x7c);
      iVar3 = fn_006ba4ec(uVar4);
      if ((iVar3 < 2) && (iVar3 = fn_006ba4ec(uVar4), iVar3 == 1)) {
        fn_00406c48(param_1,iVar1);
        goto LAB_00598254;
      }
    }
    fn_006bfda8(&local_20);
    iVar1 = fn_002429a4();
    if (iVar1 == 0) {
      fn_004081f0(param_1);
    }
    else {
      fn_004082a4(param_1,param_2);
    }
  }
  else {
    fn_00407140(param_1);
  }
LAB_00598254:
  fn_0025f3f4(*(undefined4 *)(param_1 + 0xc4),uVar2);
  fn_005d2adc(*(int *)(param_1 + 0xc4),(int)*(short *)(*(int *)(param_1 + 0xc4) + 0x1c));
  fn_005d2aac(*(undefined4 *)(param_1 + 0xc4));
  return;
}



void fn_00597828(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = fn_006c5b04(*(undefined4 *)(DAT_00897840 + 0x30));
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)fn_003a3abc(*(undefined4 *)(DAT_00897840 + 0x30),iVar6);
      uVar5 = puVar2[1];
      iVar3 = fn_002043cc(DAT_00897840,*puVar2);
      iVar4 = fn_002043cc(DAT_00897840,uVar5);
      fn_0031b78c(param_1,iVar6,3,*(undefined4 *)(iVar3 + 0xc));
      fn_0031b78c(param_1,iVar6,4,*(undefined4 *)(iVar4 + 0xc));
      uVar5 = fn_002525a0(0x50);
      fn_0031b78c(param_1,iVar6,5,uVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  fn_002c3e78(param_1);
  return;
}



void fn_005973c0(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  uint uVar5;
  
  iVar2 = fn_0066e158(DAT_00898840);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xe4) + 1;
    uVar5 = 0x96 - iVar2;
    *(int *)(param_1 + 0xe4) = iVar2;
    lVar1 = (longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20);
    iVar2 = (int)((ulonglong)lVar1 >> 0x20);
    iVar2 = (iVar2 >> 4) - (iVar2 >> 0x1f);
    if (*(int *)(param_1 + 0xe8) != iVar2) {
      *(int *)(param_1 + 0xe8) = iVar2;
      fn_0015b0f8(iVar2,(int)lVar1);
      uVar3 = fn_002525a0(0x51);
      fn_0059e074(param_1 + 0xb0,0,1,uVar3);
    }
    if (0x96 - *(int *)(param_1 + 0xe4) < 1) {
      uVar3 = fn_006c5b04(*(undefined4 *)(DAT_00897840 + 0x30));
      uVar4 = fn_005f65d4();
      fn_00300f74(uVar4,uVar3);
      uVar3 = fn_006c5c08(*(undefined4 *)(DAT_00897840 + 0x30),extraout_r1);
      *(undefined4 *)(*(int *)(DAT_00897840 + 0x30) + 0x20) = uVar3;
      fn_00689bd0(param_1,0,0);
      return;
    }
  }
  return;
}



void fn_005960bc(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_15c;
  undefined2 local_158;
  undefined1 local_156;
  undefined4 local_154;
  undefined1 auStack_150 [256];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28 [2];
  
  fn_005fbb70();
  puVar4 = *(undefined1 **)(*(int *)(param_1[0x48] + 0x3c) + 8);
  *puVar4 = 3;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x7a);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893d20) goto LAB_00596130;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00596130:
  fn_0037cb88(puVar1[2],puVar4);
  *(undefined1 *)(param_1[0x45] + 8) = 0;
  iVar3 = (**(code **)(**(int **)(param_1[0x48] + 0x48) + 0x14))();
  if (iVar3 == 0) {
    local_158 = 0;
    local_15c = 0;
    local_156 = 1;
    local_154 = 0;
    fn_00301f50(auStack_150,0x100);
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_44 = 0;
    local_34 = 0;
    iVar3 = param_1[0x51];
    if (iVar3 == 4 || iVar3 == 5) {
      *(undefined1 *)(param_1 + 0x53) = 1;
      param_1[0x51] = 5;
    }
    else if ((iVar3 != 1 && iVar3 != 2) && iVar3 != 3) {
      (**(code **)(*param_1 + 0x1f8))(param_1,1,&uStack_2c,&local_30,local_28);
      local_15c = param_1[0x56];
      local_28[0] = 0xffffffff;
      local_30 = 0;
      uStack_2c = 1;
      local_40 = 0xffffffff;
      *(undefined4 *)(DAT_00898840 + 0x38) = 2;
    }
    local_50 = 0;
    fn_0066e55c(DAT_00897850,&local_15c);
    fn_006732a0(*(undefined4 *)(param_1[0x48] + 0x48),2,(char)param_1[0x56]);
    param_1[0x55] = 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


