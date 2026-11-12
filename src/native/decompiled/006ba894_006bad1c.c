#include "006ba894_006bad1c.h"



int fn_006bad1c(int param_1,int param_2)

{
  return *(int *)(param_1 + 100) + param_2 * 8;
}



undefined4 fn_006baba8(int param_1,int param_2)

{
  return *(undefined4 *)
          (&DAT_0088fcf0 + (uint)*(byte *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 5) * 4);
}



bool fn_006bab90(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 2) == '\x01';
}



bool fn_006bab78(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 6) == '\x01';
}



bool fn_006bab60(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 3) == '\x01';
}



bool fn_006bab48(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 4) == '\x01';
}



undefined4 fn_006bab10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_1 + 4) == *(int **)(param_1 + 8)) || (**(int **)(param_1 + 4) != param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006baaf4(int param_1,int param_2)

{
  return *(undefined4 *)(&DAT_007ba040 + (uint)**(byte **)(*(int *)(param_1 + 4) + param_2 * 4) * 4)
  ;
}



bool fn_006baa60(undefined4 *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = param_1[2];
  if (param_3 < uVar2) {
    local_18 = *param_1;
    local_14 = param_1[1];
    uVar3 = fn_006c61b8(&local_18);
    *(undefined4 *)(param_2 + 2) = uVar3;
    uVar1 = fn_006c6a2c(&local_18);
    param_2[6] = uVar1;
    uVar3 = fn_006c61b8(&local_14);
    *(undefined4 *)(param_2 + 4) = uVar3;
    uVar1 = fn_006c6a2c(&local_14);
    param_2[7] = uVar1;
    *param_2 = (ushort)*(byte *)(param_1 + param_3 + 3);
    param_2[1] = (ushort)*(byte *)((int)param_1 + param_3 * 4 + 0xd);
    param_2[8] = *(ushort *)((int)param_1 + param_3 * 4 + 0xe);
  }
  return param_3 < uVar2;
}



char * fn_006baa30(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x06')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int fn_006ba9fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if (*(char *)(iVar1 + 4) == '\x15') {
    bVar3 = -1 < param_2;
    bVar4 = param_2 == 0;
    iVar2 = 0x15;
    if (bVar3) {
      iVar2 = *(int *)(iVar1 + 0x10);
      bVar4 = iVar2 == param_2;
    }
    if (!bVar4 && (bVar3 && param_2 <= iVar2)) {
      iVar1 = iVar1 + param_2 * 4;
    }
    if (!bVar4 && (bVar3 && param_2 <= iVar2)) {
      iVar1 = *(int *)(iVar1 + 0x14);
    }
    if (!bVar4 && (bVar3 && param_2 <= iVar2)) {
      return iVar1;
    }
  }
  return 0;
}



undefined4 fn_006ba9e8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\v') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006ba9d4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    iVar1 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



int fn_006ba994(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (((*(char *)(*(int *)(param_1 + 0x84) + 4) == '\0') &&
      (pcVar1 = (char *)fn_0016533c(*(int *)(param_1 + 0x84),param_2,0), pcVar1 != (char *)0x0)) &&
     (*pcVar1 == '\x10')) {
    iVar2 = (int)pcVar1[0xc0];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_006ba968(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    bVar2 = -1 < param_2;
    bVar3 = param_2 == 0;
    iVar1 = 1;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0xc);
      bVar3 = iVar1 == param_2;
    }
    if (!bVar3 && (bVar2 && param_2 <= iVar1)) {
      param_1 = param_1 + param_2 * 4;
    }
    if (!bVar3 && (bVar2 && param_2 <= iVar1)) {
      param_1 = *(int *)(param_1 + 0x10);
    }
    if (!bVar3 && (bVar2 && param_2 <= iVar1)) {
      return param_1;
    }
  }
  return 0;
}



int fn_006ba94c(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x84) + 4) == '\x15') {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 0x84) + 0xc);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_006ba92c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x84) + 4) == '\x15') {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 0x84) + param_2 + 8);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_006ba918(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006ba8dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int **)(param_1 + 0x8c) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))(), iVar1 != 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



uint fn_006ba894(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  bVar4 = uVar1 < uVar2;
  bVar3 = uVar1 == uVar2;
  if (bVar3) {
    uVar1 = 2;
  }
  if (bVar4) {
    uVar1 = 1;
  }
  if (!bVar4 && !bVar3) {
    uVar1 = 0;
  }
  return uVar1;
}


