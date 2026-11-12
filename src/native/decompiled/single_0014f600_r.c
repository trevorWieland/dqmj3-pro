#include "single_0014f600_r.h"


extern undefined4 fRam008f34c4;
extern undefined4 fRam008f34c0;
extern undefined4 fRam008ef570;

void fn_0014f600(void)

{
  int iVar1;
  uint *puVar2;
  float in_s0;
  float fVar3;
  
  if (DAT_008ef56c == '\0') {
    return;
  }
  fRam008ef570 = in_s0;
  if (DAT_008f34bc == '\0') {
    return;
  }
  fVar3 = in_s0 * fRam008f34c4;
  fRam008f34c0 = in_s0;
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return;
  }
  puVar2 = *(uint **)(&DAT_008f0660 + (uint)DAT_008f08de * 4);
  puVar2[1] = (uint)fVar3;
  *puVar2 = *puVar2 | 0x10000;
  fn_00193380();
  return;
}


