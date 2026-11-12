#include "001d1284_001d1980bb.h"



void fn_001d1980(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[4] = 0xffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 7) = 3;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}



void fn_001d17b8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_30;
  undefined1 local_2f;
  int local_2c;
  
  uVar10 = *(undefined4 *)(DAT_00897804 + 8);
  uVar9 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b846c(uVar9);
  iVar2 = fn_006b8600(uVar9);
  iVar3 = fn_00174828(DAT_008977e4);
  iVar4 = iVar3 + 0xe8;
  iVar5 = fn_00174834(DAT_008977e4);
  iVar6 = fn_001c2380(DAT_008977e4);
  piVar7 = (int *)fn_006b89d4(iVar6 + 4,0);
  piVar8 = (int *)fn_006b89d4(iVar6 + 4,1);
  iVar6 = fn_006b6268(uVar10);
  if ((((((iVar6 != 0) && (iVar4 = fn_001c2ee0(iVar4), iVar4 != 0)) &&
        (iVar4 = fn_0069ccf8((int)*(short *)(iVar3 + 0x4280)), iVar4 != 0)) &&
       ((iVar4 = fn_0069ccf8((int)*(short *)(iVar3 + 0x4290)), iVar4 != 0 &&
        ((int)*(char *)(iVar3 + 0x4282) - 0x10U < 8)))) &&
      (((int)*(char *)(iVar3 + 0x4292) - 0x10U < 8 &&
       ((iVar4 = fn_006b89e8(piVar7), iVar4 != 0 && (iVar4 = fn_006b89e8(piVar8), iVar4 != 0))))))
     && ((*piVar7 == iVar1 && (*piVar8 == iVar2)))) {
    local_2c = iVar5 + 0x180388;
    fn_0017821c(local_2c,iVar3,0x5b34);
    local_30 = *(undefined1 *)(iVar3 + 0x4282);
    local_2f = *(undefined1 *)(iVar3 + 0x4292);
    fn_0061a5cc(iVar3,&local_30,2,0x20,0x22,0x10,1,iVar5);
    fn_0017821c(iVar3,local_2c,0x5b34);
    fn_001c3bec(iVar5);
    fn_001c26fc(iVar5);
  }
  return;
}


