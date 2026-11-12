#include "003d1f18_003d28a0.h"



undefined4 fn_003d28a0(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || ((short)DAT_008923e8 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_003d2888(int param_1)

{
  return (int)*(short *)(DAT_008923e4 + param_1 * 4 + -2);
}



bool fn_003d2850(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_008923e4 + param_1 * 4 + -4);
  return cVar1 != '\x01' && cVar1 != '\x03';
}



undefined4 fn_003d2780(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar2 = fn_00147e6c(param_1,&DAT_003d2844), iVar2 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar2 = 0;
  if ((param_3 - 4 & 3) == 0) {
    iVar2 = param_1;
  }
  DAT_008923e4 = iVar2;
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008923e8 = 0;
  }
  else {
    DAT_008923e8 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),4,0);
  }
  DAT_008923e0 = (short)DAT_008923e8;
  iVar4 = (int)DAT_008923e0;
  while (((iVar3 = (int)DAT_008923e0, iVar3 < 1 || (iVar4 < iVar3)) ||
         (cVar1 = *(char *)(iVar2 + iVar3 * 4 + -4), cVar1 == '\x01' || cVar1 == '\x03'))) {
    DAT_008923e0 = DAT_008923e0 + -1;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x003d0a58) */

void fn_003d22b4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),1);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x34),1);
  uVar9 = fn_00174828(DAT_008977e4);
  iVar3 = fn_006f4868((int)uVar9 + 0xe8,(int)((ulonglong)uVar9 >> 0x20),1,0);
  iVar4 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar4 + 6);
  iVar4 = fn_00174828(DAT_008977e4);
  fn_002b0d0c(*(undefined4 *)(param_1 + 0x40),
               *(char *)(iVar4 + 7) != '\0' || (cVar1 != '\0' || iVar3 != 0));
  uVar5 = fn_002b0cc0(*(undefined4 *)(param_1 + 0x40),param_1 + 0x44,0x44c);
  fn_003cfaac(param_1,(int)(char)uVar5);
  fn_003d0478(*(undefined4 *)(param_1 + 8),uVar5 & 0xff);
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar7 = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(iVar3 + 8) = uVar7;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  uVar7 = fn_00192cb4(DAT_00897800,0x15,0);
  for (uVar8 = 0; ((int)uVar8 < (int)uVar5 && (uVar8 < 10)); uVar8 = (uint)(short)((short)uVar8 + 1)
      ) {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    iVar3 = param_1 + uVar8 * 2;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (0 < *(short *)(iVar3 + 0x44)) {
      uVar6 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14));
      fn_00101a50(&local_68,0x20,&DAT_003d2288,uVar6);
    }
    sVar2 = *(short *)(iVar3 + 0x44);
    iVar4 = fn_00163940((int)sVar2);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar9 = fn_00174828(DAT_008977e4);
      fn_006f4868((int)uVar9 + 0xe8,(int)((ulonglong)uVar9 >> 0x20),1,0);
      fn_00174828(DAT_008977e4);
      fn_00174828(DAT_008977e4);
      uVar6 = fn_002fa6f4(*(undefined4 *)(param_1 + 0x40),(int)sVar2);
    }
    fn_0038dad0(*(undefined4 *)(param_1 + 4),uVar8,2,(int)*(short *)(iVar3 + 0x44),uVar6,uVar7,
                 &local_68);
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2 == 0) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,0,0);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),*(int *)**(undefined4 **)(iVar3 + 0x18) + 0x1c);
  *(undefined1 *)(param_1 + 0x22) = 1;
  fn_003d0ab4(*(undefined4 *)(param_1 + 8));
  iVar3 = *(int *)(param_1 + 8);
  uVar7 = fn_0022f584("MenuMessageBattleItemNumber",0);
  fn_00190d50(*(undefined4 *)(iVar3 + 8),uVar7);
  return;
}



bool fn_003d2290(int param_1)

{
  return 0 < (short)(*(int *)(*(int *)(param_1 + 0x40) + 8) - *(int *)(*(int *)(param_1 + 0x40) + 4)
                    >> 1);
}



void fn_003d2094(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined1 *)(param_1 + 0x21) = 0;
  iVar6 = (int)(char)((*(char *)(param_1 + 0x22) + -1) * '\n');
  iVar5 = iVar6;
  do {
    uVar2 = fn_00192cb4(DAT_00897800,0x15,0);
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    iVar7 = param_1 + iVar5 * 2;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (0 < *(short *)(iVar7 + 0x44)) {
      uVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14));
      fn_00101a50(&local_68,0x20,&DAT_003d2288,uVar3);
    }
    sVar1 = *(short *)(iVar7 + 0x44);
    iVar4 = fn_00163940((int)sVar1);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar8 = fn_00174828(DAT_008977e4);
      fn_006f4868((int)uVar8 + 0xe8,(int)((ulonglong)uVar8 >> 0x20),1,0);
      fn_00174828(DAT_008977e4);
      fn_00174828(DAT_008977e4);
      uVar3 = fn_002fa6f4(*(undefined4 *)(param_1 + 0x40),(int)sVar1);
    }
    fn_0038cc24(*(undefined4 *)(param_1 + 4),iVar5,(int)*(short *)(iVar7 + 0x44),2,uVar3,uVar2,
                 &local_68);
    iVar7 = fn_0038d80c(*(undefined4 *)(param_1 + 4),iVar5 - iVar6);
    if (iVar7 != 0) {
      *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + '\x01';
    }
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  } while (iVar5 < iVar6 + 10);
  fn_003d0ab4(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x22));
  return;
}



undefined4 * fn_003d2038(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008311e4;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x2b) = 0;
  *(undefined1 *)((int)puVar1 + 0xad) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x2c] = uVar2;
  uVar2 = fn_001924e0(uVar2,1);
  puVar1[0x2d] = uVar2;
  return puVar1;
}



void fn_003d1f18(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(int *)(param_1 + 100) = param_2;
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = 0;
  do {
    uVar2 = fn_00689210(uVar5,(&DAT_008908b0)[iVar3]);
    iVar4 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar4 + 0x80) = uVar2;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      fn_00102908(&local_48,0x20,(&DAT_00890880)[iVar4],iVar3);
      uVar2 = fn_00688920(*(undefined4 *)(param_1 + iVar3 * 4 + 0x80),&local_48);
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(param_1 + iVar3 * 8 + iVar1 + 0x94) = uVar2;
    } while (iVar4 < 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    uVar2 = fn_0068897c(uVar5,(&DAT_00890888)[iVar3]);
    iVar4 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar4 + 0x8c) = uVar2;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    uVar5 = fn_0017dd54(*(undefined4 *)(param_1 + 100),(&DAT_00890898)[iVar3],0);
    iVar4 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar4 + 0x68) = uVar5;
  } while (iVar3 < 6);
  return;
}


