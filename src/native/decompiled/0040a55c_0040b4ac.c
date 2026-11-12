#include "0040a55c_0040b4ac.h"



void fn_0040b298(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 local_1c;
  float fStack_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x220) == param_2) {
    iVar4 = fn_003631a0(param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x18) = 0;
      fn_00689824(param_1);
      *(undefined1 *)(param_1 + 0xfc) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0xf8) != 0x2b) {
      fn_0040b4ac(param_1,param_2,1);
      return;
    }
    iVar4 = fn_006ba284(param_1);
    if (iVar4 < 1) {
      iVar5 = param_1 + param_2 * 4;
      iVar4 = fn_002dd168(*(undefined4 *)(param_1 + 0xf4),(int)*(short *)(param_1 + 0xf8),
                           *(undefined4 *)(iVar5 + 0x100));
      if (iVar4 == 0) {
        fn_00409ca8(param_1,param_2);
        return;
      }
      fn_00689828(param_1,0);
      iVar4 = *(int *)(iVar5 + 0x100);
      sVar1 = fn_00246824(iVar4);
      uVar2 = sVar1 - (ushort)*(byte *)(iVar4 + 0x2e);
      uVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(param_1 + 0xf8));
      *(int *)(param_1 + 0x22c) = param_2;
      fStack_18 = (float)VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
      if (uVar2 <= uVar3) {
        uVar3 = uVar2;
      }
      fStack_18 = fStack_18 * -18.0;
      local_1c = 0;
      local_14 = 0;
      fn_00327a24(*(undefined4 *)(param_1 + 0x224),0,uVar3,0,&local_1c);
      *(undefined1 *)(param_1 + 0x228) = 1;
      return;
    }
  }
  return;
}



void fn_0040b4ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_002dd168(param_1[0x3d],(int)(short)param_1[0x3e],param_1[param_2 + 0x40]);
  if (iVar1 != 0) {
    fn_0017821c(param_1 + 0x49,param_1[param_2 + 0x40],0xf0);
    local_20 = param_3;
    iVar1 = fn_002dd494(param_1[0x3d],param_1[param_2 + 0x40],(int)(short)param_1[0x3e],0);
    if (iVar1 != -1) {
      fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_1[0x3e],
                   (int)(short)param_3,1);
      fn_0036308c(param_1,0);
      fn_0040ae30(param_1,param_2,param_1[param_2 + 0x40]);
      iVar2 = fn_00660ec0((int)(short)param_1[0x3e]);
      if (iVar2 == 0x23) {
        fn_00231074(&local_20,param_1[param_2 + 0x40],0);
        fn_0015b0dc(local_20);
        fn_00231d50(iVar1);
        fn_0015b0dc();
        uVar3 = fn_0022f584((char *)&DAT_0040a8f4,0);
        (**(code **)(*param_1 + 0x140))(param_1,uVar3,3);
        fn_001588d4(&local_20);
        *(undefined1 *)(param_1 + 0x3f) = 3;
      }
      else {
        fn_0040a1c0(param_1,iVar1,param_1[0x3e],param_1[param_2 + 0x40]);
        if (iVar2 == 0x12) {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  fn_00409ca8(param_1,param_2);
  return;
}



void fn_0040b268(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x238,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0040b754(iVar1,param_1);
  return;
}



void fn_0040b23c(int param_1)

{
  fn_00363128();
  *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x18) = 0;
  fn_00689824(param_1);
  *(undefined1 *)(param_1 + 0xfc) = 2;
  return;
}



void fn_0040aa50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_20;
  
  iVar4 = 0;
  iVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_20 = param_4;
  iVar1 = fn_006b83e4(uVar6);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b0a0(uVar6,iVar5);
      *(undefined4 *)(param_1 + iVar4 * 4 + 0x100) = uVar2;
      fn_00231074(&local_20,uVar2,0);
      fn_0031b78c(param_1,iVar4,1,local_20);
      uVar3 = fn_00230a84(0,0);
      fn_0031b78c(param_1,iVar4,7,uVar3);
      fn_001588d4(&local_20);
      fn_0040ae30(param_1,iVar4,uVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = fn_006b83e4(uVar6);
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  iVar1 = fn_006b84b0(uVar6);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b348(uVar6,iVar5);
      *(undefined4 *)(param_1 + iVar4 * 4 + 0x100) = uVar2;
      fn_00231074(&local_20,uVar2,0);
      fn_0031b78c(param_1,iVar4,1,local_20);
      uVar3 = fn_00230a84(1,0);
      fn_0031b78c(param_1,iVar4,7,uVar3);
      fn_001588d4(&local_20);
      fn_0040ae30(param_1,iVar4,uVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = fn_006b84b0(uVar6);
    } while (iVar5 < iVar1);
  }
  uVar6 = fn_0022f584((char *)&DAT_0040abf0,0);
  fn_0031b78c(param_1,iVar4,0,uVar6);
  return;
}



void fn_0040a890(int *param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00231074(&local_10,param_3,0);
  fn_0015b0dc(local_10);
  fn_00231d50((int)param_2);
  fn_0015b0dc();
  uVar1 = fn_0022f584((char *)&DAT_0040a8f4,0);
  (**(code **)(*param_1 + 0x140))(param_1,uVar1,3);
  fn_001588d4(&local_10);
  return;
}



void fn_0040a55c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int local_58;
  int local_54 [12];
  
  uVar7 = *(uint *)(param_1 + 0x214);
  uVar12 = *(uint *)(param_1 + 0x218);
  if (uVar7 != uVar12) {
    uVar4 = uVar7;
    if (uVar12 <= uVar7) {
      do {
        uVar4 = uVar4 + 8;
      } while (uVar4 != uVar12);
    }
    *(uint *)(param_1 + 0x218) = uVar12 - (uVar12 - uVar7 & 0xfffffff8);
  }
  local_54[0] = 0xc;
  local_54[1] = 0;
  local_54[2] = 0xd;
  local_54[3] = 0;
  local_54[4] = 0xe;
  local_54[5] = 0;
  local_54[6] = 0xf;
  iVar5 = 0;
  local_54[7] = 0;
  local_54[8] = 0x10;
  local_54[9] = 0;
  local_54[10] = 0x11;
  do {
    piVar1 = local_54 + iVar5 * 2 + -1;
    switch((char)local_54[iVar5 * 2]) {
    case '\f':
      *piVar1 = (int)*(short *)(param_1 + 0x1a8) - (int)*(short *)(param_2 + 0x84);
      break;
    case '\r':
      *piVar1 = (int)*(short *)(param_1 + 0x1aa) - (int)*(short *)(param_2 + 0x86);
      break;
    case '\x0e':
      *piVar1 = (int)*(short *)(param_1 + 0x1ac) - (int)*(short *)(param_2 + 0x88);
      break;
    case '\x0f':
      *piVar1 = (int)*(short *)(param_1 + 0x1ae) - (int)*(short *)(param_2 + 0x8a);
      break;
    case '\x10':
      *piVar1 = (int)*(short *)(param_1 + 0x1b0) - (int)*(short *)(param_2 + 0x8c);
      break;
    case '\x11':
      *piVar1 = (int)*(short *)(param_1 + 0x1b2) - (int)*(short *)(param_2 + 0x8e);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    piVar1 = local_54 + iVar5 * 2 + -1;
    if (0 < *piVar1) {
      piVar9 = *(int **)(param_1 + 0x218);
      puVar11 = (uint *)(param_1 + 0x214);
      if (piVar9 == *(int **)(param_1 + 0x21c)) {
        uVar7 = (int)((int)piVar9 - *puVar11) >> 3;
        if (uVar7 < (uint)((int)((int)*(int **)(param_1 + 0x21c) - *puVar11) >> 3)) {
          *(int **)(param_1 + 0x218) = piVar9 + 2;
          if (piVar9 != (int *)0x0) {
            *piVar9 = piVar9[-2];
            piVar9[1] = piVar9[-1];
          }
          piVar3 = piVar9 + -2;
          piVar10 = piVar9;
          if (piVar9 < piVar3) {
            iVar6 = (int)piVar3 - (int)piVar9;
            if (0 < iVar6) {
              if (iVar6 * 0x10000000 < 0) {
                piVar3 = piVar9 + -4;
                piVar10 = piVar9 + -2;
                *piVar10 = *piVar3;
                piVar9[-1] = piVar9[-3];
              }
              for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
                iVar13 = piVar3[-1];
                piVar10[-2] = piVar3[-2];
                piVar10[-1] = iVar13;
                iVar13 = piVar3[-3];
                piVar10[-4] = piVar3[-4];
                piVar10[-3] = iVar13;
                piVar3 = piVar3 + -4;
                piVar10 = piVar10 + -4;
              }
            }
          }
          else {
            while (piVar9 != piVar3) {
              iVar6 = piVar3[-1];
              piVar10[-2] = piVar3[-2];
              piVar10[-1] = iVar6;
              piVar10 = piVar10 + -2;
              piVar3 = piVar3 + -2;
            }
          }
          iVar6 = local_54[iVar5 * 2];
          *piVar9 = *piVar1;
          piVar9[1] = iVar6;
        }
        else {
          uVar12 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
          if (uVar12 < uVar7 + 0x20) {
            uVar12 = uVar7 + 0x20;
          }
          piVar2 = (int *)fn_00100fc6(uVar12 << 3,0);
          piVar10 = piVar2;
          for (piVar3 = (int *)*puVar11; piVar3 != piVar9; piVar3 = piVar3 + 2) {
            if (piVar10 != (int *)0x0) {
              iVar6 = piVar3[1];
              *piVar10 = *piVar3;
              piVar10[1] = iVar6;
            }
            piVar10 = piVar10 + 2;
          }
          piVar3 = (int *)(((int)piVar9 - *puVar11 & 0xfffffff8) + (int)piVar2);
          if (piVar3 != (int *)0x0) {
            iVar6 = local_54[iVar5 * 2];
            *piVar3 = *piVar1;
            piVar3[1] = iVar6;
          }
          piVar3 = *(int **)(param_1 + 0x218);
          piVar1 = (int *)(((int)piVar9 - *puVar11 & 0xfffffff8) + (int)piVar2);
          for (; piVar9 != piVar3; piVar9 = piVar9 + 2) {
            piVar10 = piVar1 + 2;
            if (piVar10 != (int *)0x0) {
              iVar6 = piVar9[1];
              *piVar10 = *piVar9;
              piVar1[3] = iVar6;
            }
            piVar1 = piVar10;
          }
          uVar4 = *(uint *)(param_1 + 0x218);
          uVar8 = *puVar11;
          uVar7 = uVar8;
          if (uVar4 <= uVar8) {
            for (; uVar7 != uVar4; uVar7 = uVar7 + 8) {
            }
          }
          fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0x21c) - uVar8) >> 3);
          *(int **)(param_1 + 0x21c) = piVar2 + uVar12 * 2;
          *(int **)(param_1 + 0x218) = piVar2 + ((int)(uVar4 - uVar8) >> 3) * 2 + 2;
          *puVar11 = (uint)piVar2;
        }
      }
      else {
        *(int **)(param_1 + 0x218) = piVar9 + 2;
        if (piVar9 != (int *)0x0) {
          iVar6 = local_54[iVar5 * 2];
          *piVar9 = *piVar1;
          piVar9[1] = iVar6;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  return;
}


