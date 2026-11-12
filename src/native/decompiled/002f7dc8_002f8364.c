#include "002f7dc8_002f8364.h"



int * fn_002f8364(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  piVar3 = *(int **)(iVar1 + 0x18);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar2 == &DAT_00897128) {
        return piVar3;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



undefined4 * fn_002f830c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089711c) {
        return puVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}



void fn_002f829c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_3e8 [966];
  undefined1 local_22;
  
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x3c);
  uVar1 = fn_002f8914();
  fn_006c3acc(uVar3,uVar1,auStack_3e8);
  local_22 = (undefined1)param_1;
  uVar1 = fn_002f8914();
  fn_0036a810(uVar3,uVar1,auStack_3e8);
  if ((param_1 != 0) && (iVar2 = fn_002f8914(), iVar2 != 0)) {
    fn_0036a88c(uVar3,1);
  }
  return;
}



void fn_002f8228(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0x95);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_002f827c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002f827c:
                    /* WARNING: Could not recover jumptable at 0x002f8290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  return;
}



int fn_002f81dc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_008977ec + 0x28);
  uVar1 = fn_002f8914();
  iVar2 = fn_006cd638(uVar4,uVar1);
  uVar1 = fn_002f8914();
  iVar3 = fn_0041fe24(uVar4,uVar1);
  return *(int *)(iVar3 + 8) - *(int *)(iVar2 + 8);
}



void fn_002f8170(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0x95);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_002f81c0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002f81c0:
                    /* WARNING: Could not recover jumptable at 0x002f81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x10))(piVar1);
  return;
}



int fn_002f8144(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002f8914();
  iVar2 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar1);
  return (int)*(char *)(iVar2 + 0x3c6);
}



/* WARNING: Removing unreachable block (ram,0x002f7ee4) */

undefined4 fn_002f7e9c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = 9;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  iVar1 = fn_002f8914();
  if (iVar1 != 0) {
    iVar1 = fn_006cd678(*(undefined4 *)(DAT_008977ec + 0x28));
    uVar4 = 0;
    do {
      iVar3 = local_2c;
      piVar5 = (int *)(iVar1 + uVar4 * 8);
      if (*piVar5 == 5) {
        iVar2 = piVar5[1];
        iVar3 = fn_002471d4(param_1,param_2);
        if (local_2c == 0) {
          iVar3 = fn_002473c0(iVar3);
        }
        else {
          iVar6 = fn_00247444();
          iVar3 = fn_002473c0(iVar6 + iVar3);
        }
        if (iVar2 < iVar3) {
          return 0;
        }
      }
      else if (local_2c == 0) {
        iVar3 = 0;
        if (0 < param_2) {
          do {
            iVar2 = *(int *)(param_1 + iVar3 * 4);
            if ((iVar2 != 0) && (iVar2 = fn_001a46f4((int)*(short *)(iVar2 + 0x1c)), iVar2 != 0)) {
              iVar6 = *(int *)(param_1 + iVar3 * 4);
              iVar2 = fn_002f8914();
              if (iVar2 != 0) {
                local_38 = iVar6;
                switch(*piVar5) {
                case 0:
                  if (((piVar5[1] != 0) || (iVar2 = fn_006bfe90(&local_38), iVar2 != 1)) &&
                     (iVar2 = fn_006bfe90(&local_38), iVar2 != piVar5[1])) {
                    return 0;
                  }
                  break;
                case 1:
                  iVar2 = fn_00661088(&local_38);
                  if (iVar2 != piVar5[1]) {
                    return 0;
                  }
                  break;
                default:
                  goto switchD_002f7f34_caseD_2;
                case 4:
                  iVar2 = fn_006bfdec(&local_38);
                  if (iVar2 != piVar5[1]) {
                    return 0;
                  }
                  break;
                case 5:
                case 9:
                  break;
                }
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_2);
        }
      }
      else {
        iVar2 = fn_002f8914();
        if (iVar2 != 0) {
          local_38 = iVar3;
          switch(*piVar5) {
          case 0:
            if (((piVar5[1] != 0) || (iVar3 = fn_006bfe90(&local_38), iVar3 != 1)) &&
               (iVar3 = fn_006bfe90(&local_38), iVar3 != piVar5[1])) {
              return 0;
            }
            break;
          case 1:
            iVar3 = fn_00661088(&local_38);
            if (iVar3 != piVar5[1]) {
              return 0;
            }
            break;
          default:
switchD_002f7f34_caseD_2:
            return 0;
          case 4:
            iVar3 = fn_006bfdec(&local_38);
            if (iVar3 != piVar5[1]) {
              return 0;
            }
            break;
          case 5:
          case 9:
            break;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
  }
  return 1;
}



void fn_002f7e84(undefined4 param_1)

{
  fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  return;
}



undefined4 fn_002f7e70(void)

{
  return *(undefined4 *)(DAT_00897804 + 0x3c);
}



void fn_002f7dc8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_001f74e4(*(undefined4 *)(DAT_008977ec + 0x24),0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    while (puVar2 != &DAT_00894d28) {
      puVar2 = (undefined4 *)*puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
    }
    if ((puVar1 != (undefined4 *)0x0) &&
       (iVar3 = fn_0028eac0(*(undefined4 *)(DAT_008977ec + 0x24),0x3c), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
  }
  return;
}


