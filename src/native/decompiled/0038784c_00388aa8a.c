#include "0038784c_00388aa8a.h"



void fn_00388850(void)

{
  DAT_0089289c = 0;
  DAT_008928a0 = 0;
  return;
}



int fn_00388784(uint param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar5 = 0;
  uVar4 = 1;
  if (param_1 != 0) {
    uVar9 = 0;
    fVar7 = 1.0;
    uVar10 = 0x3e4ccccd;
    do {
      sVar1 = 0;
      iVar2 = (int)*(short *)(DAT_0089289c + uVar4 * 4 + -4);
      if (iVar2 != 0) {
        fVar6 = (float)((ulonglong)uVar9 >> 0x20);
        uVar3 = 0;
        uVar8 = VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        uVar9 = CONCAT44(fVar6,uVar8);
        do {
          iVar2 = fn_0068f818((int)*(short *)(param_2 + uVar3 * 4 + 0x56));
          if (iVar2 != 0) {
            fVar6 = fVar6 + fVar7;
          }
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < 7);
        fVar6 = fVar6 * (float)uVar10 * (float)uVar9;
        fn_006f9f20();
        sVar1 = (short)(int)fVar6;
      }
      uVar4 = uVar4 + 1 & 0xff;
      iVar5 = (int)(short)(sVar1 + (short)iVar5);
    } while (uVar4 <= param_1);
  }
  return iVar5;
}



int fn_00388758(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(DAT_0089289c + param_1 * 4 + -4);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



int fn_003886bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  iVar1 = 0;
  iVar2 = (int)*(short *)(DAT_0089289c + param_1 * 4 + -4);
  if (iVar2 != 0) {
    uVar6 = 0x3f800000;
    fVar4 = 0.0;
    uVar3 = 0;
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    do {
      iVar1 = fn_0068f818((int)*(short *)(param_2 + uVar3 * 4 + 0x56));
      if (iVar1 != 0) {
        fVar4 = fVar4 + (float)uVar6;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 7);
    fVar5 = fVar4 * 0.2 * fVar5;
    fn_006f9f20();
    iVar1 = (int)(short)(int)fVar5;
  }
  return iVar1;
}



void fn_00388314(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_0038837c,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x7c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}



void fn_0038784c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    while (puVar1 != &DAT_00895b24) {
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar2 + 0xd) = 0;
    }
  }
  return;
}


