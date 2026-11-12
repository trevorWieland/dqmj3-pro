#include "001c9278_001c9d80ab.h"



undefined4 * fn_001c99cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00553250();
  *puVar1 = &PTR_LAB_0081bb7c;
  iVar2 = fn_00194ee4(0xa4,4);
  if ((iVar2 != 0) && (iVar2 = fn_001f72e0(), iVar2 != 0)) {
    fn_00552ea4(puVar1,iVar2);
    fn_001f7254(iVar2,1,1,1,3,0,0);
    fn_00552f70(puVar1,param_2);
  }
  return puVar1;
}



void fn_001c9700(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_40;
  
  uVar2 = local_40;
  iVar3 = fn_006e1ee8();
  *(undefined4 *)(iVar3 + 0x8c) = 0xff353535;
  *(undefined4 *)(iVar3 + 0x90) = 0xff696969;
  *(undefined4 *)(iVar3 + 0x94) = 0xff141414;
  *(ushort *)(iVar3 + 0x76) = *(ushort *)(iVar3 + 0x76) & 0xfe3f | 0xc0;
  uVar1 = (uint)local_40 >> 8;
  local_40 = CONCAT31((uint3)uVar1 & 0xffff00,1);
  puVar4 = *(undefined4 **)(iVar3 + 0x84);
  *puVar4 = local_40;
  puVar4[1] = 0x50400;
  puVar4[2] = 0x40505;
  puVar4[3] = 0;
  puVar4[4] = 0x1010000;
  *(undefined2 *)(puVar4 + 5) = 0;
  local_40 = (local_40 & ~((unsigned int)0xffff << 16)) | (((unsigned int)(SUB42(uVar2,2)) & 0xffff) << 16);
  local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff,7);
  iVar5 = *(int *)(iVar3 + 0x84);
  *(undefined4 *)(iVar5 + 0x16) = local_40;
  *(undefined4 *)(iVar5 + 0x1a) = 0x60400;
  *(undefined4 *)(iVar5 + 0x1e) = 0x60505;
  *(undefined4 *)(iVar5 + 0x22) = 0;
  *(undefined4 *)(iVar5 + 0x26) = 0x1020000;
  *(undefined2 *)(iVar5 + 0x2a) = 0;
  local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff,7);
  iVar3 = *(int *)(iVar3 + 0x84);
  *(undefined4 *)(iVar3 + 0x2c) = local_40;
  *(undefined4 *)(iVar3 + 0x30) = 0x60400;
  *(undefined4 *)(iVar3 + 0x34) = 0x80505;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0x1030000;
  *(undefined2 *)(iVar3 + 0x40) = 0;
  return;
}



void fn_001c960c(undefined4 *param_1)

{
  *param_1 = &DAT_0081bb6c;
  fn_001c942c(param_1);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 8))();
  }
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_001c93c8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_001c9058();
  piVar3 = (int *)*(int *)(param_1 + 0x14);
  while (piVar2 = piVar3, piVar2 != (int *)(param_1 + 0x14)) {
    piVar3 = (int *)*piVar2;
    iVar1 = piVar2[-1];
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        fn_001c8398(param_1,param_1 + 0x10,piVar2 + -0xb);
      }
    }
    else {
      piVar2[-1] = iVar1 + -1;
    }
  }
  return;
}


