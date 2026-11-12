#include "001dd414_001dde28b.h"



void fn_001dde28(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,0);
  if (iVar1 != 0) {
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd784(uVar2,param_1);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd7f4(uVar2,param_1);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd864(uVar2,param_1);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = fn_006acefc(*(undefined4 *)(DAT_008977e0 + 0x30),param_1);
    if (iVar1 != 0) {
      return;
    }
  }
  if ((*(char *)((int)param_1 + 0x22d) == '\0') && ((char)param_1[0x82] != -1)) {
    uVar3 = (uint)*(byte *)((int)param_1 + 0x1b1);
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = param_1[0xc3];
    }
    bVar5 = bVar4 && uVar3 == 0xffffffff;
    if (bVar4 && uVar3 == 0xffffffff) {
      bVar5 = param_1[0xc2] == -1;
    }
    if (bVar5) {
      fn_001ea890(param_1,6);
      (**(code **)(*param_1 + 0x44))(param_1,7,4,0);
      fVar6 = DAT_008917f0;
      fn_001da640(param_1);
      uVar2 = fn_006f7a48(DAT_008977e0);
      fn_006a7cb0();
      fVar7 = fVar6;
      fn_006a7cbc(uVar2);
      param_1[0xd4] = (int)fVar7;
      param_1[0xd5] = (int)fVar6;
      param_1[0xd6] = 0;
      fVar6 = (float)VectorSignedToFloat(DAT_008917f4,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = 1.0 / fVar6;
      param_1[0xd9] = (int)((float)param_1[0xd6] * fVar6);
      param_1[0xd7] = (int)((float)param_1[0xd4] * fVar6);
      param_1[0xd8] = (int)((float)param_1[0xd5] * fVar6);
      if (((short)param_1[0x104] < 1) && (param_1[0x105] != -1)) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        param_1[0x105] = -1;
      }
    }
  }
  return;
}



void fn_001ddb78(int param_1)

{
  undefined4 uVar1;
  
  fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
  uVar1 = fn_002aac5c();
  uVar1 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
  fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  fn_002cd59c();
  fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
  fn_0023e2ac(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


