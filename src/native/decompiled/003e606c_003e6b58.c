#include "003e606c_003e6b58.h"



void fn_003e6b58(int param_1)

{
  fn_00689824(param_1,0);
  *(byte *)(*(int *)(param_1 + 0x70) + 0x44) = *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe;
  *(undefined4 *)(param_1 + 0xe4) = 4;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



void fn_003e6b10(void)

{
  DAT_008bf660 = 0;
  DAT_008bf664 = 0;
  return;
}



int fn_003e6aec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = SCARRY4((int)param_1,1);
  iVar1 = (int)param_1 + 1;
  bVar4 = param_1 == (undefined4 *)0xffffffff;
  puVar3 = &DAT_008bf660;
  if (param_1 < (undefined4 *)0x80000000) {
    puVar3 = DAT_008bf664;
  }
  if (-1 < (int)param_1) {
    bVar5 = SBORROW4((int)puVar3,(int)param_1);
    iVar1 = (int)puVar3 - (int)param_1;
    bVar4 = puVar3 == param_1;
  }
  iVar2 = DAT_008bf660;
  if (!bVar4 && iVar1 < 0 == bVar5) {
    iVar2 = DAT_008bf660 + (int)param_1 * 4;
  }
  return (int)*(short *)(iVar2 + 2);
}



undefined4 fn_003e6a58(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_003e6ae0), iVar1 != 0)) {
    DAT_008bf660 = 0;
  }
  else {
    DAT_008bf660 = param_1 + 4;
  }
  if ((param_3 - 4 & 3) != 0) {
    DAT_008bf660 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008bf664 = 0;
  }
  else {
    DAT_008bf664 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),4,0);
  }
  return 1;
}



void fn_003e69c8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  param_3 = (int *)*param_3;
  fn_004b301c(param_3,3);
  puVar5 = (uint *)(param_3 + 1);
  do {
    uVar4 = *puVar5 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar6);
  *puVar5 = uVar4;
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = (uint)*(byte *)(param_3 + 2);
  }
  if (bVar6 && uVar4 == 0) {
    *(undefined1 *)(param_3 + 2) = 1;
    (**(code **)(*param_3 + 4))();
  }
                    /* WARNING: Could not recover jumptable at 0x003e6a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_003e68fc(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  param_3 = (int *)*param_3;
  if (*(char *)((int)param_3 + 0x22) == '\x02') {
    iVar2 = *param_2;
    iVar1 = param_2[1];
    iVar7 = param_2[2];
    (**(code **)(*param_3 + 0x34))(param_3,*(code **)(*param_3 + 0x34),param_3[0x18],param_3[0x19]);
    param_3[0x1f] = iVar2;
    param_3[0x20] = iVar1;
    param_3[0x21] = iVar7;
    fn_004b301c(param_3,3);
    puVar5 = (uint *)(param_3 + 1);
    do {
      uVar4 = *puVar5 - 1;
      bVar6 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar6);
    *puVar5 = uVar4;
    bVar6 = uVar4 == 0;
    if (bVar6) {
      uVar4 = (uint)*(byte *)(param_3 + 2);
    }
    if (bVar6 && uVar4 == 0) {
      *(undefined1 *)(param_3 + 2) = 1;
      (**(code **)(*param_3 + 4))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003e69c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_003e6898(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e68c8(iVar1,param_1);
  return;
}



void fn_003e68c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c7474,1);
  *puVar1 = &DAT_00833248;
  return;
}



void fn_003e6584(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0xc) == '\x03') &&
     ((*(int *)(param_1 + 0x68) != 0 ||
      ((*(uint *)(param_1 + 0x6c) & 1) != 0 && *(uint *)(param_1 + 0x6c) != 0)))) {
    pcVar2 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar2)();
    iVar4 = *(int *)(param_1 + 0x68);
    uVar1 = *(uint *)(param_1 + 0x7c);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x70) = iVar4;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x74) = uVar3;
    *(uint *)(param_1 + 0x6c) = uVar1;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x78)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar1) & 1) == 0)) || (uVar3 == uVar1)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  fn_00268030(*(undefined4 *)(param_1 + 0x8c));
  return;
}



void fn_003e62bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_003e6398,0);
    fn_0068974c(param_1,uVar2,0,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    fn_00301f50(*(undefined4 *)(param_1 + 0x88),0x37af0);
    fn_00268758(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_003e63bc,
                 *(undefined4 *)(param_1 + 0x88),0x37af0,0,1);
    return;
  }
  iVar1 = fn_006b7260(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == 0) {
    *(code **)(param_1 + 0x78) = fn_003e6230;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  iVar1 = fn_006b72c8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x78) = fn_003e5d74;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003e6230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    uVar2 = fn_0022f584((char *)&DAT_003e629c,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x78) = fn_003e5fa0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003e6098(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar3 = fn_0022f584((char *)&DAT_003e61d0,0);
    fn_0068974c(param_1,uVar3,0,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    fn_00301f50(uVar3,0x37af0);
    fn_0017821c(uVar3,*(undefined4 *)(DAT_00897804 + 4),0x37af0);
    local_20 = 1;
    local_1c = 1;
    fn_00268758(*(undefined4 *)(param_1 + 0x8c),(char *)&DAT_003e61f4,uVar3,0x37af0);
    return;
  }
  iVar1 = fn_006b7260(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == 0) {
    local_20 = CONCAT22(((unsigned int)(local_20) >> 16) & 0xffff,0x101);
    fn_0028b960(*(undefined4 *)(DAT_00897804 + 0x30),&local_20);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    uVar3 = fn_0022f584((char *)&DAT_003e6214,0);
    fn_0068974c(param_1,uVar3,0,1);
    pcVar2 = fn_003e606c;
  }
  else {
    iVar1 = fn_006b72c8(*(undefined4 *)(param_1 + 0x8c));
    if (iVar1 == 0) {
      return;
    }
    pcVar2 = fn_003e5d74;
  }
  *(code **)(param_1 + 0x78) = pcVar2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



void fn_003e606c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
    *(code **)(param_1 + 0x78) = fn_003e5e28;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}


