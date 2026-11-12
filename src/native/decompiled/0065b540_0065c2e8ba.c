#include "0065b540_0065c2e8ba.h"



void fn_0065be44(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
  fVar2 = (float)VectorUnsignedToFloat((uint)(iVar1 != 0),(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = fn_006ec284(*(undefined4 *)(param_1 + 0xe4));
  if (*(float *)(iVar1 + 4) == fVar2) {
    return;
  }
  fn_005ef514(*(undefined4 *)(param_1 + 0xe4));
  return;
}



undefined4 fn_0065bdec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  
  uVar1 = fn_002113c8();
  iVar2 = fn_006f7a0c(DAT_008977e0);
  iVar2 = fn_006c3a70(*(undefined4 *)(iVar2 + 0x30));
  VectorUnsignedToFloat((uint)(iVar2 != 0),(byte)(in_fpscr >> 0x16) & 3);
  fn_005ef514(*(undefined4 *)(param_1 + 0xe4));
  fn_001da640(param_1);
  return uVar1;
}



void fn_0065bdbc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_00850c24;
  return;
}


