#include "001bf554_001cb55c.h"



void fn_001cb55c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x24) * 0x14;
  iVar1 = fn_0017fde4(*(undefined4 *)(iVar2 + 0xc));
  iVar3 = 0;
  if (*(int *)(iVar2 + 0x10) != 0) {
    iVar3 = fn_0017fde4();
  }
  if (param_2 == 0) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar1);
    }
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar3);
    }
  }
  else {
    if (*(int *)(iVar1 + 0xc) == 0) {
      fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar1);
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) == 0)) {
      fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar3);
    }
  }
  fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24));
  return;
}



void fn_001caecc(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_r10;
  
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x3c);
  (**(code **)(*piVar3 + 8))(piVar3);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  uVar1 = fn_003b7324(*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 0x14 + 8));
  fn_00348dbc(piVar3,uVar1,uVar5);
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar6 = iVar2 >> 0x1f;
  if (iVar2 / 0x14 + iVar6 != iVar6) {
    do {
      iVar6 = *(int *)(param_1 + 0x18) + uVar4 * 0x14;
      if (uVar4 == param_2) {
        unaff_r10 = 1;
      }
      if (uVar4 != param_2) {
        unaff_r10 = 0;
      }
      iVar2 = fn_0017fde4(*(undefined4 *)(iVar6 + 0xc));
      iVar7 = 0;
      if (*(int *)(iVar6 + 0x10) != 0) {
        iVar7 = fn_0017fde4();
      }
      if (unaff_r10 == 0) {
        iVar6 = 0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          iVar6 = fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar2);
        }
        if (iVar7 != 0) {
          iVar6 = *(int *)(iVar7 + 0xc);
        }
        if (iVar7 != 0 && iVar6 != 0) {
          fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar7);
        }
      }
      else {
        if (*(int *)(iVar2 + 0xc) == 0) {
          fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar2);
        }
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0xc) == 0)) {
          fn_001969a4(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar7);
        }
      }
      fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x14));
  }
  return;
}



void fn_001cad48(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x3c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  iVar1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x14;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 0x14);
    iVar3 = fn_0017fde4(puVar5[3]);
    iVar6 = 0;
    if (puVar5[4] != 0) {
      iVar6 = fn_0017fde4();
    }
    iVar4 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      iVar4 = fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar3);
    }
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 0xc);
    }
    if (iVar6 != 0 && iVar4 != 0) {
      fn_00162d54(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24),iVar6);
    }
    fn_00162d44(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24));
    if ((int *)puVar5[4] != (int *)0x0) {
      (**(code **)(*(int *)puVar5[4] + 4))();
    }
    puVar5[4] = 0;
    if ((int *)puVar5[3] != (int *)0x0) {
      (**(code **)(*(int *)puVar5[3] + 4))();
    }
    puVar5[3] = 0;
    fn_0015cba8(*(undefined4 *)(param_1 + 0xc),puVar5[2]);
    fn_0015cba8(*(undefined4 *)(param_1 + 0xc),puVar5[1]);
    fn_0015cba8(*(undefined4 *)(param_1 + 0xc),*puVar5);
  }
  return;
}



void fn_001c055c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_008bf514;
  *(undefined1 *)((int)DAT_008bf514 + 0x12) = 1;
  *(undefined1 *)((int)piVar1 + 0x13) = 1;
  iVar3 = fn_001851bc();
  if (iVar3 != 0) {
    if (*(code **)(DAT_008bf51c + 0xe4dc) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x001c05a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_008bf51c + 0xe4dc))(piVar1,0);
    return;
  }
  iVar3 = fn_00191f08();
  if (iVar3 != 0) {
    iVar3 = fn_00192114();
    *(undefined1 *)(iVar3 + 0xc0) = 1;
    iVar3 = fn_00192114();
    *(undefined4 *)(iVar3 + 200) = 10;
  }
  piVar1[9] = 0;
  piVar1[10] = 0x1c09a8;
  piVar1[6] = 0;
  piVar1[8] = 0;
  piVar1[7] = 0;
  piVar1[3] = 0x1b3230;
  *(undefined1 *)(piVar1 + 4) = 0;
  while (piVar1[9] == 0) {
    piVar1[9] = 1;
    if (*(code **)(*piVar1 + 0xc) == (code *)0x0) {
      iVar3 = 3;
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0xc))();
    }
    piVar1[1] = iVar3;
    if (iVar3 == 10) {
      return;
    }
  }
  if (piVar1[9] != 1) {
    return;
  }
  iVar3 = piVar1[1];
  if (iVar3 == 10) {
    return;
  }
  iVar4 = piVar1[2];
  iVar2 = fn_00192114();
  *(undefined1 *)(iVar2 + 0xc0) = 0;
  iVar2 = fn_00192114();
  if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 200) = iVar3;
    iVar3 = fn_00192114();
    *(int *)(iVar3 + 0xcc) = iVar4;
  }
  if ((code *)piVar1[10] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001b32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)piVar1[10])(piVar1,piVar1[2]);
  return;
}



void fn_001bfd08(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char local_44;
  char local_43;
  char local_41;
  char local_40;
  char local_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  
  local_28 = param_1;
  local_24 = param_2;
  if (DAT_008bf5f5 == '\0') {
    DAT_008bf5f5 = '\x01';
    DAT_008e9a6c = 0;
    DAT_008e9a70 = 0;
    uVar5 = fn_00453ddc(0,0x40001b4);
    DAT_008e9a70 = (undefined4)((ulonglong)uVar5 >> 0x20);
    DAT_008e9a6c = (undefined4)uVar5;
    fn_00114248(&local_30);
    local_38 = local_30;
    uStack_34 = uStack_2c;
    fn_006d02f4(&local_48,&local_38);
    iVar1 = fn_00114150(local_48,(int)local_44,(int)local_43);
    DAT_008e9a7c = &DAT_00269ec3;
    DAT_008e9a74 = (int)local_3f + ((int)local_40 + ((int)local_41 + iVar1 * 0x18) * 0x3c) * 0x3c;
    DAT_008e9a78 = 0x5d588b65;
  }
  DAT_008bf5fc = 0;
  DAT_008bf5f8 = 1;
  DAT_008bf600 = 0;
  iVar1 = (-local_28 & 0x1fU) + 0xe0;
  local_24 = local_24 - iVar1;
  puVar2 = (undefined4 *)(local_28 + (-local_28 & 0x1fU));
  local_28 = iVar1 + local_28;
  fn_00158f6c(puVar2,0xe0);
  fn_00158f6c(local_28,local_24);
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x31] = 0;
  DAT_008bf604 = puVar2;
  fn_001b10e4(0);
  fn_001b1104(0);
  fn_001b14a4(0);
  fn_001afddc();
  fn_001afe3c(&local_28,&local_24);
  fn_001afb18(&local_28,&local_24);
  fn_001afdc8();
  iVar1 = local_24 + -0x20;
  iVar4 = (-local_28 & 0x1fU) + iVar1;
  local_24 = local_24 - iVar4;
  iVar3 = local_28 + (-local_28 & 0x1fU);
  local_28 = iVar4 + local_28;
  fn_00158f6c(iVar3);
  if (((DAT_008bf608 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008bf608), iVar4 != 0)) {
    DAT_008e9a10 = 0;
    DAT_008e9a14 = 0;
    DAT_008e9a18 = 0;
    DAT_008e9a1c = 0;
    DAT_008e9a20 = 0;
    DAT_008e9a24 = 0;
    DAT_008e9a0c = &DAT_00852678;
    DAT_008e9a60 = 0;
  }
  fn_00114128(&DAT_008e9a0c,iVar3,iVar1,0x100);
  *puVar2 = &DAT_008e9a0c;
  return;
}



int fn_001bf554(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  local_58 = 0;
  uStack_54 = 0x70041;
  local_50 = 0;
  uStack_4c = 0x70043;
  local_48 = 0;
  uStack_44 = 0xf0042;
  local_40 = 0;
  uStack_3c = 0xf0044;
  local_38 = 0;
  uStack_34 = 0xf0068;
  uStack_30 = 3;
  uStack_2c = 0xf0065;
  uStack_28 = 0;
  uStack_24 = 0xf0066;
  local_20 = 0;
  uStack_1c = 0xf0067;
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  local_58 = fn_001b85a0();
  VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  local_50 = fn_001b85a0();
  fVar3 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 2.0 / fVar3;
  if (ABS(fVar3) == 0.0) {
    iVar2 = 0;
LAB_001bf600:
    uVar1 = (uint)fVar3 & 0x7fffff | iVar2 << 0x17 | ((uint)fVar3 >> 0x1f) << 0x1e;
  }
  else {
    iVar2 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if (-1 < iVar2) goto LAB_001bf600;
    uVar1 = ((uint)fVar3 >> 0x1f) << 0x1e;
  }
  local_48 = uVar1 << 1;
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 2.0 / fVar3;
  if (ABS(fVar3) == 0.0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((uint)ABS(fVar3) >> 0x17) - 0x40;
    if (iVar2 < 0) {
      uVar1 = ((uint)fVar3 >> 0x1f) << 0x1e;
      goto LAB_001bf664;
    }
  }
  uVar1 = (uint)fVar3 & 0x7fffff | iVar2 << 0x17 | ((uint)fVar3 >> 0x1f) << 0x1e;
LAB_001bf664:
  local_40 = uVar1 << 1;
  local_20 = param_2 - 1U | (param_3 + -1) * 0x10000;
  fn_00301a9c(param_1,&local_58,0x40);
  return param_1 + 0x40;
}


