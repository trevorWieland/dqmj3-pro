#include "0026f918_00270294.h"



void fn_00270294(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  *(int *)(param_1 + 0x20) = param_2;
  if (*(char *)(param_2 + 0xdc) == '\x01') {
    fn_00272d50(param_1);
    fn_00271e64(param_1,(char *)&DAT_0027040c,0);
    *(undefined1 *)(param_1 + 0x48) = 0;
    fn_00275604(param_1);
    iVar2 = fn_00154ac8(0x39);
    if (iVar2 != 0) {
      fn_00271e64(param_1,(char *)&DAT_002755c0,1);
    }
    iVar2 = fn_0028b690(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar3 = fn_002aa920(param_2);
    bVar5 = (iVar2 * 0xf) / 10 <= iVar3;
  }
  else {
    if ((*(char *)(param_2 + 0xdc) != '\x03') || (*(char *)(param_2 + 0x18b) == '\0'))
    goto LAB_002703d0;
    fn_00271e64(param_1,(char *)&DAT_0027040c,0);
    fn_002743d0(param_1);
    bVar5 = true;
  }
  fn_00270814(param_1,bVar5);
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 != '\x06' && cVar1 != '\a') {
    if (cVar1 == '\n') {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
      uVar4 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_00892124,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      *(undefined1 *)(param_1 + 8) = 7;
    }
    else {
      if (*(int *)(param_1 + 0x18) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      }
      uVar4 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_00892120,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      *(undefined1 *)(param_1 + 8) = 6;
    }
  }
LAB_002703d0:
  fn_00270664(param_1,0);
  return;
}



void fn_002700fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 0x10;
    if (*(int *)(iVar1 + 0x80) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    }
    if (*(int *)(iVar1 + 0x84) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    }
    if (*(int *)(iVar1 + 0x7c) != -1) {
      fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(int *)(iVar1 + 0x7c),0);
      fn_0016a43c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar1 + 0x7c));
    }
    *(undefined1 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0xffffffff;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x84) = 0xffffffff;
  } while (iVar2 < 3);
  return;
}



void fn_00270018(int param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  fn_00271e64(param_1,(char *)&DAT_00274dac,1);
  fn_00271e64(param_1,(char *)&DAT_00274db8,1);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x4c))();
  lVar1 = (longlong)(piVar2[1] - *piVar2) * -0x6db6db6d +
          ((ulonglong)(uint)(piVar2[1] - *piVar2) << 0x20);
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  fn_002715b0(param_1,(iVar3 >> 4) - (iVar3 >> 0x1f),(int)lVar1);
  fn_00271e64(param_1,(char *)&DAT_002700d8,0);
  fn_00271e64(param_1,(char *)&DAT_002700e8,0);
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
  }
  uVar4 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921c8,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



void fn_0026fd8c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  fn_00271508();
  if (*(int *)(param_1 + 0x18) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  fn_00270184(param_1);
  fn_0027583c(param_1,0);
  fn_00272108(param_1);
  fn_002726ec(param_1);
  uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921ec,
                       *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = fn_00176970();
  fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(iVar2 + 0x10) = fVar3 - 1.0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_0026ff98,1)
  ;
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),(char *)&DAT_0026ffa8,1);
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),(char *)&DAT_0026ffbc,1);
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_0026ffd0,1)
  ;
  *(undefined1 *)(iVar2 + 0x45) = 0;
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                    (*(int **)(iVar2 + 0x10),(char *)&DAT_0026ffe0,1);
  *(undefined1 *)(iVar2 + 0x45) = 0;
  fn_00271e64(param_1,(char *)&DAT_0026fff4,1);
  *(undefined1 *)(param_1 + 8) = 0xb;
  return;
}



void fn_0026fcd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
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
  local_28 = 0;
  local_24 = 0;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_00100394(&local_60,0x40,param_2,&uStack_8);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),&local_60,1);
  return;
}



undefined4 * fn_0026fb60(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar4;
  undefined4 in_lr;
  
  *param_1 = &PTR_FUN_0081e088;
  uVar3 = param_1[7];
  param_1[7] = 0;
  uVar2 = param_1[8];
  param_1[8] = 0;
  iVar4 = param_1[9];
  param_1[9] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0x1c;
    } while (uVar1 != uVar2);
  }
  iVar4 = (int)((longlong)(int)(iVar4 - uVar3) * -0x6db6db6d + ((ulonglong)(iVar4 - uVar3) << 0x20)
               >> 0x20);
  fn_001008c4(uVar3,(iVar4 >> 4) - (iVar4 >> 0x1f),0);
  fn_00337b0c(param_1[6]);
  fn_005dfbcc(param_1);
  fn_005f44bc(param_1[5]);
  fn_0012d73c(param_1[4]);
  param_1[4] = 0;
  fn_0012d73c(param_1[3]);
  param_1[3] = 0;
  fn_0026e8b0(param_1);
  uVar2 = param_1[10];
  uVar1 = uVar2;
  if ((uint)param_1[0xb] < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != param_1[0xb]);
  }
  fn_001008c4(uVar2,(int)(param_1[0xc] - uVar2) >> 2,0);
  uVar2 = param_1[7];
  uVar1 = uVar2;
  if ((uint)param_1[8] <= uVar2) {
    for (; uVar1 != param_1[8]; uVar1 = uVar1 + 0x1c) {
    }
  }
  iVar4 = (int)((longlong)(int)(param_1[9] - uVar2) * -0x6db6db6d +
                ((ulonglong)(param_1[9] - uVar2) << 0x20) >> 0x20);
  fn_001008c4(uVar2,(iVar4 >> 4) - (iVar4 >> 0x1f),0);
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  *param_1 = &DAT_008588e4;
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    fn_005dfbd4();
    fn_00100414(iVar4 + 4,fn_00796448,0xc,2,unaff_r4,unaff_r5,unaff_r6,in_lr);
    fn_002feef8(iVar4);
  }
  return param_1;
}



undefined4 * fn_0026fad0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_005dfeb0();
  *puVar1 = &PTR_FUN_0081e088;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_005f44cc();
  }
  puVar1[5] = uVar3;
  iVar2 = fn_00145b00(0x1a8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00337de8();
  }
  puVar1[6] = uVar3;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return puVar1;
}



void fn_0026f918(int param_1,ushort *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_320 [2];
  undefined1 auStack_318 [512];
  undefined1 auStack_118 [256];
  
  uVar7 = 0;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*param_2 * 0x1c);
  if (*(char *)(puVar1 + 6) == '\0') {
    *puVar1 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*param_2 * 0x1c + 4) =
         *(undefined4 *)(param_2 + 0xe);
    iVar2 = *(int *)(param_1 + 0x1c) + (uint)*param_2 * 0x1c;
    uVar4 = *(undefined4 *)(param_2 + 10);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*param_2 * 0x1c + 0x14) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + (uint)*param_2 * 0x1c + 0x18) = 0;
    fn_001028d4(auStack_118,(char *)&DAT_0026fac0,*(undefined4 *)(param_2 + 4),
                 (int)(char)(&DAT_007bfb68)[(byte)param_2[6]]);
    fn_00211ce4(auStack_118,auStack_318,*(undefined4 *)(DAT_008977e0 + 0xa8));
    uVar4 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
    fn_00118624(local_320,uVar4);
    uVar3 = fn_006ede48(local_320,auStack_118);
    fn_005f5d3c(local_320);
    if (uVar3 != 0) {
      uVar6 = 0;
      if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2 != 0) {
        do {
          iVar2 = fn_006e9f44(*(undefined4 *)(*(int *)(param_1 + 0x28) + uVar6 * 4));
          if (uVar3 < iVar2 - 0x2800U) {
            uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar6 * 4);
            goto LAB_0026fa98;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
      }
      uVar6 = 0;
      uVar3 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
      if (uVar3 != 0) {
        do {
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
LAB_0026fa98:
      local_320[0] = uVar7;
      fn_00337680(*(undefined4 *)(param_1 + 0x18),*param_2,auStack_318,param_2 + 8);
    }
  }
  else {
    *(undefined1 *)(puVar1 + 6) = 0;
  }
  return;
}


