#include "00215b58_0021629c.h"



void fn_0021629c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar2 = param_1 + uVar4 * 0x10;
    if (*(int *)(iVar2 + 0x1e8) != -1) {
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
      uVar1 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(iVar2 + 0x1e8),uVar1,
                           *(undefined4 *)(iVar2 + 500));
      *(undefined4 *)(iVar2 + 0x1ec) = uVar1;
      fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 0x10);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8) >> 4 != 0) {
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x2e8) + uVar4 * 0x10);
      if (*piVar3 != -1) {
        uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
        iVar2 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),*piVar3,uVar1,piVar3[3]);
        piVar3[1] = iVar2;
        fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),iVar2);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8) >> 4));
  }
  return;
}



void fn_00216234(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)fn_006f7770(DAT_008977e0);
  fVar2 = *pfVar1 - *(float *)(param_1 + 0x20);
  fVar4 = pfVar1[1] - *(float *)(param_1 + 0x24);
  fVar3 = pfVar1[2] - *(float *)(param_1 + 0x28);
  fVar2 = fVar2 * fVar2;
  *(float *)(param_1 + 0x188) = fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  *(float *)(param_1 + 0x18c) = fVar2 + 0.0 + fVar3 * fVar3;
  return;
}



undefined4 fn_002161d4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2e8) >> 4;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x2e8) + uVar3 * 0x10 + 4) == -1) {
        if (uVar3 == 0xffffffff) {
          return 0xffffffff;
        }
        uVar2 = fn_00214c94();
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}



void fn_00216168(int *param_1,float *param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = (float)param_1[8] + *param_2;
  local_1c = (float)param_1[9] + param_2[1];
  local_18 = (float)param_1[10] + param_2[2];
  fn_001c7764(param_1,&local_20);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,0);
  return;
}



void fn_00216128(int param_1,int param_2,int param_3)

{
  undefined1 auStack_30 [7];
  char acStack_29 [25];
  
  fn_00369274(*(undefined4 *)(param_1 + 0x170),auStack_30);
  *(int *)(param_1 + 0x1c4) = (int)acStack_29[param_3 * 4 + param_2 * 0xe];
  return;
}



void fn_00215f9c(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  (**(code **)(*param_1 + 0x1dc))(param_1,2,param_2[1],param_2[2]);
  if ((char)param_1[1] == '\0') {
    param_1[3] = 2;
  }
  param_1[100] = 0x78;
  cVar1 = (char)*param_2;
  if ((param_1[0xe7] & 0x200U) == 0 || cVar1 == '\0') goto LAB_002160a0;
  if (cVar1 == '\x03') {
    iVar5 = 1;
  }
  else if ((char)param_2[3] == '\x04' || (char)param_2[3] == '\x02') {
    if (cVar1 == '\x02') {
      iVar5 = 7;
    }
    else {
      if ((char)param_2[1] == '\x06') goto LAB_0021603c;
      iVar5 = 6;
    }
  }
  else {
LAB_0021603c:
    iVar5 = 0;
    (**(code **)(*param_1 + 0xe4))(param_1,0x1000981,0);
  }
  iVar2 = param_1[iVar5 * 4 + 0x7b];
  if (iVar2 == -1) {
    uVar3 = fn_00215b58(param_1);
    iVar2 = fn_00214c94(param_1,uVar3,1,1,param_1 + iVar5 * 4 + 0x7a);
  }
  param_1[0xbd] = iVar2;
LAB_002160a0:
  if ((param_2[3] != 1) && (*param_2 == 2)) {
    piVar4 = (int *)fn_006f7508(DAT_008977e0);
    uVar3 = (**(code **)(*piVar4 + 0x90))();
    iVar5 = fn_003b19d0(uVar3,param_2[2]);
    if (iVar5 != 0) {
      fn_002181ec(param_1,param_1 + 8,(int)*(short *)(iVar5 + 8),(int)*(short *)(iVar5 + 0xc),
                   (int)*(short *)(iVar5 + 10),1,1,10);
    }
  }
  return;
}



void fn_00215ef0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    fn_001da490(param_1,0,0,0,0xffffffff);
    fn_001da490(param_1,1,1,1,0xffffffff);
    fn_001da490(param_1,6,2,2,0xffffffff);
    return;
  }
  if (param_2 == 1) {
    fn_001da490(param_1,0,5,5,0xffffffff);
    fn_001da490(param_1,1,6,6,0xffffffff);
    fn_001da490(param_1,6,6,6,0xffffffff);
  }
  return;
}



void fn_00215e7c(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002ea524();
  iVar2 = fn_002e9c90((int)param_1);
  if (iVar2 == -1) {
    fn_0066173c(uVar1);
    return;
  }
  return;
}



void fn_00215e38(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 0x10;
  if (*(int *)(param_1 + 0x1ec) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  }
  return;
}



void fn_00215d9c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(float *)(param_1 + 0xf8) == 1.0) {
    fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  }
  else {
    fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar1 = fVar1 * *(float *)(param_1 + 0xf8);
  }
  *(int *)(param_1 + 0x1b4) = (int)fVar1;
  if ((int)fVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1b4) = 1;
  }
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
  *(uint *)(param_1 + 0x39c) =
       ((*(uint *)(param_1 + 0x39c) & 0xffffffef | param_3 << 4) & 0xffffffdf | param_4 << 5) &
       0xffffff3f | 0x80;
  return;
}



undefined4 fn_00215d3c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x38c);
  piVar2 = (int *)*piVar3;
  uVar1 = *(undefined4 *)(*piVar3 + 8);
  if (piVar2 != piVar3) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + -1;
    *piVar2 = *(int *)(param_1 + 0x380);
    *(int **)(param_1 + 0x380) = piVar2;
  }
  return uVar1;
}



undefined4 fn_00215cb4(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0x44))(param_1,param_3,4,1);
  }
  *param_2 = *param_2 + '\x01';
  return 1;
}



undefined4 fn_00215b58(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  switch(param_2) {
  case 0:
    return 0x7544;
  case 1:
  case 3:
    return 0x7d08;
  case 2:
    return 0x756a;
  case 4:
  case 0xc:
    return 0x7d0a;
  case 5:
    return 0x7543;
  case 6:
    return 0x7d14;
  case 7:
    return 0x7d15;
  case 8:
    return 0x754b;
  case 9:
    iVar1 = fn_0013add0((int)*(short *)(*(int *)(param_1 + 0x19c) + 8));
    if (iVar1 != 0) {
      iVar1 = fn_002e9978((int)*(short *)(*(int *)(param_1 + 0x19c) + 8));
      iVar2 = 0;
      do {
        if ((char)(&DAT_00891404)[iVar2 * 0xc] == iVar1) {
          return (&DAT_00891408)[iVar2 * 3];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xe);
    }
    break;
  case 10:
    return 0x7d11;
  case 0xb:
    return 0x7d01;
  case 0xd:
    return 0x7546;
  case 0xe:
    return 0x7d12;
  case 0xf:
    return 0x7d33;
  }
  return 0;
}


