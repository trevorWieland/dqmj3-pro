#include "00395dc0_00396678b.h"



void fn_00396678(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &PTR_FUN_0082b9e0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  return;
}



void fn_003965f0(int *param_1)

{
  char cVar1;
  char cVar2;
  
  fn_002c4304();
  cVar1 = (char)param_1[0x2f];
  if (((cVar1 != '\0') && (cVar1 == '\x01' || cVar1 == '\x02')) &&
     (cVar2 = *(char *)(param_1[0x2e] + 0x31), cVar2 != '\0')) {
    if (cVar2 == '\x02') {
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
    else if (cVar2 == '\x03') {
      if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00396670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x144))(param_1);
        return;
      }
      if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0039665c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x148))(param_1);
        return;
      }
    }
  }
  return;
}



void fn_00396588(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x154))(param_1);
  puVar2 = &LAB_003965cc;
  if (iVar1 != 0) {
    puVar2 = param_3;
  }
  fn_0031b78c(param_1,param_2,7,puVar2);
  return;
}



undefined4 fn_00396280(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008939cc) goto LAB_003962cc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_003962cc:
  param_1[0x2c] = (int)puVar6;
  puVar6 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008942dc) goto LAB_00396310;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00396310:
  param_1[0x2d] = (int)puVar6;
  puVar6 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008942d0) goto LAB_00396354;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00396354:
  param_1[0x2e] = (int)puVar6;
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
  local_1c = *(undefined4 *)(param_1[0x2c] + 8);
  local_20 = *(undefined4 *)(param_1[0x2c] + 0xc);
  fn_002c374c(param_1,&local_1c,&local_20,8,uVar2);
  fn_002c330c(&local_54);
  local_54 = DAT_00893a18;
  local_50 = DAT_00893a1c;
  uVar3 = (**(code **)(*param_1 + 0x140))(param_1);
  fn_00147974(&local_38,uVar3);
  local_4c = 8;
  local_25 = 1;
  local_48 = local_1c;
  local_44 = local_20;
  local_40 = uVar2;
  (**(code **)(*param_1 + 0x14c))(param_1);
  iVar4 = (**(code **)(*param_1 + 0x150))(param_1);
  if (iVar4 != 0) {
    local_26 = 1;
    fn_00147974(&local_34);
  }
  local_24 = 0;
  local_22 = 1;
  local_21 = 0;
  uVar2 = fn_002c29a0(param_1,&local_54);
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar5 = local_38 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  return uVar2;
}



void fn_003961d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_10;
  short local_c;
  short local_a;
  
  fn_0036bcc8(param_2,param_3,&local_c);
  fn_0023097c(&local_10,(int)local_c,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xc0),local_10);
  fn_00688c04(*(undefined4 *)(param_1 + 0xc4),(int)local_a,0);
  if (local_10 != &DAT_008f9cf4) {
    piVar1 = local_10 + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_003960f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = fn_0068897c(uVar3,(char *)&DAT_00396134);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  uVar2 = fn_0068897c(uVar3,(char *)&DAT_00396140);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  return;
}


