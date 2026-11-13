#include "0012d640_0012ead8a.h"

static void svc_0x35(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x35 }
#endif
}

static void svc_0x9(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x9 }
#endif
}

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


undefined4 fn_0012dc28(undefined4 param_1)

{
  fn_00158004(param_1,0);
  return 1;
}



undefined4 fn_0012da44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  (**(code **)(*DAT_00898898 + 0x2c))(DAT_00898898,local_10);
  return 0;
}



int fn_0012d750(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  int iVar6;
  int iVar7;
  undefined8 in_d8;
  
  piVar1 = (int *)fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
  piVar4 = *(int **)(param_1 + 0x20);
  do {
    if (piVar4 == (int *)(param_1 + 0x20)) {
      iVar6 = 0;
LAB_0012d7a0:
      iVar2 = fn_00148c80(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(iVar6 + 4),iVar6,param_4,
                           in_d8,unaff_r4,unaff_r5,unaff_r6);
      if (iVar2 == 0) {
        fn_00148ca4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(iVar6 + 4));
      }
      uVar3 = fn_00148d1c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(iVar6 + 4));
      iVar2 = fn_001615f0(piVar1[3],param_4,uVar3);
      iVar5 = 0;
      piVar4 = *(int **)(param_1 + 0x2c);
      while (piVar4 != (int *)(param_1 + 0x2c)) {
        if (piVar4[-5] == iVar5) {
          iVar5 = iVar5 + 1;
          piVar4 = *(int **)(param_1 + 0x2c);
        }
        else {
          piVar4 = (int *)*piVar4;
        }
      }
      piVar4 = (int *)fn_00145b00(0x1c,&DAT_00812c8c);
      if (piVar4 != (int *)0x0) {
        uVar3 = *(undefined4 *)(iVar6 + 4);
        iVar6 = *piVar1;
        iVar7 = piVar1[3];
        piVar4[2] = (int)&DAT_008f9cf4;
        piVar4[5] = 0;
        piVar4[6] = 0;
        *piVar4 = iVar5;
        piVar4[1] = iVar6;
        fn_00147974(piVar4 + 2,uVar3);
        piVar4[3] = iVar2;
        piVar4[4] = iVar7;
      }
      fn_0017d948(param_1 + 0x28,param_1 + 0x2c,piVar4 + 5);
      return iVar5;
    }
    if (piVar4[-3] == param_3) {
      iVar6 = (int)(piVar4 + -3);
      goto LAB_0012d7a0;
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}



undefined4 fn_0012d6a4(undefined4 param_1)

{
  svc_0xa();
  return param_1;
}



void fn_0012d68c(undefined4 *param_1,undefined4 param_2)

{
  svc_0x35();
  *param_1 = param_2;
  return;
}



undefined4 fn_0012d640(undefined4 *param_1)

{
  undefined4 uVar1;
  
  fn_00113e88();
  fn_00113f40();
  fn_0011c09c();
  (*(code *)param_1[1])(param_1[2],param_1[3]);
  (*(code *)*param_1)(param_1[3]);
  fn_00123768();
  uVar1 = 0;
  if (param_1[4] != 0) {
    uVar1 = fn_0011c0a8();
  }
  svc_0x9();
  return uVar1;
}


