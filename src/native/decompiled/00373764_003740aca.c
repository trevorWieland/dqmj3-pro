#include "00373764_003740aca.h"



int fn_00373b18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_00145ac0(DAT_00896ca0);
  iVar2 = fn_00145ac0(DAT_00896ca0);
  iVar3 = *(int *)(iVar2 + 8);
  iVar2 = fn_00145ac0(DAT_00896ca0);
  return iVar2 + iVar3 + ((uint)*(ushort *)(iVar1 + param_1 * 4 + 0xc) + param_2) * 4 + 4;
}



int fn_00373a58(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = fn_0014481c(DAT_008977e8);
  uVar2 = fn_006b71a8(uVar2,param_2);
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6c30();
  if (iVar3 != 0) {
    fn_0014481c(DAT_008977e8);
    iVar3 = fn_006b6740();
    if (0 < iVar3) {
      fn_0014481c(DAT_008977e8);
      fn_006b6c30();
      iVar3 = fn_006b6724();
      if (iVar3 != 0) {
        fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6c30();
        cVar1 = *(char *)(iVar4 + 0x78);
        iVar4 = fn_00156f30(uVar2,0);
        if (cVar1 == iVar4) {
          return 0;
        }
      }
      return iVar3;
    }
  }
  return 0;
}



bool fn_00373a0c(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b71a8(uVar2,param_2);
  cVar1 = *(char *)(iVar3 + 400);
  uVar2 = fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b71a8(uVar2,param_2);
  return cVar1 == *(char *)(iVar3 + 0x129);
}



undefined4 fn_0037389c(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar5 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    uVar9 = 0x3dcccccd;
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar1,uVar5 & 0xff);
      iVar4 = fn_00156f30(iVar3,0);
      if ((iVar4 != *(char *)(iVar2 + 0x219)) && (iVar4 = fn_006f8074(iVar3), iVar4 != 0)) {
        iVar3 = *(int *)(iVar3 + 0xfc);
        uVar1 = fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6f3c(uVar1,param_2,0);
        fVar6 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
        fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
        fVar7 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
        if ((int)(SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) * (float)uVar9) < 0x42200001)
        {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar5 < iVar3);
  }
  return 0;
}



undefined4 fn_00373764(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b71a8(uVar1,param_2);
  uVar5 = 0;
  fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6bc4();
  if (0 < iVar3) {
    uVar9 = 0x3dcccccd;
    do {
      uVar1 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b71a8(uVar1,uVar5 & 0xff);
      iVar4 = fn_00156f30(iVar3,0);
      if ((iVar4 != *(char *)(iVar2 + 0x219)) && (iVar4 = fn_006f8074(iVar3), iVar4 != 0)) {
        iVar3 = *(int *)(iVar3 + 0xfc);
        uVar1 = fn_0014481c(DAT_008977e8);
        iVar4 = fn_006b6f3c(uVar1,param_2,0);
        fVar6 = *(float *)(iVar3 + 8) - *(float *)(iVar4 + 8);
        fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar4 + 0xc);
        fVar7 = *(float *)(iVar3 + 0x10) - *(float *)(iVar4 + 0x10);
        if ((int)(SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) * (float)uVar9) < 0x41f00001)
        {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6bc4();
    } while ((int)uVar5 < iVar3);
  }
  return 0;
}


