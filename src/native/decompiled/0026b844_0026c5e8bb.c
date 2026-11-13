#include "0026b844_0026c5e8bb.h"



void fn_0026c5e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,0x14);
  local_10 = 0;
  fn_00163988(DAT_0089780c,&local_10,0x14);
  return;
}



void fn_0026c534(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = &DAT_0081e05c;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_0026c208(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  char local_1c [16];
  
  local_1c[0] = '\x10';
  do {
    uVar1 = fn_0017484c(DAT_008977e4);
    piVar2 = (int *)fn_00165bb4(uVar1,local_1c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2,0);
    }
    local_1c[0] = local_1c[0] + '\x01';
  } while (local_1c[0] < '\x18');
  local_20[0] = 0x21;
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar2 = (int *)fn_00175dcc(uVar1,local_20);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
  }
  local_20[0] = 0x23;
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar2 = (int *)fn_00175d88(uVar1,local_20);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
  }
  local_20[0] = 0x20;
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar2 = (int *)fn_00175dcc(uVar1,local_20);
  fn_001794f4();
  (**(code **)(*piVar2 + 0x14))(piVar2,1);
  fn_00179928(piVar2);
  (**(code **)(*piVar2 + 0x10))(piVar2,0xe,4);
  fn_00204dcc(piVar2,3);
  uVar4 = 0xc2640000;
  local_38 = -25.0;
  local_34 = 0.0;
  local_30 = -57.0;
  piVar2[3] = -0x3e380000;
  piVar2[4] = 0;
  piVar2[5] = -0x3d9c0000;
  uVar1 = fn_00174864(DAT_008977e4);
  local_34 = local_34 + 10.0;
  local_2c = 0xc1a00000;
  local_28 = 0x41200000;
  local_24 = uVar4;
  fn_002041b0(uVar1,&local_2c);
  local_24 = 0x42000000;
  local_2c = 0x420c0000;
  local_28 = 0x41a00000;
  local_38 = local_38 + 35.0;
  local_34 = local_34 + 20.0;
  local_30 = local_30 + 32.0;
  fn_00204158(uVar1,&local_38);
  uVar1 = fn_0016ba34(DAT_00897800,DAT_0089820c,(char *)&DAT_0026c514,0);
  fn_00174858(DAT_008977e4);
  iVar3 = fn_0015c948();
  if (iVar3 != 0) {
    fn_00174858(DAT_008977e4);
    uVar4 = fn_0015c948();
    fn_0017faa4(uVar4,uVar1,1,0);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


