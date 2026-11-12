#include "00770880_007709d4.h"



void fn_007709d4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_007709d4(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



void fn_00770880(undefined4 *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_24 [2];
  
  bVar1 = true;
  pcVar3 = *(char **)(param_2 + 0x10);
  pcVar4 = pcVar3;
  if (*(char **)(pcVar3 + 4) != (char *)0x0) {
    pcVar2 = *(char **)(pcVar3 + 4);
    do {
      pcVar4 = pcVar2;
      if ((*param_3 < *(uint *)(pcVar4 + 0x10)) ||
         ((*param_3 <= *(uint *)(pcVar4 + 0x10) && (param_3[1] < *(uint *)(pcVar4 + 0x14))))) {
        pcVar2 = *(char **)(pcVar4 + 8);
        bVar1 = true;
      }
      else {
        pcVar2 = *(char **)(pcVar4 + 0xc);
        bVar1 = false;
      }
    } while (pcVar2 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (bVar1) {
      if (pcVar4 == *(char **)(pcVar3 + 8)) goto LAB_007709a0;
      if ((*pcVar4 == '\0') && (*(char **)(*(int *)(pcVar4 + 4) + 4) == pcVar4)) {
        pcVar4 = *(char **)(pcVar4 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar4 + 8);
        if (*(char **)(pcVar4 + 8) == (char *)0x0) {
          pcVar3 = *(char **)(pcVar4 + 4);
          pcVar2 = pcVar4;
          while (pcVar4 = pcVar3, pcVar2 == *(char **)(pcVar4 + 8)) {
            pcVar3 = *(char **)(pcVar4 + 4);
            pcVar2 = pcVar4;
          }
        }
        else {
          do {
            pcVar4 = pcVar3;
            pcVar3 = *(char **)(pcVar4 + 0xc);
          } while (*(char **)(pcVar4 + 0xc) != (char *)0x0);
        }
      }
    }
    if ((*param_3 <= *(uint *)(pcVar4 + 0x10)) &&
       ((*param_3 < *(uint *)(pcVar4 + 0x10) || (param_3[1] <= *(uint *)(pcVar4 + 0x14))))) {
      *param_1 = pcVar4;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
LAB_007709a0:
  fn_00770a10(local_24);
  *param_1 = local_24[0];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


