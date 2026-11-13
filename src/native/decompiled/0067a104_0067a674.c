#include "0067a104_0067a674.h"



void fn_0067a674(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  
  fn_0066e458(DAT_00898840,2,0);
  local_2c = 0;
  local_30 = 10;
  local_24 = 0;
  uStack_20 = 0xffffffff;
  local_1c = 0;
  local_38 = param_2;
  local_34 = param_3;
  local_28 = param_4;
  fn_0067afc0(param_1[0x26],&local_38);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



undefined4 * fn_0067a558(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = param_1 + 0x19;
  *param_1 = &DAT_0085a4b8;
  piVar5 = (int *)param_1[0x1d];
  if (piVar5 != (int *)0x0) {
    piVar2 = (int *)*piVar5;
    while (piVar2 != piVar5) {
      piVar4 = (int *)param_1[0x1d];
      if (piVar2 != (int *)param_1[0x1d]) {
        piVar4 = (int *)*piVar2;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        param_1[0x1e] = param_1[0x1e] + -1;
        *piVar2 = param_1[0x1a];
        param_1[0x1a] = piVar2;
      }
      piVar2 = piVar4;
    }
    puVar3 = (undefined4 *)param_1[0x1d];
    *puVar3 = param_1[0x1a];
    param_1[0x1a] = puVar3;
    piVar5 = (int *)*piVar1;
    while (piVar5 != (int *)0x0) {
      *piVar1 = *piVar5;
      fn_0014f1bc(piVar5[2]);
      fn_0014f1bc(piVar5);
      piVar5 = (int *)*piVar1;
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  return param_1;
}



undefined4 fn_0067a520(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  piVar1[0x151] = param_1 + 100;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x1b);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0067a39c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  
  piVar7 = (int *)(param_1 + 100);
  if (piVar7 != param_2) {
    piVar5 = *(int **)(param_1 + 0x74);
    puVar8 = (undefined4 *)param_2[4];
    puVar6 = (undefined4 *)*puVar8;
    for (piVar1 = (int *)*piVar5; piVar1 != piVar5 && puVar6 != puVar8; piVar1 = (int *)*piVar1) {
      piVar1[2] = puVar6[2];
      puVar6 = (undefined4 *)*puVar6;
    }
    if (puVar6 == puVar8) {
      while (piVar1 != piVar5) {
        piVar7 = *(int **)(param_1 + 0x74);
        if (piVar1 != *(int **)(param_1 + 0x74)) {
          piVar7 = (int *)*piVar1;
          *(int **)piVar1[1] = piVar7;
          *(int *)(*piVar1 + 4) = piVar1[1];
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
          *piVar1 = *(int *)(param_1 + 0x68);
          *(int **)(param_1 + 0x68) = piVar1;
        }
        piVar1 = piVar7;
      }
    }
    else {
      bVar10 = true;
      while (bVar10) {
        puVar2 = *(undefined4 **)(param_1 + 0x68);
        if (puVar2 == (undefined4 *)0x0) {
          if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x70)) {
            if (*piVar7 == 0) {
              uVar9 = 0x20;
            }
            else {
              uVar3 = *(uint *)(*piVar7 + 4);
              uVar9 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
              if (uVar9 < uVar3 + 0x20) {
                uVar9 = uVar3 + 0x20;
              }
            }
            piVar1 = (int *)fn_0015ece0(0xc);
            iVar4 = fn_0015ece0(uVar9 * 0xc);
            piVar1[2] = iVar4;
            *piVar1 = *piVar7;
            piVar1[1] = uVar9;
            *piVar7 = (int)piVar1;
            iVar4 = piVar1[2];
            *(int *)(param_1 + 0x6c) = iVar4;
            *(uint *)(param_1 + 0x70) = iVar4 + uVar9 * 0xc;
          }
          puVar2 = *(undefined4 **)(param_1 + 0x6c);
          *(undefined4 **)(param_1 + 0x6c) = puVar2 + 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x68) = *puVar2;
        }
        if (puVar2 + 2 != (undefined4 *)0x0) {
          puVar2[2] = puVar6[2];
        }
        *puVar2 = piVar5;
        puVar2[1] = piVar5[1];
        *(undefined4 **)piVar5[1] = puVar2;
        piVar5[1] = (int)puVar2;
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        puVar6 = (undefined4 *)*puVar6;
        bVar10 = puVar6 != puVar8;
      }
    }
  }
  *(int *)(param_1 + 0x7c) = param_2[6];
  return;
}



void fn_0067a32c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x74);
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = *(int **)(param_1 + 0x74);
    if (piVar2 != piVar1) {
      piVar1 = (int *)*piVar2;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
      *piVar2 = *(int *)(param_1 + 0x68);
      *(int **)(param_1 + 0x68) = piVar2;
    }
    piVar2 = piVar1;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



void fn_0067a1f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x84,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandRankingDownloadList_008c70d5);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a590;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 10;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 2;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    *(undefined1 *)(iVar2 + 0x34) = 0;
    fn_0067ab10(puVar1);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return;
}



int fn_0067a1d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_0066eb80(DAT_00898840,3);
  iVar1 = *(int *)(iVar2 + 0x49c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x50;
  }
  return iVar2;
}



void fn_0067a1a8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar3 = fn_0066eb80(DAT_00898840,3);
  iVar7 = *(int *)(iVar3 + 0x49c);
  if (iVar7 != 0) {
    for (iVar6 = *(int *)(iVar7 + 8); *(int *)(iVar7 + 0xc) != iVar6; iVar6 = iVar6 + 0x50) {
      *param_2 = *(undefined4 *)(iVar6 + 0x18);
      param_2[1] = *(undefined4 *)(iVar6 + 0x20);
      param_2[8] = *(undefined4 *)(iVar6 + 8);
      if (*(undefined1 **)(iVar6 + 0x28) == *(undefined1 **)(iVar6 + 0x24)) {
        uVar2 = 0;
      }
      else {
        uVar2 = **(undefined1 **)(iVar6 + 0x24);
      }
      *(undefined1 *)(param_2 + 2) = uVar2;
      if ((uint)(*(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x24)) < 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined1 *)(*(int *)(iVar6 + 0x24) + 1);
      }
      *(undefined1 *)((int)param_2 + 9) = uVar2;
      uVar4 = *(undefined4 *)(iVar6 + 0x34);
      param_2[4] = *(undefined4 *)(iVar6 + 0x30);
      param_2[5] = uVar4;
      fn_0014f510(param_2 + 6,iVar6 + 0x48);
      *(bool *)((int)param_2 + 0x123) =
           *(int *)(*(int *)(*(int *)(iVar3 + 0x84) + 0x78) + 0xc) == *(int *)(iVar6 + 8);
      iVar8 = *(int *)(iVar6 + 0x3c) - (int)*(undefined1 **)(iVar6 + 0x38);
      bVar10 = iVar8 == 0xff;
      iVar9 = iVar8;
      if (0xff < iVar8) {
        iVar9 = 0xff;
      }
      iVar1 = iVar8 + -0xff;
      if (0xff >= iVar8) {
        bVar10 = iVar9 == 0;
        iVar1 = iVar9;
      }
      if (!bVar10 && iVar1 < 0 == (0xff < iVar8 && SBORROW4(iVar8,0xff))) {
        puVar5 = *(undefined1 **)(iVar6 + 0x38);
        iVar8 = 0;
        do {
          iVar9 = iVar9 + -1;
          *(undefined1 *)((int)param_2 + iVar8 + 0x24) = *puVar5;
          puVar5 = puVar5 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar9 != 0);
      }
      param_2 = param_2 + 0x4a;
    }
  }
  return;
}



void fn_0067a104(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  
  fn_0066e458(DAT_00898840,2,0);
  local_24 = 0;
  uStack_20 = 0xffffffff;
  local_1c = 0;
  local_30 = 100;
  uStack_2c = 1;
  local_38 = param_2;
  local_34 = param_3;
  uStack_28 = param_4;
  fn_0067ab3c(param_1[0x26],&local_38);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}


