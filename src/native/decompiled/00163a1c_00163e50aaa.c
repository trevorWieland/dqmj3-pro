#include "00163a1c_00163e50aaa.h"



uint fn_00163a1c(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  short *psVar6;
  
  sVar1 = fn_00165020();
  if ((int)sVar1 - 1U < 699) {
    uVar2 = fn_00163c80();
    return uVar2;
  }
  iVar3 = fn_00165998(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 != 0) {
switchD_00163b20_caseD_1:
    return 1;
  }
  iVar3 = fn_00165b0c(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 != 0) {
    piVar4 = (int *)fn_00165b0c();
    if (*piVar4 == 0x50) {
      return 1;
    }
    return 2;
  }
  iVar3 = fn_00165b34(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 != 0) {
    piVar4 = (int *)fn_00165b34(*(undefined4 *)(param_1 + 0x84));
    iVar3 = *piVar4;
    if (iVar3 == 0xbf) {
      return 2;
    }
    if (iVar3 < 0xc0) {
      if (iVar3 == 0xbd) {
        return 1;
      }
      if (iVar3 == 0xbe) {
        return 3;
      }
    }
    else if (iVar3 == 0x1f5 || iVar3 == 0x1f6) {
      return 6;
    }
  }
  iVar3 = fn_00165b48(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 != 0) {
switchD_00163b20_caseD_3:
    return 6;
  }
  pcVar5 = (char *)fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 == '\x01') {
      uVar2 = fn_00163c80((int)*(short *)(pcVar5 + 2));
      return uVar2;
    }
    if (*pcVar5 == '\x04') {
      switch(*(undefined2 *)(pcVar5 + 2)) {
      case 1:
      case 2:
      case 0xd:
        goto switchD_00163b20_caseD_1;
      case 3:
      case 0xe:
      case 0xf:
        goto switchD_00163b20_caseD_3;
      case 6:
      case 7:
      case 10:
        goto switchD_00163b20_caseD_6;
      }
    }
  }
  iVar3 = fn_00165984(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 != 0) {
    return 2;
  }
  iVar3 = fn_00165af8(*(undefined4 *)(param_1 + 0x84));
  if (((iVar3 != 0) || (iVar3 = fn_00165b20(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) ||
     (iVar3 = fn_00175bd0(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) {
    return 0;
  }
  iVar3 = fn_00165328(*(undefined4 *)(param_1 + 0x84));
  if ((iVar3 == 0) && (iVar3 = fn_00165b5c(*(undefined4 *)(param_1 + 0x84)), iVar3 == 0)) {
    iVar3 = fn_001659ac(*(undefined4 *)(param_1 + 0x84));
    if (iVar3 != 0) {
      uVar2 = fn_00163c80(1);
      return uVar2;
    }
    iVar3 = fn_001759f8(*(undefined4 *)(param_1 + 0x84));
    if (iVar3 != 0) {
      psVar6 = (short *)fn_001759f8();
      uVar2 = fn_00163c80((int)*psVar6);
      return uVar2;
    }
    iVar3 = fn_00175a90(*(undefined4 *)(param_1 + 0x84));
    if (iVar3 == 0) {
      return 0;
    }
    psVar6 = (short *)fn_00175a90(*(undefined4 *)(param_1 + 0x84));
    return (uint)*(byte *)(DAT_008994a4 + *psVar6 * 0x60 + 4);
  }
switchD_00163b20_caseD_6:
  return 4;
}


