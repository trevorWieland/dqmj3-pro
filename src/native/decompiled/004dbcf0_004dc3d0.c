#include "004dbcf0_004dc3d0.h"



undefined8 fn_004dc3d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (DAT_008bf500 == '\0') {
    puVar1 = &DAT_e0a1482b;
    iVar2 = param_2;
LAB_004dc470:
    return CONCAT44(iVar2,puVar1);
  }
  iVar2 = 0x3ff00000;
  if (0x3fefffff < param_2 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      iVar2 = 8;
    }
    puVar1 = (undefined1 *)0xe0e14826;
    goto LAB_004dc470;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar3 = 1;
  }
  else {
    iStack_34 = param_1;
    iStack_30 = param_2;
    uStack_2c = param_3;
    local_28 = param_4;
    uVar4 = fn_006d897c(*(undefined4 *)(param_1 + 0x28));
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 0) {
      if (DAT_008bf500 == '\0') goto LAB_004dc5f0;
      uVar4 = fn_006d685c(*(undefined4 *)(param_1 + 0x14));
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) {
        if (DAT_008bf500 == '\0') {
LAB_004dc5f0:
          uVar4 = fn_006d88c8(*(undefined4 *)(param_1 + 0x28));
          uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((int)uVar4 != 0) {
            (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28),1);
            uVar3 = extraout_r1;
          }
          uVar4 = CONCAT44(uVar3,&DAT_e0a14827);
          *(undefined4 *)(param_1 + 0x10) = 0;
          if (*(char *)(param_1 + 4) == '\0') {
            local_48 = (undefined1)local_28;
            local_40 = *(undefined4 *)(param_1 + 0x48);
            local_4c = param_1 + 0x10;
            local_3c = *(undefined4 *)(param_1 + 0x4c);
            local_50 = *(undefined4 *)(param_1 + 0xc);
            local_44 = param_3;
            uVar4 = fn_004e2cd8(*(undefined4 *)(param_1 + 0x28),param_2,&local_50);
          }
          uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (-1 < (int)uVar4) {
            fn_004efcf4(*(undefined4 *)(param_1 + 0x28),0);
            uVar3 = extraout_r1_00;
          }
          return CONCAT44(uVar3,(int)uVar4);
        }
        uVar4 = fn_006d6880(*(undefined4 *)(param_1 + 0x14));
        uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 == 0) goto LAB_004dc5f0;
      }
      if (DAT_008c0630 != 0) {
        uVar3 = 8;
      }
      goto LAB_004dc5e4;
    }
  }
  if (DAT_008c0630 != 0) {
    uVar3 = 8;
  }
LAB_004dc5e4:
  return CONCAT44(uVar3,&DAT_e0a14827);
}



undefined1 * fn_004dc37c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((DAT_008bf500 == '\0') || (iVar1 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0))
  {
    return &DAT_e0a14827;
  }
                    /* WARNING: Could not recover jumptable at 0x004dc3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined1 *)
           (**(code **)(**(int **)(param_1 + 0x14) + 0x74))(*(int **)(param_1 + 0x14),param_2);
  return puVar2;
}



void fn_004dc250(int param_1)

{
  undefined4 *puVar1;
  
  fn_004dc130();
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



undefined1 * fn_004dbf90(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008bf500 == '\0') {
    iVar2 = (**(code **)*param_2)(param_2);
    *(char *)(param_1 + 4) = (char)iVar2;
    if (iVar2 == 0) {
      puVar1 = (undefined1 *)fn_004dd27c(param_1,param_2);
      if (-1 < (int)puVar1) {
        fn_004dbeb4(param_1);
        DAT_008bf500 = 1;
        DAT_008eda30 = *(undefined1 *)((int)param_2 + 6);
        DAT_008eda31 = *(undefined1 *)(param_1 + 4);
        if (*(char *)((int)param_2 + 5) != '\0') {
          DAT_008eda32 = DAT_008eda32 & 0xfe;
        }
        if (*(char *)(param_2 + 1) != '\0') {
          DAT_008eda32 = DAT_008eda32 & 0xfd;
        }
        return (undefined1 *)0x0;
      }
    }
    else {
      puVar1 = (undefined1 *)0xe0e14826;
    }
  }
  else {
    puVar1 = &DAT_e0a14821;
  }
  return puVar1;
}



void fn_004dbeb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x48,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004e33c4();
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x68,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004e5fac();
  }
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x48,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004e2d88();
  }
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x48,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004e5460();
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x48,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004e7f20();
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0x48,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_004e9ebc();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(0x348,uVar1);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = fn_004e76b4();
    }
    *(undefined4 *)(param_1 + 0x38) = uVar1;
  }
  return;
}



undefined8 fn_004dbe24(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = &DAT_008563c4;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined2 *)((int)param_1 + 0xe) = 0xc;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = param_3;
  if (((param_2 & 3) != 0) && (DAT_008c0630 != 0)) {
    param_2 = 4;
  }
  return CONCAT44(param_2,param_1);
}



void fn_004dbdac(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  fn_004dbddc(param_2,param_3 + 4,4);
  fn_001694e4((uint)*(ushort *)((int)param_2 + 0xe) + (uint)*(ushort *)(param_2 + 4) + param_2[1],
               *param_3,0x2f0,param_2[1],unaff_r4,unaff_r5,unaff_r6,in_lr);
  *(short *)(param_2 + 4) = (short)param_2[4] + 0x2f0;
                    /* WARNING: Could not recover jumptable at 0x004dbe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}



void fn_004dbddc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_001694e4((uint)*(ushort *)((int)param_1 + 0xe) + (uint)*(ushort *)(param_1 + 4) + param_1[1],
               param_2,param_3);
  *(short *)(param_1 + 4) = (short)param_1[4] + (short)param_3;
                    /* WARNING: Could not recover jumptable at 0x004dbe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



void fn_004dbd70(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(short *)(param_1 + 4) = (short)param_3 + (short)param_4;
  fn_001694e4(param_1[1] + (uint)*(ushort *)((int)param_1 + 0xe) + param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x004dbda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



void fn_004dbd30(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 4);
  *puVar2 = 1;
  puVar2[1] = *(undefined1 *)(param_1 + 0xc);
  *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_1 + 0x10);
  fn_006f94d0(puVar2 + 4);
  uVar1 = fn_00658e84(*(undefined4 *)(param_1 + 4),10);
  *(undefined2 *)(puVar2 + 10) = uVar1;
  return;
}



bool fn_004dbcf0(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00658e84(iVar2,10);
  bVar3 = *(ushort *)(iVar2 + 10) == uVar1;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar2 + 1);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(iVar2 + 2);
  }
  return bVar3;
}


