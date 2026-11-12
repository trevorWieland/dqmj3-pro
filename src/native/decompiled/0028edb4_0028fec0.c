#include "0028edb4_0028fec0.h"



undefined4 * fn_0028fec0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)fn_0068af70();
  *puVar3 = &DAT_0081e3b0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = *(undefined4 *)(param_2 + 8);
  puVar3[6] = 0xffffffff;
  puVar3[7] = 0xffffffff;
  puVar3[10] = 0;
  puVar3[8] = 0xffffffff;
  puVar3[9] = param_3;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0xb] = DAT_008f9e2c;
  puVar3[0xc] = uVar1;
  puVar3[0xd] = uVar2;
  return puVar3;
}



void fn_0028fe14(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x1c) = *param_2;
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0028fcb4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),DAT_00895f20,&LAB_0028fd88,1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    uVar1 = fn_001c8abc(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                         DAT_00895f24);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x14),DAT_00895f28,
                         *(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 0x14),uVar1);
    uVar1 = VectorSignedToFloat(DAT_00895f1c,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    DAT_00895f14 = DAT_00895f14 + 1;
  }
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x10);
  fn_0018a69c(*(undefined4 *)(param_1 + 0x24));
  *(undefined1 *)(param_1 + 0x10) = 1;
  fn_0068aeac(param_1,param_2);
  return;
}



undefined4 * fn_0028fb58(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_006896e0();
  piVar4 = puVar1 + 2;
  *puVar1 = &DAT_0081e398;
  *piVar4 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = *piVar4;
  piVar2[1] = 1;
  *piVar4 = (int)piVar2;
  iVar3 = piVar2[2];
  puVar1[4] = iVar3;
  puVar1[5] = iVar3 + 0xc;
  puVar1[6] = iVar3;
  puVar1[4] = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[6] + 4) = puVar1[6];
  fn_00787118(puVar1 + 2);
  return puVar1;
}



void fn_0028fb24(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x1c))();
  }
  return;
}



void fn_0028fb1c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x18);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x1c))();
  }
  return;
}



void fn_0028fad0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x18);
  for (piVar2 = (int *)*piVar3; piVar2 != piVar3; piVar2 = (int *)*piVar2) {
    piVar1 = (int *)piVar2[2];
    if ((*(char *)((int)piVar1 + 9) != '\0') && ((char)piVar1[2] == '\0')) {
      (**(code **)(*piVar1 + 0x18))();
    }
  }
  return;
}



void fn_0028f978(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  
  piVar6 = *(int **)(param_1 + 0x18);
  piVar5 = (int *)*piVar6;
  while( true ) {
    if (piVar5 == piVar6) {
      piVar5 = (int *)(param_1 + 8);
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        if (puVar1 == *(undefined4 **)(param_1 + 0x14)) {
          if (*piVar5 == 0) {
            uVar7 = 0x20;
          }
          else {
            uVar2 = *(uint *)(*piVar5 + 4);
            uVar7 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar7 < uVar2 + 0x20) {
              uVar7 = uVar2 + 0x20;
            }
          }
          piVar3 = (int *)fn_00100fc6(0xc,0);
          iVar4 = fn_00100fc6(uVar7 * 0xc,0);
          piVar3[2] = iVar4;
          *piVar3 = *piVar5;
          piVar3[1] = uVar7;
          *piVar5 = (int)piVar3;
          puVar1 = (undefined4 *)piVar3[2];
          *(undefined4 **)(param_1 + 0x10) = puVar1;
          *(undefined4 **)(param_1 + 0x14) = puVar1 + uVar7 * 3;
        }
        *(undefined4 **)(param_1 + 0x10) = puVar1 + 3;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = *puVar1;
      }
      if (puVar1 + 2 != (int *)0x0) {
        puVar1[2] = param_2;
      }
      *puVar1 = piVar6;
      puVar1[1] = piVar6[1];
      *(undefined4 **)piVar6[1] = puVar1;
      piVar6[1] = (int)puVar1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
    if (piVar5[2] == param_2) break;
    piVar5 = (int *)*piVar5;
  }
  return;
}



void fn_0028f93c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x48) + 0x18);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x20))();
  }
  return;
}



void fn_0028f908(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2d] = 0;
  *puVar1 = &DAT_0081e258;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  return;
}



undefined4 * fn_0028edb4(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  *param_1 = &DAT_0081e218;
  if (param_1[0xb] != 0) {
    piVar10 = (int *)param_1[10];
    for (piVar6 = (int *)*piVar10; piVar6 != piVar10; piVar6 = (int *)*piVar6) {
      piVar8 = (int *)piVar6[2];
      if (piVar8 != (int *)0x0) {
        fn_0068aab0(*piVar8);
        if ((int *)*piVar8 != (int *)0x0) {
          (**(code **)(*(int *)*piVar8 + 4))();
        }
        fn_002feef8(piVar8);
      }
    }
    piVar10 = (int *)param_1[10];
    piVar6 = (int *)*piVar10;
    while (piVar6 != piVar10) {
      piVar8 = (int *)param_1[10];
      if (piVar6 != (int *)param_1[10]) {
        piVar8 = (int *)*piVar6;
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
        param_1[0xb] = param_1[0xb] + -1;
        *piVar6 = param_1[7];
        param_1[7] = piVar6;
      }
      piVar6 = piVar8;
    }
  }
  iVar9 = param_1[4];
  for (iVar7 = param_1[3]; iVar7 != iVar9; iVar7 = iVar7 + 8) {
    if (*(int **)(iVar7 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar7 + 4) + 8))();
    }
  }
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  if (uVar4 != uVar5) {
    uVar1 = uVar4;
    if (uVar5 <= uVar4) {
      do {
        uVar1 = uVar1 + 8;
      } while (uVar1 != uVar5);
    }
    param_1[4] = uVar5 - (uVar5 - uVar4 & 0xfffffff8);
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  piVar10 = param_1 + 6;
  piVar6 = (int *)param_1[10];
  if (piVar6 != (int *)0x0) {
    piVar8 = (int *)*piVar6;
    while (piVar2 = piVar8, piVar2 != piVar6) {
      piVar8 = (int *)param_1[10];
      if (piVar2 != (int *)param_1[10]) {
        piVar8 = (int *)*piVar2;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        param_1[0xb] = param_1[0xb] + -1;
        *piVar2 = param_1[7];
        param_1[7] = piVar2;
      }
    }
    puVar3 = (undefined4 *)param_1[10];
    *puVar3 = param_1[7];
    param_1[7] = puVar3;
    piVar6 = (int *)*piVar10;
    while (piVar6 != (int *)0x0) {
      *piVar10 = *piVar6;
      fn_001008c4(piVar6[2],piVar6[1],0);
      fn_001008c4(piVar6,1,0);
      piVar6 = (int *)*piVar10;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  uVar5 = param_1[3];
  uVar4 = uVar5;
  if ((uint)param_1[4] <= uVar5) {
    for (; uVar4 != param_1[4]; uVar4 = uVar4 + 8) {
    }
  }
  fn_001008c4(uVar5,(int)(param_1[5] - uVar5) >> 3,0);
  return param_1;
}


