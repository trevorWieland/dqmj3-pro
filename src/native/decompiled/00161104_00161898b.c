#include "00161104_00161898b.h"



void fn_00161898(int param_1,int param_2)

{
  *(int *)(param_2 + 8) = param_1;
  fn_0017d948(param_1 + 0x18,param_1 + 0x1c,param_2 + 0x1c);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}



undefined4 * fn_0016168c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f800000;
  *param_1 = &DAT_00857ec4;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)((int)param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0xb9) = 0;
  *(undefined1 *)((int)param_1 + 0xba) = 0;
  *(undefined1 *)((int)param_1 + 0xbb) = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  uVar2 = 0;
  if (((DAT_008c6304 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6304), iVar1 != 0)) {
    DAT_008f9e68 = uVar3;
    DAT_008f9e6c = uVar2;
    DAT_008f9e70 = uVar2;
    DAT_008f9e74 = uVar2;
    DAT_008f9e78 = uVar2;
    DAT_008f9e7c = uVar3;
    DAT_008f9e80 = uVar2;
    DAT_008f9e84 = uVar2;
    DAT_008f9e88 = uVar2;
    DAT_008f9e8c = uVar2;
    DAT_008f9e90 = uVar3;
    DAT_008f9e94 = uVar2;
    DAT_008f9e98 = uVar2;
    DAT_008f9e9c = uVar2;
    DAT_008f9ea0 = uVar2;
    DAT_008f9ea4 = uVar3;
  }
  fn_001694c0(param_1 + 1,&DAT_008f9e68);
  if (((DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = uVar3;
    DAT_008f9e3c = uVar2;
    DAT_008f9e40 = uVar2;
    DAT_008f9e44 = uVar2;
    DAT_008f9e48 = uVar2;
    DAT_008f9e4c = uVar3;
    DAT_008f9e50 = uVar2;
    DAT_008f9e54 = uVar2;
    DAT_008f9e58 = uVar2;
    DAT_008f9e5c = uVar2;
    DAT_008f9e60 = uVar3;
    DAT_008f9e64 = uVar2;
  }
  fn_001781f0(param_1 + 0x11,&DAT_008f9e38);
  if (((DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = uVar3;
    DAT_008f9e3c = uVar2;
    DAT_008f9e40 = uVar2;
    DAT_008f9e44 = uVar2;
    DAT_008f9e48 = uVar2;
    DAT_008f9e4c = uVar3;
    DAT_008f9e50 = uVar2;
    DAT_008f9e54 = uVar2;
    DAT_008f9e58 = uVar2;
    DAT_008f9e5c = uVar2;
    DAT_008f9e60 = uVar3;
    DAT_008f9e64 = uVar2;
  }
  fn_001781f0(param_1 + 0x1d,&DAT_008f9e38);
  return param_1;
}



undefined4 * fn_001615fc(int param_1,char *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (undefined4 *)fn_00194ee4(0x90,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0x22] = 0;
    *(undefined1 *)(puVar1 + 0x23) = 0;
    uVar4 = 0;
    pcVar2 = (char *)(puVar1 + 2);
    do {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar2 + 1;
      *pcVar2 = *param_2;
      param_2 = param_2 + 1;
      bVar6 = *param_2 == '\0';
      uVar5 = 0;
      if (!bVar6) {
        uVar5 = 0x7f;
      }
      pcVar2 = pcVar3;
    } while ((bVar6 || uVar4 <= uVar5) && (!bVar6 && uVar5 != uVar4));
    *pcVar3 = '\0';
    puVar1[0x22] = param_3;
    *(undefined1 *)(puVar1 + 0x23) = param_4;
    fn_0017d948(param_1,param_1 + 4,puVar1);
  }
  return puVar1;
}


