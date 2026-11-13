#include "005ae400_005b0734a.h"



void fn_005aeb68(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void fn_005aeb38(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005aeb84(iVar1,param_1);
  return;
}



undefined4 fn_005ae804(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  *(uint *)(*(int *)(param_1 + 0x14) + 0x134) = *(uint *)(*(int *)(param_1 + 0x14) + 0x134) | 4;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x15c))(*(int **)(param_1 + 0x14),1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_005ae634(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 2;
  *(uint *)(*(int *)(param_1 + 0x14) + 0x134) =
       *(uint *)(*(int *)(param_1 + 0x14) + 0x134) & 0xfffffffb;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x15c))(*(int **)(param_1 + 0x14),0);
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x005ae69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



void fn_005ae5a4(void)

{
  return;
}



undefined4 fn_005ae400(undefined4 *param_1,float *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 in_d8;
  ulonglong in_d9;
  undefined1 auStack_318 [4];
  short local_314 [2];
  float local_310 [15];
  undefined4 local_2d4 [163];
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float local_34;
  
  bVar1 = false;
  local_48 = *param_2;
  fStack_44 = param_2[1];
  fStack_40 = param_2[2];
  local_3c = local_48 + 0.0;
  local_38 = fStack_44 + -300.0;
  local_34 = fStack_40 + 0.0;
  fn_00101a1c(auStack_318,&DAT_005f4c78,0x48,10);
  piVar2 = (int *)fn_006f7388(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,4,auStack_318,10,&local_48,&local_3c,0);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      uVar4 = fn_006f7388(DAT_008977e0);
      iVar5 = fn_006b4240(uVar4,local_2d4[iVar6 * 0x12]);
      if (((iVar5 != 0) && (iVar5 = fn_006bab38(iVar5,(int)local_314[iVar6 * 0x24]), iVar5 == 0xc))
         && ((!bVar1 || ((float)in_d9 < local_310[iVar6 * 0x12 + 1])))) {
        in_d9 = (ulonglong)(uint)local_310[iVar6 * 0x12 + 1];
        in_d8 = CONCAT44(local_310[iVar6 * 0x12 + 2],local_310[iVar6 * 0x12]);
        bVar1 = true;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
    if (bVar1) {
      *param_1 = (int)in_d8;
      param_1[1] = (int)in_d9;
      param_1[2] = (int)((ulonglong)in_d8 >> 0x20);
      return 1;
    }
  }
  return 0;
}


