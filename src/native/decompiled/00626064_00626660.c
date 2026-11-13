#include "00626064_00626660.h"



void fn_00626660(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  param_1 = param_1 + 4;
  iVar2 = 0x20;
  do {
    cVar1 = *(char *)(param_1 + iVar2 + -4);
    if ((*(char *)(param_1 + iVar2 + -0x14) != '\0') &&
       ((iVar3 = param_3 + 0x180388 + cVar1 * 0x418, *(char *)(iVar3 + -0x3c6c) == '\0' ||
        ('\0' < *(char *)(iVar3 + -0x4019))))) {
      bVar4 = iVar2 - 0x20U < 2;
      iVar3 = param_2 + *(int *)(param_2 + 4) * 0x1a0;
      *(undefined1 *)(iVar3 + 0x208a) = 4;
      *(undefined2 *)(iVar3 + 0x208c) = 8;
      *(char *)(iVar3 + 0x2088) = (char)iVar2;
      *(char *)(iVar3 + 0x2089) = cVar1;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      if (bVar4) {
        *(undefined1 *)(param_1 + iVar2 + -0x14) = 0;
      }
      else {
        *(undefined1 *)(param_1 + iVar2 + -0x14) = 0;
      }
      if (bVar4) {
        *(undefined1 *)(param_1 + iVar2 + -4) = 0;
      }
      else {
        *(undefined1 *)(param_1 + iVar2 + -4) = 0;
      }
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while (iVar2 < 0x22);
  iVar2 = 0x22;
  do {
    cVar1 = *(char *)(param_1 + iVar2 + -4);
    if ((*(char *)(param_1 + iVar2 + -0x14) != '\0') &&
       ((iVar3 = param_3 + 0x180388 + cVar1 * 0x418, *(char *)(iVar3 + -0x3c6c) == '\0' ||
        ('\0' < *(char *)(iVar3 + -0x4019))))) {
      bVar4 = iVar2 - 0x20U < 2;
      iVar3 = param_2 + *(int *)(param_2 + 4) * 0x1a0;
      *(undefined1 *)(iVar3 + 0x208a) = 4;
      *(undefined2 *)(iVar3 + 0x208c) = 8;
      *(char *)(iVar3 + 0x2088) = (char)iVar2;
      *(char *)(iVar3 + 0x2089) = cVar1;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      if (bVar4) {
        *(undefined1 *)(param_1 + iVar2 + -0x14) = 0;
      }
      else {
        *(undefined1 *)(param_1 + iVar2 + -0x14) = 0;
      }
      if (bVar4) {
        *(undefined1 *)(param_1 + iVar2 + -4) = 0;
      }
      else {
        *(undefined1 *)(param_1 + iVar2 + -4) = 0;
      }
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while (iVar2 < 0x24);
  return;
}



int fn_006265b0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  fn_0062a40c();
  iVar2 = fn_00691f44();
  if (iVar2 != 0) {
    iVar2 = fn_0061be08((int)*(char *)(param_2 + 5));
    iVar3 = 0x10;
    iVar4 = 0x14;
    if (iVar2 != 0) {
      iVar3 = 0x14;
      iVar4 = 0x18;
    }
    do {
      iVar2 = param_3 + iVar3 * 0x418;
      if (0 < *(short *)(iVar2 + -0x4080)) {
        cVar1 = *(char *)(iVar2 + -0x4019);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar2 + -0x400a);
        }
        bVar6 = bVar5 && cVar1 == '\0';
        if (bVar5 && cVar1 == '\0') {
          bVar6 = *(char *)(iVar2 + -0x4018) == '\0';
        }
        if ((bVar6) && (*(char *)(iVar2 + -0x3ff7) != '\0')) {
          return iVar3;
        }
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < iVar4);
  }
  return 0;
}



bool fn_00626398(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  iVar6 = param_2 + 0x180388;
  bVar2 = true;
  iVar4 = 0x10;
  do {
    iVar3 = iVar6 + iVar4 * 0x418;
    if (0 < *(short *)(iVar3 + -0x4080)) {
      cVar1 = *(char *)(iVar3 + -0x4019);
      bVar7 = cVar1 == '\0';
      if (bVar7) {
        cVar1 = *(char *)(iVar3 + -0x400a);
      }
      if ((bVar7 && cVar1 == '\0') && (*(char *)(iVar3 + -0x4018) == '\0')) {
        bVar2 = false;
      }
    }
    iVar4 = (int)(char)((char)iVar4 + '\x01');
  } while (iVar4 < 0x14);
  bVar7 = true;
  iVar4 = 0x14;
  do {
    iVar3 = iVar6 + iVar4 * 0x418;
    if (0 < *(short *)(iVar3 + -0x4080)) {
      cVar1 = *(char *)(iVar3 + -0x4019);
      bVar8 = cVar1 == '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar3 + -0x400a);
      }
      if ((bVar8 && cVar1 == '\0') && (*(char *)(iVar3 + -0x4018) == '\0')) {
        bVar7 = false;
      }
    }
    iVar4 = (int)(char)((char)iVar4 + '\x01');
  } while (iVar4 < 0x18);
  iVar4 = param_1 + 4;
  if (bVar2) {
    iVar3 = 0x18;
    do {
      iVar5 = iVar6 + iVar3 * 0x418;
      if (0 < *(short *)(iVar5 + -0x4080)) {
        cVar1 = *(char *)(iVar5 + -0x4019);
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar5 + -0x400a);
        }
        bVar9 = bVar8 && cVar1 == '\0';
        if (bVar8 && cVar1 == '\0') {
          bVar9 = *(char *)(iVar5 + -0x4018) == '\0';
        }
        if ((bVar9) && (0 < *(short *)(iVar5 + -0x4064))) {
          fn_0065628c(iVar4,1);
          bVar2 = false;
          break;
        }
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < 0x1c);
  }
  if (bVar7) {
    iVar3 = 0x1c;
    do {
      iVar5 = iVar6 + iVar3 * 0x418;
      if (0 < *(short *)(iVar5 + -0x4080)) {
        cVar1 = *(char *)(iVar5 + -0x4019);
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar5 + -0x400a);
        }
        bVar9 = bVar8 && cVar1 == '\0';
        if (bVar8 && cVar1 == '\0') {
          bVar9 = *(char *)(iVar5 + -0x4018) == '\0';
        }
        if ((bVar9) && (0 < *(short *)(iVar5 + -0x4064))) {
          fn_0065628c(iVar4,0);
          bVar7 = false;
          break;
        }
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < 0x20);
  }
  if (bVar2) {
    fn_00655dd4(iVar4,1);
  }
  if (bVar7) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(undefined1 *)(param_2 + 0x185eec) = 1;
    }
    fn_00655dd4(iVar4,0);
    bVar2 = true;
  }
  return bVar2;
}



void fn_006261c8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar5 = fn_0062a40c(param_1);
  uVar10 = 0;
  uVar3 = 0;
  iVar6 = fn_001639e4();
  if ((iVar6 == 0x21) || (iVar6 = fn_001639e4(uVar5), iVar6 == 0x22)) {
    uVar10 = fn_00691af0(uVar5,1);
    uVar3 = fn_00691af0(uVar5,0);
  }
  iVar6 = fn_006553d0(uVar10);
  if (iVar6 != 0) {
    cVar2 = *(char *)(param_2 + 5);
    iVar6 = (int)cVar2;
    uVar7 = iVar6 - 0x10;
    bVar12 = uVar7 < 4;
    if (!bVar12) {
      uVar7 = iVar6 - 0x18;
    }
    if ((bVar12 || uVar7 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x14;
    }
    iVar8 = fn_0061be08(iVar6);
    if (iVar8 == 0) {
      uVar9 = 0x18;
    }
    else {
      uVar9 = 0x14;
    }
    if (uVar7 < uVar9) {
      param_3 = param_3 + 0x180388;
      do {
        iVar8 = param_3 + uVar7 * 0x418;
        if (0 < *(short *)(iVar8 + -0x4080)) {
          cVar1 = *(char *)(iVar8 + -0x4019);
          bVar12 = cVar1 == '\0';
          if (bVar12) {
            cVar1 = *(char *)(iVar8 + -0x400a);
          }
          bVar11 = bVar12 && cVar1 == '\0';
          if (bVar12 && cVar1 == '\0') {
            bVar11 = *(char *)(iVar8 + -0x4018) == '\0';
          }
          if (bVar11) {
            iVar8 = param_4 + *(int *)(param_4 + 4) * 0x1a0;
            *(undefined2 *)(iVar8 + 0x20a0) = 1;
            *(undefined1 *)(iVar8 + 0x20e1) = uVar3;
            uVar4 = fn_006207d0(1,uVar7,param_3);
            *(undefined1 *)(iVar8 + 0x2142) = uVar4;
            *(undefined1 *)(iVar8 + 0x208a) = 4;
            *(undefined2 *)(iVar8 + 0x208c) = 0xb;
            *(char *)(iVar8 + 0x2088) = cVar2;
            *(char *)(iVar8 + 0x2089) = (char)uVar7;
            *(undefined1 *)(iVar8 + 0x208e) = 9;
            *(undefined1 *)(iVar8 + 0x208f) = 8;
            *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
            fn_0062454c(param_1,(char *)(iVar8 + 0x2088),param_3,0,1);
            fn_00654bf4(param_3,*(undefined4 *)(iVar8 + 0x221c));
            fn_00654c30(param_3,*(undefined4 *)(iVar8 + 0x2220));
          }
        }
        uVar7 = (uint)(char)((char)uVar7 + '\x01');
        iVar8 = fn_0061be08(iVar6);
        if (iVar8 == 0) {
          iVar8 = 0x18;
        }
        else {
          iVar8 = 0x14;
        }
      } while ((int)uVar7 < iVar8);
    }
  }
  return;
}



void fn_00626064(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5
                 )

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 local_28;
  
  *(char *)(param_5 + 5) = (char)*param_3;
  *(char *)((int)param_5 + 0x15) = (char)param_3[1];
  iStack_34 = param_1;
  uStack_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  uVar2 = fn_0061dcc4(*(uint *)(param_1 + 0x1c) & 0xffff,param_4);
  *param_5 = uVar2;
  fn_0062a40c(param_1,param_2);
  local_38[0] = fn_00691860();
  fn_0062a40c(param_1,param_2);
  local_38[1] = fn_0069187c();
  uVar4 = 0;
  do {
    *(undefined1 *)(param_5 + uVar4 * 2 + 1) = local_38[uVar4];
    iVar3 = fn_0069180c();
    if (iVar3 == 0) {
      param_5[uVar4 * 2 + 2] = 100;
    }
    else {
      uVar1 = fn_006f08e4(param_1 + 0x24,local_38[uVar4]);
      uVar2 = fn_00620ae4(uVar1,local_28);
      param_5[uVar4 * 2 + 2] = uVar2;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  iVar3 = 0;
  if (0 < *param_3) {
    do {
      fn_0062936c(param_1,param_3 + iVar3 * 0x68 + 2,param_5 + iVar3 * 0x31 + 6);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_3);
  }
  iVar3 = 0;
  if (0 < param_3[1]) {
    do {
      fn_0062936c(param_1,param_3 + iVar3 * 0x68 + 0x822,param_5 + iVar3 * 0x31 + 0x3da);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3[1]);
  }
  return;
}


