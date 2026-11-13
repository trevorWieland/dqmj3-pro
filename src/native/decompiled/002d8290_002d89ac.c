#include "002d8290_002d89ac.h"



void fn_002d89ac(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  iVar1 = (int)((longlong)(param_1[2] - param_1[1]) * -0x6db6db6d +
                ((ulonglong)(uint)(param_1[2] - param_1[1]) << 0x20) >> 0x20);
  iVar1 = (iVar1 >> 5) - (iVar1 >> 0x1f);
  if (0 < iVar1) {
    do {
      iVar6 = param_1[1] + iVar7 * 0x38;
      uVar2 = *(uint *)(iVar6 + 8);
      if (((uVar2 & 0x10) == 0 && (uVar2 & 2) == 0) && ((uVar2 & 1) == 0)) {
        if ((uVar2 & 4) == 0) {
          iVar3 = *(int *)(iVar6 + 0xc);
          bVar8 = iVar3 == 0;
          if (bVar8) {
            iVar3 = *(int *)(iVar6 + 0x14);
          }
          if (!bVar8 || iVar3 != -1) {
            iVar3 = (**(code **)(*param_1 + 0x4c))(param_1);
            if (iVar3 == 0) {
              if (*(int *)(iVar6 + 0x14) != -1) {
                uVar5 = fn_006f7a70(DAT_008977e0);
                fn_002ff2a4(uVar5,*(undefined4 *)(iVar6 + 0x14));
              }
              *(undefined4 *)(iVar6 + 0x14) = 0xffffffff;
              *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 4;
            }
            goto LAB_002d8b88;
          }
        }
        iVar3 = (**(code **)(*param_1 + 0x4c))(param_1);
        if (iVar3 != 0) {
          uVar2 = *(uint *)(iVar6 + 8);
          *(uint *)(iVar6 + 8) = uVar2 & 0xfffffffb;
          if ((((uVar2 & 1) == 0 && (uVar2 & 0x10) == 0) && ((uVar2 & 2) == 0)) &&
             ((char)param_1[0x1c] != '\0')) {
            iVar3 = fn_00145b00(0x184,&DAT_00812c8c);
            piVar4 = (int *)0x0;
            if (iVar3 != 0) {
              piVar4 = (int *)fn_001c5034(iVar3,iVar6);
            }
            uVar5 = fn_006f7a70(DAT_008977e0);
            uVar5 = fn_003023b0(uVar5,piVar4,0x7549);
            *(undefined4 *)(iVar6 + 0x14) = uVar5;
            *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xffffffdf;
            (**(code **)(*piVar4 + 0x10))(piVar4,iVar6 + 0x2c);
          }
        }
      }
      else if (*(int *)(iVar6 + 0x14) != -1) {
        uVar5 = fn_006f7a70(DAT_008977e0);
        fn_002ff2a4(uVar5,*(undefined4 *)(iVar6 + 0x14));
        *(undefined4 *)(iVar6 + 0x14) = 0xffffffff;
        if (*(int *)(iVar6 + 0x28) != -1) {
          uVar5 = fn_006f72b4(DAT_008977e0);
          fn_0021f144(uVar5,*(undefined4 *)(iVar6 + 0x28));
          *(undefined4 *)(iVar6 + 0x28) = 0xffffffff;
        }
      }
LAB_002d8b88:
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}



void fn_002d8890(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if (iVar3 >> 5 != iVar3 >> 0x1f) {
    while (*(int *)(*(int *)(param_1 + 4) + uVar1 * 0x38) != param_2) {
      uVar1 = uVar1 + 1;
      iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
      if ((uint)((iVar3 >> 5) - (iVar3 >> 0x1f)) <= uVar1) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 4) + uVar1 * 0x38;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 8;
  }
  return;
}



undefined4 fn_002d8870(int param_1)

{
  if (*(int *)(param_1 + 0x2c) == -1) {
    fn_002d9528(param_1);
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



void fn_002d8628(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar1 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar1,0xffffffff);
    uVar1 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar1,0,0,1,0);
    iVar2 = fn_002dbca0();
    if (iVar2 == 0) {
      iVar2 = fn_002dbc64();
      if (iVar2 == 0) {
        iVar2 = fn_002dbdb4();
        if (iVar2 == 0) {
          iVar2 = fn_002dbd0c();
          if (iVar2 == 0) {
            iVar2 = fn_002dbc28();
            if (iVar2 == 0) {
              iVar2 = fn_002dbe28();
              if (iVar2 != 0) {
                uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),
                                     (char *)&DAT_002d8858);
                fn_0038fee8(uVar1,uVar3);
              }
            }
            else {
              uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),
                                   (char *)&DAT_002d8840);
              fn_0038fee8(uVar1,uVar3);
            }
          }
          else {
            uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),
                                 (char *)&DAT_002d8828);
            fn_0038fee8(uVar1,uVar3);
          }
        }
        else {
          uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),
                               (char *)&DAT_002d880c);
          fn_0038fee8(uVar1,uVar3);
        }
      }
      else {
        uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d87f4);
        fn_0038fee8(uVar1,uVar3);
      }
    }
    else {
      uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d87dc);
      fn_0038fee8(uVar1,uVar3);
    }
    *(undefined4 *)(param_1 + 0x18) = 2;
  }
  return;
}



undefined4 fn_002d8524(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [80];
  undefined1 auStack_18 [8];
  
  uVar3 = fn_00121838(DAT_00897800,L"rom:/data/Message/CrackMessage.mes",1);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  fn_002dabec(param_1);
  fn_002db330(param_1);
  fn_002d9cac(param_1);
  fn_0017821c(auStack_68,L"rom:/data/Field/Table/shine_land.nut",0x4c);
  fn_00128f40(auStack_18);
  uVar3 = fn_00118290();
  iVar4 = fn_0011c184(auStack_68,uVar3,4,5);
  if (iVar4 != 0) {
    fn_00145ac0();
  }
  uVar3 = fn_0012a26c(iVar4);
  uVar5 = fn_00145ac0(iVar4);
  fn_00128ee0(auStack_18,uVar5,uVar3);
  fn_0012d73c(iVar4);
  uVar3 = fn_005f6e38(auStack_18,(char *)&DAT_002da298);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  do {
    uVar2 = fn_00128e7c(auStack_18,(char *)&DAT_002da2a8,iVar4);
    iVar1 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(param_1 + iVar1 + 0x80) = uVar2;
  } while (iVar4 < 4);
  fn_00128fc4(auStack_18);
  return 1;
}



void fn_002d8438(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_0025fa58(DAT_00897800);
  }
  DAT_008911fc = 0;
  DAT_00891200 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



bool fn_002d8400(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == -1) {
    return false;
  }
  iVar1 = fn_002d84c0(param_1,param_3);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
    uVar3 = *(undefined4 *)(iVar1 + 0x34);
    *param_2 = *(undefined4 *)(iVar1 + 0x2c);
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  return iVar1 != 0;
}



int fn_002d84c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  if (0 < iVar3) {
    param_1 = *(int *)(param_1 + 4);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      if (*(int *)(param_1 + iVar1 * 0x38) == param_2) {
        return param_1 + iVar1 * 0x38;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}



undefined4 fn_002d8370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  while (param_1 == -1) {
    param_1 = *(int *)(DAT_008977e0 + 0xa8);
  }
  uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1,
                       *(undefined4 *)(DAT_008977e0 + 0x1c),param_4,unaff_r4,in_lr);
  iVar2 = fn_001030bc(uVar1,(char *)&DAT_002d8358);
  if (((iVar2 == 0) && (iVar2 = fn_003035b0(uVar1,(char *)&DAT_002d8360), iVar2 != 0)) &&
     (iVar2 = fn_003035b0(uVar1,(char *)&DAT_002d8368), iVar2 != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_002d830c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001030bc(param_1,(char *)&DAT_002d8358);
  if (((iVar1 == 0) && (iVar1 = fn_003035b0(param_1,(char *)&DAT_002d8360), iVar1 != 0)) &&
     (iVar1 = fn_003035b0(param_1,(char *)&DAT_002d8368), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_002d8290(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) && (iVar1 = fn_002fb61c(), iVar1 == 0)) {
    uVar3 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    uVar2 = fn_006f7a0c();
    iVar1 = fn_006f6434(uVar2,uVar3);
    if (iVar1 != 2) {
      (**(code **)(*param_1 + 0x3c))(param_1);
      fn_002da538(param_1,0);
      return 1;
    }
  }
  return 1;
}


