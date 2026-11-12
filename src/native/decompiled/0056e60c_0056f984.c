#include "0056e60c_0056f984.h"



void fn_0056f984(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x128,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056fa30(iVar1,param_1);
  return;
}



void fn_0056f7d8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 % 2 == 0) {
    iVar6 = 0;
    do {
      fn_002426b4(*(undefined4 *)(DAT_00897804 + 0x1c),(&DAT_007c6fb8)[iVar6],
                   *(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar6 * 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    fn_002426b4(*(undefined4 *)(DAT_00897804 + 0x1c),3,*(undefined4 *)(param_1 + 0x11c));
    fn_0024269c(*(undefined4 *)(DAT_00897804 + 0x1c),
                 *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xc));
    uVar4 = 0x100094b;
  }
  else {
    uVar4 = 0x100094c;
  }
  fn_0068ab44(param_1,uVar4);
  piVar1 = (int *)fn_001f74ec(param_1,0x51);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
    do {
      if (puVar2 == &DAT_008944a8) goto LAB_0056f8ac;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0056f8ac:
  if ((char)piVar1[3] == '\0') {
LAB_0056f910:
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
  }
  else {
    if ((char)piVar1[3] == '\x02' && param_2 % 2 == 0) {
      piVar3 = *(int **)(param_1 + 0x8c);
      piVar5 = *(int **)(param_1 + 0x80);
      if ((((*piVar5 != *piVar3) || (piVar5[1] != piVar3[1])) || (piVar5[2] != piVar3[2])) ||
         (piVar5[3] != piVar3[3])) goto LAB_0056f910;
    }
    fn_006899f4(param_1,piVar1[2],0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0056f96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0056e8a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  int iVar6;
  undefined4 unaff_r6;
  
  fn_0068b14c(*(undefined4 *)(param_1 + 0xbc),1);
  fn_0068b14c(*(undefined4 *)(param_1 + 0xc0),1);
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(*(int **)(param_1 + 0xc4),0);
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0xd4) = 1;
  (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))
            (*(int **)(param_1 + 0xec),param_2 % 4,
             (int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2,0);
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x48) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x48) = 1;
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0x48) = 1;
  }
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(byte *)(*(int *)(param_1 + 0x78) + 0x44) = *(byte *)(*(int *)(param_1 + 0x78) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x7c) + 0x44) & 0xfe;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
  iVar6 = 0;
  do {
    iVar5 = 1;
    do {
      iVar3 = iVar5 + iVar6 * 4;
      iVar3 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar3 % 4,
                           (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2,unaff_r4,unaff_r5,
                           unaff_r6);
      iVar1 = 0;
      if (iVar5 == 0) {
        piVar2 = *(int **)(param_1 + 0xac);
        pcVar4 = *(code **)(*piVar2 + 0x30);
        iVar1 = 0;
LAB_0056ea0c:
        iVar1 = (*pcVar4)(piVar2,iVar1,iVar6);
      }
      else if ((iVar5 == 1 || iVar5 == 2) || iVar5 == 3) {
        piVar2 = *(int **)(param_1 + 0xb0);
        pcVar4 = *(code **)(*piVar2 + 0x30);
        iVar1 = iVar5 + -1;
        goto LAB_0056ea0c;
      }
      if ((iVar3 == 0) || (*(int *)(param_1 + 0x11c) != iVar3)) {
        if (iVar1 != 0) {
          *(undefined1 *)(iVar1 + 0x25) = 0;
        }
      }
      else if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x25) = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      return;
    }
  } while( true );
}



void fn_0056e838(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  if (param_2 < 0) {
    param_2 = 3;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))(*(int **)(param_1 + 0xec),param_2,param_3,0);
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x2c))
            (*(int **)(param_1 + 0xf0),0xffffffff,0xffffffff,0);
  fn_0056e984(param_1);
  *(undefined1 *)(param_1 + 0xde) = 0;
  return;
}



void fn_0056e984(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    iVar5 = 1;
    do {
      iVar3 = iVar5 + iVar6 * 4;
      iVar3 = fn_0056d53c(param_1,*(undefined4 *)(param_1 + 0xa8),iVar3 % 4,
                           (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2);
      iVar1 = 0;
      if (iVar5 == 0) {
        piVar2 = *(int **)(param_1 + 0xac);
        pcVar4 = *(code **)(*piVar2 + 0x30);
        iVar1 = 0;
LAB_0056ea0c:
        iVar1 = (*pcVar4)(piVar2,iVar1,iVar6);
      }
      else if ((iVar5 == 1 || iVar5 == 2) || iVar5 == 3) {
        piVar2 = *(int **)(param_1 + 0xb0);
        pcVar4 = *(code **)(*piVar2 + 0x30);
        iVar1 = iVar5 + -1;
        goto LAB_0056ea0c;
      }
      if ((iVar3 == 0) || (*(int *)(param_1 + 0x11c) != iVar3)) {
        if (iVar1 != 0) {
          *(undefined1 *)(iVar1 + 0x25) = 0;
        }
      }
      else if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x25) = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar6 = iVar6 + 1;
    if (3 < iVar6) {
      return;
    }
  } while( true );
}



void fn_0056e744(int param_1)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x6c))();
  if (-1 < iVar1) {
    iVar1 = fn_006a833c(*(undefined4 *)(param_1 + 0xec),iVar1);
    iVar1 = fn_0056b8b0(param_1,iVar1 % 4,(int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2);
    *(undefined1 *)(iVar1 + 0x2f) = 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 100))();
  if (-1 < iVar1) {
    fn_001c9db4(*(undefined4 *)(param_1 + 0xec),iVar1);
    fn_00688ff8();
    local_18 = in_s0 + DAT_008cb468;
    local_14 = in_s1 + DAT_008cb46c;
    local_10 = in_s2 + DAT_008cb470;
    iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + 0x48);
    *(float *)(iVar1 + 0x1c) = local_18;
    *(float *)(iVar1 + 0x20) = local_14;
    *(float *)(iVar1 + 0x24) = local_10;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xd0),&local_18);
  }
  return;
}



void fn_0056e6ac(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0056db6c();
  iVar1 = fn_00300f74(iVar1 + 0xb,0xc);
  *(int *)(param_1 + 0xa4) = iVar1 + 1;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(int *)(*(int *)(param_1 + 0xb0) + 0x1c) = iVar1 + 1;
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x24) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x34) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x3c) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(*(int *)(param_1 + 0xd4) + 200) = *(undefined4 *)(param_1 + 0xa4);
  fn_00290100(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa8));
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0056e740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 200) + 0x28))(*(int **)(param_1 + 200),param_2);
  return;
}



void fn_0056e60c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0xec) + 0x30))
            (*(int **)(param_1 + 0xec),param_1 + 0xf8,param_1 + 0xfc);
  (**(code **)(**(int **)(param_1 + 0xec) + 0x2c))
            (*(int **)(param_1 + 0xec),0xffffffff,0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x2c))(*(int **)(param_1 + 0xf4),0,param_2);
  fn_0025e314(*(undefined4 *)(param_1 + 200),0);
  fn_0056d5f4(param_1,0xffffffff);
  if (*(char *)(param_1 + 0x125) != '\0') {
    iVar1 = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(iVar1 + 0x7f) = 0;
    fn_0031ef00(iVar1,1);
  }
  *(undefined1 *)(param_1 + 0xde) = 2;
  return;
}


