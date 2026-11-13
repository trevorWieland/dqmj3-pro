#include "002a9bb8_002aa420.h"



void fn_002aa420(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  
  fn_002c26a4();
  if (*(char *)(param_1 + 0x7c) == '\x02') {
    if (param_3 == 0) goto LAB_002aa500;
    if (param_4 == 4) {
      uVar3 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),0,param_2);
      fn_002aa1e0(param_1,4,uVar3);
    }
  }
  else if (param_3 == 0) goto LAB_002aa500;
  bVar7 = *(char *)(param_1 + 0x108) != '\0';
  uVar1 = 0;
  if (bVar7) {
    uVar1 = (uint)*(byte *)(param_1 + 0x10b);
  }
  bVar8 = uVar1 != 1;
  if (bVar7 && bVar8) {
    uVar1 = *(uint *)(param_1 + 0xf4);
  }
  if ((bVar7 && bVar8) && uVar1 != 0) {
    *(byte *)(uVar1 + 0x44) = param_4 == 1 | *(byte *)(uVar1 + 0x44) & 0xfe;
  }
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 != 0) {
    if ((param_4 < 4) || (*(char *)(param_1 + 0x10a) == '\0')) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    *(byte *)(iVar2 + 0x44) = bVar6 | *(byte *)(iVar2 + 0x44) & 0xfe;
  }
LAB_002aa500:
  bVar7 = *(char *)(param_1 + 0x7c) == '\0';
  bVar8 = bVar7 && param_3 == 0;
  if (bVar7 && param_3 == 0) {
    bVar8 = param_4 == 4;
  }
  if ((bVar8) && (iVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),0,param_2), iVar2 != 0)) {
    uVar3 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),param_2);
    iVar4 = fn_002b2a48();
    if (iVar4 != 0) {
      fn_002906e0(iVar2);
    }
    uVar5 = fn_00290544(iVar2);
    fn_002b2cbc(uVar3,uVar5);
    return;
  }
  return;
}



void fn_002aa378(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  fn_002c265c();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
    return;
  }
  if (param_2 != 2) {
    if (param_2 == 4) {
      (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
    }
    return;
  }
  if ((char)param_1[0x1f] == '\0') {
    uVar1 = 4;
  }
  else {
    uVar1 = 1;
  }
  (**(code **)(*param_1 + 0x110))(param_1,uVar1,param_3,0,1);
  return;
}



bool fn_002aa2e4(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (param_2 == 1 && in_stack_00000004 == 0) {
    uVar1 = fn_0022f584((char *)&DAT_002aa358,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
  }
  return param_2 == 1 && in_stack_00000004 == 0;
}



void fn_002aa138(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  fn_002c2648();
  if (param_2 == 1) {
    if ((char)param_1[0x1f] == '\0') {
      uVar1 = 4;
    }
    else {
      uVar1 = 2;
    }
    (**(code **)(*param_1 + 0x110))(param_1,uVar1,param_3,0,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
  }
  return;
}



void fn_002aa0b4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 uVar4;
  bool bVar5;
  
  uVar1 = fn_006f6ab4();
  uVar2 = fn_006f6a5c(param_1);
  if ((uVar1 & 0x100000) == 0 || (uVar1 & 0x200000) == 0) {
    if ((uVar2 & 0x100000) == 0) {
      bVar5 = (uVar2 & 0x200000) != 0;
      if (bVar5) {
        uVar2 = *(uint *)(param_1 + 0xd8);
      }
      if (!bVar5 || uVar2 == 0) goto LAB_002aa0f4;
      uVar4 = 2;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xd8);
      if (uVar2 == 0) goto LAB_002aa0f4;
      uVar4 = 1;
    }
    *(undefined1 *)(uVar2 + 0x18) = uVar4;
  }
LAB_002aa0f4:
  fn_002c246c(param_1);
  piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x002aa118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))();
  return;
}



void fn_002aa030(int param_1,int *param_2)

{
  int iVar1;
  
  if ((((*param_2 == 4) && (*(char *)(param_1 + 0x10a) != '\0')) &&
      (iVar1 = fn_006ba1ec(param_2), iVar1 != 0)) &&
     (iVar1 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),0,param_2[2]), iVar1 != 0)) {
    fn_0057a084(*(undefined4 *)(param_1 + 0xe4),(char)param_2[3]);
    fn_0068ab44(param_1,0x1000950);
    fn_00689bd0(param_1,0xd5,0);
    return;
  }
  return;
}



void fn_002a9f40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002aa570(iVar1,param_1);
  return;
}



void fn_002a9e5c(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    if (*param_2 == 1) {
      iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (*(char *)(param_1 + 0x109) != '\x01' || iVar1 != 1) {
        fn_002a9f70(param_1,param_2,0);
        return;
      }
      bVar2 = *(char *)(param_1 + 0x10b) == '\0';
      if (bVar2) {
        fn_002a8c38(param_1,1);
      }
      else {
        fn_002a8c38(param_1,0);
      }
      *(bool *)(param_1 + 0x10b) = bVar2;
      fn_0068ab44(param_1,0x100094b);
      return;
    }
    if (*param_2 != 4) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
  }
  return;
}



void fn_002a9f70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x100) == iVar1) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x100) = iVar1;
    if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0x104))) {
      *(undefined4 *)(param_1 + 0x104) = 0;
      fn_002a9910(param_1,1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x104) == iVar1) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x104) = iVar1;
    if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0x100))) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      fn_002a9910(param_1,0);
    }
  }
  fn_002a9910(param_1,param_3);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_002a9cd8(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)param_1 + 0x10b) == '\x01') {
    fn_002a8c38(param_1,0);
    *(undefined1 *)((int)param_1 + 0x10b) = 0;
  }
  else if ((char)param_1[0x1f] == '\x01') {
    *(undefined1 *)(param_1 + 0x1f) = 0;
    (**(code **)(*param_1 + 0x128))(param_1);
    (**(code **)(*param_1 + 0x198))(param_1,1);
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x1a],param_1[0x1c],0);
    fn_002c07a4(param_1 + 0x1a);
  }
  else if ((char)param_1[0x1f] == '\0') {
    puVar3 = (undefined4 *)param_1[6];
    if (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar1 == &DAT_00891e28) goto LAB_002a9dc0;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_002a9dc0:
    puVar3[2] = 0;
    if (((*param_2 == 4) && (fn_003467f8(param_1[0x2c],param_2[2]), param_2[3] != 0)) &&
       (iVar2 = fn_002b2a48(), iVar2 != 0)) {
      fn_002906e0(param_2[3]);
    }
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(**(int **)(iVar2 + 0x18) + 0x20))();
    fn_006f72b4(DAT_008977e0);
    fn_0068ab44(param_1,0x100094c);
  }
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_002a9bb8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 100) < 4) {
    fn_00689efc(param_1,0x2d,0);
    fn_0025f354(*(undefined4 *)(param_1 + 0xdc),param_2);
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
  }
  else {
    fn_00689efc(param_1,0x2c,0);
    fn_0025a268(*(undefined4 *)(param_1 + 0xe0));
    uVar1 = *(undefined4 *)(param_1 + 0xe0);
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  fn_002aa1e0(param_1,*(undefined4 *)(param_1 + 100),param_2);
  bVar5 = *(char *)(param_1 + 0x108) != '\0';
  uVar4 = 0;
  if (bVar5) {
    uVar4 = (uint)*(byte *)(param_1 + 0x10b);
  }
  bVar6 = uVar4 != 1;
  if (bVar5 && bVar6) {
    uVar4 = *(uint *)(param_1 + 0xf4);
  }
  if ((bVar5 && bVar6) && uVar4 != 0) {
    *(byte *)(uVar4 + 0x44) = *(int *)(param_1 + 100) == 1 | *(byte *)(uVar4 + 0x44) & 0xfe;
  }
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 100) < 4) || (*(char *)(param_1 + 0x10a) == '\0')) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    *(byte *)(iVar2 + 0x44) = bVar3 | *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  return;
}


