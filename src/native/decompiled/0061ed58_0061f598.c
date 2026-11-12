#include "0061ed58_0061f598.h"



void fn_0061f598(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_40 [4];
  int local_30 [3];
  
  iVar1 = param_4 + param_3 * 0x418 + -0x4080;
  iVar8 = param_4 + param_2 * 0x418 + -0x4080;
  iVar2 = fn_006f2fa8();
  iVar3 = fn_006f44fc(iVar8,0x1b7);
  if (iVar3 != 0) {
    iVar2 = iVar2 / 2;
  }
  iVar3 = fn_006f4520(iVar8);
  iVar4 = fn_0063a510(5,0x14,0);
  iVar2 = fn_00169f1c((iVar3 - iVar2 / 3) * iVar4 + 99,100);
  local_40[0] = (iVar2 * 100) / 100;
  local_30[0] = 0;
  piVar5 = local_30;
  if (-1 < local_40[0]) {
    piVar5 = local_40;
  }
  uVar7 = param_3 - 0x10;
  bVar9 = 7 < uVar7;
  if (bVar9) {
    uVar7 = param_3 - 0x18;
  }
  iVar2 = *piVar5;
  if (bVar9 && 7 < uVar7) {
    iVar1 = 0;
  }
  iVar3 = fn_00163a00(param_1);
  if ((iVar3 == 1) && (iVar1 = fn_006f44fc(iVar1,0x50), iVar1 != 0)) {
    iVar2 = fn_00169f1c(iVar2 * 0x4b + 99,100);
    iVar2 = (iVar2 * 100) / 100;
  }
  local_40[0] = param_4;
  uVar6 = fn_00637df0(iVar2,param_1,param_2,param_3);
  local_40[0] = fn_006f44fc(iVar8,0xab);
  uVar6 = fn_00637eb0(uVar6,param_1,param_3,param_4);
  local_40[0] = param_4;
  fn_00639ac0(uVar6,param_1,param_2,param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0061f54c) */
/* WARNING: Type propagation algorithm not settling */

void fn_0061f150(int param_1,int param_2,int param_3,int ****param_4,int param_5,
                 undefined4 *param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int ***pppiVar5;
  undefined4 uVar6;
  int ****ppppiVar7;
  int ****ppppiVar8;
  int ****ppppiVar9;
  int ***local_100;
  undefined *puStack_fc;
  int ***local_f8;
  int ****local_f4;
  undefined1 *local_f0;
  int ***local_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined4 local_e0;
  undefined1 *local_dc;
  undefined1 auStack_d8 [4];
  int local_d4;
  int local_38;
  
  ppppiVar7 = &local_100;
  ppppiVar8 = param_4;
  local_38 = fn_001639e4();
  if (param_1 != 0x29e) {
    bVar1 = *(byte *)(param_5 + 0xf);
    iVar3 = fn_00145adc(param_4 + 0x3a);
    if (iVar3 == 0) {
      iVar3 = fn_00692304(param_1);
    }
    else {
      iVar3 = fn_0061be08(param_3);
      if (iVar3 == 0) {
        iVar3 = fn_0069242c(param_1);
      }
      else {
        iVar3 = fn_00692410();
      }
    }
    iVar4 = 0;
    local_f8 = (int ***)&LAB_006917d4;
    local_f4 = (int ****)&LAB_00691840;
    local_f0 = &LAB_00691794;
    local_ec = (int ***)&LAB_006917b4;
    puStack_e8 = &LAB_006916c4;
    puStack_e4 = &LAB_006916a4;
    local_e0 = &LAB_00691820;
    local_dc = &LAB_00691774;
LAB_0061f298:
    if (iVar4 != iVar3) goto LAB_0061f384;
    pppiVar5 = (int ***)(*(code *)(&local_f8)[bVar1])((int)(short)iVar4);
LAB_0061f2b4:
    if (pppiVar5 == (int ***)0x0) goto LAB_0061f524;
    goto LAB_0061f2bc;
  }
  iVar3 = fn_0061be08(param_3);
  local_f8 = (int ***)&LAB_006917d4;
  local_f4 = (int ****)&LAB_00691840;
  local_f0 = &LAB_00691794;
  local_ec = (int ***)&LAB_006917b4;
  puStack_e8 = &LAB_006916c4;
  puStack_e4 = &LAB_006916a4;
  local_e0 = &LAB_00691820;
  local_dc = &LAB_00691774;
  iVar4 = fn_00145adc(param_4 + 0x3a);
  if (iVar4 == 0) {
    iVar3 = fn_00692304(0x29e);
  }
  else if (iVar3 == 0) {
    iVar3 = fn_0069242c(0x29e);
  }
  else {
    iVar3 = fn_00692410();
  }
  iVar4 = 0;
  do {
    if (iVar4 == iVar3) {
      pppiVar5 = (int ***)(*(code *)(&local_f8)[*(byte *)(param_5 + 0xd)])((int)(short)iVar4);
      goto LAB_0061f2b4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  pppiVar5 = (int ***)0x64;
LAB_0061f2bc:
  iVar3 = fn_00163c80(param_1);
  ppppiVar9 = param_4 + param_3 * 0x106 + -0x1020;
  if ((iVar3 != 1) && (iVar3 = fn_00163c80(param_1), iVar3 != 4)) {
    iVar3 = fn_00692050(param_1);
    if (iVar3 != 0) {
      local_f0 = auStack_d8;
      local_ec = (int ***)&DAT_007f0224;
      local_f4 = param_4;
      uVar6 = fn_0061be08(param_2);
      local_f8 = (int ***)&DAT_007f02b4;
      local_100 = local_ec;
      puStack_fc = &DAT_007f026c;
      ppppiVar8 = local_f4;
      fn_006398fc(local_f0,uVar6,(int)*(char *)(param_4 + param_2 * 0x106 + -0x1009));
      pppiVar5 = (int ***)((int)pppiVar5 + local_d4);
    }
    if (*(char *)(param_5 + 2) == '\0') {
      iVar3 = fn_00692050(param_1);
      cVar2 = '\0';
      if (iVar3 != 0) {
        cVar2 = *(char *)(param_4 + param_2 * 0x106 + -0x1009);
      }
      if ((iVar3 != 0 && cVar2 != '\0') && -1 < cVar2) {
        fn_00301a9c(&local_100,(undefined1 *)((int)param_4 + param_3 * 0x418 + -0x4025),0xc2);
        iVar3 = fn_006f30a8(ppppiVar9);
        if ((((((iVar3 != 0) || ('\0' < (char)local_e0)) &&
              (iVar3 = fn_006921f4(param_1), iVar3 != 0)) ||
             (((iVar3 = fn_006f31f4(ppppiVar9), iVar3 != 0 || ('\0' < ((unsigned int)(local_e0) >> 8) & 0xff)) &&
              (iVar3 = fn_006923ac(param_1), iVar3 != 0)))) ||
            (((iVar3 = fn_006f34b4(ppppiVar9), iVar3 != 0 || ('\0' < ((unsigned int)(local_e0) >> 16) & 0xff)) &&
             (iVar3 = fn_00692158(param_1), iVar3 != 0)))) ||
           ((((iVar3 = fn_006f34d4(ppppiVar9), iVar3 != 0 || ('\0' < (char)local_dc)) &&
             (iVar3 = fn_00692474(param_1), iVar3 != 0)) ||
            (((iVar3 = fn_006f3500(ppppiVar9), iVar3 != 0 || ('\0' < ((unsigned int)(local_e0) >> 24) & 0xff)) &&
             (iVar3 = fn_006924a0(param_1), iVar3 != 0)))))) {
          pppiVar5 = (int ***)((int)pppiVar5 / 2);
        }
      }
    }
  }
  if (0x62 < (int)pppiVar5 - 1U) goto LAB_0061f524;
  cVar2 = *(char *)((int)param_4 + param_2 * 0x418 + -0x3fe6);
  if (cVar2 < '\x01') {
    cVar2 = *(char *)((int)param_4 + param_2 * 0x418 + -0x3fe5);
  }
  if (cVar2 < '\x01') {
    cVar2 = *(char *)(param_4 + param_2 * 0x106 + -0xff9);
    if (cVar2 < '\x01') {
      cVar2 = *(char *)((int)param_4 + param_3 * 0x418 + -0x3fe6);
    }
    if (cVar2 < '\x01') {
      cVar2 = *(char *)((int)param_4 + param_3 * 0x418 + -0x3fe5);
    }
    if ('\0' < cVar2) {
      pppiVar5 = (int ***)0x0;
      goto LAB_0061f524;
    }
    if (*(char *)(param_4 + param_3 * 0x106 + -0xff9) < '\x01') goto LAB_0061f524;
  }
  pppiVar5 = (int ***)0x64;
LAB_0061f524:
  local_f8 = (int ***)0x0;
  if (local_38 == 0x3c) {
    pppiVar5 = (int ***)0x64;
  }
  local_f4 = (int ****)0x64;
  local_100 = pppiVar5;
  if ((int)pppiVar5 < 0) {
    ppppiVar8 = &local_f8;
  }
  if (pppiVar5 < (int ***)0x80000000) {
    ppppiVar8 = &local_100;
  }
  if ((int)*ppppiVar8 < 0x65) {
    if ((int)pppiVar5 < 0) {
      ppppiVar7 = &local_f8;
    }
  }
  else {
    ppppiVar7 = (int ****)&local_f4;
  }
  pppiVar5 = *ppppiVar7;
  param_6[1] = 100;
  *param_6 = pppiVar5;
  return;
LAB_0061f384:
  iVar4 = iVar4 + 1;
  if (0xf < iVar4) goto code_r0x0061f390;
  goto LAB_0061f298;
code_r0x0061f390:
  pppiVar5 = (int ***)0x64;
  goto LAB_0061f2bc;
}



void fn_0061ed58(int param_1,char *param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7,int param_8)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int local_14f0 [4];
  int local_14e0;
  undefined1 auStack_14d8 [1048];
  undefined1 auStack_10c0 [1048];
  undefined1 auStack_ca8 [1048];
  undefined1 auStack_890 [1048];
  undefined1 auStack_478 [1088];
  int iStack_38;
  char *pcStack_34;
  int iStack_30;
  int local_2c;
  
  iVar4 = 0;
  iVar5 = 0;
  if (param_7 == 0) {
    iVar4 = 2;
  }
  iVar6 = iVar4 + param_3;
  local_2c = param_4;
  iStack_30 = param_3;
  pcStack_34 = param_2;
  iStack_38 = param_1;
  for (; iVar4 < iVar6; iVar4 = iVar4 + 1) {
    iVar7 = param_8 + (char)iVar4 * 0x418;
    fn_0017821c(iVar7 + 0x184628,param_1 + param_2[iVar5] * 0x418 + -0x4080,0x418);
    *(undefined1 *)(iVar7 + 0x1846d1) = 0;
    *(undefined1 *)(iVar7 + 0x1846d2) = 0;
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  }
  fn_00301f50(auStack_14d8,0x1060);
  cVar2 = (char)param_6;
  iVar5 = param_8 + 0x180388;
  local_14f0[0] = iVar5 + param_6 * 0x418 + -0x4080;
  local_14f0[2] = iVar5 + (char)(cVar2 + '\x02') * 0x418 + -0x4080;
  local_14f0[1] = iVar5 + (char)(cVar2 + '\x01') * 0x418 + -0x4080;
  local_14f0[3] = iVar5 + (char)(cVar2 + '\x03') * 0x418 + -0x4080;
  iVar4 = 0;
  iVar6 = param_6 + 4;
  local_14e0 = 0;
  do {
    cVar2 = *param_2;
    if (cVar2 == param_6) {
      fn_00301f50(auStack_478,0x418);
      fn_0061a8fc(param_1 + cVar2 * 0x418 + -0x4080,param_1 + param_2[1] * 0x418 + -0x4080,
                   auStack_478);
      fn_0061a80c(auStack_478,param_1 + *param_2 * 0x418 + -0x4080);
      fn_0061a0a0(auStack_478,param_8);
      fn_0017821c(auStack_14d8 + iVar4 * 0x418,auStack_478,0x418);
      local_14e0 = iVar4;
LAB_0061ef68:
      iVar4 = (int)(char)((char)iVar4 + '\x01');
    }
    else if (param_2[1] != param_6) {
      fn_0017821c(auStack_14d8 + iVar4 * 0x418,iVar5 + (char)param_6 * 0x418 + -0x4080,0x418);
      goto LAB_0061ef68;
    }
    param_6 = param_6 + 1;
    if (iVar6 <= param_6) {
      fn_0017821c(local_14f0[0],auStack_14d8,0x418);
      fn_0017821c(local_14f0[1],auStack_10c0,0x418);
      fn_0017821c(local_14f0[2],auStack_ca8,0x418);
      fn_0017821c(local_14f0[3],auStack_890,0x418);
      if (param_7 != 0) {
        *(char *)(param_8 + 0x185eed) = *param_2;
      }
      else {
        *(char *)(param_8 + 0x185eef) = *param_2;
      }
      if (param_7 != 0) {
        *(char *)(param_8 + 0x185eee) = param_2[1];
      }
      else {
        *(char *)(param_8 + 0x185ef0) = param_2[1];
      }
      fn_0062c2ec(param_2,2,(int)*(char *)(local_14f0[local_14e0] + 0x59),local_2c,param_5,iVar5);
      if (param_7 == 0) {
        cVar2 = '\x14';
      }
      else {
        cVar2 = '\x10';
      }
      fn_0017821c(param_8 + (param_7 ^ 1) * 0x418 + 0x185688,
                   iVar5 + (char)((char)local_14e0 + cVar2) * 0x418 + -0x4080,0x418);
      cVar3 = '\0';
      iVar4 = iVar5 + local_2c * 8;
      iVar5 = iVar5 + param_5 * 8;
      cVar2 = *(char *)(iVar4 + 0x4182);
      iVar6 = (int)cVar2;
      cVar1 = *(char *)(iVar5 + 0x4182);
      iVar7 = (int)cVar1;
      if (iVar6 != 0) {
        cVar3 = *(char *)(param_8 + iVar6 * 0x418 + 0x17c71c);
      }
      cVar8 = '\0';
      if (iVar7 != 0) {
        cVar8 = *(char *)(param_8 + iVar7 * 0x418 + 0x17c71c);
      }
      if ((cVar3 == '\0') && (param_2[1] < iVar6)) {
        *(char *)(iVar4 + 0x4182) = cVar2 + -1;
      }
      if ((cVar8 == '\0') && (param_2[1] < iVar7)) {
        *(char *)(iVar5 + 0x4182) = cVar1 + -1;
      }
      return;
    }
  } while( true );
}


