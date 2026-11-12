#include "002df314_002df704.h"



uint fn_002df704(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_28 [16];
  
  uVar5 = 1;
  uVar1 = fn_006f7a9c(DAT_008977e0);
  uVar4 = 0;
  while( true ) {
    if (((uint)((*(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198)) / 0xc) <= uVar4) ||
       (uVar5 == 0)) break;
    fn_001c6c38(auStack_28,*(int *)(param_1 + 0x198) + uVar4 * 0xc);
    iVar2 = fn_006a7f8c(auStack_28);
    if (iVar2 != 0) {
      uVar3 = fn_00279b34(uVar1,auStack_28);
      uVar5 = uVar5 & uVar3;
    }
    uVar4 = uVar4 + 1;
  }
  return uVar5;
}



void fn_002df6f8(int param_1,uint param_2)

{
  if (param_2 < 2) {
    *(uint *)(param_1 + 0xf0) = param_2;
  }
  return;
}



void fn_002df5c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_20 [12];
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198);
  iVar3 = iVar2 >> 0x1f;
  if (iVar2 / 0xc + iVar3 != iVar3) {
    do {
      fn_001c6c38(auStack_20,*(int *)(param_1 + 0x198) + uVar6 * 0xc);
      iVar3 = fn_006a7f8c(auStack_20);
      if (iVar3 != 0) {
        fn_002782b4(uVar1,auStack_20);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198)) / 0xc));
  }
  uVar6 = *(uint *)(param_1 + 0x1a8);
  uVar5 = *(uint *)(param_1 + 0x1a4);
  if (uVar5 != uVar6) {
    uVar4 = uVar5;
    if (uVar6 <= uVar5) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar6);
    }
    *(uint *)(param_1 + 0x1a8) = uVar6 - (uVar6 - uVar5 & 0xfffffffe);
  }
  uVar5 = *(uint *)(param_1 + 0x198);
  uVar6 = *(uint *)(param_1 + 0x19c);
  if (uVar5 != uVar6) {
    uVar4 = uVar5;
    if (uVar6 <= uVar5) {
      do {
        uVar4 = uVar4 + 0xc;
      } while (uVar4 != uVar6);
    }
    *(uint *)(param_1 + 0x19c) = uVar6 + ((int)(uVar6 - uVar5) / 0xc) * -0xc;
  }
  return;
}



void fn_002df580(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_20 [16];
  
  iVar6 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar6 * 4 + 0x140);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x13c))();
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  uVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198);
  iVar6 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar6 != iVar6) {
    do {
      fn_001c6c38(auStack_20,*(int *)(param_1 + 0x198) + uVar7 * 0xc);
      iVar6 = fn_006a7f8c(auStack_20);
      if (iVar6 != 0) {
        fn_002782b4(uVar2,auStack_20);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((*(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198)) / 0xc));
  }
  uVar7 = *(uint *)(param_1 + 0x1a8);
  uVar5 = *(uint *)(param_1 + 0x1a4);
  if (uVar5 != uVar7) {
    uVar4 = uVar5;
    if (uVar7 <= uVar5) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar7);
    }
    *(uint *)(param_1 + 0x1a8) = uVar7 - (uVar7 - uVar5 & 0xfffffffe);
  }
  uVar5 = *(uint *)(param_1 + 0x198);
  uVar7 = *(uint *)(param_1 + 0x19c);
  if (uVar5 != uVar7) {
    uVar4 = uVar5;
    if (uVar7 <= uVar5) {
      do {
        uVar4 = uVar4 + 0xc;
      } while (uVar4 != uVar7);
    }
    *(uint *)(param_1 + 0x19c) = uVar7 + ((int)(uVar7 - uVar5) / 0xc) * -0xc;
  }
  return;
}



void fn_002df4fc(int *param_1)

{
  int iVar1;
  
  if (param_1[0x37] != 4) {
    iVar1 = 0;
    do {
      if ((int *)param_1[iVar1 + 0x50] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar1 + 0x50] + 0x134))();
        (**(code **)(*(int *)param_1[iVar1 + 0x50] + 0x54))((int *)param_1[iVar1 + 0x50],0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    (**(code **)(*param_1 + 0x54))(param_1,0);
    if (0 < param_1[0x37]) {
      param_1[0x37] = 1;
      param_1[0x38] = 0;
    }
  }
  return;
}



void fn_002df4e8(int *param_1,int param_2)

{
  param_1[0x60] = param_2;
                    /* WARNING: Could not recover jumptable at 0x002df4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2 + 0x10);
  return;
}



void fn_002df488(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x50] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 0x50] + 0xb0))();
      uVar2 = uVar2 | (int)*(char *)(param_1[iVar1 + 0x50] + 0x59);
      if (uVar2 != 0) {
        uVar2 = 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
                    /* WARNING: Could not recover jumptable at 0x002df4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,uVar2);
  return;
}



void fn_002df424(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x37] != 4) {
    iVar2 = 0;
    do {
      piVar1 = (int *)param_1[iVar2 + 0x50];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x54))(piVar1,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    (**(code **)(*param_1 + 0x54))(param_1,0);
    param_1[0x37] = 4;
  }
  return;
}



undefined4 *
fn_002df314(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_r4;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  switch(param_3) {
  case 1:
    iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_003919b8(iVar1,param_1,1,param_4,unaff_r4,in_lr);
      *puVar2 = &DAT_0082b158;
      return puVar2;
    }
    break;
  case 2:
    iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_003d9b6c(iVar1,param_1);
      return puVar2;
    }
    break;
  case 3:
    iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
    if (iVar1 != 0) {
      iVar1 = fn_003919b8(iVar1,param_1,3,param_4,unaff_r4,in_lr);
      puVar2 = (undefined4 *)fn_003f2f54(iVar1 + 0x2c);
      puVar3 = puVar2 + -0xb;
      *puVar3 = &DAT_00841c3c;
      *puVar2 = &DAT_00841c60;
      fn_0057bed8(puVar3);
      return puVar3;
    }
    break;
  case 4:
    iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_003919b8(iVar1,param_1,4,param_4,unaff_r4,in_lr);
      *puVar2 = &DAT_00843824;
      return puVar2;
    }
    break;
  case 5:
    iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
    if (iVar1 != 0) {
      iVar1 = fn_003919b8(iVar1,param_1,5,param_4,unaff_r4,in_lr);
      puVar2 = (undefined4 *)fn_003f4e40(iVar1 + 0x2c);
      puVar3 = puVar2 + -0xb;
      *puVar3 = &DAT_00845d1c;
      *puVar2 = &DAT_00845d48;
      fn_0059c438(puVar3);
      return puVar3;
    }
    break;
  case 6:
    iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_003919b8(iVar1,param_1,6,param_4,unaff_r4,in_lr);
      *puVar2 = &DAT_0083b498;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


