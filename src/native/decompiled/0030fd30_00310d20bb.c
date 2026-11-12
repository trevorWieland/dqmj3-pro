#include "0030fd30_00310d20bb.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00310d20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)*param_2;
  *(uint *)(param_1 + 4) = uVar2;
  if ((uVar2 << 0x18 | ((uVar2 & 0xffff) >> 8) << 0x10 | ((uVar2 & 0xffffff) >> 0x10) << 8 |
      uVar2 >> 0x18) !=
      (_DAT_008981c8 << 0x18 | ((_DAT_008981c8 & 0xffff) >> 8) << 0x10 |
       ((_DAT_008981c8 & 0xffffff) >> 0x10) << 8 | _DAT_008981c8 >> 0x18)) {
    param_2 = (undefined4 *)*param_2;
    uVar1 = *param_3;
    *param_2 = uVar1;
    param_2[1] = uVar1;
  }
  return;
}



void fn_00310c40(undefined4 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint in_fpscr;
  float fVar5;
  
  fVar1 = (float)(uint)*(ushort *)param_2[1];
  fVar5 = (float)VectorUnsignedToFloat(fVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (fVar5 == 1.0) {
    puVar4 = (ushort *)param_2[1] + 1;
    iVar2 = fn_00230b74(puVar4);
    iVar2 = iVar2 + 1;
    uVar3 = fn_001287d4(iVar2 * 2,&DAT_00812c8c);
    fn_0022f774(uVar3,iVar2,puVar4);
    fn_001915c8(*param_2,uVar3,iVar2);
    if (((int)fVar1 & 0x80000001U) == 1) {
      fVar1 = (float)VectorSignedToFloat((int)fVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
    }
    fVar5 = fVar1;
    fn_002feca8(uVar3);
  }
  fVar1 = (*(float *)(*param_2 + 0x30) - fVar5) * 0.5;
  if (((int)fVar1 & 0x80000001U) == 1) {
    fVar1 = (float)VectorSignedToFloat((int)fVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
  }
  *(float *)(*param_2 + 0x10) = fVar1;
  return;
}



int fn_00310b08(int param_1,int param_2)

{
  return (int)*(short *)(DAT_008928b0 + param_1 * 8 + param_2 * 2);
}



undefined4 * fn_00310a10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00822348;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = &DAT_00859420;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  return puVar1;
}


