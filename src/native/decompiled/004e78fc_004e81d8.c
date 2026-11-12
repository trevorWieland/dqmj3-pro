#include "004e78fc_004e81d8.h"



void fn_004e81d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_008569fc;
  return;
}



void fn_004e8134(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004dbe24();
  *(undefined1 *)(puVar1 + 3) = 0x12;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x10;
  *puVar1 = &DAT_008569e4;
  return;
}



void fn_004e80e8(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 4);
  *puVar2 = 1;
  puVar2[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_1 + 0x10);
  fn_006f94d0(puVar2 + 4);
  uVar1 = fn_00658e84(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar2 + 10) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 0;
  return;
}



bool fn_004e80a8(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00658e84(iVar2,10);
  bVar3 = *(ushort *)(iVar2 + 10) == uVar1;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar2 + 1);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(iVar2 + 2);
  }
  return bVar3;
}



void fn_004e8078(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  puVar1 = (undefined4 *)fn_004dbe24();
  *(undefined1 *)(puVar1 + 3) = 0x11;
  *(undefined2 *)((int)puVar1 + 0xe) = 0x1c;
  *puVar1 = &DAT_008569cc;
  puVar1[5] = in_r3;
  return;
}



void fn_004e7ffc(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(param_1 + 4);
  *puVar4 = 1;
  puVar4[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_1 + 0x10);
  fn_006f94d0(puVar4 + 4);
  uVar2 = fn_00658e84(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar4 + 10) = uVar2;
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(*(int *)(DAT_008bf504 + 0x14) + 0x123c);
  uVar1 = fn_006d591c();
  *(undefined1 *)(iVar3 + 0x14) = uVar1;
  fn_006f94e0(iVar3 + 0x15);
  return;
}



bool fn_004e7fa0(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00658e84(iVar2,10);
  bVar3 = *(ushort *)(iVar2 + 10) == uVar1;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar2 + 1);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(iVar2 + 2);
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(iVar2 + 0x14);
  }
  return bVar3;
}



void fn_004e7f64(undefined4 *param_1)

{
  *param_1 = &DAT_008569ac;
  if (param_1[0x11] != 0) {
    fn_00656b7c(param_1[0x11]);
  }
  fn_004ede4c(param_1);
  return;
}



undefined4 * fn_004e7f20(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_008569ac;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e14(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_004ed164();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}



undefined4 fn_004e7ea8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  fn_004ed13c(param_2);
  fn_004ed050(*(undefined4 *)(param_1 + 0x40));
  *(code **)(param_1 + 0x24) = fn_004e7d00;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork";
  return 0;
}



void fn_004e7e6c(int param_1)

{
  char *pcVar1;
  
  fn_004ed158(*(undefined4 *)(param_1 + 0x44));
  pcVar1 = *(char **)(param_1 + 0x40);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



uint fn_004e7d00(int param_1)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x10) != '\0') {
    if (**(char **)(param_1 + 0x44) == '\x01') {
      fn_004ed158();
    }
    *(char **)(param_1 + 0x2c) = "LocalDisconnectNetworkJob::WaitForCancel";
    *(code **)(param_1 + 0x24) = fn_004e7b64;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return unaff_r5 & 0xff00;
  }
  iVar1 = fn_004e7830(*(undefined4 *)(DAT_008bf504 + 0x38));
  if (iVar1 < 0) {
    return 5;
  }
  iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x38) + 0x28))
                    (*(int **)(DAT_008bf504 + 0x38),*(undefined4 *)(param_1 + 0x44));
  if (iVar1 < 0) {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  fn_004efcf4(*(undefined4 *)(DAT_008bf504 + 0x38),1);
  *(char **)(param_1 + 0x2c) = "LocalDisconnectNetworkJob::WaitDisconnectNetwork";
  *(code **)(param_1 + 0x24) = fn_004e7bac;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}



uint fn_004e7bac(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint unaff_r5;
  
  iVar3 = *(int *)(param_1 + 0x40);
  pcVar2 = *(char **)(param_1 + 0x44);
  if (*(char *)(iVar3 + 0x10) != '\0') {
    if (*pcVar2 == '\x01') {
      fn_004ed158();
    }
    *(code **)(param_1 + 0x24) = fn_004e7b64;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalDisconnectNetworkJob::WaitForCancel";
    return unaff_r5 & 0xff00;
  }
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    return (uint)pcVar2 & 0xff00 | 5;
  }
  if (cVar1 == '\x02') {
    fn_004ed0e4(iVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar3 = fn_006d58dc(DAT_008bf504);
    if ((iVar3 != 0) &&
       ((iVar3 = fn_006d589c(DAT_008bf504), iVar3 == 0 ||
        (*(char *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) != '\x02')))) {
      fn_004e49c4(*(undefined4 *)(DAT_008bf504 + 0x18));
    }
  }
  else {
    if (cVar1 != '\x03' && cVar1 != '\x04') {
      return param_2 & 0xff00 | 1;
    }
    fn_004ed098(iVar3,*(undefined4 *)(pcVar2 + 4));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return unaff_r5 & 0xff00 | 1;
}



uint fn_004e7b64(int param_1)

{
  uint unaff_r5;
  
  if (**(char **)(param_1 + 0x44) == '\x01') {
    return 5;
  }
  fn_004ed068(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}



longlong fn_004e79ac(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint extraout_r1;
  
  uVar1 = 0x3ff00000;
  if (param_2 - 0x100000U < 0x3ff00000) {
    if (param_3 < 0x21) {
      fn_00301a9c(param_1 + 8,param_2,param_3);
      *(uint *)(param_1 + 0x28) = param_3;
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,0xe0e14826);
}



void fn_004e7974(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_0085695c;
  *(undefined1 *)(puVar1 + 0x11) = 10;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  *(undefined1 *)((int)puVar1 + 0x46) = 0;
  return;
}



undefined1 * fn_004e78fc(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_006d897c();
  puVar2 = &DAT_e0a14827;
  if (((iVar1 == 0) && (*(char *)((int)param_1 + 0x45) == '\0' || param_3 < 2)) &&
     (*(char *)((int)param_1 + 0x46) == '\0' || param_3 < 3)) {
    (**(code **)(*param_1 + 8))(param_1,0);
    param_1[0x10] = param_2;
    fn_004ed13c(param_2);
    fn_004ed050(param_1[0x10]);
    puVar2 = (undefined1 *)0x0;
    *(char *)(param_1 + 0x11) = (char)param_3;
  }
  return puVar2;
}


