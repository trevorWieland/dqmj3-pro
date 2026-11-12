#include "single_001e866c_r.h"


extern undefined4 _local_3c;

undefined4 fn_001e866c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint in_fpscr;
  int iVar11;
  undefined4 *local_40;
  char local_3c;
  undefined3 uStack_3b;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uVar1 = fn_00118290();
  local_37 = 1;
  local_2c = 1;
  local_34 = 4;
  uStack_30 = 8;
  local_38 = 0;
  puVar2 = (undefined4 *)fn_00542fec(&local_38,uVar1);
  piVar3 = param_1 + 0x65;
  _local_3c = CONCAT31(uStack_3b,1);
  local_40 = puVar2;
  if ((undefined4 **)piVar3 != &local_40) {
    local_40 = (undefined4 *)*piVar3;
    _local_3c = CONCAT31(uStack_3b,(char)param_1[0x66]);
    *piVar3 = (int)puVar2;
    *(undefined1 *)(param_1 + 0x66) = 1;
  }
  puVar2 = local_40;
  if ((local_40 != (undefined4 *)0x0) && (local_3c != '\0')) {
    (**(code **)*local_40)(local_40);
    piVar3 = (int *)puVar2[1];
    (**(code **)(*piVar3 + 0xc))(piVar3,puVar2);
  }
  fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_1[0x65]);
  local_37 = 1;
  local_2c = 1;
  local_34 = 4;
  uStack_30 = 8;
  local_38 = 0;
  puVar2 = (undefined4 *)fn_00542fec(&local_38,uVar1);
  piVar3 = param_1 + 0x67;
  _local_3c = CONCAT31(uStack_3b,1);
  local_40 = puVar2;
  if ((undefined4 **)piVar3 != &local_40) {
    local_40 = (undefined4 *)*piVar3;
    _local_3c = CONCAT31(uStack_3b,(char)param_1[0x68]);
    *piVar3 = (int)puVar2;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  puVar2 = local_40;
  if ((local_40 != (undefined4 *)0x0) && (local_3c != '\0')) {
    (**(code **)*local_40)(local_40);
    piVar3 = (int *)puVar2[1];
    (**(code **)(*piVar3 + 0xc))(piVar3,puVar2);
  }
  fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_1[0x67]);
  uVar1 = fn_001e3658(param_1,param_2);
  uVar9 = 0;
  uVar10 = *(undefined4 *)(DAT_008977e0 + 0x2c);
  do {
    fn_002a4648(uVar10,(&DAT_007be740)[uVar9]);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x18);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,9,0x11,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,10,0x12,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0xb,0x13,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0xc,0x14,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0xd,0x15,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0xe,0x16,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0xf,0x17,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x10,0x18,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x11,0x19,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x12,0x1a,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x13,0x1b,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x14,0x1c,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x15,0x1d,0xffffffff);
  local_40 = (undefined4 *)0xffffffff;
  fn_001da490(param_1,0x38,0x1e,0xffffffff);
  if ((char)param_1[0x82] == -1) {
    param_1[200] = 0;
  }
  else {
    fn_006aa538(param_1);
    uVar10 = fn_00242aec();
    iVar11 = VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
    param_1[200] = iVar11;
  }
  fn_001dcdf0(param_1);
  fn_001e1698(param_1);
  fn_001de4fc(param_1);
  fn_001e25e4(param_1,0xffffffff,0);
  param_1[0x45] = 4;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  iVar11 = fn_001c54d0(param_1,param_1[99],(char *)&DAT_00860e9c);
  param_1[0xee] = iVar11;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  iVar11 = 0;
  if (iVar4 != 0) {
    iVar11 = fn_0024030c();
  }
  iVar4 = param_1[0xd0];
  if (iVar4 != iVar11) {
    if (iVar4 != 0) {
      fn_002feef8(iVar4);
    }
    param_1[0xd0] = iVar11;
  }
  param_1[0x4e] = param_1[0x4e] | 0x20;
  (**(code **)(*param_1 + 0x10c))(param_1,1);
  uVar10 = fn_00241d90(DAT_00897844,param_1[0x38]);
  iVar11 = fn_006eb378();
  iVar4 = fn_006eb368(uVar10);
  iVar5 = fn_006eb388(uVar10);
  uVar10 = fn_006f7a9c(DAT_008977e0);
  uVar10 = fn_00241d90(uVar10,param_1[0xee]);
  iVar6 = fn_006eb378();
  iVar7 = fn_006eb368(uVar10);
  iVar8 = fn_006eb388(uVar10);
  param_1[0xfb] = iVar8 + iVar5;
  param_1[0xf9] = iVar11 + iVar6;
  param_1[0xfa] = iVar4 + iVar7;
  return uVar1;
}


