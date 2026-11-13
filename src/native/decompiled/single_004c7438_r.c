#include "single_004c7438_r.h"


extern undefined4 SupervisorCall;

undefined4 fn_004c7438(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 8))(param_2,*(code **)(*param_2 + 8),0x8000,0);
  if (param_2[0xc] == 0 && param_2[0xd] == 0) {
    fn_004c738c(param_1,param_2 + 1);
    fn_004c72c4(param_1,param_2 + 1);
    if ((char)param_2[0x10] == '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 0;
      }
      iVar1 = fn_004f0a20(param_1 + 0x14);
      if (iVar1 == 0) goto LAB_004c7600;
      iVar1 = iVar1 - *(int *)(param_1 + 0x24);
      puVar2 = (undefined4 *)(iVar1 + 8);
      if (puVar2 != (undefined4 *)0x0) goto LAB_004c7544;
      goto LAB_004c7574;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0;
    }
    iVar1 = fn_004f0a20(param_1 + 0x14);
    if (iVar1 == 0) goto LAB_004c750c;
    iVar1 = iVar1 - *(int *)(param_1 + 0x24);
    puVar2 = (undefined4 *)(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) goto LAB_004c74c0;
  }
  else {
    fn_004c6fe8(param_1,param_2[8]);
    fn_004c72c4(param_1,param_2 + 1);
    if ((char)param_2[0x10] == '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 0;
      }
      iVar1 = fn_004f0a20(param_1 + 0x14);
      if (iVar1 == 0) {
LAB_004c7600:
        iVar1 = 0;
        puVar2 = (undefined4 *)&SupervisorCall;
      }
      else {
        iVar1 = iVar1 - *(int *)(param_1 + 0x24);
        puVar2 = (undefined4 *)(iVar1 + 8);
        if (puVar2 == (undefined4 *)0x0) goto LAB_004c7574;
      }
LAB_004c7544:
      *puVar2 = &DAT_00856320;
      iVar3 = fn_0013d5c4(puVar2 + 1);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x54) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0;
LAB_004c7574:
      fn_004f0b78(param_1 + 4,param_1 + 8,iVar1);
      goto LAB_004c7584;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0;
    }
    iVar1 = fn_004f0a20(param_1 + 0x14);
    if (iVar1 == 0) {
LAB_004c750c:
      iVar1 = 0;
      puVar2 = (undefined4 *)&SupervisorCall;
    }
    else {
      iVar1 = iVar1 - *(int *)(param_1 + 0x24);
      puVar2 = (undefined4 *)(iVar1 + 8);
      if (puVar2 == (undefined4 *)0x0) goto LAB_004c74f0;
    }
LAB_004c74c0:
    *puVar2 = &DAT_00856320;
    iVar3 = fn_0013d5c4(puVar2 + 1);
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
LAB_004c74f0:
  fn_004f0ab4(param_1 + 4,param_1 + 8,iVar1);
LAB_004c7584:
  if (iVar1 == -8) {
    return 0;
  }
  fn_0050d1a0(iVar1 + 0xc,param_2 + 1);
  iVar3 = param_2[0xd];
  *(int *)(iVar1 + 0x38) = param_2[0xc];
  *(int *)(iVar1 + 0x3c) = iVar3;
  iVar3 = param_2[0xf];
  *(int *)(iVar1 + 0x40) = param_2[0xe];
  *(int *)(iVar1 + 0x44) = iVar3;
  *(char *)(iVar1 + 0x48) = (char)param_2[0x10];
  *(undefined1 *)(iVar1 + 0x49) = *(undefined1 *)((int)param_2 + 0x41);
  *(undefined1 *)(iVar1 + 0x4a) = *(undefined1 *)((int)param_2 + 0x42);
  *(int *)(iVar1 + 0x4c) = param_2[0x11];
  *(char *)(iVar1 + 0x50) = (char)param_2[0x12];
  *(int *)(iVar1 + 0x54) = param_2[0x13];
  *(int *)(iVar1 + 0x58) = param_2[0x14];
  *(short *)(iVar1 + 0x5c) = (short)param_2[0x15];
  *(undefined2 *)(iVar1 + 0x5e) = *(undefined2 *)((int)param_2 + 0x56);
  iVar3 = param_2[0x17];
  *(int *)(iVar1 + 0x60) = param_2[0x16];
  *(int *)(iVar1 + 100) = iVar3;
  return 1;
}


