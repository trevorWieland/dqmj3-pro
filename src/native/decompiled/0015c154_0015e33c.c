#include "0015c154_0015e33c.h"



void fn_0015e33c(undefined4 param_1,undefined4 param_2)

{
  fn_0014e0a8(&DAT_008ef530,param_1,param_2,0x1000);
  return;
}



void fn_0015d044(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0xf0;
  param_1[3] = 400;
  param_1[8] = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 3;
  param_1[0xb] = 0xf0;
  param_1[0xc] = 400;
  param_1[0xd] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_1;
  param_1[0x10] = 0xf0;
  param_1[0x11] = 400;
  return;
}



longlong fn_0015cfa4(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  uint unaff_r6;
  uint local_28;
  uint local_24;
  
  if (-1 < (int)param_4) {
    uVar3 = param_1[3];
    uVar1 = param_1[4];
    uVar4 = param_3 - uVar3;
    if ((int)(param_4 - (uVar1 + (param_3 < uVar3))) < 0 !=
        (SBORROW4(param_4,uVar1) != SBORROW4(param_4 - uVar1,(uint)(param_3 < uVar3)))) {
LAB_0015d02c:
      param_1[1] = param_3;
      param_1[2] = param_4;
      return (ulonglong)uVar4 << 0x20;
    }
    iVar2 = fn_0014d7c0(&local_28,*param_1 & 0xfffffffe);
    if (iVar2 < 0) {
      param_1[3] = 0;
      param_1[4] = 0;
      local_24 = unaff_r5;
      local_28 = unaff_r6;
    }
    else {
      param_1[4] = local_24;
      param_1[3] = local_28;
    }
    param_2 = -(iVar2 >> 0x1f);
    if (param_2 != 0) goto LAB_0015d024;
    uVar4 = 0;
    if ((int)(local_24 - (param_4 + (local_28 < param_3))) < 0 ==
        (SBORROW4(local_24,param_4) != SBORROW4(local_24 - param_4,(uint)(local_28 < param_3))))
    goto LAB_0015d02c;
  }
  iVar2 = -0x1f1fb93f;
LAB_0015d024:
  return CONCAT44(param_2,iVar2);
}



void fn_0015cf6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  local_10 = fn_0014d9b8();
  fn_0016e9a8(&local_10,param_1);
  return;
}



void fn_0015cec8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0083aa70;
  puVar1[1] = 0;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  return;
}



void fn_0015cea4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_2,0,1,param_3);
  *puVar1 = &DAT_0083aa40;
  return;
}



void fn_0015ce70(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_3,0,0,param_4);
  *(undefined1 *)(puVar1 + 0x10) = param_2;
  *puVar1 = &DAT_0083aa28;
  return;
}



void fn_0015ce4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_2,0,0,param_3);
  *puVar1 = &DAT_0083aa10;
  return;
}



void fn_0015cc5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[2] = param_3;
  *puVar1 = &DAT_00833eb8;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = 7;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



void fn_0015cc44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016dd44();
  *puVar1 = &DAT_00833ea0;
  return;
}



void fn_0015cbec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[2] = param_3;
  *puVar1 = &DAT_00830f2c;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_4;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2d) = 5;
  return;
}



void fn_0015caf4(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016b7d8(param_1,param_3,param_4);
  *puVar1 = &DAT_0082d9fc;
  *(undefined1 *)(puVar1 + 10) = param_2;
  return;
}



void fn_0015cac0(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_3,1,0,param_4);
  *(undefined1 *)(puVar1 + 0x10) = param_2;
  *puVar1 = &DAT_0082aa30;
  return;
}



void fn_0015c980(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined4 *puVar1;
  uint in_fpscr;
  float in_s0;
  int iVar2;
  float fVar3;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  iVar2 = (int)in_s0;
  *(char *)(puVar1 + 5) = (char)param_3;
  *puVar1 = &DAT_008264e0;
  *(undefined1 *)(puVar1 + 1) = param_2;
  puVar1[2] = iVar2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if (param_3 == 0) {
    fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    puVar1[3] = 0x3f800000;
    puVar1[4] = -1.0 / fVar3;
    return;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  puVar1[4] = 1.0 / fVar3;
  return;
}



void fn_0015c954(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0017b9b4(param_1,param_3,param_4);
  *puVar1 = &DAT_008247c0;
  *(undefined1 *)(puVar1 + 8) = param_2;
  return;
}



void fn_0015c90c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[2] = param_3;
  *puVar1 = &DAT_0081ff74;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



void fn_0015c154(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           fn_0016e350(param_1,param_2,param_4,param_6,param_7,param_8,param_9,param_10,param_11,
                        param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
  *puVar1 = &DAT_0081e76c;
  puVar1[0x1e] = param_3;
  puVar1[0x1f] = param_5;
  return;
}


