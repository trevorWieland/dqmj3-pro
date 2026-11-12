#include "002c3acc_002c4100.h"



void fn_002c4100(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  fn_002454a4(param_1,*(undefined4 *)(param_1 + 0x9c));
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 4))();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x98) + 4))();
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x18))();
    if (*(int **)(param_1 + 0x90) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x90) + 4))();
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
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
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 0x18))();
    if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa0) + 4))();
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
  }
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x18))();
    if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa4) + 4))();
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_002c3e78(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint local_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,local_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == local_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_002c3e74(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint auStack_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,auStack_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == auStack_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_002c3df8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [68];
  
  fn_00101a50(auStack_58,0x40,&LAB_002c3e50);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4);
  fn_0031b6ec(uVar1,param_3,1);
  fn_0031b7c4(uVar1,param_3,auStack_58);
  return;
}



undefined4 fn_002c3df0(undefined4 param_1)

{
  return param_1;
}



void fn_002c3d68(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_002c3d64(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_002c3bf0(int param_1)

{
  int iVar1;
  float in_s0;
  float in_s1;
  int local_28;
  float local_24;
  float fStack_20;
  float local_18;
  float local_14;
  
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x30))(*(int **)(param_1 + 0x9c),0,&local_28);
  iVar1 = fn_001c9db4(*(undefined4 *)(param_1 + 0x9c),local_28);
  fn_00688ff8();
  local_18 = *(float *)(iVar1 + 0x3c);
  local_14 = *(float *)(iVar1 + 0x40);
  local_24 = in_s0;
  fStack_20 = in_s1;
  if (*(int *)(param_1 + 0xac) !=
      (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) *
      *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) + local_28) {
    fStack_20 = in_s1 + local_14 * 0.5;
    local_24 = in_s0 - local_18 * 0.5;
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x98),&local_24);
  fn_0025e378(*(undefined4 *)(param_1 + 0x98),&local_18);
  return;
}



void fn_002c3acc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_002c3bdc,param_2,param_4,param_4);
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
  if (*(int *)(*(int *)(param_3 + 0x1c) + -4) != 0) {
    fn_0031fe38(*(undefined4 *)(param_1 + 0x74));
  }
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),(int)*(char *)(param_3 + 0x30),0);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x7f) = *(undefined1 *)(param_3 + 0x31);
  fn_0031ef00(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x81) = *(undefined1 *)(param_3 + 0x32);
  fn_0031f3f4(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x83) = *(undefined1 *)(param_3 + 0x33);
  fn_0031f954(iVar1,0);
  return;
}


