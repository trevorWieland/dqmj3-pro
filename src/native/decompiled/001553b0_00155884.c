#include "001553b0_00155884.h"



void fn_00155884(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  if ((int)(char)param_2 - 0x10U < 8) {
    local_10 = param_2;
    iVar1 = fn_0017484c(DAT_008977e4);
    if ((iVar1 != 0) && (piVar2 = (int *)fn_00182e2c(iVar1,&local_10), piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x001558e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x24))(piVar2,param_3,param_4);
      return;
    }
  }
  return;
}



void fn_00155808(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = (local_18 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)param_2) & 0xff);
  if ((int)(char)local_18 - 0x10U < 8) {
    local_20 = param_2;
    uStack_1c = param_1;
    local_18 = param_2;
    uStack_14 = param_3;
    iVar1 = fn_0017484c(DAT_008977e4);
    if ((iVar1 != 0) && (piVar2 = (int *)fn_00182e2c(iVar1,&local_20), piVar2 != (int *)0x0)) {
      uVar3 = fn_0017481c(DAT_008977e4);
      uVar3 = fn_0015b140(uVar3,&local_18,param_3);
      (**(code **)(*piVar2 + 0x28))(piVar2,uVar3);
    }
  }
  return;
}



void fn_0015564c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  
  iVar7 = 0x10;
  do {
    local_28 = iVar7;
    iVar1 = fn_00164a34(param_1,iVar7);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (piVar2 = (int *)fn_00165bb4(iVar1,&local_28), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x14))(piVar2,0);
    }
    iVar7 = (int)(char)((char)iVar7 + '\x01');
  } while (iVar7 < 0x18);
  iVar7 = fn_00165250(*(undefined4 *)(param_1 + 0x84));
  iVar1 = 0;
  if (0 < iVar7) {
    do {
      iVar3 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),iVar1);
      if (iVar3 - 0x10U < 8) {
        local_28 = iVar3;
        iVar4 = fn_00164a34(param_1,iVar3);
        if (((iVar4 != 0) && (iVar4 = fn_0017484c(DAT_008977e4), iVar4 != 0)) &&
           (piVar2 = (int *)fn_00165bb4(iVar4,&local_28), piVar2 != (int *)0x0)) {
          (**(code **)(*piVar2 + 0x14))(piVar2,(int)*(char *)(param_1 + iVar3 * 2 + 0xb2));
        }
      }
      iVar3 = fn_00165624(*(undefined4 *)(param_1 + 0x84),iVar1);
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          iVar5 = fn_001659c8(*(undefined4 *)(param_1 + 0x84),iVar1,iVar4);
          if (iVar5 - 0x10U < 8) {
            local_28 = iVar5;
            iVar6 = fn_00164a34(param_1,iVar5);
            if (((iVar6 != 0) && (iVar6 = fn_0017484c(DAT_008977e4), iVar6 != 0)) &&
               (piVar2 = (int *)fn_00165bb4(iVar6,&local_28), piVar2 != (int *)0x0)) {
              (**(code **)(*piVar2 + 0x14))(piVar2,(int)*(char *)(param_1 + iVar5 * 2 + 0xb2));
            }
          }
          iVar4 = (int)(char)((char)iVar4 + '\x01');
        } while (iVar4 < iVar3);
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    } while (iVar1 < iVar7);
  }
  fn_00164b0c(param_1);
  return;
}



void fn_001555f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  if ((int)(char)param_2 - 0x20U < 2) {
    local_10 = param_2;
    iVar1 = fn_0017484c(DAT_008977e4);
    if ((iVar1 != 0) && (iVar1 = fn_00175dcc(iVar1,&local_10), iVar1 != 0)) {
      fn_0015a9f0(iVar1,param_3,param_4,local_10);
      return;
    }
  }
  return;
}



int fn_001555d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001659ac(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(*(int *)(iVar1 + 4) + 4);
  }
  return iVar2;
}



undefined4 fn_001555bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar2;
}



void fn_0015559c(void)

{
  fn_00174858(DAT_008977e4);
  fn_0015c948();
  fn_0017f8e0();
  return;
}



char fn_0015557c(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)fn_001659ac(*(undefined4 *)(param_1 + 0x84));
  cVar1 = '\0';
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
  }
  if (pcVar2 != (char *)0x0 && cVar1 != '\x01') {
    cVar1 = '\0';
  }
  return cVar1;
}



int fn_00155560(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 0xbc);
  }
  return iVar2;
}



undefined4 fn_00155548(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar2;
}



void fn_001554ac(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int aiStack_50 [17];
  
  iVar1 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),aiStack_50,0x10);
  bVar2 = iVar1 == 0;
  if (-1 < iVar1) {
    bVar2 = iVar1 == param_2;
  }
  if (((!bVar2 && (-1 < iVar1 && param_2 <= iVar1)) && (-1 < param_2)) &&
     (iVar1 = aiStack_50[param_2], iVar1 != 0)) {
    fn_00159cbc(*(undefined1 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 0xc),
                 *(undefined2 *)(iVar1 + 0x10));
  }
  iVar1 = fn_00175c14(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 != 0) {
    fn_00159cbc(*(undefined1 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 0xc),
                 *(undefined2 *)(iVar1 + 0x10));
  }
  return;
}



void fn_00155454(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00175be4(*(undefined4 *)(param_1 + 0x84));
  if ((iVar1 != 0) && (iVar2 = 0, '\0' < *(char *)(iVar1 + 0x14))) {
    do {
      local_10 = CONCAT31(((unsigned int)(local_10) >> 8) & 0xffffff,*(undefined1 *)(iVar1 + iVar2 * 0xc4 + 0x1d));
      fn_00159980(&local_10,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(char *)(iVar1 + 0x14));
  }
  return;
}



int fn_0015543c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00175a78(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 2);
  }
  return iVar2;
}



int fn_00155424(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00165604(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 2);
  }
  return iVar2;
}



int fn_001553f4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return (int)*(char *)(iVar1 + param_2 * 0x418 + -0x407e);
}



void fn_001553b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 in_lr;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  undefined8 in_d8;
  
  iVar1 = fn_00174864(DAT_008977e4);
  if (iVar1 == 0) {
    return;
  }
  fVar3 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined1 *)(iVar1 + 0x80) = 0;
  *(undefined1 *)(iVar1 + 0x81) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  if (param_2 == -1) {
    *(undefined4 *)(iVar1 + 0x6c) = param_3;
    *(undefined1 *)(iVar1 + 0x80) = 1;
  }
  else {
    *(int *)(iVar1 + 0x6c) = param_2;
  }
  *(undefined1 *)(iVar1 + 0x81) = 0;
  *(undefined4 *)(iVar1 + 0x70) = param_3;
  *(float *)(iVar1 + 0x74) = fVar3;
  uVar2 = fn_00300f74(*(undefined4 *)(iVar1 + 0x6c),param_3,param_3,0,in_d8,unaff_r4,in_lr);
  fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(iVar1 + 0x84) = fVar3 / fVar4;
  return;
}


