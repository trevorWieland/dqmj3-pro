#include "002a0820_002a1e2c.h"



void fn_002a1e2c(int *param_1)

{
  int iVar1;
  
  if (param_1[2] < 1) {
    iVar1 = fn_00174858(DAT_008977e4);
    if (*(char *)(iVar1 + 0x99) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x002a1e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
  }
  else {
    param_1[2] = param_1[2] + -1;
  }
  return;
}



undefined4 fn_002a1df0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00339a10();
  uVar2 = 0;
  if (iVar1 != 0) {
    fn_00174828(DAT_008977e4);
    iVar1 = fn_001c2a8c();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 10;
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_002a1c34(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  fn_00129014(2);
  iVar2 = fn_00174834(DAT_008977e4);
  iVar3 = fn_006a7b84(DAT_008977e4);
  *(undefined1 *)(iVar3 + 0x34) = 1;
  switch(*(undefined1 *)(iVar2 + 0x180384)) {
  case 0:
    iVar2 = fn_00174834(DAT_008977e4);
    pcVar4 = (char *)(iVar2 + 0x185ec0);
    cVar1 = *pcVar4;
    if (cVar1 != '\x02') {
      pcVar4 = (char *)(uint)*(byte *)(iVar2 + 0x185ec9);
    }
    if (cVar1 != '\x02' && pcVar4 != (char *)0x2) {
      iVar2 = fn_00174834(DAT_008977e4);
      pcVar4 = (char *)(iVar2 + 0x185ec0);
      cVar1 = *pcVar4;
      if (cVar1 != '\x03') {
        pcVar4 = (char *)(uint)*(byte *)(iVar2 + 0x185ec9);
      }
      if (cVar1 != '\x03' && pcVar4 != (char *)0x3) {
        puVar5 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar5 + 1) = 0;
          *puVar5 = &DAT_0082deb8;
          *(undefined1 *)((int)puVar5 + 5) = 0;
        }
        goto LAB_002a1dbc;
      }
    }
    local_18 = 0;
    local_14 = 0xff000000;
    fn_0068869c(DAT_00897808,&local_18,&local_14,10);
    local_18 = 0xff000000;
    local_14 = 0;
    fn_0068869c(DAT_0089780c,&local_14,&local_18,10);
    puVar5 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = &DAT_0083aeac;
    }
    fn_005df93c(DAT_008977e4,puVar5);
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    fn_001c20c8(DAT_008977e4,1);
    puVar5 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = &DAT_0082ad74;
    }
LAB_002a1dbc:
    fn_005df93c(DAT_008977e4,puVar5);
    return;
  }
  return;
}



int fn_002a1be0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0025fb98(param_1,param_2,8);
  *puVar1 = &DAT_0081e710;
  puVar1 = (undefined4 *)fn_0025fb7c(puVar1 + 3);
  *puVar1 = &DAT_00851b88;
  iVar2 = fn_00101a1c(puVar1 + 0x41,fn_002a1ab8,0x104,8);
  return iVar2 + -0x110;
}



void fn_002a1bbc(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0019bc50(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 6;
  return;
}



void fn_002a1b80(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = param_2[3];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 3;
  return;
}



void fn_002a1b0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00301a9c(param_1 + 0x18,param_2,0x1a);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 2;
  return;
}



void fn_002a1af4(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 4;
  return;
}



void fn_002a1ad0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 5;
  return;
}



void fn_002a1ab8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025fb7c();
  *puVar1 = &DAT_00851b88;
  return;
}



void fn_002a1a6c(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = (char)param_2;
  if (param_2 == 1) {
    uVar1 = 900;
  }
  else {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 8) = 0x708;
      return;
    }
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_002a19f8(int param_1)

{
  int *piVar1;
  int local_18;
  int local_14 [3];
  
  piVar1 = &local_18;
  if (*(int *)(param_1 + 8) != 0) {
    fn_00117984();
    local_18 = fn_00108528();
    local_18 = local_18 + *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = local_18;
    local_14[1] = 0;
    local_14[0] = *(int *)(param_1 + 8);
    if (local_14[0] < 0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if (local_18 < 0) {
      piVar1 = local_14 + 1;
    }
    if (local_14[0] < *piVar1) {
      piVar1 = local_14;
    }
    *(int *)(param_1 + 4) = *piVar1;
  }
  return;
}



int fn_002a19c4(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < 2)) {
    param_1 = param_1 + param_2 * 4;
  }
  return param_1;
}



void fn_002a16dc(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = fn_00182994(DAT_008977e4);
  iVar6 = (int)(char)param_1;
  uVar1 = fn_001659c0(uVar2,iVar6,0);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001754ac(uVar2,uVar1);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_0016561c(uVar3,iVar6);
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = fn_00182994(DAT_008977e4);
      uVar3 = fn_00175044(uVar3,iVar6,0);
      uVar5 = fn_00182994(DAT_008977e4);
      uVar5 = fn_001659c0(uVar5,iVar6,(int)(char)iVar7);
      fn_0016c1f4(uVar5,uVar3);
      uVar3 = fn_00182994(DAT_008977e4);
      uVar3 = fn_00175044(uVar3,iVar6,1);
      uVar5 = fn_00182994(DAT_008977e4);
      uVar5 = fn_001659c0(uVar5,iVar6,(int)(char)iVar7);
      fn_0016c1f4(uVar5,uVar3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  fn_0029f1a0(param_1,uVar2);
  return;
}



void fn_002a1480(char param_1,int param_2,char param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)param_3,(int)param_1);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00179990(uVar2,(char *)&DAT_00188948,uVar1);
  if (param_2 == 0) {
    return;
  }
  piVar3 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x002a14e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x14))(piVar3,"SE_BTL_023");
  return;
}



undefined4 fn_002a0820(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != 2 && param_1 != 3) && (param_1 != 4 && param_1 != 5)) {
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_00175324(uVar1,(int)param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


