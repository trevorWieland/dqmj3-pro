#include "002edaf4_002ee674.h"



undefined4 * fn_002ee674(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_0023e8ec(param_1,3);
  *puVar1 = &DAT_0082122c;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x100,0);
  iVar3 = 0x40;
  puVar1[0x10] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x10];
  puVar1[0x11] = iVar3 + 0x100;
  puVar1[0x12] = iVar3 + 0x100;
  puVar1[0x13] = 1;
  return puVar1;
}



undefined4 fn_002ee5dc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = fn_006b4e48();
  if (iVar1 < 10) {
    uVar4 = 0xffffffff;
    iVar1 = -1;
    iVar3 = 0;
    do {
      uVar5 = *(uint *)(param_1[0x10] + iVar3 * 4);
      if (uVar5 != 0 && uVar5 < uVar4) {
        uVar4 = uVar5;
        iVar1 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  uVar2 = fn_0023e730(param_1,param_2);
  return uVar2;
}



void fn_002ee5ac(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0xc) + param_2 * 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 4) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  return;
}



undefined4 fn_002ee2c8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0x16] = param_2;
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar1 = *(int *)(iVar1 + 0x220);
  param_1[0x12] = iVar1;
  local_20 = 0;
  param_1[0x10] = iVar1;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_1c = *(undefined4 *)(param_2 + 0x24);
  local_18 = 0;
  (**(code **)(*param_1 + 0x24))(param_1,&local_20);
  fn_00260538(param_1,param_2);
  fn_0026009c(param_1,param_2,1);
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
  if (iVar1 == 0) {
    fn_00260664(param_1,0xa049,param_1 + 8);
  }
  else {
    fn_00260664(param_1,0xa03e,param_1 + 8);
  }
  return 1;
}



undefined4 fn_002ee080(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x16] = param_2;
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar1 = *(int *)(iVar1 + 0x254);
  param_1[0x12] = iVar1;
  param_1[0xf] = 0;
  param_1[0x10] = iVar1;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1e] = 0;
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  fn_00260538(param_1,param_2);
  fn_0026009c(param_1,param_2,1);
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
  if (iVar1 == 0) {
    fn_00260664(param_1,0xa046,param_1 + 8);
  }
  else {
    fn_00260664(param_1,0xa03b,param_1 + 8);
  }
  return 1;
}



void fn_002ee050(undefined4 *param_1)

{
  *param_1 = &DAT_008210e8;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_002edf1c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x88) == -1) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    fn_001cc890(param_1);
    cVar1 = *(char *)(param_1 + 0x88);
    if (cVar1 != -1) {
      if (cVar1 == '\0') {
        fn_002edaf4(param_1);
        return;
      }
      if (cVar1 == '\x01') {
        *(undefined4 *)(param_1 + 0x48) = 0x42200000;
        iVar2 = fn_0025ff70(param_1);
        if (iVar2 != 0) {
          fn_0026009c(param_1,iVar2,1);
          return;
        }
        iVar2 = *(int *)(param_1 + 0x84) + 1;
        *(int *)(param_1 + 0x84) = iVar2;
        if (0x13 < iVar2) {
          *(undefined1 *)(param_1 + 0x88) = 2;
          *(undefined4 *)(param_1 + 0x74) = 0x2b;
          return;
        }
      }
      else if ((cVar1 == '\x02') &&
              (iVar2 = *(int *)(param_1 + 0x74) + -1, *(int *)(param_1 + 0x74) = iVar2, iVar2 < 0))
      {
        uVar3 = *(undefined4 *)(param_1 + 0x54);
        uVar4 = fn_0068c7e8(DAT_008977e8);
        iVar2 = fn_006b4cd0(uVar4,uVar3);
        if (iVar2 != 0) {
          *(undefined1 *)(param_1 + 0x8a) = 1;
        }
      }
    }
  }
  return;
}



undefined4 fn_002ede44(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0x16] = param_2;
  param_1[0x17] = param_3;
  param_1[0x12] = 0x41200000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x41200000;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  iVar3 = param_1[4];
  fn_00260640(param_1,0xa02f);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x21] = 0;
  fn_0026009c(param_1,param_2,1);
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar2 = *(int *)(iVar1 + 0x9c);
  iVar1 = *(int *)(iVar1 + 0xa0);
  fn_006b658c(param_1);
  param_1[0x1e] = iVar2;
  param_1[0x1f] = iVar1;
  param_1[0x20] = iVar3;
  return 1;
}



void fn_002ede18(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x89) = 0;
  uVar1 = fn_0014481c(DAT_008977e8);
  fn_002625d0(uVar1,param_1);
  return;
}



void fn_002edaf4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float in_s2;
  float fVar10;
  float local_88;
  float local_84;
  float local_80;
  int local_78;
  float local_74;
  int local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  fVar9 = *(float *)(iVar1 + 0xa0);
  fVar8 = *(float *)(iVar1 + 0xa4);
  fn_00260288(param_1);
  fVar10 = (float)param_1[0x1f];
  param_1[0x1f] = (int)(fVar10 - 0.4);
  local_88 = (float)param_1[2] + fVar8;
  local_80 = (float)param_1[4] + in_s2;
  local_84 = (float)param_1[3] + fVar9 + (fVar10 - 0.4);
  uVar2 = (**(code **)(*param_1 + 0x3c))(param_1);
  fn_0068e960(DAT_008977e8);
  uVar3 = fn_00664c4c();
  iVar4 = fn_001cc480(param_1,&local_88,uVar3,uVar2);
  iVar5 = param_1[0x15];
  uVar2 = fn_0068c7e8(DAT_008977e8);
  fn_0023e574(uVar2,iVar5);
  fVar9 = (float)param_1[9];
  uVar2 = fn_0068c7e8(DAT_008977e8);
  fVar8 = fVar9;
  fn_0023e6a8(uVar2,iVar5);
  if (iVar4 == 0) {
    fn_0014481c(DAT_008977e8);
    iVar4 = fn_006b6bc4();
    if (0 < iVar4) {
      fVar8 = 0.0;
    }
    uVar7 = 0;
    if (0 < iVar4) {
      do {
        uVar2 = fn_0014481c(DAT_008977e8);
        iVar5 = fn_006b71a8(uVar2,uVar7 & 0xff);
        iVar6 = fn_0026005c(param_1,iVar5);
        if (iVar6 == 0) {
          local_58 = *(undefined4 *)(iVar5 + 0x3c);
          uStack_54 = *(undefined4 *)(iVar5 + 0x40);
          uStack_50 = *(undefined4 *)(iVar5 + 0x44);
          fVar10 = *(float *)(iVar5 + 0x48);
          local_78 = param_1[2];
          local_70 = param_1[4];
          local_6c = *(undefined4 *)(iVar5 + 8);
          local_64 = *(undefined4 *)(iVar5 + 0x10);
          local_74 = fVar8;
          local_68 = fVar8;
          fStack_4c = fVar10;
          fn_005f1940(&local_78,&local_6c);
          if (fVar9 <= (float)param_1[0x12] + fVar10) {
LAB_002edd18:
            *(undefined1 *)((int)param_1 + 0x89) = 1;
            fn_00260014(param_1,1);
            fn_00260640(param_1,0xa031);
            *(undefined1 *)(param_1 + 0x22) = 2;
            param_1[0x1d] = 0x23;
            fn_0014481c(DAT_008977e8);
            iVar1 = fn_00263814();
            fn_00660790(0x1d,iVar1 + 8,param_1 + 2);
            return;
          }
          local_48 = *(undefined4 *)(iVar5 + 8);
          uStack_44 = *(undefined4 *)(iVar5 + 0xc);
          uStack_40 = *(undefined4 *)(iVar5 + 0x10);
          iVar5 = fn_006a8a84(param_1,&local_58,&local_48,1);
          if (iVar5 != 0) goto LAB_002edd18;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar4);
    }
    iVar4 = param_1[0x21];
    param_1[0x21] = iVar4 + 1;
    if (*(int *)(iVar1 + 0xa8) <= iVar4 + 1) {
      *(undefined1 *)((int)param_1 + 0x89) = 1;
      fn_00260014(param_1,1);
      fn_00260640(param_1,0xa031);
      *(undefined1 *)(param_1 + 0x22) = 2;
      param_1[0x1d] = 0x23;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_00263814();
      fn_00660790(0x1d,iVar1 + 8,param_1 + 2);
      return;
    }
  }
  else {
    fn_00260014(param_1,1);
    fn_00260640(param_1,0xa032);
    *(undefined1 *)(param_1 + 0x22) = 1;
    param_1[0x21] = 0;
  }
  return;
}


