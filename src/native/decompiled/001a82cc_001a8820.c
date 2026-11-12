#include "001a82cc_001a8820.h"



void fn_001a8820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_00102cc8(&DAT_008f9d08,param_2,&uStack_8);
  *(undefined **)(param_1 + 0x70) = &DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
  fn_001a5350(param_1 + 0x78,1);
}



undefined4 fn_001a879c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = VectorFloatToUnsigned(param_1,3);
  return uVar1;
}



void fn_001a878c(void)

{
  return;
}



uint fn_001a8760(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x7fffff) != 0) {
    uVar1 = 4;
  }
  if ((param_1 & 0x7fffffff) >> 0x17 != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((~(param_1 << 1) & 0xff000000) == 0) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}



void fn_001a8754(void)

{
  return;
}



undefined4 fn_001a8734(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return param_2;
  }
  uVar1 = fn_001ab258(*(undefined4 *)(param_1 + 0x20),param_2,1);
  return uVar1;
}



int fn_001a8604(int param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar1 = fn_001a2b2c(param_3);
  if (iVar1 < *(int *)(param_1 + 0x24)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14 + 8) != 0x1000001) {
        uVar5 = *param_4;
        puVar7 = (uint *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14);
        piVar2 = (int *)param_4[1];
        param_4[1] = puVar7[3];
        uVar3 = puVar7[2];
        *param_4 = uVar3;
        if ((uVar3 & 0x8000000) != 0) {
          *(int *)(param_4[1] + 4) = *(int *)(param_4[1] + 4) + 1;
        }
        if (((uVar5 & 0x8000000) != 0) &&
           (iVar4 = piVar2[1], piVar2[1] = iVar4 + -1, iVar4 + -1 == 0)) {
          (**(code **)(*piVar2 + 8))();
        }
        if (param_2 == 0) {
          uVar3 = *puVar7;
          uVar5 = puVar7[1];
          if (uVar3 == 0x8010000) {
            uVar3 = *(uint *)(uVar5 + 0xc);
            uVar5 = *(uint *)(uVar5 + 0x10);
          }
        }
        else {
          uVar3 = *puVar7;
          uVar5 = puVar7[1];
        }
        uVar6 = *param_5;
        *param_5 = uVar3;
        piVar2 = (int *)param_5[1];
        param_5[1] = uVar5;
        if ((uVar3 & 0x8000000) != 0) {
          *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
        }
        if (((uVar6 & 0x8000000) != 0) &&
           (iVar4 = piVar2[1], piVar2[1] = iVar4 + -1, iVar4 + -1 == 0)) {
          (**(code **)(*piVar2 + 8))();
        }
        return iVar1 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return -1;
}



void fn_001a83dc(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  uint local_20;
  int *local_1c;
  
  iVar1 = *param_2;
  if (iVar1 == 0x8000010) {
    fn_0019e864(param_3,param_2);
    return;
  }
  if (iVar1 < 0x8000010) {
    if (iVar1 == 0x1000008) {
      uVar3 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),6);
      if (param_2[1] == 0) {
        pcVar5 = (char *)&DAT_001a85f0;
      }
      else {
        pcVar5 = (char *)&DAT_001a85e8;
      }
      fn_001028d4(uVar3,pcVar5);
      goto LAB_001a84c4;
    }
    if (iVar1 == 0x5000002) {
      uVar3 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0x33);
      fn_001028d4(uVar3,&DAT_001a85e4,param_2[1]);
      goto LAB_001a84c4;
    }
    if (iVar1 != 0x5000004) goto LAB_001a85a8;
    uVar3 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0x33);
    pcVar5 = "%g";
    dVar8 = (double)(float)param_2[1];
  }
  else {
    iVar2 = iVar1 + -0xa000020;
    bVar6 = iVar2 != 0;
    bVar7 = iVar2 != 0x60;
    if (bVar6 && bVar7) {
      iVar2 = iVar1 + -0xa007020;
    }
    if (((!bVar6 || !bVar7) || iVar2 == 0xfe0) && (*(int *)(param_2[1] + 0x18) != 0)) {
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_2);
      iVar1 = fn_0018d4fc(param_1,param_2[1],0xf,1,param_3);
      if ((iVar1 != 0) && (*param_3 == 0x8000010)) {
        return;
      }
    }
LAB_001a85a8:
    uVar4 = fn_00191f20(param_2);
    uVar3 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0x18);
    dVar8 = (double)CONCAT44(param_2[1],uVar4);
    pcVar5 = (char *)&DAT_001a85f8;
  }
  fn_001028d4(uVar3,pcVar5,SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
LAB_001a84c4:
  uVar3 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0xffffffff);
  local_1c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar3,0xffffffff);
  local_20 = 0x8000010;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  fn_0019e864(param_3,&local_20);
  if (((local_20 & 0x8000000) == 0) ||
     (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 != 0)) {
    return;
  }
  (**(code **)(*local_1c + 8))();
  return;
}



void fn_001a83d0(int param_1,undefined1 param_2)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x154) = in_s0;
  *(undefined1 *)(param_1 + 0x13e) = param_2;
  return;
}



void fn_001a8374(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  fn_0017d90c(param_1 + 0x10,param_2 + 0x58);
  iVar2 = param_1 + 8;
  if (iVar2 != *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar1 + -0x18) <= *(int *)(param_2 + 0x40)) break;
      iVar2 = iVar1;
    } while (iVar1 != *(int *)(param_1 + 8));
  }
  fn_0017d948(param_1 + 4,iVar2,param_2 + 0x58);
  return;
}



void fn_001a834c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  fn_001ace58(*(undefined4 *)(param_1 + param_2 * 4),param_3);
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_3;
  }
  return;
}



void fn_001a82f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  uVar1 = fn_0018b794();
  fn_001a9c1c(uVar1,param_1);
  if ((*(int *)(param_1 + 0x40) == 1) && (iVar3 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar2 = *(int *)(param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        fn_001ac8ac(iVar2,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_001a82cc(uint *param_1)

{
  fn_001a98f8(&DAT_008ef5bc,*param_1 & 0xff);
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


