#include "004d4b08_004d52a0.h"



undefined1 * fn_004d52a0(int *param_1)

{
  undefined1 *puVar1;
  
  if ((char)param_1[0x10] == '\x01') {
    return &DAT_e0a14827;
  }
  fn_004ed13c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x004d52d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x3c))(param_1,param_1 + 0x10);
  return puVar1;
}



undefined1 * fn_004d51f4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  
  if (0x3fefffff < param_2 - 0x100000U) {
    return (undefined1 *)0xe0e14826;
  }
  iVar1 = fn_0051d9c8(DAT_008bf4d4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0x560;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 - 0x100000U < 0x3ff00000) {
    iVar1 = fn_0051d8bc(DAT_008bf4d4);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -0x560;
    }
    *(int *)(param_1 + 0x2c) = iVar1;
    if ((iVar1 - 0x100000U < 0x3ff00000) &&
       (piVar2 = *(int **)(param_1 + 0x20), piVar2 != (int *)0x0)) {
      puVar3 = (undefined1 *)(**(code **)(*piVar2 + 8))(piVar2,param_2);
      if ((int)puVar3 < 0) {
        return puVar3;
      }
      return (undefined1 *)0x0;
    }
  }
  return &DAT_e0a14827;
}



int fn_004d5190(int param_1)

{
  int iVar1;
  
  iVar1 = fn_004c7b30(*(undefined4 *)(param_1 + 0x20));
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_004d50b8(int param_1)

{
  *(undefined1 *)(param_1 + 0x31) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_004caea8();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_004caea8();
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x24) + 4)) {
    fn_004d44f4();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
  }
  fn_004ed13c(param_1 + 0x40);
  return;
}



undefined1 * fn_004d4f00(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = fn_004c9dc4();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_004c9db4(iVar1);
    if (iVar1 == 0) {
      return &DAT_e0a14827;
    }
    if (DAT_008bf4f4 == (int *)0x0) {
      puVar3 = (undefined4 *)fn_004ecfe0(0x54);
      piVar4 = (int *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &PTR_LAB_00856334;
        iVar1 = fn_004ed164(puVar3 + 0x10);
        piVar4 = (int *)(iVar1 + -0x40);
        *(undefined1 *)(iVar1 + -0x10) = 0;
        *(undefined1 *)(iVar1 + -0xf) = 0;
        *(undefined4 *)(iVar1 + -0x18) = 0;
        *(undefined4 *)(iVar1 + -0x14) = 0;
        *(undefined4 *)(iVar1 + -0x1c) = 0;
        *(undefined4 *)(iVar1 + -0x3c) = 0;
        *(undefined4 *)(iVar1 + -0x38) = 0;
        *(undefined4 *)(iVar1 + -0x34) = 0;
        *(undefined4 *)(iVar1 + -0x30) = 0;
        *(undefined4 *)(iVar1 + -0x2c) = 0;
        *(undefined4 *)(iVar1 + -0x28) = 0;
        *(undefined4 *)(iVar1 + -0x20) = 0;
        *(undefined4 *)(iVar1 + -0xc) = 5000;
        *(undefined4 *)(iVar1 + -8) = 0x5dc;
        *(undefined4 *)(iVar1 + -4) = 0;
      }
      DAT_008bf4f4 = piVar4;
      (**(code **)(*piVar4 + 0x34))();
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = &DAT_d8a1482e;
    }
  }
  return puVar2;
}



undefined4 fn_004d4e38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  iVar1 = fn_004ecfe0(0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004d49a8();
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = fn_004ed2e8();
  iVar1 = fn_00656e14(0x18,uVar2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = 0;
    do {
      puVar4 = (undefined1 *)(iVar1 + uVar3);
      uVar3 = uVar3 + 1;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    } while (uVar3 < 0x18);
  }
  *(int *)(param_1 + 0x14) = iVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar1 = fn_004ecfe0(0x950);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004c9af8();
  }
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  iVar1 = fn_004ecfe0(0x28);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004c68c0();
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return 0;
}



int fn_004d4d14(undefined4 *param_1,int param_2,undefined4 *param_3,uint *param_4,
                undefined1 param_5,undefined4 param_6,short param_7)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  uint local_30;
  int local_2c;
  
  *param_1 = &DAT_00856320;
  iVar2 = fn_0050d0fc(param_1 + 1,param_2);
  uVar8 = param_3[1];
  *(undefined4 *)(iVar2 + 0x2c) = *param_3;
  *(undefined4 *)(iVar2 + 0x30) = uVar8;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar2 + 0x3d) = 0;
  *(undefined1 *)(iVar2 + 0x3e) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x44) = param_5;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = param_6;
  puVar3 = (uint *)fn_004f0ce8();
  uVar5 = *puVar3;
  *(uint *)(iVar2 + 0x58) = puVar3[1] * 90000 + (int)((ulonglong)uVar5 * 90000 >> 0x20);
  *(int *)(iVar2 + 0x54) = (int)((ulonglong)uVar5 * 90000);
  local_30 = 0;
  local_2c = 0;
  fn_004f01f4(&local_30);
  uVar5 = *param_4;
  uVar6 = param_4[1];
  *(uint *)(iVar2 + 0x34) = uVar5 + local_30;
  *(uint *)(iVar2 + 0x38) = local_2c + uVar6 + (uint)CARRY4(uVar5,local_30);
  uVar1 = *(ushort *)(param_2 + 0xc);
  uVar4 = uVar1 + param_7;
  *(ushort *)(iVar2 + 0x50) = uVar1;
  bVar7 = uVar4 < uVar1;
  if (bVar7) {
    uVar1 = 0xffff;
  }
  *(ushort *)(iVar2 + 0x52) = uVar4;
  if (bVar7) {
    *(ushort *)(iVar2 + 0x52) = uVar1;
  }
  return iVar2 + -4;
}



void fn_004d4cdc(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar6 = *param_3;
  uVar5 = param_3[1];
  puVar2 = (undefined4 *)fn_004f0ce8();
  uVar3 = fn_0011c134(uVar1 - uVar6,uVar4 - (uVar5 + (uVar1 < uVar6)),*puVar2,puVar2[1]);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  return;
}



undefined4 fn_004d4ba8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006d6d78(param_1 + 0xc);
  if ((iVar1 == 0) || (iVar1 = fn_006d6d78(param_2 + 8), iVar1 != 0)) {
    iVar1 = fn_006d6d78(param_1 + 0xc);
    if ((iVar1 == 0) && (iVar1 = fn_006d6d78(param_2 + 8), iVar1 != 0)) {
      if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
        if (DAT_008edd62 == -1) {
          DAT_008edd62 = 1;
        }
        else {
          DAT_008edd62 = DAT_008edd62 + 1;
        }
      }
    }
    else if ((*(int *)(param_1 + 0x34) != 0 || *(int *)(param_1 + 0x30) != 0) &&
            (iVar1 = fn_006d70ac(param_1 + 8,param_2 + 4), iVar1 == 0)) {
      return 0;
    }
  }
  else {
    if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
      if (DAT_008edd62 == -1) {
        DAT_008edd62 = 1;
      }
      else {
        DAT_008edd62 = DAT_008edd62 + 1;
      }
    }
    if (*(int *)(param_1 + 0x44) != -1) {
      return 1;
    }
  }
  fn_004ed700(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_2 + 0xc);
  return 1;
}



short fn_004d4b94(int param_1)

{
  return *(short *)(param_1 + 0x10) - *(short *)(param_1 + 0x54);
}



void fn_004d4b70(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x30) == 0 && *(int *)(param_1 + 0x34) == 0) ||
     (*(char *)(param_1 + 0x2a) != '\0')) {
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0xc);
  }
  return;
}



void fn_004d4b34(int param_1)

{
  short sVar1;
  short extraout_r1;
  
  sVar1 = *(short *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x56) != sVar1) {
    fn_00169f1c(*(uint *)(param_1 + 0x4c) & 0xffff);
    *(short *)(param_1 + 0x10) = extraout_r1 + sVar1;
  }
  return;
}



void fn_004d4b08(void)

{
  if (DAT_008bf4ec != '\0') {
    fn_004ed284(6);
    DAT_008bf4ec = '\0';
  }
  return;
}


