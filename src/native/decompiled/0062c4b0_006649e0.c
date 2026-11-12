#include "0062c4b0_006649e0.h"



void fn_006649e0(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    fn_00662bd0(0);
    iVar1 = fn_00663d40();
    *param_1 = iVar1 == 2;
  }
  return;
}



void fn_006622a0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_27 = 1;
  local_24 = 4;
  uStack_20 = 8;
  uStack_1c = 1;
  local_28 = 0;
  uVar1 = fn_00542fec(&local_28,*(undefined4 *)(param_1 + 4));
  param_3[1] = uVar1;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_002a3268(iVar2,param_2,param_3[1],param_4);
  }
  *param_3 = uVar1;
  fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x24),param_3[1]);
  fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x24));
  *(undefined1 *)(param_3 + 2) = 1;
  return;
}



int fn_0065e460(int param_1)

{
  if ((param_1 < 0) || (*DAT_008bf62c <= param_1)) {
    param_1 = 0;
  }
  return (int)DAT_008bf62c[param_1 * 2 + 5];
}



void fn_00659178(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_008c06e4;
  if (DAT_008c06e4 != (undefined4 *)0x0) {
    DAT_008c06e4 = (undefined4 *)0x0;
    (**(code **)*puVar1)();
    puVar1 = DAT_008c06e0;
    if (DAT_008c06e0 != (undefined4 *)0x0) {
      (**(code **)*DAT_008c06e0)(DAT_008c06e0);
      fn_00656b7c(puVar1);
    }
    DAT_008c06e0 = (undefined4 *)0x0;
  }
  return;
}



void fn_00656e58(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)fn_006f5418(DAT_008c06d0), param_2 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
  return;
}



void fn_00656e14(undefined4 param_1,int *param_2)

{
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)fn_006f5418(DAT_008c06d0), param_2 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,4);
  return;
}



void fn_0063a5a4(void)

{
  uint uVar1;
  
  uVar1 = DAT_008bf60c;
  DAT_008bf60c = DAT_008bf610;
  uVar1 = uVar1 ^ uVar1 << 0xb;
  DAT_008bf610 = DAT_008bf614;
  DAT_008bf614 = DAT_008bf618;
  DAT_008bf618 = DAT_008bf618 ^ DAT_008bf618 >> 0x13 ^ uVar1 ^ uVar1 >> 8;
  return;
}



void fn_0062c4b0(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = fn_00691af0(param_1,0);
  iVar3 = fn_00691af0(param_1,1);
  sVar2 = fn_00176dc0(param_3 + param_2 * 0x418 + -0x4080);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  iVar4 = fn_00169f1c((int)sVar2 * (int)sVar1 + iVar3 + -1,iVar3);
  fn_00300f74(iVar4 * iVar3,iVar3);
  return;
}


