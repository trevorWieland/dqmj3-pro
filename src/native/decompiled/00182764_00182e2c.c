#include "00182764_00182e2c.h"



undefined4 fn_00182e2c(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((((int)*param_2 - 0x10U < 8) && (uVar2 = (uint)(char)((int)*param_2 - 0x10U), -1 < (int)uVar2)
      ) && (uVar2 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2))) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4);
  }
  return uVar1;
}



char * fn_00182dfc(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x03')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined4 fn_00182de8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_00182dc4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((cVar1 == '\b' || cVar1 == '\t') || (cVar1 == '\n')) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00182d98(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    bVar2 = -1 < param_2;
    bVar3 = param_2 == 0;
    iVar1 = 2;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 8);
      bVar3 = iVar1 == param_2;
    }
    if (!bVar3 && (bVar2 && param_2 <= iVar1)) {
      param_1 = param_1 + param_2 * 4;
    }
    if (!bVar3 && (bVar2 && param_2 <= iVar1)) {
      param_1 = *(int *)(param_1 + 0xc);
    }
    if (!bVar3 && (bVar2 && param_2 <= iVar1)) {
      return param_1;
    }
  }
  return 0;
}



char * fn_00182d68(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x15')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int fn_00182d34(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x20) == iVar2) {
      return -1;
    }
    if (*(int *)(iVar2 + 8) == param_2) break;
    iVar2 = iVar2 + 0x28;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



int fn_00182cc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = fn_003035b0((&DAT_007ba238)[iVar2 * 4],param_2);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar1 = fn_003035b0((&DAT_007ba248)[iVar2 * 4],param_2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 2;
    if (0x45 < iVar2) {
      return -1;
    }
  }
  return iVar2 + 1;
}



void fn_00182c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_10 = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (piVar2 = (int *)fn_00165bb4(iVar1,&local_10), piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00182cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x10))(piVar2,param_3,param_4);
      return;
    }
  }
  return;
}



int fn_00182964(int param_1)

{
  return (*(int *)(&DAT_00899514 + param_1 * 0x4c) >> 0x1f) + 1;
}



int fn_00182944(int param_1)

{
  return (int)*(char *)(DAT_008d1880 + param_1 * 0x3c + 4);
}



int fn_00182924(int param_1)

{
  return (int)*(char *)(DAT_008d1880 + param_1 * 0x3c + 5);
}



undefined4 fn_00182904(int param_1)

{
  return *(undefined4 *)(DAT_008d1880 + param_1 * 0x3c + 0xc);
}



void fn_00182810(int *param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_60 [48];
  undefined4 local_30;
  
  fVar4 = 1.0;
  if (param_1 != (int *)0x0 && param_2 != (short *)0x0) {
    fn_00191580(auStack_60);
    (**(code **)(*param_1 + 0x70))(param_1,auStack_60);
    fVar3 = 3.4028235e+38;
    local_30 = 0x7f7fffff;
    iVar2 = 0;
    for (psVar1 = param_2; *psVar1 != 0; psVar1 = psVar1 + 1) {
      iVar2 = iVar2 + 1;
    }
    fn_001915c8(auStack_60,param_2,iVar2);
    fn_001915c4(auStack_60);
    if (((int)fVar3 & 0x80000001U) == 1) {
      fVar3 = fVar3 + fVar4;
    }
    param_1[0xf] = (int)fVar3;
    param_1[0x10] = param_1[0x10];
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
    iVar2 = fn_00100b58(param_2);
    fn_00190d78(param_1,param_2,iVar2 + 1);
  }
  return;
}



int * fn_001827b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                            (*(int **)(param_1 + 0x10),param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



int fn_00182764(int param_1)

{
  uint uVar1;
  
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  if (*(int *)(param_1 + 0x3c) != 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x38); uVar1 = uVar1 + 1) {
    }
    fn_0019d680(*(undefined4 *)(param_1 + 0x34));
  }
  return param_1;
}


