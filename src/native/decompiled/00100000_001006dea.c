#include "00100000_001006dea.h"



void fn_001003cc(int param_1)

{
  fn_001003e0(*(int *)(param_1 + 4) + 0x34);
  return;
}



short * fn_001003e0(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return param_1;
}



undefined4 fn_00100394(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = fn_002fecb6(param_3,&local_18,param_4,&LAB_0010118c_1);
  if (param_2 != 0) {
    fn_002fecdc(0,&local_18);
  }
  return uVar1;
}



void fn_00100380(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00100648();
  *puVar1 = &DAT_0085abbc;
  puVar1[1] = 0;
  return;
}



undefined8 fn_001002f8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_1;
  iVar1 = fn_001004d8(0,0,param_2,param_3,param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (((int)param_2 < 0) || (0x16 < param_2)) {
      param_2 = 0;
    }
    iVar1 = fn_002feb78(0,0,(&PTR_s__s__unspecified_error_00812c30)[param_2],param_3);
  }
  iVar2 = iVar1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = fn_002febd8();
    iVar3 = fn_002febd8(iVar1);
    uVar4 = fn_002fec38(iVar2 + iVar3 + 1);
    uVar4 = fn_002fec40(uVar4,*(undefined4 *)(param_1 + 4));
    iVar2 = fn_001003f2(uVar4,iVar1);
    fn_002feca8(*(undefined4 *)(param_1 + 4));
    fn_002feca8(iVar1);
  }
  *(int *)(param_1 + 4) = iVar2;
  return CONCAT44(iVar5,param_1);
}



undefined8 fn_001002a8(int param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  local_1c = fn_002fea7a(0,2);
  uVar2 = 0;
  do {
    do {
      uVar4 = uVar2;
      if ((param_1 != 0) && (param_3 <= uVar4)) goto LAB_001002f0;
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = fn_002fea88(&local_20,uVar1,local_1c);
      if (uVar3 == 0xffffffff) goto LAB_001002f2;
      uVar2 = uVar4;
    } while (uVar3 == 0xfffffffe);
    if (param_1 != 0) {
      *(short *)(param_1 + uVar4 * 2) = (short)local_20;
    }
    uVar2 = uVar4 + 1;
  } while ((short)local_20 != 0);
LAB_001002f0:
  uVar3 = uVar4;
LAB_001002f2:
  return CONCAT44(local_20,uVar3);
}



void fn_00100000(void)

{
  fn_00100024();
  fn_00104c58();
  fn_0013db60();
  fn_00105408();
  fn_00103180();
  fn_00104c24();
  fn_00104cac();
  fn_00104bd4();
  fn_00104bcc();
  return;
}



void fn_00100024(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_008c77c4; puVar1 < (undefined4 *)0x8faff0; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return;
}


