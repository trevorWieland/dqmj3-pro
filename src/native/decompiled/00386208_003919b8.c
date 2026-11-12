#include "00386208_003919b8.h"



void fn_003919b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00226f28();
  *puVar1 = &DAT_0082b144;
  puVar1[5] = param_2;
  return;
}



void fn_0038eae8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_6c [96];
  
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = param_4;
  piVar1 = (int *)(**(code **)(*param_1 + 0x3c))(param_1);
  piVar2 = (int *)param_1[7];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[7] = (int)piVar1;
  }
  (**(code **)(*(int *)param_1[7] + 0x10))();
  (**(code **)(*(int *)param_1[7] + 0x20))((int *)param_1[7],1);
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  puVar4 = (undefined4 *)fn_002cab9c(auStack_6c);
  puVar4[1] = 7;
  *puVar4 = uVar3;
  iVar5 = fn_002cab28(puVar4,0);
  *(undefined1 *)(iVar5 + 8) = 1;
  *(undefined1 *)(iVar5 + 9) = 1;
  *(undefined1 *)(iVar5 + 0xc) = 1;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined1 *)(iVar5 + 0x14) = 1;
  *(undefined4 *)(iVar5 + 0x18) = param_7;
  fn_002cabdc(param_1,param_1[8],param_1[9],iVar5);
  return;
}



void fn_0038ce2c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  int *local_64;
  int *local_60 [2];
  undefined4 local_58;
  int *local_4c;
  int *local_48;
  int *local_44;
  uint local_40;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  
  uVar1 = fn_00178f9c(param_2,param_3);
  iVar13 = 0;
  if (param_4 != 0) {
    iVar13 = param_5;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if ((param_4 != 0 && param_5 != 0) && -1 < iVar13) {
    uVar1 = fn_00178f9c(param_2,param_5);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  uVar18 = *(uint *)(param_1 + 0x18);
  uVar15 = *(uint *)(param_1 + 0x1c);
  if (uVar18 != uVar15) {
    uVar2 = uVar18;
    if (uVar15 <= uVar18) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar15);
    }
    *(uint *)(param_1 + 0x1c) = uVar15 - (uVar15 - uVar18 & 0xfffffffc);
  }
  local_64 = (int *)&DAT_0000000a;
  puVar16 = (uint *)(param_1 + 0x18);
  if ((uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18) >> 2) < 10) {
    uVar15 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    local_60[0] = (int *)(uVar15 + (uVar15 >> 1) + (uVar15 >> 3));
    if (local_60[0] < (int *)(uVar15 + 0x20)) {
      local_60[0] = (int *)(uVar15 + 0x20);
    }
    ppiVar9 = local_60;
    if (local_60[0] < &DAT_0000000b) {
      ppiVar9 = &local_64;
    }
    piVar17 = *ppiVar9;
    puVar3 = (undefined4 *)fn_00100fc6((int)piVar17 << 2,0);
    puVar14 = *(undefined4 **)(param_1 + 0x1c);
    puVar7 = puVar3;
    for (puVar10 = (undefined4 *)*puVar16; puVar10 != puVar14; puVar10 = puVar10 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar10;
      }
      puVar7 = puVar7 + 1;
    }
    uVar18 = *puVar16;
    uVar15 = uVar18;
    if (*(uint *)(param_1 + 0x1c) < uVar18) {
      do {
        uVar15 = uVar15 + 4;
      } while (uVar15 != *(uint *)(param_1 + 0x1c));
    }
    fn_001008c4(uVar18,(int)(*(int *)(param_1 + 0x20) - uVar18) >> 2,0);
    uVar15 = *puVar16;
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) - uVar15 & 0xfffffffc) + (int)puVar3;
    *(undefined4 **)(param_1 + 0x20) = puVar3 + (int)piVar17;
  }
  local_58 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  local_38 = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d2a4);
  piVar17 = (int *)0x0;
  if (local_38 != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*local_38 + 8))(local_38);
    do {
      if (puVar10 == &DAT_0089a934) goto LAB_0038d004;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  local_38 = (int *)0x0;
LAB_0038d004:
  local_48 = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d2b8);
  if (local_48 != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*local_48 + 8))(local_48);
    do {
      if (puVar10 == &DAT_0089a934) goto LAB_0038d050;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  local_48 = (int *)0x0;
LAB_0038d050:
  local_4c = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d2c8);
  if (local_4c != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*local_4c + 8))(local_4c);
    do {
      if (puVar10 == &DAT_0089a92c) goto LAB_0038d098;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  local_4c = (int *)0x0;
LAB_0038d098:
  local_30 = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d2d4);
  if (local_30 != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*local_30 + 8))(local_30);
    do {
      if (puVar10 == &DAT_0089a934) goto LAB_0038d0e0;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  local_30 = (int *)0x0;
LAB_0038d0e0:
  piVar4 = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d2e8);
  if (piVar4 != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar10 == &DAT_0089a930) goto LAB_0038d12c;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0038d12c:
  local_34 = fn_0038cc08(param_1,local_58,(char *)&DAT_0038d2f4);
  piVar5 = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d300);
  if (piVar5 != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar10 == &DAT_0089a930) goto LAB_0038d188;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0038d188:
  piVar6 = (int *)fn_0038cc08(param_1,local_58,(char *)&DAT_0038d308);
  if (piVar6 != (int *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (puVar10 == &DAT_0089a930) {
        piVar17 = piVar6;
        break;
      }
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  uVar15 = 0;
  local_44 = piVar17;
  do {
    puVar7 = (undefined4 *)fn_00145b00(0x28,&DAT_00812c8c);
    local_60[0] = local_44;
    local_64 = piVar5;
    fn_0038d8b0(puVar7,local_38,local_48,local_4c,local_30,piVar4,local_34);
    fn_0018a69c(local_58,*puVar7);
    puVar10 = *(undefined4 **)(param_1 + 0x1c);
    puVar16 = (uint *)(param_1 + 0x18);
    if (puVar10 == *(undefined4 **)(param_1 + 0x20)) {
      uVar18 = (int)((int)puVar10 - *puVar16) >> 2;
      if (uVar18 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar16) >> 2)) {
        *(undefined4 **)(param_1 + 0x1c) = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = puVar10[-1];
        }
        puVar3 = puVar10 + -1;
        puVar14 = puVar10;
        if (puVar10 < puVar3) {
          if (0 < (int)puVar3 - (int)puVar10) {
            iVar13 = (int)puVar3 - (int)puVar10 >> 2;
            iVar11 = 0;
            do {
              iVar13 = iVar13 + -1;
              puVar10[iVar11 + -1] = puVar3[iVar11 + -1];
              iVar11 = iVar11 + -1;
            } while (iVar13 != 0);
          }
        }
        else {
          while (puVar10 != puVar3) {
            puVar3 = puVar3 + -1;
            puVar14[-1] = *puVar3;
            puVar14 = puVar14 + -1;
          }
        }
        *puVar10 = puVar7;
      }
      else {
        local_40 = uVar18 + (uVar18 >> 1) + (uVar18 >> 3);
        if (local_40 < uVar18 + 0x20) {
          local_40 = uVar18 + 0x20;
        }
        puVar8 = (undefined4 *)fn_00100fc6(local_40 << 2,0);
        puVar14 = puVar8;
        for (puVar3 = (undefined4 *)*puVar16; puVar3 != puVar10; puVar3 = puVar3 + 1) {
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = *puVar3;
          }
          puVar14 = puVar14 + 1;
        }
        puVar3 = (undefined4 *)(((int)puVar10 - *puVar16 & 0xfffffffc) + (int)puVar8);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = puVar7;
        }
        puVar3 = *(undefined4 **)(param_1 + 0x1c);
        puVar7 = (undefined4 *)(((int)puVar10 - *puVar16 & 0xfffffffc) + (int)puVar8);
        for (; puVar10 != puVar3; puVar10 = puVar10 + 1) {
          puVar7 = puVar7 + 1;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar10;
          }
        }
        uVar2 = *puVar16;
        uVar12 = *(uint *)(param_1 + 0x1c);
        uVar18 = uVar2;
        if (uVar12 < uVar2) {
          do {
            uVar18 = uVar18 + 4;
          } while (uVar18 != uVar12);
        }
        fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x20) - uVar2) >> 2,0);
        *(undefined4 **)(param_1 + 0x20) = puVar8 + local_40;
        *(undefined4 **)(param_1 + 0x1c) = puVar8 + ((int)(uVar12 - uVar2) >> 2) + 1;
        *puVar16 = (uint)puVar8;
      }
    }
    else {
      *(undefined4 **)(param_1 + 0x1c) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar7;
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 10);
  *(byte *)(local_38 + 0x11) = *(byte *)(local_38 + 0x11) & 0xfe;
  *(byte *)(local_48 + 0x11) = *(byte *)(local_48 + 0x11) & 0xfe;
  *(byte *)(local_4c + 0x11) = *(byte *)(local_4c + 0x11) & 0xfe;
  *(byte *)(local_30 + 0x11) = *(byte *)(local_30 + 0x11) & 0xfe;
  *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe;
  *(byte *)(piVar5 + 0x11) = *(byte *)(piVar5 + 0x11) & 0xfe;
  iVar13 = local_38[0x10];
  *(int *)(param_1 + 0x28) = local_38[0xf];
  *(int *)(param_1 + 0x2c) = iVar13;
  return;
}



void fn_0038bfac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_0031b77c(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),0);
  uVar2 = fn_0022f750((char *)&DAT_0038c034);
  iVar3 = fn_00101d80(uVar1,uVar2);
  if (iVar3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_0038c040);
  }
  iVar3 = fn_0077f9bc(param_1,param_2);
  uVar2 = fn_0022eed8(*(undefined4 *)(iVar3 + 4));
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0038bdf0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00335988();
  *puVar1 = &DAT_0082aa60;
  return;
}



void fn_00389674(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  *puVar1 = &DAT_0082a80c;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x25) = 0xff;
  return;
}



void fn_00386208(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00242b6c(param_3);
  if ((iVar1 == 2) && (iVar1 = fn_00154ac8(0x3f), iVar1 == 0)) {
    uVar2 = fn_0022f750((char *)&DAT_00386280);
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc0) + param_2 * 4),uVar2);
    return;
  }
  uVar2 = fn_0022f03c(param_3,param_4);
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc0) + param_2 * 4),uVar2);
  return;
}


