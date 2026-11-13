#include "00151170_00151974.h"



void fn_00151974(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00857ef0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0x2f;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}



void fn_00151944(undefined4 *param_1)

{
  *param_1 = &DAT_00857a40;
  return;
}



undefined4 fn_001517f0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    iVar1 = fn_00147e6c(param_2,&DAT_007d8570,4);
    if (iVar1 == 0) {
      iVar1 = *param_1;
      bVar6 = true;
      uVar4 = *(ushort *)(iVar1 + 6) & 0xff;
      if (((uVar4 != 0xff) && (uVar4 == 0xfe)) && (*(ushort *)(iVar1 + 6) >> 8 == 0xff)) {
        bVar6 = false;
      }
      *(bool *)(param_1 + 6) = bVar6;
      bVar5 = false;
      if (bVar6) {
        bVar5 = *(short *)(iVar1 + 0x10) == 0x100;
      }
      bVar6 = false;
      if (bVar5) {
        bVar6 = *(short *)(iVar1 + 4) == 0x14;
      }
      if (bVar6) {
        param_1[1] = param_2 + 0x14;
        iVar1 = fn_00147e6c(param_2 + 0x14,&DAT_007d8578,4);
        if (((iVar1 == 0) && (iVar1 = param_1[1], *(short *)(iVar1 + 4) == 0xc)) &&
           (uVar2 = (uint)*(ushort *)(iVar1 + 6), uVar2 < 0x4000)) {
          iVar3 = *(ushort *)(*param_1 + 4) + 0xc + param_2;
          if ((uVar2 != 0) && (iVar3 != 0)) {
            param_1[3] = uVar2;
            param_1[4] = iVar3;
          }
          iVar1 = (uint)*(ushort *)(*param_1 + 4) + (uint)*(ushort *)(iVar1 + 4) +
                  param_2 + (uint)*(ushort *)(iVar1 + 6) * 0x10;
          uVar2 = fn_00147e6c(iVar1,&DAT_007d8580,4);
          bVar6 = uVar2 == 0;
          if (bVar6) {
            uVar2 = (uint)*(ushort *)(iVar1 + 4);
          }
          if (bVar6 && uVar2 == 8) {
            param_1[2] = iVar1 + 8;
            iVar3 = *(int *)(*param_1 + 0xc);
            if ((iVar1 + 8) - *param_1 <= iVar3) {
              param_1[5] = iVar3 + param_2;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



void fn_0015158c(uint *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6,
                 uint *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  bVar10 = ~(*(byte *)(param_6 + 0x40) >> 2) & 1;
  fn_00166ad8(0x20000);
  uVar1 = fn_0015fa88();
  uVar9 = 0;
  uVar7 = 0;
  uVar11 = *param_7;
  uVar12 = (ulonglong)uVar11;
  if (param_4 != 0) {
    do {
      uVar2 = *(uint *)(param_3 + uVar7 * 4);
      uVar4 = (uVar2 & 0x1fffffff) >> 0x19;
      uVar11 = uVar2 & 0x1ffffff;
      iVar5 = *(int *)(param_5 + 0x20);
      if (uVar4 != 1) {
        uVar11 = uVar11 << 2;
      }
      if ((uVar2 >> 0x1d != 2) || (iVar3 = iVar5, iVar5 == 0)) {
        iVar3 = *(int *)(param_5 + (uVar2 >> 0x1d) * 4);
      }
      puVar6 = (uint *)(iVar3 + uVar11);
      switch(uVar4) {
      default:
        iVar3 = 0;
        break;
      case 1:
        iVar3 = 1;
        break;
      case 2:
      case 3:
        iVar3 = 2;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        iVar3 = 3;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        iVar3 = 4;
      }
      uVar11 = *(int *)(param_5 + iVar3 * 4) + *puVar6;
      switch(uVar4) {
      case 3:
        if (iVar5 != 0) {
          uVar11 = iVar5 + *puVar6;
        }
      case 0:
      case 1:
      case 2:
      case 4:
      case 9:
        *puVar6 = uVar11;
        break;
      case 5:
      case 10:
        uVar4 = fn_0015fa88();
        *puVar6 = uVar4 >> 3;
        goto joined_r0x00151724;
      case 6:
      case 0xb:
        iVar5 = fn_0015fa88();
        *puVar6 = iVar5 - uVar1;
joined_r0x00151724:
        if (bVar10 != 0) {
LAB_0015176c:
          uVar9 = uVar9 + 1;
          puVar6 = (uint *)(*param_7 + 3 & 0xfffffffc);
          *param_7 = (uint)(puVar6 + 1);
          *puVar6 = uVar11;
        }
        break;
      case 7:
      case 0xc:
        iVar5 = fn_0015fa88();
        *puVar6 = iVar5 - uVar1 | 0x80000000;
        goto joined_r0x00151768;
      case 8:
      case 0xd:
        iVar5 = fn_0015fa88();
        *puVar6 = iVar5 - uVar1;
joined_r0x00151768:
        if (bVar10 == 0) break;
        goto LAB_0015176c;
      case 0xe:
        *puVar6 = uVar1 >> 3;
        break;
      default:
        uVar8 = 0x80000080;
      }
      uVar11 = (uint)uVar12;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  if (bVar10 != 0) {
    param_4 = (uint)*(ushort *)(param_6 + 0x42);
  }
  if (bVar10 != 0 && param_4 != uVar9) {
    uVar8 = 0x80000080;
  }
  *param_1 = uVar11;
  param_1[1] = uVar8;
  return;
}



void fn_00151170(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int unaff_r5;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x30) + 0x18);
  iVar8 = *param_3;
  puVar9 = puVar7 + *(ushort *)(*(int *)(param_1 + 0x30) + 0x1c);
  piVar10 = param_2;
  for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    puVar6 = (undefined4 *)*puVar7;
    if (puVar6[1] != 0) {
      uVar1 = *param_2 + 3U & 0xfffffffc;
      if (uVar1 == 0) {
        unaff_r5 = 0;
      }
      *param_2 = uVar1 + 0x104;
      if (uVar1 != 0) {
        iVar2 = fn_0016fd14();
        iVar2 = fn_00101a1c(iVar2 + 0xcc,&LAB_0015d0bc,8,3);
        unaff_r5 = iVar2 + -0xcc;
        *(undefined1 *)(iVar2 + 0x18) = 0;
        *(undefined1 *)(iVar2 + 0x19) = 2;
        *(undefined1 *)(iVar2 + 0x1a) = 0xff;
        *(undefined1 *)(iVar2 + 0x1b) = 0xff;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined1 *)(iVar2 + 0x20) = 0;
        *(undefined1 *)(iVar2 + 0x21) = 2;
        *(undefined1 *)(iVar2 + 0x22) = 0xff;
        *(undefined1 *)(iVar2 + 0x23) = 0xff;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        *(undefined1 *)(iVar2 + 0x28) = 0;
        *(undefined1 *)(iVar2 + 0x29) = 2;
        *(undefined1 *)(iVar2 + 0x2a) = 0xff;
        *(undefined1 *)(iVar2 + 0x2b) = 0xff;
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined1 *)(iVar2 + 0x30) = 0;
        *(undefined1 *)(iVar2 + 0x31) = 2;
        *(undefined1 *)(iVar2 + 0x32) = 0xff;
        *(undefined1 *)(iVar2 + 0x33) = 0xff;
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
      iVar2 = fn_00176244(unaff_r5,*puVar6);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = *param_2 + 3U & 0xfffffffc;
        *param_2 = iVar2 + uVar1;
      }
      fn_0016eb40(unaff_r5,*puVar6,(int)*(short *)(puVar6 + 8),(int)*(short *)((int)puVar6 + 0x22),
                   uVar1,param_1,piVar10);
      if (*(short *)((int)puVar6 + 0x22) != -1) {
        *(undefined1 *)(unaff_r5 + 0xa0) = 3;
      }
      fn_001760dc(unaff_r5,unaff_r5 + 0xcc,(char *)&DAT_00151554);
      fn_001760dc(unaff_r5,unaff_r5 + 0xd4,(char *)&DAT_0015155c);
      fn_001760dc(unaff_r5,unaff_r5 + 0xdc,(char *)&DAT_00151564);
      fn_001760dc(unaff_r5,unaff_r5 + 0xe4,(char *)&DAT_0015156c);
      fn_001760dc(unaff_r5,unaff_r5 + 0xec,(char *)&DAT_00151574);
      fn_001760dc(unaff_r5,unaff_r5 + 0xf4,(char *)&DAT_0015157c);
      fn_001760dc(unaff_r5,unaff_r5 + 0xfc,(char *)&DAT_00151584);
      puVar3 = (undefined4 *)fn_00175e10(unaff_r5,iVar8);
      uVar1 = ((int)puVar3 - iVar8 & 0xfffffffcU) + 8;
      if (((uVar1 & 0xf) != 0) && (uVar1 = 4 - ((uVar1 & 0xf) >> 2), 0 < (int)uVar1)) {
        puVar5 = puVar3 + -1;
        if ((uVar1 & 1) != 0) {
          *puVar3 = 0;
          puVar5 = puVar3;
        }
        for (iVar2 = (int)uVar1 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar3 = puVar3 + uVar1;
      }
      iVar2 = fn_00189790(puVar3,1);
      puVar6[3] = iVar2 - iVar8 >> 2;
      puVar6[2] = iVar8;
      puVar3 = (undefined4 *)fn_00165d44(unaff_r5,iVar2,0);
      uVar1 = ((int)puVar3 - iVar2 & 0xfffffffcU) + 8;
      if (((uVar1 & 0xf) != 0) && (uVar1 = 4 - ((uVar1 & 0xf) >> 2), 0 < (int)uVar1)) {
        puVar5 = puVar3 + -1;
        if ((uVar1 & 1) != 0) {
          *puVar3 = 0;
          puVar5 = puVar3;
        }
        for (iVar8 = (int)uVar1 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar3 = puVar3 + uVar1;
      }
      iVar4 = fn_00189790(puVar3,1);
      puVar6[5] = iVar4 - iVar2 >> 2;
      puVar6[4] = iVar2;
      puVar3 = (undefined4 *)fn_00165d44(unaff_r5,iVar4,1);
      uVar1 = ((int)puVar3 - iVar4 & 0xfffffffcU) + 8;
      if (((uVar1 & 0xf) != 0) && (uVar1 = 4 - ((uVar1 & 0xf) >> 2), 0 < (int)uVar1)) {
        puVar5 = puVar3 + -1;
        if ((uVar1 & 1) != 0) {
          *puVar3 = 0;
          puVar5 = puVar3;
        }
        for (iVar8 = (int)uVar1 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar3 = puVar3 + uVar1;
      }
      iVar8 = fn_00189790(puVar3,1);
      iVar2 = iVar8 - iVar4 >> 2;
      puVar6[7] = iVar2;
      puVar6[6] = iVar4;
      if (param_4 != 0) {
        iVar2 = param_5;
      }
      if (param_4 != 0 && iVar2 != 0) {
        puVar6[2] = (puVar6[2] - param_4 & 0xfffffffcU) + param_5;
        puVar6[4] = (puVar6[4] - param_4 & 0xfffffffcU) + param_5;
        puVar6[6] = param_5 + (puVar6[6] - param_4 & 0xfffffffcU);
      }
      puVar6[9] = unaff_r5;
    }
  }
  *param_3 = iVar8;
  return;
}


