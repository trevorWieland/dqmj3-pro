#include "00670d7c_006715b8.h"



void fn_006715b8(undefined4 *param_1)

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



undefined4 fn_00671598(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,2);
  return 1;
}



bool fn_00671558(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,6);
  }
  return bVar1;
}



bool fn_00671538(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_004d996c(*(undefined4 *)(param_1 + 0x6c));
  return (uVar1 & 0x80000000) == 0;
}



undefined4 fn_006712cc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  fn_00673cb8();
  iVar1 = DAT_008bf4d4;
  switch(param_1[0x11]) {
  case 1:
    iVar1 = fn_0066eb80(DAT_00898840,9);
    iVar2 = param_1[0x12];
    if (iVar2 == 0) {
      fn_006765e8();
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 1;
    }
    if (iVar2 == 1) {
      if ((*(byte *)(iVar1 + 0x4c) & 1) == 0) {
        return 1;
      }
      iVar1 = fn_00671104(param_1);
      if (iVar1 == 0) {
        param_1[0x13] = param_1[0x13] | 1;
        (**(code **)(*param_1 + 0x34))(param_1,2);
        return 1;
      }
      return 1;
    }
    if (iVar2 != 2) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
    goto joined_r0x0067150c;
  case 2:
    fn_00670dbc(param_1);
    break;
  case 3:
    if (param_1[0x12] != 0) {
      return 1;
    }
    if ((*(char *)(param_1[0x1b] + 0x19) != '\0') &&
       (iVar1 = fn_001296d0(DAT_00898840), iVar1 == 0)) {
      return 1;
    }
    pcVar4 = *(code **)(*param_1 + 0x30);
    uVar3 = 2;
LAB_006714f4:
    (*pcVar4)(param_1,uVar3);
    break;
  case 4:
    fn_00670f90(param_1);
    break;
  case 5:
    if (param_1[0x12] != 0) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
    goto joined_r0x0067150c;
  case 6:
    if (param_1[0x12] == 0) {
      fn_0050c6d8(DAT_008bf4d4 + 0x10,param_1[0x1c],0x1810);
      fn_004d9f14();
      fn_0050c738(iVar1 + 0x10,param_1[0x1c]);
      param_1[0x1c] = 0;
      param_1[0x1b] = 0;
      fn_004da634();
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(undefined1 *)((int)param_1 + 0xc1) = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x13] = 0;
      uVar3 = 1;
      pcVar4 = *(code **)(*param_1 + 0x34);
      goto LAB_006714f4;
    }
    if (param_1[0x12] != 1) {
      return 1;
    }
    iVar1 = fn_00673be8(param_1);
joined_r0x0067150c:
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
  }
  return 1;
}



undefined4 fn_00671288(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    fn_00673b84(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,5);
  }
  return 1;
}



undefined4 fn_00670f90(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x12];
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1[0x1b] + 0x19);
    if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
      fn_004d8734(param_1[0x1b]);
      goto LAB_006710e0;
    }
  }
  else {
    if (iVar2 == 1) {
      if (*(char *)(param_1[0x1b] + 0x19) != '\0') {
        return 0;
      }
      uVar3 = 4;
      if (*(int *)(DAT_00898840 + 0x34) == 2) {
        uVar3 = 8;
      }
      fn_004d9210(param_1[0x1b],DAT_00898870,uVar3,1);
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 0;
    }
    if (iVar2 != 2) {
      return 0;
    }
    if (*(char *)(param_1[0x1b] + 0x19) == '\x02') {
      iVar2 = fn_00673be8(param_1);
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    iVar2 = fn_0066e3d8();
    if (iVar2 != 0) {
      fn_00673b84(param_1);
      (**(code **)(*param_1 + 0x30))(param_1,5);
      return 0;
    }
    cVar1 = *(char *)(param_1[0x1b] + 0x19);
  }
  if (cVar1 != '\0') {
    return 0;
  }
LAB_006710e0:
  (**(code **)(*param_1 + 0x34))(param_1,1);
  return 0;
}



void fn_00670f84(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x80) = param_3;
  return;
}



undefined4 fn_00670f38(int *param_1)

{
  if (param_1[0x11] == 4) {
    fn_00673ce8(param_1,4);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,4);
  }
  return 1;
}



undefined4 fn_00670f10(void)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (*(int *)(DAT_00898840 + 0x34) == 2) {
    uVar1 = 8;
  }
  return uVar1;
}



undefined4 fn_00670dbc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    if (*(char *)(DAT_00898840 + 0x4d) != '\0') {
      if (*(int *)(DAT_00898840 + 0x34) != 1) {
        fn_0066eb80(DAT_00898840,3);
        fn_00669fec();
        (**(code **)(*param_1 + 0x34))(param_1,1);
        return 0;
      }
      fn_0066eb80(DAT_00898840,8);
      fn_006729b4();
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      uVar2 = 4;
      if (*(int *)(DAT_00898840 + 0x34) == 2) {
        uVar2 = 8;
      }
      fn_004d9210(param_1[0x1b],DAT_00898870,uVar2,1);
      *(undefined1 *)(param_1 + 0x30) = 1;
      (**(code **)(*param_1 + 0x30))(param_1,0);
      return 0;
    }
    iVar1 = fn_0066eb80(DAT_00898840,3);
    if ((*(byte *)(iVar1 + 0x4c) & 0x80) == 0) {
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x34))(param_1,2);
  return 0;
}



undefined4 fn_00670d7c(int *param_1)

{
  if (*(char *)(param_1[0x1b] + 0x19) == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    return 1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,3);
  return 1;
}


