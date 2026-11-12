#include "0032d328_0032f894.h"



undefined4 * fn_0032f894(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008244f8;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_0032f180(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008244e4;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



undefined4 * fn_0032edf0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008244d0;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_0032eaac(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008244bc;
  if (param_1[1] != 0) {
    iVar1 = fn_0068f36c(param_1[1] + 0x14);
    fn_002feef8(iVar1 + -0x14);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0032ea2c(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = &DAT_008244bc;
  puVar1 = (undefined1 *)fn_00145b00(0x4c,&DAT_00812c8c);
  iVar3 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    uVar2 = fn_0068eb0c(DAT_008977e8);
    iVar3 = fn_0068f328(puVar1 + 0x14,uVar2);
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    iVar3 = iVar3 + -0x14;
  }
  param_1[1] = iVar3;
  return param_1;
}



undefined4 * fn_0032e0b4(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &DAT_008244a8;
  puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_0032e0a4(int param_1)

{
  fn_0032d79c(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4 fn_0032d718(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = fn_00118290();
  DAT_00896cd4 = fn_0011c184(L"patch:/data/Parameter/RaceKindConfigParam.tp",uVar1,4,5);
  uVar3 = fn_0012a26c();
  DAT_00896cd8 = fn_0011c134((uint)uVar3 - 4,
                              (int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < 4),0x20,0);
  uVar1 = fn_00145ac0(DAT_00896cd4);
  iVar2 = fn_00147e6c(uVar1,&DAT_0032d794,4);
  if ((iVar2 == 0) && (0 < DAT_00896cd8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_0032d6f4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(DAT_00896cd4);
  return iVar1 + 4 + param_1 * 0x20;
}



undefined4 fn_0032d488(int *param_1,int param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  param_1[0x16] = param_2;
  fn_0026009c(param_1,param_2,1);
  iVar1 = fn_0068cafc(DAT_008977e8);
  param_1[0x12] = *(int *)(iVar1 + 0x2c8);
  local_28 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_24 = *(undefined4 *)(param_2 + 0x24);
  local_20 = 0;
  (**(code **)(*param_1 + 0x24))(param_1,&local_28);
  fn_00260538(param_1,param_2);
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
  if (iVar1 == 0) {
    fn_00260664(param_1,0xa048,param_1 + 8);
  }
  else {
    fn_00260664(param_1,0xa03d,param_1 + 8);
  }
  return 1;
}



void fn_0032d458(undefined4 *param_1)

{
  *param_1 = &DAT_008243d0;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_0032d434(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_008243d0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_0032d354(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  
  uVar2 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = *(float *)(param_1 + 0x48) + DAT_00896cb8;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = uVar2;
    DAT_008f9e30 = uVar2;
    DAT_008f9e34 = uVar2;
  }
  local_38 = DAT_008f9e2c;
  local_34 = DAT_008f9e30;
  local_30 = DAT_008f9e34;
  fStack_20 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x44);
  local_28 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x3c);
  fStack_24 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x40);
  fn_00610fb4(&local_38,param_2,&local_28,param_1 + 0x20);
  return;
}



void fn_0032d328(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_lr;
  bool bVar7;
  int iVar8;
  undefined8 in_d8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  if ((char)param_1[0x1f] == '\0') {
    return;
  }
  fn_001cc890(param_1);
  uVar9 = CONCAT44(unaff_r5,unaff_r4);
  iVar1 = fn_0068cafc(DAT_008977e8);
  (**(code **)(*param_1 + 0x1c))(param_1,param_1[0x16] + 8);
  iVar2 = param_1[0x15];
  uVar3 = fn_0068c7e8(DAT_008977e8);
  fn_0023e574(uVar3,iVar2);
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b6bc4();
  uVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_0014481c(DAT_008977e8);
      piVar4 = (int *)fn_006b71a8(uVar3,uVar6 & 0xff);
      iVar5 = fn_0026005c(param_1,piVar4);
      if ((iVar5 == 0) &&
         (iVar5 = fn_00610fb4(param_1 + 0xf,piVar4,param_1 + 2,param_1 + 8), iVar5 != 0)) {
        fn_0026009c(param_1,piVar4,1);
        uVar3 = (undefined4)uVar9;
        uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
        iVar1 = piVar4[0x68];
        bVar7 = iVar1 == 0;
        if (bVar7) {
          iVar1 = piVar4[0x69];
        }
        if ((bVar7 && iVar1 == 0) && ((char)piVar4[0x79] == '\0')) {
          if ((char)piVar4[0x67] != '\0') {
            fn_006a69c8(piVar4);
            return;
          }
          if ((char)piVar4[0x61] == '\0') {
            iVar1 = fn_0068cafc(DAT_008977e8);
            (**(code **)(*piVar4 + 0x40))
                      (piVar4,0x9c42,1,*(code **)(*piVar4 + 0x40),in_d8,uVar3,uVar10,unaff_r6,
                       unaff_r7,unaff_r8,unaff_r9,unaff_r10,in_lr);
            fn_0014481c(DAT_008977e8);
            iVar2 = fn_00263814();
            fn_00660790(0x15,iVar2 + 8,piVar4 + 2);
            fn_0018d060(piVar4[0x17],7,4);
            while (piVar4[0x3b] - piVar4[0x3a] >> 2 != 0) {
              fn_006a2620(piVar4,param_1 + 2);
            }
            iVar2 = 0x41f00000;
            *(undefined1 *)((int)piVar4 + 0x185) = 0;
            fn_0017fe34();
            piVar4[0x62] = iVar2;
            iVar2 = *(int *)(iVar1 + 0x1bc);
            iVar5 = param_1[2];
            iVar8 = param_1[3];
            fn_006a3744(piVar4);
            piVar4[0x23] = iVar2;
            piVar4[0x24] = iVar5;
            piVar4[0x25] = iVar8;
            fn_006a2584(piVar4,*(undefined4 *)(iVar1 + 0x1c0));
            fn_006a2388(piVar4);
            return;
          }
          *(undefined1 *)(piVar4 + 0x61) = 0;
        }
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
  iVar2 = param_1[0x1e];
  param_1[0x1e] = iVar2 + 1;
  if (*(int *)(iVar1 + 0x1a8) <= iVar2 + 1) {
    uVar3 = fn_0014481c(DAT_008977e8);
    fn_002625d0(uVar3,param_1);
    *(undefined1 *)(param_1 + 0x1f) = 0;
    param_1[0x1e] = 0;
  }
  return;
}


