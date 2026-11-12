#include "002e336c_002e3d18ab.h"



undefined4 fn_002e3564(int *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  switch((char)param_1[1]) {
  case '\x02':
    iVar6 = (**(code **)(*(int *)param_1[2] + 0xc))();
    uVar3 = (**(code **)(*(int *)param_1[2] + 0x14))();
    iVar4 = (**(code **)(*(int *)param_1[2] + 0x18))();
    iVar5 = (**(code **)(*(int *)param_1[2] + 0x10))();
    if ((iVar5 == 0x16) && (iVar5 = (**(code **)(*(int *)param_1[4] + 0x2c))(), iVar5 != 0)) {
      (**(code **)(**(int **)(param_1[4] + 0xc) + 0x30))(*(int **)(param_1[4] + 0xc),0x48,0);
    }
    if (param_1[5] != 0) {
      param_1[5] = param_1[5] + -1;
    }
    uVar1 = DAT_00897818;
    if (iVar6 != 0) {
      return 0;
    }
    switch(uVar3) {
    case 1:
      iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
      if (iVar6 == 0) {
        param_1[6] = iVar4;
        iVar6 = 0;
        if (*param_1 == 4) {
          while (*(int *)(&DAT_00897dc0 + iVar6 * 4 + iVar4 * 0x20) != 0) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          while (*(int *)(&DAT_00897a40 + iVar6 * 4 + iVar4 * 0x20) != 0) {
            iVar6 = iVar6 + 1;
          }
        }
        param_1[7] = iVar6;
        param_1[8] = -1;
        *(undefined1 *)((int)param_1 + 0x25) = 1;
        fn_002e342c(param_1,0);
        uVar2 = 3;
        goto LAB_002e3948;
      }
      iVar6 = (**(code **)(*(int *)param_1[4] + 0x2c))();
      goto joined_r0x002e3808;
    case 2:
      iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
      if (iVar6 == 0) {
        param_1[6] = iVar4;
        iVar6 = 0;
        if (*param_1 == 4) {
          while (*(int *)(&DAT_00897dc0 + iVar6 * 4 + iVar4 * 0x20) != 0) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          while (*(int *)(&DAT_00897a40 + iVar6 * 4 + iVar4 * 0x20) != 0) {
            iVar6 = iVar6 + 1;
          }
        }
        param_1[7] = iVar6;
        param_1[8] = -1;
        *(undefined1 *)((int)param_1 + 0x25) = 1;
        fn_002e342c(param_1,1);
        *(undefined1 *)(param_1 + 1) = 4;
        return 0;
      }
      iVar6 = (**(code **)(*(int *)param_1[4] + 0x2c))();
      goto joined_r0x002e3808;
    case 4:
switchD_002e3664_caseD_4:
      (**(code **)(*(int *)param_1[2] + 0x1c))((int *)param_1[2],0xffffffff);
      break;
    case 5:
      iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
      if (iVar6 == 0) {
        if (*param_1 == 4) {
          pcVar7 = (char *)&DAT_002e3ab8;
        }
        else {
          pcVar7 = (char *)&DAT_002e3a9c;
        }
        fn_002e336c(param_1,pcVar7,0,0,1);
        *(undefined1 *)((int)param_1 + 0x25) = 0;
        goto switchD_002e3664_caseD_4;
      }
      iVar6 = (**(code **)(*(int *)param_1[4] + 0x2c))();
joined_r0x002e3808:
      if (iVar6 != 0) {
        (**(code **)(**(int **)(param_1[4] + 0xc) + 0x30))(*(int **)(param_1[4] + 0xc),0x48,0);
      }
      *(undefined1 *)(param_1 + 1) = 6;
      break;
    case 6:
      if (*(char *)((int)param_1 + 0x27) == '\0') {
        fn_0026a494(DAT_00897818,param_1[4],1);
        *(undefined1 *)((int)param_1 + 0x27) = 1;
      }
      else {
        iVar6 = fn_00269b38(DAT_00897818);
        if ((iVar6 == 2) || (iVar6 = fn_00269864(uVar1), iVar6 != 0)) {
          (**(code **)(*(int *)param_1[2] + 0x1c))((int *)param_1[2],0xffffffff);
          *(undefined1 *)((int)param_1 + 0x27) = 0;
        }
      }
      break;
    case 7:
      if ((((char)param_1[9] != '\0') &&
          (iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc)), iVar6 != 0)) &&
         (iVar6 = (**(code **)(*(int *)param_1[4] + 0x2c))(), iVar6 != 0)) {
        (**(code **)(**(int **)(param_1[4] + 0xc) + 0x30))(*(int **)(param_1[4] + 0xc),0x48,0);
      }
      (**(code **)(*(int *)param_1[2] + 0x1c))((int *)param_1[2],0xffffffff);
      uVar2 = 7;
LAB_002e3948:
      *(undefined1 *)(param_1 + 1) = uVar2;
    }
    break;
  case '\x03':
    iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
    if ((iVar6 == 0) && (iVar6 = fn_002e342c(param_1,0), iVar6 == 0)) {
      (**(code **)(*(int *)param_1[2] + 0x1c))((int *)param_1[2],0xffffffff);
      *(undefined1 *)(param_1 + 1) = 2;
    }
    break;
  case '\x04':
    iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
    if (iVar6 == 0) {
      if (param_1[8] == param_1[7] + -1) {
        (**(code **)(*(int *)param_1[2] + 0x1c))
                  ((int *)param_1[2],*(char *)(param_1[3] + 0x31) == '\x03');
        *(undefined1 *)(param_1 + 1) = 2;
      }
      else {
        if ((((char)param_1[9] != '\0') || (param_1[8] + 1 < param_1[7])) &&
           (iVar6 = (**(code **)(*(int *)param_1[4] + 0x2c))(), iVar6 != 0)) {
          (**(code **)(**(int **)(param_1[4] + 0xc) + 0x30))(*(int **)(param_1[4] + 0xc),0x48,0);
        }
        fn_002e342c(param_1,1);
      }
    }
    break;
  case '\x06':
    iVar6 = fn_0028e66c(*(undefined4 *)(param_1[4] + 0xc));
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 1) = 2;
    }
    break;
  case '\a':
    DAT_00897a34 = (**(code **)(*(int *)param_1[2] + 0x20))();
    uVar8 = 1;
  }
  return uVar8;
}



void fn_002e3524(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2],param_2);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 2;
  DAT_00897a34 = 0;
  return;
}


