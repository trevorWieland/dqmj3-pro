#include "002b0a54_002b0cc0.h"



int fn_002b0cc0(int param_1,undefined4 param_2,int param_3)

{
  fn_00158f6c(param_2,param_3 << 1);
  fn_00301a9c(param_2,*(int *)(param_1 + 4),
               (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1) << 1);
  return (int)(short)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1);
}



void fn_002b0cac(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1 = (undefined4 *)(*param_1 + param_2 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}



undefined4 fn_002b0c78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = *(ushort *)(iVar1 + 4);
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (ushort)*(byte *)(iVar1 + 6);
  }
  if ((bVar4 && uVar3 == 0) && (*(char *)(iVar1 + 7) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_002b0c50(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 7) = param_4;
  return;
}



void fn_002b0c0c(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  uVar1 = fn_0011a314(param_1 + 2);
  uVar2 = fn_0011a3c4(param_1 + 2);
  uVar3 = fn_0011a36c(param_1 + 2);
  iVar4 = *param_1;
  *(undefined2 *)(*(int *)(iVar4 + 4) + 4) = uVar3;
  *(undefined1 *)(*(int *)(iVar4 + 4) + 6) = uVar2;
  *(undefined1 *)(*(int *)(iVar4 + 4) + 7) = uVar1;
  return;
}



void fn_002b0bcc(int *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = fn_002b0bb4(*param_1);
  *(char *)(*(int *)(*param_1 + 4) + 0x10) = cVar1 + param_2;
  return;
}



undefined4 fn_002b0b84(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  
  puVar1 = *(ushort **)(param_1 + 4);
  uVar3 = *puVar1;
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (ushort)(byte)puVar1[1];
  }
  if ((bVar4 && uVar3 == 0) && (*(char *)((int)puVar1 + 3) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_002b0b5c(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  **(undefined2 **)(param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 2) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 3) = param_4;
  return;
}



void fn_002b0b44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  return;
}



undefined8 fn_002b0b38(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 4) + 8);
}



void fn_002b0b18(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x28) = 0;
  return;
}



void fn_002b0b04(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 4) + 0x28) = *(int *)(*(int *)(param_1 + 4) + 0x28) - param_2;
  return;
}



void fn_002b0ab8(int param_1,int param_2)

{
  uint *puVar1;
  uint local_8 [2];
  
  puVar1 = local_8;
  local_8[0] = param_2 + *(int *)(*(int *)(param_1 + 4) + 0x28);
  *(uint *)(*(int *)(param_1 + 4) + 0x28) = local_8[0];
  if (9999999 < local_8[0]) {
    puVar1 = local_8 + 1;
  }
  local_8[1] = 9999999;
  *(uint *)(*(int *)(param_1 + 4) + 0x28) = *puVar1;
  return;
}



int fn_002b0a98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 8 + -8;
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_002b0a54(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 * 8 + -8 + *(int *)(param_1 + 4));
  uVar1 = 0;
  if ((piVar2[1] == 0) || (*piVar2 < param_3)) {
    *piVar2 = param_3;
    piVar2[1] = param_4;
    uVar1 = 1;
  }
  return uVar1;
}


