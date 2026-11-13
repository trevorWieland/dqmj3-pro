#include "003cfaf4_003d0ab4.h"



void fn_003d0ab4(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  fVar2 = (float)VectorSignedToFloat(param_2 + -1,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(iVar1 + 0x20) = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x28) * fVar2;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



void fn_003d0478(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float in_s0;
  float fVar3;
  float fVar4;
  
  if (param_2 < 10) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = in_s0 * fVar3;
    *(float *)(param_1 + 0x24) = fVar3;
  }
  else {
    fVar3 = in_s0 * 10.0;
    if (param_2 % 10 != 0) {
      param_2 = param_2 + 10;
    }
    *(char *)(param_1 + 0x2c) = (char)((uint)((short)param_2 * 0xcd) >> 0xb);
    *(float *)(param_1 + 0x24) = fVar3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(iVar1 + 0x34);
  *(float *)(iVar1 + 0x38) = fVar3;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x2c),(byte)(in_fpscr >> 0x16) & 3)
  ;
  fVar4 = fVar3 / fVar4;
  *(float *)(param_1 + 0x28) = fVar4;
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(float *)(iVar1 + 0x38) = fVar4;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(float *)(iVar1 + 0x38) = fVar4;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c);
  *(float *)(iVar1 + 0x40) = fVar3 + 12.0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



undefined4 * fn_003d0048(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &DAT_00831194;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    if ((char)piVar1[4] != '\0') {
      (**(code **)(*piVar1 + 0x14))();
    }
    if ((int *)param_1[0xd] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xd] + 4))();
      param_1[0xd] = 0;
    }
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  param_1[1] = 0;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  param_1[2] = 0;
  iVar2 = 0;
  do {
    if (param_1[iVar2 + 10] != -1) {
      fn_0016a43c(param_1[3]);
      param_1[iVar2 + 10] = 0xffffffff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  return param_1;
}



undefined4 * fn_003cfe94(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  *param_1 = &DAT_00831194;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *(undefined4 *)(param_2 + 0x2c);
  param_1[4] = &DAT_00859410;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x23) = 1;
  param_1[9] = 0;
  param_1[0xe] = param_3;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  local_2c = 0x80706;
  local_28[0] = 0xff000102;
  fn_003138f0(param_1[3],6);
  fn_003138f0(param_1[3],7);
  if (param_4 != 0) {
    fn_003138f0(param_1[3],8);
  }
  uVar5 = 0;
  do {
    uVar1 = fn_0018963c(param_1[3],*(undefined1 *)((int)local_28 + (uVar5 - 4)),1,1,
                         *(undefined1 *)((int)local_28 + uVar5));
    uVar6 = uVar5 + 1;
    param_1[uVar5 + 10] = uVar1;
    if (2 < uVar6) goto LAB_003cff90;
    uVar5 = uVar6;
  } while (param_4 != 0 || uVar6 != 2);
  param_1[0xc] = 0xffffffff;
LAB_003cff90:
  iVar2 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_001caa80(iVar2,param_2,0);
  }
  piVar3 = (int *)param_1[9];
  if (piVar3 != piVar4) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    param_1[9] = piVar4;
  }
  iVar2 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_0038ddac();
  }
  param_1[1] = uVar1;
  iVar2 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_003d0bac();
  }
  param_1[2] = uVar1;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  return param_1;
}



void fn_003cfd6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x10);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 8))();
      piVar3 = (int *)fn_0025e920(iVar1,uVar2,uVar5);
    }
    piVar4 = *(int **)(param_1 + 0x34);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0x34) = piVar3;
    }
  }
  if ((char)(*(int **)(param_1 + 0x34))[4] != '\0') {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
  }
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
            (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  fn_0025e378(*(undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 4) + 0x28);
  iVar1 = *(int *)(param_1 + 4);
  uVar6 = (uint)*(char *)(param_1 + 0x14);
  if ((uint)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2) <= uVar6) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar6);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar1 + 0x18) + uVar6 * 4) + 0x1c
              );
  fn_0025e31c(*(undefined4 *)(param_1 + 0x34),0);
  return;
}



void fn_003cfbdc(int *param_1,byte param_2)

{
  char cVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  cVar1 = (char)param_1[5];
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  bVar5 = (param_2 & 2) != 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (bVar5) {
    cVar1 = cVar1 + '\x01';
  }
  bVar6 = (param_2 & ~bVar5 & 1) != 0;
  if (bVar6) {
    cVar1 = cVar1 + -1;
  }
  iVar3 = (int)cVar1;
  iVar4 = iVar3;
  if (*(char *)((int)param_1 + 0x23) < '\x02') goto LAB_003cfd30;
  if (!bVar6 && !bVar5) {
    if ((param_2 & 4) == 0) {
      if ((param_2 & 8) != 0) {
        *(undefined1 *)((int)param_1 + 0x3d) = 1;
        iVar4 = (int)(char)(*(char *)((int)param_1 + 0x21) + -1);
        if (*(char *)((int)param_1 + 0x22) == *(char *)((int)param_1 + 0x23)) {
          if (iVar4 <= iVar3) {
            iVar4 = (int)*(char *)((int)param_1 + 0x21);
          }
        }
        else {
          iVar4 = (int)(char)((char)param_1[8] + cVar1);
        }
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x22) == '\x01') {
        if (0 < iVar3) {
          iVar4 = 0;
          goto LAB_003cfcb4;
        }
        cVar1 = cVar1 + -1;
      }
      else {
        cVar1 = cVar1 - (char)param_1[8];
      }
      iVar4 = (int)cVar1;
    }
  }
LAB_003cfcb4:
  if (iVar4 < *(char *)((int)param_1 + 0x21)) {
    if (-1 < iVar4) goto LAB_003cfd30;
    cVar1 = *(char *)((int)param_1 + 0x22) + -1;
    *(char *)((int)param_1 + 0x22) = cVar1;
    if (cVar1 < '\x01') {
      *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)((int)param_1 + 0x23);
    }
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x22) + '\x01';
    *(char *)((int)param_1 + 0x22) = cVar1;
    if (*(char *)((int)param_1 + 0x23) < cVar1) {
      *(undefined1 *)((int)param_1 + 0x22) = 1;
    }
    if (iVar4 == *(char *)((int)param_1 + 0x21)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(char)((char)iVar4 - *(char *)((int)param_1 + 0x21));
    }
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  (**(code **)(*param_1 + 0x1c))();
LAB_003cfd30:
  *(char *)((int)param_1 + 0x16) = (char)iVar4;
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    fn_00300f74(*(char *)((int)param_1 + 0x21) + iVar4);
    uVar2 = extraout_r1;
  }
  else {
    if (*(char *)((int)param_1 + 0x21) <= iVar4) {
      iVar4 = (int)(char)(*(char *)((int)param_1 + 0x21) + -1);
    }
    uVar2 = (undefined1)iVar4;
  }
  *(undefined1 *)((int)param_1 + 0x16) = uVar2;
  return;
}



void fn_003cfaf4(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  cVar2 = *(char *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(char *)(param_1 + 0x15) = cVar2;
  *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x16);
  if (cVar2 == *(char *)(param_1 + 0x16)) {
    iVar3 = *(int *)(param_1 + 0x1c) + 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  if (*(char *)(param_1 + 0x3c) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = (uint)*(char *)(param_1 + 0x14);
    uVar1 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar4,uVar1);
    }
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),
                 **(int **)(*(int *)(iVar3 + 0x18) + uVar4 * 4) + 0x1c);
    fn_0038d4c4(*(undefined4 *)(param_1 + 4),(int)*(char *)(param_1 + 0x14),
                 (int)*(char *)(param_1 + 0x22));
    if (*(char *)(param_1 + 0x3c) == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}


