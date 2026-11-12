#include "001fa3ac_001fb390ba.h"



undefined4 * fn_001faf78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081c238;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x20))();
  }
  iVar1 = fn_006f7998(DAT_008977e0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  fn_00129004();
  fn_00121084();
  fn_00129004();
  fn_00120f74();
  fn_00129004();
  fn_001210e8();
  fn_0013af30(DAT_008977d4,0);
  if (*(char *)((int)param_1 + 0x36) != '\0') {
    fn_001fa3ac(param_1);
    *(undefined1 *)((int)param_1 + 0x36) = 0;
  }
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  fn_002feef8(param_1[0x15]);
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))();
  }
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))();
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 8))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined1 * fn_001faa2c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  fn_00112f6c(auStack_20,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4));
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b8478(uVar6);
  iVar7 = 0;
  iVar2 = fn_006b8478(auStack_20);
  if (0 < iVar2) {
    do {
      iVar2 = fn_006b85d0(auStack_20,iVar7);
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = fn_006b85d0(uVar6,iVar5);
          if (iVar2 == iVar3) goto LAB_001faac4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      fn_0028a68c(auStack_20,iVar2,1);
LAB_001faac4:
      iVar7 = iVar7 + 1;
      iVar2 = fn_006b8478(auStack_20);
    } while (iVar7 < iVar2);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar7 = fn_006b85d0(uVar6,iVar2);
      iVar3 = 0;
      iVar5 = fn_006b8478(auStack_20);
      if (0 < iVar5) {
        do {
          iVar5 = fn_006b85d0(auStack_20,iVar3);
          if (iVar7 == iVar5) goto LAB_001fab58;
          iVar3 = iVar3 + 1;
          iVar5 = fn_006b8478(auStack_20);
        } while (iVar3 < iVar5);
      }
      uVar4 = fn_0028aad0(uVar6,iVar7);
      fn_0028a284(auStack_20,uVar4);
LAB_001fab58:
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  fn_001221d4(uVar6,local_1c,1);
  return auStack_20;
}


