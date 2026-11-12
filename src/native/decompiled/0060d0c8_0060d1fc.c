#include "0060d0c8_0060d1fc.h"



void fn_0060d1fc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_00171634();
  uVar4 = puVar1[1];
  uVar6 = puVar1[2];
  *(undefined4 *)(param_1 + 4) = *puVar1;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  uVar4 = *(undefined4 *)(iVar2 + 0x20);
  uVar6 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = (undefined4 *)fn_00171634();
  uVar4 = puVar1[1];
  uVar6 = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = *puVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0065fdf0();
  }
  piVar5 = *(int **)(param_1 + 0x48);
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x48) = piVar3;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0xe10;
  *(undefined2 *)(param_1 + 0x50) = 0xe10;
  *(undefined2 *)(param_1 + 0x52) = 0xe10;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  return;
}



void fn_0060d0c8(undefined4 param_1,float *param_2)

{
  float fVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = *param_2;
  local_18 = param_2[2];
  local_1c = 0.0;
  local_60 = 0;
  local_38 = 0;
  local_50 = 0;
  local_58 = 0xbf800000;
  local_5c = 0x80000000;
  local_48 = 0x80000000;
  local_4c = 0x3f800000;
  local_40 = 0x3f800000;
  local_54 = 0;
  local_44 = 0;
  local_34 = 0;
  uStack_3c = local_50;
  fn_0016947c(&local_20,&local_60);
  fVar1 = 1.0 / SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
  local_20 = local_20 * fVar1;
  local_1c = local_1c * fVar1;
  local_18 = local_18 * fVar1;
  fn_0060cc78(param_1,&local_20);
  return;
}


