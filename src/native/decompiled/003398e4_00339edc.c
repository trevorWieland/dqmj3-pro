#include "003398e4_00339edc.h"



int fn_00339edc(void)

{
  return (int)(short)DAT_008923f0;
}



undefined4 fn_00339e4c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00339ed0,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 6;
  iVar2 = 0;
  DAT_008923f0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008923f0 = 0;
  }
  DAT_008923ec = param_1;
  return 1;
}



undefined4 fn_00339ae8(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  uVar7 = 0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    pcVar2 = (char *)fn_006ba918(param_1);
    cVar1 = *pcVar2;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x06') {
        iVar4 = fn_006baa30(param_1);
        uVar7 = 0;
        if (*(char *)(iVar4 + 1) == '\0') {
          uVar7 = 0xd;
        }
      }
      else if (cVar1 == '\v') {
        uVar7 = 8;
      }
      else if (cVar1 == '\x15') {
        uVar7 = 0x2d;
      }
    }
    break;
  case 1:
    iVar4 = fn_006ba9d4(param_1);
    if (iVar4 == 0) {
      iVar4 = fn_006ba968(param_1,0);
      iVar4 = (int)*(char *)(iVar4 + 0x1c);
      uVar6 = iVar4 - 0x10;
      bVar8 = 3 < uVar6;
      if (bVar8) {
        uVar6 = iVar4 - 0x18;
      }
      if ((bVar8 && 3 < uVar6) && (iVar4 != 0x20 && iVar4 != 0x22)) {
        return 10;
      }
    }
    else if (iVar4 == 1) {
      return 0xb;
    }
    uVar7 = 9;
    break;
  case 2:
    uVar7 = 0xe;
    break;
  case 3:
    iVar4 = fn_00175a0c(param_1,0);
    switch(*(undefined2 *)(iVar4 + 2)) {
    case 6:
    case 7:
      uVar7 = 0x24;
      break;
    default:
      uVar7 = 0xf;
      break;
    case 10:
      uVar7 = 0x11;
      break;
    case 0xe:
      uVar7 = 0x1f;
      break;
    case 0xf:
      uVar7 = 0x20;
    }
    break;
  case 4:
    uVar7 = 0x10;
    break;
  case 5:
  case 6:
  case 0x23:
    uVar7 = 0x12;
    break;
  case 7:
    uVar7 = 0x13;
    break;
  case 8:
    uVar7 = 0x14;
    break;
  case 9:
    uVar7 = 0x15;
    break;
  case 10:
    piVar5 = (int *)fn_00165b34(param_1);
    if (*piVar5 == 0x1f5) {
      uVar7 = 0x1d;
    }
    else if (*piVar5 == 0x1f6) {
      uVar7 = 0x1e;
    }
    else {
      uVar7 = 0x22;
    }
    break;
  case 0xc:
    uVar7 = 0x16;
    break;
  case 0xd:
    uVar7 = 2;
    break;
  case 0xe:
    if (param_1 != 0) {
      iVar3 = fn_001659ac(param_1);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 4);
      }
      if ((iVar3 != 0 && iVar4 != 0) && (iVar4 = fn_00174834(DAT_008977e4), iVar4 != 0)) {
        fn_00174828(DAT_008977e4);
      }
    }
    iVar4 = fn_00174828(DAT_008977e4);
    iVar3 = fn_001659ac(param_1);
    cVar1 = *(char *)(iVar4 + *(char *)(*(int *)(iVar3 + 4) + 0xc) * 0x418 + -0x4027);
    if (cVar1 == '\x03' || cVar1 == '\x04') {
      uVar7 = 4;
    }
    else {
      uVar7 = 3;
    }
    break;
  case 0xf:
    uVar7 = 5;
    break;
  case 0x10:
    uVar7 = 6;
    break;
  case 0x11:
    uVar7 = 7;
    break;
  case 0x12:
    uVar7 = 1;
    break;
  case 0x13:
    uVar7 = 0x17;
    break;
  case 0x14:
    uVar7 = 0x18;
    break;
  case 0x15:
    uVar7 = 0x19;
    break;
  case 0x16:
    uVar7 = 0x1b;
    break;
  case 0x17:
    uVar7 = 0x1c;
    break;
  case 0x18:
    uVar7 = 0x1a;
    break;
  case 0x19:
    uVar7 = 0x21;
    break;
  case 0x1a:
    uVar7 = 0x23;
    break;
  case 0x1b:
    uVar7 = 0x25;
    break;
  case 0x1c:
    uVar7 = 0x26;
    break;
  case 0x1d:
    uVar7 = 0x27;
    break;
  case 0x1e:
    uVar7 = 0x28;
    break;
  case 0x1f:
    uVar7 = 0x29;
    break;
  case 0x20:
    uVar7 = 0x2a;
    break;
  case 0x21:
    uVar7 = 0x2b;
    break;
  case 0x22:
    uVar7 = 0x2c;
  }
  return uVar7;
}



undefined4 * fn_00339ae4(undefined4 *param_1)

{
  *param_1 = &DAT_00859490;
  fn_002feef8(param_1[1]);
  return param_1;
}



undefined4 * fn_00339ae0(undefined4 *param_1)

{
  *param_1 = &DAT_00859490;
  fn_002feef8(param_1[1]);
  return param_1;
}



void fn_00339a40(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_00182994(DAT_008977e4);
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    fn_00182994(DAT_008977e4);
    iVar1 = fn_00209358();
    if (iVar1 == 0) {
      fn_00182994(DAT_008977e4);
      fn_001c3cc0();
                    /* WARNING: Could not recover jumptable at 0x00339ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x14))(param_1);
      return;
    }
  }
  piVar2 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x00339a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 8))();
  return;
}



undefined4 fn_00339a10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_00174834(DAT_008977e4);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_002081e8(uVar2,uVar1);
  return 1;
}



void fn_003399fc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



void fn_003399e0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  fn_001a4a68(param_1 + 2,0xffffffff);
  return;
}



void fn_003399ac(undefined4 *param_1,undefined1 *param_2)

{
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 4) = *param_2;
  *(undefined1 *)((int)param_1 + 0x11) = param_2[0xc];
  return;
}



void fn_00339980(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  fn_001a4a68((int)param_1 + 0x12,0xffffffff);
  return;
}



void fn_003398e4(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar3 = 0;
  do {
    puVar4 = (undefined2 *)(param_1 + iVar3 * 4);
    puVar2 = (undefined2 *)fn_001d4e7c(param_2,iVar3);
    *puVar4 = *puVar2;
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar2 + 3);
    cVar1 = (char)iVar3;
    iVar3 = (int)(char)(cVar1 + '\x01');
  } while (iVar3 < 4);
  puVar2 = (undefined2 *)(param_1 + iVar3 * 4);
  *puVar2 = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)(puVar2 + 1) = param_2[0x14];
  *(undefined1 *)((int)puVar2 + 3) = param_2[0x15];
  puVar2 = (undefined2 *)(param_1 + (char)(cVar1 + '\x02') * 4);
  *puVar2 = *(undefined2 *)(param_2 + 0x16);
  *(undefined1 *)(puVar2 + 1) = param_2[0x18];
  *(undefined1 *)((int)puVar2 + 3) = param_2[0x19];
  *(undefined1 *)(param_1 + 0x18) = *param_2;
  *(undefined1 *)(param_1 + 0x19) = param_2[1];
  return;
}


