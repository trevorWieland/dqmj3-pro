#include "0012b458_001bc9a0.h"



void fn_001bc9a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined8 uVar12;
  
  piVar1 = DAT_008bf51c;
  iVar4 = fn_001851bc();
  if (iVar4 == 0) {
    if (*piVar1 == 0x474f4643) {
      piVar8 = piVar1 + 0x3208;
      if ((*piVar8 != 0x41524643) || (iVar4 = fn_001b4c18(0,piVar8,0x1ca0), iVar4 != 0)) {
        fn_00301f50(piVar8,0x1ca0);
        *piVar8 = 0x41524643;
      }
      *(undefined1 *)(piVar1 + 0x392b) = 0;
      iVar4 = fn_00191f08();
      if (((iVar4 == 0) || (iVar4 = fn_00192114(), *(char *)(iVar4 + 0xc0) == '\0')) &&
         (iVar4 = fn_00191f08(), iVar4 != 0)) {
        iVar4 = fn_00192114();
        *(undefined1 *)(iVar4 + 0xc0) = 1;
        iVar4 = fn_00192114();
        *(undefined4 *)(iVar4 + 200) = 10;
      }
      piVar1[0x3951] = (int)piVar1;
      piVar1[0x3952] = 0xc820;
      piVar1[0x3953] = 0;
      *(undefined2 *)(piVar1 + 0x3954) = 0;
      piVar1[0x3956] = (int)fn_001bc898;
      piVar1[0x3957] = (int)param_1;
      do {
        piVar1 = DAT_008bf51c;
        puVar10 = (uint *)(DAT_008bf51c + 0x3952);
        puVar9 = (uint *)(DAT_008bf51c + 0x3953);
        uVar7 = *puVar10 - *puVar9;
        if (0x100000 < uVar7) {
          uVar7 = 0x100000;
        }
        uVar3 = fn_001b4c18((short)DAT_008bf51c[0x3954],*puVar9 + DAT_008bf51c[0x3951],uVar7);
        uVar5 = *puVar9;
        *puVar9 = uVar5 + uVar7;
        *(short *)(piVar1 + 0x3954) = (short)uVar3;
      } while (uVar5 + uVar7 < *puVar10);
                    /* WARNING: Could not recover jumptable at 0x001b4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)piVar1[0x3956])(piVar1[0x3957],(uVar3 & 0xff) << 8 | (uVar3 & 0xffff) >> 8);
      return;
    }
  }
  else if (iVar4 != 0xb) goto LAB_0019d818;
  iVar4 = fn_00192114();
  *(undefined4 *)(iVar4 + 200) = 4;
  fn_001b10b8(1);
LAB_0019d818:
  param_1[10] = piVar1[0x3935];
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x19d818;
  uVar6 = 0;
  while (param_1[9] == 0) {
    param_1[9] = 1;
    iVar4 = fn_00192114(0,uVar6);
    *(undefined4 *)(iVar4 + 0xd0) = *(undefined4 *)(iVar4 + 200);
    *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(iVar4 + 0xcc);
    if (*(code **)(*param_1 + 0x14) == (code *)0x0) {
      uVar12 = 3;
    }
    else {
      uVar12 = (**(code **)(*param_1 + 0x14))();
    }
    uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
    param_1[1] = (int)uVar12;
    if ((int)uVar12 == 10) {
      return;
    }
  }
  if (param_1[9] != 1) {
    return;
  }
  param_1[9] = 2;
  if (param_1[2] == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    iVar4 = fn_00192114();
    param_1[1] = *(int *)(iVar4 + 0xd0);
    param_1[2] = *(int *)(iVar4 + 0xd4);
  }
  iVar4 = param_1[1];
  if (iVar4 == 10) {
    return;
  }
  iVar11 = param_1[2];
  iVar2 = fn_00192114();
  *(undefined1 *)(iVar2 + 0xc0) = 0;
  iVar2 = fn_00192114();
  if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 200) = iVar4;
    iVar4 = fn_00192114();
    *(int *)(iVar4 + 0xcc) = iVar11;
  }
  if ((code *)param_1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[10])(param_1,param_1[2]);
  return;
}



int * fn_00194f08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_b8 [136];
  undefined1 auStack_30 [4];
  int local_2c;
  
  fn_0017d96c(auStack_b8,0x88,0x87,(char *)&DAT_007d8878,*(undefined4 *)(param_1 + 0x20),param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
                    (*(int **)(param_1 + 0x24),0x616e696d,auStack_b8,0);
  fn_0017dcb0(auStack_30,uVar1);
  if (local_2c == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)(*DAT_0089a918 + 8))(DAT_0089a918,0x34,4);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0019530c();
      *piVar3 = (int)&DAT_008579c8;
      piVar3[0xc] = 0;
      fn_0017d948(param_1 + 4,param_1 + 8,piVar3 + 1);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x20))(piVar3,local_2c,*(undefined4 *)(param_1 + 0x24));
    }
  }
  fn_00194c04(piVar3,auStack_30,*(undefined4 *)(param_1 + 0x14),param_3,param_4);
  return piVar3;
}



void fn_00192124(undefined4 param_1,undefined4 param_2)

{
  fn_001709d8(*DAT_008bf604,param_1,param_2,0,0,0);
  return;
}



undefined4 fn_0012ddd8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  iVar1 = fn_00157f00(param_1,0xfffffffe,local_10);
  if ((iVar1 < 0) || (iVar1 = fn_00157f58(param_1,0xffffffff,&local_c), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  (**(code **)(*DAT_00898898 + 0x28))(DAT_00898898,local_c);
  return 0;
}



void fn_0012d6e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_00118290();
  iVar2 = fn_0011c184(param_1,uVar1,4,5);
  if (iVar2 != 0) {
    fn_00145ac0();
  }
  uVar1 = fn_0012a26c(iVar2);
  uVar3 = fn_00145ac0(iVar2);
  fn_00128ee0(param_2,uVar3,uVar1);
  fn_00142b64(DAT_00898154,iVar2);
  return;
}



void fn_0012b6ec(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  code *in_r12;
  
  iVar4 = 0;
  if (0 < param_1) {
    do {
      uVar3 = *(uint *)(param_2 + iVar4 * 4);
      if (uVar3 != 0) {
        puVar1 = (uint *)0x0;
        for (puVar2 = (uint *)(&DAT_008e3084)[uVar3 & 0x1f]; puVar2 != (uint *)0x0;
            puVar2 = (uint *)puVar2[0x10]) {
          if (uVar3 <= *puVar2) {
            if ((puVar2 != (uint *)0x0) && (*puVar2 == uVar3)) {
              if (DAT_008e3108 == puVar2) {
                DAT_008e3108 = (uint *)0x0;
                DAT_008e307a = 0;
              }
              if (DAT_008e3104 == puVar2) {
                DAT_008bf794 = 0;
                DAT_008bf790 = 0;
                DAT_008e3104 = (uint *)0x0;
              }
              if (puVar2[1] != 0) {
                in_r12 = DAT_0089a524;
              }
              if (puVar2[1] != 0 && in_r12 != (code *)0x0) {
                (*in_r12)(0x10000,0x105,*puVar2);
              }
              uVar3 = *(uint *)(param_2 + iVar4 * 4);
              if (uVar3 < DAT_0089a528) {
                DAT_0089a528 = uVar3;
              }
              if (puVar1 == (uint *)0x0) {
                (&DAT_008e3084)[uVar3 & 0x1f] =
                     *(undefined4 *)((&DAT_008e3084)[uVar3 & 0x1f] + 0x40);
              }
              else {
                puVar1[0x10] = puVar2[0x10];
              }
              in_r12 = DAT_0089a524;
              if (DAT_0089a524 != (code *)0x0) {
                (*DAT_0089a524)(0x10000,0x100,0,puVar2);
              }
            }
            break;
          }
          puVar1 = puVar2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  return;
}



void fn_0012b458(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar2 = param_1 & 0x1f;
  puVar3 = (uint *)(&DAT_008e310c)[uVar2];
  if (puVar3 != (uint *)0x0) {
    do {
      uVar4 = *puVar3;
      if (uVar4 != param_1) {
        puVar3 = (uint *)puVar3[6];
      }
    } while (uVar4 != param_1 && puVar3 != (uint *)0x0);
  }
  if ((param_1 != 0) && (puVar3 == (uint *)0x0)) {
    if (DAT_0089a520 == (code *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x1c);
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = param_1;
    puVar5 = (uint *)(&DAT_008e310c)[uVar2];
    if (puVar5 == (uint *)0x0) {
      (&DAT_008e310c)[uVar2] = puVar3;
    }
    else if (param_1 < *puVar5) {
      puVar3[6] = (uint)puVar5;
      (&DAT_008e310c)[uVar2] = puVar3;
    }
    else {
      for (puVar1 = (uint *)puVar5[6]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
        if (param_1 < *puVar1) {
          puVar5[6] = (uint)puVar3;
          puVar3[6] = (uint)puVar1;
          if (puVar1 != (uint *)0x0) goto LAB_0012b548;
          break;
        }
        puVar5 = puVar1;
      }
      puVar5[6] = (uint)puVar3;
    }
  }
LAB_0012b548:
  (&DAT_008e3190)[DAT_008e318c] = puVar3;
  return;
}


