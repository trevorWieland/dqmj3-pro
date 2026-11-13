#include "001c00cc_001d51ac.h"



bool fn_001d51ac(undefined4 *param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)param_1[9] + 0x18))();
  iVar1 = (**(code **)(*(int *)param_1[9] + 0x2c))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1[9] + 0x20))();
  }
  fn_0023e6c8(param_1[1]);
  (**(code **)(*(int *)*param_1 + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return iVar1 == 0;
}



void fn_001c20d4(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  param_1 = (undefined4 *)*param_1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  fn_00110c80(param_1 + 0x1c);
  uVar2 = fn_00145b00(0x5b38,&DAT_00812c8c);
  param_1[1] = uVar2;
  fn_00301f50(uVar2,0x5b38);
  uVar2 = fn_00145b00(0x7a,&DAT_00812c8c);
  param_1[2] = uVar2;
  fn_00158f6c(uVar2,0x7a);
  piVar3 = (int *)fn_001d3a94(*param_1);
  param_1[0x7a] = piVar3;
  if (piVar3 == (int *)0x0) {
    uVar2 = fn_00145b00(0x185ef8,&DAT_00812c8c);
  }
  else {
    uVar2 = (**(code **)(*piVar3 + 8))(piVar3,0x185ef8,4);
  }
  param_1[3] = uVar2;
  fn_00301f50(uVar2,0x185ef8);
  iVar4 = fn_00145b00(0x3c0,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = fn_0026a584();
  }
  param_1[0x18] = uVar2;
  fn_001d0cdc(*(undefined4 *)*DAT_008977e4);
  fn_001d48e4(*(undefined4 *)*DAT_008977e4);
  iVar4 = *DAT_008977e4;
  uVar2 = *(undefined4 *)(iVar4 + 4);
  iVar7 = *(int *)(iVar4 + 8);
  iVar8 = *(int *)(iVar4 + 0xc);
  fn_006208d0(uVar2,iVar8);
  iVar4 = iVar8 + 0x180388;
  fn_0017821c(uVar2,iVar4,0x5b34);
  fn_0061a2d0(uVar2,iVar8);
  fn_0017821c(uVar2,iVar4,0x5b34);
  cVar1 = *(char *)(iVar8 + 0x180384);
  while (cVar1 == '\0') {
    *(undefined1 *)(iVar7 + 0x78) = 1;
    *(undefined1 *)(iVar7 + 0x79) = 1;
    fn_001c41d0(uVar2,iVar7,iVar8);
    fn_0017821c(uVar2,iVar4,0x5b34);
    fn_00158f6c(iVar7,0x7a);
    cVar1 = *(char *)(iVar8 + 0x180384);
  }
  if (cVar1 == '\x03') {
    uVar5 = *(uint *)(iVar8 + 0x180398);
    uVar6 = *(uint *)(iVar8 + 0x18039c);
    if (uVar5 < uVar6) {
      *(undefined1 *)(iVar8 + 0x180384) = 2;
    }
    if (uVar5 >= uVar6 && uVar5 != uVar6) {
      *(undefined1 *)(iVar8 + 0x180384) = 1;
    }
  }
  if (param_1[3] != 0) {
    fn_0011e284(param_1 + 0x1c);
  }
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))();
  }
  param_1[0x18] = 0;
  if (param_1[3] != 0) {
    if ((int *)param_1[0x7a] == (int *)0x0) {
      fn_002feef8(param_1[3]);
      param_1[3] = 0;
    }
    else {
      (**(code **)(*(int *)param_1[0x7a] + 0xc))();
    }
    param_1[3] = 0;
  }
  fn_002feef8(param_1[2]);
  param_1[2] = 0;
  fn_002feef8(param_1[1]);
  param_1[1] = 0;
  return;
}



undefined4 * fn_001c00cc(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  
  puVar1 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_007be328;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    pcVar2 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                  *(undefined4 *)(DAT_008977e0 + 0xa8));
    local_2c = fn_006f7a9c(DAT_008977e0);
    uVar3 = fn_00278a40();
    iVar4 = fn_006b7664(local_2c,uVar3);
    iVar5 = fn_00147e6c(iVar4,&DAT_008c6cd3,4);
    if (iVar5 == 0) {
      uVar6 = fn_00154ac8(0x45);
      uVar6 = uVar6 ^ 1;
      uVar7 = fn_006f7a9c(DAT_008977e0);
      uVar13 = fn_0012a25c(uVar7,uVar3);
      iVar5 = fn_00169c20((uint)uVar13 - 4,
                           (int)((ulonglong)uVar13 >> 0x20) - (uint)((uint)uVar13 < 4),0x12,0);
      iVar12 = 0;
      if (0 < iVar5) {
        do {
          pcVar11 = (char *)(iVar4 + 4 + iVar12 * 0x12);
          fn_001782b8(&local_40,pcVar11,6);
          local_3c = CONCAT22(*(undefined2 *)(pcVar11 + 6),(undefined2)local_3c);
          local_38 = *(undefined4 *)(pcVar11 + 8);
          local_34 = CONCAT31(((unsigned int)(local_34) >> 8) & 0xffffff,pcVar11[0xc]);
          local_34 = CONCAT22(*(undefined2 *)(pcVar11 + 0xe),(undefined2)local_34);
          local_30 = *(undefined2 *)(pcVar11 + 0x10);
          puVar10 = (undefined4 *)puVar1[5];
          if (puVar10 == (undefined4 *)puVar1[6]) {
            fn_0078eff8(puVar1 + 4,puVar10,&local_40);
          }
          else {
            puVar1[5] = (int)puVar10 + 0x12;
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = local_40;
              puVar10[1] = local_3c;
              puVar10[2] = local_38;
              puVar10[3] = local_34;
              *(undefined2 *)(puVar10 + 4) = local_30;
            }
          }
          iVar8 = (int)*pcVar11;
          if (iVar8 == *pcVar2) {
            puVar10 = (undefined4 *)puVar1[2];
            if (puVar10 == (undefined4 *)puVar1[3]) {
              fn_0078eff8(puVar1 + 1,puVar10,&local_40);
            }
            else {
              puVar1[2] = (int)puVar10 + 0x12;
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = local_40;
                puVar10[1] = local_3c;
                puVar10[2] = local_38;
                puVar10[3] = local_34;
                *(undefined2 *)(puVar10 + 4) = local_30;
              }
            }
          }
          else {
            if (uVar6 != 0) {
              iVar8 = (int)*(short *)(pcVar11 + 6);
            }
            if (uVar6 != 0 && iVar8 != 0x24) {
              uVar9 = fn_00154ac8();
              uVar6 = uVar6 & uVar9;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar5);
      }
      *(char *)(puVar1 + 7) = (char)uVar6;
    }
    fn_00279ae4(local_2c,uVar3);
  }
  return puVar1;
}


