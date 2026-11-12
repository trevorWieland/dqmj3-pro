#include "002e3d2c_002e4288.h"



void fn_002e4288(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = fn_00300f74(param_2,param_1[8]);
  piVar1 = (int *)(**(code **)(*param_1 + 0x28))(param_1);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,(int)((ulonglong)uVar3 >> 0x20),(int)uVar3);
  }
  *(undefined1 *)(iVar2 + 0x2f) = param_3;
  return;
}



void fn_002e4118(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_34;
  int local_30 [4];
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x28))(*(int **)(param_1 + 0x10),&local_34,local_30);
  fn_00660298(*(undefined4 *)(param_1 + 0x10));
  fn_001c9cac(*(undefined4 *)(param_1 + 0x10));
  iVar8 = 0;
  if (0 < local_30[0]) {
    uVar10 = 0x4230000000000000;
    do {
      iVar7 = 0;
      if (0 < local_34) {
        uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar10 = CONCAT44(uVar2,uVar2);
        do {
          uVar6 = local_34 * iVar8 + iVar7;
          uVar1 = param_2[1] - *param_2 >> 3;
          if (uVar1 <= uVar6) break;
          if (uVar1 <= uVar6) {
            fn_002ff628(9,&DAT_008c7625,&DAT_008c7625,uVar6,uVar1);
          }
          pcVar4 = (char *)(*param_2 + uVar6 * 8);
          iVar5 = *(int *)(pcVar4 + 4);
          iVar9 = (int)*pcVar4;
          if (iVar9 != -1) {
            uVar2 = *(undefined4 *)(param_1 + 0x10);
            if (*(char *)(param_1 + 0x24) == '\0') {
              iVar3 = fn_001c9c0c(uVar2,iVar7,iVar8);
              if (iVar3 != 0) goto LAB_002e4224;
              uVar2 = *(undefined4 *)(param_1 + 0x10);
            }
            else {
              iVar9 = 0;
            }
            fn_001c9c44(uVar2,iVar9,iVar7,iVar8);
          }
LAB_002e4224:
          *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar5 + 0x3c);
          *(int *)(iVar5 + 0x40) = (int)uVar10;
          *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
          fn_001c9d44(*(undefined4 *)(param_1 + 0x10),uVar6,iVar5,0);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_34);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_30[0]);
  }
  return;
}



void fn_002e40d8(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  fn_002454a4(*(undefined4 *)(param_1 + 0x18));
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_002e4080(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x28))();
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002e40b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1,param_2,param_3);
  return;
}



void fn_002e4054(int *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00300f74(param_2,param_1[8]);
                    /* WARNING: Could not recover jumptable at 0x002e407c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar1);
  return;
}



void fn_002e4004(undefined4 param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (0 < param_4) {
    do {
      uVar3 = fn_00300f74(iVar2,param_5);
      uVar1 = (**(code **)(*param_2 + 0x30))(param_2,(int)((ulonglong)uVar3 >> 0x20),(int)uVar3);
      *(undefined4 *)(param_3 + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  return;
}



void fn_002e3fac(int param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = fn_00300f74(param_2,*(undefined4 *)(param_1 + 0x20));
  if (lVar1 < 0 && (int)lVar1 < 0) {
    fn_00660114(*(int **)(param_1 + 0x10),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002e3ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))();
  return;
}



void fn_002e3f94(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x25) == '\x01') {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xe4) = param_2;
    return;
  }
  return;
}



void fn_002e3f3c(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00300f74(param_2,*(undefined4 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x002e3f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
            (*(int **)(param_1 + 0x10),(int)((ulonglong)uVar1 >> 0x20),(int)uVar1,0);
  return;
}



void fn_002e3ef4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = fn_00300f74(param_3,iVar1);
  *(undefined4 *)
   (*(int *)(param_1 + 4) +
   (iVar1 * (int)uVar2 + *(int *)(param_1 + 0x1c) * param_2 + (int)((ulonglong)uVar2 >> 0x20)) * 4)
       = param_4;
  return;
}



undefined4 fn_002e3e9c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 * *(int *)(param_1 + 0x1c) + param_3;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar2,uVar1);
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4);
}



void fn_002e3e74(int param_1,int param_2,int param_3)

{
  if (param_2 < 0 && param_3 < 0) {
    fn_00660114(*(int **)(param_1 + 0x10),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002e3e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))();
  return;
}



void fn_002e3e30(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[7]) {
    do {
      (**(code **)(*param_1 + 0x10))(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[7]);
  }
  return;
}



void fn_002e3d70(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  if (0 < param_4) {
    do {
      iVar2 = fn_001a46f4((int)*(short *)(*(int *)(param_3 + iVar6 * 4) + 0x16));
      if (iVar2 == 0) {
        uVar3 = *(uint *)(*(int *)(param_3 + iVar6 * 4) + 0x4c);
        if (iVar7 < 2) {
          uVar4 = 0xffffff00;
        }
        else {
          iVar7 = iVar7 + -1;
          uVar4 = 0xffffffff;
        }
      }
      else {
        iVar2 = *(int *)(param_3 + iVar6 * 4);
        if (param_5 == 0) {
          uVar3 = *(uint *)(iVar2 + 0x4c);
          bVar1 = *(byte *)(*(int *)(param_3 + iVar6 * 4) + 0xd0);
          iVar7 = (int)(char)bVar1;
          uVar4 = bVar1 | 0xffffff00;
        }
        else {
          uVar3 = *(uint *)(iVar2 + 0x4c);
          uVar4 = 0xffffff00;
        }
      }
      puVar5 = (uint *)(*param_2 + iVar6 * 8);
      *puVar5 = uVar4;
      iVar6 = iVar6 + 1;
      puVar5[1] = uVar3;
    } while (iVar6 < param_4);
  }
  return;
}



undefined4 fn_002e3d2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 4) + uVar2 * 4) != 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 1;
}


