#include "0074a944_0074c130.h"



undefined4 fn_0074c130(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_10 [8];
  
  local_10[0] = *param_2;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = uVar1;
  if (uVar1 < uVar1 + 1) {
    uVar2 = uVar1 + 1;
  }
  if (uVar2 < 0x35) {
    *(uint *)(param_1 + 0xc) = uVar2;
    fn_00301a9c(param_1 + uVar1 + 0x10,local_10,1);
    return 1;
  }
  fn_0015ebe4(&DAT_007dd004,0x4f,0xe0000019,0);
  return 0;
}



undefined4 fn_0074c034(int param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  puVar8 = *(ushort **)(param_1 + 4);
  puVar7 = *(ushort **)(param_1 + 8);
  iVar6 = (int)puVar7 - (int)puVar8 >> 3;
  puVar3 = puVar8;
  if (0 < iVar6) {
    do {
      iVar5 = iVar6 / 2;
      iVar1 = iVar5 * 4;
      if (puVar3[iVar1] < *param_2) {
        iVar5 = (iVar6 - iVar5) + -1;
        puVar3 = puVar3 + iVar1 + 4;
      }
      iVar6 = iVar5;
    } while (0 < iVar5);
  }
  if ((puVar7 != puVar3) && (*param_2 < *puVar3)) {
    puVar3 = puVar7;
  }
  if (puVar7 == puVar3) {
    uVar2 = 0;
  }
  else {
    if (puVar8 != puVar7) {
      puVar8 = puVar3 + 4;
      if ((puVar7 != puVar8) && (iVar6 = (int)puVar7 - (int)puVar8, 0 < iVar6 >> 3)) {
        puVar7 = puVar3;
        puVar4 = puVar3 + -4;
        if (iVar6 * 0x10000000 < 0) {
          *(undefined4 *)puVar3 = *(undefined4 *)puVar8;
          *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar3 + 6);
          puVar7 = puVar8;
          puVar4 = puVar3;
        }
        for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar2 = *(undefined4 *)(puVar7 + 6);
          *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar7 + 4);
          *(undefined4 *)(puVar4 + 6) = uVar2;
          uVar2 = *(undefined4 *)(puVar7 + 10);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar7 + 8);
          *(undefined4 *)(puVar4 + 10) = uVar2;
          puVar7 = puVar7 + 8;
          puVar4 = puVar4 + 8;
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0074aeb8(void)

{
  int iVar1;
  
  iVar1 = fn_0047e7fc();
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_0074ae2c(void)

{
  int iVar1;
  
  iVar1 = fn_0047e7fc();
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074ae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_0074add4(void)

{
  int iVar1;
  
  iVar1 = fn_0047e7fc();
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_0074ab8c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined1 auStack_88 [104];
  uint local_20;
  
  piVar6 = (int *)param_2[4];
  piVar8 = (int *)*piVar6;
  while (piVar1 = piVar8, piVar1 != piVar6) {
    piVar8 = (int *)param_2[4];
    if (piVar1 != (int *)param_2[4]) {
      piVar8 = (int *)*piVar1;
      *(int **)piVar1[1] = piVar8;
      *(int *)(*piVar1 + 4) = piVar1[1];
      param_2[5] = param_2[5] + -1;
      (**(code **)piVar1[2])(piVar1 + 2);
      *piVar1 = param_2[1];
      param_2[1] = (int)piVar1;
    }
  }
  iVar2 = fn_0074a528(param_1,&local_20);
  if (iVar2 != 0) {
    for (uVar5 = 0; uVar5 < local_20; uVar5 = uVar5 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      fn_0013ce04(auStack_88);
      fn_0047fba4(param_1,auStack_88);
      if (*(char *)(param_1 + 4) != '\0') {
        piVar6 = (int *)param_2[4];
        piVar8 = (int *)*piVar6;
        while (piVar1 = piVar8, piVar1 != piVar6) {
          piVar8 = (int *)param_2[4];
          if (piVar1 != (int *)param_2[4]) {
            piVar8 = (int *)*piVar1;
            *(int **)piVar1[1] = piVar8;
            *(int *)(*piVar1 + 4) = piVar1[1];
            param_2[5] = param_2[5] + -1;
            (**(code **)piVar1[2])(piVar1 + 2);
            *piVar1 = param_2[1];
            param_2[1] = (int)piVar1;
          }
        }
        fn_0013ce98(auStack_88);
        return;
      }
      piVar8 = (int *)param_2[1];
      iVar2 = param_2[4];
      if (piVar8 == (int *)0x0) {
        if (param_2[2] == param_2[3]) {
          if (*param_2 == 0) {
            uVar7 = 0x20;
          }
          else {
            uVar3 = *(uint *)(*param_2 + 4);
            uVar7 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
            if (uVar7 < uVar3 + 0x20) {
              uVar7 = uVar3 + 0x20;
            }
          }
          piVar8 = (int *)fn_0015ece0(0xc);
          iVar4 = fn_0015ece0(uVar7 * 0x70);
          piVar8[2] = iVar4;
          *piVar8 = *param_2;
          piVar8[1] = uVar7;
          *param_2 = (int)piVar8;
          iVar4 = piVar8[2];
          param_2[2] = iVar4;
          param_2[3] = iVar4 + uVar7 * 0x70;
        }
        piVar8 = (int *)param_2[2];
        param_2[2] = (int)(piVar8 + 0x1c);
      }
      else {
        param_2[1] = *piVar8;
      }
      if (piVar8 + 2 != (int *)0x0) {
        fn_0013cd7c(piVar8 + 2,auStack_88);
      }
      *piVar8 = iVar2;
      piVar8[1] = *(int *)(iVar2 + 4);
      **(undefined4 **)(iVar2 + 4) = piVar8;
      *(int **)(iVar2 + 4) = piVar8;
      param_2[5] = param_2[5] + 1;
      fn_0013ce98(auStack_88);
    }
  }
  return;
}



void fn_0074ab38(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_18;
  
  local_18 = *(undefined4 *)(param_2 + 0x14);
  fn_0015ef4c(param_1,&local_18,4);
  piVar2 = *(int **)(param_2 + 0x10);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0015ef4c(param_1,piVar1 + 2,4);
  }
  return;
}



undefined4 * fn_0074a944(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  iVar5 = param_1[6];
  *param_1 = &DAT_008527fc;
  while (iVar5 != 0) {
    piVar9 = *(int **)param_1[5];
    if (piVar9 != (int *)param_1[5]) {
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      param_1[6] = param_1[6] + -1;
      piVar8 = (int *)piVar9[2];
      puVar7 = (uint *)(piVar8 + 1);
      do {
        uVar2 = *puVar7 - 1;
        bVar11 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar11);
      *puVar7 = uVar2;
      bVar11 = uVar2 == 0;
      if (bVar11) {
        uVar2 = (uint)*(byte *)(piVar8 + 2);
      }
      if (bVar11 && uVar2 == 0) {
        *(undefined1 *)(piVar8 + 2) = 1;
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      *piVar9 = param_1[2];
      param_1[2] = piVar9;
    }
    iVar5 = param_1[6];
  }
  piVar8 = param_1 + 1;
  piVar9 = (int *)param_1[5];
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)*piVar9;
    while (piVar1 = piVar10, piVar1 != piVar9) {
      piVar10 = (int *)param_1[5];
      if (piVar1 != (int *)param_1[5]) {
        piVar10 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar10;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[6] = param_1[6] + -1;
        piVar3 = (int *)piVar1[2];
        puVar7 = (uint *)(piVar3 + 1);
        do {
          uVar2 = *puVar7 - 1;
          bVar11 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar11);
        *puVar7 = uVar2;
        bVar11 = uVar2 == 0;
        if (bVar11) {
          uVar2 = (uint)*(byte *)(piVar3 + 2);
        }
        if (bVar11 && uVar2 == 0) {
          *(undefined1 *)(piVar3 + 2) = 1;
          (**(code **)(*piVar3 + 4))();
        }
        *piVar1 = param_1[2];
        param_1[2] = piVar1;
      }
    }
    puVar4 = (undefined4 *)param_1[5];
    *puVar4 = param_1[2];
    param_1[2] = puVar4;
    piVar9 = (int *)*piVar8;
    while (piVar9 != (int *)0x0) {
      *piVar8 = *piVar9;
      if (piVar9[2] != 0) {
        pcVar6 = *(code **)(piVar9[2] + -8);
        if (pcVar6 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar6)();
        }
      }
      if (piVar9 != (int *)0x0) {
        if ((code *)piVar9[-2] == (code *)0x0) {
          fn_0030233c(piVar9 + -2);
        }
        else {
          (*(code *)piVar9[-2])();
        }
      }
      piVar9 = (int *)*piVar8;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}


