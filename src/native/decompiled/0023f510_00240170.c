#include "0023f510_00240170.h"



void fn_00240170(int param_1)

{
  fn_00699014(DAT_008977e0,0);
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



bool fn_00240088(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = uVar3;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  if ((iVar4 == *(int *)(param_1 + 0x1c)) &&
     (((iVar4 == 0 && (((*(byte *)(param_1 + 0x18) | uVar1) & 1) == 0)) || (uVar3 == uVar1)))) {
    iVar4 = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  if ((*(int *)(param_1 + 0xc) != 0) ||
     ((*(uint *)(param_1 + 0x10) & 1) != 0 && *(uint *)(param_1 + 0x10) != 0)) {
    pcVar2 = *(code **)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x10) >> 1)));
    }
    (*pcVar2)();
  }
  fn_003b6608(*(undefined4 *)(param_1 + 0x2c));
  fn_003b6738(*(undefined4 *)(param_1 + 0x2c));
  return *(char *)(param_1 + 4) == '\x02';
}



void fn_0023fd64(int param_1)

{
  fn_00698fb8(DAT_008977e0,1);
  fn_003b674c(*(undefined4 *)(param_1 + 0x2c),0x80eb);
  return;
}



undefined4 * fn_0023fc7c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00693f00();
  *puVar1 = &DAT_0081d1a4;
  puVar1[0x5d] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5f] = 0;
  puVar1[0x60] = 0;
  puVar1[0x61] = 0;
  puVar1[0x62] = 0;
  puVar1[100] = 10;
  uVar4 = 0x411ccccd;
  puVar1[99] = 0;
  puVar1[0x65] = 0x411ccccd;
  puVar1[0x66] = 0;
  uVar3 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  fn_006afb84(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar3);
  puVar1[0x66] = uVar4;
  iVar2 = fn_00211f10(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar3);
  if (iVar2 != 0) {
    puVar1[0x66] = 0xc5bb8000;
  }
  DAT_00891924 = DAT_00891924 + 1;
  return puVar1;
}



void fn_0023faa4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_2f8 [720];
  float local_28;
  float local_24;
  float local_20;
  
  fn_00693a14();
  fVar7 = 0.0;
  if ((float)param_1[0x65] == 0.0) {
    return;
  }
  fVar4 = (float)VectorSignedToFloat(param_1[100],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  fVar5 = (float)param_1[0x65] * 64.0 * 0.0011111113;
  fVar6 = (float)VectorSignedToFloat(param_1[99],(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  local_28 = (float)param_1[8] + ((float)param_1[0x60] - (float)param_1[0x5d]) / fVar4;
  local_20 = (float)param_1[10] + ((float)param_1[0x62] - (float)param_1[0x5f]) / fVar4;
  local_24 = ((((float)param_1[0x61] - (float)param_1[0x5e]) / fVar4 + fVar5 * fVar4 * 0.5) * fVar6
             - fVar5 * fVar6 * fVar6 * 0.5) + (float)param_1[0x5e];
  fn_00101a1c(auStack_2f8,&DAT_005f4c78,0x48,10);
  if (fVar6 != fVar7) {
    piVar1 = (int *)fn_006f7388(DAT_008977e0);
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,7,auStack_2f8,10,param_1 + 8,&local_28,0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0xd0))(param_1,param_1 + 8);
      param_1[0x65] = (int)fVar7;
      param_1[99] = 0;
      goto LAB_0023fc10;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  param_1[99] = param_1[99] + 1;
LAB_0023fc10:
  if (local_24 < (float)param_1[0x66]) {
    param_1[0x65] = (int)fVar7;
    param_1[99] = 0;
    (**(code **)(*param_1 + 0x54))(param_1,0);
    iVar2 = param_1[0x4f];
    uVar3 = fn_006f7a70(DAT_008977e0);
    fn_002ff3b4(uVar3,iVar2);
  }
  return;
}



bool fn_0023fa88(void)

{
  return DAT_00891924 < 2;
}



undefined4 * fn_0023f74c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  *param_1 = &DAT_0081d194;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  do {
    puVar2 = (undefined4 *)fn_00145b00(0x1c,&DAT_00812c8c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined1 *)((int)puVar2 + 0x19) = 1;
    }
    puVar10 = (undefined4 *)param_1[2];
    puVar11 = param_1 + 1;
    if (puVar10 == (undefined4 *)param_1[3]) {
      uVar1 = (int)((int)puVar10 - *puVar11) >> 2;
      if (uVar1 < (uint)((int)((int)param_1[3] - *puVar11) >> 2)) {
        param_1[2] = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = puVar10[-1];
        }
        puVar7 = puVar10 + -1;
        puVar4 = puVar10;
        if (puVar10 < puVar7) {
          if (0 < (int)puVar7 - (int)puVar10) {
            iVar8 = (int)puVar7 - (int)puVar10 >> 2;
            iVar5 = 0;
            do {
              iVar8 = iVar8 + -1;
              puVar10[iVar5 + -1] = puVar7[iVar5 + -1];
              iVar5 = iVar5 + -1;
            } while (iVar8 != 0);
          }
        }
        else {
          while (puVar10 != puVar7) {
            puVar7 = puVar7 + -1;
            puVar4[-1] = *puVar7;
            puVar4 = puVar4 + -1;
          }
        }
        *puVar10 = puVar2;
      }
      else {
        uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        uVar13 = uVar1 + 0x20;
        if (uVar1 + 0x20 <= uVar6) {
          uVar13 = uVar6;
        }
        puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
        puVar4 = puVar3;
        for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar10; puVar7 = puVar7 + 1) {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar7;
          }
          puVar4 = puVar4 + 1;
        }
        puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = puVar2;
        }
        puVar7 = (undefined4 *)param_1[2];
        puVar2 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
        for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
          puVar2 = puVar2 + 1;
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar10;
          }
        }
        uVar6 = param_1[2];
        uVar9 = *puVar11;
        uVar1 = uVar9;
        if (uVar6 <= uVar9) {
          for (; uVar1 != uVar6; uVar1 = uVar1 + 4) {
          }
        }
        fn_001008c4(uVar9,(int)(param_1[3] - uVar9) >> 2,0);
        param_1[3] = puVar3 + uVar13;
        param_1[2] = puVar3 + ((int)(uVar6 - uVar9) >> 2) + 1;
        *puVar11 = (uint)puVar3;
      }
    }
    else {
      param_1[2] = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar2;
      }
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 4);
  return param_1;
}



undefined1 fn_0023f510(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_73;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5f;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4b;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = **(int **)(iVar1 + 4);
  local_6c = 0;
  local_68 = 0;
  local_70 = &DAT_00828bc0;
  local_64 = 0;
  local_5f = 1;
  fn_0035c408(iVar3);
  *(int *)(iVar3 + 0xc) = iVar3;
  fn_0035cca8(&local_34,&local_70,iVar3 + 0xc);
  local_28 = local_34;
  uStack_24 = uStack_30;
  uStack_20 = uStack_2c;
  fn_006f94f4(iVar3 + 0x10,&local_28);
  iVar3 = *(int *)(*(int *)(iVar1 + 4) + 4);
  local_58 = 0;
  local_54 = 0;
  local_5c = &DAT_00828bd8;
  local_50 = 0;
  local_4b = 1;
  fn_0035c408(iVar3);
  *(int *)(iVar3 + 0xc) = iVar3;
  fn_0035cca8(&local_34,&local_5c,iVar3 + 0xc);
  local_28 = local_34;
  uStack_24 = uStack_30;
  uStack_20 = uStack_2c;
  fn_006f94f4(iVar3 + 0x10,&local_28);
  iVar3 = *(int *)(*(int *)(iVar1 + 4) + 8);
  local_80 = 0;
  local_7c = 0;
  local_84 = &DAT_00828bf0;
  local_78 = 0;
  local_73 = 1;
  fn_0035c408(iVar3);
  *(int *)(iVar3 + 0xc) = iVar3;
  fn_0035cca8(&local_34,&local_84,iVar3 + 0xc);
  local_28 = local_34;
  uStack_24 = uStack_30;
  uStack_20 = uStack_2c;
  fn_006f94f4(iVar3 + 0x10,&local_28);
  iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0xc);
  local_44 = 0;
  local_40 = 0;
  local_48 = &DAT_00828c08;
  local_3c = 0;
  local_37 = 1;
  fn_0035c408(iVar3);
  *(int *)(iVar3 + 0xc) = iVar3;
  fn_0035cca8(&local_34,&local_48,iVar3 + 0xc);
  local_28 = local_34;
  uStack_24 = uStack_30;
  uStack_20 = uStack_2c;
  fn_006f94f4(iVar3 + 0x10,&local_28);
  uVar2 = 1;
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(iVar1 + 4);
  if (1 < (uint)(*(int *)(iVar1 + 8) - (int)*(undefined4 **)(iVar1 + 4) >> 2)) {
    do {
      iVar4 = *(int *)(iVar1 + 0x10);
      iVar3 = *(int *)(*(int *)(iVar1 + 4) + uVar2 * 4);
      if (*(char *)(iVar4 + 0x18) == *(char *)(iVar3 + 0x18)) {
        if (*(char *)(iVar4 + 0x18) == '\0') {
          if (*(int *)(iVar4 + 0x14) < *(int *)(iVar3 + 0x14)) goto LAB_0023f71c;
        }
        else if (*(int *)(iVar3 + 0x10) < *(int *)(iVar4 + 0x10)) {
LAB_0023f71c:
          *(int *)(iVar1 + 0x10) = iVar3;
        }
      }
      else if (*(char *)(iVar3 + 0x18) != '\0') goto LAB_0023f71c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2));
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x19);
}


