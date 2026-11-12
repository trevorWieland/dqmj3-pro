#include "002a7c24_002a85a0.h"



void fn_002a85a0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(*(int **)(param_1 + 0xc),0,0);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(*(int **)(param_1 + 0x10),0,0);
  fn_001f7500(param_1,0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(*(int **)(param_1 + 0x18),0,0);
  iVar1 = fn_006f7a84(DAT_008977e0);
  *(undefined1 *)(iVar1 + 0x3e3) = 0;
  fn_002503cc();
  return;
}



void fn_002a843c(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x112) = 1;
  }
  return;
}



void fn_002a83b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  undefined4 local_18;
  
  iVar3 = param_1[0x14];
  iVar1 = (**(code **)(*param_1 + 8))();
  local_18 = *(undefined4 *)(iVar1 + 8);
  local_1c = iVar3;
  uVar2 = fn_001481c8(local_18,L"rom:/data/Layout/common/status_common_p.arc",&DAT_002a8430,1,1);
  fn_00746754(&local_1c,uVar2);
  uVar2 = fn_001481c8(local_18,L"rom:/data/Layout/common/status_common_m.arc",&DAT_002a8430,1,1);
  fn_00746754(&local_1c,uVar2);
  return;
}



void fn_002a830c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (iVar1 = fn_002f9da0(), iVar1 != 0)) {
    iVar2 = fn_006ad87c(param_1,1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      fn_002feef8(iVar1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      fn_001f749c(param_1,0,0);
      fn_001f748c(param_1,*(undefined4 *)(param_1 + 0x5c),1);
      fn_001f7438(param_1,0,0);
      fn_001f73a0(param_1,0);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return;
}



void fn_002a829c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x114,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_002fa328();
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_002feef8(iVar1);
    }
    *(int *)(param_1 + 0x58) = iVar2;
  }
  fn_002f96c4(*(undefined4 *)(param_1 + 0x58),param_2,param_1,param_4);
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  return;
}



void fn_002a8244(int *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15) = param_2;
  (**(code **)(*param_1 + 0x28))(param_1,0x14);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002a8214(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_0081e984;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  return;
}



void fn_002a8140(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &DAT_0081e95c;
  uVar1 = param_1[0x1f];
  uVar2 = uVar1;
  if ((uint)param_1[0x20] < uVar1) {
    do {
      uVar2 = uVar2 + 0x1c;
    } while (uVar2 != param_1[0x20]);
  }
  iVar3 = (int)((longlong)(int)(param_1[0x21] - uVar1) * -0x6db6db6d +
                ((ulonglong)(param_1[0x21] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
  fn_00100414(param_1 + 4,fn_0078cb10,0xc,9);
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 10) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) / 10,0);
  fn_002feef8(param_1);
  return;
}



int fn_002a80f8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081e95c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = fn_00101a1c(param_1 + 4,&LAB_001ad7d8,0xc,9);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  return iVar1 + -0x10;
}



void fn_002a8014(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [12];
  
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(L"rom:/data/Parameter/CrackPlaceItemTables.xbb",uVar1,0x80,5);
  if ((iVar2 != 0) && (iVar3 = fn_00145ac0(), iVar3 != 0)) {
    uVar1 = fn_00145ac0(iVar2);
    fn_00118624(auStack_20,uVar1);
    fn_006edeb4(auStack_20);
    uVar1 = fn_006ede84(auStack_20,0);
    uVar4 = fn_006edd88(auStack_20,0);
    fn_002a7c24(param_1,uVar4,uVar1);
    iVar3 = 0;
    do {
      uVar1 = fn_006ede84(auStack_20,iVar3 + 1);
      uVar4 = fn_006edd88(auStack_20,iVar3 + 1);
      fn_002a74b0(param_1,param_1 + iVar3 * 0xc + 0x10,uVar4,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    fn_005f5d3c(auStack_20);
  }
  fn_0012d73c(iVar2);
  return;
}



void fn_002a7c24(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 local_30;
  undefined2 local_28;
  
  iVar4 = fn_00147e6c(param_2,DAT_00891928,4);
  if (iVar4 == 0) {
    iVar4 = 0;
    puVar14 = (undefined1 *)(param_2 + 4);
    uVar1 = (param_3 - 4U) / 10;
    if (uVar1 != 0) {
      do {
        puVar13 = (uint *)(param_1 + 4);
        local_30 = CONCAT13(puVar14[4],CONCAT12(puVar14[3],CONCAT11(puVar14[2],*puVar14)));
        uVar2 = *(undefined4 *)(puVar14 + 5);
        local_28 = CONCAT11(((unsigned int)(local_28) >> 8) & 0xff,puVar14[9]);
        puVar11 = *(undefined4 **)(param_1 + 8);
        if (puVar11 == *(undefined4 **)(param_1 + 0xc)) {
          uVar3 = (int)((int)puVar11 - *puVar13) / 10;
          if (uVar3 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar13) / 10)) {
            *(int *)(param_1 + 8) = (int)puVar11 + 10;
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *(undefined4 *)((int)puVar11 + -10);
              puVar11[1] = *(undefined4 *)((int)puVar11 + -6);
              *(undefined2 *)(puVar11 + 2) = *(undefined2 *)((int)puVar11 + -2);
            }
            puVar5 = (undefined4 *)((int)puVar11 - 10);
            puVar12 = puVar11;
            if (puVar11 < puVar5) {
              if (0 < (int)puVar5 - (int)puVar11) {
                uVar3 = ((int)puVar5 - (int)puVar11) / 10;
                if ((uVar3 & 1) != 0) {
                  puVar5 = puVar11 + -5;
                  puVar12 = (undefined4 *)((int)puVar11 + -10);
                  *puVar12 = *puVar5;
                  *(undefined4 *)((int)puVar11 + -6) = puVar11[-4];
                  *(undefined2 *)((int)puVar11 + -2) = *(undefined2 *)(puVar11 + -3);
                }
                for (iVar9 = (int)uVar3 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(undefined4 *)((int)puVar12 + -10) = *(undefined4 *)((int)puVar5 - 10);
                  *(undefined4 *)((int)puVar12 + -6) = *(undefined4 *)((int)puVar5 - 6);
                  *(undefined2 *)((int)puVar12 + -2) = *(undefined2 *)((int)puVar5 - 2);
                  puVar12[-5] = puVar5[-5];
                  puVar12[-4] = puVar5[-4];
                  *(undefined2 *)(puVar12 + -3) = *(undefined2 *)(puVar5 + -3);
                  puVar5 = puVar5 + -5;
                  puVar12 = puVar12 + -5;
                }
              }
            }
            else {
              while (puVar11 != puVar5) {
                *(undefined4 *)((int)puVar12 + -10) = *(undefined4 *)((int)puVar5 - 10U);
                *(undefined4 *)((int)puVar12 + -6) = *(undefined4 *)((int)puVar5 - 6);
                *(undefined2 *)((int)puVar12 + -2) = *(undefined2 *)((int)puVar5 - 2);
                puVar12 = (undefined4 *)((int)puVar12 + -10);
                puVar5 = (undefined4 *)((int)puVar5 - 10U);
              }
            }
            *puVar11 = local_30;
            puVar11[1] = uVar2;
            *(undefined2 *)(puVar11 + 2) = local_28;
          }
          else {
            uVar15 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (uVar15 < uVar3 + 0x20) {
              uVar15 = uVar3 + 0x20;
            }
            puVar6 = (undefined4 *)fn_00100fc6(uVar15 * 10,0);
            puVar12 = puVar6;
            for (puVar5 = (undefined4 *)*puVar13; puVar5 != puVar11;
                puVar5 = (undefined4 *)((int)puVar5 + 10)) {
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = *puVar5;
                puVar12[1] = puVar5[1];
                *(undefined2 *)(puVar12 + 2) = *(undefined2 *)(puVar5 + 2);
              }
              puVar12 = (undefined4 *)((int)puVar12 + 10);
            }
            puVar5 = (undefined4 *)((int)puVar6 + ((int)((int)puVar11 - *puVar13) / 10) * 10);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = local_30;
              puVar5[1] = uVar2;
              *(undefined2 *)(puVar5 + 2) = local_28;
            }
            puVar12 = *(undefined4 **)(param_1 + 8);
            puVar5 = (undefined4 *)((int)puVar6 + ((int)((int)puVar11 - *puVar13) / 10) * 10);
            for (; puVar11 != puVar12; puVar11 = (undefined4 *)((int)puVar11 + 10)) {
              puVar7 = (undefined4 *)((int)puVar5 + 10);
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *puVar11;
                *(undefined4 *)((int)puVar5 + 0xe) = puVar11[1];
                *(undefined2 *)((int)puVar5 + 0x12) = *(undefined2 *)(puVar11 + 2);
              }
              puVar5 = puVar7;
            }
            uVar8 = *(uint *)(param_1 + 8);
            uVar10 = *puVar13;
            uVar3 = uVar10;
            if (uVar8 <= uVar10) {
              for (; uVar3 != uVar8; uVar3 = uVar3 + 10) {
              }
            }
            fn_001008c4(uVar10,(int)(*(int *)(param_1 + 0xc) - uVar10) / 10,0);
            *puVar13 = (uint)puVar6;
            *(int *)(param_1 + 8) = (int)puVar6 + ((int)(uVar8 - uVar10) / 10) * 10 + 10;
            *(uint *)(param_1 + 0xc) = (int)puVar6 + uVar15 * 10;
          }
        }
        else {
          *(int *)(param_1 + 8) = (int)puVar11 + 10;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = local_30;
            puVar11[1] = uVar2;
            *(undefined2 *)(puVar11 + 2) = local_28;
          }
        }
        iVar4 = iVar4 + 1;
        puVar14 = puVar14 + 10;
      } while (iVar4 < (int)uVar1);
    }
  }
  return;
}


