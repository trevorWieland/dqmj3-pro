#include "001f15f0_001f18bc.h"



undefined4 fn_001f18bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_0029d8c4(iVar1,param_2,param_3), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



void fn_001f1888(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
    if (iVar1 != 0) {
      fn_00686554(iVar1,param_3);
      return;
    }
  }
  return;
}



void fn_001f1864(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c));
  *(undefined4 *)(param_1 + 0xe5c) = uVar1;
  return;
}



void fn_001f17f4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_006abd58(param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  param_1 = param_1 + param_2 * 0x2c;
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (piVar2 = *(int **)(param_1 + 0x8c), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2,iVar1 + 0x20);
  }
  piVar2 = *(int **)(param_1 + 0x8c);
                    /* WARNING: Could not recover jumptable at 0x001f185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x14))(piVar2,iVar1 + 0x2c);
  return;
}



void fn_001f17e0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((0x3f < param_2) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 == 0)) {
    return;
  }
  if (param_3 == 0) {
    bVar2 = *(byte *)(iVar1 + 0xc) & 0xf8;
  }
  else {
    bVar2 = *(byte *)(iVar1 + 0xc) | 7;
  }
  *(byte *)(iVar1 + 0xc) = bVar2;
  return;
}



void fn_001f17bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = fn_006f72b4(DAT_008977e0);
  iVar2 = fn_006f7358(DAT_008977e0);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      iVar2 = fn_006f7a84(DAT_008977e0);
      uVar6 = 0;
      uStack_24 = 0;
      uStack_28 = VectorSignedToFloat((int)(*(float *)(iVar2 + 0x28) * *(float *)(iVar1 + 0x188)),
                                      (byte)(in_fpscr >> 0x16) & 3);
      uStack_2c = VectorSignedToFloat((int)-(*(float *)(iVar2 + 0x20) * *(float *)(iVar1 + 0x188)),
                                      (byte)(in_fpscr >> 0x16) & 3);
      fn_0054ca94(*(undefined4 *)(iVar1 + 0x68),&uStack_2c);
      uStack_38 = uVar6;
      uStack_34 = uVar6;
      uStack_30 = uVar6;
      fn_0054ca94(*(undefined4 *)(iVar1 + 0x60),&uStack_38);
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
    *(char *)(iVar1 + 0x68c) = (char)param_2;
    piVar5 = *(int **)(iVar1 + 0x20c);
    for (piVar4 = (int *)*piVar5; piVar4 != piVar5; piVar4 = (int *)*piVar4) {
      if (*(char *)(iVar1 + 0x68c) == '\0') {
        iVar2 = piVar4[5];
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xbf;
        }
        iVar2 = piVar4[6];
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xbf;
        }
      }
      else {
        if (piVar4[5] != 0) {
          fn_0021e55c(iVar1);
        }
        if (piVar4[6] != 0) {
          fn_0021e55c(iVar1);
        }
      }
    }
    if ((*(char *)(iVar1 + 0x68c) != '\0') &&
       (uVar3 = 0, *(int *)(iVar1 + 0x228) - *(int *)(iVar1 + 0x224) >> 2 != 0)) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x224) + uVar3 * 4);
        uVar3 = uVar3 + 1;
        *(undefined1 *)(iVar2 + 0x45) = 0;
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      } while (uVar3 < (uint)(*(int *)(iVar1 + 0x228) - *(int *)(iVar1 + 0x224) >> 2));
    }
  }
  return;
}



void fn_001f1798(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f7508(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x00365e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x24) + 0x18))(*(int **)(iVar1 + 0x24),param_2,iVar1 + 0x18);
  return;
}



void fn_001f1744(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1;
  if (6 < uVar1) {
    if (param_2 != 0x32) {
      return;
    }
    uVar1 = 7;
  }
  fn_00158f20(*(undefined4 *)(DAT_00897804 + 0x1c),uVar1);
  fn_0024281c(*(undefined4 *)(DAT_00897804 + 0x1c),uVar1,100);
  return;
}



void fn_001f16f4(int param_1)

{
  undefined4 uVar1;
  
  fn_001ce9ec();
  uVar1 = fn_0011c1b4(L"rom:/data/Script/Field/FieldCommon.nut",0,0,0,0,0,0,0,5);
  *(undefined4 *)(param_1 + 0xf8c) = uVar1;
  return;
}



void fn_001f16d8(void)

{
  int iVar1;
  
  iVar1 = fn_006f756c(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x006babfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar1 + 0x58) + 0x10))();
  return;
}



void fn_001f16c4(void)

{
  fn_002e2df0(*(undefined4 *)(DAT_00897804 + 0x20));
  return;
}



void fn_001f16ac(void)

{
  fn_002426c8(*(undefined4 *)(DAT_00897804 + 0x1c),0xffffffff);
  return;
}



void fn_001f1650(int param_1,uint param_2)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    if (*(char *)(iVar1 + 0xdc) == '\x02') {
      fn_00211070(iVar1,*(undefined4 *)(param_1 + 0x80),0);
      return;
    }
    if (*(char *)(iVar1 + 0xdc) == '\x03') {
      fn_0068655c(iVar1,*(undefined4 *)(param_1 + 0x80));
      return;
    }
  }
  return;
}



void fn_001f162c(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f75ac(DAT_008977e0);
  fn_00246484(uVar1,param_2);
  return;
}



void fn_001f1618(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((0x3f < param_2) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 == 0)) {
    return;
  }
  if (param_3 == 0) {
    bVar2 = *(byte *)(iVar1 + 0xc) & 0xfc;
  }
  else {
    bVar2 = *(byte *)(iVar1 + 0xc) | 3;
  }
  *(byte *)(iVar1 + 0xc) = bVar2;
  return;
}



void fn_001f1604(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((0x3f < param_2) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 == 0)) {
    return;
  }
  if (param_3 == 0) {
    bVar2 = *(byte *)(iVar1 + 0xc) & 0xe7;
  }
  else {
    bVar2 = *(byte *)(iVar1 + 0xc) | 0x18;
  }
  *(byte *)(iVar1 + 0xc) = bVar2;
  return;
}



void fn_001f15f0(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((param_2 < 0x40) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0xe) = param_3;
  }
  return;
}


