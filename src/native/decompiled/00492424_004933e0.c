#include "00492424_004933e0.h"



int fn_004933e0(int param_1,int param_2)

{
  fn_00473520();
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  fn_0079dd48(param_1 + 0x38,param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  fn_0079c5b8(param_1 + 0x4c,param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  fn_0079c5b8(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  fn_0048d3c8(param_1 + 0x70,param_2 + 0x70);
  fn_0014f510(param_1 + 0x98,param_2 + 0x98);
  fn_00170fa4(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)(param_2 + 0xad);
  return param_1;
}



void fn_0049338c(void)

{
  fn_0049339c();
  fn_00455018();
  return;
}



void fn_00492e08(int param_1,int param_2)

{
  fn_004732fc(param_2,param_1);
  if ((*(char *)(param_2 + 4) == '\0') &&
     (*(undefined1 *)(param_1 + 0x30) = 0, *(char *)(param_2 + 4) == '\0')) {
    fn_0047faf0(param_2,param_1 + 0x34);
    return;
  }
  return;
}



undefined4 fn_00492ba0(int param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  piVar3 = (int *)(param_1 + 0xc);
  (**(code **)(*piVar3 + 8))();
  puVar5 = *(ushort **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x3c) - (int)puVar5 >> 3;
  while (iVar2 = iVar1, 0 < iVar2) {
    iVar1 = iVar2 / 2;
    if (puVar5[iVar1 * 4] < param_2) {
      puVar5 = puVar5 + iVar1 * 4 + 4;
      iVar1 = (iVar2 - iVar1) + -1;
    }
  }
  puVar4 = *(ushort **)(param_1 + 0x3c);
  if ((puVar4 == puVar5) || (param_2 < *puVar5)) {
    if ((puVar4 == *(ushort **)(param_1 + 0x40)) || (puVar4 != puVar5)) {
      fn_0079a6b8(param_1 + 0x38);
    }
    else {
      *(ushort **)(param_1 + 0x3c) = puVar4 + 4;
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = param_2;
        *(undefined4 *)(puVar4 + 2) = param_3;
      }
    }
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_00492b60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_14;
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = param_1;
  uStack_14 = param_2;
  (**(code **)(*piVar1 + 8))();
  fn_0074c034(param_1 + 0x34,&uStack_14,param_3,param_4,iVar2);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_00492a60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_008b637e != '\0') {
    fn_00477090(*(undefined4 *)(param_1 + 8));
  }
  cVar1 = *(char *)(param_1 + 4);
  while (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 3 == 0) {
      fn_00735640(100000000,0);
    }
    else {
      if (DAT_008b6430 == 0) {
        fn_00735644();
      }
      else {
        fn_00735640((int)((ulonglong)DAT_008b6430 * 1000000),
                     (int)((ulonglong)DAT_008b6430 * 1000000 >> 0x20));
      }
      (**(code **)(*(int *)(param_1 + 0xc) + 8))();
      iVar2 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) != iVar2) {
        do {
          uVar3 = *(undefined4 *)(iVar2 + 4);
          fn_004a749c(uVar3,1);
          fn_004a7300(uVar3);
          iVar2 = iVar2 + 8;
        } while (*(int *)(param_1 + 0x3c) != iVar2);
      }
      (**(code **)(*(int *)(param_1 + 0xc) + 0xc))((int *)(param_1 + 0xc));
    }
    cVar1 = *(char *)(param_1 + 4);
  }
  return;
}



void fn_004928b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  uVar1 = fn_004ba934(param_2);
  uVar1 = uVar1 & 0x7fff;
  if ((uVar1 == 0) || (0xf < uVar1)) {
    local_14[0] = 0x80010002;
    fn_004b8d4c(auStack_20,local_14);
    fn_004ba5a4();
  }
  else if (*(code **)(&DAT_008e6868 + uVar1 * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x00492910 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_008e6868 + uVar1 * 4))(param_2,param_3);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004926e0) */
/* WARNING: Removing unreachable block (ram,0x004924b4) */
/* WARNING: Removing unreachable block (ram,0x004924bc) */
/* WARNING: Removing unreachable block (ram,0x004926e8) */

void fn_00492424(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  piVar2 = (int *)fn_0048cbf8(param_2,0);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != piVar2[1]) {
      piVar2[1] = *piVar2;
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar6 + 0x10) - iVar10) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar7 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
      uVar11 = *puVar7;
      bVar1 = *(byte *)((int)puVar7 + 3);
      *(int *)(param_1 + 0xc) = iVar10 + 4;
      uVar11 = uVar11 & 0xffffff | (uint)bVar1 << 0x18;
      if ((uint)(piVar2[2] - *piVar2) < uVar11) {
        uVar8 = piVar2[1] - *piVar2;
        uVar3 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (uVar3 < uVar8 + 0x20) {
          uVar3 = uVar8 + 0x20;
        }
        uVar8 = uVar11;
        if (uVar11 < uVar3) {
          uVar8 = uVar3;
        }
        puVar4 = (undefined1 *)fn_0015ece0(uVar8);
        puVar12 = (undefined1 *)piVar2[1];
        puVar5 = puVar4;
        for (puVar9 = (undefined1 *)*piVar2; puVar9 != puVar12; puVar9 = puVar9 + 1) {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = *puVar9;
          }
          puVar5 = puVar5 + 1;
        }
        for (iVar6 = *piVar2; iVar6 != piVar2[1]; iVar6 = iVar6 + 1) {
        }
        fn_0014f1bc(*piVar2);
        iVar6 = *piVar2;
        *piVar2 = (int)puVar4;
        piVar2[1] = (int)(puVar4 + (piVar2[1] - iVar6));
        piVar2[2] = (int)(puVar4 + uVar8);
      }
      uVar3 = 0;
      while( true ) {
        if (uVar11 <= uVar3) {
          return;
        }
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
        iVar10 = *(int *)(param_1 + 8);
        iVar6 = *(int *)(param_1 + 0xc);
        if (*(int *)(iVar10 + 0x10) == iVar6) {
          *(undefined1 *)(param_1 + 4) = 1;
          local_24[0] = 0;
        }
        else {
          local_24[0] = *(undefined1 *)(*(int *)(iVar10 + 0xc) + *(int *)(iVar10 + 0x18) + iVar6);
          *(int *)(param_1 + 0xc) = iVar6 + 1;
        }
        if (*(char *)(param_1 + 4) != '\0') break;
        puVar9 = (undefined1 *)piVar2[1];
        if (puVar9 == (undefined1 *)piVar2[2]) {
          fn_0079b730(piVar2,puVar9,local_24);
        }
        else {
          piVar2[1] = (int)(puVar9 + 1);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = local_24[0];
          }
        }
        uVar3 = uVar3 + 1;
      }
      if (*piVar2 != piVar2[1]) {
        piVar2[1] = *piVar2;
      }
    }
    return;
  }
  fn_00101a1c(&local_34,&LAB_0075552c,0xc,1);
  puVar9 = local_34;
  if (local_34 != local_30) {
    do {
      puVar9 = puVar9 + 1;
    } while (puVar9 != local_30);
    local_30 = local_34;
  }
  iVar6 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if ((uint)(*(int *)(iVar6 + 0x10) - iVar10) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    puVar7 = (uint *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
    uVar11 = *puVar7;
    bVar1 = *(byte *)((int)puVar7 + 3);
    *(int *)(param_1 + 0xc) = iVar10 + 4;
    uVar11 = uVar11 & 0xffffff | (uint)bVar1 << 0x18;
    if ((uint)((int)local_2c - (int)local_34) < uVar11) {
      uVar8 = (int)local_30 - (int)local_34;
      uVar3 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (uVar3 < uVar8 + 0x20) {
        uVar3 = uVar8 + 0x20;
      }
      uVar8 = uVar11;
      if (uVar11 < uVar3) {
        uVar8 = uVar3;
      }
      puVar4 = (undefined1 *)fn_0015ece0(uVar8);
      puVar5 = puVar4;
      for (puVar9 = local_34; puVar12 = local_34, puVar9 != local_30; puVar9 = puVar9 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar9;
        }
        puVar5 = puVar5 + 1;
      }
      for (; puVar12 != local_30; puVar12 = puVar12 + 1) {
      }
      fn_0014f1bc(local_34);
      local_30 = puVar4 + ((int)local_30 - (int)local_34);
      local_2c = puVar4 + uVar8;
      local_34 = puVar4;
    }
    uVar3 = 0;
    while( true ) {
      if ((uVar11 <= uVar3) || (*(char *)(param_1 + 4) != '\0')) goto LAB_00492890;
      iVar6 = *(int *)(param_1 + 8);
      iVar10 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar6 + 0x10) == iVar10) {
        *(undefined1 *)(param_1 + 4) = 1;
        local_28[0] = 0;
      }
      else {
        local_28[0] = *(undefined1 *)(*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0xc) + iVar10);
        *(int *)(param_1 + 0xc) = iVar10 + 1;
      }
      if (*(char *)(param_1 + 4) != '\0') break;
      if (local_30 == local_2c) {
        fn_0079b730(&local_34,local_30,local_28);
        puVar9 = local_30;
      }
      else {
        puVar9 = local_30 + 1;
        if (local_30 != (undefined1 *)0x0) {
          *local_30 = local_28[0];
        }
      }
      local_30 = puVar9;
      uVar3 = uVar3 + 1;
    }
    puVar9 = local_34;
    if (local_34 != local_30) {
      do {
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_30);
      local_30 = local_34;
    }
  }
LAB_00492890:
  fn_00100414(&local_34,fn_004b93c4,0xc,1);
  return;
}


