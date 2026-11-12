#include "001d524c_001d59fc.h"



undefined4 fn_001d59fc(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < DAT_00892508) {
    do {
      psVar2 = (short *)(DAT_00892504 + iVar1 * 0xc);
      if (*psVar2 == param_1) {
        iVar3 = *(int *)(psVar2 + 4);
        if (*psVar2 == param_1) {
          iVar3 = (int)(char)iVar3;
        }
        if (*psVar2 == param_1 && iVar3 == param_2) {
          return 1;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00892508);
  }
  return 0;
}



void fn_001d59d4(void)

{
  fn_0012d73c(DAT_00892500);
  DAT_00892504 = 0;
  DAT_00892500 = 0;
  DAT_00892508 = 0;
  return;
}



void fn_001d59c0(void)

{
  fn_00411ad8();
  fn_006667e4();
  fn_0012d73c(DAT_00892500);
  DAT_00892504 = 0;
  DAT_00892500 = 0;
  DAT_00892508 = 0;
  return;
}



undefined4 fn_001d58ac(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (DAT_00892504 == 0) {
    DAT_00892500 = fn_0011c1b4(L"rom:/data/Parameter/ExchangeItemTbl.tp",0,0,0,0,0,0,0,5);
    iVar1 = fn_00145ac0();
    uVar6 = fn_0012a26c(DAT_00892500);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (((iVar1 == 0) || (iVar4 < (int)(uint)(uVar2 == 0))) ||
       (iVar3 = fn_00147e6c(iVar1,&DAT_001d59b8,4), iVar3 != 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 4;
    }
    iVar3 = 0xc;
    iVar5 = 0;
    fn_0011c134(uVar2 - 4,iVar4 - (uint)(uVar2 < 4));
    if (iVar3 != 0 || iVar5 != 0) {
      iVar1 = 0;
    }
    DAT_00892504 = iVar1;
    uVar6 = fn_0012a26c(DAT_00892500);
    iVar1 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if ((int)-(iVar1 + (uint)(4 < uVar2)) < 0 ==
        (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(4 < uVar2)))) {
      DAT_00892508 = 0;
    }
    else {
      DAT_00892508 = fn_0011c134(uVar2 - 4,iVar1 - (uint)(uVar2 < 4),0xc,0);
    }
    if (DAT_00892508 < 1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_001d5844(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_00892508) {
    do {
      psVar1 = (short *)(DAT_00892504 + iVar2 * 0xc);
      if ((*psVar1 == param_1) && ((char)psVar1[4] == param_2)) {
        return *(undefined4 *)(psVar1 + 2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00892508);
  }
  return 0xffffffff;
}



int * fn_001d524c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *param_1 = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  *(int *)(param_1[1] + 4) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&LAB_001d55e4);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&LAB_001d55e4);
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&LAB_001d55e4);
  }
  piVar4 = (int *)param_1[4];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&LAB_001d55e4);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[6];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[7];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002fb4c4(iVar1,0);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = *param_1;
  *(int *)(param_1[8] + 0x14) = param_1[1];
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002fb59c(iVar1,param_1[8]);
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar2;
  }
  iVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_1[1] + 0x3c);
  uVar3 = fn_00129004();
  fn_002419f4(uVar3,iVar1,uVar5);
  iVar1 = param_1[2];
  iVar6 = param_1[3];
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,iVar1,iVar6);
  iVar1 = param_1[4];
  iVar6 = param_1[5];
  uVar3 = fn_00129004();
  fn_00241948(uVar3,iVar1,iVar6);
  return param_1;
}


