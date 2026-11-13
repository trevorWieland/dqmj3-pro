#include "004df5f8_004e0764.h"



void fn_004e0764(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 + param_3 * 2;
  iVar1 = fn_006d6700(param_1,*(undefined2 *)(iVar4 + 0x10));
  iVar2 = fn_006d58dc(DAT_008bf504);
  if (((iVar2 == 0) || (*param_2 != 9)) ||
     ((*(char *)(*(int *)(DAT_008bf504 + 0x18) + 0x34) == '\0' &&
      (iVar2 = fn_006d589c(DAT_008bf504), iVar2 == 0)))) {
    fn_004dedfc(DAT_008bf504,iVar1);
  }
  else if (*(char *)(*(int *)(DAT_008bf504 + 0x18) + 0x34) != '\0') {
    *(uint *)(param_1 + 0x1244) = *(uint *)(param_1 + 0x1244) | 1 << (iVar1 - 1U & 0xff);
  }
  *(undefined2 *)(iVar4 + 0x10) = *(undefined2 *)(param_1 + 0x42);
  iVar2 = fn_006d58dc(DAT_008bf504);
  if ((iVar2 != 0) && (*param_2 == 6)) {
    uVar3 = *(undefined4 *)(DAT_008bf504 + 0x18);
    fn_004e4d9c(uVar3,iVar1);
    fn_004e4944(uVar3,iVar1);
  }
  fn_004e2f74(*(undefined4 *)(param_1 + 0x1200),iVar1);
  iVar2 = fn_006d5980(DAT_008bf504);
  if (iVar2 == 0) {
    return;
  }
  fn_004ea050(*(undefined4 *)(DAT_008bf504 + 0x1c),iVar1);
  return;
}



void fn_004e06bc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 auStack_16 [6];
  
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    local_18 = 1;
    local_20 = 0;
    local_1c = 0;
    local_17 = 0;
    fn_006f94d0(auStack_16);
    local_20 = *(undefined4 *)(param_1 + 0x1238);
    local_1c = *(undefined4 *)(param_1 + 0x1240);
    local_17 = fn_006d6604(param_1);
    fn_001694e4(param_2,&local_20,0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004e06fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_008bf504 + 0x18) + 0x28))(*(int **)(DAT_008bf504 + 0x18),param_2);
  return;
}



void fn_004e0624(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  fn_004edc34(param_1 + 0x1204);
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar1 = *(int *)(param_1 + 0x1210);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  *(undefined4 *)(iVar1 + 0x1c) = uVar7;
  *(undefined4 *)(iVar1 + 0x20) = uVar8;
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  *(undefined4 *)(iVar1 + 0x30) = uVar4;
  fn_004edc70(param_1 + 0x1204);
  return;
}



void fn_004e03d4(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char local_2c [8];
  
  *(undefined2 *)((int)param_1 + param_3 * 2 + 0x10) =
       *(undefined2 *)((int)param_2 + param_3 * 2 + 0xc);
  if (*(short *)((int)param_2 + param_3 * 2 + 0xc) == (short)param_2[2]) {
    *(short *)(param_1 + 0x10) = (short)param_2[2];
    uVar2 = param_2[1];
    if ((((1 < uVar2) && (uVar2 != 2 && uVar2 != 3)) && (uVar2 != 4 && uVar2 != 5)) && (uVar2 != 6))
    {
      uVar2 = 6;
    }
    *(char *)(DAT_008bf504 + 0x5c) = (char)uVar2;
  }
  iVar3 = fn_006d58dc(DAT_008bf504);
  if (iVar3 == 0) {
    if ((*param_2 == 6) &&
       (cVar1 = (char)param_3 + '\x01',
       *(short *)((int)param_2 + param_3 * 2 + 0xc) == (short)param_2[2])) {
      *(char *)((int)param_1 + 0xe) = cVar1;
      *(char *)((int)param_1 + 0xf) = cVar1;
    }
  }
  else if (*param_2 == 6) {
    piVar4 = *(int **)(DAT_008bf504 + 0x18);
    local_2c[0] = '\0';
    uVar6 = (**(code **)(*piVar4 + 0x24))(piVar4,*(undefined2 *)((int)param_2 + param_3 * 2 + 0xc));
    iVar3 = fn_006d6924(piVar4,*(undefined2 *)((int)param_2 + param_3 * 2 + 0xc),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20),*(undefined1 *)((int)param_2 + 0x2d),
                         local_2c);
    if ((iVar3 == 0xff) || (uVar2 = fn_006d589c(DAT_008bf504), (uVar2 & ~(int)local_2c[0]) != 0)) {
      fn_0051ec1c(*(undefined2 *)((int)param_2 + param_3 * 2 + 0xc));
      (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3);
      return;
    }
    fn_004e4d78(piVar4,iVar3,*(undefined2 *)((int)param_2 + param_3 * 2 + 0xc));
    fn_004e4a58(piVar4,iVar3,*(undefined2 *)((int)param_2 + param_3 * 2 + 0xc));
    if (*(short *)((int)param_2 + param_3 * 2 + 0xc) == (short)param_2[2]) {
      *(char *)((int)param_1 + 0xe) = (char)iVar3;
      *(char *)((int)param_1 + 0xf) = (char)iVar3;
    }
  }
  iVar3 = fn_006d5980(DAT_008bf504);
  if (iVar3 != 0) {
    if (*(short *)((int)param_2 + param_3 * 2 + 0xc) == (short)param_2[2]) {
      fn_004ea12c(*(undefined4 *)(DAT_008bf504 + 0x1c));
      if (*param_2 != 6) {
        return;
      }
      fn_004ea16c(*(undefined4 *)(DAT_008bf504 + 0x1c));
    }
    if (((*param_2 == 6) && (*(short *)((int)param_2 + param_3 * 2 + 0xc) != (short)param_2[2])) &&
       (iVar3 = fn_006d589c(DAT_008bf504), iVar3 == 0)) {
      uVar5 = fn_006d6700(param_1,*(undefined2 *)((int)param_1 + param_3 * 2 + 0x10));
      fn_004ea154(*(undefined4 *)(DAT_008bf504 + 0x1c),uVar5);
      return;
    }
  }
  return;
}



undefined1 * fn_004e0368(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1f28;
  fn_004edc34(iVar2);
  if ((*(char *)(param_1 + 0x1f26) == '\0') || (iVar1 = fn_004ec454(param_1 + 0x1f18), -1 < iVar1))
  {
    fn_004edc70(iVar2);
    return (undefined1 *)0x0;
  }
  fn_004edc70(iVar2);
  return &DAT_e0a14827;
}



undefined1 * fn_004dfb68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1f28;
  fn_004edc34(iVar2);
  if (*(char *)(param_1 + 0x1f26) == '\0') {
    iVar1 = fn_004ec3bc(param_1 + 0x1f18,0x23f3);
    if (iVar1 < 0) {
      if (iVar1 == -0x36beeffe) {
        fn_004edc70(iVar2);
        return (undefined1 *)0xd8a14868;
      }
      fn_004edc70(iVar2);
      return &DAT_e0a14827;
    }
  }
  fn_004edc70(iVar2);
  return (undefined1 *)0x0;
}



undefined4
fn_004dfa84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  
  iVar2 = param_1 + 0x1f28;
  fn_004edc34(iVar2);
  if (*(char *)(param_1 + 0x1f26) == '\0') {
    fn_004edc70(iVar2);
    return 0xd8a14868;
  }
  local_20 = fn_0051eca4(param_1 + 0x1f20,param_2,param_4,param_5,param_3,
                          *(undefined1 *)(*(int *)(param_1 + 8) + 0x15));
  uVar1 = fn_006d6194(param_1,&local_20);
  fn_004edc70(iVar2);
  return uVar1;
}



void fn_004df9d4(int *param_1)

{
  undefined *local_40;
  undefined1 auStack_3c [52];
  
  local_40 = &DAT_00856a34;
  fn_0051f81c(auStack_3c);
  (**(code **)(*param_1 + 0x24))(param_1,&local_40);
  return;
}



undefined4 fn_004df77c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20 [2];
  
  iVar2 = param_1 + 0x1f28;
  fn_004edc34(iVar2);
  if (*(char *)(param_1 + 0x1f26) == '\0') {
    fn_004edc70(iVar2);
    return 0xd8a14868;
  }
  local_20[0] = fn_00520028(param_1 + 0x1f1c,param_2,param_3,param_4,
                             *(ushort *)(param_1 + 0x1f24) & 0xff,
                             *(undefined1 *)(*(int *)(param_1 + 8) + 0x14));
  uVar1 = fn_006d604c(param_1,local_20);
  fn_004edc70(iVar2);
  return uVar1;
}



undefined4 fn_004df618(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  fn_004e0ea8();
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x1210) == 0) {
    uVar1 = fn_004ed2e8();
    puVar2 = (undefined4 *)fn_00656e14(0x34,uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00856a34;
    }
    *(undefined4 **)(param_1 + 0x1210) = puVar2;
  }
  if ((*(int *)(param_1 + 0x1f34) == 0) && (*(int *)(iVar3 + 0x18) != 0)) {
    uVar1 = fn_004ed2e8();
    puVar2 = (undefined4 *)fn_00656e14(0x18,uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
    }
    *(int *)(param_1 + 0x1f34) = (int)puVar2;
    fn_001694e4(puVar2,*(undefined4 *)(iVar3 + 0x18),0x18);
  }
  if (*(int *)(param_1 + 0x1234) != 0) {
    return 0;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    uVar1 = fn_004ed2e8();
    puVar2 = (undefined4 *)fn_00656e14(0x10,uVar1);
    if (puVar2 == (undefined4 *)0x0) goto LAB_004df770;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 1;
    iVar3 = (int)puVar2 + 10;
    *(undefined1 *)((int)puVar2 + 9) = 0;
  }
  else {
    uVar1 = fn_004ed2e8();
    puVar2 = (undefined4 *)fn_00656e14(0x1c,uVar1);
    if (puVar2 == (undefined4 *)0x0) {
LAB_004df770:
      puVar2 = (undefined4 *)0x0;
      goto LAB_004df728;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 1;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    fn_006f94d0((int)puVar2 + 10);
    puVar2[4] = 0;
    iVar3 = (int)puVar2 + 0x16;
    *(undefined2 *)(puVar2 + 5) = 0;
  }
  fn_006f94d0(iVar3);
LAB_004df728:
  *(undefined4 **)(param_1 + 0x1234) = puVar2;
  return 0;
}



void fn_004df5f8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004df3fc();
  *puVar1 = &DAT_00856468;
  puVar1[0x170] = &DAT_0085648c;
  return;
}


