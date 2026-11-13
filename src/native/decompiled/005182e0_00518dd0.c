#include "005182e0_00518dd0.h"



void fn_00518dd0(int param_1)

{
  fn_004edc34(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  fn_004edc70(param_1 + 0x88);
  return;
}



undefined1 * fn_00518cb4(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = param_2 - 0x100000;
  bVar6 = uVar2 < 0x3ff00000;
  if (bVar6) {
    uVar2 = param_3 - 0x100000;
  }
  if (bVar6 && uVar2 < 0x3ff00000) {
    iVar5 = param_1 + 0x88;
    fn_004edc34(iVar5);
    uVar3 = *(uint *)(param_1 + 0x84);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = *(uint *)(param_1 + uVar2 * 4 + 0x54);
        bVar6 = param_2 <= uVar4;
        if (uVar4 != param_2) {
          uVar2 = uVar2 + 1;
          bVar6 = uVar2 <= uVar3;
        }
      } while (bVar6 && (uVar4 != param_2 && uVar3 != uVar2));
    }
    if (uVar3 == uVar2) {
      uVar2 = 0;
      if (uVar3 != 0) {
        do {
          bVar6 = *(int *)(param_1 + uVar2 * 4 + 0x54) == 0;
          if (!bVar6) {
            uVar2 = uVar2 + 1;
          }
        } while ((bVar6 || uVar2 <= uVar3) && (!bVar6 && uVar3 != uVar2));
      }
      if (uVar3 == uVar2) {
        fn_004edc70(iVar5);
        return &DAT_e0a14827;
      }
      *(uint *)(param_1 + uVar2 * 4 + 0x54) = param_2;
      fn_0017821c(*(int *)(param_1 + 0x50) + uVar2 * 0x4c,param_3,0x4c);
      fn_004edc70(iVar5);
      return (undefined1 *)0x0;
    }
    fn_0017821c(*(int *)(param_1 + 0x50) + uVar2 * 0x4c,param_3,0x4c);
    fn_004edc70(iVar5);
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



void fn_00518c28(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf4d4;
  if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
    if (param_1[2] != 0) {
      fn_0050c6d8(DAT_008bf4d4 + 0x10,param_1[2],0x600);
      fn_0050901c();
      fn_0050c738(iVar1 + 0x10,param_1[2]);
      param_1[2] = 0;
    }
    if (param_1[1] != 0) {
      fn_0050c738(iVar1 + 0x10);
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      fn_0050c738(iVar1 + 0x10);
      *param_1 = 0;
    }
  }
  return;
}



void fn_00518bf0(undefined4 *param_1)

{
  fn_0050c6d8(DAT_008bf4d4 + 0x10,*param_1,0x100);
  return;
}



void fn_00518bc8(void)

{
  if (DAT_008c06a4 != 0) {
    fn_004ecfd0();
    DAT_008c06a4 = 0;
  }
  return;
}



void fn_00518bac(int param_1)

{
  fn_0050c6d8(DAT_008bf4d4 + 0x10,*(undefined4 *)(param_1 + 8),0x600);
  return;
}



void fn_005186b8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0xb;
  do {
    iVar3 = iVar3 + -1;
    puVar1 = (undefined4 *)(param_1 + iVar2 * 0x18);
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}



int fn_0051869c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085723c;
  iVar1 = fn_00657488(param_1 + 0x11);
  return iVar1 + -0x44;
}



int fn_00518698(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085723c;
  iVar1 = fn_00657488(param_1 + 0x11);
  return iVar1 + -0x44;
}



undefined1 * fn_005185a4(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 0x16) == '\x01') {
    if (param_1[0x19] - 0x100000 < 0x3ff00000) {
      fn_0050c3ac();
    }
    fn_00509324(param_1 + 1);
    param_1[0x18] = 0;
    (**(code **)*param_1)(param_1);
    fn_005182e0(param_1,2);
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = &DAT_e0a14827;
  }
  return puVar1;
}



void fn_00518558(int param_1)

{
  if (*(char *)(param_1 + 0x58) != '\x04') {
    fn_005182e0(param_1,1);
    fn_00509300(param_1 + 4);
    if (*(int *)(param_1 + 100) - 0x100000U < 0x3ff00000) {
      fn_0050c3ac();
      return;
    }
  }
  return;
}



undefined1 *
fn_0051845c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined1 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\x04') {
    iStack_34 = param_1;
    uStack_30 = param_2;
    uStack_2c = param_3;
    local_28 = param_4;
    if ((param_5 != 0) && (iVar3 = fn_004ecfe0(0x638), uVar1 = 0, iVar3 != 0)) {
      uVar1 = fn_0050c590(iVar3,param_5);
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined1 *)(param_1 + 0x7c) = param_6;
    uVar4 = fn_004ed2e8();
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x8c,uVar1);
    uVar1 = 0;
    if (iVar3 != 0) {
      puStack_40 = &DAT_00859700;
      uStack_3c = param_2;
      uVar1 = fn_00656b40(iVar3,&puStack_40,param_1 + 0x30,uVar4,param_3,1,0x7fffffff,0x2000,0x20);
    }
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    fn_00509098(param_1 + 4,local_28,param_7);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
    (**(code **)(**(int **)(param_1 + 0x40) + 0x14))();
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



undefined8 fn_00518420(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x7c);
  if (uVar3 != 0) {
    unaff_r4 = *(int *)(param_1 + 0x68);
  }
  if (uVar3 != 0 && unaff_r4 != 0) {
    uVar1 = fn_006575c0(param_1 + 0x6c);
    uVar3 = (uint)((ulonglong)uVar1 * 100);
    if ((int)((ulonglong)uVar1 * 100 >> 0x20) < unaff_r4) {
      uVar2 = 1;
      goto LAB_00518458;
    }
  }
  uVar2 = 0;
LAB_00518458:
  return CONCAT44(uVar3,uVar2);
}



void fn_00518378(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x40) - 0x100000U < 0x3ff00000) {
    fn_005182e0(param_1,4);
    (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      fn_00656b7c(puVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  fn_00509398(param_1 + 4);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) - 0x100000U < 0x3ff00000) {
    if (*(int *)(param_1 + 100) != 0) {
      fn_0050c5fc();
      fn_004ecfd0();
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}



void fn_005182e0(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(byte *)(param_1 + 0x58) != param_2) {
    uVar4 = fn_0011c134((int)((ulonglong)DAT_008c3640 * 100),
                         DAT_008c3644 * 100 + (int)((ulonglong)DAT_008c3640 * 100 >> 0x20),1000,0);
    uVar4 = fn_0011c134((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    do {
      *(byte *)(param_1 + 0x58) = (byte)param_2 | 0x10;
      fn_00657410(param_1 + 0x44);
      uVar1 = fn_006577a8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      bVar2 = param_2 == 2;
      if (bVar2) {
        uVar1 = (uint)*(byte *)(param_1 + 0x58);
      }
      bVar3 = bVar2 && uVar1 == 3;
      if (!bVar2 || uVar1 != 3) {
        bVar3 = *(byte *)(param_1 + 0x58) == param_2;
      }
    } while (!bVar3);
  }
  return;
}


