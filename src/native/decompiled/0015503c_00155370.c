#include "0015503c_00155370.h"



bool fn_00155370(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001642a8();
  if ((iVar1 < 1) || (699 < iVar1)) {
    return false;
  }
  iVar1 = fn_00165d18(*(undefined4 *)(param_1 + 0xec),iVar1);
  return iVar1 != 0;
}



void fn_00155348(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x1000);
  return;
}



int fn_0015532c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 0x10);
  }
  return iVar2;
}



undefined1 fn_001552f4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = fn_00165b84(*(undefined4 *)(param_1 + 0x84));
  if (iVar2 == 0) {
    iVar2 = fn_00175a48(*(undefined4 *)(param_1 + 0x84));
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = *(undefined1 *)(iVar2 + 0x2660);
    }
  }
  else {
    uVar1 = *(undefined1 *)(iVar2 + 0x2664);
  }
  return uVar1;
}



void fn_001552cc(void)

{
  int iVar1;
  
  iVar1 = fn_00174864(DAT_008977e4);
  if (iVar1 == 0) {
    return;
  }
  fn_0015a9bc();
  return;
}



void fn_00155268(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  
  uVar1 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2);
  uVar2 = fn_001643e0(param_1,param_2,local_14);
  uVar3 = fn_001754ac(param_1,uVar1);
  fn_00164f84(param_1,uVar3,uVar2,local_14[0],0x3c);
  return;
}



void fn_00155240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_00159a68(&local_c,param_3);
  }
  return;
}



void fn_001551bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_10[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_10), iVar1 != 0)) {
      fn_0015aa9c();
      return;
    }
  }
  return;
}



void fn_00155194(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_00159920(&local_c,param_3);
  }
  return;
}



int fn_0015516c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x84) + 4) == '\x10') {
    iVar2 = fn_00165970(*(int *)(param_1 + 0x84));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = (int)*(char *)(iVar2 + 1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



char * fn_00155140(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == '\x04') {
      pcVar2 = (char *)(uint)*(ushort *)(pcVar2 + 2);
    }
    if (cVar1 != '\x04' || pcVar2 != &DAT_00000001) {
      pcVar2 = (char *)0x0;
    }
  }
  return pcVar2;
}



undefined1 fn_00155124(void)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return *(undefined1 *)(iVar1 + 0xc);
}



int fn_001550fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + param_4 * 4 + 0x1c);
  }
  return iVar2;
}



int fn_001550bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00174834(DAT_008977e4);
  if (param_2 == 0) {
    iVar2 = 0x23;
  }
  else {
    iVar2 = 0x22;
  }
  return (int)*(char *)(iVar1 + iVar2 * 8 + 0x18450b);
}



int fn_00155084(undefined4 param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = (int)(char)(param_2 + '\x14');
  uVar2 = iVar1 - 0x10;
  if (uVar2 < 8) {
    bVar3 = 3 < uVar2;
    if (bVar3) {
      uVar2 = iVar1 - 0x18;
    }
    if ((!bVar3 || uVar2 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



void fn_0015503c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *apiStack_20 [4];
  
  iVar1 = fn_001642a8();
  if (((iVar1 < 1) || (699 < iVar1)) || (iVar1 = fn_0016a888(), iVar1 == 0)) {
    return;
  }
  fn_00174858(DAT_008977e4);
  iVar2 = fn_0015c948();
  if (*(char *)(iVar2 + 0xa3) == '\0') {
    uVar4 = *(undefined4 *)(iVar2 + 0x70);
  }
  else {
    uVar4 = *(undefined4 *)(iVar2 + 0x74);
  }
  piVar3 = (int *)fn_00145b00(0x60,&DAT_00812c8c);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0x15] = 1;
    *(undefined1 *)(piVar3 + 0x14) = 1;
    *(undefined1 *)((int)piVar3 + 0x51) = 0;
    piVar3[0x13] = 0;
    piVar3[0x16] = 0;
    piVar3[0x17] = 0;
    *piVar3 = (int)&DAT_00858818;
  }
  fn_0017f494(piVar3,*(undefined4 *)(iVar2 + 0x6c),uVar4,*(undefined4 *)(iVar2 + 0x68),iVar1,0);
  piVar5 = *(int **)(iVar2 + 0x90);
  if (*(int *)(iVar2 + 0x94) - (int)piVar5 >> 2 != 0) {
    for (; *(int **)(iVar2 + 0x94) != piVar5; piVar5 = piVar5 + 1) {
      if (*(int *)(*piVar5 + 0x24) - *(int *)(*piVar5 + 0x20) >> 2 == 0) {
        fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
      }
    }
  }
  piVar5 = *(int **)(iVar2 + 0x84);
  if (*(int *)(iVar2 + 0x88) - (int)piVar5 >> 2 != 0) {
    for (; *(int **)(iVar2 + 0x88) != piVar5; piVar5 = piVar5 + 1) {
      if (*(int *)(*piVar5 + 0x24) - *(int *)(*piVar5 + 0x20) >> 2 == 0) {
        fn_002ff628(9,&DAT_008c766e,&DAT_008c766e,0,0);
      }
    }
  }
  (**(code **)(*piVar3 + 0x14))(piVar3,iVar2 + 0xa4);
  *(undefined1 *)(piVar3 + 0x14) = *(undefined1 *)(iVar2 + 0xa2);
  apiStack_20[0] = piVar3;
  fn_00184068(iVar2 + 0x84,apiStack_20);
  return;
}


