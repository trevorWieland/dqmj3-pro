#include "0037d370_0037de6c.h"



void fn_0037de6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  iVar2 = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  do {
    iVar4 = *(int *)(**(int **)(param_1 + 0x18) + iVar3 * 4);
    if (iVar4 != 0) {
      uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
      fn_0020bbc4(auStack_28,uVar1);
      if (iVar3 < 2) {
        uVar1 = fn_006bfe90(auStack_24);
        switch(uVar1) {
        case 0:
        case 1:
          iVar2 = iVar2 + 1;
          break;
        case 2:
          iVar2 = iVar2 + 2;
          break;
        case 3:
          iVar2 = iVar2 + 3;
          break;
        case 4:
          iVar2 = iVar2 + 4;
        }
      }
      else {
        *(int *)(param_1 + 0x30) = iVar2;
      }
    }
    fn_0037dcb8(param_1,iVar4,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3 * 4));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}



void fn_0037dbc4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  fn_0069e710();
  iVar3 = 0;
  do {
    iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
    if (iVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                                (*(int **)(param_1 + 8),(&DAT_00893620)[iVar3],1);
      if (piVar4 != (int *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar2 == &DAT_0089a928) goto LAB_0037dc44;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_0037dc44:
      piVar4 = (int *)fn_002b44c0(iVar1,*(undefined4 *)(param_1 + 4),piVar4,1);
    }
    (**(code **)(*piVar4 + 0x10))(piVar4);
    *(int **)(*(int *)(param_1 + 0x1c) + iVar3 * 4) = piVar4;
    fn_0037dcb8(param_1,*(undefined4 *)(**(int **)(param_1 + 0x18) + iVar3 * 4),piVar4);
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      fn_0069e710(param_1);
      return;
    }
  } while( true );
}



undefined1 * fn_0037dcb8(int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  *(undefined1 *)((int)param_3 + 0x1d) = *(undefined1 *)(param_1 + 0x29);
  if ((param_2 == 0) || (iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc)), iVar2 == 0)) {
    (**(code **)(*param_3 + 0x20))(param_3,0);
    fn_002b427c(param_3,0);
    fn_002b4348(param_3,0);
    *(undefined1 *)((int)param_3 + 0x3d) = 0;
    puVar5 = (undefined1 *)fn_002b325c(param_3,0xffffffff);
    *(undefined1 *)((int)param_3 + 0x43) = 0;
    return puVar5;
  }
  fn_0020bbc4(auStack_20,iVar2);
  (**(code **)(*param_3 + 0x20))(param_3,1);
  uVar3 = fn_006bfda8(auStack_1c);
  fn_002b427c(param_3,uVar3);
  uVar1 = fn_001f84ac(iVar2 + 0x72);
  *(undefined1 *)((int)param_3 + 0x3f) = uVar1;
  *(undefined1 *)((int)param_3 + 0x1d) = 1;
  uVar4 = fn_006bfe90(auStack_1c);
  if ((*(uint *)(param_1 + 0x2c) & 1 << (uVar4 & 0xff)) == 0) {
    *(undefined1 *)((int)param_3 + 0x33) = 0;
  }
  else {
    *(undefined1 *)((int)param_3 + 0x33) = 1;
  }
  if (*(int *)(param_1 + 0x30) == -1) {
    uVar3 = fn_006bfe90(auStack_1c);
    fn_002b4348(param_3,uVar3);
    uVar1 = fn_006bf34c(auStack_1c);
    *(undefined1 *)((int)param_3 + 0x3d) = uVar1;
    uVar1 = fn_006bf184(auStack_1c);
    *(undefined1 *)((int)param_3 + 0x43) = uVar1;
  }
  else {
    fn_002b4348(param_3,(int)(char)*(int *)(param_1 + 0x30));
    if (*(int *)(param_1 + 0x2c) == 0x1f) {
      *(undefined1 *)((int)param_3 + 0x33) = 1;
    }
    else {
      *(undefined1 *)((int)param_3 + 0x33) = 0;
    }
    *(undefined1 *)((int)param_3 + 0x45) = 1;
    *(undefined1 *)((int)param_3 + 0x3d) = 0;
    *(undefined1 *)((int)param_3 + 0x43) = 0;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(char *)(param_1 + 0x15) != '\0') {
      iVar2 = fn_006bfffc(auStack_1c);
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 7;
      }
      fn_002b325c(param_3,uVar3);
    }
  }
  else {
    fn_002b325c(param_3,3);
  }
  return auStack_20;
}



undefined4 * fn_0037d928(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint local_2c [3];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_008291f0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar6 = 3;
  puVar1[5] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar6 = iVar6 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0);
  iVar6 = puVar1[5];
  puVar1[6] = iVar6 + 0xc;
  puVar1[7] = iVar6 + 0x80;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  *(undefined1 *)((int)puVar1 + 0x39) = 0;
  puVar1[0xf] = 0xffffffff;
  puVar1[0x10] = 0xffffffff;
  uVar3 = fn_00100b58(&DAT_0037dad8);
  if (uVar3 == 0) {
    puVar2 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_2c + 1;
    if (0x20 < uVar3) {
      puVar4 = local_2c;
    }
    local_2c[0] = uVar3;
    local_2c[1] = 0x20;
    uVar7 = *puVar4;
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    if (uVar7 < uVar3) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
    }
    if (uVar7 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar7;
      puVar2[2] = uVar3;
      puVar5 = (undefined2 *)((int)puVar2 + uVar3 * 2 + 0xc);
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  puVar1[0x11] = puVar2;
  fn_00301a9c(puVar2,&DAT_0037dad8,uVar3 << 1);
  *(undefined2 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0;
  return puVar1;
}



void fn_0037d8dc(int param_1)

{
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 4))();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  return;
}



void fn_0037d870(int param_1,int param_2)

{
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [8];
  
  *(short *)(param_1 + 0x48) = (short)param_2;
  if (param_2 < 0) {
    fn_0010288c(auStack_10,4,&LAB_0037d8d4,auStack_14,&LAB_0037d8d4);
  }
  else {
    fn_0018a618(auStack_10,4,3,&DAT_0037d8d0,param_2);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x28),auStack_10);
  return;
}



void fn_0037d750(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [12];
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (param_2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
      if (*(int **)(param_1 + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 4))();
        *(undefined4 *)(param_1 + 0x34) = 0;
        return;
      }
    }
  }
  else if (piVar1 == (int *)0x0) {
    iVar2 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)fn_0028fec0(iVar2,*(undefined4 *)(param_1 + 4),
                                   *(undefined4 *)(param_1 + 0x30));
    }
    piVar3 = *(int **)(param_1 + 0x34);
    if (piVar3 != piVar1) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      *(int **)(param_1 + 0x34) = piVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
              (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x10));
    fn_00688ff8(*(undefined4 *)(param_1 + 0x2c));
    fn_0028fe14(*(undefined4 *)(param_1 + 0x34),local_18);
  }
  return;
}



void fn_0037d4a0(undefined4 *param_1)

{
  *param_1 = &DAT_008291c0;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_0069e808(param_1);
  fn_002feef8();
  return;
}



undefined4 *
fn_0037d370(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)fn_0069e7cc(param_1);
  *puVar1 = &DAT_008291c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xff;
  piVar2 = (int *)(**(code **)(*param_3 + 0x2c))
                            (param_3,(char *)&DAT_0037d490,1,*(code **)(*param_3 + 0x2c),param_5);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a928) goto LAB_0037d410;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0037d410:
  iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_002b20c0(iVar4,param_2,piVar2,1,puVar1[4],1,0);
  }
  piVar2 = (int *)puVar1[5];
  if (piVar2 != piVar5) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    puVar1[5] = piVar5;
  }
  (**(code **)(*(int *)puVar1[5] + 0x10))();
  return puVar1;
}


