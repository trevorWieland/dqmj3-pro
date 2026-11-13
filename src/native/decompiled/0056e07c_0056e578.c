#include "0056e07c_0056e578.h"



void fn_0056e578(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0xec) + 0x30))
            (*(int **)(param_1 + 0xec),param_1 + 0xf8,param_1 + 0xfc);
  (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))
            (*(int **)(param_1 + 0xec),0xffffffff,0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x2c))(*(int **)(param_1 + 0xf0),param_2,0);
  fn_0056d5f4(param_1,0xffffffff);
  if (*(char *)(param_1 + 0x125) != '\0') {
    iVar1 = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(iVar1 + 0x7f) = 0;
    fn_0031ef00(iVar1,1);
  }
  *(undefined1 *)(param_1 + 0xde) = 3;
  return;
}



undefined4 fn_0056e470(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (param_2 == 0) {
    if ((param_3 == 0) && (*(int *)(param_1 + 0xa4) + -1 <= iVar1)) {
      return 0;
    }
    *(int *)(param_1 + 0xa8) = iVar1 + 1;
    if (*(int *)(param_1 + 0xa4) <= iVar1 + 1) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
  }
  else {
    if ((param_3 == 0) && (iVar1 < 1)) {
      return 0;
    }
    *(int *)(param_1 + 0xa8) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa4) + -1;
    }
  }
  local_18 = 0;
  (**(code **)(**(int **)(param_1 + 0xec) + 0x30))(*(int **)(param_1 + 0xec),&local_18,0);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 3;
  }
  (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))(*(int **)(param_1 + 0xec),local_18,uVar2,0);
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x24) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x3c) = *(undefined4 *)(param_1 + 0xa8);
  fn_00290100(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa8));
  fn_0056e984(param_1);
  fn_0068ab44(param_1,0x100094f);
  *(undefined4 *)(param_1 + 0x120) = 3;
  return 1;
}



void fn_0056e19c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int local_28;
  
  if (*(char *)(param_1 + 0x10c) == '\0') {
    iVar7 = 0;
    do {
      iVar2 = 0;
      do {
        if (iVar7 == 0) {
          piVar3 = *(int **)(param_1 + 0xac);
          pcVar6 = *(code **)(*piVar3 + 0x30);
          iVar8 = 0;
LAB_0056e270:
          iVar8 = (*pcVar6)(piVar3,iVar8,iVar2);
          if (iVar8 != 0) {
            *(undefined1 *)(iVar8 + 0x33) = 1;
          }
        }
        else if ((iVar7 == 1 || iVar7 == 2) || iVar7 == 3) {
          piVar3 = *(int **)(param_1 + 0xb0);
          pcVar6 = *(code **)(*piVar3 + 0x30);
          iVar8 = iVar7 + -1;
          goto LAB_0056e270;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x100);
    iVar8 = 0;
    iVar10 = iVar7 % 4;
    iVar2 = 1;
    local_28 = 1;
    if (iVar10 == 0) {
      iVar2 = 4;
    }
    if (iVar10 == 0) {
      local_28 = iVar2;
    }
    do {
      iVar2 = 0;
      do {
        piVar3 = (int *)0x0;
        if (iVar8 == 0) {
          piVar3 = (int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4);
LAB_0056e2c0:
          iVar9 = *piVar3;
        }
        else {
          if ((iVar8 == 1 || iVar8 == 2) || iVar8 == 3) {
            piVar3 = (int *)(param_1 + 0x98);
          }
          iVar9 = 0;
          if ((iVar8 == 1 || iVar8 == 2) || iVar8 == 3) {
            piVar3 = (int *)(*piVar3 + (iVar8 + *(int *)(param_1 + 0xa8) * 0xc + iVar2 * 3 + -1) * 4
                            );
            goto LAB_0056e2c0;
          }
        }
        uVar11 = 1;
        if (*(int *)(param_1 + 0x108) == 0) {
LAB_0056e314:
          bVar1 = true;
        }
        else {
          uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0020bbc4(auStack_38,uVar4);
          iVar5 = fn_006bfe90(auStack_34);
          if (iVar5 < 3) goto LAB_0056e314;
          bVar1 = false;
        }
        bVar12 = !bVar1 && iVar8 == 0;
        if (!bVar1 && iVar8 == 0) {
          bVar12 = iVar2 == 3;
        }
        if (bVar12) {
LAB_0056e378:
          uVar11 = 0;
        }
        else if ((iVar10 == 0 && (int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1e)) >> 2 == 3) &&
                (iVar9 != 0)) {
          uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0020bbc4(auStack_30,uVar4);
          iVar9 = fn_006bfe90(auStack_2c);
          if (2 < iVar9) goto LAB_0056e378;
        }
        iVar9 = 0;
        if (iVar8 == 0) {
          piVar3 = *(int **)(param_1 + 0xac);
          pcVar6 = *(code **)(*piVar3 + 0x30);
          iVar9 = 0;
LAB_0056e3c4:
          iVar9 = (*pcVar6)(piVar3,iVar9,iVar2);
        }
        else if ((iVar8 == 1 || iVar8 == 2) || iVar8 == 3) {
          piVar3 = *(int **)(param_1 + 0xb0);
          pcVar6 = *(code **)(*piVar3 + 0x30);
          iVar9 = iVar8 + -1;
          goto LAB_0056e3c4;
        }
        iVar2 = iVar2 + 1;
        *(undefined1 *)(iVar9 + 0x33) = uVar11;
      } while (iVar2 < 4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_28);
  }
  iVar7 = 0;
  do {
    iVar2 = 0;
    do {
      if (iVar7 == 0) {
        piVar3 = *(int **)(param_1 + 0xac);
        pcVar6 = *(code **)(*piVar3 + 0x30);
        iVar8 = 0;
LAB_0056e434:
        piVar3 = (int *)(*pcVar6)(piVar3,iVar8,iVar2);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x14))();
        }
      }
      else if ((iVar7 == 1 || iVar7 == 2) || iVar7 == 3) {
        piVar3 = *(int **)(param_1 + 0xb0);
        pcVar6 = *(code **)(*piVar3 + 0x30);
        iVar8 = iVar7 + -1;
        goto LAB_0056e434;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar7 = iVar7 + 1;
    if (3 < iVar7) {
      return;
    }
  } while( true );
}



void fn_0056e07c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int iStack_28;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xe8);
    if (cVar1 == '\0') {
      fn_0056d0fc(param_1);
    }
    else if (cVar1 == '\x01') {
      fn_0056e744(param_1);
    }
    else if (cVar1 == '\x02') {
      fn_0056df68(param_1);
    }
  }
  (**(code **)(**(int **)(param_1 + 0xac) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xb4) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xc0) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x14))();
  (**(code **)(**(int **)(param_1 + 200) + 0x14))();
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  cVar1 = *(char *)(param_1 + 0xdc);
  *(char *)(param_1 + 0xdd) = cVar1;
  *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xde);
  if (cVar1 == *(char *)(param_1 + 0xde)) {
    iVar3 = *(int *)(param_1 + 0xe4) + 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xe4) = iVar3;
  if (*(char *)(param_1 + 0x10c) == '\0') {
    iVar3 = 0;
    do {
      iVar4 = 0;
      do {
        if (iVar3 == 0) {
          piVar5 = *(int **)(param_1 + 0xac);
          pcVar8 = *(code **)(*piVar5 + 0x30);
          iVar9 = 0;
LAB_0056e270:
          iVar9 = (*pcVar8)(piVar5,iVar9,iVar4);
          if (iVar9 != 0) {
            *(undefined1 *)(iVar9 + 0x33) = 1;
          }
        }
        else if ((iVar3 == 1 || iVar3 == 2) || iVar3 == 3) {
          piVar5 = *(int **)(param_1 + 0xb0);
          pcVar8 = *(code **)(*piVar5 + 0x30);
          iVar9 = iVar3 + -1;
          goto LAB_0056e270;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x100);
    iVar9 = 0;
    iVar11 = iVar3 % 4;
    iVar4 = 1;
    iStack_28 = 1;
    if (iVar11 == 0) {
      iVar4 = 4;
    }
    if (iVar11 == 0) {
      iStack_28 = iVar4;
    }
    do {
      iVar4 = 0;
      do {
        piVar5 = (int *)0x0;
        if (iVar9 == 0) {
          piVar5 = (int *)(*(int *)(param_1 + 0x8c) + iVar4 * 4);
LAB_0056e2c0:
          iVar10 = *piVar5;
        }
        else {
          if ((iVar9 == 1 || iVar9 == 2) || iVar9 == 3) {
            piVar5 = (int *)(param_1 + 0x98);
          }
          iVar10 = 0;
          if ((iVar9 == 1 || iVar9 == 2) || iVar9 == 3) {
            piVar5 = (int *)(*piVar5 + (iVar9 + *(int *)(param_1 + 0xa8) * 0xc + iVar4 * 3 + -1) * 4
                            );
            goto LAB_0056e2c0;
          }
        }
        uVar12 = 1;
        if (*(int *)(param_1 + 0x108) == 0) {
LAB_0056e314:
          bVar2 = true;
        }
        else {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0020bbc4(auStack_38,uVar6);
          iVar7 = fn_006bfe90(auStack_34);
          if (iVar7 < 3) goto LAB_0056e314;
          bVar2 = false;
        }
        bVar13 = !bVar2 && iVar9 == 0;
        if (!bVar2 && iVar9 == 0) {
          bVar13 = iVar4 == 3;
        }
        if (bVar13) {
LAB_0056e378:
          uVar12 = 0;
        }
        else if ((iVar11 == 0 && (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2 == 3) &&
                (iVar10 != 0)) {
          uVar6 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          fn_0020bbc4(auStack_30,uVar6);
          iVar10 = fn_006bfe90(auStack_2c);
          if (2 < iVar10) goto LAB_0056e378;
        }
        iVar10 = 0;
        if (iVar9 == 0) {
          piVar5 = *(int **)(param_1 + 0xac);
          pcVar8 = *(code **)(*piVar5 + 0x30);
          iVar10 = 0;
LAB_0056e3c4:
          iVar10 = (*pcVar8)(piVar5,iVar10,iVar4);
        }
        else if ((iVar9 == 1 || iVar9 == 2) || iVar9 == 3) {
          piVar5 = *(int **)(param_1 + 0xb0);
          pcVar8 = *(code **)(*piVar5 + 0x30);
          iVar10 = iVar9 + -1;
          goto LAB_0056e3c4;
        }
        iVar4 = iVar4 + 1;
        *(undefined1 *)(iVar10 + 0x33) = uVar12;
      } while (iVar4 < 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iStack_28);
  }
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      if (iVar3 == 0) {
        piVar5 = *(int **)(param_1 + 0xac);
        pcVar8 = *(code **)(*piVar5 + 0x30);
        iVar9 = 0;
LAB_0056e434:
        piVar5 = (int *)(*pcVar8)(piVar5,iVar9,iVar4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x14))();
        }
      }
      else if ((iVar3 == 1 || iVar3 == 2) || iVar3 == 3) {
        piVar5 = *(int **)(param_1 + 0xb0);
        pcVar8 = *(code **)(*piVar5 + 0x30);
        iVar9 = iVar3 + -1;
        goto LAB_0056e434;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return;
    }
  } while( true );
}


