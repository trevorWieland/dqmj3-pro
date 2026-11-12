#include "0066d050_0066d7d0.h"



bool fn_0066d7d0(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  param_1[0x1c] = 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,9);
  }
  return bVar1;
}



undefined4 fn_0066d240(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_28;
  int *piStack_24;
  
  fn_00673cb8();
  switch(param_1[0x11]) {
  default:
    goto switchD_0066d258_caseD_0;
  case 1:
    if (param_1[0x12] == 0) {
      fn_007412a4(&LAB_0066e088,&LAB_0066df44);
      iVar4 = DAT_0089887c;
      fn_007410ec(&DAT_008cff48 + DAT_0089887c * 3,(char *)&DAT_007ce9c0);
      fn_00741310((&DAT_008cff50)[iVar4 * 3]);
      fn_001bb250(0);
      fn_001b4fe0(5);
      fn_001b8484(60000000);
      piVar2 = (int *)fn_0066ceec(param_1);
      if (piVar2 != (int *)0x0) {
        param_1[0x3a] = *piVar2;
        param_1[0x3b] = piVar2[1];
        param_1[0x3c] = piVar2[2];
      }
      param_1[0x13] = param_1[0x13] | 1;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
    if (iVar4 != 0) {
      return 1;
    }
    goto LAB_0066d75c;
  case 2:
    if (param_1[0x12] != 0) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
    goto joined_r0x0066d758;
  case 3:
    iVar4 = fn_0066cacc(param_1);
    break;
  case 4:
    iVar3 = param_1[0x12];
    iVar4 = 0;
    if (iVar3 == 0) {
      param_1[0x1b] = 0;
      local_28 = (int *)&LAB_0067c0c4;
      piStack_24 = param_1;
      fn_0074073c(param_1 + 0x20,param_1 + 0x3a,param_1[0x29],param_1[0x28]);
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar3 == 1) {
      if (param_1[0x1b] == 1) goto LAB_0066d71c;
      if (param_1[0x1b] == 2) {
        if (param_1[0x1e] != 0xc) goto LAB_0066d714;
        if ((char)param_1[0x3e] == '\x01') goto LAB_0066d71c;
LAB_0066d65c:
        *(undefined1 *)(DAT_00898840 + 0x58) = 1;
        iVar4 = -1;
        param_1[0x1e] = 0xb;
      }
    }
    else if (iVar3 == 2) {
      iVar3 = fn_00673be8(param_1);
joined_r0x0066d568:
      iVar4 = 0;
      if (iVar3 == 0) {
        iVar4 = 0;
        param_1[0x1b] = 0;
        (**(code **)(*param_1 + 0x30))(param_1);
      }
    }
    break;
  case 5:
    iVar3 = param_1[0x12];
    iVar4 = 0;
    if (iVar3 == 0) {
      param_1[0x1b] = 0;
      local_28 = (int *)&LAB_0067c148;
      piStack_24 = param_1;
      fn_0074073c(param_1 + 0x2a,param_1 + 0x3a,param_1[0x33],param_1[0x32]);
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar3 == 1) {
      if (param_1[0x1b] != 1) {
        if (param_1[0x1b] != 2) break;
        if (param_1[0x1e] != 0xc) goto LAB_0066d714;
        cVar1 = (char)param_1[0x3e];
joined_r0x0066d658:
        if (cVar1 != '\x01') goto LAB_0066d65c;
      }
LAB_0066d71c:
      iVar4 = 0;
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
    else if (iVar3 == 2) {
      iVar3 = fn_00673be8(param_1);
      goto joined_r0x0066d568;
    }
    break;
  case 6:
    iVar3 = param_1[0x12];
    iVar4 = 0;
    if (iVar3 == 0) {
      param_1[0x1b] = 0;
      local_28 = param_1;
      fn_007406bc(param_1 + 0x20,param_1[0x29],param_1[0x28],&LAB_0067c0c4);
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar3 == 1) {
      iVar3 = param_1[0x1b];
      if (iVar3 == 1) goto LAB_0066d71c;
joined_r0x0066d710:
      iVar4 = 0;
      if (iVar3 == 2) {
LAB_0066d714:
        iVar4 = -1;
      }
    }
    else if (iVar3 == 2) {
      iVar3 = fn_00673be8(param_1);
      goto joined_r0x0066d568;
    }
    break;
  case 7:
    iVar3 = param_1[0x12];
    iVar4 = 0;
    if (iVar3 == 0) {
      param_1[0x1b] = 0;
      local_28 = param_1;
      fn_00740638(param_1 + 0x20,param_1[0x29],param_1[0x28],&LAB_0067c0c4);
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar3 == 1) {
      if (param_1[0x1b] == 1) goto LAB_0066d71c;
      if (param_1[0x1b] == 2) {
        if (param_1[0x1e] == 0xc) {
          cVar1 = (char)param_1[0x3e];
          goto joined_r0x0066d658;
        }
        goto LAB_0066d714;
      }
    }
    else if (iVar3 == 2) {
      iVar3 = fn_00673be8(param_1);
      goto joined_r0x0066d568;
    }
    break;
  case 8:
    iVar3 = param_1[0x12];
    iVar4 = 0;
    if (iVar3 == 0) {
      param_1[0x1b] = 0;
      fn_007405b8(param_1[0x3d],param_1 + 0x34,&LAB_0067c0c4,param_1);
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else {
      if (iVar3 == 1) {
        iVar3 = param_1[0x1b];
        if (iVar3 != 1) goto joined_r0x0066d710;
        goto LAB_0066d71c;
      }
      if (iVar3 == 2) {
        iVar3 = fn_00673be8(param_1);
        goto joined_r0x0066d568;
      }
    }
    break;
  case 9:
    if (param_1[0x12] == 0) {
      iVar4 = fn_001bb1fc();
      if (iVar4 == 1) {
        fn_00741330();
        param_1[0x13] = 0;
        (**(code **)(*param_1 + 0x34))(param_1,1);
        return 1;
      }
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
joined_r0x0066d758:
    if (iVar4 == 0) {
LAB_0066d75c:
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    goto switchD_0066d258_caseD_0;
  }
  if (iVar4 != 0) {
    fn_00119b40(&local_28);
    (**(code **)(*param_1 + 0x24))(param_1,&local_28);
    fn_0066e870(DAT_00898840,&local_28);
  }
switchD_0066d258_caseD_0:
  return 1;
}



undefined4 fn_0066d168(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_1[0x1c] = 0;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[4];
  iVar6 = param_2[5];
  iVar7 = param_2[6];
  iVar8 = param_2[7];
  param_1[0x20] = *param_2;
  param_1[0x21] = iVar2;
  param_1[0x22] = iVar3;
  param_1[0x23] = iVar4;
  param_1[0x24] = iVar5;
  param_1[0x25] = iVar6;
  param_1[0x26] = iVar7;
  param_1[0x27] = iVar8;
  iVar2 = param_2[9];
  param_1[0x28] = param_2[8];
  param_1[0x29] = iVar2;
  if ((*(byte *)(param_1 + 0x13) & 4) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,6);
    return 1;
  }
  fn_00673ce8(param_1,6);
  param_1[0x1c] = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,3);
    uVar1 = 0;
    param_1[0x1c] = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      return 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,3,*(code **)(*param_1 + 0x30),param_4,unaff_r4);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0066d124(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}



undefined4 fn_0066d0d0(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1[0x1c] = 0;
  param_1[0x3d] = param_2;
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    fn_00673ce8(param_1,8);
    uVar1 = fn_0066d1cc(param_1);
    return uVar1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,8);
  return 1;
}



undefined4 fn_0066d050(int *param_1,int *param_2,int *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_1[0x1c] = 0;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[4];
  iVar6 = param_2[5];
  iVar7 = param_2[6];
  iVar8 = param_2[7];
  param_1[0x20] = *param_2;
  param_1[0x21] = iVar2;
  param_1[0x22] = iVar3;
  param_1[0x23] = iVar4;
  param_1[0x24] = iVar5;
  param_1[0x25] = iVar6;
  param_1[0x26] = iVar7;
  param_1[0x27] = iVar8;
  iVar2 = param_2[9];
  param_1[0x28] = param_2[8];
  param_1[0x29] = iVar2;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  iVar5 = param_3[4];
  iVar6 = param_3[5];
  iVar7 = param_3[6];
  iVar8 = param_3[7];
  param_1[0x2a] = *param_3;
  param_1[0x2b] = iVar2;
  param_1[0x2c] = iVar3;
  param_1[0x2d] = iVar4;
  param_1[0x2e] = iVar5;
  param_1[0x2f] = iVar6;
  param_1[0x30] = iVar7;
  param_1[0x31] = iVar8;
  iVar2 = param_3[9];
  param_1[0x32] = param_3[8];
  param_1[0x33] = iVar2;
  *(undefined1 *)(param_1 + 0x3e) = param_4;
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    fn_00673ce8(param_1,5);
    uVar1 = fn_0066d1cc(param_1);
    return uVar1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,5);
  return 1;
}



undefined4 fn_0066d1cc(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0x1c] = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,3);
    uVar1 = 0;
    param_1[0x1c] = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      return 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,3);
    uVar1 = 1;
  }
  return uVar1;
}


