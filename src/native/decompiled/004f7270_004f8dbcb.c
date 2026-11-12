#include "004f7270_004f8dbcb.h"



void fn_004f8dbc(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed0e4(pcVar1,0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  return;
}



undefined4 fn_004f8ca4(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x61) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x62);
  }
  if (bVar3 && cVar1 != '\0') {
    if (param_2 != 0) {
      *(int *)(param_1 + 0x40) = param_2;
      fn_004ed050(param_2);
    }
    *(undefined1 *)(param_1 + 0x62) = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_004f8b84(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r7;
  
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  if (0xb < bVar1) {
    *(char **)(param_1 + 0x2c) = "DestroyMeshJob::CleanupMesh";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004f8ac0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00;
  }
  uVar3 = 0;
  do {
    if (((uVar3 & 0xff) == (uint)bVar1) ||
       (iVar2 = fn_006d92e4(DAT_008bf4e0,uVar3 & 0xff), iVar2 == 0)) {
      *(undefined1 *)(param_1 + uVar3 + 0x54) = 0;
    }
    else {
      fn_004f5524(*(undefined4 *)(DAT_008bf4e0 + 0x4c),uVar3 & 0xff);
      *(undefined1 *)(param_1 + uVar3 + 0x54) = 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xc);
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(char **)(param_1 + 0x2c) = "DestroyMeshJob::WaitDestroyResponse";
  *(undefined1 **)(param_1 + 0x24) = &LAB_004f8ce8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r7 & 0xff00 | 5;
}



int fn_004f8aa0(void)

{
  return (int)DAT_008bf4d9;
}



void fn_004f8a9c(undefined4 *param_1)

{
  *param_1 = &DAT_00856ce8;
  return;
}



void fn_004f8a6c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &PTR_FUN_00856e04;
  return;
}



int fn_004f8a00(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    param_1[0x10] = param_2;
    fn_004ed050(param_2);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (-1 < iVar1) {
    fn_00505d54(DAT_008bf4e0);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return iVar1;
}


