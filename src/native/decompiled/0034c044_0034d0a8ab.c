#include "0034c044_0034d0a8ab.h"



void fn_0034c618(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_10;
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x558);
  local_10 = param_4;
  iVar1 = fn_00163940(iVar3);
  if (iVar1 != 0) {
    fn_0023097c(&local_10,iVar3,0);
    fn_00385b60(param_1,local_10);
    if (local_10 != &DAT_008f9cf4) {
      piVar2 = local_10 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
      }
    }
  }
  return;
}



void fn_0034c594(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034c6b4(iVar1,param_1);
  return;
}



void fn_0034c48c(int param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 *local_18;
  undefined4 *local_14 [2];
  
  iVar2 = *(int *)(param_1 + 0xa8);
  bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x56c) == '\0') {
    *(byte *)(iVar2 + 0x44) = bVar3;
  }
  else {
    *(byte *)(iVar2 + 0x44) = bVar3 | 1;
    local_18 = &DAT_008f9cf4;
    local_14[0] = &DAT_008f9cf4;
    fn_002318cc(*(int *)(param_1 + 0x98) + 0x55c,&local_18,local_14);
    fn_00190d50(*(undefined4 *)(param_1 + 0xa0),local_18);
    fn_00190d50(*(undefined4 *)(param_1 + 0xa4),local_14[0]);
    if (local_14[0] != &DAT_008f9cf4) {
      piVar1 = local_14[0] + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_14[0] + -3,local_14[0][-2] + 8,0);
      }
    }
    if (local_18 != &DAT_008f9cf4) {
      piVar1 = local_18 + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
      }
    }
  }
  return;
}



void fn_0034c314(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_30;
  char *local_2c;
  int iStack_28;
  char *pcStack_24;
  int iStack_20;
  char *pcStack_1c;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = 0;
  local_30 = param_1 + 0x9c;
  local_2c = (char *)&DAT_00863c8c;
  iStack_28 = param_1 + 0xa0;
  pcStack_24 = (char *)&DAT_00863d58;
  iStack_20 = param_1 + 0xa4;
  pcStack_1c = "tb_soubisareteiruacce_02";
  do {
    iVar1 = uVar3 * 2;
    uVar2 = fn_0068897c(uVar4,(&local_2c)[uVar3 * 2]);
    uVar3 = uVar3 + 1;
    *(undefined4 *)(&local_30)[iVar1] = uVar2;
  } while (uVar3 < 3);
  uVar4 = fn_00689210(uVar4,(char *)&DAT_0034c398);
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  return;
}


