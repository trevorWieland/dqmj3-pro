#include "00679a2c_00679fec.h"



void fn_00679fec(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringUnregister_008c70b7);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a550;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    fn_0067aa74(puVar1);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return;
}



void fn_00679f7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_0066e458(DAT_00898840,2,0);
  local_10 = param_2;
  fn_0067aa80(param_1[0x26],&local_10);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_00679e6c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x70,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandDataStoreDelete_008c6f8d);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a2cc;
    fn_006794e8(puVar1);
  }
  *(undefined4 **)(param_1 + 0xa0) = puVar1;
  return;
}



void fn_00679df4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  fn_0066e458(DAT_00898840,2,0);
  param_1[0x26] = param_3;
  param_1[0x27] = param_4;
  fn_006794fc(param_1[0x28],param_1 + 0x26);
                    /* WARNING: Could not recover jumptable at 0x00679e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_00679dac(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_00679cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if ((*(int *)(DAT_00898840 + 0x34) != 1) && (*(int *)(DAT_00898840 + 0x34) == 2)) {
    piVar1 = (int *)fn_0066eb80(DAT_00898840,2);
    iVar2 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 100) == '\0') {
        fn_0066ef68();
      }
      else {
        fn_0066eca0();
      }
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
    else if (iVar2 == 1) {
      iVar2 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 2;
      }
    }
    else if (iVar2 == 2) {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 100) = 0;
    }
  }
  return uVar3;
}



void fn_00679c3c(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_00679ba4(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  bVar2 = true;
  if (iVar1 == 0) {
    fn_0066eb80(DAT_00898840,6);
    fn_00670548();
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar1 + 0x4c) & 2) == 0) {
      fn_0066e3f4(DAT_00898840,0);
      *(undefined4 *)(param_1 + 0x44) = 2;
    }
  }
  else {
    bVar2 = iVar1 != 2;
  }
  return bVar2;
}



void fn_00679afc(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_00679ad4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  piVar1[299] = *(int *)(param_1 + 100);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x16);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00679a6c(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_00679a44(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x78);
  iVar7 = *(int *)(param_1 + 0x7c);
  iVar8 = *(int *)(param_1 + 0x80);
  iVar9 = *(int *)(param_1 + 0x84);
  piVar1[0x186] = *(int *)(param_1 + 0x68);
  piVar1[0x187] = iVar3;
  piVar1[0x188] = iVar4;
  piVar1[0x189] = iVar5;
  piVar1[0x18a] = iVar6;
  piVar1[0x18b] = iVar7;
  piVar1[0x18c] = iVar8;
  piVar1[0x18d] = iVar9;
  iVar3 = *(int *)(param_1 + 0x8c);
  iVar4 = *(int *)(param_1 + 0x90);
  iVar5 = *(int *)(param_1 + 0x94);
  iVar6 = *(int *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0x9c);
  piVar1[0x18e] = *(int *)(param_1 + 0x88);
  piVar1[399] = iVar3;
  piVar1[400] = iVar4;
  piVar1[0x191] = iVar5;
  piVar1[0x192] = iVar6;
  piVar1[0x193] = iVar7;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x12,iVar3,iVar4,unaff_r4);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00679a2c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  *(undefined4 *)(param_1 + 0x88) = param_2[8];
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  return;
}


