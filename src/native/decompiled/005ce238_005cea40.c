#include "005ce238_005cea40.h"



int fn_005cea40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006ba284();
  return iVar1 * (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
}



void fn_005ce9bc(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0020cb0c(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  uVar1 = fn_0020de2c(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  iVar3 = *param_3;
  if (param_3[1] != iVar3) {
    do {
      if (*(short *)(iVar3 + 6) != 0) {
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
        iVar2 = fn_00660c64((int)*(short *)(iVar3 + 6));
        *(int *)(param_1 + 0xe4) = iVar2 + *(int *)(param_1 + 0xe4);
      }
      iVar3 = iVar3 + 8;
    } while (param_3[1] != iVar3);
  }
  return;
}



void fn_005ce948(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = fn_0020cb0c(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  uVar1 = fn_0020de2c(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  do {
    iVar2 = param_2 + uVar3 * 2;
    if (*(short *)(iVar2 + 0x54) != 0) {
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      iVar2 = fn_00660c64((int)*(short *)(iVar2 + 0x54));
      *(int *)(param_1 + 0xe4) = iVar2 + *(int *)(param_1 + 0xe4);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 9);
  return;
}



void fn_005ce90c(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xbc) + 0x2e) = *(undefined2 *)(param_1 + 0xe4);
    *(undefined2 *)(*(int *)(param_1 + 0xbc) + 0x32) = *(undefined2 *)(param_1 + 0xe0);
    *(undefined2 *)(*(int *)(param_1 + 0xbc) + 0x36) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined2 *)(*(int *)(param_1 + 0xbc) + 0x3a) = *(undefined2 *)(param_1 + 0xd8);
  }
  return;
}



undefined4 fn_005ce8b4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_005ce8fc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005ce8fc:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  return 1;
}



undefined1 * fn_005ce568(undefined4 param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_64 [4];
  uint local_54;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined2 local_42;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined4 uStack_30;
  uint *local_2c;
  int local_28;
  
  uStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  fn_0020bbc4(auStack_40,param_3);
  fn_0020b59c(auStack_40);
  local_64[0] = 0;
  local_34 = fn_006bf0fc(auStack_3c,local_64);
  uVar2 = fn_006bf1d4(auStack_3c);
  uVar3 = fn_006bfe90(auStack_3c);
  iVar4 = fn_0066133c(uVar3,uVar2);
  uVar6 = local_2c[1];
  uVar8 = *local_2c;
  if (uVar8 != uVar6) {
    uVar5 = uVar8;
    if (uVar6 <= uVar8) {
      do {
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar6);
    }
    local_2c[1] = uVar6 - (uVar6 - uVar8 & 0xfffffff8);
  }
  iVar10 = 0;
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      puVar1 = local_2c;
      local_48 = 0;
      local_47 = 0;
      local_44 = 0;
      if (iVar9 == local_64[0]) {
        iVar9 = iVar9 + 1;
      }
      local_46 = 0;
      local_43 = 0;
      local_45 = 0;
      if (iVar10 == 0) {
        local_42 = *(undefined2 *)(local_28 + iVar9 * 2 + 0x44);
        local_45 = 1;
      }
      else if (iVar10 == 1) {
        iVar9 = iVar9 + -1;
        local_42 = (undefined2)local_34;
        local_44 = 1;
      }
      else {
        local_42 = *(undefined2 *)(local_28 + iVar9 * 2 + 0x44);
      }
      uVar6 = local_2c[1];
      if (uVar6 == local_2c[2]) {
        uVar8 = (int)(uVar6 - *local_2c) >> 3;
        if (uVar8 < (uint)((int)(local_2c[2] - *local_2c) >> 3)) {
          local_2c[1] = uVar6 + 8;
          if (uVar6 != 0) {
            fn_00166824(uVar6,uVar6 - 8);
          }
          uVar5 = uVar6 - 8;
          uVar8 = uVar6;
          if (uVar6 < uVar5) {
            iVar11 = uVar5 - uVar6;
            if (0 < iVar11) {
              uVar7 = uVar5;
              if (iVar11 * 0x10000000 < 0) {
                uVar7 = uVar6 - 0x10;
                fn_00166824(uVar5,uVar7);
                uVar8 = uVar5;
              }
              for (iVar11 = iVar11 >> 4; iVar11 != 0; iVar11 = iVar11 + -1) {
                fn_00166824(uVar8 - 8,uVar7 - 8);
                uVar8 = uVar8 - 0x10;
                uVar7 = uVar7 - 0x10;
                fn_00166824();
              }
            }
          }
          else {
            while (uVar6 != uVar5) {
              uVar5 = uVar5 - 8;
              fn_00166824(uVar8 - 8,uVar5);
              uVar8 = uVar8 - 8;
            }
          }
          goto LAB_005ce788;
        }
        local_54 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (local_54 < uVar8 + 0x20) {
          local_54 = uVar8 + 0x20;
        }
        uVar7 = fn_00100fc6(local_54 << 3,0);
        uVar5 = uVar7;
        for (uVar8 = *puVar1; uVar8 != uVar6; uVar8 = uVar8 + 8) {
          if (uVar5 != 0) {
            fn_00166824(uVar5,uVar8);
          }
          uVar5 = uVar5 + 8;
        }
        iVar11 = (uVar6 - *puVar1 & 0xfffffff8) + uVar7;
        if (iVar11 != 0) {
          fn_00166824(iVar11,&local_48);
        }
        uVar8 = puVar1[1];
        iVar11 = (uVar6 - *puVar1 & 0xfffffff8) + uVar7;
        for (; uVar6 != uVar8; uVar6 = uVar6 + 8) {
          iVar11 = iVar11 + 8;
          if (iVar11 != 0) {
            fn_00166824(iVar11,uVar6);
          }
        }
        uVar8 = puVar1[1];
        uVar5 = *puVar1;
        uVar6 = uVar5;
        if (uVar8 < uVar5) {
          do {
            uVar6 = uVar6 + 8;
          } while (uVar6 != uVar8);
        }
        fn_001008c4(uVar5,(int)(puVar1[2] - uVar5) >> 3,0);
        puVar1[2] = uVar7 + local_54 * 8;
        puVar1[1] = uVar7 + ((int)(uVar8 - uVar5) >> 3) * 8 + 8;
        *puVar1 = uVar7;
      }
      else {
        local_2c[1] = uVar6 + 8;
        if (uVar6 != 0) {
LAB_005ce788:
          fn_00166824(uVar6,&local_48);
        }
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar10 < iVar4);
  }
  return auStack_40;
}



void fn_005ce3fc(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2) <= uVar2) {
      fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar2);
    }
    if (*(int *)(*(int *)(param_1 + 0xc0) + uVar2 * 4) != 0) {
      if ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2) <= uVar2) {
        fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar2);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc0) + uVar2 * 4) + 0x18))();
      if ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2) <= uVar2) {
        fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar2);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0xc0) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      if ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2) <= uVar2) {
        fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar2);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x18))();
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  fn_002c4100(param_1);
  return;
}



void fn_005ce2ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),0);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_003cfaac(param_1,2);
  fn_003d0478(*(undefined4 *)(param_1 + 8),2);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  fn_0038dad0(*(undefined4 *)(param_1 + 4),0,4,0,1,&LAB_005ce3cc,&LAB_005ce3cc);
  fn_0038dad0(*(undefined4 *)(param_1 + 4),1,4,1,1,&LAB_005ce3cc,&LAB_005ce3cc);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0038d7f4) */

undefined4 fn_005ce2e0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
  while( true ) {
    if (*(int **)(*(int *)(param_1 + 4) + 0x1c) == piVar1) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x24) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(*piVar1 + 0x14) + 0xa4);
}



void fn_005ce238(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_0038d4c4(*(undefined4 *)(param_1 + 4),0,(int)*(char *)(param_1 + 0x22),param_4,param_4);
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = (uint)*(char *)(param_1 + 0x14);
  uVar1 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar2,uVar1);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar3 + 0x18) + uVar2 * 4) + 0x1c
              );
  fn_003cfa24(param_1,param_2,param_3,param_4);
  return;
}


