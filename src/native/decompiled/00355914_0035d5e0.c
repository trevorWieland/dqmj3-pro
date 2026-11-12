#include "00355914_0035d5e0.h"



void fn_0035d5e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a0) == -1) {
    if (param_2 == 0) goto LAB_0035d654;
    uVar1 = fn_0023de00(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7558);
  }
  else {
    if (param_2 != 0) goto LAB_0035d654;
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
LAB_0035d654:
  fn_001dbb48(param_1,param_2);
  return;
}



undefined4 fn_00359b6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar2 = fn_00174834(DAT_008977e4);
  if (*(char *)(param_1 + 9) != '\0') {
    if (*(char *)(param_1 + 9) != '\x01') {
      return 0;
    }
    fn_00174840(DAT_008977e4);
    iVar3 = fn_001c8384();
    if (iVar3 == 0) {
      return 0;
    }
    fn_001c2e0c(param_1);
    iVar3 = fn_00174858(DAT_008977e4);
    fn_003a767c(*(undefined4 *)(iVar3 + 0x48));
    fn_001c3ca0();
    uVar4 = fn_0017484c(DAT_008977e4);
    iVar3 = 0x20;
    do {
      local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,(char)iVar3);
      iVar5 = fn_00175dcc(uVar4,&local_20);
      if ((iVar5 != 0) &&
         (cVar1 = *(char *)(iVar2 + 0x180388 + (char)iVar3 * 8 + 0x4182), cVar1 != '\0')) {
        fn_0015aa68(iVar5,cVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x22);
    iVar3 = 0x22;
    do {
      local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,(char)iVar3);
      iVar5 = fn_00175d88(uVar4,&local_20);
      if ((iVar5 != 0) &&
         (cVar1 = *(char *)(iVar2 + 0x180388 + (char)iVar3 * 8 + 0x4182), cVar1 != '\0')) {
        fn_0015aa68(iVar5,cVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x24);
    bVar7 = *(char *)(iVar2 + 0x185ec9) == '\0';
    if (*(char *)(iVar2 + 0x185ec0) == '\0') {
      if (bVar7) {
        return 1;
      }
      uVar4 = fn_00182994(DAT_008977e4);
      uVar6 = 2;
    }
    else {
      if (bVar7) {
        uVar4 = fn_00182994(DAT_008977e4);
        fn_00207650(uVar4,1);
        return 1;
      }
      uVar4 = fn_00182994(DAT_008977e4);
      uVar6 = 3;
    }
    fn_00207650(uVar4,uVar6);
    return 1;
  }
  fn_00359758(param_1,iVar2);
  fn_00174858(DAT_008977e4);
  iVar3 = fn_002d40b4();
  if (iVar3 == 0) {
    fn_001c3354(iVar2 + 0x185ec0);
  }
  uVar4 = fn_00174834(DAT_008977e4);
  iVar2 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    iVar3 = fn_006b8538(uVar6,iVar2);
    if (iVar3 == -0x1194d800) {
      fn_001c3bec(uVar4);
      fn_001c374c();
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  uVar4 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_003a8818(*(undefined4 *)(iVar2 + 0x48));
  iVar2 = 0x20;
  do {
    local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,(char)iVar2);
    iVar3 = fn_00175dcc(uVar4,&local_20);
    if (iVar3 != 0) {
      fn_001794f4();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x22);
  iVar2 = 0x22;
  do {
    local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,(char)iVar2);
    iVar3 = fn_00175d88(uVar4,&local_20);
    if (iVar3 != 0) {
      fn_001794f4();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  iVar2 = 0x10;
  do {
    local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,(char)iVar2);
    fn_00313b14(uVar4,&local_20);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  *(undefined1 *)(param_1 + 9) = 1;
  return 0;
}



void fn_00355914(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar8 = param_2 - (param_2 >> 0x1f) & 0xfffffffe;
  iVar5 = param_2 / 2;
  param_2 = param_2 % 2;
  iVar1 = param_3 / 2;
  *(undefined4 *)(param_1 + 0x110) = 0;
  param_3 = param_3 % 2;
  fn_0036ef48(*(undefined4 *)(param_1 + 0xb8));
  if (param_2 == 0 && param_3 == 0) {
    iVar9 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x90) + iVar9 * 4) != 0) {
        uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0036fb74(*(undefined4 *)(param_1 + 0xb8),uVar6,iVar9);
        fn_0020bbc4(auStack_28,uVar6);
        fn_006bfe90(auStack_24);
        iVar3 = fn_001cab7c();
        iVar9 = iVar3 + iVar9 + -1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    fn_0036fbf0(*(undefined4 *)(param_1 + 0xb8),iVar5,iVar1);
    iVar5 = 0;
    do {
      uVar10 = fn_0036fb68(*(undefined4 *)(param_1 + 0xb8),iVar5);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      puVar4 = (undefined4 *)uVar10;
      if (puVar4 != (undefined4 *)0x0) {
        uVar6 = *puVar4;
      }
      if (puVar4 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar5 * 4) = uVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    fn_00356504(param_1);
    fn_00356ea8(param_1);
    fn_00356e10(param_1);
    fn_00357154(param_1);
    fn_00356f80(param_1);
    fn_003572cc(param_1);
    fn_0035732c(param_1);
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x38))();
  }
  else if (param_2 == 1) {
    if (param_3 == 1) {
      iVar9 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x9c) + iVar9 * 4) != 0) {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0036ee94(*(undefined4 *)(param_1 + 0xb8),uVar6,iVar9);
          fn_0020bbc4(auStack_28,uVar6);
          fn_006bfe90(auStack_24);
          iVar3 = fn_001cab7c();
          iVar9 = iVar3 + iVar9 + -1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
      fn_0036f768(*(undefined4 *)(param_1 + 0xb8),iVar5,iVar1);
      iVar5 = 0;
      do {
        puVar2 = (uint *)fn_0036ee88(*(undefined4 *)(param_1 + 0xb8),iVar5);
        if (puVar2 != (uint *)0x0) {
          uVar8 = *puVar2;
        }
        if (puVar2 == (uint *)0x0) {
          uVar8 = 0;
        }
        *(uint *)(*(int *)(param_1 + 0x9c) + iVar5 * 4) = uVar8;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      fn_00356ea8(param_1);
      fn_00356e10(param_1);
      fn_00357154(param_1);
      fn_00356f80(param_1);
      fn_003572cc(param_1);
      fn_0035732c(param_1);
      fn_00356aec(param_1);
      (**(code **)(**(int **)(param_1 + 0xac) + 0x38))();
    }
    else if (param_3 == 0) {
      iVar9 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x90) + iVar9 * 4) != 0) {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0036fb74(*(undefined4 *)(param_1 + 0xb8),uVar6,iVar9);
          fn_0020bbc4(auStack_28,uVar6);
          fn_006bfe90(auStack_24);
          iVar3 = fn_001cab7c();
          iVar9 = iVar3 + iVar9 + -1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
      iVar9 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x9c) + iVar9 * 4) != 0) {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0036ee94(*(undefined4 *)(param_1 + 0xb8),uVar6,iVar9);
          fn_0020bbc4(auStack_28,uVar6);
          fn_006bfe90(auStack_24);
          iVar3 = fn_001cab7c();
          iVar9 = iVar3 + iVar9 + -1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
      fn_0036ef2c(*(undefined4 *)(param_1 + 0xb8),iVar5,iVar1);
      iVar5 = 0;
      do {
        uVar10 = fn_0036fb68(*(undefined4 *)(param_1 + 0xb8),iVar5);
        uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
        puVar4 = (undefined4 *)uVar10;
        if (puVar4 != (undefined4 *)0x0) {
          uVar6 = *puVar4;
        }
        if (puVar4 == (undefined4 *)0x0) {
          uVar6 = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar5 * 4) = uVar6;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      iVar5 = 0;
      do {
        puVar4 = (undefined4 *)fn_0036ee88(*(undefined4 *)(param_1 + 0xb8),iVar5);
        uVar6 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          uVar6 = *puVar4;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar5 * 4) = uVar6;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      goto LAB_00355e94;
    }
  }
  else if (param_2 == 0 && param_3 == 1) {
    iVar9 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x90) + iVar9 * 4) != 0) {
        uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0036fb74(*(undefined4 *)(param_1 + 0xb8),uVar6,iVar9);
        fn_0020bbc4(auStack_28,uVar6);
        fn_006bfe90(auStack_24);
        iVar3 = fn_001cab7c();
        iVar9 = iVar3 + iVar9 + -1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    iVar9 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x9c) + iVar9 * 4) != 0) {
        uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0036ee94(*(undefined4 *)(param_1 + 0xb8),uVar6,iVar9);
        fn_0020bbc4(auStack_28,uVar6);
        fn_006bfe90(auStack_24);
        iVar3 = fn_001cab7c();
        iVar9 = iVar3 + iVar9 + -1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    fn_0036ef10(*(undefined4 *)(param_1 + 0xb8),iVar5,iVar1);
    iVar5 = 0;
    do {
      uVar10 = fn_0036fb68(*(undefined4 *)(param_1 + 0xb8),iVar5);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      puVar4 = (undefined4 *)uVar10;
      if (puVar4 != (undefined4 *)0x0) {
        uVar6 = *puVar4;
      }
      if (puVar4 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar5 * 4) = uVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)fn_0036ee88(*(undefined4 *)(param_1 + 0xb8),iVar5);
      if (puVar4 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar4;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar5 * 4) = uVar6;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
LAB_00355e94:
    fn_00356504(param_1);
    fn_00356aec(param_1);
    fn_00356ea8(param_1);
    fn_00356e10(param_1);
    fn_00357154(param_1);
    fn_00356f80(param_1);
    fn_003572cc(param_1);
    fn_0035732c(param_1);
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x38))();
    (**(code **)(**(int **)(param_1 + 0xac) + 0x38))();
  }
  fn_0035522c(param_1);
  fn_003571ac(param_1);
  fn_0035723c(param_1);
  if ((*(uint *)(param_1 + 0x110) & 2) == 0) {
    if ((*(uint *)(param_1 + 0x110) & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x108);
      bVar7 = *(byte *)(iVar5 + 0x44) & 0xfe;
      goto LAB_00355f98;
    }
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  uVar6 = fn_0022f750((&DAT_007bb404)[iVar5 * 2]);
  fn_00190d50(*(undefined4 *)(param_1 + 0x108),uVar6);
  if ((&UNK_007bb408)[iVar5 * 8] == '\0') {
    fn_00688fd8(*(undefined4 *)(param_1 + 0x108));
  }
  else {
    fn_00688e60();
  }
  iVar5 = *(int *)(param_1 + 0x108);
  bVar7 = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
LAB_00355f98:
  *(byte *)(iVar5 + 0x44) = bVar7;
  fn_0068ab44(param_1,0x1000959);
  return;
}


