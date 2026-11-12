#include "0015e5e0_0015ebe4.h"



void fn_0015ebe4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_38 [2];
  int local_30 [3];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_008b63dc;
  piVar2 = (int *)(DAT_008b63dc + 0x24);
  uStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  (**(code **)(*(int *)(DAT_008b63dc + 0x24) + 8))();
  iVar3 = fn_00169c08(local_38,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  local_30[0] = local_38[0];
  local_30[1] = 0;
  fn_001777e0(local_38,iVar1 + 0x4c,local_30);
  *(undefined4 *)(local_38[0] + 0x14) = local_1c;
  (**(code **)(*piVar2 + 0xc))(piVar2);
  iVar1 = DAT_008b63dc;
  piVar2 = (int *)(DAT_008b63dc + 0x78);
  (**(code **)(*(int *)(DAT_008b63dc + 0x78) + 8))();
  iVar3 = fn_00169c08(local_38,0xffff8000);
  if (iVar3 < 0) {
    fn_0015e294();
  }
  local_30[0] = local_38[0];
  local_30[1] = 0;
  fn_001777e0(local_38,iVar1 + 0xa0,local_30);
  *(undefined4 *)(local_38[0] + 0x14) = local_18;
                    /* WARNING: Could not recover jumptable at 0x0015ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}



void fn_0015ea80(int *param_1)

{
  int iVar1;
  uint local_18;
  int iStack_14;
  
  (**(code **)(DAT_008e7710 + 8))();
  if (DAT_008b6382 == '\0') {
    if (DAT_008b6381 == '\0') {
      DAT_008b6381 = '\x01';
      fn_0015eb44(&local_18);
      DAT_008b6518 = 1 - local_18;
      DAT_008b651c = -(iStack_14 + (uint)(1 < local_18));
      *param_1 = 1;
      param_1[1] = 0;
    }
    else {
      fn_0015eb44(&local_18);
      iVar1 = DAT_008b6518 + local_18;
      param_1[1] = DAT_008b651c + iStack_14 + (uint)CARRY4(DAT_008b6518,local_18);
      *param_1 = iVar1;
    }
  }
  else {
    fn_0014ed0c(param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0015eb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e7710 + 0xc))(&DAT_008e7710);
  return;
}



void fn_0015eb44(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_008b63e0 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0015eb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_008b63e0 + 8))();
    return;
  }
  if (DAT_008b63a1 == '\0') {
    lVar1 = fn_00176fc4();
    uVar2 = fn_00169c20((int)(lVar1 * 1000),(int)((ulonglong)(lVar1 * 1000) >> 0x20),0xffb0ff0);
    *param_1 = uVar2;
    return;
  }
  lVar1 = fn_00176fc4();
  uVar2 = fn_00169c20((int)(lVar1 * 1000),(int)((ulonglong)(lVar1 * 1000) >> 0x20),0xffb0ff0,0);
  *param_1 = uVar2;
  return;
}



void fn_0015e9d8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    if (iVar1 != 4) {
      if (*(code **)(iVar1 + -0xc) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar1 + -0xc))();
      }
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x65) = 0;
  }
  if (param_2 != 0) {
    iVar1 = fn_00100b58(param_2);
    iVar1 = iVar1 + 1;
    piVar2 = (int *)fn_0015ece0(iVar1 * 2 + 4);
    *piVar2 = iVar1;
    *(int **)(param_1 + 0x60) = piVar2 + 1;
    fn_00101144(piVar2 + 1,param_2,iVar1);
    *(undefined2 *)(*(int *)(param_1 + 0x60) + iVar1 * 2 + -2) = 0;
    *(undefined1 *)(param_1 + 0x65) = 1;
    *(undefined1 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x66) = 0;
  }
  return;
}



undefined4 fn_0015e740(int param_1,undefined2 *param_2,int param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined *local_38;
  undefined1 auStack_34 [4];
  undefined *local_30;
  undefined1 auStack_2c [8];
  
  bVar1 = false;
  do {
    puVar2 = (undefined2 *)fn_00101160(param_2,&DAT_0015e9c8);
    if (puVar2 == (undefined2 *)0x0) {
      bVar1 = true;
      iVar3 = fn_00100b58(param_2);
      puVar2 = param_2 + iVar3;
      if (param_2 == puVar2) {
        return 1;
      }
    }
    if (param_2 == puVar2) {
      return 0;
    }
    *puVar2 = 0;
    puVar4 = (undefined2 *)fn_00101160(param_2,&DAT_007dbc10);
    if (((puVar4 == (undefined2 *)0x0 || param_2 == puVar4) || (puVar5 = puVar4 + 1, puVar4[1] == 0)
        ) || (iVar3 = fn_00101160(puVar5,&DAT_007dbc10), iVar3 != 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      *puVar4 = 0;
      if (param_3 == 0) {
        iVar7 = fn_00101d80(param_2,L"address");
        if (iVar7 == 0) {
          fn_0017695c(param_1);
          *(undefined1 *)(param_1 + 0x65) = 0;
          iVar3 = fn_00170c9c(*(undefined4 *)(param_1 + 4),puVar5);
        }
        else {
          iVar7 = fn_00101d80(param_2,L"port");
          if (iVar7 != 0) {
            local_30 = &DAT_00855a94;
            fn_0015e6f0(auStack_2c,param_2);
            local_38 = &DAT_00855a94;
            fn_0015e6f0(auStack_34,puVar5);
            fn_0017695c(param_1);
            uVar6 = fn_00177f50(param_1 + 0x28,&local_30);
            fn_00170fa4(uVar6,&local_38);
            goto LAB_0015e864;
          }
          uVar8 = fn_00101054(puVar5,0,10);
          fn_0017695c(param_1);
          *(ushort *)(*(int *)(param_1 + 4) + 6) =
               (ushort)((uVar8 & 0xff) << 8) | (ushort)(uVar8 >> 8) & 0xff;
          *(undefined1 *)(param_1 + 0x65) = 0;
        }
      }
      else {
        local_30 = &DAT_00855a94;
        fn_0015e6f0(auStack_2c,param_2);
        local_38 = &DAT_00855a94;
        fn_0015e6f0(auStack_34,puVar5);
        fn_0017695c(param_1);
        uVar6 = fn_00177f50(param_1 + 0x44,&local_30);
        fn_00170fa4(uVar6,&local_38);
LAB_0015e864:
        *(undefined1 *)(param_1 + 0x65) = 0;
        fn_00170f54(&local_38);
        fn_00170f54(&local_30);
      }
      *puVar4 = 0x3d;
    }
    if (!bVar1) {
      *puVar2 = 0x3b;
    }
    if (iVar3 == 0) {
      return 0;
    }
    param_2 = puVar2 + 1;
    if (bVar1) {
      return 1;
    }
  } while( true );
}



int * fn_0015e6f0(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == (short *)0x0) {
    *param_1 = 0;
    return (int *)0x0;
  }
  iVar2 = fn_00100b58(param_2);
  piVar3 = (int *)fn_0015ece0((iVar2 + 1) * 2 + 4);
  piVar4 = piVar3 + 1;
  *piVar3 = iVar2 + 1;
  *param_1 = piVar4;
  piVar3 = piVar4;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *(short *)piVar3 = sVar1;
    piVar3 = (int *)((int)piVar3 + 2);
  } while (sVar1 != 0);
  return piVar4;
}



int fn_0015e680(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = fn_0015e6d8(param_1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  } while ((param_2 < *(uint *)(iVar2 + 0x18)) || (*(uint *)(iVar2 + 0x1c) <= param_2));
  iVar1 = fn_0015e680(iVar2 + 0xc,param_2);
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



undefined4 fn_0015e6d8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)((uint)*(ushort *)((int)param_1 + 10) + param_2 + 4);
  }
  return uVar1;
}



void fn_0015e5e0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(param_1 + 0x14) = param_6;
  iVar1 = fn_00169f1c(param_2 + param_5 + -1,param_5);
  iVar1 = iVar1 * param_5;
  *(int *)(param_1 + 0x18) = iVar1;
  iVar2 = fn_00169f1c(param_3 + param_5 + -1,param_5);
  puVar6 = (undefined4 *)(iVar2 * param_5);
  *(undefined4 **)(param_1 + 0x1c) = puVar6;
  iVar2 = fn_00169f1c((param_3 + param_4) - (int)puVar6,iVar1);
  puVar3 = (undefined4 *)0x0;
  *(int *)(param_1 + 0x20) = iVar2 * iVar1;
  puVar5 = (undefined4 *)((int)puVar6 + (iVar2 * iVar1 - iVar1));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = param_5;
  puVar4 = puVar3;
  if (puVar6 <= puVar5) {
    do {
      puVar3 = puVar5;
      *puVar3 = puVar4;
      puVar5 = (undefined4 *)((int)puVar3 - *(int *)(param_1 + 0x18));
      puVar4 = puVar3;
    } while (*(undefined4 **)(param_1 + 0x1c) <= puVar5);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar3;
  return;
}


