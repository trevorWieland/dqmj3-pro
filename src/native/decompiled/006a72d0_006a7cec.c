#include "006a72d0_006a7cec.h"



uint fn_006a7cec(int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  cVar1 = *(char *)(uVar2 + 9);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(uVar2 + 10);
  }
  if (bVar3 && cVar1 == '\0') {
    bVar3 = *(char *)(uVar2 + 0xb) == '\0';
    if (bVar3) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xc);
    }
    if (bVar3 && uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}



void fn_006a7cbc(void)

{
  return;
}



void fn_006a7cb0(void)

{
  return;
}



undefined4 fn_006a7bf8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_0018367c(param_1[0x39]);
  fn_0018367c(param_1[0x39]);
  fn_0018367c(param_1[0x39]);
  fn_0018367c(param_1[0x39]);
  uVar1 = fn_006eb3c0();
  iVar2 = fn_001f9ea8(param_2,*(undefined4 *)(param_1[0x53] + (char)param_1[0x44] * 0xc),uVar1);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    if ((iVar2 != 1) && (iVar2 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x006a7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006a7b90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [16];
  
  fn_0026e378(auStack_18,*param_2,0,(char *)&DAT_007ce550,0,1);
  uVar1 = fn_0026d2e8(auStack_18,1);
  fn_0026e410(auStack_18);
  return uVar1;
}



void fn_006a7b54(void)

{
  DAT_008928ec = 0;
  DAT_008928f0 = 0;
  return;
}



undefined4 fn_006a7b08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(char *)(DAT_008928ec + (param_1 + -1) * 0xc + 2) == -1) ||
       ((uint)(int)(short)DAT_008928f0 <= param_1 - 1U)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}



int fn_006a7ae8(int param_1)

{
  return (int)*(char *)(DAT_008928ec + (param_1 + -1) * 0xc + 2);
}



undefined4 fn_006a7ad8(void)

{
  return DAT_008928f4;
}



undefined4 fn_006a7ab8(int param_1)

{
  return *(undefined4 *)(DAT_008928ec + (param_1 + -1) * 0xc + 4);
}



undefined1 fn_006a7a78(int param_1)

{
  return *(undefined1 *)(DAT_008928ec + (param_1 + -1) * 0xc + 8);
}



undefined4 fn_006a79a4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar2 = fn_00147e6c(param_1,&DAT_006a7a6c,4,param_3 - 1), iVar2 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar2 = 0xc;
  iVar5 = 0;
  DAT_008928f0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar2 != 0 || iVar5 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008928f0 = 0;
  }
  DAT_008928ec = param_1;
  uVar4 = 0;
  do {
    uVar3 = uVar4 & 0xff;
    if (uVar3 != 0) {
      bVar1 = *(byte *)(param_1 + (uVar3 - 1) * 0xc + 2);
      bVar7 = 0xfe < bVar1;
      if (bVar1 != 0xff) {
        bVar7 = (uint)(int)(short)DAT_008928f0 <= uVar3 - 1;
      }
      if (!bVar7) {
        iVar6 = iVar6 + 1;
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0xf8);
  DAT_008928f4 = iVar6;
  return 1;
}



void fn_006a7914(int *param_1)

{
  int iVar1;
  
  if (param_1[0xd] == 0) {
    (**(code **)(*param_1 + 0xc))(param_1,0);
  }
  (**(code **)(*param_1 + 0xc))(param_1,1);
  if (param_1[0xb] != param_1[9]) {
    (**(code **)(*param_1 + 0xc))(param_1,2);
  }
  iVar1 = param_1[9];
  param_1[0xc] = param_1[0xc] + 1;
  param_1[9] = param_1[0xb];
  param_1[10] = iVar1;
  if (iVar1 == param_1[0xb]) {
    iVar1 = param_1[0xd] + 1;
  }
  else {
    iVar1 = 0;
  }
  param_1[0xd] = iVar1;
  return;
}



void fn_006a7610(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x40);
  return;
}



void fn_006a756c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x28) + uVar1 * 8,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x2c));
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x34) + uVar1 * 8,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



undefined4 fn_006a72d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  iVar1 = fn_001c1430(param_1,param_3,param_2,0x53514952);
  if ((iVar1 != 0) && (iVar1 = fn_001c1430(param_1,param_3,param_2,1), iVar1 != 0)) {
    local_3c = (int *)0x0;
    local_40 = 0x1000001;
    iVar1 = fn_00296b68(param_1,param_2,param_3,&local_40);
    if (iVar1 == 0) {
      if ((local_40 & 0x8000000) == 0) {
        return 0;
      }
      iVar1 = local_3c[1] + -1;
      local_3c[1] = iVar1;
    }
    else {
      iVar1 = fn_001c1430(param_1,param_3,param_2,0x5441494c);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x8c);
        piVar4 = local_3c;
        piVar2 = (int *)fn_002fece8(0x40);
        if (piVar2 != (int *)0x0) {
          piVar2[1] = 0;
          *piVar2 = (int)&DAT_008516d0;
          piVar2[2] = 0;
          piVar2[6] = 0x1000001;
          piVar2[7] = 0;
          piVar2[8] = 0x1000001;
          piVar2[9] = 0;
          piVar2[10] = 0;
          piVar2[0xb] = 0;
          piVar2[0xc] = 0;
          piVar2[0xd] = 0;
          piVar2[0xe] = 0;
          piVar2[0xf] = 0;
          local_30 = 0x8002000;
          local_2c = piVar4;
          if (piVar4 == (int *)0x0) goto code_r0x006a7484;
          piVar4[1] = piVar4[1] + 1;
          fn_0019e864(piVar2 + 8,&local_30);
          if (((local_30 & 0x8000000) != 0) &&
             (iVar3 = local_2c[1], local_2c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
            (**(code **)(*local_2c + 8))();
          }
          piVar2[5] = iVar1;
          piVar2[3] = 0;
          piVar2[4] = 0;
          fn_0019e8c4(iVar1 + 0x44,piVar2);
        }
        local_38 = 0x8000100;
        local_34 = piVar2;
        if (piVar2 != (int *)0x0) {
          piVar2[1] = piVar2[1] + 1;
          fn_0019e864(param_4,&local_38);
          if (((local_38 & 0x8000000) != 0) &&
             (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
            (**(code **)(*local_34 + 8))();
          }
          if (((local_40 & 0x8000000) != 0) &&
             (iVar1 = local_3c[1], local_3c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
            (**(code **)(*local_3c + 8))();
          }
          return 1;
        }
code_r0x006a7484:
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if ((local_40 & 0x8000000) == 0) {
        return 0;
      }
      iVar1 = local_3c[1] + -1;
      local_3c[1] = iVar1;
    }
    if (iVar1 == 0) {
      (**(code **)(*local_3c + 8))();
    }
  }
  return 0;
}


