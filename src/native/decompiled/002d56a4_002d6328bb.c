#include "002d56a4_002d6328bb.h"



void fn_002d6328(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = &DAT_00820190;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_002d5fe0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  char local_24 [4];
  undefined1 local_20 [12];
  
  local_24[0] = '\x10';
  do {
    uVar1 = fn_0017484c(DAT_008977e4);
    piVar2 = (int *)fn_00165bb4(uVar1,local_24);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(piVar2,0);
    }
    local_24[0] = local_24[0] + '\x01';
  } while (local_24[0] < '\x18');
  local_28[0] = 0x20;
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar2 = (int *)fn_00175dcc(uVar1,local_28);
  fn_001794f4();
  (**(code **)(*piVar2 + 0x14))(piVar2,1);
  (**(code **)(*piVar2 + 0x10))(piVar2,0xe,4);
  fn_00204dcc(piVar2,3);
  uVar4 = 0xc2640000;
  local_40 = -25.0;
  local_3c = 0.0;
  local_38 = -57.0;
  piVar2[3] = -0x3e380000;
  piVar2[4] = 0;
  piVar2[5] = -0x3d9c0000;
  local_28[0] = 0x21;
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar2 = (int *)fn_00175dcc(uVar1,local_28);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
  }
  local_28[0] = 0x22;
  uVar1 = fn_0017484c(DAT_008977e4);
  piVar2 = (int *)fn_00175d88(uVar1,local_28);
  if (piVar2 != (int *)0x0) {
    fn_001794f4();
    (**(code **)(*piVar2 + 0x14))(piVar2,0);
  }
  uVar1 = fn_00174864(DAT_008977e4);
  local_3c = local_3c + 10.0;
  local_34 = 0xc1a00000;
  local_30 = 0x41200000;
  local_2c = uVar4;
  fn_002041b0(uVar1,&local_34);
  local_34 = 0x420c0000;
  local_30 = 0x41a00000;
  local_2c = 0x42000000;
  local_40 = local_40 + 35.0;
  local_3c = local_3c + 20.0;
  local_38 = local_38 + 32.0;
  fn_00204158(uVar1,&local_40);
  uVar1 = DAT_00897800;
  local_20[0] = 0x20;
  uVar4 = fn_00182988(DAT_008977e4);
  iVar3 = fn_0026a558(uVar4,local_20);
  fn_0015b0dc(iVar3 + 0x1e);
  iVar3 = fn_00174834(DAT_008977e4);
  if (*(char *)(iVar3 + 0x180384) == '\x06') {
    uVar1 = fn_0016ba34(uVar1,DAT_0089820c,(char *)&DAT_002d6314,0);
  }
  else {
    uVar1 = fn_0016ba34(uVar1,DAT_0089820c,(char *)&DAT_002d62f8,0);
  }
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


