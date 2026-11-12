#include "0051ced4_0051e110.h"



undefined4 * fn_0051e110(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_1 = &DAT_00857348;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = fn_0050cec4(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  puVar2 = (undefined4 *)fn_004effa4(iVar1 + 0x30);
  *puVar2 = &DAT_00857330;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = &DAT_e0a14827;
  fn_0050b414();
  fn_0051893c();
  fn_0051b984();
  fn_00519720();
  fn_00519124();
  fn_0050ff18();
  fn_0051c3e8();
  fn_005130e0();
  iVar1 = fn_004ecfe0(0x38);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_0050af98();
  }
  puVar2[0xf] = uVar3;
  fn_0050bbc4();
  return puVar2 + -0x10;
}



void fn_0051e00c(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  if (DAT_008c0670 - 0x100000U < 0x3ff00000) {
    fn_0050bd10();
  }
  if (*(int *)(param_1 + 0x7c) - 0x100000U < 0x3ff00000) {
    fn_0050af00();
  }
  if (DAT_008c06a8 - 0x100000U < 0x3ff00000) {
    fn_00513b80();
  }
  if (*(int *)(param_1 + 0x2c) - 0x100000U < 0x3ff00000) {
    fn_005097d4();
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))();
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  fn_00514dc4();
  fn_00518c28(DAT_008c06a4);
  fn_0050ce68(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 + -0x40000 < (int *)0x3ff00000) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  fn_0050b8c8(DAT_008bf4cc);
  fn_005106a8(DAT_008c0678);
  iVar2 = DAT_008c0638;
  cVar1 = *(char *)(DAT_008c0638 + 0x908);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      fn_004f0010(DAT_008c0638 + 4,0,0,0,unaff_r4,unaff_r5,unaff_r6,in_lr);
      fn_004f0010(iVar2 + 0xe0,0,0);
      *(undefined4 *)(iVar2 + 0x1bc) = 0;
      fn_004ef2b0(DAT_008c0634,0);
    }
    *(undefined1 *)(iVar2 + 0x908) = 0;
    *(undefined1 *)(iVar2 + 0x909) = 0;
  }
  return;
}



longlong fn_0051ddb4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  
  local_7a8 = 0;
  uStack_7a4 = 0;
  fn_004f01f4(&local_7a8);
  *(undefined4 *)(param_1 + 8) = local_7a8;
  *(undefined4 *)(param_1 + 0xc) = uStack_7a4;
  uVar4 = DAT_008bf4d0 - 0x100000;
  if (0x3fefffff < uVar4) {
    if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
    return CONCAT44(uVar4,&DAT_e0a14827);
  }
  uVar4 = fn_006db1a0(*(undefined4 *)(DAT_008bf4d0 + 0x10));
  uVar5 = uVar4 & 0x80000000;
  if (-1 < (int)uVar5) {
    uVar4 = fn_006db1a0(*(undefined4 *)(DAT_008bf4d0 + 0xc));
    uVar5 = uVar4 & 0x80000000;
    if (-1 < (int)uVar5) {
      fn_00515ea8(*(undefined4 *)(param_1 + 0x2c),param_1 + 8);
      iVar2 = fn_0050cdf0(param_1 + 0x10);
      if ((iVar2 < 0) || (iVar2 = fn_00519980(DAT_008c0690), iVar2 < 0)) {
        fn_00509dbc(*(undefined4 *)(param_1 + 0x2c),param_1 + 8);
        return CONCAT44(extraout_r1,iVar2);
      }
      fn_00509dbc(*(undefined4 *)(param_1 + 0x2c),param_1 + 8);
      iVar1 = DAT_008c06a8;
      bVar7 = *(char *)(param_1 + 0x34) != '\0';
      iVar2 = 0;
      if (bVar7) {
        iVar2 = *(int *)(param_1 + 0x68);
      }
      uVar4 = extraout_r1_00;
      if ((bVar7 && iVar2 != 0) && (DAT_008c06a8 - 0x100000U < 0x3ff00000)) {
        uVar4 = *(uint *)(param_1 + 0x70);
        iVar2 = *(int *)(param_1 + 0x74);
        uVar5 = *(uint *)(param_1 + 8);
        iVar6 = *(int *)(param_1 + 0xc);
        puVar3 = (undefined4 *)fn_004f0c48();
        iVar2 = fn_0011c134(uVar5 - uVar4,iVar6 - (iVar2 + (uint)(uVar5 < uVar4)),*puVar3,puVar3[1]
                            );
        uVar4 = *(uint *)(param_1 + 0x68);
        if ((int)uVar4 <= iVar2) {
          uVar8 = fn_00513618(iVar1);
          uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
          if ((int)uVar8 < 0) {
            if (DAT_008c0630 != 0) {
              uVar4 = 8;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xc);
            fn_0017821c(&local_7a8,iVar1 + 8,0x790);
            fn_006db1b8(&local_7a8,0);
            uVar4 = extraout_r1_01;
          }
        }
      }
      return (ulonglong)uVar4 << 0x20;
    }
  }
  *(uint *)(param_1 + 0x38) = uVar4;
  return (ulonglong)uVar5 << 0x20;
}



undefined1 * fn_0051dcdc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = fn_00509460();
  iVar1 = DAT_008bf4d0;
  uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
  bVar4 = (int)uVar5 == 0;
  if (bVar4) {
    uVar3 = (uint)*(byte *)(param_1 + 0x34);
  }
  puVar2 = &DAT_e0a14827;
  if (bVar4 && uVar3 == 0) {
    fn_00514f3c(DAT_008bf4d0);
    fn_00516930(*(undefined4 *)(param_1 + 0x2c),*(int *)(iVar1 + 0x10) + 0xc,
                 *(int *)(iVar1 + 0xc) + 0x1c,*(undefined4 *)(param_1 + 100),param_2,param_3);
    fn_0050cd64(param_1 + 0x10,*(undefined4 *)(param_1 + 0x2c));
    fn_0051995c(DAT_008c0690,*(undefined4 *)(param_1 + 0x2c));
    fn_00513994(DAT_008c06a8);
    fn_0050bcd0(DAT_008c0670);
    fn_004efcf4(param_1 + 0x40,0);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xc);
    puVar2 = (undefined1 *)0x0;
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return puVar2;
}



void fn_0051dc1c(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    (**(code **)(*(int *)(param_1 + 0x40) + 8))(param_1 + 0x40,0);
    if (DAT_008c0670 - 0x100000U < 0x3ff00000) {
      fn_0050bcc4();
    }
    if (DAT_008c06a8 - 0x100000U < 0x3ff00000) {
      fn_005138e4();
    }
    if (DAT_008c0690 - 0x100000U < 0x3ff00000) {
      fn_00519948();
    }
    fn_0050cd0c(param_1 + 0x10);
    if (*(int *)(param_1 + 0x2c) - 0x100000U < 0x3ff00000) {
      fn_00509488();
    }
    if (DAT_008bf4d0 - 0x100000U < 0x3ff00000) {
      fn_00514f00();
      return;
    }
  }
  return;
}



void fn_0051da28(void)

{
  if ((DAT_008bf4d0 - 0x100000U < 0x3ff00000) && (*(int **)(DAT_008bf4d0 + 8) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0051da54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(DAT_008bf4d0 + 8) + 8))();
    return;
  }
  return;
}



undefined4 fn_0051d9f0(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  if ((int)param_2 < 0) {
    puVar2 = &DAT_e0a14827;
  }
  if (((int)param_2 < 0 && param_2 != puVar2) && (param_2 != (undefined1 *)0xd0a14830)) {
    uVar1 = 0xe0e14826;
  }
  else {
    *(undefined1 **)(param_1 + 0x84) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0051d9c8(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf4d0 - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined4 *)(DAT_008bf4d0 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0051d8bc(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf4d0 - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined4 *)(DAT_008bf4d0 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0051cf84(undefined4 *param_1)

{
  *param_1 = &DAT_00857304;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = DAT_008c067c;
  return;
}



void fn_0051cf38(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  param_1[3] = iVar1 << 0x10 | param_2;
  return;
}



void fn_0051ced4(void)

{
  if (DAT_008bf4c8 != '\0') {
    if (DAT_008bf4c9 != '\0') {
      fn_0051cd8c();
    }
    if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
      fn_0051d8e4();
    }
    fn_004ed284(4);
    DAT_008bf4c8 = '\0';
  }
  return;
}


