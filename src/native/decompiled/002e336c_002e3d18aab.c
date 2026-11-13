#include "002e336c_002e3d18aab.h"



int fn_002e342c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
  if (iVar1 != 0) {
    param_1[8] = param_1[8] + 1;
    return 0;
  }
  iVar2 = param_1[7];
  iVar4 = param_1[8] + 1;
  iVar1 = iVar2;
  if (iVar2 <= iVar4) {
    iVar1 = 0;
  }
  param_1[8] = iVar4;
  if (iVar2 <= iVar4) {
    return iVar1;
  }
  if (param_2 == 0) {
    iVar5 = *param_1;
    iVar2 = param_1[6];
  }
  else {
    iVar2 = param_1[6];
    iVar5 = *param_1;
    if (iVar4 == iVar1 + -1) {
      if (iVar5 == 4) {
        puVar3 = &DAT_00897dc0 + iVar2 * 0x20;
      }
      else {
        puVar3 = &DAT_00897a40 + iVar2 * 0x20;
      }
      fn_002e336c(param_1,*(undefined4 *)(puVar3 + iVar4 * 4),1,1,0);
      return 1;
    }
  }
  if (iVar5 == 4) {
    puVar3 = &DAT_00897dc0 + iVar2 * 0x20;
  }
  else {
    puVar3 = &DAT_00897a40 + iVar2 * 0x20;
  }
  fn_002e336c(param_1,*(undefined4 *)(puVar3 + iVar4 * 4),0,1,0);
  return 1;
}


