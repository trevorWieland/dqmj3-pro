#include "00175044_00175724.h"



int fn_00175724(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int aiStack_48 [16];
  
  iVar2 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),aiStack_48,0x10);
  if (0 < iVar2) {
    iVar1 = iVar2 - param_2;
    if (iVar2 >= param_2) {
      iVar1 = param_2;
    }
    if (iVar1 < 0 == (iVar2 < param_2 && SBORROW4(iVar2,param_2))) {
      iVar2 = 0;
      if (aiStack_48[param_2] != 0) {
        iVar2 = (int)*(char *)(aiStack_48[param_2] + 0x2665);
      }
      return iVar2;
    }
  }
  return 0;
}



void fn_001755cc(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_44;
  float fStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar1 = fn_00164a34();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_3 - 8;
  }
  if (iVar2 < 0 != (iVar1 != 0 && SBORROW4(param_3,8))) {
    iVar2 = fn_00174858(DAT_008977e4);
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 != 0) {
      fVar6 = 0.0;
      iVar1 = param_1;
      fVar7 = fVar6;
      fVar8 = fVar6;
      iVar3 = fn_00164a34(param_1,param_2,param_1,param_3 & 0xff);
      if ((iVar3 != 0) &&
         (uVar4 = 0, fVar6 = fVar7, fVar8 = fVar7,
         *(int *)(iVar1 + 0xb0) - *(int *)(iVar1 + 0xac) >> 4 != 0)) {
        do {
          pcVar5 = (char *)(*(int *)(iVar1 + 0xac) + uVar4 * 0x10);
          uVar4 = uVar4 + 1;
          if (*pcVar5 == (char)param_2) {
            fVar6 = *(float *)(pcVar5 + 4);
            fVar7 = *(float *)(pcVar5 + 8);
            fVar8 = *(float *)(pcVar5 + 0xc);
          }
        } while (uVar4 < (uint)(*(int *)(iVar1 + 0xb0) - *(int *)(iVar1 + 0xac) >> 4));
      }
      local_44 = fVar6 + *(float *)(param_1 + 0xc4);
      fStack_40 = fVar7 + *(float *)(param_1 + 200);
      fStack_3c = fVar8 + *(float *)(param_1 + 0xcc);
      local_38 = VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
      uStack_34 = VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
      if (param_5 == 0) {
        fn_0015cdbc(iVar2,&local_44);
      }
      else {
        fn_0015cd34(iVar2,&local_44);
      }
      *(undefined4 *)(iVar2 + 0x10) = in_s0;
    }
  }
  return;
}



void fn_0017554c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 local_18 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_18[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_18), iVar1 != 0)) {
      fn_0017fe34();
      *(undefined4 *)(iVar1 + 0x1c) = in_s0;
    }
  }
  return;
}



void fn_00175518(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  fn_00166804(iVar1 + param_2 * 0x418 + -0x4080);
  return;
}



undefined4 fn_001754ac(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = fn_00164a34();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (int)param_2;
    uVar3 = iVar1 - 0x10;
    bVar4 = 3 < uVar3;
    if (bVar4) {
      uVar3 = iVar1 - 0x18;
    }
    uVar2 = 0;
    if ((!bVar4 || uVar3 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void fn_00175430(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_00164a34();
  if ((iVar1 != 0) && (uVar2 = 0, *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 4 != 0)) {
    do {
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 4));
  }
  return;
}



void fn_001753a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_10[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_10), iVar1 != 0)) {
      fn_00163890();
      return;
    }
  }
  return;
}



undefined4 fn_00175324(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_001642a8();
  if ((0x2ba < iVar1 - 1U) ||
     (iVar1 = fn_00165d04(*(undefined4 *)(param_1 + 0xec),iVar1), iVar1 == 0)) {
    iVar1 = fn_00165098(param_1,param_2);
    if ((0x21e < iVar1 - 1U) ||
       (iVar1 = fn_00165c80(*(undefined4 *)(param_1 + 0xf0),iVar1), iVar1 == 0)) {
      return 0;
    }
  }
  return 1;
}



int fn_001752ec(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return (int)*(char *)(iVar1 + param_3 * 0x418 + param_2 + -0x4025);
}



void fn_001752d8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  fn_00159d74(&uStack_c);
  return;
}



void fn_00175284(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 local_10;
  
  if ((int)(char)param_2 - 0x10U < 8) {
    local_10 = param_2;
    iVar1 = fn_0017484c(DAT_008977e4);
    if ((iVar1 != 0) && (iVar1 = fn_00182e2c(iVar1,&local_10), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 0xae) = param_3;
      return;
    }
  }
  return;
}



int fn_00175108(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x84);
  cVar1 = *(char *)(iVar4 + 4);
  if (cVar1 == '\x16') {
    return 0x1e;
  }
  if (cVar1 == '\x04') {
    iVar4 = fn_0016533c(iVar4,0,0);
    if ((iVar4 != 0) && (*(char *)(iVar4 + 6) == '\x04' || *(char *)(iVar4 + 6) == '\t')) {
      return 0x2d;
    }
  }
  else if (cVar1 == '\x03') {
    iVar4 = fn_00175a0c(iVar4,0);
    if ((*(short *)(iVar4 + 2) == 10) &&
       (iVar4 = fn_0016533c(*(undefined4 *)(param_1 + 0x84),0,0), iVar4 != 0)) {
      cVar1 = *(char *)(iVar4 + 6);
      if (cVar1 == '\x03') {
        return 0x1e;
      }
      if (cVar1 == '\x04' || cVar1 == '\t') {
        return 0x2d;
      }
    }
  }
  else {
    if (cVar1 == '\x05') {
      return 0x2d;
    }
    if (cVar1 == '\x17') {
      return 0x1e;
    }
  }
  iVar4 = fn_001642a8(param_1,param_2);
  if (iVar4 - 1U < 699) {
    iVar4 = fn_00165cec(*(undefined4 *)(param_1 + 0xec),iVar4,param_3 & 0xff);
    return iVar4;
  }
  iVar4 = fn_00165098(param_1,param_2);
  if (iVar4 - 1U < 0x21f) {
    piVar2 = *(int **)(param_1 + 0xf0);
  }
  else {
    iVar4 = fn_00165190(param_1,param_2);
    iVar3 = fn_00163940();
    if (iVar3 == 0) {
      return 0;
    }
    piVar2 = *(int **)(param_1 + 0xf4);
  }
  iVar4 = (**(code **)(*piVar2 + 8))(piVar2,iVar4);
  return (int)*(short *)(piVar2[4] + iVar4 * 0x28 + (param_3 & 0xff) * 8 + 8);
}



int fn_00175044(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  iVar2 = fn_00164d7c();
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = fn_001642a8(param_1,param_2);
  if (iVar2 - 1U < 699) {
    iVar2 = fn_00165cb0(*(undefined4 *)(param_1 + 0xec),iVar2,param_3 & 0xff);
    return iVar2;
  }
  iVar2 = fn_00165098(param_1,param_2);
  if (iVar2 - 1U < 0x21f) {
    piVar3 = *(int **)(param_1 + 0xf0);
  }
  else {
    iVar2 = fn_00165190(param_1,param_2);
    iVar1 = fn_00163940();
    if (iVar1 == 0) {
      return 0;
    }
    piVar3 = *(int **)(param_1 + 0xf4);
  }
  iVar2 = (**(code **)(*piVar3 + 8))(piVar3,iVar2);
  iVar4 = piVar3[3] + *(int *)(piVar3[4] + iVar2 * 0x28 + (param_3 & 0xff) * 8 + 4) * 0x20;
  iVar1 = fn_003035b0(iVar4,&DAT_00165c44,iVar2 * 5,piVar3[3],unaff_r4,unaff_r5,unaff_r6,in_lr);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar4;
  }
  return iVar2;
}


