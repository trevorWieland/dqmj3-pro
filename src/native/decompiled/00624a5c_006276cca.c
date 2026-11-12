#include "00624a5c_006276cca.h"



void fn_00624a5c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined1 local_1d2;
  undefined1 local_1d1;
  undefined2 local_1c0;
  int local_1bc;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar6 = 0;
  for (iVar4 = param_3; iVar4 < param_4; iVar4 = iVar4 + 1) {
    iVar10 = param_2 + iVar4 * 0x1a0;
    uVar8 = (uint)*(short *)(iVar10 + 0x18);
    if (0 < (int)(uVar8 - 1)) {
      piVar2 = (int *)(iVar10 + 0x14);
      if ((uVar8 & 1) == 0) {
        piVar2 = (int *)(iVar10 + 0x1c);
        iVar6 = iVar6 + *piVar2;
      }
      iVar9 = piVar2[2];
      iVar5 = 0;
      for (iVar3 = (int)(uVar8 - 1) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar6 = iVar6 + iVar9;
        iVar9 = piVar2[6];
        iVar5 = iVar5 + piVar2[4];
        piVar2 = piVar2 + 4;
      }
      iVar6 = iVar6 + iVar5;
    }
    if (-1 < (int)(uVar8 - 1)) {
      iVar6 = iVar6 + *(int *)(iVar10 + (uVar8 - 1) * 8 + 0x1c);
    }
  }
  pcVar7 = (char *)(param_2 + param_3 * 0x1a0);
  iVar4 = (int)*(short *)(pcVar7 + 4);
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  if (pcVar7[2] == '\x03') {
    sVar1 = fn_001746c0(iVar4);
    iVar4 = (int)sVar1;
  }
  iVar10 = param_5 + 0x180388;
  local_1d8 = 0;
  local_1bc = fn_0061fc90(iVar4,(int)*pcVar7,iVar6);
  if (local_1bc != 0) {
    fn_00301f50(&local_1d8,0x1a0);
    local_1c0 = 1;
    local_1d8 = CONCAT13(((unsigned int)(local_1d8) >> 24) & 0xff,0x40000);
    local_1d4 = 10;
    local_1d2 = 3;
    local_1d1 = 8;
    local_1d8 = (local_1d8 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(*pcVar7,*pcVar7)) & 0xffff);
    fn_0062187c(local_34,&local_1d8,iVar10);
    if (local_1bc != 0) {
      fn_0062abdc(local_34,iVar10,&local_1d8,param_5);
      fn_00654bf4(iVar10,local_44);
      fn_00654c30(iVar10,local_40);
      fn_0017821c(param_6 + *(int *)(param_6 + 4) * 0x1a0 + 0x2088,&local_1d8,0x1a0);
      *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
    }
  }
  return;
}


