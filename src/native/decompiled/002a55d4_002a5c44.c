#include "002a55d4_002a5c44.h"



void fn_002a5c44(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  uint local_34;
  uint local_30 [3];
  
  uVar6 = DAT_00897800;
  local_34 = fn_0016ba34(DAT_00897800,DAT_008918dc,(char *)&DAT_002a5ff4,0);
  uVar1 = fn_00100b58();
  puVar13 = &DAT_008f9cf4;
  puVar2 = puVar13;
  if (uVar1 != 0) {
    puVar5 = local_30 + 1;
    if (0x20 < uVar1) {
      puVar5 = local_30;
    }
    local_30[0] = uVar1;
    local_30[1] = 0x20;
    uVar11 = *puVar5;
    if (0xfffffff1 < uVar11) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar11,0xfffffff1);
    }
    if (uVar11 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar11);
    }
    if (uVar11 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar11 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar2[2] = uVar1;
      puVar7 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      puVar2[1] = uVar11;
      *puVar2 = 0;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  fn_00301a9c(puVar2,local_34,uVar1 << 1);
  uVar9 = 0;
  iVar3 = fn_002a5800(param_1);
  if (iVar3 != 0) goto LAB_002a60c4;
  fn_0016bad4(uVar6,*(undefined4 *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 8) + 8));
  uVar9 = fn_006c8a2c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  fn_0016bad4(uVar6,uVar9);
  puVar4 = (undefined4 *)fn_0016ba34(uVar6,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a6014,0);
  uVar12 = puVar2[-1];
  uVar1 = fn_00100b58();
  uVar11 = puVar2[-1];
  if (uVar11 < uVar12) {
    if (uVar1 < uVar11) {
      uVar10 = uVar11;
    }
    else {
      uVar10 = uVar1;
    }
    uVar8 = 0;
    if (uVar11 < uVar12) {
      uVar8 = uVar12;
    }
    fn_002ff628(9,&DAT_008c7610,&DAT_008c7610,uVar8,uVar10);
  }
  if (-uVar1 - 0xf < (uint)puVar2[-1]) {
    fn_002ff628(8,&DAT_008c7610,&DAT_008c7610,puVar2[-1],-uVar1 - 0xf);
  }
  uVar11 = puVar2[-1];
  uVar10 = uVar11 + uVar1;
  if (uVar10 == 0) {
    if (puVar2 != &DAT_008f9cf4) {
      iVar3 = puVar2[-3];
      if ((iVar3 == -1) || ((puVar2 + -3 != &DAT_008f9ce8 && (puVar2[-3] = iVar3 + -1, iVar3 == 0)))
         ) {
        fn_001008c4(puVar2 + -3,puVar2[-2] + 8,0);
      }
    }
  }
  else {
    iVar3 = uVar11 - uVar12;
    uVar8 = puVar2[-3] + 1;
    bVar15 = puVar2[-3] != -1;
    bVar14 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar15 = (uint)puVar2[-2] <= uVar10;
      bVar14 = uVar10 == puVar2[-2];
    }
    if (bVar15 && !bVar14) {
LAB_002a5e88:
      local_34 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (local_34 < uVar11 + 0x80) {
        local_34 = uVar11 + 0x80;
      }
      puVar5 = local_30;
      if (uVar10 <= local_34) {
        puVar5 = &local_34;
      }
      local_30[0] = uVar10;
      uVar11 = *puVar5;
      if (0xfffffff1 < uVar11) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar11,0xfffffff1);
      }
      if (uVar11 < uVar10) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,uVar11);
      }
      if (uVar11 == 0) {
        puVar13 = &DAT_008f9ce8;
      }
      else {
        puVar13 = (undefined4 *)fn_00100fc6((uVar11 + 8) * 2,0);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
        }
        puVar13[2] = uVar10;
        puVar7 = (undefined2 *)((int)puVar13 + uVar10 * 2 + 0xc);
        *puVar13 = 0;
        puVar13[1] = uVar11;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      if (uVar12 != 0) {
        fn_00301a9c(puVar13 + 3,puVar2,uVar12 << 1);
      }
      if (uVar1 != 0) {
        fn_00301a9c((int)puVar13 + uVar12 * 2 + 0xc,puVar4,uVar1 << 1);
      }
      if (iVar3 != 0) {
        fn_00301a9c((int)puVar13 + uVar1 * 2 + uVar12 * 2 + 0xc,(int)puVar2 + uVar12 * 2,iVar3 * 2)
        ;
      }
      if (puVar2 != &DAT_008f9cf4) {
        iVar3 = puVar2[-3];
        if ((iVar3 == -1) ||
           ((puVar2 + -3 != &DAT_008f9ce8 && (puVar2[-3] = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(puVar2 + -3,puVar2[-2] + 8,0);
        }
      }
      puVar13 = puVar13 + 3;
    }
    else {
      if (puVar4 != (undefined4 *)0x0) {
        bVar14 = puVar4 <= puVar2;
        if (puVar2 <= puVar4) {
          bVar14 = (undefined4 *)((int)puVar2 + uVar11 * 2) <= puVar4;
        }
        if (!bVar14) goto LAB_002a5e88;
      }
      if (iVar3 != 0) {
        fn_001006ac(uVar12 * 2 + uVar1 * 2 + (int)puVar2,uVar12 * 2 + (int)puVar2,iVar3);
      }
      if (uVar1 != 0) {
        fn_001006ac((int)puVar2 + uVar12 * 2,puVar4,uVar1);
      }
      puVar2[-1] = uVar10;
      *(undefined2 *)((int)puVar2 + uVar10 * 2) = 0;
      puVar13 = puVar2;
    }
  }
  uVar9 = 1;
  puVar2 = puVar13;
LAB_002a60c4:
  uVar6 = fn_006f75ac(DAT_008977e0);
  fn_0038fee8(uVar6,puVar2);
  uVar6 = fn_006f75ac(DAT_008977e0);
  fn_0038ff40(uVar6,0,uVar9,1,0);
  if (puVar2 != &DAT_008f9cf4) {
    iVar3 = puVar2[-3];
    if ((iVar3 == -1) || ((puVar2 + -3 != &DAT_008f9ce8 && (puVar2[-3] = iVar3 + -1, iVar3 == 0))))
    {
      fn_002feef8(puVar2 + -3,puVar2[-2] + 8,0);
      return;
    }
  }
  return;
}



void fn_002a5a4c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
  uVar2 = fn_006c958c();
  iVar3 = fn_006c9504(uVar1,uVar2);
  if (iVar3 == param_2) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



undefined4 fn_002a5910(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong local_28;
  
  iVar2 = *(int *)(DAT_008977e0 + 0x40);
  iVar3 = fn_006f6e40();
  if (iVar3 == 2) {
    iVar2 = *(int *)(DAT_008977e0 + 0x58);
    iVar3 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 8);
    *(int *)(iVar3 + 0x14) = *(int *)(iVar2 + 0x28) + 1;
    uVar4 = fn_006a826c(*(undefined4 *)(param_1 + 0x14));
    local_28 = (ulonglong)uVar4 * 1000000000;
    fn_00318be8(iVar3,&local_28);
    cVar1 = *(char *)(iVar2 + 8);
    if (cVar1 != '\x02') {
      cVar1 = '\x01';
    }
    param_1[0x20] = cVar1;
    fn_00682cb8(*(undefined4 *)(DAT_008977e0 + 0x3c),0);
    return 1;
  }
  if (iVar3 == 3) {
    cVar1 = *(char *)(*(int *)(iVar2 + 4) + 0x20);
    bVar5 = cVar1 == '\x01';
    if (bVar5) {
      cVar1 = param_1[10];
    }
    if (((bVar5 && cVar1 == '\0') &&
        (uVar4 = fn_006a826c(*(undefined4 *)(param_1 + 0x14)), 0x2cf < uVar4)) &&
       (iVar2 = fn_006a816c(*(undefined4 *)(param_1 + 0x14)), iVar2 != 0)) {
      iVar2 = fn_006f7a84(DAT_008977e0);
      *(undefined1 *)(iVar2 + 0x3e1) = 0;
      *param_1 = 6;
      *(undefined4 *)(param_1 + 4) = 0;
      param_1[10] = 1;
    }
  }
  return 1;
}



undefined4 fn_002a5800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (**(int **)(DAT_008977e0 + 0x40) != 0) {
    iVar1 = fn_006f6e40();
    if (iVar1 == 1) {
LAB_002a58f8:
      uVar2 = fn_006b8c88(param_1);
      return uVar2;
    }
    if (iVar1 == 2) {
      if (*(char *)(param_1 + 0x20) == '\0') {
        return 0;
      }
      return 1;
    }
    if (iVar1 == 3) {
      fn_006f7a84(DAT_008977e0);
      iVar1 = fn_006aab38();
      if (iVar1 == 0) {
        if (*(char *)(*(int *)(param_1 + 0x1c) + 0x18) != '\0') {
          return 1;
        }
        iVar1 = fn_006a81ec(*(undefined4 *)(param_1 + 0x14));
        if ((((iVar1 != 0) && (*(char *)(*(int *)(param_1 + 0x14) + 0x14) == '\0')) &&
            (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
           (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
          *(undefined1 *)(param_1 + 9) = 1;
          return 1;
        }
        if (*(char *)(param_1 + 0xb) != '\0') {
          return 1;
        }
        goto LAB_002a58f8;
      }
    }
  }
  return 0;
}



void fn_002a55d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint local_30 [3];
  
  fn_00318bf4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8));
  iVar1 = fn_006b8c88(param_1);
  uVar2 = DAT_00897800;
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
    fn_0015b064((int)*(short *)(iVar1 + 0x4c));
    fn_0015b0dc();
    fn_0015b0f8(param_2);
    fn_0015b0f8(*(undefined4 *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 8) + 8));
    fn_006c8a2c(iVar1);
    fn_0015b0f8();
    uVar2 = fn_0016ba34(uVar2,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a57e8,0);
    uVar3 = fn_00100b58();
    puVar7 = &DAT_008f9ce8;
    puVar6 = &DAT_008f9cf4;
    if (uVar3 != 0) {
      puVar4 = local_30 + 1;
      if (0x20 < uVar3) {
        puVar4 = local_30;
      }
      local_30[0] = uVar3;
      local_30[1] = 0x20;
      uVar8 = *puVar4;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar8);
      }
      if (uVar8 != 0) {
        puVar7 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        puVar7[2] = uVar3;
        puVar5 = (undefined2 *)((int)puVar7 + uVar3 * 2 + 0xc);
        *puVar7 = 0;
        puVar7[1] = uVar8;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      puVar6 = puVar7 + 3;
    }
    fn_00301a9c(puVar6,uVar2,uVar3 << 1);
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038fee8(uVar2,puVar6);
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar2,0,param_3,1,0);
    if (puVar6 != &DAT_008f9cf4) {
      iVar1 = puVar6[-3];
      if ((iVar1 == -1) || ((puVar6 + -3 != &DAT_008f9ce8 && (puVar6[-3] = iVar1 + -1, iVar1 == 0)))
         ) {
        fn_002feef8(puVar6 + -3,puVar6[-2] + 8,0);
        return;
      }
    }
  }
  return;
}


