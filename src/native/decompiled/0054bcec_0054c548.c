#include "0054bcec_0054c548.h"



void fn_0054c548(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = 0;
  pcVar1 = (char *)(param_1 + 0x99);
  do {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *param_2;
    param_2 = param_2 + 1;
    bVar5 = *param_2 == '\0';
    uVar4 = 0;
    if (!bVar5) {
      uVar4 = 8;
    }
    pcVar1 = pcVar2;
  } while ((bVar5 || uVar3 <= uVar4) && (!bVar5 && uVar4 != uVar3));
  *pcVar2 = '\0';
  return;
}



void fn_0054c514(int param_1,int param_2,int param_3)

{
  fn_0017d948(param_1 + 0x10,param_2 + 4,param_3 + 4);
  *(int *)(param_3 + 0xc) = param_1;
  *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0054c478(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
    do {
      if (puVar1 == &DAT_0089a930) {
        if ((param_1 != (int *)0x0) &&
           (*(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | (param_1[0x32] != param_2) << 2,
           param_1[0x32] != param_2)) {
          param_1[0x32] = param_2;
        }
        break;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  for (piVar2 = (int *)param_1[5]; piVar2 != param_1 + 5; piVar2 = (int *)*piVar2) {
    fn_0054c478(piVar2 + -1,param_2);
  }
  return;
}



undefined1 fn_0054c3e0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_0054c388(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_0054c330(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x30))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_0054be68(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0054a72c(param_1 + 4);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2), iVar1 != 0)) {
    fn_001615fc(param_1 + 4,param_2,iVar1,1);
  }
  return iVar1;
}



void fn_0054be60(int param_1)

{
  fn_0017d90c(param_1 + 4);
  return;
}



int fn_0054bd3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_130 [256];
  int *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  
  local_30 = (int *)(param_1 + 8);
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 != local_30) {
    uVar1 = (undefined1)((uint)param_2 >> 0x10);
    uVar2 = (undefined1)((uint)param_2 >> 8);
    do {
      local_2c = (undefined1)((uint)param_2 >> 0x18);
      local_28 = 0;
      cVar3 = (char)piVar5[9];
      bVar6 = cVar3 == '.';
      if (bVar6) {
        cVar3 = *(char *)((int)piVar5 + 0x25);
      }
      local_2b = uVar1;
      local_2a = uVar2;
      local_29 = (char)param_2;
      if (bVar6 && cVar3 == '\0') {
        fn_0017d96c(auStack_130,0x100,0xff,(char *)&DAT_007d8588);
      }
      else {
        fn_0017d96c(auStack_130,0x100,0xff,(char *)&DAT_007d8590);
      }
      iVar4 = fn_0054a4f4(piVar5 + 2,auStack_130);
      if (iVar4 != -1) {
        iVar4 = fn_0054a484(piVar5 + 2,iVar4);
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != local_30);
  }
  return 0;
}



int fn_0054bcec(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006e1e78(param_1 + 7);
  if ((iVar1 == 0) && (iVar1 = fn_0054aa6c(param_1 + 7,param_2), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1,iVar1,param_2);
  }
  return iVar1;
}


