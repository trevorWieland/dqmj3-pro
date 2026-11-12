#include "0017f8e0_0017fd10bbb.h"



void fn_0017fd10(int param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcStack_34;
  char *pcStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  fn_0018d060(*(undefined4 *)(param_1 + 4));
  uVar7 = *(uint *)(param_1 + 0x30);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 4);
  pcVar4 = *(char **)(iVar3 + 0x40);
  pcVar2 = pcVar4;
  pcVar8 = *(char **)(pcVar4 + 4);
  while (pcVar8 != (char *)0x0) {
    if (*(int *)(pcVar8 + 0x10) < 0) {
      pcVar8 = *(char **)(pcVar8 + 0xc);
    }
    else {
      pcVar2 = pcVar8;
      pcVar8 = *(char **)(pcVar8 + 8);
    }
  }
  if ((pcVar2 != pcVar4) && (*(int *)(pcVar2 + 0x10) < 1)) {
    pcVar4 = pcVar2;
  }
  if (pcVar4 != *(char **)(iVar3 + 0x40)) goto LAB_0018d35c;
  iVar5 = fn_00145b00(0x20,&DAT_00812c8c);
  uStack_24 = 0;
  if (iVar5 != 0) {
    uStack_24 = fn_00196930();
  }
  uStack_28 = 0;
  pcVar8 = *(char **)(iVar3 + 0x40);
  bVar1 = true;
  pcStack_30 = pcVar8;
  pcVar2 = *(char **)(pcVar8 + 4);
  while (pcVar2 != (char *)0x0) {
    bVar1 = 0 < *(int *)(pcVar2 + 0x10);
    pcStack_30 = pcVar2;
    if (bVar1) {
      pcVar2 = *(char **)(pcVar2 + 8);
    }
    else {
      pcVar2 = *(char **)(pcVar2 + 0xc);
    }
  }
  if (*(char *)(iVar3 + 0x48) == '\0') {
    if (bVar1) {
      if (pcStack_30 == *(char **)(pcVar8 + 8)) goto LAB_0018d340;
      if ((*pcStack_30 == '\0') && (*(char **)(*(int *)(pcStack_30 + 4) + 4) == pcStack_30)) {
        pcStack_30 = *(char **)(pcStack_30 + 0xc);
      }
      else {
        pcVar2 = *(char **)(pcStack_30 + 8);
        if (*(char **)(pcStack_30 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(pcStack_30 + 4);
          pcVar8 = pcStack_30;
          while (pcStack_30 = pcVar2, pcVar8 == *(char **)(pcStack_30 + 8)) {
            pcVar2 = *(char **)(pcStack_30 + 4);
            pcVar8 = pcStack_30;
          }
        }
        else {
          do {
            pcStack_30 = pcVar2;
            pcVar2 = *(char **)(pcStack_30 + 0xc);
          } while (*(char **)(pcStack_30 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*(int *)(pcStack_30 + 0x10) < 0) goto LAB_0018d340;
    uStack_2c = 0;
  }
  else {
LAB_0018d340:
    fn_0019cb30(&pcStack_34);
    pcStack_30 = pcStack_34;
    uStack_2c = 1;
  }
  pcVar4 = pcStack_30;
LAB_0018d35c:
  if (uVar7 < (uint)((*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14)) / 0xc)) {
    fn_001a0b78(*(undefined4 *)(pcVar4 + 0x14));
    puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x14) + uVar7 * 0xc);
    fn_00196910(*(undefined4 *)(pcVar4 + 0x14),*puVar6,puVar6[1],0);
    *(undefined4 *)(*(int *)(pcVar4 + 0x14) + 4) = 0;
  }
  return;
}


