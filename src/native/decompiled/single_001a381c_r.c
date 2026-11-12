#include "single_001a381c_r.h"


extern undefined4 sRam008f0bcc;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_001a381c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  if (0x7fff < param_1) {
    return 0;
  }
  fn_00170704(&DAT_008f0bd0);
  iVar1 = fn_001a9bd8(_DAT_008f0bc0);
  iVar3 = DAT_008f0bc8;
  if (iVar1 == 0x18) {
    if ((*(int *)(DAT_008f0bc8 + 0x20) == 0x7fff) || ((int)param_1 < *(int *)(DAT_008f0bc8 + 0x20)))
    {
      fn_001707b4(&DAT_008f0bd0);
      return 0;
    }
    pcVar5 = *(code **)(DAT_008f0bc8 + 0x2c);
    uVar6 = *(undefined4 *)(DAT_008f0bc8 + 0x30);
    fn_0019e9c0(&DAT_008f0bc0);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar3,uVar6);
    }
  }
  iVar1 = 0;
  iVar3 = -LZCOUNT(_DAT_008f0bc0 + 1 & ~_DAT_008f0bc0);
  uVar2 = iVar3 + 0x1f;
  if ((iVar3 != -0x20) && ((int)uVar2 < 0x18)) {
    _DAT_008f0bc0 = _DAT_008f0bc0 | 1 << (uVar2 & 0xff);
    sRam008f0bcc = sRam008f0bcc + 1;
    iVar1 = (&DAT_008f249c)[uVar2];
    fn_001a981c(iVar1);
  }
  *(uint *)(iVar1 + 0x20) = param_1;
  iVar3 = DAT_008f0bc4;
  if (DAT_008f0bc4 == 0) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
    DAT_008f0bc4 = iVar1;
    *(undefined4 *)(iVar1 + 0x28) = 0;
LAB_001a7b44:
    DAT_008f0bc8 = iVar1;
  }
  else {
    while ((int)param_1 < *(int *)(iVar3 + 0x20)) {
      if (*(int *)(iVar3 + 0x28) == 0) {
        *(int *)(iVar3 + 0x28) = iVar1;
        *(int *)(iVar1 + 0x24) = iVar3;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        goto LAB_001a7b44;
      }
      iVar3 = *(int *)(iVar3 + 0x28);
    }
    iVar4 = *(int *)(iVar3 + 0x24);
    *(int *)(iVar1 + 0x28) = iVar3;
    *(int *)(iVar1 + 0x24) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar1 + 0x24) = 0;
      DAT_008f0bc4 = iVar1;
    }
    else {
      *(int *)(iVar4 + 0x28) = iVar1;
    }
    *(int *)(iVar3 + 0x24) = iVar1;
  }
  fn_001707b4(&DAT_008f0bd0);
  fn_0019f2d4(*(undefined4 *)(iVar1 + 0x68),2);
  *(short *)(*(int *)(iVar1 + 0x68) + 4) = *(short *)(*(int *)(iVar1 + 0x68) + 4) + 1;
  *(undefined4 *)(iVar1 + 0x2c) = param_2;
  *(undefined4 *)(iVar1 + 0x30) = param_3;
  return iVar1;
}


