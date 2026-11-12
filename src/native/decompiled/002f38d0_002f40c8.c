#include "002f38d0_002f40c8.h"



undefined4 * fn_002f40c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_00821264;
  puVar1 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = fn_00145b00(0x68,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_002f1bd8(iVar2,puVar1,0xffffffff);
      *puVar3 = &DAT_00851eac;
      puVar3[0x18] = &DAT_00851ed8;
      puVar3[0x19] = 0;
    }
    *puVar1 = puVar3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 1;
    puVar1[3] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_002f4058(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x22c) + 4);
  iVar1 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002f1bd8(iVar1,puVar4,0);
    *piVar2 = (int)&DAT_00851e88;
  }
  piVar3 = (int *)*puVar4;
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *puVar4 = piVar2;
  }
  return;
}



void fn_002f4044(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x22c) + 4) + 0xc) = param_2;
  return;
}



void fn_002f4034(int param_1)

{
  fn_002f38d0(*(undefined4 *)(param_1 + 4));
  return;
}



void fn_002f38d0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar2 = fn_006f7da4(param_1[1]);
  if (iVar2 == 0) {
    return;
  }
  uVar3 = fn_003c922c(*(undefined1 *)(param_1[1] + 0x104),param_1[3]);
  uVar4 = fn_0068cab0(DAT_008977e8);
  uVar3 = fn_006c7ff8(uVar4,uVar3);
  iVar2 = (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,uVar3);
  if (iVar2 == 0) goto LAB_002f3fa8;
  uVar1 = *(undefined1 *)(param_1[1] + 0x104);
  uVar8 = *(undefined4 *)(param_1[1] + 0x228);
  uVar4 = fn_0068cab0(DAT_008977e8);
  iVar2 = fn_006c80c8(uVar4,uVar8,uVar1,param_1[3]);
  uVar4 = *(undefined4 *)(*param_1 + 0xc);
  switch(iVar2) {
  case 0:
    iVar5 = fn_00145b00(0x60,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      *piVar6 = (int)&DAT_00851e88;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) {
      if (piVar7 == (int *)0x0) goto LAB_002f3f8c;
LAB_002f39f8:
      (**(code **)(*piVar7 + 4))(piVar7);
LAB_002f3f8c:
      *param_1 = (int)piVar6;
    }
    break;
  case 1:
    iVar5 = fn_00145b00(0x68,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x19] = 0;
      piVar6[0x18] = (int)&DAT_00851ed8;
      *piVar6 = (int)&DAT_00851eac;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) {
joined_r0x002f3e40:
      if (piVar7 != (int *)0x0) goto LAB_002f39f8;
      goto LAB_002f3f8c;
    }
    break;
  case 2:
    iVar5 = fn_00145b00(0x68,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00851fc4;
      piVar6[0x19] = 0;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 3:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      *piVar6 = (int)&DAT_00851ef0;
      iVar5 = fn_006f7de8(*(undefined4 *)(piVar6[0x17] + 4));
      piVar6[0x18] = iVar5;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      goto LAB_002f3f8c;
    }
    break;
  case 4:
    iVar5 = fn_00145b00(0x68,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00852108;
      piVar6[0x19] = 0;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 5:
    iVar5 = fn_00145b00(0x68,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x19] = 0;
      piVar6[0x18] = (int)&DAT_00851fac;
      *piVar6 = (int)&DAT_00851f80;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 6:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00851f5c;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 7:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00851f38;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 8:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00851f14;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  default:
    iVar5 = fn_00145b00(0x68,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x19] = 0;
      *piVar6 = (int)&DAT_00851eac;
      piVar6[0x18] = (int)&DAT_00851ed8;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 10:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_0085200c;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0xb:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00852078;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0xc:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00852030;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0xd:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_008520c0;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0xe:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_008520e4;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0xf:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00852054;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0x10:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_0085209c;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
    break;
  case 0x11:
    iVar5 = fn_00145b00(100,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_002f1bd8(iVar5,param_1,uVar4);
      piVar6[0x18] = 0;
      *piVar6 = (int)&DAT_00851fe8;
    }
    piVar7 = (int *)*param_1;
    if (piVar7 != piVar6) goto joined_r0x002f3e40;
  }
  (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,uVar3);
  param_1[4] = iVar2;
LAB_002f3fa8:
  (**(code **)(*(int *)*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x002f3fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x14))((int *)*param_1,uVar3,param_1[3]);
  return;
}


