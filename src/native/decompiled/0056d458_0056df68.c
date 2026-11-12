#include "0056d458_0056df68.h"



void fn_0056df68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x6c))();
  if (-1 < iVar1) {
    iVar1 = fn_006a833c(*(undefined4 *)(param_1 + 0xec),iVar1);
    iVar1 = fn_0056b8b0(param_1,iVar1 % 4,(int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2);
    *(undefined1 *)(iVar1 + 0x2f) = 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x78))();
  if (-1 < iVar1) {
    uVar2 = fn_006f6ac0(param_1);
    fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = fn_006f6acc(param_1);
    local_1c = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    local_20 = fVar3 + DAT_008cb474;
    local_1c = local_1c + DAT_008cb478;
    local_18 = DAT_008cb47c + 0.0;
    iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + 0x48);
    *(float *)(iVar1 + 0x1c) = local_20;
    *(float *)(iVar1 + 0x20) = local_1c;
    *(float *)(iVar1 + 0x24) = local_18;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xd0),&local_20);
  }
  return;
}



undefined4 fn_0056d778(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar6 = *(int *)(param_1 + 0x100);
  iVar7 = iVar6 % 4;
  iVar9 = param_2 % 4;
  iVar6 = (int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1e)) >> 2;
  iVar1 = (int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2;
  if (iVar9 == 0) {
    iVar2 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0x104),iVar7,iVar6);
LAB_0056d7fc:
    if (iVar2 != 0) {
      uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_0020bbc4(&local_38,uVar5);
      iVar2 = fn_00154ac8(0x19);
      if (((iVar2 == 0) && (iVar2 = fn_006bf34c(&local_34), iVar2 != 0)) ||
         ((iVar2 = fn_00154ac8(0x463), iVar2 == 0 && (iVar2 = fn_006bf184(&local_34), iVar2 != 0))
         )) {
        return 0;
      }
    }
  }
  else if (iVar7 == 0) {
    iVar2 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar9,iVar1);
    goto LAB_0056d7fc;
  }
  if ((iVar9 == 0) && (iVar1 != 3)) {
    iVar8 = *(int *)(param_1 + 0x100);
    uVar5 = *(undefined4 *)(param_1 + 0x104);
    iVar2 = iVar8 % 4;
    iVar8 = (int)(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1e)) >> 2;
  }
  else {
    if ((iVar7 != 0) || (iVar6 == 3)) goto LAB_0056d9f8;
    uVar5 = *(undefined4 *)(param_1 + 0xa8);
    iVar2 = iVar9;
    iVar8 = iVar1;
  }
  iVar2 = fn_0056d53c(param_1,uVar5,iVar2,iVar8);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x11c) == iVar2) {
      uVar10 = *(undefined4 *)(param_1 + 0x5c);
      uVar5 = fn_0022f584((char *)&DAT_0056daf0,0);
      local_30 = 0;
      local_34 = 1;
      local_2c = 0;
      uStack_28 = 1;
      local_38 = 1;
      fn_0036c5f4(uVar10,uVar5,1,0);
      fn_00689bd0(param_1,0x48,0);
    }
    else {
      uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar2);
      fn_0020bbc4(&local_38,uVar5);
      uVar4 = fn_006bfe90(&local_34);
      if (2 < uVar4) {
        uVar5 = *(undefined4 *)(param_1 + 0x5c);
        iVar2 = fn_00154ac8(0x3f);
        if (iVar2 == 0) {
          pcVar3 = (char *)&DAT_0056db40;
        }
        else {
          pcVar3 = (char *)&DAT_0056db18;
        }
        uVar10 = fn_0022f584(pcVar3,0);
        local_30 = 0;
        local_34 = 1;
        local_2c = 0;
        uStack_28 = 1;
        local_38 = 1;
        fn_0036c5f4(uVar5,uVar10,1,0);
        fn_00689bd0(param_1,0x48,0);
      }
    }
  }
LAB_0056d9f8:
  local_34 = *(undefined4 *)(param_1 + 0x104);
  uVar5 = *(undefined4 *)(param_1 + 0xa8);
  uVar4 = fn_0056d53c(param_1,local_34,iVar7,iVar6);
  local_38 = fn_0056d53c(param_1,uVar5,iVar9,iVar1);
  fn_0056d598(param_1,local_34,iVar7,iVar6);
  local_38 = uVar4;
  fn_0056d598(param_1,uVar5,iVar9,iVar1);
  (**(code **)(**(int **)(param_1 + 0xac) + 0x38))();
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
  uVar4 = 0;
  do {
    local_38 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 2;
    if (local_38 <= uVar4) {
      fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar4);
    }
    iVar6 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    if (*(int *)(param_1 + 0x11c) == *(int *)(*(int *)(param_1 + 0x8c) + iVar6)) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  } while ((int)uVar4 < 4);
  return 1;
}



undefined4 fn_0056d658(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 == 0) {
      fn_0068ab44(param_1,0x100094d);
    }
    else {
      fn_0068ab44(param_1,0x1000950);
      iVar1 = *(int *)(param_1 + 0x114) + 1;
      if (2 < iVar1) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x114) = iVar1;
      fn_0022da78(param_1 + 0x98,(&DAT_007c6fb0)[iVar1],0);
      uVar2 = fn_0016ba34(DAT_00897800,DAT_00898228,
                           *(undefined4 *)(&DAT_008945cc + *(int *)(param_1 + 0x114) * 4),0);
      fn_00243550(*(undefined4 *)(param_1 + 0xcc),uVar2);
      if (*(int *)(param_1 + 0xb8) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x83) = 0;
        fn_0031f954();
      }
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
      uVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 0x5c))();
      fn_0056d5f4(param_1,uVar2);
      fn_0056e984(param_1);
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0056d5f4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  fn_00689efc(param_1,0x2d,0);
  if (param_2 < 0) {
    fn_0025f354(*(undefined4 *)(param_1 + 100),0);
    return;
  }
  uVar1 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),param_2 % 4,
                       (int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2);
  fn_0025f354(*(undefined4 *)(param_1 + 100),uVar1);
  return;
}



void fn_0056d598(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    param_1 = *(int *)(param_1 + 0x8c);
  }
  piVar2 = (int *)0x0;
  if (param_3 == 0) {
    puVar1 = (undefined4 *)(param_1 + param_4 * 4);
  }
  else {
    if ((param_3 == 1 || param_3 == 2) || param_3 == 3) {
      piVar2 = (int *)(param_1 + 0x98);
    }
    if ((param_3 != 1 && param_3 != 2) && param_3 != 3) {
      return;
    }
    puVar1 = (undefined4 *)(*piVar2 + (param_3 + param_2 * 0xc + param_4 * 3 + -1) * 4);
  }
  *puVar1 = param_5;
  return;
}



undefined4 fn_0056d53c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    param_1 = *(int *)(param_1 + 0x8c);
  }
  piVar2 = (int *)0x0;
  if (param_3 == 0) {
    puVar1 = (undefined4 *)(param_1 + param_4 * 4);
  }
  else {
    if ((param_3 == 1 || param_3 == 2) || param_3 == 3) {
      piVar2 = (int *)(param_1 + 0x98);
    }
    if ((param_3 != 1 && param_3 != 2) && param_3 != 3) {
      return 0;
    }
    puVar1 = (undefined4 *)(*piVar2 + (param_4 * 3 + param_3 + param_2 * 0xc + -1) * 4);
  }
  return *puVar1;
}



int fn_0056d458(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  if (param_2 < 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x100) != param_2) ||
     (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x104))) {
    iVar4 = (int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2;
    if ((param_2 % 4 == 0 && iVar4 == 3) && (*(int *)(param_1 + 0x108) != 0)) {
      uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_0020bbc4(auStack_20,uVar1);
      iVar2 = fn_006bfe90(auStack_1c);
      if (2 < iVar2) {
        return 0;
      }
    }
    piVar3 = (int *)fn_0056b8b0(param_1,param_2 % 4,iVar4);
    if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x24))(piVar3), iVar4 != 0)) {
      return (int)*(char *)((int)piVar3 + 0x33);
    }
  }
  return 1;
}


