#include "006750f4_00675a04.h"



void fn_00675a04(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00859e58;
  uVar1 = param_1[0x18];
  uVar2 = uVar1;
  if ((uint)param_1[0x19] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a] - uVar1) >> 2,0);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_006759c4(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,0xb);
  }
  return bVar1;
}



undefined4 fn_006755b4(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_30 [28];
  
  fn_00673cb8();
  iVar4 = 0;
  switch(param_1[0x11]) {
  default:
    uVar2 = fn_001296d0(DAT_00898840);
    bVar5 = uVar2 != 0;
    if (!bVar5) {
      uVar2 = (uint)*(byte *)((int)param_1 + 0x79);
    }
    if (bVar5 || uVar2 != 0) {
      return 1;
    }
    if (DAT_008bf4e0 == 0) {
      return 1;
    }
    if (*(int *)(DAT_00898840 + 0x34) == 2) {
      iVar3 = fn_0066eb80(DAT_00898840,6);
      if ((*(byte *)(param_1 + 0x13) & 8) == 0) break;
      if ((*(byte *)(iVar3 + 0x4c) & 2) == 0) {
        return 1;
      }
    }
    else if (-1 < (char)param_1[0x13]) {
      return 1;
    }
    if (((DAT_008bf4e0 != 0) && (iVar4 = fn_006d9250(), -1 < iVar4)) &&
       ((char)param_1[0x1e] == '\0')) {
      return 1;
    }
    param_1[0x1b] = 0;
    param_1[0x1c] = 7;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    goto LAB_00675974;
  case 1:
    iVar4 = fn_00674310(param_1);
    break;
  case 2:
    if (param_1[0x12] != 0) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
    goto joined_r0x006756e0;
  case 3:
    iVar4 = fn_00674928(param_1);
    break;
  case 4:
    piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
    iVar4 = param_1[0x12];
    if (iVar4 == 0) {
      fn_0066b1e0();
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (iVar4 == 1) {
      iVar4 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar4 != 0) {
        return 1;
      }
LAB_006756b8:
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 1;
    }
    if (iVar4 != 2) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
joined_r0x006756e0:
    if (iVar4 != 0) {
      return 1;
    }
LAB_00675898:
    (**(code **)(*param_1 + 0x30))(param_1,0);
    return 1;
  case 5:
    if (*(int *)(DAT_00898840 + 0x34) == 1) {
      iVar4 = fn_006753e4(param_1);
    }
    else {
      if (*(int *)(DAT_00898840 + 0x34) != 2) {
        return 1;
      }
      iVar4 = fn_006750f4(param_1);
    }
    break;
  case 6:
    iVar4 = fn_00674b70(param_1);
    break;
  case 7:
    iVar4 = fn_0067450c(param_1);
    break;
  case 8:
    iVar4 = fn_00674db8(param_1);
    break;
  case 9:
    iVar4 = fn_006747d8(param_1);
    break;
  case 10:
    iVar4 = fn_0066eb80(DAT_00898840,3);
    iVar3 = param_1[0x12];
    if (iVar3 == 0) {
      fn_00667bc8();
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (iVar3 == 1) {
      if ((*(byte *)(iVar4 + 0x4c) & 0x20) != 0) {
        return 1;
      }
      if (DAT_008bf4e0 != 0) {
        fn_005060e8();
      }
      param_1[0x13] = param_1[0x13] | 0x10;
      goto LAB_006756b8;
    }
    if (iVar3 != 2) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
    goto joined_r0x00675894;
  case 0xb:
    if (param_1[0x12] == 0) {
      if (DAT_008bf4e0 != 0) {
        fn_0050527c();
      }
      fn_00507fb4();
      param_1[0x13] = 0;
      DAT_00898860 = 0;
      *(undefined1 *)((int)param_1 + 0x79) = 0;
      DAT_00898868 = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar4 = fn_00673be8(param_1);
joined_r0x00675894:
    if (iVar4 != 0) {
      return 1;
    }
    goto LAB_00675898;
  }
  if (iVar4 != 0) {
LAB_00675974:
    fn_00119b40(auStack_30);
    (**(code **)(*param_1 + 0x24))(param_1,auStack_30);
    fn_0066e870(DAT_00898840,auStack_30);
  }
  return 1;
}



undefined4 fn_00675564(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    param_1[0x13] = param_1[0x13] & 0xfffffff7;
    (**(code **)(*param_1 + 0x30))(param_1,2);
  }
  return 1;
}



void fn_00675554(undefined4 param_1,undefined4 param_2)

{
  DAT_00898868 = param_2;
  return;
}



int fn_006753e4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint local_18;
  
  iVar2 = 0;
  iVar1 = param_1[0x12];
  local_18 = param_4;
  if (iVar1 == 0) {
    iVar1 = fn_0066eb80(DAT_00898840,8);
    if ((*(byte *)(iVar1 + 0x4c) & 2) == 0) {
      fn_00672e50();
    }
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,8);
    if (((*(byte *)(iVar1 + 0x4c) & 2) != 0) && (iVar2 = fn_00675030(param_1,0), iVar2 == 0)) {
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if (iVar1 == 2) {
    iVar1 = fn_00505c40(DAT_008bf4e0);
    if (iVar1 != 0) {
      local_18 = fn_005059b8(DAT_008bf4e0);
      if ((local_18 & 0x80000000) == 0) {
        param_1[0x13] = param_1[0x13] | 2;
        (**(code **)(*param_1 + 0x34))(param_1,3);
      }
      else {
        iVar1 = fn_004daa68(&local_18);
        param_1[0x1c] = 0;
        *(undefined1 *)(param_1 + 0x1d) = 0;
        param_1[0x1b] = iVar1;
        param_1[0x1c] = (uint)(iVar1 != 0);
        iVar2 = -1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
    }
  }
  else if ((iVar1 == 3) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return iVar2;
}



int fn_006750f4(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *local_20;
  
  iVar3 = DAT_00898840;
  iVar5 = 0;
  local_20 = param_4;
  switch(param_1[0x12]) {
  case 0:
    iVar1 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar1 + 0x4c) & 0x20) == 0) {
      if (*(char *)(iVar3 + 0x4c) == '\0') {
        fn_00668000(iVar1);
      }
      else {
        fn_00667c3c();
      }
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    (**(code **)(*param_1 + 0x34))(param_1,1);
    break;
  case 1:
    iVar5 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar5 + 0x4c) & 0x20) == 0) {
      return 0;
    }
    fn_0066eb80(iVar3,6);
    uVar2 = fn_00670620();
    iVar5 = fn_00675030(param_1,uVar2);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (*(char *)(iVar3 + 0x4d) != '\0') {
      (**(code **)(*param_1 + 0x34))(param_1,3);
      return 0;
    }
    goto LAB_00675378;
  case 2:
    iVar3 = fn_006d95d0(DAT_008bf4e8);
    if (iVar3 == 0) {
      return 0;
    }
    local_20 = (undefined1 *)fn_006d95c8(DAT_008bf4e8);
    if (((uint)local_20 & 0x80000000) != 0) {
      iVar3 = fn_004daa68(&local_20);
      param_1[0x1c] = 0;
      *(undefined1 *)(param_1 + 0x1d) = 0;
      param_1[0x1b] = iVar3;
      goto code_r0x0067531c;
    }
    iVar3 = fn_006d9600(DAT_008bf4e8);
    if (iVar3 == 0) {
      *(undefined1 *)(DAT_00898840 + 0x4d) = 0;
    }
    else {
      *(undefined1 *)(DAT_00898840 + 0x4d) = 1;
    }
    goto LAB_00675378;
  case 3:
    iVar5 = fn_00505c40(DAT_008bf4e0);
    if (iVar5 == 0) {
      return 0;
    }
    local_20 = (undefined1 *)fn_005059b8(DAT_008bf4e0);
    if (((uint)local_20 & 0x80000000) == 0) {
      fn_0066eb80(iVar3,3);
      fn_00669d70();
      (**(code **)(*param_1 + 0x34))(param_1,4);
      return 0;
    }
    puVar4 = local_20;
    if (local_20 != (undefined1 *)0xe0e14826) {
      puVar4 = (undefined1 *)0x1f5eb7d9;
      if (local_20 != &DAT_e0a14827) {
        puVar4 = (undefined1 *)0x275eb7db;
      }
      if ((local_20 != &DAT_e0a14827 && local_20 + (int)puVar4 != (undefined1 *)0x0) &&
         (puVar4 = (undefined1 *)0x275eb709, local_20 != (undefined1 *)0xd8a148f7)) {
        puVar4 = (undefined1 *)0x275eb73d;
      }
    }
    iVar3 = fn_004daa68(&local_20,puVar4);
    param_1[0x1c] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1b] = iVar3;
code_r0x0067531c:
    param_1[0x1c] = (uint)(iVar3 != 0);
    iVar5 = -1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    break;
  case 4:
    iVar3 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar3 + 0x4c) & 0x40) == 0) {
      return 0;
    }
LAB_00675378:
    iVar5 = 0;
    param_1[0x13] = param_1[0x13] | 8;
    (**(code **)(*param_1 + 0x34))(param_1,5);
    break;
  case 5:
    iVar3 = fn_00673be8(param_1);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return iVar5;
}


