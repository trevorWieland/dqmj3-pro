#include "004212d8_004220f4.h"



void fn_004220ec(int param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  short *psVar4;
  uint in_r12;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  *(undefined1 *)(param_1 + 0x7b) = param_2;
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 0x20;
    if ((*(char *)(iVar2 + 0x1c) == '\0') || (*(byte *)(param_1 + 0x7b) != uVar1)) {
LAB_00422144:
      iVar2 = *(int *)(iVar2 + 0x18);
      bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    else {
      psVar4 = *(short **)(param_1 + 0x7c);
      uVar5 = 0;
      if (psVar4 != (short *)0x0) {
        uVar5 = (uint)*psVar4;
        in_r12 = uVar5;
      }
      if ((psVar4 == (short *)0x0 || in_r12 == 0) || (int)uVar5 < 0) goto LAB_00422144;
      in_r12 = (uint)*(byte *)((int)psVar4 + 0x67);
      bVar6 = in_r12 == 0;
      if (bVar6) {
        in_r12 = (uint)*(byte *)(psVar4 + 0x3b);
      }
      bVar7 = bVar6 && in_r12 == 0;
      if (bVar6 && in_r12 == 0) {
        bVar7 = (char)psVar4[0x34] == '\0';
      }
      if (!bVar7) goto LAB_00422144;
      iVar2 = *(int *)(iVar2 + 0x18);
      bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    }
    uVar1 = uVar1 + 1;
    *(byte *)(iVar2 + 0x44) = bVar3;
    if (2 < (int)uVar1) {
      return;
    }
  } while( true );
}



void fn_00421c7c(int param_1)

{
  if (*(char *)(param_1 + 0x7a) == '\x01' || *(char *)(param_1 + 0x7a) == '\x02') {
    if ((uint)(int)*(char *)(param_1 + 0x78) < 4) {
      fn_00190cdc(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x78) * 4 + 0x68),0);
    }
    *(undefined1 *)(param_1 + 0x78) = 0xff;
    fn_00190e00(*(undefined4 *)(param_1 + 0x70));
    *(undefined1 *)(param_1 + 0x78) = 2;
    *(undefined1 *)(param_1 + 0x7a) = 3;
  }
  return;
}



undefined4 fn_00421b3c(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  default:
    return 0xffffffff;
  case 1:
    return 0x5f;
  case 2:
    return 0x60;
  case 3:
    return 0x61;
  case 4:
    return 0x62;
  case 5:
    return 99;
  case 6:
    return 100;
  case 7:
    return 0x65;
  case 8:
    return 0x66;
  case 9:
    return 0x67;
  case 10:
    return 0x68;
  case 0xb:
    return 0x69;
  case 0xc:
    return 0x6a;
  case 0xd:
    return 0x6b;
  case 0xe:
    return 0x6c;
  case 0xf:
    return 0x6d;
  case 0x10:
    return 0x6e;
  case 0x11:
    return 0x6f;
  case 0x12:
    return 0x70;
  case 0x13:
    return 0x71;
  case 0x14:
    return 0x72;
  case 0x15:
    return 0x73;
  case 0x16:
    return 0x74;
  case 0x17:
    return 0x75;
  case 0x18:
    return 0x76;
  case 0x19:
    return 0x77;
  }
}



void fn_00421b00(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x10);
  bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
  if (param_2 == 0) {
    *(byte *)(iVar1 + 0x44) = bVar2;
  }
  else {
    *(byte *)(iVar1 + 0x44) = bVar2 | *(byte *)(param_1 + 0x79);
    if (*(char *)(param_1 + 0x79) != '\0') {
      fn_004220f4();
      return;
    }
  }
  return;
}



void fn_004220f4(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  short *psVar4;
  uint in_r12;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = 0;
  do {
    iVar2 = param_1 + uVar1 * 0x20;
    if ((*(char *)(iVar2 + 0x1c) == '\0') || (*(byte *)(param_1 + 0x7b) != uVar1)) {
LAB_00422144:
      iVar2 = *(int *)(iVar2 + 0x18);
      bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    else {
      psVar4 = *(short **)(param_1 + 0x7c);
      uVar5 = 0;
      if (psVar4 != (short *)0x0) {
        uVar5 = (uint)*psVar4;
        in_r12 = uVar5;
      }
      if ((psVar4 == (short *)0x0 || in_r12 == 0) || (int)uVar5 < 0) goto LAB_00422144;
      in_r12 = (uint)*(byte *)((int)psVar4 + 0x67);
      bVar6 = in_r12 == 0;
      if (bVar6) {
        in_r12 = (uint)*(byte *)(psVar4 + 0x3b);
      }
      bVar7 = bVar6 && in_r12 == 0;
      if (bVar6 && in_r12 == 0) {
        bVar7 = (char)psVar4[0x34] == '\0';
      }
      if (!bVar7) goto LAB_00422144;
      iVar2 = *(int *)(iVar2 + 0x18);
      bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    }
    uVar1 = uVar1 + 1;
    *(byte *)(iVar2 + 0x44) = bVar3;
    if (2 < (int)uVar1) {
      return;
    }
  } while( true );
}



undefined4 fn_004218b4(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + 0x44) & 1) == 0) ||
     ((*(byte *)(*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x7b) * 0x20 + 0x18) + 0x44) & 1) == 0
     )) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00421854(undefined4 *param_1)

{
  *param_1 = &DAT_0083aaf4;
  if ((int *)param_1[0x38] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x38] + 4))();
    param_1[0x38] = 0;
  }
  if ((int *)param_1[0x35] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x35] + 4))();
  }
  fn_007486b8(param_1);
  fn_002feef8();
  return;
}



void fn_00421498(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x37) = 1;
    fn_00689824(param_1,0);
  }
  else if (param_2 == 1) {
    if ((uint)(param_1[0x30] - param_1[0x2f] >> 4) < 2) {
      fn_002ff628(9,&DAT_008c7624);
    }
    uVar1 = *(undefined4 *)(param_1[0x2f] + 0x18);
    fn_006899f4(param_1,uVar1,1);
    (**(code **)(*param_1 + 0x13c))(param_1,uVar1);
  }
  *(int *)(param_1[0x36] + 8) = param_2;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 * fn_00421468(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)fn_0043ccf8(iVar1,param_1,(char *)&DAT_00421840,0,0,unaff_r4);
  *puVar2 = &DAT_0083aaf4;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  *(undefined1 *)(puVar2 + 0x37) = 0;
  puVar2[0x38] = 0;
  puVar3 = (undefined4 *)fn_001f74ec(puVar2,0xf9);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892d64) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[0x36] = puVar5;
  return puVar2;
}



undefined4 fn_004212d8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined2 local_1c;
  
  uVar1 = fn_0043c608();
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_00421334;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00421334:
  param_1[0x34] = (int)puVar2;
  piVar7 = *(int **)(puVar2[0xf] + 8);
  *(undefined1 *)piVar7 = 5;
  iVar4 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    local_30 = *piVar7;
    local_2c = piVar7[1];
    local_28 = piVar7[2];
    local_24 = piVar7[3];
    local_20 = piVar7[4];
    local_1c = (undefined2)piVar7[5];
    piVar5 = (int *)fn_002cd364(iVar4,&local_30);
  }
  piVar6 = (int *)param_1[0x35];
  piVar7 = piVar5;
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      piVar7 = (int *)(**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x35] = (int)piVar5;
  }
  if (iVar4 != 0) {
    piVar7 = &local_30;
  }
  fn_00252638(piVar7);
  fn_00689efc(param_1,0x39,0);
  iVar4 = fn_00145b00(0x66a0,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_0038cad8(iVar4,param_1[0x34]);
  }
  piVar7 = (int *)param_1[0x38];
  if (piVar7 != piVar5) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x38] = (int)piVar5;
  }
  return uVar1;
}


