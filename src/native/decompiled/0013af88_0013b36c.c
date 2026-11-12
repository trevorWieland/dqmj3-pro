#include "0013af88_0013b36c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0013b36c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = *(uint *)(param_2 + 4);
  *(char *)(param_1 + 2) = (char)uVar7;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  iVar5 = 0;
  piVar2 = (int *)(param_2 + 8);
  for (uVar7 = uVar7 & 0xff; uVar7 != 0; uVar7 = uVar7 - 1) {
    param_1[iVar5 + 3] = *piVar2 + param_2;
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[0x23] = piVar2[2] + (int)piVar2;
  param_1[0x24] = piVar2[3];
  iVar5 = piVar2[5];
  iVar6 = piVar2[4];
  bVar8 = iVar5 != 0;
  puVar4 = (undefined4 *)((int)piVar2 + iVar6);
  if (bVar8) {
    iVar6 = 0;
  }
  param_1[0xa5] = iVar5;
  while (bVar8) {
    iVar5 = iVar5 + -1;
    bVar8 = iVar5 != 0;
    param_1[iVar6 + 0x25] = *puVar4;
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xa6);
  uVar3 = fn_0013be38(param_1);
  param_1[1] = param_4;
  if (-1 < param_4) {
    uVar3 = 3;
  }
  *param_1 = param_3;
  if (-1 < param_4) {
    *(undefined1 *)(param_1 + 0xa6) = uVar3;
  }
  iVar5 = fn_0013b458(param_1,param_1 + 0xa9,param_3,param_4);
  param_1[0xd9] = (iVar5 - (int)param_1) + -0x2a4 >> 2;
  if ((int)param_1[1] < 0) {
    *(undefined1 *)(param_1 + 0xa6) = uVar1;
  }
  return;
}



int fn_0013b334(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8610042;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 *
fn_0013b134(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ******local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = fn_0014d7ec();
  if (iVar1 != 0) {
    fn_00301f50(iVar1,0x130);
    piVar2 = (int *)fn_0014d8d4(iVar1);
    if (piVar2 != (int *)0x0) {
      local_30 = &local_30;
      local_38 = 0;
      local_34 = 1;
      local_2c = 1;
      local_28 = DAT_0089a670;
      local_3c = param_2;
      puVar3 = (undefined1 *)fn_0013b294(&local_28,&local_38,0,3,1,local_30,1,2,param_7,0xc,1,0);
      if (-1 < (int)puVar3) {
        local_40 = (int *)0x0;
        puVar3 = (undefined1 *)(**(code **)(*piVar2 + 0x3c))(piVar2,&local_40,local_38);
        if (-1 < (int)puVar3) {
          puVar3 = (undefined1 *)
                   fn_0014d2ec(piVar2,local_40,local_3c,param_3,param_4,param_5,param_6);
          if ((int)puVar3 < 0) {
            (**(code **)(*local_40 + 0x30))();
          }
          else {
            puVar3 = (undefined1 *)0x0;
          }
        }
      }
      if ((int)puVar3 < 0) {
        (**(code **)(*piVar2 + 0x30))(piVar2);
        return puVar3;
      }
      *param_1 = (int)piVar2;
      return (undefined1 *)0x0;
    }
  }
  return &DAT_d8604659;
}



int fn_0013b294(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8030204;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(int *)(iVar2 + 0x90) = param_7;
  *(undefined4 *)(iVar2 + 0x9c) = param_11;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x94) = param_8;
  *(int *)(iVar2 + 0x98) = param_10;
  *(undefined4 *)(iVar2 + 0xa0) = param_12;
  *(uint *)(iVar2 + 0xa4) = param_7 << 0xe | 0x802;
  *(undefined4 *)(iVar2 + 0xa8) = param_6;
  *(uint *)(iVar2 + 0xac) = param_10 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xb0) = param_9;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0013af88(int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fn_00301f50(param_1 + 0xd,0x2698);
  fn_00301f50(param_1 + 0x9b3,0x297c);
  fn_00301f50(param_1 + 0x1412,0x297c);
  fn_00301f50(param_1 + 0x1e71,0xdd4);
  fn_00301f50(param_1 + 0x21e6,0x938);
  fn_00301f50(param_1 + 0x2434,0x848);
  param_1[0x2646] = 0;
  param_1[0x2647] = 0;
  param_1[0x2648] = 0;
  param_1[0x2649] = 0;
  param_1[0x264a] = 0;
  param_1[0x264b] = 0;
  param_1[0x264c] = 0;
  param_1[0x264d] = 0;
  param_1[0x264e] = 0;
  param_1[0x264f] = 0;
  fn_00301f50(param_1 + 0x2650,0x54);
  fn_00301f50(param_1 + 0x2665,0x3e);
  fn_00158f6c((int)param_1 + 0x99d2,0x58);
  fn_00158f6c((int)param_1 + 0x9a2a,0xffc);
  fn_00301f50(param_1 + 0x2a8a,0x28a8);
  fn_00301f50(param_1 + 0x34b4,0x33330);
  fn_00301f50(param_1 + 0x10180,0xc00);
  fn_00301f50(param_1 + 0x10480,0xc4);
  fn_00301f50(param_1 + 0x104b1,0x540);
  fn_00301f50(param_1 + 0x10602,0x19b98);
  param_1[0x16ce8] = 0;
  if (*param_1 != 0) {
    fn_00143a58();
    *param_1 = 0;
  }
  return;
}


