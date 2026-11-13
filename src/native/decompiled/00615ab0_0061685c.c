#include "00615ab0_0061685c.h"



void fn_0061685c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fn_0019e864(param_1 + 0x38,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x40,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x48,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x50,&DAT_008c06e8);
  fn_0019e864(param_1 + 0x58,&DAT_008c06e8);
  local_3c = 0;
  local_28 = 0;
  local_40 = 0;
  local_24 = 0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_38 = 0x1000001;
  local_14 = 0;
  fn_0019d408(param_1 + 0x6c,0,&local_40);
  if (((local_38 & 0x8000000) != 0) &&
     (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_34 + 8))();
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&DAT_008c06e8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}



void fn_00616834(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0xa8);
  return;
}



undefined4 fn_006167ec(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (((((*param_2 & 0x1000000) == 0) || (*param_2 != 0x5000004)) || ((float)param_2[1] != 0.0)) &&
     (param_2[1] != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00615ecc(undefined4 param_1)

{
  fn_00107aac();
  fn_0010d9d4(param_1);
  return;
}



int fn_00615e64(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = 0;
  uStack_1c = 0;
  fn_00114248(&local_18);
  local_20 = local_18;
  uStack_1c = uStack_14;
  uVar1 = fn_0011a314(&local_20);
  uVar2 = fn_0011a3c4(&local_20);
  uVar3 = fn_0011a36c(&local_20);
  iVar4 = fn_00114150(uVar3,uVar2,uVar1);
  iVar5 = fn_001084c0(&local_20);
  return iVar5 + iVar4;
}



void fn_00615e18(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 4) = *param_2 & 0x7fff;
  *(byte *)(param_1 + 1) = (byte)(*param_2 >> 0xf);
  *(ushort *)(param_1 + 6) = param_2[1];
  *(ushort *)(param_1 + 8) = param_2[2];
  *(ushort *)(param_1 + 10) = param_2[3];
  *(ushort *)(param_1 + 0xc) = param_2[4];
  *(ushort *)(param_1 + 0xe) = param_2[5];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 6);
  return;
}



void fn_00615d94(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00615dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



undefined4 fn_00615d4c(short *param_1,short *param_2)

{
  if (*param_1 < *param_2) {
    return 1;
  }
  if (*param_1 <= *param_2) {
    if (*(char *)((int)param_1 + 7) < *(char *)((int)param_2 + 7)) {
      return 1;
    }
    if ((*(char *)((int)param_1 + 7) <= *(char *)((int)param_2 + 7)) && (param_1[6] < param_2[6])) {
      return 1;
    }
  }
  return 0;
}



void fn_00615ca0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_007be328;
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 0x12;
    } while (uVar2 != param_1[5]);
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) / 0x12,0);
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 0x12) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) / 0x12,0);
  fn_002feef8(param_1);
  return;
}



void fn_00615c18(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    uVar4 = 1;
    iVar3 = 0;
    iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x12;
    if (0 < iVar1) {
      do {
        uVar2 = fn_00154ac8((int)*(short *)(*(int *)(param_1 + 4) + iVar3 * 0x12 + 6));
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 & uVar2;
      } while (iVar3 < iVar1);
      if (uVar4 == 0) {
        return;
      }
    }
    fn_00144834(0x45,1);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}



undefined4 fn_00615bd0(int param_1)

{
  fn_002113c8();
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x19c));
  fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x19c));
  return 1;
}



void fn_00615ba8(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x19c));
  return;
}



uint fn_00615b24(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  uint local_18;
  uint local_14;
  
  local_18 = *(uint *)(*param_1 + -4);
  puVar3 = &local_18;
  if (*(uint *)(*param_2 + -4) < local_18) {
    puVar3 = &local_14;
  }
  local_14 = *(uint *)(*param_2 + -4);
  uVar1 = fn_001010c8(*param_1,*param_2,*puVar3);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(*param_1 + -4);
    uVar2 = *(uint *)(*param_2 + -4);
    bVar5 = uVar1 < uVar2;
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      uVar1 = 0;
    }
    if (!bVar5 && !bVar4) {
      uVar1 = 0;
    }
    if (bVar5) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1 >> 0x1f;
}



int fn_00615ab0(short param_1)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  short extraout_r1;
  short local_18 [2];
  short local_14 [2];
  short local_10 [4];
  
  psVar3 = local_18;
  uVar2 = fn_005f65d4();
  fn_00300f74(uVar2,0x65);
  iVar1 = (int)(short)(extraout_r1 + 0x32) * (int)param_1;
  local_14[0] = 9999;
  local_10[0] = ((short)(iVar1 / 100) + (short)(iVar1 >> 0x1f)) -
                (short)((longlong)iVar1 * 0x51eb851f >> 0x3f);
  if (0 < local_10[0]) {
    psVar3 = local_10;
  }
  local_18[0] = 1;
  if (9999 < *psVar3) {
    psVar3 = local_14;
  }
  return (int)*psVar3;
}


