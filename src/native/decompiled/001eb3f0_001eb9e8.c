#include "001eb3f0_001eb9e8.h"



void fn_001eb9e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  fn_001cee1c();
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = fn_0012a26c(*(undefined4 *)(param_1 + 0xf8c));
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xf8c));
  fn_001ce928(uVar1,(char *)&DAT_001f5020,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(char *)&DAT_001f5020,uVar6);
  iVar2 = 0;
  do {
    iVar4 = iVar2 + 1;
    iVar2 = param_1 + iVar2 * 0x2c;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0xffffffff;
    *(undefined1 *)(iVar2 + 0x9c) = 0xff;
    *(undefined4 *)(iVar2 + 0xa0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xa4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xa8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xac) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xb0) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xb4) = 0xffffffff;
    iVar2 = iVar4;
  } while (iVar4 < 0x50);
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(L"patch:/data/Script/Field/Event/EventFlagTbl.bin",uVar1,4,5);
  *(int *)(param_1 + 0xe54) = iVar2;
  if ((iVar2 != 0) && (iVar2 = fn_00145ac0(), iVar2 != 0)) {
    iVar2 = fn_00145b00(8,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xe54));
      piVar3 = (int *)fn_00118624(iVar2,uVar1);
    }
    piVar5 = *(int **)(param_1 + 0xe50);
    if (piVar5 != piVar3) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      *(int **)(param_1 + 0xe50) = piVar3;
    }
  }
  fn_002dbe90(*(undefined4 *)(param_1 + 0xe80));
  uVar1 = fn_006f7a84(DAT_008977e0);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  fn_0025a360(*(undefined4 *)(param_1 + 0xe88));
  iVar2 = 0;
  do {
    iVar4 = iVar2 + 2;
    iVar2 = param_1 + iVar2 * 0xc;
    *(undefined4 *)(iVar2 + 0xe8c) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xe90) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xe98) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xe9c) = 0xffffffff;
    iVar2 = iVar4;
  } while (iVar4 < 0x14);
  return;
}



void fn_001eb968(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  uVar4 = *(uint *)(DAT_008977e0 + 0xa8);
  if (*(int *)(param_1 + 0xe5c) == -1) {
    *(uint *)(param_1 + 0xe5c) = uVar4;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0xe60);
  bVar6 = uVar2 == 0;
  if (bVar6) {
    uVar2 = *(uint *)(param_1 + 0xe5c);
  }
  if (bVar6 && uVar2 == uVar4) {
    iVar1 = fn_006f7a84();
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    uVar5 = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(param_1 + 0xe64) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0xe68) = uVar3;
    *(undefined4 *)(param_1 + 0xe6c) = uVar5;
    iVar1 = fn_006f7a84(DAT_008977e0);
    *(undefined4 *)(param_1 + 0xe70) = *(undefined4 *)(iVar1 + 0x30);
  }
  fn_00697600(DAT_008977e0,param_2);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



uint fn_001eb83c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  while (((-1 < (int)uVar3 && (uVar3 < 0x50)) && (*(int *)(param_1 + uVar3 * 0x2c + 0x8c) != 0))) {
    uVar3 = uVar3 + 1;
    if (0x4f < (int)uVar3) {
      return 0xffffffff;
    }
  }
  if (uVar3 == 0xffffffff || param_2 == -1) {
    return 0xffffffff;
  }
  uVar1 = fn_006f7a70(DAT_008977e0);
  iVar2 = fn_00145b00(0x2fc,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_00687bbc();
  }
  uVar1 = fn_00300ce0(uVar1,piVar4,param_2);
  (**(code **)(*piVar4 + 0xd0))(piVar4,param_3);
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 != 0) {
    piVar4[0x45] = 0;
  }
  param_1 = param_1 + uVar3 * 0x2c;
  *(int **)(param_1 + 0x8c) = piVar4;
  *(int *)(param_1 + 0x94) = param_2;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 != 0) {
    *(uint *)(*(int *)(param_1 + 0x8c) + 0x134) = *(uint *)(*(int *)(param_1 + 0x8c) + 0x134) | 1;
  }
  return uVar3;
}



void fn_001eb6d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uVar6 = 0;
  do {
    iVar7 = param_1 + uVar6 * 0x2c;
    uVar1 = *(uint *)(iVar7 + 0xa0);
    if (((((uVar1 != 0xffffffff) && (-1 < (int)uVar6)) && (uVar6 < 0x50)) &&
        ((*(int *)(iVar7 + 0x8c) != 0 && (-1 < (int)uVar1)))) && (uVar1 < 0x50)) {
      iVar8 = *(int *)(param_1 + uVar1 * 0x2c + 0x8c);
      if (iVar8 != 0) {
        local_2c = *(undefined4 *)(*(int *)(iVar7 + 0x8c) + 0xe4);
        uVar9 = *(undefined4 *)(iVar8 + 0xe4);
        fn_0017fde4();
        uVar2 = fn_0019bc38();
        uVar9 = fn_0017fde4(uVar9);
        puVar3 = (undefined4 *)fn_0019695c(uVar9,uVar2);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &DAT_00858c10;
          uVar4 = puVar3[2];
          uVar1 = uVar4;
          if ((uint)puVar3[3] < uVar4) {
            do {
              uVar1 = uVar1 + 8;
            } while (uVar1 != puVar3[3]);
          }
          fn_001008c4(uVar4,(int)(puVar3[4] - uVar4) >> 3,0);
          fn_002feef8(puVar3);
          uVar2 = fn_0017fde4(local_2c);
          fn_00196998(uVar2,0xffffffff);
        }
        local_38 = *(undefined4 *)(iVar8 + 0x20);
        uStack_34 = *(undefined4 *)(iVar8 + 0x24);
        uStack_30 = *(undefined4 *)(iVar8 + 0x28);
        if (((-1 < (int)uVar6) && (uVar6 < 0x50)) &&
           (piVar5 = *(int **)(iVar7 + 0x8c), piVar5 != (int *)0x0)) {
          (**(code **)(*piVar5 + 0xd0))(piVar5,&local_38);
        }
        *(undefined4 *)(iVar7 + 0xa0) = 0xffffffff;
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x50);
  return;
}



uint fn_001eb5c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  while (((-1 < (int)uVar4 && (uVar4 < 0x50)) && (*(int *)(param_1 + uVar4 * 0x2c + 0x8c) != 0))) {
    uVar4 = uVar4 + 1;
    if (0x4f < (int)uVar4) {
      return 0xffffffff;
    }
  }
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  if (param_3 == -1) {
    uVar1 = fn_006f74f4(DAT_008977e0);
    fn_006c2ed4(uVar1,param_2);
    iVar2 = fn_0026e5c4();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = fn_006f74f4(DAT_008977e0);
  piVar3 = (int *)fn_006c2de8(uVar1,param_2);
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  uVar1 = fn_006f7a70(DAT_008977e0);
  uVar1 = fn_002fe310(uVar1,piVar3,param_3);
  (**(code **)(*piVar3 + 0x10))(piVar3,param_4);
  param_1 = param_1 + uVar4 * 0x2c;
  *(int **)(param_1 + 0x8c) = piVar3;
  *(int *)(param_1 + 0x94) = param_3;
  *(undefined1 *)(param_1 + 0x9c) = 2;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  return uVar4;
}



uint fn_001eb5bc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  while (((-1 < (int)uVar4 && (uVar4 < 0x50)) && (*(int *)(param_1 + uVar4 * 0x2c + 0x8c) != 0))) {
    uVar4 = uVar4 + 1;
    if (0x4f < (int)uVar4) {
      return 0xffffffff;
    }
  }
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  if (param_3 == -1) {
    uVar1 = fn_006f74f4(DAT_008977e0);
    fn_006c2ed4(uVar1,param_2);
    iVar2 = fn_0026e5c4();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = fn_006f74f4(DAT_008977e0);
  piVar3 = (int *)fn_006c2de8(uVar1,param_2);
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  uVar1 = fn_006f7a70(DAT_008977e0);
  uVar1 = fn_002fe310(uVar1,piVar3,param_3);
  (**(code **)(*piVar3 + 0x10))(piVar3,param_4);
  param_1 = param_1 + uVar4 * 0x2c;
  *(int **)(param_1 + 0x8c) = piVar3;
  *(int *)(param_1 + 0x94) = param_3;
  *(undefined1 *)(param_1 + 0x9c) = 2;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  return uVar4;
}



void fn_001eb3f0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_0081bfa8;
  if ((int *)param_1[0x101] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x101] + 4))();
  }
  if ((int *)param_1[0xed] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xed] + 4))();
  }
  if (param_1[0xe2] != 0) {
    fn_001fa314();
    fn_002feef8();
  }
  if ((int *)param_1[0xde] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xde] + 4))();
  }
  if (param_1[0xd0] != 0) {
    fn_002feef8(param_1[0xd0]);
  }
  if (-1 < (int)param_1[0xc0]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0xc0] = -1;
  }
  uVar1 = param_1[0x77];
  uVar2 = uVar1;
  if ((uint)param_1[0x78] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x78]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x79] - uVar1) >> 2,0);
  puVar3 = (undefined4 *)param_1[0x67];
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(param_1 + 0x68) != '\0')) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
  }
  puVar3 = (undefined4 *)param_1[0x65];
  if ((puVar3 != (undefined4 *)0x0) && (*(char *)(param_1 + 0x66) != '\0')) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
  }
  if ((int *)param_1[100] != (int *)0x0) {
    (**(code **)(*(int *)param_1[100] + 4))();
  }
  if ((int *)param_1[99] != (int *)0x0) {
    (**(code **)(*(int *)param_1[99] + 4))();
  }
  fn_00100414(param_1 + 0x5f,fn_0079ef28,4);
  fn_001c5968(param_1);
  return;
}


