#include "003afdac_003ba5a0.h"



undefined4 fn_003ba5a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001caa80(iVar1,param_1[1],0);
  }
  piVar5 = (int *)param_1[0x19];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x19] = (int)piVar2;
  }
  *(int **)(param_1[0x19] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x19] + 0x24))((int *)param_1[0x19],1);
  *(undefined1 *)(param_1[0x19] + 0x45) = 0;
  *(undefined1 *)(param_1[0x19] + 0x44) = 0;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008963ac) goto LAB_003ba678;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003ba678:
  param_1[0x1b] = (int)puVar3;
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0x7e);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894a9c) goto LAB_003ba6bc;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003ba6bc:
  param_1[0x1c] = (int)puVar3;
  fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003ba8d0,0,1,0);
  iVar1 = *(int *)(param_1[0x1b] + 0x34);
  if (iVar1 == 1) {
    fn_003c1f64(param_1[0x1b]);
    *(undefined1 *)((int)param_1 + 0x87) = 0;
    iVar1 = DAT_00897828;
    param_1[0x1d] = DAT_00897828;
    *(undefined4 *)(iVar1 + 0x68) = 0xda;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)((int)param_1 + 0x87) = 1;
    iVar1 = DAT_00897830;
    param_1[0x1d] = DAT_00897830;
    *(undefined4 *)(iVar1 + 0x68) = 0xda;
  }
  if ((*(int *)(DAT_00897850 + 0x20) != 0) && (*(int *)(DAT_00897850 + 0x20) == 7)) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  iVar1 = fn_0066e17c(DAT_00897850);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if ((char)param_1[0x22] == '\0') {
    fn_0040f564(*(undefined4 *)(param_1[0x1b] + 0x3c),1);
  }
  if ((*(char *)((int)param_1 + 0x87) != '\0') && ((char)param_1[0x22] == '\0')) {
    iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)fn_005f62c0();
      puVar3[8] = &DAT_00859420;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      *puVar3 = &DAT_00859b38;
      iVar1 = fn_00119b40(puVar3 + 0x10);
      puVar3 = (undefined4 *)(iVar1 + -0x40);
      fn_0066ddbc();
      fn_002fec40(iVar1 + 0x18,s_TaskEndMatchmake_008c6e09);
      *puVar3 = &DAT_00859e00;
      fn_00673818(puVar3);
    }
    param_1[0x1f] = (int)puVar3;
  }
  iVar1 = fn_001f7e04(param_1,0x80);
  if (iVar1 == 0) {
    fn_00689878(param_1,0x80);
  }
  puVar3 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008964f4) goto LAB_003ba884;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003ba884:
  param_1[0x1e] = (int)puVar3;
  if (*(char *)((int)param_1 + 0x87) == '\0') {
    *(undefined1 *)(puVar3 + 2) = 0;
  }
  else {
    *(undefined1 *)(puVar3 + 2) = 1;
    *(undefined1 *)(param_1[0x1e] + 0xc) = 0;
    fn_0066e620(DAT_00897850,1);
  }
  return 1;
}



undefined4 fn_003afdac(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_68 [17];
  
  puVar9 = *(undefined4 **)(param_1 + 0x18);
  if (puVar9 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar4 == &DAT_00891df8) goto LAB_003afdf8;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_003afdf8:
  *(undefined4 **)(param_1 + 100) = puVar9;
  uVar5 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00891e10,&DAT_003b01b0,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  local_68[0] = 0;
  uVar5 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar5,DAT_00891e14,&DAT_003b01b8,1,1);
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  local_68[0] = 0;
  uVar5 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),DAT_00891e18,
                       &DAT_003b01b8,1,0);
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  iVar6 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  piVar10 = *(int **)(iVar6 + 0x10);
  uVar8 = 0;
  do {
    fn_0017d96c(local_68,0x20,0x1f,(char *)&DAT_003b01bc,uVar8);
    uVar5 = (**(code **)(*piVar10 + 0x2c))(piVar10,local_68,1);
    uVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c) >> 2;
    if (uVar1 <= uVar8) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar8,uVar1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x7c) + uVar8 * 4) = uVar5;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  bVar12 = false;
  iVar6 = 0;
  do {
    fn_0017d96c(local_68,0x20,0x1f,(char *)&DAT_003b01dc,iVar6);
    piVar7 = (int *)(**(code **)(*piVar10 + 0x2c))(piVar10,local_68,1);
    if (piVar7 != (int *)0x0) {
      puVar9 = (undefined4 *)(**(code **)(*piVar7 + 8))(piVar7);
      do {
        if (puVar9 == &DAT_0089a930) goto LAB_003aff64;
        puVar9 = (undefined4 *)*puVar9;
      } while (puVar9 != (undefined4 *)0x0);
    }
    piVar7 = (int *)0x0;
LAB_003aff64:
    cVar2 = fn_006bc57c(*(undefined4 *)(DAT_00897804 + 0x20),iVar6);
    if (cVar2 == '\0') {
      bVar12 = true;
      fn_0018a618(local_68,0x20,0x1f,&DAT_003b0228,iVar6 + 1);
      fn_0015b0dc(local_68);
      uVar5 = fn_001c80ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                           (char *)&DAT_003b0230);
      fn_00190d50(piVar7,uVar5);
    }
    else {
      uVar5 = fn_0022f4ec();
      fn_00190d50(piVar7,uVar5);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  piVar10 = (int *)(**(code **)(*piVar10 + 0x2c))(piVar10,(char *)&DAT_003b01f0,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a930) goto LAB_003affe8;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003affe8:
  bVar11 = (*(byte *)((int)piVar10 + 0xd1) & 3) != 1;
  *(byte *)(piVar10 + 0x34) = *(byte *)(piVar10 + 0x34) | bVar11 << 2;
  if (bVar11) {
    *(byte *)((int)piVar10 + 0xd1) = *(byte *)((int)piVar10 + 0xd1) & 0xfc | 1;
  }
  if (bVar12) {
    uVar5 = fn_001c80ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                         (char *)&DAT_003b0204);
    fn_00190d50(piVar10,uVar5);
  }
  else {
    uVar5 = fn_001c80ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                         (char *)&DAT_003b0258);
    fn_00190d50(piVar10,uVar5);
  }
  iVar6 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
  piVar7 = *(int **)(iVar6 + 0x10);
  piVar10 = (int *)fn_00172c98(iVar6,(char *)&DAT_003b027c);
  piVar10 = (int *)(**(code **)(*piVar10 + 0x2c))(piVar10,(char *)&DAT_003b0290,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a934) goto LAB_003b011c;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003b011c:
  *(int **)(param_1 + 0x88) = piVar10;
  piVar10 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_003b01f0,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a930) goto LAB_003b0168;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003b0168:
  *(int **)(param_1 + 0x8c) = piVar10;
  bVar12 = (*(byte *)((int)piVar10 + 0xd1) & 3) != 1;
  *(byte *)(piVar10 + 0x34) = *(byte *)(piVar10 + 0x34) | bVar12 << 2;
  if (bVar12) {
    *(byte *)((int)piVar10 + 0xd1) = *(byte *)((int)piVar10 + 0xd1) & 0xfc | 1;
  }
  piVar10 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_003b0654,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a934) goto LAB_003b02f4;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003b02f4:
  *(int **)(*(int *)(param_1 + 0x90) + 4) = piVar10;
  piVar10 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_003b0664,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a934) goto LAB_003b0348;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003b0348:
  *(int **)(*(int *)(param_1 + 0x9c) + 4) = piVar10;
  piVar10 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_003b0678,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a934) goto LAB_003b039c;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003b039c:
  **(int **)(param_1 + 0x90) = (int)piVar10;
  piVar10 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,(char *)&DAT_003b0688,1);
  if (piVar10 != (int *)0x0) {
    puVar9 = (undefined4 *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (puVar9 == &DAT_0089a934) goto LAB_003b03ec;
      puVar9 = (undefined4 *)*puVar9;
    } while (puVar9 != (undefined4 *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_003b03ec:
  **(int **)(param_1 + 0x9c) = (int)piVar10;
  iVar6 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar6 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)fn_001caa80(iVar6,*(undefined4 *)(param_1 + 4),0);
  }
  piVar7 = *(int **)(param_1 + 0xa8);
  if (piVar7 != piVar10) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    *(int **)(param_1 + 0xa8) = piVar10;
  }
  *(int *)(*(int *)(param_1 + 0xa8) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x24))(*(int **)(param_1 + 0xa8),1,4);
  uVar8 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x44) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x45) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x10) = 0x100094e;
  *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x18) = 0x100094c;
  do {
    uVar5 = *(undefined4 *)(param_1 + 0xa8);
    uVar1 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c) >> 2;
    if (uVar1 <= uVar8) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar8,uVar1);
    }
    fn_001c9d44(uVar5,uVar8,*(undefined4 *)(*(int *)(param_1 + 0x7c) + uVar8 * 4),0);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  iVar6 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar10 = (int *)0x0;
  if (iVar6 != 0) {
    piVar10 = (int *)fn_001caa80(iVar6,*(undefined4 *)(param_1 + 4),0);
  }
  piVar7 = *(int **)(param_1 + 0xac);
  if (piVar7 != piVar10) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    *(int **)(param_1 + 0xac) = piVar10;
  }
  *(int *)(*(int *)(param_1 + 0xac) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0xac) + 0x24))(*(int **)(param_1 + 0xac),2,1);
  iVar6 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xac) + 0x45) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xac) + 0x44) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x10) = 0x100094e;
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x18) = 0x100094c;
  do {
    fn_001c9d44(*(undefined4 *)(param_1 + 0xac),iVar6,
                 *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar6 * 4),0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x2c))(*(int **)(param_1 + 0xa8),0,0);
  uVar8 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c);
    if ((uint)(iVar6 >> 2) <= uVar8) {
      iVar6 = fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar8,iVar6 >> 2);
    }
    bVar3 = (byte)iVar6;
    if (uVar8 == 0) {
      bVar3 = 1;
    }
    if (uVar8 != 0) {
      bVar3 = 0;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + uVar8 * 4);
    uVar8 = uVar8 + 1;
    *(byte *)(iVar6 + 0x44) = bVar3 | *(byte *)(iVar6 + 0x44) & 0xfe;
  } while ((int)uVar8 < 4);
  iVar6 = fn_00154ac8(0x84);
  if (iVar6 == 0) {
    fn_00144834(0x84,1);
    fn_00178eec(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),0);
    fn_00178eec(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),1);
    fn_001caa40(*(undefined4 *)(param_1 + 0xa8),0);
    fn_001caa40(*(undefined4 *)(param_1 + 0xac),0);
    uVar5 = fn_001c80ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                         (char *)&DAT_003b076c);
    fn_00190d50(*(undefined4 *)(param_1 + 0x8c),uVar5);
    fn_003b0ed0(param_1,0);
    fn_003afcc8(param_1,uVar5);
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  else {
    fn_00178eec(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),1);
    fn_00178eec(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),0);
    fn_001caa40(*(undefined4 *)(param_1 + 0xa8),1);
    fn_001caa40(*(undefined4 *)(param_1 + 0xac),0);
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  return 1;
}


