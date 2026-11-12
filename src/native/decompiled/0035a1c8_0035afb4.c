#include "0035a1c8_0035afb4.h"



char * fn_0035afb4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_00897800;
  if (param_1 != 0) {
    fn_0015b0f8(0xf,0x1a4);
    pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b208,0);
    return pcVar2;
  }
  iVar3 = fn_006f6e40(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar3 == 1) {
    iVar3 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
    if (iVar3 == 0) {
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b284,0);
      return pcVar2;
    }
    if (iVar3 == 1) {
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b294,0);
      return pcVar2;
    }
  }
  else if (iVar3 == 3) {
    iVar3 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
    uVar4 = fn_006c89fc();
    switch(uVar4) {
    case 0:
      fn_006ca394(iVar3);
      fn_0015b064();
      fn_0015b0dc();
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b21c,0);
      return pcVar2;
    case 1:
      if (*(int *)(*(int *)(DAT_008977e0 + 0x40) + 0x10) == 0) {
        return "";
      }
      fn_0015b064((int)*(short *)(iVar3 + 0x4c));
      fn_0015b0dc();
      fn_006c8a2c(iVar3);
      fn_0015b0f8();
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b22c,0);
      return pcVar2;
    case 2:
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b238,0);
      return pcVar2;
    case 3:
      fn_006c8a2c(iVar3);
      fn_0015b0f8();
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b244,0)
      ;
      return pcVar2;
    case 4:
      fn_006c8a2c(iVar3);
      fn_0015b0f8();
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b258,0);
      return pcVar2;
    case 5:
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b268,0);
      return pcVar2;
    case 6:
      pcVar2 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_0035b274,0);
      return pcVar2;
    }
  }
  return (char *)0x0;
}



void fn_0035af2c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))
                            (*(int **)(iVar1 + 0x10),(char *)&DAT_0035afa4,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) {
        if (piVar2 == (int *)0x0) {
          return;
        }
        fn_00190d50(piVar2,param_2);
        return;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  return;
}



void fn_0035abdc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(DAT_008977e0 + 0x40);
  puVar3 = *(undefined4 **)(iVar4 + 8);
  local_28 = *puVar3;
  uStack_24 = puVar3[1];
  uVar1 = fn_00129f6c(&local_28,uStack_24,0xed75ed55,0x9c5fff26,0x29);
  fn_0035adb8(param_1,(char *)&DAT_0035ad58,&DAT_0035ad50,uVar1);
  local_20 = *puVar3;
  uStack_1c = puVar3[1];
  uVar5 = fn_00129f6c(&local_20,uStack_1c,0x68fd3d1d,0x12533fe,0x1c);
  uVar1 = 0x3c;
  fn_0011c134((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x3c,0);
  fn_0035adb8(param_1,(char *)&DAT_0035ad78,L"%02d",uVar1);
  local_18 = *puVar3;
  uStack_14 = puVar3[1];
  uVar5 = fn_00129f6c(&local_18,uStack_14,0x26d694b3,0x112e0be8,0x1a);
  uVar1 = 0x3c;
  fn_0011c134((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x3c,0);
  fn_0035adb8(param_1,(char *)&DAT_0035ad8c,L"%02d",uVar1);
  iVar2 = fn_006f6fc4(iVar4);
  if (iVar2 != 0) {
    iVar2 = fn_006c89fc(*(undefined4 *)(iVar4 + 4));
    if (iVar2 == 0) {
      fn_0035adb8(param_1,(char *)&DAT_0035ad98,&DAT_0035adb0,puVar3[2]);
      fn_0035adb8(param_1,(char *)&DAT_0035ada4,&DAT_0035adb0,1);
      return;
    }
    fn_0035adb8(param_1,(char *)&DAT_0035ad98,&DAT_0035ad50,puVar3[2]);
    uVar1 = fn_006c8a2c(*(undefined4 *)(iVar4 + 4));
    fn_0035adb8(param_1,(char *)&DAT_0035ada4,&DAT_0035ad50,uVar1);
  }
  return;
}



void fn_0035adb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_28 [20];
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),param_2,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    while (puVar3 != &DAT_0089a930) {
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
    }
    if (piVar2 != (int *)0x0) {
      fn_00101a50(auStack_28,8,param_3,param_4);
      fn_00190d50(piVar2,auStack_28);
    }
  }
  return;
}



void fn_0035aaac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = fn_006f756c(DAT_008977e0);
  psVar2 = (short *)fn_006bad1c(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x10) = (int)*psVar2;
  uVar1 = fn_006f756c(DAT_008977e0);
  iVar3 = fn_006bad1c(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = (int)*(short *)(iVar3 + 2);
  uVar1 = fn_006f756c(DAT_008977e0);
  iVar3 = fn_006bad1c(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x18) = (uint)*(byte *)(iVar3 + 7);
  return;
}



void fn_0035a584(undefined4 *param_1)

{
  *param_1 = &DAT_00826ab8;
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))();
  }
  fn_002cd3ec(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0035a3fc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  local_38 = *param_2;
  local_34 = param_2[1];
  local_30 = param_2[2];
  local_2c = param_2[3];
  local_28 = param_2[4];
  local_24 = *(undefined2 *)(param_2 + 5);
  puVar1 = (undefined4 *)fn_002fb244(param_1,&local_38);
  *puVar1 = &DAT_00826ab8;
  iVar2 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)fn_005f62c0();
    puVar5[8] = &DAT_00859420;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *puVar5 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar5 + 0x10);
    puVar5 = (undefined4 *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskNexGatheringFindById_008c6f5a);
    piVar6 = (int *)(iVar2 + 0x58);
    *puVar5 = &DAT_0085a240;
    *piVar6 = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    piVar3 = (int *)fn_0015ece0(0xc);
    iVar4 = fn_0015ece0(0x78);
    piVar3[2] = iVar4;
    *piVar3 = *piVar6;
    piVar3[1] = 1;
    *piVar6 = (int)piVar3;
    iVar4 = piVar3[2];
    *(int *)(iVar2 + 0x60) = iVar4;
    *(int *)(iVar2 + 100) = iVar4 + 0x78;
    *(int *)(iVar2 + 0x68) = iVar4;
    *(int *)(iVar2 + 0x60) = iVar4 + 0x78;
    *(int *)iVar4 = iVar4;
    *(int *)(*(int *)(iVar2 + 0x68) + 4) = *(int *)(iVar2 + 0x68);
    *puVar5 = &DAT_0085a26c;
    fn_00679240(puVar5);
  }
  puVar1[0x18] = puVar5;
  puVar1[0x19] = 0;
  puVar1[1] = 0xb;
  puVar1[0x1a] = 0;
  return puVar1;
}



void fn_0035a1c8(int *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = param_1[1];
  if (iVar2 == 8) {
    iVar2 = fn_006c410c(param_1 + 2);
    if ((iVar2 != 1) || (iVar2 = fn_002fb0f0(param_1), iVar2 == 0)) {
LAB_0035a324:
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_1[1]);
      param_1[1] = iVar2;
      return;
    }
    uVar5 = 0;
    pcVar1 = (char *)&DAT_0035a3d8;
    pcVar3 = (char *)((int)param_1 + 0x1e);
    do {
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar3 + 1;
      *pcVar3 = *pcVar1;
      bVar6 = pcVar1[1] == '\0';
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar4;
    } while ((bVar6 || uVar5 < 0x40) && (!bVar6 && uVar5 != 0x3f));
  }
  else if (iVar2 == 10) {
    iVar2 = fn_002fb124();
    if (iVar2 == 0) goto LAB_0035a324;
    uVar5 = 0;
    pcVar1 = (char *)&DAT_0035a3bc;
    pcVar3 = (char *)((int)param_1 + 0x1e);
    do {
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar3 + 1;
      *pcVar3 = *pcVar1;
      bVar6 = pcVar1[1] == '\0';
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar4;
    } while ((bVar6 || uVar5 < 0x40) && (!bVar6 && uVar5 != 0x3f));
  }
  else {
    if (iVar2 != 0xb) {
      return;
    }
    iVar2 = param_1[0x19];
    if (iVar2 == 0) {
      iVar2 = fn_0023c2a8();
      fn_0067901c(param_1[0x18],*(undefined4 *)(iVar2 + 0x38));
      param_1[0x19] = 1;
      return;
    }
    if (iVar2 == 1) {
      fn_005f6270(param_1[0x18]);
      iVar2 = (**(code **)(*(int *)param_1[0x18] + 0x14))();
      if (iVar2 != 0) {
        return;
      }
      if ((*(int *)(param_1[0x18] + 0x44) == 0) && (*(int *)(param_1[0x18] + 0xac) != 0)) {
        param_1[0x1a] = 0;
      }
      else {
        param_1[0x1a] = 1;
      }
      param_1[0x19] = 2;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    if (param_1[0x1a] == 0) {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      param_1[1] = iVar2;
      return;
    }
    uVar5 = 0;
    pcVar1 = (char *)&DAT_0035a398;
    pcVar3 = (char *)((int)param_1 + 0x1e);
    do {
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar3 + 1;
      *pcVar3 = *pcVar1;
      bVar6 = pcVar1[1] == '\0';
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar4;
    } while ((bVar6 || uVar5 < 0x40) && (!bVar6 && uVar5 != 0x3f));
  }
  *pcVar4 = '\0';
  *(undefined1 *)((int)param_1 + 0x5e) = 1;
  *(undefined1 *)((int)param_1 + 0x5f) = 1;
  return;
}


