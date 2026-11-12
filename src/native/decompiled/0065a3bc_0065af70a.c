#include "0065a3bc_0065af70a.h"



void fn_0065a788(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x3c))();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0065a7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065a7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}



undefined4 fn_0065a6a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  iVar1 = fn_006c4168(iVar3);
  if (iVar1 != 0) {
    if (*(char *)(iVar3 + 0x11) == *(char *)(iVar3 + 0x12)) {
      uVar2 = 2;
    }
    else if (*(char *)(iVar3 + 0x11) == '\x01') {
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined4 * fn_0065a4b8(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_5c8 [96];
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined1 local_554;
  undefined4 local_418;
  undefined1 auStack_410 [8];
  undefined4 local_408;
  undefined1 local_404;
  undefined1 local_403;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [968];
  
  fn_005d6734();
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x104) + 0x10);
  fn_0037cb1c(puVar6,1);
  cVar1 = '\x01';
  cVar5 = '\x01';
  if (param_2 == 0) {
    cVar5 = '\b';
    cVar1 = (char)*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x5c) + '\x01';
  }
  else if (param_2 == 1) {
    cVar5 = (char)*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x5c) + '\x01';
  }
  else if (param_2 == 2) {
    cVar1 = (char)*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x5c) + '\x01';
    cVar5 = cVar1;
  }
  *(char *)((int)puVar6 + 0x11) = cVar1;
  *(char *)((int)puVar6 + 0x12) = cVar5;
  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x5c) = 0xffffffff;
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00899218) goto LAB_0065a5a0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0065a5a0:
  fn_0017821c(auStack_5c8,puVar2 + 0x156,0x1b0);
  local_418 = puVar2[0x1c2];
  iVar4 = fn_004b9b4c(auStack_410,puVar2 + 0x1c4);
  *(undefined4 *)(iVar4 + 8) = puVar2[0x1c6];
  *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(puVar2 + 0x1c7);
  *(undefined1 *)(iVar4 + 0xd) = *(undefined1 *)((int)puVar2 + 0x71d);
  uVar7 = puVar2[0x1c9];
  uVar8 = puVar2[0x1ca];
  uVar9 = puVar2[0x1cb];
  uVar10 = puVar2[0x1cc];
  uVar11 = puVar2[0x1cd];
  uVar12 = puVar2[0x1ce];
  uVar13 = puVar2[0x1cf];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[0x1c8];
  *(undefined4 *)(iVar4 + 0x14) = uVar7;
  *(undefined4 *)(iVar4 + 0x18) = uVar8;
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  *(undefined4 *)(iVar4 + 0x20) = uVar10;
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  *(undefined4 *)(iVar4 + 0x28) = uVar12;
  *(undefined4 *)(iVar4 + 0x2c) = uVar13;
  fn_0017821c(iVar4 + 0x30,puVar2 + 0x1d0,0x3c0);
  local_568 = *puVar6;
  local_564 = puVar6[1];
  local_560 = puVar6[2];
  local_55c = puVar6[3];
  local_558 = puVar6[4];
  local_554 = *(undefined1 *)(puVar6 + 5);
  fn_0017821c(puVar2 + 0x156,auStack_5c8,0x1b0);
  puVar2[0x1c2] = local_418;
  fn_0014f510(puVar2 + 0x1c4,auStack_410);
  puVar2[0x1c6] = local_408;
  *(undefined1 *)(puVar2 + 0x1c7) = local_404;
  *(undefined1 *)((int)puVar2 + 0x71d) = local_403;
  puVar2[0x1c8] = local_400;
  puVar2[0x1c9] = uStack_3fc;
  puVar2[0x1ca] = uStack_3f8;
  puVar2[0x1cb] = uStack_3f4;
  puVar2[0x1cc] = uStack_3f0;
  puVar2[0x1cd] = uStack_3ec;
  puVar2[0x1ce] = uStack_3e8;
  puVar2[0x1cf] = uStack_3e4;
  fn_0017821c(puVar2 + 0x1d0,auStack_3e0,0x3c0);
  return &local_568;
}



int fn_0065a3bc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00850ae4;
  iVar2 = fn_00117074(puVar1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x4b8) = 0;
  *(undefined4 *)(iVar2 + 0x4bc) = 0;
  *(undefined4 *)(iVar2 + 0x4c0) = 0;
  *(undefined4 *)(iVar2 + 0x4c4) = 0;
  return iVar2 + -0xb0;
}


