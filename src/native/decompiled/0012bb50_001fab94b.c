#include "0012bb50_001fab94b.h"



int fn_001fab94(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    fn_001fa5a0(param_1);
    fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0013af30(DAT_008977d4,*(undefined4 *)(param_1 + 0xc));
    uVar8 = *(undefined4 *)(param_1 + 4);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x3c);
    uVar3 = fn_00129004();
    fn_002419f4(uVar3,uVar8,uVar7);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = fn_00129004();
    fn_002416b4(uVar3,uVar7,uVar8);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = fn_00129004();
    fn_00241948(uVar3,uVar7,uVar8);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
    fn_001f748c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x38),1);
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return -1;
    }
    cVar1 = *(char *)(param_1 + 0x34);
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
    }
    iVar2 = fn_006f7998(DAT_008977e0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    fn_00129004();
    fn_00121084();
    fn_00129004();
    fn_00120f74();
    fn_00129004();
    fn_001210e8();
    fn_0013af30(DAT_008977d4,0);
    if (*(char *)(param_1 + 0x36) != '\0') {
      fn_001fa3ac(param_1);
      *(undefined1 *)(param_1 + 0x36) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0xff;
    return (int)cVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))();
  fn_0023e6c8(*(undefined4 *)(param_1 + 8));
  fn_00234438(*(undefined4 *)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  pcVar5 = *(code **)(*DAT_0089780c + 8);
  (*pcVar5)(DAT_0089780c,1);
  if (*(char *)(param_1 + 0x34) == -1) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))();
    if (iVar2 == 0) {
      fn_001faa2c(param_1);
      fn_001fa340(param_1);
    }
  }
  else if ((DAT_00897808[5] == DAT_00897808[3]) && (DAT_0089780c[5] == DAT_0089780c[3])) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      pcVar5 = *(code **)(iVar2 + 4);
    }
    if (iVar2 != 0 && pcVar5 != (code *)0x0) {
      iVar6 = *(int *)(pcVar5 + 0xc);
      iVar4 = 0;
      if (iVar6 == iVar2) {
        *(undefined4 *)(pcVar5 + 0xc) = *(undefined4 *)(iVar2 + 8);
      }
      else {
        iVar4 = iVar6;
        for (iVar6 = *(int *)(iVar6 + 8); iVar6 != iVar2; iVar6 = *(int *)(iVar6 + 8)) {
          iVar4 = iVar6;
        }
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 8);
      }
      if (*(int *)(pcVar5 + 0x10) == iVar2) {
        *(int *)(pcVar5 + 0x10) = iVar4;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 4) = 0;
      fn_00143174(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20));
    }
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  return -1;
}



void fn_00145b08(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  code *in_r12;
  bool bVar7;
  
  if (DAT_008bf798 == (int *)0x0) {
    return;
  }
  piVar6 = (int *)DAT_008bf798[1];
  piVar2 = DAT_008bf798;
joined_r0x00145b2c:
  do {
    piVar1 = piVar6;
    DAT_008bf798 = piVar2;
    if (piVar1 == (int *)0x0) {
      iVar3 = *piVar2;
      while (iVar3 != 0) {
        bVar7 = iVar3 != 0;
        if (bVar7) {
          in_r12 = DAT_0089a524;
        }
        iVar3 = *(int *)(iVar3 + 0x24);
        if (bVar7 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
      }
      DAT_008bf798 = (int *)0x0;
      return;
    }
    piVar6 = (int *)piVar1[0x11];
  } while (piVar1 == (int *)0x0);
  for (iVar3 = *piVar2; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(iVar3 + iVar4 * 0x10);
      if ((int *)puVar5[3] == piVar1) {
        if (piVar2[2] == iVar3) {
          *DAT_008bfab0 = *DAT_008bfab0 | 1;
        }
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  if (*piVar1 != 0) goto code_r0x00145bb8;
  goto LAB_00145bd4;
code_r0x00145bb8:
  in_r12 = DAT_0089a524;
  piVar2 = DAT_008bf798;
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(piVar1[0xf],0x103,piVar1[0x10]);
LAB_00145bd4:
    in_r12 = DAT_0089a524;
    piVar2 = DAT_008bf798;
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,piVar1);
      piVar2 = DAT_008bf798;
    }
  }
  goto joined_r0x00145b2c;
}



undefined4 fn_0012e190(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined1 local_14 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if ((iVar1 < 0) || (iVar1 = fn_00157f00(param_1,0xffffffff,local_14), iVar1 < 0)) {
    fn_001581d0(param_1,&DAT_00148920);
  }
  (**(code **)(*DAT_00898898 + 0x58))(DAT_00898898,local_18);
  return 0;
}


