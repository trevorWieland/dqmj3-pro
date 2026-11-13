#include "004f7270_004f8dbcab.h"



undefined4 fn_004f840c(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[9] = (int)fn_004f88c0;
  param_1[10] = 0;
  param_1[0xb] = (int)"CreateMeshJob::SetupSystemProtocols";
  return 0;
}



uint fn_004f88c0(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint unaff_r5;
  
  pcVar2 = *(char **)(param_1 + 0x40);
  if (pcVar2 != (char *)0x0) {
    param_2 = (uint)(byte)pcVar2[0x10];
  }
  if (pcVar2 != (char *)0x0 && param_2 != 0) {
    cVar1 = *pcVar2;
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed068();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_004f89b8(param_1);
    return unaff_r5 & 0xff00 | 1;
  }
  iVar3 = fn_00505114(DAT_008bf4e0);
  if (-1 < iVar3) {
    *(code **)(param_1 + 0x24) = fn_004f86ec;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "CreateMeshJob::SetupLocalStation";
    return unaff_r5 & 0xff00 | 6;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_004ed098(*(int *)(param_1 + 0x40),iVar3);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  fn_004f89b8(param_1);
  return unaff_r5 & 0xff00 | 1;
}



void fn_004f89b8(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x1c))(param_1);
  if ((char *)param_1[0x10] != (char *)0x0) {
    cVar1 = *(char *)param_1[0x10];
    if ((cVar1 != '\x02' && cVar1 != '\x03') && (cVar1 != '\x04')) {
      fn_004ed068();
    }
    param_1[0x10] = 0;
  }
  return;
}



undefined4 * fn_004f82ec(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  puVar1[5] = 0;
  *puVar1 = &DAT_00856dd8;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 10000;
  puVar1[10] = 10000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  if (DAT_008bf4a0 != 0) {
    uVar2 = fn_004eea84(DAT_008bf4a0,7);
    fn_004f161c(uVar2,(char *)&DAT_004f83a8);
    if (DAT_008bf4a0 != 0) {
      uVar2 = fn_004eea84(DAT_008bf4a0,8);
      fn_004f161c(uVar2,(char *)&DAT_004f83d0);
    }
  }
  return puVar1;
}


