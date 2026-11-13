#include "002c1d14_002c286c.h"



void fn_002c286c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081f094;
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 0x20))();
  }
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 0x20))();
  }
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 0x20))();
  }
  if ((int *)param_1[0x2c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2c] + 0x20))();
  }
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 0x20))();
  }
  uVar2 = param_1[0x28];
  uVar1 = uVar2;
  if ((uint)param_1[0x29] <= uVar2) {
    for (; uVar1 != param_1[0x29]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x2a] - uVar2) >> 2,0);
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 0x20))();
  }
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 4))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



undefined4 * fn_002c27a8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_0081f094;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  puVar1[0x20] = *(undefined4 *)(param_2 + 8);
  puVar1[0x21] = 0xffffffff;
  puVar1[0x22] = 0xffffffff;
  iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0036fc00();
  }
  puVar1[0x23] = uVar3;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x33] = 0;
  return puVar1;
}



void fn_002c26a4(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  
  local_20 = 0;
  piVar1 = (int *)fn_002c11d0(param_1,param_4,&local_20);
  (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
  if (param_3 != 0 && piVar1 != (int *)0x0) {
    if ((param_4 == 5 && param_2 == 2) && (iVar2 = fn_002c11d0(param_1,5,&local_20), iVar2 != 0)) {
      iVar3 = fn_002e3e9c(iVar2,0);
      iVar2 = fn_002e3e9c(iVar2,0,1);
      if (iVar3 != 0 && iVar2 != 0) {
        fn_0025f978();
      }
    }
    iVar2 = piVar1[9];
    uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
    (**(code **)(*param_1 + 0x164))(param_1,uVar4,(int)(char)iVar2);
    uVar4 = fn_002e3e9c(piVar1,local_20,param_2);
    (**(code **)(*param_1 + 400))(param_1,uVar4);
    fn_0025f978(0);
  }
  return;
}



void fn_002c2668(int param_1,int param_2)

{
  undefined1 local_18 [12];
  
  fn_00688ff8(param_2);
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x98),local_18);
  fn_0025e378(*(undefined4 *)(param_1 + 0x98),param_2 + 0x3c);
  return;
}



void fn_002c2080(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar4;
  undefined4 unaff_r6;
  int *piVar5;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xec) + 4))();
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe8) + 0x18))();
    if (*(int **)(param_1 + 0xe8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe8) + 4))();
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe4) + 0x18))();
    if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe4) + 4))();
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
    if (*(int **)(param_1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x98) + 4))();
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 != 0) {
    do {
      uVar2 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar4,uVar2,unaff_r4,unaff_r5,unaff_r6);
        param_4 = uVar2;
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0xa0) + uVar4 * 4);
      (**(code **)(*piVar5 + 0x24))(piVar5);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x20))(piVar5);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2));
  }
  uVar4 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xa4) = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  uVar1 = *(uint *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar2 = *(uint *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar2);
  }
  fn_001008c4(uVar1,(int)(iVar3 - uVar1) >> 2,0,iVar3,param_4);
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))();
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 0x20))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x24))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x20))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x24))();
    if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb4) + 0x24))();
    if (*(int **)(param_1 + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x20))();
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x24))();
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x20))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))();
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x88) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x84) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x80));
  }
  return;
}



void fn_002c1f84(int *param_1)

{
  if ((char)param_1[0x1f] == '\x01') {
    *(undefined1 *)(param_1 + 0x1f) = 0;
    (**(code **)(*param_1 + 0x128))(param_1);
    (**(code **)(*param_1 + 300))(param_1);
    (**(code **)(*param_1 + 0x198))(param_1,1);
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x1a],param_1[0x1c],0);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = -1;
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    if ((char)param_1[0x32] == '\x01') {
      fn_002c1a7c(param_1,0);
    }
  }
  else if ((char)param_1[0x1f] == '\0') {
    (**(code **)(*param_1 + 0x158))(param_1);
  }
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_002c1d14(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *param_2;
  if (5 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x002c1f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x154))(param_1,iVar2,param_2[2]);
    return;
  }
  if ((char)param_1[0x1f] != '\x01') {
    if ((char)param_1[0x1f] != '\0') {
      return;
    }
    bVar3 = iVar2 != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = param_2[2];
    }
    if (bVar3 && iVar1 != -1) {
      param_3 = param_2[3];
    }
    if (((bVar3 && iVar1 != -1) && param_3 != 0) && (iVar2 != 5 || iVar1 != 2)) {
      *(undefined1 *)(param_1 + 0x1f) = 1;
      (**(code **)(*param_1 + 0x124))(param_1,param_2);
      (**(code **)(*param_1 + 0x198))(param_1,0);
      (**(code **)(*param_1 + 0x160))(param_1,param_2[2],param_1[0x19]);
      fn_0068ab44(param_1,0x100094b);
      return;
    }
LAB_002c1f4c:
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  if ((char)param_1[0x32] == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_002c18f8(param_1,param_2,param_1[0x1d]);
  }
  iVar1 = (**(code **)(*param_1 + 0x174))(param_1,param_1 + 0x1a,param_2);
  if (iVar1 == 0) {
    if (((int)(char)param_1[0x32] & iVar2 - 1U) == 0) {
      *(undefined1 *)(param_1 + 0x1f) = 0;
      iVar2 = (**(code **)(*param_1 + 0x16c))(param_1,param_2);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x194))(param_1,param_2);
      }
      (**(code **)(*param_1 + 0x110))(param_1,*param_2,param_2[2],0,1);
      (**(code **)(*param_1 + 0x184))(param_1);
      fn_0068ab44(param_1,0x1000959);
      goto LAB_002c1ee4;
    }
    if ((int)(char)param_1[0x32] != 1) goto LAB_002c1f1c;
    if (iVar2 == 0) goto LAB_002c1f4c;
  }
  else {
    *(undefined1 *)(param_1 + 0x1f) = 0;
    (**(code **)(*param_1 + 0x178))(param_1);
    (**(code **)(*param_1 + 0x128))(param_1);
    (**(code **)(*param_1 + 0x110))(param_1,param_1[0x1a],param_1[0x1c],0,1);
    fn_0068ab44(param_1,0x100094d);
LAB_002c1ee4:
    if ((char)param_1[0x32] != '\x01') goto LAB_002c1f1c;
  }
  fn_002c1a7c(param_1,*param_2 == 5);
LAB_002c1f1c:
  (**(code **)(*param_1 + 0x198))(param_1,1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = -1;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}


