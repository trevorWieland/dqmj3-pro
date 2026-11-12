#include "003a0410_003a1bc0bbb.h"



void fn_003a1bc0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_28 [4];
  uint local_24;
  uint local_20;
  
  local_24 = (uint)*(byte *)(param_1[1] + 0x35);
  uVar1 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_006be4c8(uVar1,&local_24);
  if (param_1[2] == 0) {
    iVar7 = 0;
  }
  else {
    local_20 = (uint)*(byte *)(param_1[2] + 0x35);
    uVar1 = fn_0017484c(DAT_008977e4);
    iVar7 = fn_006be4c8(uVar1,&local_20);
  }
  iVar3 = (int)*(char *)(iVar2 + 0x35);
  uVar6 = iVar3 - 0x10;
  bVar8 = uVar6 < 4;
  if (!bVar8) {
    uVar6 = iVar3 - 0x18;
  }
  if ((bVar8 || uVar6 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) {
    local_28[0] = 0x20;
  }
  else {
    local_28[0] = 0x21;
  }
  uVar1 = fn_0017484c(DAT_008977e4);
  iVar3 = fn_006be4c8(uVar1,local_28);
  iVar4 = (int)*(char *)(iVar2 + 0x35);
  uVar6 = iVar4 - 0x10;
  bVar8 = 3 < uVar6;
  if (bVar8) {
    uVar6 = iVar4 - 0x18;
  }
  if ((bVar8 && 3 < uVar6) && (iVar4 != 0x20 && iVar4 != 0x22)) {
    local_28[0] = 0x23;
  }
  else {
    local_28[0] = 0x22;
  }
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar5 = (int *)fn_006be4c8(uVar1,local_28);
  if ((*(char *)(iVar2 + 0x35) == *(char *)(iVar3 + 0x35) && iVar7 == 0) &&
     (iVar2 = (**(code **)(*param_1 + 0x14))(param_1), iVar2 != 0 && piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x14))(piVar5,0);
  }
  return;
}



undefined4 * fn_003a1aec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0082d8bc;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = &DAT_00859420;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  return puVar1;
}


