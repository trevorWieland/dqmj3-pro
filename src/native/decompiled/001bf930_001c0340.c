#include "001bf930_001c0340.h"



void fn_001c0340(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = fn_006f7a70(DAT_008977e0);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  iVar3 = fn_00228098();
  if (*(char *)(iVar3 + 4) == '\x01') {
    iVar3 = fn_00228098();
    piVar5 = (int *)fn_001b57b8(10);
    uVar2 = fn_006b770c(uVar2,10);
    (**(code **)(*piVar5 + 0xa0))(piVar5,uVar2);
    (**(code **)(*piVar5 + 0xd0))(piVar5,param_1);
    (**(code **)(*piVar5 + 0x14))(piVar5,param_2);
    (**(code **)(*piVar5 + 0x124))(piVar5,(int)*(short *)(iVar3 + 8),*(undefined1 *)(iVar3 + 0xb));
    fn_0030208c(uVar1,piVar5);
    *(undefined2 *)(piVar5 + 0x5c) = 4;
    return;
  }
  iVar3 = fn_00228098();
  iVar4 = fn_00145b00(0x1ec,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_0037b53c(iVar4,0xffffffff,0xffffffff);
    *piVar5 = (int)&DAT_008348f0;
    piVar5[0x67] = (int)&DAT_00834a34;
    piVar5[0x72] = iVar3 + 8;
    *(undefined2 *)((int)piVar5 + 0x1c6) = *(undefined2 *)(iVar3 + 0xc);
  }
  uVar1 = fn_006f74f4(DAT_008977e0);
  uVar1 = fn_00360360(uVar1,0x21,(char *)&DAT_001c04b8);
  (**(code **)(*piVar5 + 0xd0))(piVar5,param_1);
  piVar5[0xc] = *(int *)(param_2 + 4);
  uVar2 = fn_006f7a70(DAT_008977e0);
  fn_002fe310(uVar2,piVar5,uVar1);
  return;
}



void fn_001c0050(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(0x1a0,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00211c48(iVar1,0x26);
    *puVar2 = &DAT_007bf218;
    puVar2[0x67] = param_1;
  }
  return;
}



undefined4 fn_001c003c(undefined4 param_1)

{
  fn_007434e8(param_1,1);
  return 1;
}



void fn_001bfb48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  iVar8 = *param_1;
  uVar9 = *(uint *)(iVar8 + 0x28);
  local_28 = param_4;
  uVar2 = fn_00166ad8(0x20000);
  if (((uVar9 < uVar2) || (uVar2 = fn_00166a9c(0x20000), uVar2 < uVar9)) &&
     ((uVar2 = fn_00166ad8(0x30000), uVar9 < uVar2 ||
      (uVar2 = fn_00166a9c(0x30000), uVar2 < uVar9)))) {
    iVar3 = *(int *)(iVar8 + 0xc);
    iVar5 = *(int *)(iVar8 + 0x10);
    uVar2 = *(uint *)(iVar8 + 0x14);
    iVar13 = *(int *)(&DAT_007e0ea4 + *(int *)(iVar8 + 0x24) * 4);
    iVar4 = 0;
    if (0 < (int)uVar2) {
      if ((uVar2 & 1) != 0) {
        iVar4 = iVar3 * iVar5;
        iVar3 = iVar3 >> 1;
        iVar5 = iVar5 >> 1;
        iVar4 = iVar4 * iVar13;
        iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1d)) >> 3;
      }
      iVar10 = 0;
      for (iVar6 = (int)uVar2 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar12 = iVar3 >> 1;
        iVar1 = iVar5 >> 1;
        iVar11 = iVar3 * iVar5 * iVar13;
        iVar4 = iVar4 + ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1d)) >> 3);
        iVar3 = iVar3 >> 2;
        iVar5 = iVar5 >> 2;
        iVar12 = iVar12 * iVar1 * iVar13;
        iVar10 = iVar10 + ((int)(iVar12 + ((uint)(iVar12 >> 0x1f) >> 0x1d)) >> 3);
      }
      iVar4 = iVar4 + iVar10;
    }
    fn_0014ff08(*(undefined4 *)(iVar8 + 0x28),iVar4);
  }
  uVar7 = 0x8d62;
  iVar8 = *(int *)(*param_1 + 0x24);
  if (iVar8 != 7) {
    if (iVar8 == 9) {
      uVar7 = 0x8057;
    }
    else if (iVar8 == 10) {
      uVar7 = 0x8056;
    }
    else if (iVar8 == 0xb) {
      uVar7 = 0x8058;
    }
  }
  fn_001bd280(*(undefined4 *)(*param_1 + 0x28),param_2,param_3,uVar7);
  fn_0012bc84(0x208,&local_28);
  iVar8 = local_28;
  iVar3 = fn_001bf554(local_28,param_2,param_3);
  fn_001467e4(iVar3 - iVar8 & 0xfffffffc);
  if (param_4 == 0) {
    fn_001b7fd4(param_2,param_3);
    return;
  }
  fn_001b7fd4(param_2,param_3);
  fn_0012bc84(0x208,&local_50);
  local_30 = 0;
  uStack_2c = 0x10080;
  local_28 = 0x10000;
  fn_00301a9c(local_50,&local_30,0x10);
  fn_001467e4(0x10);
  fn_0012bc84(0x208,&local_50);
  uVar7 = local_50;
  uStack_4c = 0xf0040;
  local_50 = 0;
  fn_00301a9c(uVar7,&local_50,8);
  fn_001467e4(8);
  fn_001b3f90(&DAT_008e9938,0);
  fn_0012bc84(0x208,&local_50);
  fn_00301a9c(local_50,&DAT_007e0e44,0x30);
  fn_001467e4(0x30);
  fn_0012bc84(0x208,&local_50);
  fn_00301a9c(local_50,&DAT_007e0e74,0x30);
  fn_001467e4(0x30);
  local_50 = 0x1010000;
  fn_001bff4c(1,0,param_6);
  uStack_34 = 0xf00fb;
  local_48 = 0xeee0eee;
  uStack_44 = 0x802f00f8;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = param_5;
  fn_00734b4c(&local_48,0x18,1);
  VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fn_001c14b8(0,&DAT_008e9938,0);
  return;
}



void fn_001bff4c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_88 [2];
  undefined4 local_80;
  uint local_78;
  undefined4 local_40;
  undefined4 local_30;
  int local_28;
  
  fn_0012bc84(0x208,local_88);
  fn_0017821c(local_88,&DAT_007e13c0,0x68);
  if (param_1 == 0) {
    uVar2 = 0;
    uVar1 = uVar2;
  }
  else {
    uVar2 = 0x200;
    uVar1 = 0x100;
  }
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x400;
  }
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x1000;
  }
  local_78 = uVar3 | uVar2 | uVar1 | uVar4 | 0x840;
  if ((param_4 == 0) && (param_1 != 0)) {
    local_40 = 0;
  }
  else {
    local_40 = 0xf;
  }
  if (param_3 != 0) {
    local_30 = 2;
  }
  else {
    local_30 = 0;
  }
  local_28 = (uint)(param_3 != 0) << 1;
  local_80 = param_5;
  fn_00301a9c(local_88[0],local_88,0x68);
  fn_001467e4(0x68);
  return;
}



void fn_001bfa88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  uint uVar5;
  undefined4 unaff_r5;
  uint *puVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint *puVar7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_lr;
  
  iVar1 = DAT_008bf51c;
  iVar3 = fn_00191f08();
  if (((iVar3 == 0) || (iVar3 = fn_00192114(), *(char *)(iVar3 + 0xc0) == '\0')) &&
     (iVar3 = fn_00191f08(), iVar3 != 0)) {
    iVar3 = fn_00192114();
    *(undefined1 *)(iVar3 + 0xc0) = 1;
    iVar3 = fn_00192114();
    *(undefined4 *)(iVar3 + 200) = 10;
  }
  *(undefined2 *)(iVar1 + 0xc81e) = 0;
  *(int *)(iVar1 + 0xe544) = iVar1;
  *(undefined4 *)(iVar1 + 0xe548) = 0xc820;
  *(undefined4 *)(iVar1 + 0xe54c) = 0;
  *(undefined2 *)(iVar1 + 0xe550) = 0;
  *(undefined4 *)(iVar1 + 0xe558) = param_2;
  *(undefined4 *)(iVar1 + 0xe55c) = param_1;
  iVar1 = DAT_008bf51c;
  puVar7 = (uint *)(DAT_008bf51c + 0xe548);
  puVar6 = (uint *)(DAT_008bf51c + 0xe54c);
  uVar5 = *puVar7 - *puVar6;
  if (0x100000 < uVar5) {
    uVar5 = 0x100000;
  }
  uVar2 = fn_001b4c18(*(undefined2 *)(DAT_008bf51c + 0xe550),
                       *puVar6 + *(int *)(DAT_008bf51c + 0xe544),uVar5,0xe558,unaff_r4,unaff_r5,
                       unaff_r6,unaff_r7,unaff_r8,unaff_r9,unaff_r10,in_lr);
  uVar4 = *puVar6;
  *puVar6 = uVar4 + uVar5;
  *(short *)(iVar1 + 0xe550) = (short)uVar2;
  if (*puVar7 <= uVar4 + uVar5) {
                    /* WARNING: Could not recover jumptable at 0x001b52f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xe558))
              (*(undefined4 *)(iVar1 + 0xe55c),(uVar2 & 0xff) << 8 | (uVar2 & 0xffff) >> 8);
    return;
  }
  do {
    iVar1 = DAT_008bf51c;
    puVar7 = (uint *)(DAT_008bf51c + 0xe548);
    puVar6 = (uint *)(DAT_008bf51c + 0xe54c);
    uVar5 = *puVar7 - *puVar6;
    if (0x100000 < uVar5) {
      uVar5 = 0x100000;
    }
    uVar2 = fn_001b4c18(*(undefined2 *)(DAT_008bf51c + 0xe550),
                         *puVar6 + *(int *)(DAT_008bf51c + 0xe544),uVar5);
    uVar4 = *puVar6;
    *puVar6 = uVar4 + uVar5;
    *(short *)(iVar1 + 0xe550) = (short)uVar2;
  } while (uVar4 + uVar5 < *puVar7);
                    /* WARNING: Could not recover jumptable at 0x001b4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xe558))
            (*(undefined4 *)(iVar1 + 0xe55c),(uVar2 & 0xff) << 8 | (uVar2 & 0xffff) >> 8);
  return;
}



undefined4 * fn_001bf930(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00118dcc();
    *puVar2 = &PTR_FUN_007cbdcc;
    iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = fn_001138cc(iVar1,&DAT_001bfa7c);
    }
    puVar2[2] = uVar3;
    iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = fn_001138ac(iVar1,&DAT_001bfa7c);
    }
    puVar2[3] = uVar3;
    iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = fn_00110518();
    }
    puVar2[4] = uVar3;
    puVar4 = (undefined4 *)fn_00145b00(0x3c,&DAT_00812c8c);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = puVar2[4];
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      uVar3 = fn_00145b00(1,&DAT_00812c8c);
      puVar4[5] = uVar3;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined1 *)(puVar4 + 8) = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      fn_00121838(DAT_00897800,L"rom:/data/Message/DiscQuestResultMessage.mes",1);
    }
    puVar2[5] = puVar4;
    fn_0011050c(puVar2[4],puVar2[2],puVar2[3]);
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    uVar3 = fn_00129004();
    fn_002416b4(uVar3,uVar5,uVar6);
  }
  return puVar2;
}


