#include "004ed7b8_004edd1c.h"



void fn_004edd1c(int *param_1,uint param_2)

{
  int iVar1;
  
  do {
    iVar1 = fn_006d8868(param_1);
    if (iVar1 != 0) {
LAB_004edda8:
      (**(code **)(*param_1 + 0x10))(param_1);
      *(undefined1 *)(param_1 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x004eddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1,0);
      return;
    }
    iVar1 = fn_006d87fc(param_1);
    if (iVar1 == 0) {
      iVar1 = fn_006d88c8(param_1);
      if (iVar1 != 2) {
        return;
      }
      goto LAB_004edda8;
    }
    fn_0011c134((int)((ulonglong)DAT_008c3640 * (ulonglong)param_2),
                 param_2 * DAT_008c3644 +
                 (int)((ulonglong)DAT_008c3640 * (ulonglong)param_2 >> 0x20),1000,0);
    fn_006577a8();
  } while( true );
}



void fn_004edd08(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x370) = 1;
  piVar1 = (int *)(param_1 + 0x340);
  do {
    iVar2 = fn_006d8868(piVar1);
    if (iVar2 != 0) {
LAB_004edda8:
      (**(code **)(*piVar1 + 0x10))(piVar1);
      *(undefined1 *)(param_1 + 0x370) = 0;
                    /* WARNING: Could not recover jumptable at 0x004eddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 8))(piVar1,0);
      return;
    }
    iVar2 = fn_006d87fc(piVar1);
    if (iVar2 == 0) {
      iVar2 = fn_006d88c8(piVar1);
      if (iVar2 != 2) {
        return;
      }
      goto LAB_004edda8;
    }
    fn_0011c134((int)((ulonglong)DAT_008c3640 * 2),
                 DAT_008c3644 * 2 + (int)((ulonglong)DAT_008c3640 * 2 >> 0x20),1000,0);
    fn_006577a8();
  } while( true );
}



uint fn_004edc90(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  uint unaff_r5;
  
  do {
    if ((char)param_1[0xc] != '\0') {
      (**(code **)(*param_1 + 0x10))(param_1);
      *(undefined1 *)(param_1 + 0xc) = 0;
      return unaff_r5 & 0xff00 | 2;
    }
    piVar3 = (int *)((int)param_1 + (param_1[10] >> 1));
    if ((param_1[10] & 1U) == 0) {
      pcVar2 = (code *)param_1[9];
    }
    else {
      pcVar2 = *(code **)(*piVar3 + param_1[9]);
    }
    uVar1 = (*pcVar2)(piVar3);
  } while ((uVar1 & 0xff) == 0);
  return uVar1;
}



undefined4 * fn_004edc74(undefined4 *param_1)

{
  *param_1 = 0;
  fn_0013c500();
  return param_1;
}



void fn_004edc38(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)(param_1 + 0x1260);
  fn_004edc34(piVar5);
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x1270) = *param_2;
  *(undefined4 *)(param_1 + 0x1274) = uVar3;
  iVar2 = *(int *)(param_1 + 0x1268) + -1;
  *(int *)(param_1 + 0x1268) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1264) = 0;
  do {
    iVar4 = *piVar5;
    iVar2 = -iVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2;
  if (iVar4 != -1 && 0 < iVar2) {
    fn_00147e54(DAT_008c0334,piVar5,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}



void fn_004edc34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 4)) {
    fn_0014ddec(param_1);
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



undefined8 fn_004edbb0(byte *param_1)

{
  return CONCAT44((uint)param_1[3] |
                  (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[2] << 8,
                  (uint)param_1[7] |
                  (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18 | (uint)param_1[6] << 8);
}



uint fn_004edb98(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return (uint)*(byte *)((int)param_1 + 3) |
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8;
}



ushort fn_004edb8c(ushort *param_1)

{
  return *param_1 << 8 | *param_1 >> 8;
}



undefined1 * fn_004ed9ec(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint unaff_r8;
  
  puVar1 = (undefined1 *)0xe0e14826;
  if ((param_2 - 0x100000U < 0x3ff00000) && (param_3 != 0)) {
    if (param_4 < 10) {
      unaff_r8 = param_5 - 8;
    }
    if ((param_4 < 10 && unaff_r8 < 8) && (param_6 - 1U < 9)) {
      if (*(int *)(param_1 + 4) - 0x100000U < 0x3ff00000) {
        *(undefined1 **)(param_1 + 0x38) = &LAB_004edb0c;
        *(undefined1 **)(param_1 + 0x3c) = &LAB_004ed93c;
        *(int *)(param_1 + 0x40) = param_1;
        iVar2 = fn_0072b97c(param_1 + 0x18,param_4,8,param_5,param_6,0,
                             "1.2.7.f-NINTENDO-CTR-SDK-v1",0x38);
        if (iVar2 == 0) {
          iVar2 = fn_00731bec(param_1 + 0x18,0x80);
          *(int *)(param_1 + 0x14) = iVar2 + -0x80;
          *(int *)(param_1 + 0x24) = param_2;
          *(int *)(param_1 + 0x28) = param_3;
          return (undefined1 *)0x0;
        }
        if (iVar2 == -4) {
          puVar1 = (undefined1 *)0xe0614820;
        }
        else {
          puVar1 = (undefined1 *)0xe161482a;
        }
      }
      else {
        puVar1 = &DAT_e0a14827;
      }
    }
  }
  return puVar1;
}



undefined4 fn_004ed96c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = 0xe0e14826;
  if ((param_2 - 0x100000U < 0x3ff00000) && (param_3 != 0)) {
    if (*(uint *)(param_1 + 0x28) < (uint)(*(int *)(param_1 + 0x14) + param_3 + 6)) {
      uVar1 = 0xe0e14823;
    }
    else {
      *(int *)(param_1 + 0x18) = param_2;
      *(int *)(param_1 + 0x1c) = param_3;
      iVar2 = fn_00730a90(param_1 + 0x18,2);
      bVar3 = iVar2 == 0;
      if (bVar3) {
        iVar2 = *(int *)(param_1 + 0x1c);
      }
      uVar1 = 0xe161482a;
      if (bVar3 && iVar2 == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



void fn_004ed950(int param_1)

{
  fn_00731cec(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



undefined1 * fn_004ed8ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_2 + -0x40000 < (undefined4 *)0x3ff00000) {
    puVar1 = &DAT_e0a14827;
    if ((param_1[0xb] != 0) && (param_1[7] == 0)) {
      iVar2 = fn_00730a90(param_1 + 6,4);
      if (iVar2 == 1) {
        *param_2 = param_1[0xb];
        return (undefined1 *)0x0;
      }
      (**(code **)*param_1)(param_1,*(code **)*param_1,1,0);
      puVar1 = (undefined1 *)0xe161482a;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



undefined1 * fn_004ed840(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  
  if (((0x3fefffff < param_2 - 0x100000) || ((param_2 & 3) != 0)) || (param_3 < 0x16c4)) {
    return (undefined1 *)0xe0e14826;
  }
  if (*(int *)(param_1 + 4) - 0x100000U < 0x3ff00000) {
    puVar1 = &DAT_e0a14821;
  }
  else {
    *(uint *)(param_1 + 4) = param_2;
    *(uint *)(param_1 + 8) = param_3;
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



int fn_004ed810(int param_1,int param_2)

{
  if (param_1 != param_2) {
    fn_004ed464(param_1 + 4,param_2 + 4);
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  }
  return param_1;
}



int fn_004ed800(int param_1,undefined1 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_2;
  if (param_1 + 0x68 != param_3) {
    fn_004ed464(param_1 + 0x6c,param_3 + 4);
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_3 + 0xc);
  }
  return param_1 + 0x68;
}



void fn_004ed7b8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &DAT_00856c94;
  iVar1 = fn_004ed440(param_1 + 1,param_2 + 4);
  *(undefined2 *)(iVar1 + 8) = *(undefined2 *)(param_2 + 0xc);
  return;
}


