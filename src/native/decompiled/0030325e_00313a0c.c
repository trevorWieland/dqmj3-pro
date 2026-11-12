#include "0030325e_00313a0c.h"



int fn_00313a0c(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((int)*param_2 - 0x10U < 8) {
    iVar2 = fn_00145b00(0xb0,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = fn_00238e44(iVar2,*param_2);
    }
    uVar3 = (uint)(char)(*param_2 + -0x10);
    if ((((-1 < (int)uVar3) && (uVar3 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)))
        && (iVar1 != 0)) && (piVar4 = (int *)(*(int *)(param_1 + 4) + uVar3 * 4), *piVar4 == 0)) {
      *piVar4 = iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_00312d68(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  
  fn_00748448();
  piVar9 = *(int **)(param_1[0x37] + 0x44);
  iVar10 = *(int *)(*(int *)(param_1[0x37] + 0x3c) + 4);
  fn_005f6270(piVar9);
  fn_005f6270(*(undefined4 *)(param_1[0x37] + 0x48));
  switch((char)param_1[0x34]) {
  case '\x01':
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    break;
  case '\x02':
    iVar10 = fn_006f6a6c(param_1);
    if (iVar10 == 3) {
      cVar1 = *(char *)((int)param_1 + 0xd1);
      *(char *)(param_1 + 0x34) = cVar1;
      *(undefined1 *)((int)param_1 + 0xd1) = 0;
      if (cVar1 == '\x04') {
        uVar6 = fn_002525a0(1);
        fn_00747f94(param_1,uVar6,0,1,1,0);
        fn_00328984(param_1,0);
        return;
      }
    }
    else {
      iVar10 = fn_006f6a6c(param_1);
      if (iVar10 == 2) {
        *(undefined1 *)(param_1 + 0x34) = 1;
        *(undefined1 *)((int)param_1 + 0xd1) = 0;
        return;
      }
    }
    break;
  case '\x03':
    fn_006899f4(param_1,0xf8,1);
    fn_0025264c();
    (**(code **)(*param_1 + 0x13c))(param_1,0xf8);
    uVar2 = 0;
    goto LAB_00313604;
  case '\x04':
    iVar10 = fn_006f6a6c(param_1);
    if (iVar10 == 1) {
      *(undefined1 *)(param_1 + 0x34) = 5;
      uVar6 = fn_002525a0(2);
      fn_00747f94(param_1,uVar6,0,1,1,0);
      return;
    }
    break;
  case '\x05':
    iVar10 = fn_006f6a6c(param_1);
    if (iVar10 == 1) {
      uVar6 = fn_002525a0(3);
      fn_00747f94(param_1,uVar6,1,1,0,0);
      *(undefined1 *)(param_1[0x17] + 0x51) = 1;
      uVar6 = fn_0022f750((char *)&DAT_00313238);
      uVar8 = fn_0022f750((char *)&DAT_00313240);
      fn_0036c3fc(param_1[0x17],uVar8,uVar6);
      uVar2 = 6;
      goto LAB_00313604;
    }
    break;
  case '\x06':
    *(undefined1 *)(DAT_00897850 + 0x3c) = 1;
    uVar6 = (**(code **)(**(int **)(iVar10 + 8) + 0x14))();
    fn_0066e4a4(DAT_00897850,0,uVar6);
    fn_00675bcc(piVar9,9,1,8,fn_00312c90);
    *(undefined1 *)(param_1[0x38] + 8) = 1;
    *(undefined4 *)(param_1[0x38] + 0x10) = 0xda;
    fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),0);
    *(undefined1 *)(param_1[0x17] + 0x30) = 1;
    fn_0025264c();
    fn_0068993c(param_1,0xfe,0x39,0,0);
    goto LAB_00313600;
  case '\a':
    fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),0);
    iVar7 = fn_00443e84(iVar10,1);
    if ((iVar7 != 0) && (iVar10 = fn_003dcd5c(*(undefined4 *)(iVar10 + 8),1), iVar10 != 0)) {
      uVar2 = *(undefined1 *)((int)param_1 + 0xd1);
      goto LAB_00313604;
    }
    break;
  case '\b':
    param_1[0x35] = param_1[0x35] + 1;
    fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),4);
    iVar10 = fn_00443e84(iVar10,1);
    if (iVar10 != 0) {
      *(undefined1 *)(param_1 + 0x34) = 0xc;
      param_1[0x36] = 0xf9;
      return;
    }
    break;
  case '\t':
    fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),3);
    iVar10 = fn_00443e84(iVar10,1);
    if (iVar10 != 0) {
      *(undefined1 *)(param_1 + 0x34) = 0xc;
      param_1[0x36] = 0xfa;
      return;
    }
    break;
  case '\n':
    fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),2);
    iVar10 = param_1[0x35];
    param_1[0x35] = iVar10 + 1;
    if (0x96 < iVar10 + 1) {
      *(undefined1 *)(param_1[0x38] + 8) = 0;
      fn_0068993c(param_1,0x39,0xfe,0,0);
      fn_0036c340(param_1[0x17]);
      fn_001296e8(DAT_00898840);
      *(undefined1 *)(param_1[0x38] + 9) = 0;
      *(undefined1 *)(param_1[0x38] + 10) = 0;
      fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),0);
      *(undefined1 *)(param_1 + 0x34) = 1;
      param_1[0x35] = 0;
      return;
    }
    break;
  case '\v':
    iVar10 = fn_006f6a6c(param_1);
    if (iVar10 != 1) {
      return;
    }
    uVar6 = fn_002525a0(3);
    fn_00747f94(param_1,uVar6,1,1,1,0);
    *(undefined1 *)(param_1[0x17] + 0x51) = 1;
    uVar6 = fn_0022f750((char *)&DAT_00313238);
    uVar8 = fn_0022f750((char *)&DAT_00313240);
    fn_0036c3fc(param_1[0x17],uVar8,uVar6);
LAB_00313600:
    uVar2 = 0xd;
LAB_00313604:
    *(undefined1 *)(param_1 + 0x34) = uVar2;
    return;
  case '\f':
    param_1[0x35] = param_1[0x35] + 1;
    (**(code **)(*(int *)param_1[0x39] + 0xc))();
    if (*(int *)(param_1[0x39] + 4) == 999) {
      if (param_1[0x36] == 0xf9) {
        puVar4 = (undefined4 *)fn_001f74d8(param_1,0xfe);
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
          do {
            if (puVar5 == &DAT_00892cf0) goto LAB_0031341c;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        puVar4 = (undefined4 *)0x0;
LAB_0031341c:
        *(undefined1 *)((int)puVar4 + 9) = 1;
        fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),4);
        iVar10 = fn_003dcd5c(*(undefined4 *)(iVar10 + 8),1,5);
        if (iVar10 != 0) {
          if ((uint)param_1[0x35] < 0x1e) {
            return;
          }
          goto LAB_003133ac;
        }
      }
      else {
        fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),3);
        iVar10 = fn_003dcd5c(*(undefined4 *)(iVar10 + 8),1,3);
        if (iVar10 != 0) {
LAB_003133ac:
          fn_0036c340(param_1[0x17]);
          fn_00689824(param_1,1);
          fn_006899f4(param_1,param_1[0x36],0);
          return;
        }
      }
    }
    break;
  case '\r':
    iVar10 = fn_006f6a6c(param_1);
    if (iVar10 == 3) {
      uVar3 = fn_0066e3bc(DAT_00898840);
      if (uVar3 < 2) {
        iVar10 = param_1[0x17];
        *(undefined4 *)(iVar10 + 0x38) = 0;
        *(undefined1 *)(iVar10 + 0x5f) = 1;
        uVar6 = fn_002525a0(4);
        fn_00747f94(param_1,uVar6,0,1,1,0);
        uVar2 = 0xb;
        goto LAB_00313604;
      }
      fn_00689824(param_1,0);
      iVar10 = (**(code **)(*piVar9 + 0x14))(piVar9);
      bVar11 = iVar10 == 0;
      if (bVar11) {
        iVar10 = piVar9[0x11];
      }
      if ((bVar11 && iVar10 == 0) && (iVar10 = fn_0066e224(DAT_00898840), iVar10 != 0)) {
        fn_0066eb90(DAT_00898840);
        uVar6 = fn_0066e3bc(DAT_00898840);
        fn_0066e6f0(DAT_00898840,1,uVar6);
        *(undefined1 *)(DAT_00898840 + 0x50) = 1;
        puVar4 = (undefined4 *)fn_001f74d8(param_1,0xfe);
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
          do {
            if (puVar5 == &DAT_00892cf0) goto LAB_00313158;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        puVar4 = (undefined4 *)0x0;
LAB_00313158:
        iVar10 = fn_0066e3bc(DAT_00898840);
        if (iVar10 < 8) {
          *(undefined1 *)(param_1[0x17] + 0x31) = 0;
          *(undefined1 *)(param_1 + 0x34) = 7;
          *(undefined1 *)((int)param_1 + 0xd1) = 9;
        }
        else {
          uVar6 = fn_002525a0(0xd);
          fn_00748024(param_1,uVar6);
          *(undefined1 *)(param_1 + 0x34) = 7;
          *(undefined1 *)((int)param_1 + 0xd1) = 8;
          *(undefined1 *)(param_1[0x39] + 0x15) = 1;
        }
        iVar10 = param_1[0x17];
        *(undefined4 *)(iVar10 + 0x38) = 0;
        *(undefined1 *)(iVar10 + 0x5f) = 1;
        uVar6 = fn_002525a0(0xd);
        fn_00748024(param_1,uVar6);
        *(undefined1 *)(puVar4 + 2) = 0;
        return;
      }
    }
    else {
      iVar10 = fn_006f6a6c(param_1);
      if (iVar10 == 2) {
        iVar10 = (**(code **)(*piVar9 + 0x14))(piVar9);
        bVar11 = iVar10 == 0;
        if (bVar11) {
          iVar10 = piVar9[0x11];
        }
        if ((bVar11 && iVar10 == 0) && (iVar10 = fn_0066e224(DAT_00898840), iVar10 != 0)) {
          fn_0066eb90(DAT_00898840);
        }
        iVar10 = param_1[0x17];
        *(undefined4 *)(iVar10 + 0x38) = 0;
        *(undefined1 *)(iVar10 + 0x5f) = 1;
        uVar6 = fn_002525a0(5);
        fn_00747f94(param_1,uVar6,0,1,0,0);
        *(undefined1 *)(param_1[0x17] + 0x51) = 1;
        param_1[0x35] = 0;
        *(undefined1 *)(param_1 + 0x34) = 10;
        *(undefined1 *)((int)param_1 + 0xd1) = 0;
        fn_0025265c();
        fn_0040f564(*(undefined4 *)(param_1[0x37] + 0x3c),2);
        fn_0066e620(DAT_00898840,1);
        return;
      }
    }
  }
  return;
}



void fn_00311824(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &PTR_FUN_008224e4;
  iVar2 = fn_00145b00(0x114,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002fa328();
  }
  puVar1[1] = uVar3;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = param_3;
  *(undefined1 *)((int)puVar1 + 0x12) = 0xff;
  return;
}



void fn_0030dc80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x114,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_002fa328();
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_002feef8(iVar1);
    }
    *(int *)(param_1 + 0x48) = iVar2;
  }
  fn_002f96c4(*(undefined4 *)(param_1 + 0x48),param_2,param_1,2);
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return;
}



void fn_003040f4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 *
fn_0030325e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = param_3;
  iVar1 = fn_00303234(param_3,0,param_3,param_4,param_4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_002febd8();
    uVar2 = fn_002fec38(iVar1 + 1);
    fn_002fec40(uVar2,param_1[1]);
    param_1[1] = uVar2;
  }
  fn_00303234(param_3,param_2);
  return param_1;
}


