#include "003fdf24_004059f4.h"



/* WARNING: Removing unreachable block (ram,0x00405c84) */
/* WARNING: Removing unreachable block (ram,0x00405d20) */

undefined4 fn_004059f4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  puVar10 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_00405a4c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00405a4c:
  param_1[0x19] = (int)puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893d34) goto LAB_00405a90;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00405a90:
  param_1[0x1a] = (int)puVar1;
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890ac8) goto LAB_00405acc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00405acc:
  param_1[0x1b] = (int)puVar1;
  param_1[0x25] = param_2[2];
  *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
  *(undefined1 *)((int)param_1 + 0xa6) = 1;
  iVar3 = fn_001481c8(param_1[0x1c],*param_2,&DAT_00405dcc,1,1);
  param_1[0x1d] = iVar3;
  iVar3 = fn_001480d0(param_1[0x1c],iVar3,param_2[1],&DAT_00405dd0,1,1,0);
  param_1[0x1e] = iVar3;
  uVar4 = fn_00178f9c(param_1[0x1c],iVar3);
  uVar5 = fn_00172c98(uVar4,(char *)&DAT_00405dd4);
  iVar3 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar3 != 0) {
    piVar6 = (int *)fn_0031fee0(iVar3,param_1[1],uVar5,1,param_1[0x12]);
  }
  piVar9 = (int *)param_1[0x23];
  if (piVar9 != piVar6) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    param_1[0x23] = (int)piVar6;
  }
  (**(code **)(*(int *)param_1[0x23] + 0x10))();
  fn_002573b0(param_1[0x2d],0,*(undefined4 *)(param_1[0x1b] + 0xc));
  fn_002573b0(param_1[0x2d],1,*(undefined4 *)(param_1[0x1b] + 0x10));
  uVar5 = *(undefined4 *)(param_1[0x1b] + 0x30);
  if (*(char *)(param_2 + 3) == '\0') {
    *(undefined1 *)(param_1[0x2d] + 0x1c) = 0;
    fn_002560d0(param_1[0x2d]);
    iVar3 = fn_00145b00(0x34,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar3 != 0) {
      piVar6 = (int *)fn_0038f004();
    }
    piVar9 = (int *)param_1[0x1f];
    if (piVar9 != piVar6) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))(piVar9);
      }
      param_1[0x1f] = (int)piVar6;
    }
    iVar3 = param_1[0x2d];
    uVar7 = fn_00172c98(uVar4,(char *)&DAT_00405de4);
    fn_0038eae8(param_1[0x1f],param_1,param_1[1],param_1[0x12],uVar7,iVar3,uVar5);
  }
  else {
    *(undefined1 *)(param_1[0x2d] + 0x1c) = 1;
    fn_002560d0(param_1[0x2d]);
    iVar3 = fn_00145b00(0x3c,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar3 != 0) {
      piVar6 = (int *)fn_00423144();
    }
    iVar3 = param_1[0x2d];
    uVar7 = fn_00172c98(uVar4,(char *)&DAT_00405de4);
    fn_00422ed4(piVar6,param_1,param_1[1],param_1[0x12],uVar4,uVar7,iVar3,uVar5);
    piVar9 = (int *)param_1[0x1f];
    if (piVar9 != piVar6) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))();
      }
      param_1[0x1f] = (int)piVar6;
    }
  }
  *(undefined1 *)(param_1[0x1f] + 0x18) = 1;
  if (*(char *)(param_2 + 3) == '\0') {
    iVar3 = fn_00145b00(0x40,&DAT_00812c8c);
    if (iVar3 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_00315f18();
    }
    piVar9 = (int *)param_1[0x20];
    if (piVar9 != piVar6) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))();
      }
      param_1[0x20] = (int)piVar6;
    }
    uVar5 = fn_00172c98(uVar4,(char *)&DAT_00405df0);
    fn_00315a3c(param_1[0x20],param_1,param_1[1],param_1[0x12],uVar5);
  }
  else {
    iVar3 = fn_00145b00(0x44,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar3 != 0) {
      piVar6 = (int *)fn_003ac350();
    }
    uVar5 = fn_00172c98(uVar4,(char *)&DAT_00405df0);
    fn_003ac250(piVar6,param_1,param_1[1],param_1[0x12],uVar4,uVar5);
    piVar9 = (int *)param_1[0x20];
    if (piVar9 != piVar6) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))();
      }
      param_1[0x20] = (int)piVar6;
    }
  }
  uVar5 = fn_00172c98(uVar4,(char *)&DAT_0040619c);
  fn_002d7e20(param_1[0x21],param_1,param_1[1],param_1[0x12],uVar5);
  uVar5 = fn_00172c98(uVar4,(char *)&DAT_004061a8);
  iVar3 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar3 != 0) {
    piVar6 = (int *)fn_002b44c0(iVar3,param_1[1],uVar5,0,param_1[0x12]);
  }
  piVar9 = (int *)param_1[0x24];
  if (piVar9 != piVar6) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    param_1[0x24] = (int)piVar6;
  }
  (**(code **)(*(int *)param_1[0x24] + 0x10))();
  uVar5 = *(undefined4 *)(param_1[0x1b] + 0x2c);
  uVar4 = fn_00172c98(uVar4,(char *)&DAT_004061b0);
  fn_0033a9b8(param_1[0x22],param_1,param_1[1],param_1[0x12],uVar4,uVar5);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890e84) {
        if (puVar1 != (undefined4 *)0x0) {
          if (*(char *)(puVar1 + 3) == '\x02') {
            uVar4 = fn_0022f750((char *)&DAT_004061d0);
            fn_0031fe38(param_1[0x23],uVar4);
          }
          else {
            uVar4 = fn_0022f750((char *)&DAT_004061c4);
            fn_0031fe38(param_1[0x23],uVar4);
          }
        }
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  switch(*(undefined1 *)(param_1[0x1b] + 0x14)) {
  case 0:
    iVar11 = param_1[0x2d];
    iVar3 = fn_006ba4ec(param_1[0x1f]);
    if (iVar3 < 2) {
      iVar3 = fn_006ba4ec();
    }
    else {
      iVar3 = 0;
    }
    uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(iVar11 + 4) + iVar3 * 4));
    (**(code **)(*param_1 + 0x10c))(param_1,uVar4,0x2d);
    iVar3 = param_1[0x23];
    uVar4 = 1;
    goto LAB_004060c0;
  case 1:
    fn_0031de9c(param_1[0x1f],0);
    iVar11 = param_1[0x1f];
    iVar3 = fn_006ba4ec(iVar11);
    if (iVar3 < 2) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_006ba4ec(iVar11);
      iVar3 = iVar3 + -2;
    }
    (**(code **)(*param_1 + 0x10c))
              (param_1,*(int *)(param_1[0x2d] + 0x10) + iVar3 * 0x104 + 0x10,0xe1);
    iVar3 = param_1[0x23];
    uVar4 = 0;
LAB_004060c0:
    fn_002a3bb0(iVar3,uVar4);
    break;
  case 2:
    *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa6) = 1;
    iVar11 = param_1[0x1f];
    iVar3 = fn_006ba4ec(iVar11);
    if (iVar3 < 2) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_006ba4ec(iVar11);
      iVar3 = iVar3 + -2;
    }
    (**(code **)(*param_1 + 0x10c))
              (param_1,*(int *)(param_1[0x2d] + 0x10) + iVar3 * 0x104 + 0x10,0xe1);
    break;
  case 3:
    *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa6) = 1;
    iVar11 = param_1[0x2d];
    iVar3 = fn_006ba4ec(param_1[0x1f]);
    if (iVar3 < 2) {
      iVar3 = fn_006ba4ec();
    }
    else {
      iVar3 = 0;
    }
    uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(iVar11 + 4) + iVar3 * 4));
    (**(code **)(*param_1 + 0x10c))(param_1,uVar4,0x2d);
    fn_002a3bb0(param_1[0x23],3);
    break;
  case 4:
    fn_0031dfc8(param_1[0x1f],*(undefined4 *)(param_1[0x1b] + 0x30));
    fn_0031e0f4(param_1[0x1f],0);
    fn_00408d04(param_1,*(undefined4 *)(param_1[0x1b] + 0x20),0);
    iVar11 = param_1[0x1f];
    uVar5 = *(undefined4 *)(param_1[0x1b] + 0x24);
    uVar4 = *(undefined4 *)(param_1[0x1b] + 0x28);
    iVar3 = fn_006ba4ec(iVar11);
    if (iVar3 < 2) {
      uVar8 = fn_006ba4ec(iVar11);
      if (uVar8 < 2) goto LAB_0040624c;
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
LAB_0040624c:
      uVar7 = *(undefined4 *)(*(int *)(param_1[0x2d] + 4) + uVar8 * 4);
    }
    iVar3 = fn_0033aa68(param_1[0x22],uVar7,uVar5,uVar4);
    if (iVar3 == 0) {
      *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
      *(undefined1 *)((int)param_1 + 0xa6) = 4;
    }
    else {
      *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
      *(undefined1 *)((int)param_1 + 0xa6) = 8;
      fn_002a3bb0(param_1[0x23],3);
      fn_002cb37c(param_1[0x21],0);
      fn_002a3bb0(param_1[0x23],3);
    }
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0x5c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00895114) {
          puVar10 = puVar1;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    if (*(char *)(puVar10 + 7) == '\x01') {
      fn_004082f4(param_1,1);
    }
    iVar11 = param_1[0x2d];
    iVar3 = fn_006ba4ec(param_1[0x1f]);
    if (iVar3 < 2) {
      iVar3 = fn_006ba4ec();
    }
    else {
      iVar3 = 0;
    }
    uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(iVar11 + 4) + iVar3 * 4));
    (**(code **)(*param_1 + 0x10c))(param_1,uVar4,0x2d);
  }
  return 1;
}



undefined4 fn_003fdf24(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_003fdf74;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003fdf74:
  param_1[0x19] = (int)puVar2;
  uVar4 = fn_006b5288(*(undefined4 *)(DAT_00897804 + 0x1c));
  uVar1 = fn_002aaac8(uVar4,0);
  fn_00237c74(&local_110,uVar4,uVar1,0);
  fn_0024fa24(&local_110);
  iVar5 = (**(code **)(*param_1 + 8))(param_1);
  piVar6 = *(int **)(iVar5 + 0x18);
  if (piVar6 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0xc))(piVar6);
    do {
      if (puVar2 == &DAT_00891a14) goto LAB_003fdffc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_003fdffc:
  fn_002a829c(piVar6,&local_110,0,8);
  fn_002a830c(piVar6);
  uVar4 = fn_0022f584((char *)&DAT_003fe090,0);
  local_108 = 0;
  local_10c = 1;
  local_104 = 0;
  uStack_100 = 1;
  local_110 = 0;
  fn_0036c5f4(param_1[0x17],uVar4,1);
  fn_00689bd0(param_1,0x48,0);
  *(undefined1 *)((int)param_1 + 0x6e) = 1;
  fn_0025b9fc(*(undefined4 *)(DAT_00897804 + 8),1);
  return 1;
}


