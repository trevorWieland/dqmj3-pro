#include "003d3f24_003d46b8.h"



void fn_003d46b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_003d46d4(param_1,param_1,param_2,param_3,param_4);
  return;
}



void fn_003d45c4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0083134c;
  if ((int *)param_1[0x26] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x26] + 4))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  uVar1 = param_1[0x21];
  uVar2 = uVar1;
  if ((uint)param_1[0x22] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x22]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x23] - uVar1) >> 2,0);
  uVar1 = param_1[0x1e];
  uVar2 = uVar1;
  if ((uint)param_1[0x1f] <= uVar1) {
    for (; uVar2 != param_1[0x1f]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x20] - uVar1) >> 2,0);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_003d454c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_0083134c;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar2;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 3;
  return;
}



void fn_003d4398(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)param_1[0x26] + 0x90))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x26] + 0xa8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x26] + 0xb8))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)param_1[0x26] + 0xc0))();
        if (-1 < iVar1) {
          (**(code **)(*param_1 + 0x118))(param_1,iVar1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x114))(param_1,iVar1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x10c))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x26] + 0x6c))();
  if (-1 < iVar1) {
    fn_002b20a4(*(undefined4 *)(param_1[0x1e] + iVar1 * 4),0);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x26] + 100))();
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x11c))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x26] + 0x34))();
  if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)param_1[0x26] + 0x38))(), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x120))(param_1);
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x14))();
  }
  iVar1 = param_1[0x1e];
  uVar2 = 0;
  if (param_1[0x1f] - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x14))();
      iVar1 = param_1[0x1e];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[0x1f] - iVar1 >> 2));
  }
  return;
}



void fn_003d4278(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  fn_002454a4(param_1,*(undefined4 *)(param_1 + 0x98));
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 4))();
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 4))();
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7c) - iVar2 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar2 + uVar3 * 4) + 0x18))();
      piVar4 = (int *)(*(int *)(param_1 + 0x78) + uVar3 * 4);
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar4 = 0;
      iVar2 = *(int *)(param_1 + 0x78);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x7c) - iVar2 >> 2));
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 0x18))();
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 4))();
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_003d422c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar3;
  undefined4 unaff_r6;
  int *piVar4;
  
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x18))();
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 4))();
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
  }
  fn_002454a4(param_1,*(undefined4 *)(param_1 + 0x98),param_3,param_4,unaff_r4,unaff_r5,unaff_r6);
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 4))();
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 4))();
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7c) - iVar2 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar2 + uVar3 * 4) + 0x18))();
      piVar4 = (int *)(*(int *)(param_1 + 0x78) + uVar3 * 4);
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar4 = 0;
      iVar2 = *(int *)(param_1 + 0x78);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x7c) - iVar2 >> 2));
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 0x18))();
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 4))();
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_003d4124(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_38 [3];
  undefined4 local_2c;
  uint local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  (**(code **)(**(int **)(param_1 + 0x98) + 0x30))(*(int **)(param_1 + 0x98),local_28,0);
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  if (0 < iVar1) {
    do {
      uVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar2 <= uVar3) {
        local_38[0] = uVar2;
        fn_002ff628(9,&DAT_008c7650,&DAT_008c7650,uVar3);
      }
      uVar2 = local_28[0];
      if (uVar3 == local_28[0]) {
        uVar2 = 1;
      }
      if (uVar3 != local_28[0]) {
        uVar2 = 0;
      }
      fn_002b20a4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar3 * 4),uVar2);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x30))(*(int **)(param_1 + 0x98),&local_2c,0);
  iVar1 = fn_001c9db4(*(undefined4 *)(param_1 + 0x98),local_2c);
  fn_00688ff8();
  local_20 = *(undefined4 *)(iVar1 + 0x3c);
  local_1c = *(undefined4 *)(iVar1 + 0x40);
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x94),local_38);
  fn_0025e378(*(undefined4 *)(param_1 + 0x94),&local_20);
  return;
}



void fn_003d4084(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fn_002b20a4(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),1);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x30))(*(int **)(param_1 + 0x98),&local_1c,0);
  iVar1 = fn_001c9db4(*(undefined4 *)(param_1 + 0x98),local_1c);
  fn_00688ff8();
  local_18 = *(undefined4 *)(iVar1 + 0x3c);
  local_14 = *(undefined4 *)(iVar1 + 0x40);
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x94),local_28);
  fn_0025e378(*(undefined4 *)(param_1 + 0x94),&local_18);
  return;
}



void fn_003d4048(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x98) + 0x2c))
            (*(int **)(param_1 + 0x98),0xffffffff,0xffffffff,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003d3f24(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_003d4034,param_2,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0031fee0(iVar2,*(undefined4 *)(param_1 + 4),iVar1,1,
                                 *(undefined4 *)(param_1 + 0x48));
  }
  piVar4 = *(int **)(param_1 + 0x74);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x74) = piVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x74) + 0x10))();
  if (*(int *)(*(int *)(param_3 + 0xc) + -4) != 0) {
    fn_0031fe38(*(undefined4 *)(param_1 + 0x74));
  }
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),(int)*(char *)(param_3 + 0x10),0);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x7f) = *(undefined1 *)(param_3 + 0x11);
  fn_0031ef00(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x81) = *(undefined1 *)(param_3 + 0x12);
  fn_0031f3f4(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x83) = *(undefined1 *)(param_3 + 0x13);
  fn_0031f954(iVar1,0);
  return;
}


