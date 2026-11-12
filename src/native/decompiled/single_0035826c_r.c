#include "single_0035826c_r.h"


extern undefined4 _local_3c;
extern undefined4 stack0xffffffbc;
extern undefined4 _local_58;

void fn_0035826c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  short local_58;
  char acStack_56 [20];
  short sStack_42;
  undefined4 local_40;
  short local_3c;
  short sStack_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  _local_58 = 0;
  acStack_56[2] = '\0';
  acStack_56[3] = '\0';
  acStack_56[4] = '\0';
  acStack_56[5] = '\0';
  acStack_56[6] = '\0';
  acStack_56[7] = '\0';
  acStack_56[8] = '\0';
  acStack_56[9] = '\0';
  acStack_56[10] = '\0';
  acStack_56[0xb] = '\0';
  acStack_56[0xc] = '\0';
  acStack_56[0xd] = '\0';
  acStack_56[0xe] = '\0';
  acStack_56[0xf] = '\0';
  acStack_56[0x10] = '\0';
  acStack_56[0x11] = '\0';
  stack0xffffffbc = 0;
  local_40 = 0;
  local_3c = 0;
  sStack_3a = 0;
  uVar5 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  do {
    iVar2 = fn_006f44fc(param_1,(int)(short)(&DAT_007ba698)[uVar5 * 2]);
    if (iVar2 != 0) {
      *(short *)(acStack_56 + (uint)(byte)(&DAT_007ba69a)[uVar5 * 4] * 2 + -2) =
           *(short *)(acStack_56 + (uint)(byte)(&DAT_007ba69a)[uVar5 * 4] * 2 + -2) + 2;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x11);
  iVar2 = fn_006f44fc(param_1,0x75);
  if (iVar2 != 0) {
    stack0xffffffbc = CONCAT22(sStack_42 + 2,((*(unsigned int *)((unsigned char *)acStack_56 + 18)) & 0xffff));
    local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff + 2,(short)local_40 + 2);
    local_3c = local_3c + 2;
  }
  iVar2 = fn_006f44fc(param_1,0x76);
  if (iVar2 != 0) {
    sStack_3a = sStack_3a + 2;
    local_38 = CONCAT22(((unsigned int)(local_38) >> 16) & 0xffff + 2,(short)local_38 + 2);
    local_34 = CONCAT22(((unsigned int)(local_34) >> 16) & 0xffff,(short)local_34 + 2);
  }
  iVar2 = fn_006f44fc(param_1,0x77);
  cVar7 = iVar2 != 0;
  if (!(bool)cVar7) {
    iVar2 = fn_006f44fc(param_1,0x78);
    if (iVar2 == 0) {
      iVar2 = fn_006f44fc(param_1,0x79);
      if (iVar2 != 0) {
        cVar7 = '\x03';
      }
    }
    else {
      cVar7 = '\x02';
    }
  }
  iVar3 = 0;
  iVar2 = 0x19;
  pcVar4 = acStack_56;
  do {
    iVar6 = param_1 + iVar3;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 1;
    *(char *)(iVar6 + 0x3d9) = *pcVar4 + cVar7;
    pcVar4 = pcVar4 + 2;
  } while (iVar2 != 0);
  _local_58 = 0;
  acStack_56[2] = '\0';
  acStack_56[3] = '\0';
  acStack_56[4] = '\0';
  acStack_56[5] = '\0';
  acStack_56[6] = '\0';
  acStack_56[7] = '\0';
  acStack_56[8] = '\0';
  acStack_56[9] = '\0';
  acStack_56[10] = '\0';
  acStack_56[0xb] = '\0';
  acStack_56[0xc] = '\0';
  acStack_56[0xd] = '\0';
  acStack_56[0xe] = '\0';
  acStack_56[0xf] = '\0';
  acStack_56[0x10] = '\0';
  acStack_56[0x11] = '\0';
  stack0xffffffbc = 0;
  local_40 = 0;
  local_3c = 0;
  sStack_3a = 0;
  uVar5 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  do {
    iVar2 = uVar5 * 4;
    sVar1 = fn_006f33f0(param_1,(int)(short)(&DAT_007ba6dc)[uVar5 * 2]);
    uVar5 = uVar5 + 1;
    *(short *)(acStack_56 + (uint)(byte)(&DAT_007ba6de)[iVar2] * 2 + -2) =
         sVar1 + *(short *)(acStack_56 + (uint)(byte)(&DAT_007ba6de)[iVar2] * 2 + -2);
  } while (uVar5 < 0x11);
  iVar2 = fn_006f33f0(param_1,0x15b);
  if (iVar2 != 0) {
    sVar1 = (short)iVar2;
    stack0xffffffbc = CONCAT22(sStack_42 + sVar1,((*(unsigned int *)((unsigned char *)acStack_56 + 18)) & 0xffff));
    local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff + sVar1,(short)local_40 + sVar1);
    local_3c = sVar1 + local_3c;
  }
  iVar2 = fn_006f33f0(param_1,0x15c);
  if (iVar2 != 0) {
    sVar1 = (short)iVar2;
    _local_3c = CONCAT22(sStack_3a + sVar1,local_3c);
    local_38 = CONCAT22(((unsigned int)(local_38) >> 16) & 0xffff + sVar1,(short)local_38 + sVar1);
    local_34 = CONCAT22(((unsigned int)(local_34) >> 16) & 0xffff,sVar1 + (short)local_34);
  }
  iVar2 = 0;
  iVar3 = 0x19;
  pcVar4 = acStack_56;
  do {
    iVar6 = param_1 + 0x3d8 + iVar2;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1;
    *(char *)(iVar6 + 1) = *pcVar4 + *(char *)(iVar6 + 1);
    pcVar4 = pcVar4 + 2;
  } while (iVar3 != 0);
  return;
}


