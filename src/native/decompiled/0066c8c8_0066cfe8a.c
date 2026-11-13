#include "0066c8c8_0066cfe8a.h"



void fn_0066ceb0(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 4;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_0066cacc(int *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar6 = 0;
  switch(param_1[0x12]) {
  case 0:
    if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
      iVar2 = fn_0066eb80(DAT_00898840,3);
      if ((*(byte *)(iVar2 + 0x4c) & 0x10) == 0) {
        fn_0066bd38();
      }
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
    goto LAB_0066cb64;
  case 1:
    iVar2 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar2 + 0x4c) & 0x10) == 0) {
      return 0;
    }
    bVar3 = true;
    uVar1 = 0;
    do {
      if ((&DAT_008cff54)[uVar1] != '\0') {
        bVar3 = false;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x100);
    if (bVar3) {
      iVar2 = fn_0074041c(0x1acb00,&DAT_008cff54,(char *)&DAT_0066ce9c);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x34))(param_1,2);
        return 0;
      }
      iVar2 = fn_0074040c();
      param_1[0x1c] = iVar2;
      param_1[0x1e] = 0;
      *(undefined1 *)(param_1 + 0x1f) = 0;
      param_1[0x1d] = iVar2;
      if (iVar2 == -0x133 || iVar2 == -0x194) {
LAB_0066cc4c:
        param_1[0x1e] = 0xc;
        goto LAB_0066cc58;
      }
      if (param_1[0x11] != 3) goto LAB_0066cd48;
LAB_0066cd50:
      iVar2 = 10;
LAB_0066cc54:
      param_1[0x1e] = iVar2;
LAB_0066cc58:
      *(undefined1 *)(param_1 + 0x1f) = 1;
      param_1[0x1c] = 0;
      return 0xffffffff;
    }
    param_1[0x1b] = 0;
    uVar4 = 4;
    uVar5 = 3;
    iVar2 = fn_0066ceec(param_1);
    if (iVar2 == 0) {
      fn_007402d4(param_1 + 0x3a,&DAT_008cff54,&LAB_0067c0c4,param_1);
LAB_0066cce0:
      (**(code **)(*param_1 + 0x34))(param_1,uVar5);
      return 0;
    }
    goto LAB_0066cbe8;
  case 2:
    iVar2 = fn_00741410();
    if (iVar2 != 1) {
      if (iVar2 != -1) {
        return 0;
      }
      iVar2 = fn_0074040c();
      param_1[0x1c] = iVar2;
      param_1[0x1e] = 0;
      *(undefined1 *)(param_1 + 0x1f) = 0;
      param_1[0x1d] = iVar2;
      if (iVar2 == -0x133 || iVar2 == -0x194) goto LAB_0066cc4c;
      if (param_1[0x11] == 3) goto LAB_0066cd50;
LAB_0066cd48:
      iVar2 = 0xb;
      goto LAB_0066cc54;
    }
    param_1[0x1b] = 0;
    uVar5 = 4;
    uVar4 = 3;
    iVar2 = fn_0066ceec(param_1);
    if (iVar2 != 0) goto LAB_0066cce0;
    fn_007402d4(param_1 + 0x3a,&DAT_008cff54,&LAB_0067c0c4,param_1);
LAB_0066cbe8:
    (**(code **)(*param_1 + 0x34))(param_1,uVar4);
    break;
  case 3:
    if (param_1[0x1b] == 1) {
      if (param_1 != (int *)0xffffff18) {
        fn_0028b908(*(undefined4 *)(DAT_00897804 + 0x30));
      }
      param_1[0x1b] = 0;
      (**(code **)(*param_1 + 0x34))(param_1,4);
      return 0;
    }
    if (param_1[0x1b] != 2) {
      return 0;
    }
    if (param_1[0x1d] == -0x1f5 || param_1[0x1d] == -500) {
LAB_0066cdac:
      fn_00301f50(&DAT_008cff54,0x100);
    }
LAB_0066cdb8:
    uVar6 = 0xffffffff;
    break;
  case 4:
    fn_007401e4(param_1 + 0x3a,&DAT_008cff54,&LAB_0067c0c4,param_1);
    (**(code **)(*param_1 + 0x34))(param_1,5);
    break;
  case 5:
    if (param_1[0x1b] != 1) {
      if (param_1[0x1b] != 2) {
        return 0;
      }
      if (param_1[0x1d] == -0x1f5 || param_1[0x1d] == -500) goto LAB_0066cdac;
      goto LAB_0066cdb8;
    }
    if (param_1[0x1c] == -0x12f) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      fn_0028b908(*(undefined4 *)(DAT_00897804 + 0x30),&local_28);
    }
    param_1[0x13] = param_1[0x13] | 4;
LAB_0066cb64:
    (**(code **)(*param_1 + 0x34))(param_1,6);
    break;
  case 6:
    iVar2 = fn_00673be8(param_1);
    if (iVar2 == 0) {
      param_1[0x1b] = 0;
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return uVar6;
}



undefined4 * fn_0066c8c8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  *param_1 = &DAT_00859a38;
  uVar1 = param_1[0x19e];
  uVar2 = uVar1;
  if ((uint)param_1[0x19f] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x19f]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1a0] - uVar1) >> 2,0);
  iVar3 = fn_004b93c4(param_1 + 0x16a);
  piVar6 = (int *)(iVar3 + -0x18);
  if (*(int *)(iVar3 + -8) != 0) {
    fn_00147be0(piVar6);
    puVar4 = *(undefined4 **)(iVar3 + -8);
    *puVar4 = *(undefined4 *)(iVar3 + -0x14);
    *(undefined4 **)(iVar3 + -0x14) = puVar4;
    piVar5 = (int *)*piVar6;
    while (piVar5 != (int *)0x0) {
      *piVar6 = *piVar5;
      fn_0014f1bc(piVar5[2]);
      fn_0014f1bc(piVar5);
      piVar5 = (int *)*piVar6;
    }
    *(undefined4 *)(iVar3 + -0x14) = 0;
    *(undefined4 *)(iVar3 + -0x10) = 0;
    *(undefined4 *)(iVar3 + -0xc) = 0;
  }
  piVar6 = (int *)(iVar3 + -0x30);
  if (*(int *)(iVar3 + -0x20) != 0) {
    fn_00147b74(piVar6);
    puVar4 = *(undefined4 **)(iVar3 + -0x20);
    *puVar4 = *(undefined4 *)(iVar3 + -0x2c);
    *(undefined4 **)(iVar3 + -0x2c) = puVar4;
    piVar5 = (int *)*piVar6;
    while (piVar5 != (int *)0x0) {
      *piVar6 = *piVar5;
      fn_0014f1bc(piVar5[2]);
      fn_0014f1bc(piVar5);
      piVar5 = (int *)*piVar6;
    }
    *(undefined4 *)(iVar3 + -0x2c) = 0;
    *(undefined4 *)(iVar3 + -0x28) = 0;
    *(undefined4 *)(iVar3 + -0x24) = 0;
  }
  iVar3 = fn_00170f54(iVar3 + -0x70);
  iVar3 = fn_00170f54(iVar3 + -0xc);
  iVar3 = fn_00170f54(iVar3 + -8);
  *(undefined ***)(iVar3 + -0x74) = &PTR_FUN_00854c0c;
  iVar3 = fn_004b93c4(iVar3 + -0x28);
  iVar3 = fn_004b93dc(iVar3 + -0xc);
  iVar3 = fn_00170f54(iVar3 + -8);
  iVar3 = fn_004bb560(iVar3 + -0x38);
  *(undefined **)(iVar3 + -0x4b0) = &DAT_00859e58;
  uVar1 = *(uint *)(iVar3 + -0x450);
  uVar2 = uVar1;
  if (*(uint *)(iVar3 + -0x44c) <= uVar1) {
    for (; uVar2 != *(uint *)(iVar3 + -0x44c); uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(*(int *)(iVar3 + -0x448) - uVar1) >> 2,0);
  *(undefined4 *)(iVar3 + -0x4b0) = &DAT_00859b90;
  return (undefined4 *)(iVar3 + -0x4b0);
}


