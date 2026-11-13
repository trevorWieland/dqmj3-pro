#include "006ad9ac_006adef0.h"



undefined4 fn_006adef0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    iVar2 = fn_006ae004(param_1);
    if (iVar2 == 0) {
      iVar2 = fn_00339ae8(*(undefined4 *)(param_1 + 0x84));
      puVar4 = (&PTR_s_Dummy_007bc260)[iVar2];
      cVar1 = fn_005f6ce8(*(undefined4 *)(param_1 + 0xb8),puVar4);
      if ('\0' < cVar1) {
        cVar1 = fn_00163868();
        puVar3 = (undefined4 *)fn_00128eac(*(undefined4 *)(param_1 + 0xb8),puVar4,(int)cVar1);
        *param_2 = *puVar3;
        param_2[1] = puVar3[1];
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar3 + 2);
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0xd0) != '\x01') {
      return 0;
    }
    iVar2 = fn_00339ae8(*(undefined4 *)(param_1 + 0x84));
    puVar4 = (&PTR_s_Dummy_007bc260)[iVar2];
    cVar1 = fn_005f6ce8(*(undefined4 *)(param_1 + 0xb8),puVar4);
    if ('\0' < cVar1) {
      cVar1 = fn_00163868();
      puVar3 = (undefined4 *)fn_00128eac(*(undefined4 *)(param_1 + 0xb8),puVar4,(int)cVar1);
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar3 + 2);
      return 1;
    }
  }
  return 0;
}



void fn_006adebc(undefined4 param_1,int param_2)

{
  undefined1 local_c [12];
  
  local_c[0] = *(undefined1 *)(param_2 + 5);
  fn_00159b18(local_c,param_2 + 0x59,param_2 + 0x38,param_2 + 0x48,0x61);
  return;
}



undefined * fn_006ade38(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_5 == 0) {
    if (param_4 == 0) {
      uVar1 = fn_006c4ddc(*(undefined4 *)(param_1 + 0xec));
      fn_001028d4(&DAT_008c7f1c,(char *)&DAT_006adeac,uVar1);
    }
    else {
      uVar1 = fn_006c4d1c();
      fn_001028d4(&DAT_008c7f1c,(char *)&DAT_006adeac,uVar1);
    }
  }
  else {
    uVar1 = fn_006c4e9c();
    fn_001028d4(&DAT_008c7f1c,(char *)&DAT_006adeac,uVar1);
  }
  return &DAT_008c7f1c;
}



void fn_006adde8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 auStack_48 [16];
  
  iVar1 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),auStack_48,0x10);
  bVar2 = iVar1 == 0;
  if (-1 < iVar1) {
    bVar2 = iVar1 == param_2;
  }
  if (((!bVar2 && (-1 < iVar1 && param_2 <= iVar1)) && (-1 < param_2)) &&
     ((undefined2 *)auStack_48[param_2] != (undefined2 *)0x0)) {
    fn_001c26a8(*(undefined2 *)auStack_48[param_2]);
  }
  return;
}



void fn_006add70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_30 [8];
  
  fn_001028d4(local_30,(char *)&DAT_00164f64,7);
  if ((DAT_00897800 != 0) &&
     (iVar1 = fn_0016ba34(DAT_00897800,DAT_0089820c,local_30,0), iVar1 != 0)) {
    local_30[0] = 0;
    fn_00164f84(param_1,param_2,iVar1,0);
  }
  return;
}



void fn_006add3c(int param_1)

{
  fn_0018367c(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_006add1c(int param_1)

{
  fn_0018367c(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4 fn_006adc94(int param_1)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (0.0 < in_s0) {
    iVar1 = fn_0018367c(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      fVar2 = fVar3;
    }
    else {
      fVar2 = *(float *)(iVar1 + 4);
    }
    fn_0018367c(*(undefined4 *)(param_1 + 4));
    if (fVar3 < in_s1) {
      fVar2 = fVar2 + in_s1;
    }
    fn_001a23a8();
    fn_006fa358();
    if (fVar2 == fVar3) {
      return 1;
    }
  }
  return 0;
}



int fn_006adc30(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = fn_0016678c(param_1,iVar2), iVar1 == 0 ||
         (iVar1 = fn_006ec8f0(param_1,iVar2), iVar1 != param_2))) {
    iVar2 = iVar2 + 1;
    if (0x1f < iVar2) {
      return 0x21;
    }
  }
  return iVar2;
}



undefined4 fn_006adbcc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = fn_0016678c(param_1,iVar2), iVar1 == 0 ||
         (iVar1 = fn_006ec8f0(param_1,iVar2), iVar1 != param_2))) {
    iVar2 = iVar2 + 1;
    if (0x1f < iVar2) {
      return 0;
    }
  }
  if (iVar2 == 0x21) {
    return 0;
  }
  return 1;
}



uint fn_006adb90(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = fn_0016678c(param_1,0xd);
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (!bVar2 || uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_006adb48(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return iVar1 + param_2 * 100 + 4;
}



int fn_006adb24(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return (int)*(short *)(iVar1 + param_2 * 100 + 0x10);
}



void fn_006adb00(undefined4 *param_1)

{
  fn_00145ac0(*param_1);
  return;
}



void fn_006adadc(undefined4 *param_1)

{
  fn_00145ac0(*param_1);
  return;
}



int fn_006adab8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return iVar1 + param_2 * 100 + 0x18;
}



int fn_006ada94(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return (int)*(short *)(iVar1 + param_2 * 100 + 0xc);
}



void fn_006ada88(void)

{
  return;
}



int fn_006ad9ac(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4);
  if ((int)uVar3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
    if (uVar1 != 0) {
      unaff_r4 = *(int *)(param_1 + 8);
    }
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(short *)(unaff_r4 + iVar2 * 0xc) == param_2) {
          return unaff_r4 + iVar2 * 0xc;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  if ((int)uVar1 < (int)uVar3) {
    iVar2 = *(int *)(param_1 + 8);
    do {
      if (*(short *)(iVar2 + uVar1 * 0xc) == param_2) {
        return iVar2 + uVar1 * 0xc;
      }
      if (*(short *)(iVar2 + uVar1 * 0xc + 0xc) == param_2) {
        return iVar2 + uVar1 * 0xc + 0xc;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar3);
  }
  return 0;
}


