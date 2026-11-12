#include "0039a744_0039bf58.h"



void fn_0039bf58(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  uVar1 = fn_00100b58(param_2);
  puVar10 = &DAT_008f9cf4;
  puVar2 = puVar10;
  if (uVar1 != 0) {
    puVar5 = &local_30;
    if (0x20 < uVar1) {
      puVar5 = &local_34;
    }
    local_34 = uVar1;
    local_30 = 0x20;
    uVar9 = *puVar5;
    if (0xfffffff1 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
    }
    if (uVar9 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar9);
    }
    if (uVar9 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      puVar2[1] = uVar9;
      *puVar2 = 0;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  fn_00301a9c(puVar2,param_2,uVar1 << 1);
  puVar3 = (undefined4 *)fn_0022f584((char *)&DAT_0039c378,0);
  uVar8 = puVar2[-1];
  uVar1 = fn_00100b58();
  uVar9 = puVar2[-1];
  if (uVar9 < uVar8) {
    if (uVar1 < uVar9) {
      uVar7 = uVar9;
    }
    else {
      uVar7 = uVar1;
    }
    uVar6 = 0;
    if (uVar9 < uVar8) {
      uVar6 = uVar8;
    }
    fn_002ff628(9,&DAT_008c7610,&DAT_008c7610,uVar6,uVar7);
  }
  if (-uVar1 - 0xf < (uint)puVar2[-1]) {
    fn_002ff628(8,&DAT_008c7610,&DAT_008c7610,puVar2[-1],-uVar1 - 0xf);
  }
  uVar9 = puVar2[-1];
  uVar7 = uVar9 + uVar1;
  if (uVar7 == 0) {
    if (puVar2 != &DAT_008f9cf4) {
      iVar11 = puVar2[-3];
      if ((iVar11 == -1) ||
         ((puVar2 + -3 != &DAT_008f9ce8 && (puVar2[-3] = iVar11 + -1, iVar11 == 0)))) {
        fn_001008c4(puVar2 + -3,puVar2[-2] + 8,0);
      }
    }
    goto LAB_0039c310;
  }
  iVar11 = uVar9 - uVar8;
  uVar6 = puVar2[-3] + 1;
  bVar13 = puVar2[-3] != -1;
  bVar12 = uVar6 == 1;
  if (uVar6 < 2) {
    bVar13 = (uint)puVar2[-2] <= uVar7;
    bVar12 = uVar7 == puVar2[-2];
  }
  if (bVar13 && !bVar12) {
LAB_0039c118:
    local_34 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_34 < uVar9 + 0x80) {
      local_34 = uVar9 + 0x80;
    }
    puVar5 = &local_30;
    if (uVar7 <= local_34) {
      puVar5 = &local_34;
    }
    local_30 = uVar7;
    uVar9 = *puVar5;
    if (0xfffffff1 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
    }
    if (uVar9 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,uVar9);
    }
    if (uVar9 == 0) {
      puVar10 = &DAT_008f9ce8;
    }
    else {
      puVar10 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
      }
      puVar10[2] = uVar7;
      puVar4 = (undefined2 *)((int)puVar10 + uVar7 * 2 + 0xc);
      *puVar10 = 0;
      puVar10[1] = uVar9;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    if (uVar8 != 0) {
      fn_00301a9c(puVar10 + 3,puVar2,uVar8 << 1);
    }
    if (uVar1 != 0) {
      fn_00301a9c((int)puVar10 + uVar8 * 2 + 0xc,puVar3,uVar1 << 1);
    }
    if (iVar11 != 0) {
      fn_00301a9c((int)puVar10 + uVar1 * 2 + uVar8 * 2 + 0xc,(int)puVar2 + uVar8 * 2,iVar11 * 2);
    }
    if (puVar2 != &DAT_008f9cf4) {
      iVar11 = puVar2[-3];
      if ((iVar11 == -1) ||
         ((puVar2 + -3 != &DAT_008f9ce8 && (puVar2[-3] = iVar11 + -1, iVar11 == 0)))) {
        fn_001008c4(puVar2 + -3,puVar2[-2] + 8,0);
      }
    }
    puVar10 = puVar10 + 3;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      bVar12 = puVar3 <= puVar2;
      if (puVar2 <= puVar3) {
        bVar12 = (undefined4 *)((int)puVar2 + uVar9 * 2) <= puVar3;
      }
      if (!bVar12) goto LAB_0039c118;
    }
    if (iVar11 != 0) {
      fn_001006ac(uVar8 * 2 + uVar1 * 2 + (int)puVar2,uVar8 * 2 + (int)puVar2,iVar11);
    }
    if (uVar1 != 0) {
      fn_001006ac((int)puVar2 + uVar8 * 2,puVar3,uVar1);
    }
    puVar2[-1] = uVar7;
    *(undefined2 *)((int)puVar2 + uVar7 * 2) = 0;
    puVar10 = puVar2;
  }
LAB_0039c310:
  fn_00385b60(local_2c,puVar10);
  if (puVar10 != &DAT_008f9cf4) {
    iVar11 = puVar10[-3];
    if ((iVar11 == -1) ||
       ((puVar10 + -3 != &DAT_008f9ce8 && (puVar10[-3] = iVar11 + -1, iVar11 == 0)))) {
      fn_002feef8(puVar10 + -3,puVar10[-2] + 8,0);
      return;
    }
  }
  return;
}



void fn_0039b7f4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  uVar5 = 0;
  iVar8 = 0;
  do {
    iVar3 = (**(code **)(*param_1 + 0x124))(param_1,iVar8);
    iVar4 = (**(code **)(*param_1 + 300))(param_1,iVar3);
    if (iVar3 == iVar1) {
      uVar6 = 1;
LAB_0039b87c:
      uVar7 = 0;
    }
    else {
      if (iVar3 != iVar2) {
        uVar6 = 0;
        goto LAB_0039b87c;
      }
      uVar7 = 1;
      uVar6 = uVar7;
    }
    if (((iVar4 == 0) || (iVar3 = fn_001a46f4((int)*(short *)(iVar4 + 0x1c)), iVar3 == 0)) ||
       ((uint)(param_1[0x28] - param_1[0x27] >> 2) <= uVar5)) {
      iVar3 = 1;
    }
    else {
      local_28 = 0;
      local_30 = 1;
      uStack_2c = uVar7;
      fn_002b415c(*(undefined4 *)(param_1[0x27] + uVar5 * 4),iVar4,uVar6,0);
      local_30 = 0;
      fn_0036e68c(*(undefined4 *)(param_1[0x2a] + uVar5 * 4),iVar4,0,0);
      iVar3 = fn_0020bbc4(&local_30,iVar4);
      if (iVar3 != 0) {
        iVar3 = iVar3 + 4;
      }
      uVar6 = fn_006bfe90(iVar3);
      iVar3 = fn_001cab7c(uVar6);
    }
    uVar5 = iVar3 + uVar5 & 0xff;
    if ((3 < uVar5) || (iVar8 = iVar8 + 1, 3 < iVar8)) {
      return;
    }
  } while( true );
}



undefined4 fn_0039a744(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar6 = *(int **)(iVar1 + 0x10);
  iVar1 = fn_0068897c(piVar6,(char *)&DAT_0039aafc);
  param_1[0x28] = iVar1;
  iVar1 = 0;
  do {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_0017d96c(&local_48,0x20,0x1f,(char *)&DAT_0039ab0c,iVar1);
    iVar2 = fn_0068897c(piVar6,&local_48);
    iVar7 = iVar1 + 1;
    param_1[iVar1 + 0x29] = iVar2;
    iVar1 = iVar7;
  } while (iVar7 < 9);
  iVar1 = fn_0068967c(piVar6,(char *)&DAT_0039ab1c);
  param_1[0x32] = iVar1;
  iVar1 = fn_0068897c(piVar6,(char *)&DAT_0039ab2c);
  param_1[0x33] = iVar1;
  uVar3 = fn_0022f750(&DAT_0039ab38);
  fn_00190d50(param_1[0x31],uVar3);
  iVar1 = (**(code **)(*piVar6 + 0x2c))(piVar6,DAT_00895330,1);
  param_1[0x34] = iVar1;
  fn_00799050(param_1 + 0x35,3,0);
  uVar8 = 0;
  if (param_1[0x36] - param_1[0x35] >> 2 != 0) {
    do {
      uVar3 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_00895364)[uVar8 * 2],1);
      *(undefined4 *)(param_1[0x35] + uVar8 * 4) = uVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_1[0x36] - param_1[0x35] >> 2));
  }
  fn_00799050(param_1 + 0x38,3,0);
  uVar8 = 0;
  if (param_1[0x39] - param_1[0x38] >> 2 != 0) {
    do {
      uVar3 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_00895368)[uVar8 * 2],1);
      *(undefined4 *)(param_1[0x38] + uVar8 * 4) = uVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_1[0x39] - param_1[0x38] >> 2));
  }
  fn_00799478(param_1 + 0x3b,3,0);
  uVar8 = 0;
  if (param_1[0x3c] - param_1[0x3b] >> 2 != 0) {
    do {
      piVar4 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_0089537c)[uVar8 * 3],1);
      if (piVar4 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar5 == &DAT_0089a930) goto LAB_0039a984;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_0039a984:
      *(int **)(param_1[0x3b] + uVar8 * 4) = piVar4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_1[0x3c] - param_1[0x3b] >> 2));
  }
  fn_00799478(param_1 + 0x3e,3,0);
  uVar8 = 0;
  if (param_1[0x3f] - param_1[0x3e] >> 2 != 0) {
    do {
      piVar4 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_00895380)[uVar8 * 3],1);
      if (piVar4 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar5 == &DAT_0089a930) goto LAB_0039aa28;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_0039aa28:
      *(int **)(param_1[0x3e] + uVar8 * 4) = piVar4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_1[0x3f] - param_1[0x3e] >> 2));
  }
  fn_00799478(param_1 + 0x41,3,0);
  uVar8 = 0;
  if (param_1[0x42] - param_1[0x41] >> 2 != 0) {
    do {
      piVar4 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_00895384)[uVar8 * 3],1);
      if (piVar4 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar5 == &DAT_0089a930) goto LAB_0039aac8;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_0039aac8:
      *(int **)(param_1[0x41] + uVar8 * 4) = piVar4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_1[0x42] - param_1[0x41] >> 2));
  }
  piVar4 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0086650c,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0039ab98;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0039ab98:
  uVar3 = fn_0022f750(&DAT_0039ac48);
  fn_00190d50(piVar4,uVar3);
  iVar1 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_00866514,1);
  param_1[0x44] = iVar1;
  piVar6 = (int *)(**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_008664f0,1);
  if (piVar6 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0039ac10;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0039ac10:
  param_1[0x45] = (int)piVar6;
  fn_0039a450(param_1,1);
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if ((short)param_1[0x27] != iVar1) {
    *(short *)(param_1 + 0x27) = (short)iVar1;
  }
  return 1;
}


