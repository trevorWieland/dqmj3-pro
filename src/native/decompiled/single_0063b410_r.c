#include "single_0063b410_r.h"


extern undefined4 _local_18;

void fn_0063b410(int param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint3 local_18;
  undefined1 uStack_15;
  uint local_14;
  
  uVar1 = *(ushort *)(param_4 + 0x280);
  _local_18 = CONCAT13(param_3,(uint3)uVar1);
  local_14 = (uint)*(byte *)(param_4 + 0x282);
  cVar2 = (char)*(undefined2 *)(param_4 + 0x282);
  if ((int)cVar2 - 0x10U < 8) {
    iVar4 = *(int *)(param_1 + 8) + cVar2 * 0x418;
    if (0 < *(short *)(iVar4 + -0x4080)) {
      cVar2 = *(char *)(iVar4 + -0x4019);
      bVar6 = cVar2 == '\0';
      if (bVar6) {
        cVar2 = *(char *)(iVar4 + -0x400a);
      }
      bVar7 = bVar6 && cVar2 == '\0';
      if (bVar6 && cVar2 == '\0') {
        bVar7 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar7) goto LAB_0063b4ec;
    }
    if ((*(short *)(param_1 + 0x1a) == *(short *)(param_1 + 0x1c)) ||
       (iVar4 = fn_00655488(), iVar4 == 0)) {
      cVar2 = *(char *)(param_1 + 0x18);
    }
    else {
      cVar2 = *(char *)(param_1 + 0x18) + '\x01';
    }
    uVar5 = fn_0065e448((int)(short)uVar1,(int)cVar2);
    uVar3 = fn_0063b5c0(param_1,(int)(short)uVar1,uVar5);
    local_14 = CONCAT31(((unsigned int)(local_14) >> 8) & 0xffffff,uVar3);
  }
LAB_0063b4ec:
  fn_00656458(param_2,&local_18);
  return;
}


