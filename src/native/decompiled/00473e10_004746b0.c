#include "00473e10_004746b0.h"



void fn_004746b0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  (**(code **)(DAT_008e932c + 8))();
  if (DAT_008b63dc == 0) {
    puVar2 = (undefined4 *)fn_0015ece0(0x40);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_008539fc;
      puVar2[1] = &DAT_00855ae4;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2 = (undefined4 *)fn_004745d8(puVar2 + 6,1);
      puVar3 = puVar2 + -6;
      *puVar2 = &PTR_LAB_00854110;
      DAT_008b637d = 1;
    }
    DAT_008b64a4 = puVar3;
    iVar4 = fn_0015ece0(400);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = fn_004748d8();
    }
    DAT_008b63dc = iVar5;
  }
  else {
    piVar6 = (int *)(DAT_008b63dc + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00474710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e932c + 0xc))(&DAT_008e932c);
  return;
}



void fn_00474678(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = &DAT_00853418;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}



undefined4 * fn_004745d8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_LAB_008533fc;
  param_1[1] = &DAT_0085319c;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[3] = 0;
  fn_0013c500(param_1 + 2);
  param_1[5] = &DAT_0085290c;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



void fn_004742e0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  undefined1 auStack_78 [96];
  undefined4 *local_18;
  
  *param_1 = &DAT_008533e0;
  if (param_1[0x1e] != 0) {
    fn_004565fc(auStack_78);
    iVar1 = fn_00455e10(auStack_78);
    if (iVar1 != 0) {
      param_1[0x1c] = auStack_78;
      if (*(char *)(param_1 + 3) == '\0') {
        fn_004739dc(param_1);
      }
      else {
        fn_00456400(param_1 + 4);
        local_18 = param_1;
        fn_0045616c(param_1 + 4,&DAT_004739d4,&local_18);
        (*(code *)param_1[1])(param_1 + 4,param_1 + 2);
      }
    }
    fn_004562e0(auStack_78,0xffffffff);
    fn_00456728(auStack_78);
  }
  piVar2 = (int *)param_1[0x27];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)param_1[0x25];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
  }
  piVar2 = (int *)param_1[0x26];
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
    param_1[0x26] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))();
  }
  param_1[0x21] = 0;
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  param_1[0x22] = 0;
  param_1[0x1c] = 0;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
    param_1[0x29] = 0;
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a] + 4))();
    param_1[0x2a] = 0;
  }
  (**(code **)(DAT_008e778c + 8))(&DAT_008e778c);
  piVar2 = (int *)fn_0045c8f4();
  puVar4 = (uint *)(piVar2 + 1);
  do {
    uVar3 = *puVar4 - 1;
    bVar5 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar5);
  *puVar4 = uVar3;
  bVar5 = uVar3 == 0;
  if (bVar5) {
    uVar3 = (uint)*(byte *)(piVar2 + 2);
  }
  if (bVar5 && uVar3 == 0) {
    *(undefined1 *)(piVar2 + 2) = 1;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  fn_004b3bb8();
  fn_004b78a0();
  fn_004b3bb8();
  iVar1 = fn_0013ce98(param_1 + 0x2c);
  iVar1 = fn_00456728(iVar1 + -0xa0);
  *(undefined1 *)(iVar1 + -4) = 0;
  return;
}



undefined4 fn_004740f4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = fn_00455e10(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = param_2;
    if (*(char *)(param_1 + 0xc) == '\0') {
      uVar2 = fn_004739dc(param_1);
      return uVar2;
    }
    fn_00456400(param_1 + 0x10);
    local_10 = param_1;
    fn_0045616c(param_1 + 0x10,&DAT_004739d4,&local_10,1);
    (**(code **)(param_1 + 4))(param_1 + 0x10,param_1 + 8);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4
fn_00473e10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_40 [32];
  
  uVar12 = CONCAT44(param_7,param_8);
  uVar11 = CONCAT44(param_9,param_6);
  uVar1 = fn_001249d0();
  fn_00124b28(uVar1,0);
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  uVar1 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  piVar5 = *(int **)(param_1 + 0x9c);
  if (piVar5 != (int *)0x0) {
    if (*(char *)((int)piVar5 + 0x22) != '\x05') goto LAB_00473fa4;
    puVar9 = (uint *)(piVar5 + 1);
    do {
      uVar8 = *puVar9 - 1;
      bVar10 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar10);
    *puVar9 = uVar8;
    bVar10 = uVar8 == 0;
    if (bVar10) {
      uVar8 = (uint)*(byte *)(piVar5 + 2);
    }
    if (bVar10 && uVar8 == 0) {
      *(undefined1 *)(piVar5 + 2) = 1;
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  piVar5 = *(int **)(param_1 + 0x94);
  if (piVar5 != (int *)0x0) {
    if (*(char *)((int)piVar5 + 0x22) != '\x05') goto LAB_00473fa4;
    puVar9 = (uint *)(piVar5 + 1);
    do {
      uVar8 = *puVar9 - 1;
      bVar10 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar10);
    *puVar9 = uVar8;
    bVar10 = uVar8 == 0;
    if (bVar10) {
      uVar8 = (uint)*(byte *)(piVar5 + 2);
    }
    if (bVar10 && uVar8 == 0) {
      *(undefined1 *)(piVar5 + 2) = 1;
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  piVar5 = *(int **)(param_1 + 0x98);
  if (piVar5 != (int *)0x0) {
    if (*(char *)((int)piVar5 + 0x22) != '\x05') goto LAB_00473fa4;
    puVar9 = (uint *)(piVar5 + 1);
    do {
      uVar8 = *puVar9 - 1;
      bVar10 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar10);
    *puVar9 = uVar8;
    bVar10 = uVar8 == 0;
    if (bVar10) {
      uVar8 = (uint)*(byte *)(piVar5 + 2);
    }
    if (bVar10 && uVar8 == 0) {
      *(undefined1 *)(piVar5 + 2) = 1;
      (**(code **)(*piVar5 + 4))();
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  iVar3 = fn_00455e10(param_2);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar2 = fn_0015ecdc(0x30);
      iVar3 = 0;
      if (iVar2 != 0) {
        puVar6 = (undefined4 *)fn_0014f1e0();
        *puVar6 = &DAT_00852880;
        puVar6[3] = 0;
        puVar6[4] = 0;
        iVar3 = fn_0013d40c(puVar6 + 5);
        iVar2 = fn_004b6318(iVar3 + 8,&DAT_007dddfc);
        iVar3 = iVar2 + -0x1c;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      *(int *)(param_1 + 0x78) = iVar3;
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x74);
    }
    iVar3 = fn_0015ecdc(0x328);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      iVar3 = 0;
    }
    else {
      fn_0013d3e8(auStack_40,param_4);
      uVar7 = fn_0049d7ac(iVar3,*(undefined4 *)(param_2 + 0x44),param_1,param_3,auStack_40,
                           (int)param_5,(int)((ulonglong)param_5 >> 0x20),(int)uVar11,
                           (int)((ulonglong)uVar12 >> 0x20),(int)uVar12,
                           (int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0xa0),
                           *(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x94) = uVar7;
      fn_00170f54(auStack_40);
      iVar3 = *(int *)(param_1 + 0x94);
    }
    piVar5 = (int *)(iVar3 + 4);
    do {
      bVar10 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar10);
    *piVar5 = *piVar5 + 1;
    iVar3 = fn_001249d0();
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(iVar3 + 0xc);
    }
    fn_004bdba4(uVar1,*(undefined4 *)(param_1 + 0x94),0);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return 1;
  }
LAB_00473fa4:
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return 0;
}


