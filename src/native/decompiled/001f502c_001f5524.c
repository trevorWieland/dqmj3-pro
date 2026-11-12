#include "001f502c_001f5524.h"



void fn_001f5524(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar8 = param_1 + param_2 * 0x2c;
  if (((*(int *)(iVar8 + 0x8c) != 0) && (-1 < (int)param_3)) && (param_3 < 0x50)) {
    iVar7 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
    if (iVar7 != 0) {
      uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x8c) + 0xe4);
      uVar6 = *(undefined4 *)(iVar7 + 0xe4);
      fn_0017fde4(uVar9);
      uVar1 = fn_0019bc38();
      uVar6 = fn_0017fde4(uVar6);
      puVar2 = (undefined4 *)fn_0019695c(uVar6,uVar1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = &DAT_00858c10;
        uVar3 = puVar2[2];
        uVar4 = uVar3;
        if ((uint)puVar2[3] < uVar3) {
          do {
            uVar4 = uVar4 + 8;
          } while (uVar4 != puVar2[3]);
        }
        fn_001008c4(uVar3,(int)(puVar2[4] - uVar3) >> 3,0);
        fn_002feef8(puVar2);
        uVar1 = fn_0017fde4(uVar9);
        fn_00196998(uVar1,0xffffffff);
      }
      local_28 = *(undefined4 *)(iVar7 + 0x20);
      uStack_24 = *(undefined4 *)(iVar7 + 0x24);
      uStack_20 = *(undefined4 *)(iVar7 + 0x28);
      if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
         (piVar5 = *(int **)(iVar8 + 0x8c), piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0xd0))(piVar5,&local_28);
      }
      *(undefined4 *)(iVar8 + 0xa0) = 0xffffffff;
    }
  }
  return;
}



int fn_001f5458(int param_1,char *param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [112];
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar4 = -1;
  if (*param_2 == 'n') {
    uVar3 = fn_006f7a9c(DAT_008977e0);
    iVar4 = fn_006b776c(uVar3,param_2);
    if (iVar4 == -1) {
      iVar4 = fn_003035b0(param_2,&DAT_0086160c);
      if (((iVar4 == 0) || (iVar4 = fn_003035b0(param_2,&DAT_008615f4), iVar4 == 0)) ||
         (iVar4 = fn_003035b0(param_2,&DAT_008615fc), iVar4 == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      iVar4 = fn_006f7a9c(DAT_008977e0);
      iVar5 = 0x142;
      uVar3 = 0;
      if (bVar2) {
        uVar3 = 2;
      }
      do {
        if (*(int *)(*(int *)(iVar4 + 0x20) + iVar5 * 0x14) == 0) goto LAB_002799c0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x156);
      iVar5 = -1;
LAB_002799c0:
      fn_00101a50(auStack_98,0x80,L"rom:/data/Model/%s.bch",param_2);
      fn_002775a0(iVar4,iVar5,auStack_98,uVar3,0,0x80,0);
      return iVar5;
    }
  }
  else if (*param_2 == 'm') {
    uVar3 = fn_006f7a9c(DAT_008977e0);
    iVar4 = fn_006b7948(uVar3,param_2);
    if (iVar4 != -1) {
      return iVar4;
    }
    iVar5 = 1;
    iVar4 = fn_00242ad8();
    if (iVar4 < 2) {
      return -1;
    }
    while( true ) {
      sVar1 = (short)iVar5;
      uVar3 = fn_00242bd4((int)sVar1);
      iVar4 = fn_003035b0(uVar3,param_2);
      if (iVar4 == 0) break;
      iVar5 = iVar5 + 1;
      iVar4 = fn_00242ad8();
      if (iVar4 <= iVar5) {
        return -1;
      }
    }
    if (sVar1 < 1) {
      return -1;
    }
    iVar4 = 0;
    while (iVar5 = fn_006a7f8c(param_1 + iVar4 * 0xc + 0xe8c), iVar5 != 0) {
      iVar4 = iVar4 + 1;
      if (0x13 < iVar4) {
        return -1;
      }
    }
    if (iVar4 < 0) {
      return -1;
    }
    uVar3 = fn_006f7a9c(DAT_008977e0);
    fn_00277d7c(&local_28,uVar3,(int)sVar1);
    iVar4 = 0;
    do {
      iVar5 = fn_006a7f8c(param_1 + iVar4 * 0xc + 0xe8c);
      if (iVar5 == 0) {
        if (iVar4 < 0) {
          return local_28;
        }
        param_1 = param_1 + iVar4 * 0xc;
        *(int *)(param_1 + 0xe8c) = local_28;
        *(undefined4 *)(param_1 + 0xe90) = uStack_24;
        *(undefined4 *)(param_1 + 0xe94) = uStack_20;
        return local_28;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x14);
    return local_28;
  }
  return iVar4;
}



void fn_001f542c(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 < 1) {
    fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),param_2,(int)(short)-(short)param_3,1);
    return;
  }
  fn_00229a50();
  return;
}



void fn_001f5418(void)

{
  fn_0025ba9c(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_001f53bc(undefined4 param_1,int param_2,short param_3)

{
  undefined4 uVar1;
  short asStack_20 [6];
  
  uVar1 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
  fn_00166824(asStack_20,uVar1);
  asStack_20[param_2] = asStack_20[param_2] + param_3;
  fn_0025bafc(*(undefined4 *)(DAT_00897804 + 8),asStack_20);
  return;
}



undefined4 fn_001f532c(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001ceeec();
  if (iVar1 == 0) {
    if ((char)param_1[0x3e5] != '\0') {
      if (*(char *)(DAT_008977e0 + 0x218) == '\0') {
        iVar1 = fn_006f72b4();
        if (*(int *)(iVar1 + 0x138) != 2) {
          fn_00698fb8(DAT_008977e0,0xffffffff);
        }
        *(undefined1 *)(param_1 + 0x3e5) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x3a1) = 0xff;
    fn_00158f50(param_1);
    fn_001484b4(param_1);
    (**(code **)(*param_1 + 0x74))(param_1);
  }
  return 1;
}



void fn_001f52f0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c), piVar1 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f5324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xd0))(piVar1,param_3);
  return;
}



void fn_001f52b8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_s0;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar1 != 0) {
    fn_0017fe34();
    *(undefined4 *)(iVar1 + 0x30) = in_s0;
  }
  return;
}



void fn_001f502c(int param_1,uint param_2,uint param_3,short param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int unaff_r7;
  int iVar9;
  int unaff_r10;
  int iVar10;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar10 = param_1 + param_2 * 0x2c;
  iVar7 = *(int *)(iVar10 + 0x8c);
  if (iVar7 == 0) {
    return;
  }
  if ((int)param_3 < 0) {
    return;
  }
  if (0x4f < param_3) {
    return;
  }
  iVar9 = *(int *)(param_1 + param_3 * 0x2c + 0x8c);
  if (iVar9 == 0) {
    return;
  }
  uVar8 = *(uint *)(iVar7 + 0xe0);
  if (*(char *)(iVar7 + 0xdc) == '\0') {
    if ((-1 < (int)uVar8) &&
       (uVar8 < (uint)((*(int *)(DAT_00897844 + 8) - *(int *)(DAT_00897844 + 4)) / 0x34))) {
      iVar1 = *(int *)(DAT_00897844 + 4) + uVar8 * 0x34;
      goto LAB_001f5130;
    }
  }
  else {
    iVar1 = fn_006f7a9c(DAT_008977e0);
    if ((-1 < (int)uVar8) && (uVar8 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34))) {
      iVar1 = *(int *)(iVar1 + 4) + uVar8 * 0x34;
      goto LAB_001f5130;
    }
  }
  iVar1 = 0;
LAB_001f5130:
  if (*(char *)(iVar10 + 0x9c) == '\0') {
    unaff_r7 = 0x34;
    unaff_r10 = 0;
  }
  else if (*(char *)(iVar10 + 0x9c) == '\x01') {
    unaff_r7 = 0x31;
    unaff_r10 = 1;
  }
  iVar2 = fn_0016dc08((int)param_4,param_5);
  if ((param_5 < 3) && (iVar2 == 1)) {
    iVar2 = 0;
  }
  iVar1 = fn_0017b118(iVar2,iVar1);
  uVar3 = fn_0017fde4(*(undefined4 *)(iVar9 + 0xe4));
  iVar2 = fn_00191238(uVar3,(&PTR_s_Ride_S_0089226c)[param_5]);
  if (iVar2 != -1) {
    puVar4 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = iVar2;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = &DAT_0083d218;
    }
    uVar3 = fn_0017fde4(*(undefined4 *)(iVar7 + 0xe4));
    fn_0018cdf4(puVar4,uVar3);
    puVar4[5] = *(undefined4 *)(iVar7 + 0x3c);
    uVar3 = fn_0017fde4(*(undefined4 *)(iVar9 + 0xe4));
    uVar3 = fn_0018d16c(uVar3,puVar4);
    uVar5 = fn_0017fde4(*(undefined4 *)(iVar7 + 0xe4));
    fn_00196998(uVar5,uVar3);
    piVar6 = *(int **)(iVar7 + 0xe4);
    if (iVar1 < -1) {
      iVar1 = 0;
    }
    if (unaff_r10 == 0) {
      fn_0018d060(piVar6,iVar1,4);
    }
    else {
      (**(code **)(*piVar6 + 0x18))(piVar6,iVar1);
    }
    if (iVar1 != -1) {
      iVar9 = 0;
      do {
        fn_001da490(iVar7,unaff_r7 + iVar9,iVar1 + iVar9,0xffffffff,0xffffffff);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
    }
    *(uint *)(iVar10 + 0xa0) = param_3;
  }
  return;
}


