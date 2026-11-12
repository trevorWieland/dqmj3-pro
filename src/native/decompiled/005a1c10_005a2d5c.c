#include "005a1c10_005a2d5c.h"



void fn_005a2d5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a2e2c(iVar1,param_1);
  return;
}



void fn_005a2d28(int param_1)

{
  fn_002c3d68();
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
  fn_006899f4(param_1,0xd4,0);
  return;
}



void fn_005a2a5c(undefined4 *param_1)

{
  *param_1 = &DAT_00846728;
  fn_002c4100(param_1);
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



void fn_005a2348(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_005a238c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005a238c:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_005a22f4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_005a233c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005a233c:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_005a21e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00846560;
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 0x18))();
    if ((int *)param_1[0x46] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x46] + 4))();
      param_1[0x46] = 0;
    }
  }
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 0x18))();
    if ((int *)param_1[0x47] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x47] + 4))();
      param_1[0x47] = 0;
    }
  }
  if (param_1[0x48] != 0) {
    fn_002454a4(param_1);
    if ((int *)param_1[0x48] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x48] + 4))();
      param_1[0x48] = 0;
    }
  }
  fn_00380e04(param_1);
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 4))();
  }
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 4))();
  }
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 4))();
  }
  fn_00380f78(param_1);
  return;
}



undefined4 * fn_005a20a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00380ef8();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &PTR_FUN_00846560;
  puVar1[0x43] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 1;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  *(undefined1 *)(puVar1 + 0x4e) = 0;
  *(undefined1 *)((int)puVar1 + 0x139) = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_005a212c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005a212c:
  puVar1[0x43] = puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2e);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_005a2170;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005a2170:
  puVar1[0x44] = puVar2;
  puVar2 = (undefined4 *)fn_001f74ec(puVar1,0x50);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008944b4) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x45] = puVar4;
  return puVar1;
}



void fn_005a1ff4(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 4) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
      return;
    }
  }
  else {
    if (param_2 == 5) {
      (**(code **)(*param_1 + 0x110))(param_1,4,0,0,1);
      return;
    }
    if (param_2 != 6) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x110))(param_1,5,param_3,0,1);
  return;
}



void fn_005a1f48(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1,5,param_3,0,1);
    return;
  }
  if (param_2 == 5) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
      return;
    }
  }
  else if (param_2 != 6) {
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
  return;
}



void fn_005a1db0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  fn_002c263c();
  if (param_2 == 4) {
    iVar1 = fn_00430f14(param_1,param_3,1);
    if (iVar1 == 0) {
      if ((char)param_1[0x1f] == '\0') {
        param_1[0x49] = 4;
        param_1[0x4b] = param_3;
        (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
        return;
      }
      fn_0042fea4(param_1,param_3);
      fn_0068ab44(param_1,0x100094f);
      return;
    }
  }
  else {
    if (param_2 == 5) {
      if ((char)param_1[0x1f] == '\0') {
        param_1[0x4b] = param_3;
        param_1[0x49] = 5;
        uVar3 = 1;
        uVar2 = (int)*(char *)(param_1[0x46] + 0x24) ^ 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,uVar2,0);
        fn_005a13cc(param_1,uVar2,1,uVar3);
        return;
      }
      (**(code **)(*param_1 + 0x110))(param_1,5,0,0,1);
      return;
    }
    if (param_2 == 7) {
      if (param_1[0x49] == 4) {
        (**(code **)(*param_1 + 0x110))(param_1,4,param_1[0x4b],0);
        fn_0042fea4(param_1,param_1[0x4b]);
        return;
      }
      if (param_1[0x49] == 5) {
        (**(code **)(*param_1 + 0x110))(param_1,5,param_1[0x4a],0,1);
        return;
      }
      (**(code **)(*param_1 + 0x110))(param_1,5,0,0,1);
    }
  }
  return;
}



void fn_005a1cc8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fn_00380e50();
  if ((*(char *)(param_1 + 0x139) == '\x01') && (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\0')
     ) {
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  uVar1 = fn_006f6a5c(param_1);
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x18) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x18) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x18) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x18) = 1;
  }
  iVar2 = fn_005a1648(param_1);
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x7c) != '\0')) {
    fn_002b1f48(*(undefined4 *)(param_1 + 0x118),0);
    uVar3 = *(undefined4 *)(param_1 + 0x118);
    uVar4 = 1;
  }
  else {
    fn_002b1f48(*(undefined4 *)(param_1 + 0x118),1);
    uVar3 = *(undefined4 *)(param_1 + 0x118);
    uVar4 = 0;
  }
  fn_002b1f0c(uVar3,uVar4);
  (**(code **)(**(int **)(param_1 + 0x118) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x005a1d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x14))();
  return;
}



void fn_005a1c10(int param_1)

{
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0x18))();
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x118) + 4))();
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
  }
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))();
    if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0x120) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x120) + 4))();
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
  }
  fn_00380e04(param_1);
  return;
}


