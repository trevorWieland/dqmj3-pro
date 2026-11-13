#include "single_0017fc3c_r.h"


extern undefined4 _local_20;

void fn_0017fc3c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  uint in_s0;
  float fVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined3 local_20;
  undefined1 uStack_1d;
  
  uVar8 = (ulonglong)in_s0;
  iVar1 = fn_00183654();
  iVar2 = (int)uVar8;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_00183660(param_1,iVar4);
      if (iVar2 != 0) {
        uVar5 = *(uint *)(iVar2 + 0x60);
        puVar3 = (undefined4 *)fn_00183638(param_1,iVar4);
        fVar6 = (float)VectorUnsignedToFloat(uVar5 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
        uVar7 = VectorFloatToUnsigned(fVar6 * (float)uVar8,3);
        _local_20 = CONCAT13((char)uVar7,(int3)*puVar3);
        fn_0017fc08(param_1,iVar4,&local_20);
      }
      iVar2 = (int)uVar8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (iVar2 < 0x3f800000) {
    *(byte *)(*(int *)(param_1 + 0x148) + 0x98) = *(byte *)(*(int *)(param_1 + 0x148) + 0x98) & 0xfb
    ;
    return;
  }
  fn_0017fc28();
  return;
}


