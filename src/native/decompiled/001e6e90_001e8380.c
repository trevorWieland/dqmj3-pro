#include "001e6e90_001e8380.h"



undefined4 fn_001e8138(int *param_1)

{
  char cVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  cVar1 = (char)param_1[0xe7];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if ((char)param_1[0x82] == -1) {
        (**(code **)(*param_1 + 0x44))(param_1,0xe,4,1);
      }
      else {
        fn_0018d060(param_1[99],0x11,4);
      }
      iVar2 = fn_0017fde4(param_1[99]);
      local_1c = *(float *)(iVar2 + 0xa8);
      local_20 = *(undefined4 *)(iVar2 + 0x98);
      local_18 = *(undefined4 *)(iVar2 + 0xb8);
      fn_001eab44(param_1,0x7569,&local_20);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (cVar1 == '\x02') {
      if (param_1[0xe9] < param_1[0xe8]) {
        fn_0017fdbc(param_1[99]);
        param_1[0xe8] = 0;
        (**(code **)(*param_1 + 0xd8))(param_1);
        *(undefined1 *)(param_1 + 0xe7) = 0;
        return 1;
      }
      if ((char)param_1[0x82] != -1) {
        iVar2 = fn_0017fde4(param_1[99]);
        local_20 = *(undefined4 *)(iVar2 + 0x58);
        local_18 = *(undefined4 *)(iVar2 + 0x78);
        local_1c = *(float *)(iVar2 + 0x68) + 0.3;
        uVar3 = 0x3f800000;
        if (((DAT_008c62f8 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62f8), iVar2 != 0)) {
          DAT_008f9e20 = uVar3;
          DAT_008f9e24 = uVar3;
          DAT_008f9e28 = uVar3;
        }
        fn_005deb64(param_1[99],&local_20,param_1 + 0xb,&DAT_008f9e20);
        VectorSignedToFloat(param_1[0xe8],(byte)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(param_1[0xe9],(byte)(in_fpscr >> 0x16) & 3);
        fn_00764608();
        fn_0017fde4(param_1[(char)param_1[0x82] + 0x5f]);
        fn_0017fc3c();
        (**(code **)(*(int *)param_1[(char)param_1[0x82] + 0x5f] + 0x10))();
      }
      param_1[0xe8] = param_1[0xe8] + 1;
    }
  }
  return 0;
}



undefined4 fn_001e80d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x44))(param_1,0,0,1);
      uVar2 = 1;
    }
  }
  return uVar2;
}



void fn_001e80b0(int param_1)

{
  *(undefined1 *)(param_1 + 0x39c) = 1;
  *(undefined4 *)(param_1 + 0x3a4) = 0x22;
  if (*(char *)(param_1 + 0x208) != -1) {
    *(undefined4 *)(param_1 + 0x3a4) = 8;
  }
  return;
}



void fn_001e8094(int param_1)

{
  if (*(char *)(param_1 + 0x208) == -1) {
    return;
  }
  fn_001ea230(param_1,1);
  return;
}



void fn_001e8064(int param_1,undefined4 param_2)

{
  if (*(char *)(*(int *)(param_1 + 0x404) + 0x38) == '\0') {
    fn_003f52e4(*(undefined4 *)(param_1 + 0x404),param_2);
    return;
  }
  return;
}



void fn_001e8018(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x18c);
  fn_001fa164(*(undefined4 *)(param_1 + 0x388));
  fn_001fa18c(*(undefined4 *)(param_1 + 0x388),(char *)&DAT_001e805c);
  fn_001e8380(param_1,uVar1,1);
  return;
}



void fn_001e8380(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = fn_006f7a9c(DAT_008977e0);
  if (param_3 == 0) {
    if (-1 < (int)param_2) {
      iVar2 = *(int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 8) - iVar2;
      goto joined_r0x001e840c;
    }
  }
  else if (-1 < (int)param_2) {
    iVar2 = *(int *)(DAT_00897844 + 4);
    iVar1 = *(int *)(DAT_00897844 + 8) - iVar2;
joined_r0x001e840c:
    if (param_2 < (uint)(iVar1 / 0x34)) {
      iVar2 = iVar2 + param_2 * 0x34;
      goto LAB_001e841c;
    }
  }
  iVar2 = 0;
LAB_001e841c:
  iVar1 = fn_006eb378(iVar2);
  iVar2 = fn_006eb368(iVar2);
  uVar4 = 0;
  if (iVar1 == iVar2) goto LAB_001e845c;
  do {
    uVar3 = 0xffffffff;
    while( true ) {
      fn_001da490(param_1,(&DAT_007be840)[uVar4 * 2],(&DAT_007be844)[uVar4 * 2],uVar3,0xffffffff);
      uVar4 = uVar4 + 1;
      if (8 < uVar4) {
        return;
      }
      if (iVar1 != iVar2) break;
LAB_001e845c:
      uVar3 = (&DAT_007be844)[uVar4 * 2];
    }
  } while( true );
}



void fn_001e7fd8(int *param_1)

{
  (**(code **)(*param_1 + 0x44))(param_1,9,0,1);
  fn_001da084(param_1);
  *(undefined1 *)(param_1 + 0xea) = 1;
  return;
}



void fn_001e7f8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    fn_001dd414(param_1,1);
    return;
  }
  fn_001e4a64(param_1);
  return;
}



void fn_001e7ec0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined2 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != -1) {
    fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x414),1);
    *(undefined4 *)(param_1 + 0x414) = 0xffffffff;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x420) = 0;
    return;
  }
  uVar1 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7587);
  if (*(char *)(param_1 + 0x208) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  }
  fn_001e2904(param_1,uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001e6e90(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float local_b7c;
  float local_b78;
  float local_b74;
  undefined1 auStack_b70 [4];
  short local_b6c [2];
  float local_b68 [15];
  undefined4 local_b2c [343];
  undefined1 auStack_5d0 [4];
  short local_5cc [2];
  float local_5c8 [15];
  undefined4 local_58c [347];
  
  *(undefined1 *)(param_1 + 0x38c) = 0;
  uVar3 = 0;
  local_b7c = *(float *)(param_1 + 0x20) + 0.0;
  local_b78 = *(float *)(param_1 + 0x24) + *(float *)(*(int *)(param_1 + 0x100) + 0xc) * 2.0;
  local_b74 = *(float *)(param_1 + 0x28) + 0.0;
  if (((DAT_008917e0 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008917e0), iVar2 != 0)) {
    DAT_008c8d80 = 0xbf800000;
    DAT_008c8d7c = uVar3;
    DAT_008c8d84 = uVar3;
  }
  fn_00101a1c(auStack_b70,&DAT_005f4c78,0x48,0x14);
  uVar3 = fn_006f7388(DAT_008977e0);
  iVar2 = fn_006b5e20(uVar3,0,6,auStack_b70,0x14,&local_b7c,&DAT_008c8d7c);
  if (0 < iVar2) {
    fVar9 = 4100.0;
    fVar8 = fVar9;
    fn_001a4a80();
    iVar6 = 0;
    iVar4 = 0;
    do {
      fVar7 = (local_b7c - local_b68[iVar4 * 0x12]) * (local_b7c - local_b68[iVar4 * 0x12]) +
              (local_b78 - local_b68[iVar4 * 0x12 + 1]) * (local_b78 - local_b68[iVar4 * 0x12 + 1])
              + (local_b74 - local_b68[iVar4 * 0x12 + 2]) *
                (local_b74 - local_b68[iVar4 * 0x12 + 2]);
      if (fVar7 < fVar9) {
        iVar6 = iVar4;
        fVar9 = fVar7;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
    uVar3 = fn_006f7388(DAT_008977e0);
    iVar2 = fn_006b4240(uVar3,local_b2c[iVar6 * 0x12]);
    if ((iVar2 == 0) || (iVar2 = fn_006bab60(iVar2,(int)local_b6c[iVar6 * 0x24]), iVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x38c) = uVar1;
    if (*(char *)(param_1 + 0x428) == '\0') {
      fn_00101a1c(auStack_5d0,&DAT_005f4c78,0x48,0x14);
      piVar5 = (int *)fn_006f7388(DAT_008977e0);
      iVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,6,auStack_5d0,0x14,&local_b7c,&DAT_008c8d7c);
      if (0 < iVar2) {
        fn_001a4a80();
        uVar10 = (ulonglong)(uint)fVar8;
        iVar6 = 0;
        do {
          uVar3 = fn_006f7388(DAT_008977e0);
          iVar4 = fn_006b4240(uVar3,local_58c[iVar6 * 0x12]);
          if (((iVar4 != 0) &&
              (iVar4 = fn_006baba8(iVar4,(int)local_5cc[iVar6 * 0x24]), iVar4 != 0)) &&
             (fVar9 = (local_b7c - local_5c8[iVar6 * 0x12]) * (local_b7c - local_5c8[iVar6 * 0x12])
                      + (local_b78 - local_5c8[iVar6 * 0x12 + 1]) *
                        (local_b78 - local_5c8[iVar6 * 0x12 + 1]) +
                      (local_b74 - local_5c8[iVar6 * 0x12 + 2]) *
                      (local_b74 - local_5c8[iVar6 * 0x12 + 2]), fVar9 < (float)uVar10)) {
            uVar10 = (ulonglong)(uint)fVar9;
            *(int *)(param_1 + 0x390) = iVar4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
        return;
      }
    }
    else {
      uVar3 = fn_006afcec(*(undefined4 *)(DAT_008977e0 + 0x1c),
                           (int)*(char *)(*(int *)(param_1 + 400) + 0x3c));
      *(undefined4 *)(param_1 + 0x390) = uVar3;
    }
  }
  return;
}


