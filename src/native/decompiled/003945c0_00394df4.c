#include "003945c0_00394df4.h"



void fn_00394df4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar1[5] = 0;
  *puVar1 = &DAT_0082b64c;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



void fn_00394dbc(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x1c));
  return;
}



void fn_00394db4(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x18));
  return;
}



undefined4 * fn_00394af0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint local_20;
  uint local_1c [2];
  
  puVar6 = &local_20;
  local_20 = in_stack_00000000;
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar1[5] = 0;
  *puVar1 = &DAT_0082b61c;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar9 = puVar1 + 6;
  local_1c[0] = in_stack_00000004;
  if (0x3fffffff < in_stack_00000004) {
    local_20 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7668,&DAT_008c7668,in_stack_00000004);
  }
  if ((uint)((int)(puVar1[8] - *puVar9) >> 2) < local_1c[0]) {
    uVar10 = (int)(puVar1[7] - *puVar9) >> 2;
    local_20 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_20 < uVar10 + 0x20) {
      local_20 = uVar10 + 0x20;
    }
    if (local_20 <= local_1c[0]) {
      puVar6 = local_1c;
    }
    uVar10 = *puVar6;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar8 = (undefined4 *)puVar1[7];
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar9;
    uVar5 = uVar4;
    if ((uint)puVar1[7] < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != puVar1[7]);
    }
    fn_001008c4(uVar4,(int)(puVar1[8] - uVar4) >> 2,0);
    uVar5 = *puVar9;
    puVar1[6] = puVar2;
    puVar1[7] = (puVar1[7] - uVar5 & 0xfffffffc) + (int)puVar2;
    puVar1[8] = puVar2 + uVar10;
  }
  return puVar1;
}



void fn_00394ae0(int param_1,int param_2,undefined4 param_3)

{
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4),param_3);
  return;
}



void fn_00394adc(int param_1,int param_2,undefined4 param_3)

{
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4),param_3);
  return;
}



void fn_00394abc(int param_1,int param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  return;
}



void fn_00394a9c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_3;
  fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4),local_8);
  return;
}



void fn_003947d8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar14 = 0;
  while( true ) {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_001028d4(&local_48,DAT_008937b4,iVar14);
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                              (*(int **)(param_1 + 8),&local_48,1);
    if (piVar1 == (int *)0x0) break;
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    while (puVar2 != &DAT_0089a930) {
      puVar2 = (undefined4 *)*puVar2;
      if (puVar2 == (undefined4 *)0x0) goto LAB_0039489c;
    }
    if (piVar1 == (int *)0x0) break;
    piVar3 = *(int **)(param_1 + 0x1c);
    puVar13 = (uint *)(param_1 + 0x18);
    if (piVar3 == *(int **)(param_1 + 0x20)) {
      uVar8 = (int)((int)piVar3 - *puVar13) >> 2;
      if (uVar8 < (uint)((int)((int)*(int **)(param_1 + 0x20) - *puVar13) >> 2)) {
        *(int **)(param_1 + 0x1c) = piVar3 + 1;
        if (piVar3 != (int *)0x0) {
          *piVar3 = piVar3[-1];
        }
        piVar9 = piVar3 + -1;
        piVar6 = piVar3;
        if (piVar3 < piVar9) {
          if (0 < (int)piVar9 - (int)piVar3) {
            iVar12 = (int)piVar9 - (int)piVar3 >> 2;
            iVar11 = 0;
            do {
              iVar12 = iVar12 + -1;
              piVar3[iVar11 + -1] = piVar9[iVar11 + -1];
              iVar11 = iVar11 + -1;
            } while (iVar12 != 0);
          }
        }
        else {
          while (piVar3 != piVar9) {
            piVar9 = piVar9 + -1;
            piVar6[-1] = *piVar9;
            piVar6 = piVar6 + -1;
          }
        }
        *piVar3 = (int)piVar1;
      }
      else {
        uVar4 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (uVar4 < uVar8 + 0x20) {
          uVar4 = uVar8 + 0x20;
        }
        piVar5 = (int *)fn_00100fc6(uVar4 << 2,0);
        piVar6 = piVar5;
        for (piVar9 = (int *)*puVar13; piVar9 != piVar3; piVar9 = piVar9 + 1) {
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar9;
          }
          piVar6 = piVar6 + 1;
        }
        piVar9 = (int *)((int)piVar5 + ((int)piVar3 - *puVar13 & 0xfffffffc));
        if (piVar9 != (int *)0x0) {
          *piVar9 = (int)piVar1;
        }
        piVar9 = *(int **)(param_1 + 0x1c);
        piVar1 = (int *)((int)piVar5 + ((int)piVar3 - *puVar13 & 0xfffffffc));
        for (; piVar3 != piVar9; piVar3 = piVar3 + 1) {
          piVar1 = piVar1 + 1;
          if (piVar1 != (int *)0x0) {
            *piVar1 = *piVar3;
          }
        }
        uVar7 = *puVar13;
        uVar10 = *(uint *)(param_1 + 0x1c);
        uVar8 = uVar7;
        if (uVar10 < uVar7) {
          do {
            uVar8 = uVar8 + 4;
          } while (uVar8 != uVar10);
        }
        fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0x20) - uVar7) >> 2,0);
        *(int **)(param_1 + 0x20) = piVar5 + uVar4;
        *puVar13 = (uint)piVar5;
        *(int **)(param_1 + 0x1c) = piVar5 + ((int)(uVar10 - uVar7) >> 2) + 1;
      }
    }
    else {
      *(int **)(param_1 + 0x1c) = piVar3 + 1;
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)piVar1;
      }
    }
    iVar14 = iVar14 + 1;
  }
LAB_0039489c:
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_008937b8,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) goto LAB_003948e8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_003948e8:
  *(int **)(param_1 + 0x14) = piVar1;
  fn_0069e710(param_1);
  return;
}



void fn_00394794(undefined4 *param_1)

{
  *param_1 = &DAT_0082b5ec;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_0069e808(param_1);
  fn_002feef8();
  return;
}



undefined4 *
fn_003945c8(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  puVar2 = (undefined4 *)fn_0069e7cc(param_1);
  *puVar2 = &DAT_0082b5ec;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0xff;
  piVar7 = (int *)0x0;
  piVar3 = (int *)(**(code **)(*param_3 + 0x2c))
                            (param_3,(char *)&DAT_0039477c,1,*(code **)(*param_3 + 0x2c),param_5);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a928) goto LAB_00394660;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_00394660:
  iVar5 = fn_00145b00(0x30,&DAT_00812c8c);
  if (iVar5 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_002b20c0(iVar5,param_2,piVar3,1,puVar2[4],1,0);
  }
  piVar6 = (int *)puVar2[5];
  if (piVar6 != piVar3) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    puVar2[5] = piVar3;
  }
  (**(code **)(*(int *)puVar2[5] + 0x10))();
  fn_0069e710(puVar2);
  piVar3 = (int *)(**(code **)(*(int *)puVar2[2] + 0x2c))((int *)puVar2[2],(char *)&DAT_00394500);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) {
        piVar7 = piVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[6] = piVar7;
  cVar1 = *(char *)(puVar2 + 7);
  iVar5 = fn_002305a4((int)cVar1,0);
  *(byte *)(puVar2[6] + 0x44) = iVar5 != 0 | *(byte *)(puVar2[6] + 0x44) & 0xfe;
  if (iVar5 != 0) {
    fn_00190d50(puVar2[6]);
  }
  *(char *)(puVar2 + 7) = cVar1;
  return puVar2;
}



void fn_003945c0(int param_1)

{
  fn_002b20a4(*(undefined4 *)(param_1 + 0x14));
  return;
}


