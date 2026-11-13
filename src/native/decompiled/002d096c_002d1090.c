#include "002d096c_002d1090.h"



undefined1 * fn_002d1090(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  char acStack_d8 [68];
  undefined1 local_94 [4];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [84];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_0014481c(DAT_008977e8);
  fn_0024a1c4();
  uVar3 = fn_0068c6b8(DAT_008977e8);
  local_34 = fn_0014481c(DAT_008977e8);
  uStack_30 = uVar3;
  uStack_2c = param_1;
  uStack_28 = param_2;
  fn_00692e98(auStack_90);
  fn_00183718(&local_108,auStack_90,&DAT_00249f8c);
  uStack_120 = uStack_104;
  uStack_11c = uStack_100;
  uStack_118 = uStack_fc;
  uStack_114 = uStack_f8;
  uStack_110 = uStack_f4;
  uStack_10c = uStack_f0;
  local_94[0] = 0;
  fn_0079c770(&DAT_008cd57c,local_108,local_94);
  uVar4 = 0;
  if (local_108 != 0) {
    do {
      fn_001028d4(&uStack_f8,(char *)&DAT_00249f98,param_1,param_2);
      uVar3 = fn_002febd8(&uStack_f8);
      fn_00176ec8(auStack_88,&uStack_120,uVar4);
      fn_0017821c(acStack_d8,auStack_88,0x44);
      iVar1 = fn_00147e6c(acStack_d8,&uStack_f8,uVar3);
      if (iVar1 == 0) {
        fn_00176ec8(auStack_88,&uStack_120,uVar4);
        fn_0017821c(acStack_d8,auStack_88,0x44);
        fn_00176ec8(auStack_88,&uStack_120,uVar4);
        fn_0017821c(acStack_d8,auStack_88,0x44);
        iVar1 = fn_002febd8(&uStack_f8);
        piVar2 = (int *)fn_0026360c(local_34,acStack_d8[iVar1] + -0x30,0);
        (**(code **)(*piVar2 + 0x1c))();
        fn_0068c384(piVar2);
        piVar2[0x15] = uVar4;
        if ((uint)(DAT_008cd580 - DAT_008cd57c) <= uVar4) {
          fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,uVar4,DAT_008cd580 - DAT_008cd57c);
        }
        *(undefined1 *)(DAT_008cd57c + uVar4) = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_108);
  }
  return auStack_90;
}



void fn_002d1038(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fn_0014481c(DAT_008977e8);
  fn_0024ab74();
  uVar1 = fn_0068c6b8(DAT_008977e8);
  uVar2 = fn_0014481c(DAT_008977e8);
  uVar3 = fn_0068eb30(DAT_008977e8);
  fn_0024bb30(uVar3,uVar2,uVar1,param_1,param_2);
  return;
}



void fn_002d0fe8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  fn_0014481c(DAT_008977e8);
  uVar1 = fn_00263814();
  uVar2 = fn_0068c6b8(DAT_008977e8);
  fn_002487f4(uVar2,uVar1);
  fn_0014481c(DAT_008977e8);
  uVar1 = fn_00263814();
  uVar2 = fn_0068eb0c(DAT_008977e8);
  fn_001cb82c(uVar2,uVar1);
  return;
}



void fn_002d0f94(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0068c800(DAT_008977e8);
  fn_0016ac8c(uVar1,0,0,param_2 ^ 1);
  uVar1 = fn_0068eb18(DAT_008977e8);
  uVar1 = fn_0025f988(uVar1,param_1);
  iVar2 = fn_0068c800(DAT_008977e8);
  *(undefined1 *)(iVar2 + 0x8f) = 0;
  *(undefined1 *)(iVar2 + 0x8d) = 0;
  fn_0017a1d4(*(undefined4 *)(iVar2 + 0x80));
  fn_0017a18c(*(undefined4 *)(iVar2 + 0x80),uVar1);
  return;
}



void fn_002d0ec8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081fd68;
  uVar1 = param_1[0x1f];
  uVar2 = uVar1;
  if ((uint)param_1[0x20] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x20]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x21] - uVar1) >> 2,0);
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  uVar1 = param_1[0x1a];
  uVar2 = uVar1;
  if ((uint)param_1[0x1b] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[0x1b]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1c] - uVar1) / 0xc,0);
  fn_001cccdc(param_1);
  return;
}



void fn_002d0cf0(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x88) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar3 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar3 + 0x24),uVar2);
  iVar3 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
  *(undefined1 *)(param_1 + 0xae) = 1;
  *(undefined4 *)(param_1 + 0xbc) = param_3;
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  *(undefined2 *)(param_1 + 0x54) = param_4;
  return;
}



void fn_002d0cb4(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 0x74) = param_2;
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return;
}



void fn_002d096c(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_20;
  uint local_1c;
  
  puVar10 = (uint *)(param_1 + 0x68);
  if (param_2 != puVar10) {
    puVar5 = (undefined4 *)param_2[1];
    puVar7 = (undefined4 *)*param_2;
    iVar12 = (int)puVar5 - (int)puVar7;
    local_20 = iVar12 / 0xc;
    puVar1 = (undefined4 *)*puVar10;
    if ((uint)((*(int *)(param_1 + 0x70) - (int)puVar1) / 0xc) < local_20) {
      uVar11 = (*(int *)(param_1 + 0x6c) - (int)puVar1) / 0xc;
      local_1c = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (local_1c < uVar11 + 0x20) {
        local_1c = uVar11 + 0x20;
      }
      puVar2 = &local_1c;
      if (local_1c <= local_20) {
        puVar2 = &local_20;
      }
      uVar11 = *puVar2;
      puVar5 = (undefined4 *)fn_00100fc6(uVar11 * 0xc,0);
      puVar8 = (undefined4 *)param_2[1];
      puVar1 = puVar5;
      for (puVar7 = (undefined4 *)*param_2; puVar7 != puVar8; puVar7 = puVar7 + 3) {
        if (puVar1 != (undefined4 *)0x0) {
          uVar13 = puVar7[1];
          uVar14 = puVar7[2];
          *puVar1 = *puVar7;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
        }
        puVar1 = puVar1 + 3;
      }
      uVar3 = *puVar10;
      uVar4 = uVar3;
      if (*(uint *)(param_1 + 0x6c) < uVar3) {
        do {
          uVar4 = uVar4 + 0xc;
        } while (uVar4 != *(uint *)(param_1 + 0x6c));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x70) - uVar3) / 0xc,0);
      *puVar10 = (uint)puVar5;
      *(undefined4 **)(param_1 + 0x6c) = puVar5 + ((int)(param_2[1] - *param_2) / 0xc) * 3;
      *(undefined4 **)(param_1 + 0x70) = puVar5 + uVar11 * 3;
    }
    else {
      uVar11 = (*(int *)(param_1 + 0x6c) - (int)puVar1) / 0xc;
      if (local_20 <= uVar11) {
        if (puVar7 < puVar5) {
          if (0 < iVar12) {
            puVar8 = puVar1 + -3;
            puVar5 = puVar7 + -3;
            if ((local_20 & 1) != 0) {
              uVar13 = puVar7[1];
              uVar14 = puVar7[2];
              *puVar1 = *puVar7;
              puVar1[1] = uVar13;
              puVar1[2] = uVar14;
              puVar8 = puVar1;
              puVar5 = puVar7;
            }
            for (iVar9 = iVar12 / 0xc >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              uVar13 = puVar5[4];
              uVar14 = puVar5[5];
              puVar8[3] = puVar5[3];
              puVar8[4] = uVar13;
              puVar8[5] = uVar14;
              uVar13 = puVar5[7];
              uVar14 = puVar5[8];
              puVar8[6] = puVar5[6];
              puVar8[7] = uVar13;
              puVar8[8] = uVar14;
              puVar5 = puVar5 + 6;
              puVar8 = puVar8 + 6;
            }
            puVar1 = puVar1 + (iVar12 / 0xc) * 3;
          }
        }
        else {
          for (; puVar7 != puVar5; puVar7 = puVar7 + 3) {
            uVar13 = puVar7[1];
            uVar14 = puVar7[2];
            *puVar1 = *puVar7;
            puVar1[1] = uVar13;
            puVar1[2] = uVar14;
            puVar1 = puVar1 + 3;
          }
        }
        if (*(undefined4 **)(param_1 + 0x6c) < puVar1) {
          do {
            puVar1 = puVar1 + 3;
          } while (puVar1 != *(undefined4 **)(param_1 + 0x6c));
        }
        iVar12 = *puVar10 + ((int)(param_2[1] - *param_2) / 0xc) * 0xc;
        *(int *)(param_1 + 0x6c) = iVar12;
        *(int *)(param_1 + 0x70) = iVar12;
        return;
      }
      puVar5 = puVar7 + uVar11 * 3;
      if (puVar7 < puVar5) {
        if (0 < (int)puVar5 - (int)puVar7) {
          puVar8 = puVar1 + -3;
          puVar6 = puVar7 + -3;
          if ((((int)puVar5 - (int)puVar7) / 0xc & 1U) != 0) {
            uVar13 = puVar7[1];
            uVar14 = puVar7[2];
            *puVar1 = *puVar7;
            puVar1[1] = uVar13;
            puVar1[2] = uVar14;
            puVar8 = puVar1;
            puVar6 = puVar7;
          }
          for (iVar12 = ((int)puVar5 - (int)puVar7) / 0xc >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
            uVar13 = puVar6[4];
            uVar14 = puVar6[5];
            puVar8[3] = puVar6[3];
            puVar8[4] = uVar13;
            puVar8[5] = uVar14;
            uVar13 = puVar6[7];
            uVar14 = puVar6[8];
            puVar8[6] = puVar6[6];
            puVar8[7] = uVar13;
            puVar8[8] = uVar14;
            puVar8 = puVar8 + 6;
            puVar6 = puVar6 + 6;
          }
        }
      }
      else {
        for (; puVar7 != puVar5; puVar7 = puVar7 + 3) {
          uVar13 = puVar7[1];
          uVar14 = puVar7[2];
          *puVar1 = *puVar7;
          puVar1[1] = uVar13;
          puVar1[2] = uVar14;
          puVar1 = puVar1 + 3;
        }
      }
      *(uint *)(param_1 + 0x6c) = *puVar10 + ((int)(param_2[1] - *param_2) / 0xc) * 0xc;
      puVar5 = (undefined4 *)param_2[1];
      puVar7 = (undefined4 *)(*puVar10 + uVar11 * 0xc);
      puVar1 = (undefined4 *)(*param_2 + uVar11 * 0xc);
      if (puVar1 != puVar5) {
        do {
          if (puVar7 != (undefined4 *)0x0) {
            uVar13 = puVar1[1];
            uVar14 = puVar1[2];
            *puVar7 = *puVar1;
            puVar7[1] = uVar13;
            puVar7[2] = uVar14;
          }
          puVar1 = puVar1 + 3;
          puVar7 = puVar7 + 3;
        } while (puVar1 != puVar5);
        return;
      }
    }
  }
  return;
}


