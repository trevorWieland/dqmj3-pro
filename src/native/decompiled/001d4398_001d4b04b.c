#include "001d4398_001d4b04b.h"



void fn_001d4b04(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &DAT_0081be30;
  piVar1 = (int *)param_1[0x8fd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  param_1[0x8fd] = 0;
  param_1[0x6b6] = &DAT_008517a0;
  iVar2 = fn_00120ec8(param_1 + 0x8e9);
  fn_002feef8(iVar2 + -0x23a4);
  return;
}



void fn_001d49d4(int param_1,int param_2,int param_3,code *param_4,code *param_5,uint param_6)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char local_54 [12];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [16];
  int iStack_34;
  int iStack_30;
  int local_2c;
  code *pcStack_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  pcStack_28 = param_4;
  iVar1 = fn_00174828(DAT_008977e4);
  iVar5 = 0;
  if (0 < local_2c) {
    piVar6 = (int *)(iVar1 + ((int)param_6 >> 1));
    do {
      fn_0020bbc4(auStack_48,param_2 + iVar5 * 0xf0);
      fn_006bfda8(auStack_44);
      iVar1 = fn_001a46f4();
      if (iVar1 != 0) {
        local_54[0] = (*param_4)();
        local_54[0] = local_54[0] + (char)iVar5;
        pcVar2 = param_5;
        if ((param_6 & 1) != 0) {
          pcVar2 = *(code **)(param_5 + *piVar6);
        }
        uVar3 = (*pcVar2)(piVar6);
        switch(*(undefined1 *)(param_1 + 4)) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
          uVar4 = 1;
          break;
        default:
          uVar4 = 0;
        }
        fn_003585b4(auStack_48,uVar3,uVar4);
        uVar3 = fn_00182988(DAT_008977e4);
        uVar3 = fn_0026a548(uVar3,local_54);
        fn_001d0628(param_1,auStack_48,uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_2c);
  }
  return;
}



void fn_001d48f0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = fn_00174828(DAT_008977e4);
  if (param_4 == 0) {
    if (param_3 == 0) {
      iVar3 = 0x23;
    }
    else {
      iVar3 = 0x22;
    }
  }
  else if (param_3 == 0) {
    iVar3 = 0x21;
  }
  else {
    iVar3 = 0x20;
  }
  if (param_2 - 0x10U < 8) {
    iVar4 = iVar2 + param_2 * 0x418;
    psVar5 = (short *)(iVar4 + -0x4080);
    if (0 < *psVar5) {
      cVar1 = *(char *)(iVar4 + -0x4019);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(iVar4 + -0x400a);
      }
      bVar7 = bVar6 && cVar1 == '\0';
      if (bVar6 && cVar1 == '\0') {
        bVar7 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar7) {
        if (param_4 == 0) {
          iVar4 = fn_001c2ef4(param_3);
          if (iVar4 == 0) {
            return;
          }
          fn_00174398(psVar5,1);
        }
        else {
          fn_0017419c(psVar5,1);
        }
        *(char *)(iVar2 + iVar3 * 8 + 0x4182) = (char)param_2;
      }
    }
  }
  return;
}



void fn_001d47e8(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  iVar4 = fn_00174828(DAT_008977e4);
  uVar9 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  uVar3 = fn_001cad10();
  *(undefined2 *)(iVar4 + 0x4290) = uVar3;
  iVar5 = fn_006b83e4(uVar9);
  iVar8 = 0;
  if (0 < iVar5) {
    do {
      iVar6 = fn_00144df4(uVar9,iVar8);
      iVar7 = fn_006b8600(uVar9);
      if (iVar6 == iVar7) {
        cVar1 = (char)iVar8 + '\x10';
        if (((int)cVar1 - 0x10U < 8) && (iVar6 = fn_001c2ef4(1), iVar6 != 0)) {
          iVar6 = iVar4 + cVar1 * 0x418;
          if (0 < *(short *)(iVar6 + -0x4080)) {
            cVar2 = *(char *)(iVar6 + -0x4019);
            bVar10 = cVar2 == '\0';
            if (bVar10) {
              cVar2 = *(char *)(iVar6 + -0x400a);
            }
            bVar11 = bVar10 && cVar2 == '\0';
            if (bVar10 && cVar2 == '\0') {
              bVar11 = *(char *)(iVar6 + -0x4018) == '\0';
            }
            if (bVar11) {
              fn_00174398((short *)(iVar6 + -0x4080),1);
              *(char *)(iVar4 + 0x4292) = cVar1;
              return;
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  return;
}



void fn_001d4680(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char local_400 [4];
  undefined4 local_3fc;
  undefined1 auStack_3f8 [960];
  undefined4 local_38;
  undefined1 auStack_30 [8];
  int local_28;
  
  local_28 = param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  local_38 = *(undefined4 *)(local_28 + 0x23e0);
  local_3fc = *(undefined4 *)(local_28 + 0x23e4);
  iVar3 = fn_00317438(auStack_3f8,4,local_38,local_3fc);
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      local_400[0] = (char)iVar7 + '\x14';
      fn_0020bbc4(auStack_30,auStack_3f8 + iVar7 * 0xf0);
      iVar4 = iVar2 + local_400[0] * 0x418;
      iVar6 = iVar4 + -0x4080;
      fn_003585b4(auStack_30,iVar6,1);
      if (*(short *)(iVar4 + -0x405e) == 10000) {
        fn_00654cc4(iVar4 + -0x3c7a,4,1);
        *(undefined2 *)(iVar4 + -0x405e) = 9999;
        uVar1 = fn_00176dc0(iVar6);
        *(undefined2 *)(iVar4 + -0x4064) = uVar1;
        uVar1 = fn_00176e70(iVar6);
        *(undefined2 *)(iVar4 + -0x4062) = uVar1;
        *(undefined4 *)(iVar4 + -0x4054) = *(undefined4 *)(iVar4 + -0x4060);
        *(undefined4 *)(iVar4 + -0x4050) = *(undefined4 *)(iVar4 + -0x405c);
        *(undefined4 *)(iVar4 + -0x404c) = *(undefined4 *)(iVar4 + -0x4058);
      }
      uVar5 = fn_00182988(DAT_008977e4);
      uVar5 = fn_0026a548(uVar5,local_400);
      fn_001d0628(local_28,auStack_30,uVar5);
      fn_00317234(uVar5,local_38,local_3fc,iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  fn_001d2900(local_28);
  fn_001d22ac(local_28);
  return;
}


