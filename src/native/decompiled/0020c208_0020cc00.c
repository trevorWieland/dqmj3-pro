#include "0020c208_0020cc00.h"



undefined1 fn_0020cc00(short *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  do {
    uVar6 = (uint)(short)(&DAT_007c433c)[iVar5 * 4];
    if ((int)uVar6 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar6 & 1;
      iVar3 = 0;
      if (uVar2 != 0) {
        do {
          if ((short *)(int)*(short *)((&DAT_007c4338)[iVar5 * 2] + iVar3 * 2) == param_1)
          goto LAB_0020cc74;
          iVar3 = (int)(short)((short)iVar3 + 1);
        } while (iVar3 < (int)uVar2);
      }
    }
    for (; (int)uVar2 < (int)uVar6; uVar2 = (uint)(short)((short)uVar2 + 2)) {
      psVar4 = (short *)((&DAT_007c4338)[iVar5 * 2] + uVar2 * 2);
      sVar1 = *psVar4;
      if ((short *)(int)sVar1 != param_1) {
        psVar4 = (short *)(int)psVar4[1];
      }
      if ((short *)(int)sVar1 == param_1 || psVar4 == param_1) {
LAB_0020cc74:
        return (&DAT_007c433e)[iVar5 * 8];
      }
    }
    iVar5 = iVar5 + 1;
    if (0xd < iVar5) {
      return 0;
    }
  } while( true );
}



int fn_0020cb7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  fn_0020bbc4(auStack_10,param_1);
  uVar1 = fn_006bfe90(auStack_c);
  iVar2 = 0;
  switch(uVar1) {
  case 0:
  case 1:
    iVar2 = 3;
    break;
  case 2:
    iVar2 = 4;
    break;
  case 3:
    iVar2 = 5;
    break;
  case 4:
    iVar2 = 6;
  }
  return iVar2 - ((int)((uint)*(ushort *)(param_1 + 0x40) << 0x15) >> 0x1f);
}



int fn_0020cb0c(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  fn_0020bbc4(auStack_18,param_1);
  uVar1 = fn_006bfe90(auStack_14);
  uVar2 = fn_006bf1d4(auStack_14);
  iVar3 = fn_0066158c(uVar1);
  if (uVar2 < 100) {
    if (uVar2 < 0x32) {
      iVar3 = iVar3 + 1 + (uint)(0x18 < uVar2);
    }
    else {
      iVar3 = iVar3 + 3;
    }
  }
  else {
    iVar3 = iVar3 + 4;
  }
  return iVar3;
}



int * fn_0020c4d4(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *param_1 = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  *(int *)(param_1[1] + 4) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0020c888);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0020c888);
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0020c888);
  }
  piVar4 = (int *)param_1[4];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0020c888);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[6];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[7];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00316048(iVar1,0);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = *param_1;
  *(int *)(param_1[8] + 0x14) = param_1[1];
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00316094(iVar1,param_1[8]);
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar2;
  }
  iVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_1[1] + 0x3c);
  uVar3 = fn_00129004();
  fn_002419f4(uVar3,iVar1,uVar5);
  iVar1 = param_1[2];
  iVar6 = param_1[3];
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,iVar1,iVar6);
  iVar1 = param_1[4];
  iVar6 = param_1[5];
  uVar3 = fn_00129004();
  fn_00241948(uVar3,iVar1,iVar6);
  fn_002cd71c();
  fn_00121838(DAT_00897800,DAT_00898798,1);
  return param_1;
}



void fn_0020c3e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))();
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,0x14);
  local_10 = 0;
  fn_00163988(DAT_0089780c,&local_10,0x14);
  return;
}



void fn_0020c2e0(int param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  puVar5 = (undefined2 *)(DAT_008924a8 + param_1 * 10);
  if (0 < (int)(param_3 - 1)) {
    puVar3 = puVar5;
    puVar4 = param_2 + -1;
    if ((param_3 & 1) == 0) {
      puVar3 = puVar5 + 1;
      *param_2 = puVar5[1];
      puVar4 = param_2;
    }
    uVar2 = puVar3[1];
    for (iVar6 = (int)(param_3 - 1) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar1 = puVar3[2];
      puVar4[1] = uVar2;
      uVar2 = puVar3[3];
      puVar4 = puVar4 + 2;
      *puVar4 = uVar1;
      puVar3 = puVar3 + 2;
    }
  }
  if (-1 < (int)(param_3 - 1)) {
    param_2[param_3 - 1] = puVar5[param_3];
  }
  return;
}



int fn_0020c2c4(int param_1)

{
  return (int)*(short *)(DAT_008924a8 + param_1 * 10);
}



void fn_0020c2ac(void)

{
  DAT_008924a8 = 0;
  DAT_008924ac = 0;
  return;
}



int fn_0020c298(void)

{
  return (int)(short)DAT_008924ac;
}



undefined4 fn_0020c208(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0020c28c,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 10;
  iVar2 = 0;
  DAT_008924ac = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008924ac = 0;
  }
  DAT_008924a8 = param_1;
  return 1;
}


