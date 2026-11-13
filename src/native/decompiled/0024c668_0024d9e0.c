#include "0024c668_0024d9e0.h"



void fn_0024d9e0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2[6] & param_1[1] - 1U;
  puVar1 = (undefined4 *)0x0;
  puVar2 = *(undefined4 **)(*param_1 + uVar3 * 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if (puVar2 == param_2) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)puVar2[4];
  }
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(*param_1 + uVar3 * 4) = puVar2[4];
  }
  else {
    puVar1[4] = puVar2[4];
  }
  param_1[2] = param_1[2] + -1;
  iVar4 = puVar2[5];
  (**(code **)*puVar2)(puVar2);
  fn_0019d680(puVar2,iVar4 + 0x20);
  return;
}



void fn_0024d77c(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0x8001000) {
    if (iVar1 < 0x8001000) {
      if ((iVar1 != 0x8000040 && iVar1 != 0x8000100) && (iVar1 != 0x8000200 && iVar1 != 0x8000400))
      {
        return;
      }
    }
    else if (iVar1 != 0x8004000) {
      iVar2 = iVar1 + -0xa000020;
      bVar3 = iVar2 != 0;
      bVar4 = iVar2 != 0x60;
      if (bVar3 && bVar4) {
        iVar2 = iVar1 + -0xa007020;
      }
      if ((bVar3 && bVar4) && iVar2 != 0xfe0) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0024d7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[1] + 0xc))();
  return;
}



void fn_0024d73c(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x10) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}



void fn_0024d6f4(undefined4 *param_1)

{
  *param_1 = &DAT_0081d610;
  param_1[0x15] = &DAT_0081d6dc;
  if ((int *)param_1[0x8b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x8b] + 4))();
  }
  fn_006a70f0(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0024d650(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)fn_006a6d8c();
  puVar1[0x15] = &DAT_0081d6dc;
  *puVar1 = &DAT_0081d610;
  puVar1[0x8b] = 0;
  puVar1[0x8c] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x8d) = 0;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_002f40c8();
  }
  piVar5 = (int *)puVar1[0x8b];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    puVar1[0x8b] = piVar3;
  }
  (**(code **)(*(int *)puVar1[0x8b] + 8))((int *)puVar1[0x8b],puVar1);
  uVar4 = fn_00163868(0x1b);
  puVar1[0x8a] = uVar4;
  return puVar1;
}



int fn_0024d3e4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                int param_6,uint param_7,undefined4 param_8,undefined4 param_9,int param_10,
                char *param_11)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [32];
  int local_50;
  int iStack_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar7 = CONCAT44(param_8,param_9);
  uVar8 = (ulonglong)param_7;
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_00301a9c(auStack_70,&DAT_007ba154,0x1e);
  iVar4 = 0;
  do {
    if (*(byte *)(param_10 + iVar4) != 0) {
      fn_002eb5ac(&local_78,iVar4,*(byte *)(param_10 + iVar4) - 1);
      fn_0019bc50(auStack_70 + iVar4 * 6,&local_78);
    }
    uVar3 = (undefined4)uVar8;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  uVar2 = fn_0068eb30(DAT_008977e8);
  uVar2 = fn_00265604(uVar2,local_2c);
  iVar4 = fn_0068eb30(DAT_008977e8);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x34) <= param_2))
  {
    local_78 = 0;
  }
  else {
    local_78 = *(undefined4 *)(*(int *)(iVar4 + 0x10) + param_2 * 4);
  }
  iVar4 = fn_0068eb30(DAT_008977e8);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x34) <= param_2))
  {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 4) + param_2 * 0x34;
  }
  fn_00294440(iVar4,local_78,uVar2,auStack_70);
  local_78 = (undefined4)uVar7;
  local_74 = 0;
  local_50 = fn_006a3dd4(param_1,param_2,local_28,param_5,uVar3,(int)((ulonglong)uVar7 >> 0x20));
  iVar4 = local_50;
  if (param_11 != (char *)0x0) {
    iVar4 = param_6;
  }
  if (param_11 != (char *)0x0 && iVar4 != -1) {
    uVar3 = fn_0068eb30(DAT_008977e8);
    uVar3 = fn_00265604(uVar3,param_6);
    iVar4 = fn_0068eb30(DAT_008977e8);
    if (((int)param_5 < 0) ||
       ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x34) <= param_5)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0x10) + param_5 * 4);
    }
    iVar4 = fn_0068eb30(DAT_008977e8);
    if (((int)param_5 < 0) ||
       ((uint)((*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4)) / 0x34) <= param_5)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4) + param_5 * 0x34;
    }
    fn_002cd5b0(iVar4,uVar2,uVar3,param_11);
    cVar1 = *param_11;
    bVar5 = cVar1 == '\0';
    if (bVar5) {
      cVar1 = param_11[6];
    }
    bVar6 = bVar5 && cVar1 == '\0';
    if (bVar5 && cVar1 == '\0') {
      bVar6 = param_11[0xc] == '\0';
    }
    if (!bVar6) {
      *(undefined1 *)(param_1 + 0x234) = 1;
    }
    return local_50;
  }
  return local_50;
}



void fn_0024c994(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  uVar1 = fn_0068c6b8(DAT_008977e8);
  uVar2 = fn_0014481c(DAT_008977e8);
  fn_002494e0(uVar2,uVar1);
  uVar1 = fn_00144810(DAT_008977e8);
  fn_006a873c(uVar1,0);
  fn_00144810(DAT_008977e8);
                    /* WARNING: Subroutine does not return */
  fn_006a8660();
}



int * fn_0024c7a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [68];
  undefined1 auStack_74 [76];
  undefined1 auStack_28 [8];
  
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00692e98(iVar1,param_2);
    fn_00183718(&local_d8,iVar1,&DAT_008c4e1c);
    *(undefined4 *)(iVar1 + 8) = local_d8;
    *(undefined4 *)(iVar1 + 0xc) = uStack_d4;
    *(undefined4 *)(iVar1 + 0x10) = uStack_d0;
    *(undefined4 *)(iVar1 + 0x14) = uStack_cc;
    *(undefined4 *)(iVar1 + 0x18) = uStack_c8;
    *(undefined4 *)(iVar1 + 0x1c) = uStack_c4;
    *(undefined4 *)(iVar1 + 0x20) = uStack_c0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    fn_0079cfec(iVar1 + 0x24,*(uint *)(iVar1 + 8) >> 1,0);
    uVar2 = *(uint *)(iVar1 + 8);
    uVar4 = 0;
    if (uVar2 >> 1 != 0) {
      do {
        fn_001028d4(&uStack_c8,s_j_02ds_008c4e21,uVar4);
        uVar2 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          do {
            fn_00176ec8(auStack_74,iVar1 + 0xc,uVar2);
            fn_0017821c(auStack_b8,auStack_74,0x44);
            iVar3 = fn_003035b0(auStack_b8,&uStack_c8);
            if (iVar3 == 0) goto LAB_0024c8a8;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(iVar1 + 8));
        }
        uVar2 = 0xffffffff;
LAB_0024c8a8:
        *(uint *)(*(int *)(iVar1 + 0x24) + uVar4 * 4) = uVar2;
        uVar2 = *(uint *)(iVar1 + 8);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2 >> 1);
    }
    fn_0079cfec(iVar1 + 0x30,uVar2 >> 1,0);
    uVar2 = 0;
    if (*(uint *)(iVar1 + 8) >> 1 != 0) {
      do {
        fn_001028d4(auStack_28,s_j_02de_008c4e28,uVar2);
        uVar4 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          do {
            fn_00176ec8(auStack_74,iVar1 + 0xc,uVar4);
            fn_0017821c(auStack_b8,auStack_74,0x44);
            iVar3 = fn_003035b0(auStack_b8,auStack_28);
            if (iVar3 == 0) goto LAB_0024c954;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar1 + 8));
        }
        uVar4 = 0xffffffff;
LAB_0024c954:
        *(uint *)(*(int *)(iVar1 + 0x30) + uVar2 * 4) = uVar4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar1 + 8) >> 1);
    }
  }
  *param_1 = iVar1;
  return param_1;
}



undefined4 * fn_0024c668(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  *param_1 = &DAT_0081d5e8;
  param_1[1] = &DAT_008593e0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_008593e0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x41) = param_3;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  param_1[0x11] = 0;
  iVar1 = fn_005f65a4(10,0xf);
  param_1[0xb] = iVar1 * 0x1e;
  return param_1;
}


