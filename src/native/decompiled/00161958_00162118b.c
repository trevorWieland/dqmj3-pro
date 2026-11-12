#include "00161958_00162118b.h"



uint fn_00161d44(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_b0;
  int local_ac;
  undefined1 local_a8;
  undefined1 auStack_a0 [104];
  undefined1 auStack_38 [20];
  
  uVar1 = fn_00156794(param_1[1]);
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  if (uVar2 == 0) {
    local_b0 = 0xffffffff;
    local_a8 = 0;
    iVar3 = fn_00156328(param_1[1],param_2,&local_b0);
    iVar6 = local_ac;
    uVar2 = 0;
    if ((iVar3 != 0) && (uVar2 = 0, local_ac != 0)) {
      local_b0 = 0;
      local_ac = param_4;
      iVar3 = fn_00161ecc(param_1,uVar1,auStack_a0,0x2c);
      if (iVar3 == 0x2c) {
        uVar2 = fn_00176ac0(auStack_a0);
        uVar4 = fn_00176af0(auStack_a0);
        if (uVar4 <= uVar2) {
          iVar3 = uVar2 + iVar6 * 4 + 4;
          uVar4 = (**(code **)(*param_3 + 8))(param_3,iVar3);
          uVar5 = fn_0015e284();
          iVar6 = fn_0015e218();
          bVar9 = uVar4 <= uVar5;
          bVar8 = uVar5 == uVar4;
          if (!bVar9 || bVar8) {
            uVar7 = uVar4 + iVar3;
            bVar9 = iVar6 + uVar5 <= uVar7;
            bVar8 = uVar7 == iVar6 + uVar5;
          }
          if (!bVar9 || bVar8) {
            local_b0 = 0;
            local_ac = param_4;
            uVar5 = fn_00161ecc(param_1,uVar1,uVar4,uVar2);
            if (uVar5 == uVar2) {
              *(undefined4 *)(uVar4 + uVar2) = 0x54415743;
              fn_00162118(auStack_38,uVar4,1);
              fn_001620c8(auStack_38);
              (**(code **)(*param_1 + 8))(param_1,uVar1,uVar4);
              return uVar4;
            }
          }
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



int * fn_00162118(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (((param_2 != (int *)0x0) && (*param_2 == 0x52415743)) && (param_2[2] == 0x1000000)) {
    *param_1 = (int)param_2;
    iVar1 = fn_0018360c(param_2);
    param_1[1] = iVar1 + 8;
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 0;
    if ((param_3 != 0) &&
       (iVar2 = *param_1, iVar1 = fn_00176ac0(iVar2), *(int *)(iVar2 + iVar1) == 0x54415743)) {
      iVar1 = fn_00176ac0(*param_1);
      param_1[2] = iVar1 + 4 + (int)param_2;
    }
  }
  return param_1;
}



void fn_001620c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0xc) != '\0') && (**(int **)(param_1 + 4) != 0)) {
    do {
      uVar2 = 0;
      *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
      if (*(char *)(param_1 + 0xc) != '\0') {
        uVar2 = **(uint **)(param_1 + 4);
      }
    } while (uVar1 < uVar2);
  }
  return;
}



int fn_00161ecc(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  fn_00170704(*(int *)(param_1 + 4) + 0x110);
  piVar1 = (int *)fn_00161958(*(undefined4 *)(param_1 + 4),param_2,param_1 + 8,0x200,0,0,0,1);
  if (piVar1 == (int *)0x0) {
    fn_001707b4(*(int *)(param_1 + 4) + 0x110);
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x4c))();
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1), iVar2 == 0)) {
      fn_001707b4(*(int *)(param_1 + 4) + 0x110);
    }
    else {
      (**(code **)(*piVar1 + 0x40))(piVar1,param_5,0);
      iVar2 = param_4;
      if (param_6 != 0) {
        for (; 0 < iVar2; iVar2 = iVar2 - iVar3) {
          if (*(char *)(param_1 + 0x20a) != '\0') {
            fn_001707b4(*(int *)(param_1 + 4) + 0x110);
            goto joined_r0x00161fa0;
          }
          if (iVar2 < param_6) {
            iVar3 = iVar2;
          }
          else {
            iVar3 = param_6;
          }
          iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,param_3,iVar3 + 0x1fU & 0xffffffe0);
          if (iVar3 < 0) {
            fn_001707b4(*(int *)(param_1 + 4) + 0x110);
            goto joined_r0x00161fa0;
          }
          if (iVar2 <= iVar3) break;
          param_3 = param_3 + iVar3;
        }
LAB_00162098:
        fn_001707b4(*(int *)(param_1 + 4) + 0x110);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x38))();
        }
        return param_4;
      }
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_3,param_4 + 0x1fU & 0xffffffe0);
      if (-1 < iVar2) goto LAB_00162098;
      fn_001707b4(*(int *)(param_1 + 4) + 0x110);
    }
joined_r0x00161fa0:
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))();
    }
  }
  return -1;
}



int fn_00161d0c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00172d60();
  *puVar1 = &DAT_008580b4;
  puVar1[0x47] = param_2;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined1 *)((int)puVar1 + 0x121) = 0;
  iVar2 = fn_0017348c(puVar1 + 0x4a);
  return iVar2 + -0x128;
}



void fn_00161c88(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  while( true ) {
    iVar1 = fn_00172edc(param_1,2,0);
    if ((iVar1 != 0) || (iVar1 = fn_00172edc(param_1,1,0), iVar1 != 0)) {
      return;
    }
    uVar2 = fn_00172edc(param_1,0);
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0x28);
    }
    if (!bVar3 || uVar2 != 0) break;
    iVar1 = fn_00158690(param_1 + 0x38);
    if (iVar1 == 0) {
      return;
    }
  }
  return;
}


