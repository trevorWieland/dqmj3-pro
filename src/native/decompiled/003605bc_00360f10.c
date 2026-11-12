#include "003605bc_00360f10.h"



void fn_00360f10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar1 = iVar3;
  if (iVar3 != iVar2) {
    do {
      fn_0035dac8(iVar1);
      iVar1 = iVar1 + 0x2c;
    } while (iVar1 != iVar2);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + ((iVar2 - iVar3) / 0x2c) * -0x2c;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = iVar3;
  if (iVar3 != iVar2) {
    do {
      fn_0035dac8(iVar1);
      iVar1 = iVar1 + 0x28;
    } while (iVar1 != iVar2);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar2 - iVar3) / 0x28) * -0x28;
  }
  iVar1 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar1 != 0) {
    fn_0033d350(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10));
  }
  fn_006f7a70(DAT_008977e0);
  fn_00424a1c();
  fn_006f7a9c(DAT_008977e0);
  fn_00278a80();
  fn_006f7a9c(DAT_008977e0);
  fn_00279878();
  fn_006f7a70(DAT_008977e0);
  fn_002ffc58();
  fn_006f7a9c(DAT_008977e0);
  fn_002796a4();
  return;
}



void fn_00360bac(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int local_80;
  int local_7c;
  int iStack_78;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  float local_58;
  int local_54;
  int local_50;
  float local_4c;
  int local_48;
  
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  uVar2 = (**(code **)(**(int **)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x10))();
  iVar3 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(iVar3 + 0x50) + 0x40))(*(int **)(iVar3 + 0x50),&local_68,uVar2);
  iVar11 = local_64;
  iVar3 = local_68;
  if (local_68 != local_64) {
    iVar10 = local_64 - local_68;
    fn_007a8258(local_68,local_64,iVar10 / 0x28,fn_00615b24);
    if (iVar10 < 0x281) {
      fn_007a2b20(iVar3,iVar11,fn_00615b24);
    }
    else {
      fn_007a2b20(iVar3,iVar3 + 0x280,fn_00615b24);
      for (iVar3 = iVar3 + 0x280; iVar3 != iVar11; iVar3 = iVar3 + 0x28) {
        iVar4 = fn_001c6ba4(&local_58,iVar3);
        iVar5 = fn_00615b24();
        iVar9 = iVar3 + -0x28;
        iVar10 = iVar3;
        while (iVar1 = iVar9, iVar5 != 0) {
          fn_003007d0(iVar10,iVar1);
          uVar7 = *(undefined4 *)(iVar1 + 8);
          uVar8 = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar1 + 4);
          *(undefined4 *)(iVar10 + 8) = uVar7;
          *(undefined4 *)(iVar10 + 0xc) = uVar8;
          uVar7 = *(undefined4 *)(iVar1 + 0x14);
          uVar8 = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar10 + 0x14) = uVar7;
          *(undefined4 *)(iVar10 + 0x18) = uVar8;
          uVar7 = *(undefined4 *)(iVar1 + 0x20);
          uVar8 = *(undefined4 *)(iVar1 + 0x24);
          *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)(iVar10 + 0x20) = uVar7;
          *(undefined4 *)(iVar10 + 0x24) = uVar8;
          iVar5 = fn_00615b24(iVar4,iVar1 + -0x28);
          iVar9 = iVar1 + -0x28;
          iVar10 = iVar1;
        }
        fn_003007d0(iVar10,iVar4);
        uVar7 = *(undefined4 *)(iVar4 + 8);
        uVar8 = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(iVar10 + 8) = uVar7;
        *(undefined4 *)(iVar10 + 0xc) = uVar8;
        uVar7 = *(undefined4 *)(iVar4 + 0x14);
        uVar8 = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar10 + 0x14) = uVar7;
        *(undefined4 *)(iVar10 + 0x18) = uVar8;
        uVar7 = *(undefined4 *)(iVar4 + 0x20);
        uVar8 = *(undefined4 *)(iVar4 + 0x24);
        *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(iVar10 + 0x20) = uVar7;
        *(undefined4 *)(iVar10 + 0x24) = uVar8;
        fn_002fedf4(&local_58);
      }
    }
  }
  iVar11 = 0;
  iVar3 = (local_64 - local_68) / 0x28;
  if (0 < iVar3) {
    uVar12 = 0x40490fdb;
    do {
      if (iVar11 < iVar3 + -1) {
        iVar10 = iVar11 + 1;
      }
      else {
        iVar10 = 0;
      }
      iVar9 = local_68 + iVar11 * 0x28;
      iVar4 = local_68 + iVar10 * 0x28;
      iVar10 = fn_00145b00(0x1c8,&DAT_00812c8c);
      piVar6 = (int *)0x0;
      if (iVar10 != 0) {
        piVar6 = (int *)fn_00379bb4(iVar10,iVar9 + 4,iVar4 + 4);
      }
      uVar7 = fn_006f7a70(DAT_008977e0);
      fn_002fe310(uVar7,piVar6,0xffffffff);
      local_80 = piVar6[8];
      local_7c = piVar6[9];
      iStack_78 = piVar6[10];
      local_5c = piVar6[0xb];
      local_58 = (float)piVar6[0xc];
      local_54 = piVar6[0xd];
      local_50 = *(int *)(iVar4 + 4);
      local_48 = *(undefined4 *)(iVar4 + 0xc);
      local_4c = (float)local_7c;
      (**(code **)(*piVar6 + 0x10))(piVar6);
      local_4c = local_58 + (float)uVar12;
      local_50 = local_5c;
      local_48 = local_54;
      (**(code **)(*piVar6 + 0x14))(piVar6,&local_50);
      (**(code **)(*piVar6 + 0x10))(piVar6,&local_80);
      (**(code **)(*piVar6 + 0x14))(piVar6,&local_5c);
      fn_0033cf3c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),piVar6);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  fn_00789b34(&local_68);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00360738) */

void fn_003605bc(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  uint local_38;
  undefined4 *local_34;
  uint local_30 [2];
  int local_28;
  undefined1 local_24 [4];
  
  if (((DAT_008918cc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008918cc), iVar3 != 0)) {
    DAT_008918c8 = 9;
  }
  uVar4 = fn_002febd8(param_4);
  if (uVar4 == 0) {
    local_34 = &DAT_008f9cf8;
  }
  else {
    puVar6 = local_30;
    if (0x20 < uVar4) {
      puVar6 = &local_38;
    }
    local_38 = uVar4;
    local_30[0] = 0x20;
    local_34 = (undefined4 *)fn_002ff0c8(&local_34,*puVar6,uVar4);
  }
  local_34 = local_34 + 3;
  fn_00301a9c(local_34,param_4,uVar4);
  uVar4 = fn_002febd8();
  if (0xfffffff1 < uVar4) {
    fn_002ff628(8,&DAT_008c75fa,&DAT_008c75fa,uVar4,0xfffffff1);
  }
  uVar5 = local_34[-1];
  bVar8 = uVar5 <= uVar4;
  if (uVar4 <= uVar5) {
    uVar5 = uVar5 - uVar4;
    bVar8 = 0xfffffffe < uVar5;
  }
  if (!bVar8) {
    uVar5 = uVar5 + 1;
    do {
      uVar1 = uVar5;
      if (uVar1 == 0) goto LAB_00360748;
      iVar3 = fn_001010c8((int)local_34 + (uVar1 - 1),&DAT_00360930,uVar4);
      uVar5 = uVar1 - 1;
    } while (iVar3 != 0);
    if (uVar1 != 0) {
      if ((uint)local_34[-1] < uVar5) {
        fn_002ff628(9,&DAT_008c7613,&DAT_008c7613,uVar5,local_34[-1]);
      }
      local_24[0] = 0;
      local_38 = 0;
      fn_0010217c(&local_34,uVar5,local_34[-1] - uVar5,local_24,0,0);
    }
  }
LAB_00360748:
  puVar2 = local_34;
  iVar3 = 0;
  local_28 = 0;
  if (param_2 == 0xc) {
    uVar4 = fn_002febd8(local_34);
    if (DAT_008918c8 < uVar4) {
      iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
    }
    VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    fn_003af024(param_3);
  }
  else if (param_2 < 0xd) {
    switch(param_2) {
    case 2:
      uVar4 = fn_002febd8(local_34);
      if (DAT_008918c8 < uVar4) {
        iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
      }
      fn_003d76c0(param_3,iVar3);
      break;
    case 6:
      uVar4 = fn_002febd8(local_34);
      if (DAT_008918c8 < uVar4) {
        iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
      }
      param_3[0x68] = iVar3;
      break;
    case 7:
      uVar4 = fn_002febd8(local_34);
      if (DAT_008918c8 < uVar4) {
        iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
      }
      fn_003ae894(param_3,iVar3);
      uVar7 = 0;
      if ((local_28 != 0) && (uVar4 = fn_002febd8(), 3 < uVar4)) {
        uVar7 = fn_00101c78(local_28 + 1,&local_28,10);
      }
      fn_003ae8a4(param_3,uVar7);
      break;
    case 8:
    case 9:
      uVar4 = fn_002febd8(local_34);
      if (DAT_008918c8 < uVar4) {
        iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
      }
      fn_00361e1c(param_3,iVar3);
      uVar7 = 0;
      if ((local_28 != 0) && (uVar4 = fn_002febd8(), 3 < uVar4)) {
        uVar7 = fn_00101c78(local_28 + 1,&local_28,10);
      }
      fn_00361e2c(param_3,uVar7);
      break;
    case 10:
    case 0xb:
      uVar4 = fn_002febd8(local_34);
      if (DAT_008918c8 < uVar4) {
        iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
      }
      iVar3 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      param_3[0x68] = iVar3;
    }
  }
  else {
    if (param_2 != 0x1d) {
      if (param_2 < 0x1e) {
        if (param_2 == 0x12) {
          uVar4 = fn_002febd8(local_34);
          if (DAT_008918c8 < uVar4) {
            iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
          }
          iVar3 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          param_3[0x69] = iVar3;
        }
        else if (param_2 == 0x15) {
          uVar4 = fn_002febd8(local_34);
          if (DAT_008918c8 < uVar4) {
            iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
          }
          VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          (**(code **)(*param_3 + 0x138))(param_3);
        }
        else if (param_2 == 0x17) {
          uVar4 = fn_002febd8(local_34);
          if (DAT_008918c8 < uVar4) {
            iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
          }
          param_3[0x67] = iVar3;
        }
        goto switchD_00360768_caseD_3;
      }
      if (param_2 != 0x1e) {
        if (param_2 == 0x1f) {
          uVar4 = fn_002febd8(local_34);
          if (DAT_008918c8 < uVar4) {
            iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
          }
          iVar3 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
          param_3[0x69] = iVar3;
        }
        goto switchD_00360768_caseD_3;
      }
    }
    uVar4 = fn_002febd8(local_34);
    if (DAT_008918c8 < uVar4) {
      iVar3 = fn_00101c78((uint)DAT_008918c8 + (int)puVar2,&local_28,10);
    }
    fn_00566c30(param_3,iVar3);
    uVar7 = 0;
    if ((local_28 != 0) && (uVar4 = fn_002febd8(), 3 < uVar4)) {
      uVar7 = fn_00101c78(local_28 + 1,&local_28,10);
    }
    fn_00566ef8(param_3,uVar7);
  }
switchD_00360768_caseD_3:
  fn_002fedf4(&local_34);
  return;
}


