#include "0022013c_00220784.h"



undefined4 * fn_00220784(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  *param_1 = &PTR_FUN_0081c8b0;
  uVar1 = param_1[0x1a9];
  uVar4 = uVar1;
  if ((uint)param_1[0x1aa] <= uVar1) {
    for (; uVar4 != param_1[0x1aa]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x1ab] - uVar1) >> 2,0);
  uVar1 = param_1[0x1a6];
  uVar4 = uVar1;
  if ((uint)param_1[0x1a7] <= uVar1) {
    for (; uVar4 != param_1[0x1a7]; uVar4 = uVar4 + 1) {
    }
  }
  fn_001008c4(uVar1,param_1[0x1a8] - uVar1,0);
  if ((int *)param_1[0x1a5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1a5] + 4))();
  }
  uVar1 = param_1[0x194];
  uVar4 = uVar1;
  if ((uint)param_1[0x195] < uVar1) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != param_1[0x195]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x196] - uVar1) >> 2,0);
  uVar1 = param_1[0x91];
  uVar4 = uVar1;
  if ((uint)param_1[0x92] <= uVar1) {
    for (; uVar4 != param_1[0x92]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x93] - uVar1) >> 2,0);
  uVar1 = param_1[0x89];
  uVar4 = uVar1;
  if ((uint)param_1[0x8a] <= uVar1) {
    for (; uVar4 != param_1[0x8a]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x8b] - uVar1) >> 2,0);
  uVar1 = param_1[0x86];
  uVar4 = uVar1;
  if ((uint)param_1[0x87] <= uVar1) {
    for (; uVar4 != param_1[0x87]; uVar4 = uVar4 + 0x74) {
    }
  }
  iVar5 = (int)((longlong)(int)(param_1[0x88] - uVar1) * -0x72c234f7 +
                ((ulonglong)(param_1[0x88] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar5 >> 6) - (iVar5 >> 0x1f),0);
  piVar6 = (int *)param_1[0x83];
  piVar8 = param_1 + 0x7f;
  if (piVar6 != (int *)0x0) {
    piVar2 = (int *)*piVar6;
    while (piVar2 != piVar6) {
      piVar7 = (int *)param_1[0x83];
      if (piVar2 != (int *)param_1[0x83]) {
        piVar7 = (int *)*piVar2;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        param_1[0x84] = param_1[0x84] + -1;
        *piVar2 = param_1[0x80];
        param_1[0x80] = piVar2;
      }
      piVar2 = piVar7;
    }
    puVar3 = (undefined4 *)param_1[0x83];
    *puVar3 = param_1[0x80];
    param_1[0x80] = puVar3;
    piVar6 = (int *)*piVar8;
    while (piVar6 != (int *)0x0) {
      *piVar8 = *piVar6;
      fn_001008c4(piVar6[2],piVar6[1],0);
      fn_001008c4(piVar6,1,0);
      piVar6 = (int *)*piVar8;
    }
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
  }
  uVar1 = param_1[0x6d];
  uVar4 = uVar1;
  if ((uint)param_1[0x6e] < uVar1) {
    do {
      uVar4 = uVar4 + 0x74;
    } while (uVar4 != param_1[0x6e]);
  }
  iVar5 = (int)((longlong)(int)(param_1[0x6f] - uVar1) * -0x72c234f7 +
                ((ulonglong)(param_1[0x6f] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar5 >> 6) - (iVar5 >> 0x1f),0);
  fn_00100414(param_1 + 0x4a,fn_0079edbc,4,3);
  uVar1 = param_1[0x46];
  uVar4 = uVar1;
  if ((uint)param_1[0x47] <= uVar1) {
    for (; uVar4 != param_1[0x47]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x48] - uVar1) >> 2,0);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



int fn_00220410(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &PTR_FUN_0081c8b0;
  puVar1[1] = 0;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0xffffffff;
  puVar1[0x18] = 0;
  puVar1[5] = 0xffffffff;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x28] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  uVar5 = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  iVar2 = fn_00101a1c(puVar1 + 0x4a,&LAB_001ad7c0,4,3);
  *(undefined1 *)(iVar2 + 0xc) = 1;
  *(undefined1 *)(iVar2 + 0xd) = 0;
  *(undefined1 *)(iVar2 + 0xe) = 1;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  *(undefined4 *)(iVar2 + 0x18) = uVar5;
  *(undefined4 *)(iVar2 + 0x1c) = uVar5;
  *(undefined4 *)(iVar2 + 0x20) = uVar5;
  *(undefined4 *)(iVar2 + 0x24) = uVar5;
  *(undefined4 *)(iVar2 + 0x28) = uVar5;
  *(undefined4 *)(iVar2 + 0x2c) = uVar5;
  *(undefined4 *)(iVar2 + 0x30) = uVar5;
  *(undefined4 *)(iVar2 + 0x34) = uVar5;
  *(undefined4 *)(iVar2 + 0x38) = uVar5;
  *(undefined4 *)(iVar2 + 0x3c) = uVar5;
  *(undefined4 *)(iVar2 + 0x40) = uVar5;
  *(undefined4 *)(iVar2 + 0x44) = uVar5;
  *(undefined4 *)(iVar2 + 0x48) = uVar5;
  *(undefined4 *)(iVar2 + 0x4c) = uVar5;
  *(undefined4 *)(iVar2 + 0x50) = uVar5;
  *(undefined4 *)(iVar2 + 0x54) = uVar5;
  *(undefined4 *)(iVar2 + 0x60) = uVar5;
  *(undefined4 *)(iVar2 + 100) = uVar5;
  *(undefined4 *)(iVar2 + 0x68) = uVar5;
  *(undefined4 *)(iVar2 + 0x6c) = uVar5;
  *(undefined4 *)(iVar2 + 0x70) = uVar5;
  *(undefined4 *)(iVar2 + 0x74) = uVar5;
  *(undefined1 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = uVar5;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined1 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x90) = 0;
  *(undefined4 *)(iVar2 + 0x94) = 0;
  *(undefined4 *)(iVar2 + 0x98) = uVar5;
  *(undefined4 *)(iVar2 + 0x9c) = uVar5;
  *(undefined4 *)(iVar2 + 0xa0) = uVar5;
  iVar2 = fn_00101a1c(iVar2 + 0xa4,&LAB_0021b634,0x18,2);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  piVar3 = (int *)fn_00100fc6(0xc,0);
  iVar4 = fn_00100fc6(0x1c,0);
  piVar3[2] = iVar4;
  *piVar3 = *(int *)(iVar2 + 0x30);
  piVar3[1] = 1;
  *(int *)(iVar2 + 0x30) = (int)piVar3;
  iVar4 = piVar3[2];
  *(int *)(iVar2 + 0x38) = iVar4;
  *(int *)(iVar2 + 0x3c) = iVar4 + 0x1c;
  *(int *)(iVar2 + 0x38) = iVar4 + 0x1c;
  *(int *)(iVar2 + 0x40) = iVar4;
  *(int *)iVar4 = iVar4;
  *(int *)(*(int *)(iVar2 + 0x40) + 4) = *(int *)(iVar2 + 0x40);
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x484) = 0;
  *(undefined4 *)(iVar2 + 0x488) = 0;
  *(undefined4 *)(iVar2 + 0x48c) = 0;
  *(undefined4 *)(iVar2 + 0x4a0) = uVar5;
  *(undefined4 *)(iVar2 + 0x4a4) = uVar5;
  *(undefined4 *)(iVar2 + 0x4a8) = uVar5;
  *(undefined4 *)(iVar2 + 0x4ac) = uVar5;
  *(undefined4 *)(iVar2 + 0x4b0) = uVar5;
  *(undefined4 *)(iVar2 + 0x4b4) = uVar5;
  *(undefined4 *)(iVar2 + 0x4b8) = uVar5;
  *(undefined4 *)(iVar2 + 0x4bc) = 0;
  *(undefined1 *)(iVar2 + 0x4c0) = 0;
  *(undefined1 *)(iVar2 + 0x4c1) = 0;
  *(undefined1 *)(iVar2 + 0x4c2) = 1;
  *(undefined1 *)(iVar2 + 0x4c3) = 1;
  *(undefined4 *)(iVar2 + 0x4c4) = 0;
  *(undefined4 *)(iVar2 + 0x4c8) = 0;
  *(undefined4 *)(iVar2 + 0x4cc) = 0;
  *(undefined4 *)(iVar2 + 0x4d0) = 0;
  *(undefined4 *)(iVar2 + 0x4d4) = 0;
  *(undefined4 *)(iVar2 + 0x4d8) = 0;
  *(undefined4 *)(iVar2 + 0x4dc) = 0;
  *(undefined4 *)(iVar2 + 0x4e0) = 0;
  *(undefined1 *)(iVar2 + 0x4e4) = 0;
  *(undefined4 *)(iVar2 + 0x4e8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x4ec) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x1b4) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x1b0) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x1ac) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x1a8) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x1a4) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x1a0) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x19c) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x198) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x194) = 0xffffffff;
  *(undefined4 *)(iVar2 + -400) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x18c) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x188) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x184) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x180) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x17c) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x178) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x174) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x490) = 0;
  *(undefined4 *)(iVar2 + -0x170) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x494) = 0;
  *(undefined4 *)(iVar2 + 0x498) = 0;
  *(undefined4 *)(iVar2 + 0x49c) = 0;
  fn_00301f50(&DAT_008c8cb0,0x80);
  fn_00301f50(iVar2 + 0x84,0x400);
  *(undefined4 *)(iVar2 + -0x128) = 0;
  *(undefined4 *)(iVar2 + -0x124) = 0;
  *(undefined4 *)(iVar2 + -0x120) = 0;
  *(undefined4 *)(iVar2 + -0x11c) = 0;
  *(undefined4 *)(iVar2 + -0x118) = 0;
  *(undefined4 *)(iVar2 + -0x114) = 0;
  *(undefined4 *)(iVar2 + -0x110) = 0;
  *(undefined4 *)(iVar2 + -0x10c) = 0;
  *(undefined4 *)(iVar2 + -0x108) = 0;
  *(undefined4 *)(iVar2 + -0x104) = 0;
  *(undefined4 *)(iVar2 + -0x100) = 0;
  *(undefined4 *)(iVar2 + -0xfc) = 0;
  *(undefined4 *)(iVar2 + -0xf8) = 0;
  *(undefined4 *)(iVar2 + -0xf4) = 0;
  *(undefined4 *)(iVar2 + -0xf0) = 0;
  *(undefined4 *)(iVar2 + -0xd8) = 0;
  *(undefined4 *)(iVar2 + -0xd4) = 0;
  *(undefined4 *)(iVar2 + -0xd0) = 0;
  return iVar2 + -0x1cc;
}



void fn_0022013c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  
  if (**(int **)(DAT_008977e0 + 0x40) != 0) {
    return;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),DAT_00891764,1);
  *(int *)(param_1 + 0x234) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    return;
  }
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  *(undefined **)(param_1 + 0x23c) = &DAT_008c8cb0;
  uVar2 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar1 = fn_003035b0((char *)&DAT_00860adc,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860ad4,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860c94,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 2;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860c9c,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 3;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860ca4,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 4;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860cac,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 5;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860c8c,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 6;
  }
  iVar1 = fn_003035b0((char *)&DAT_00860afc,uVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x240) = 7;
  }
  else if (*(int *)(param_1 + 0x240) == -1) goto LAB_002202c0;
  uVar3 = fn_006b5298(*(undefined4 *)(DAT_00897804 + 0x1c),*(undefined4 *)(param_1 + 0x240));
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  fn_0021e66c(param_1,uVar2);
LAB_002202c0:
  iVar1 = fn_006e1ee8(*(undefined4 *)(param_1 + 0x234));
  iVar1 = *(int *)(iVar1 + 0x78);
  local_30 = 0;
  local_28 = 0;
  local_34 = 0;
  local_2e = 0;
  local_26 = 0;
  local_24 = 0;
  fn_006e2630(iVar1 + 0x20,&local_34);
  uVar2 = fn_00143ac8((uint)*(ushort *)(iVar1 + 0x30) * (uint)*(ushort *)(iVar1 + 0x32),0x80);
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_48 = 0;
  local_48 = fn_0015fa88(*(undefined4 *)(param_1 + 0x238));
  local_54 = *(undefined4 *)(iVar1 + 0x24);
  local_4c = *(undefined4 *)(iVar1 + 0x30);
  local_50 = 1;
  local_58 = 0;
  local_4f = 0;
  iVar1 = fn_006e1ee8(*(undefined4 *)(param_1 + 0x234));
  fn_0019501c(*(int *)(iVar1 + 0x78) + 0x20,&local_58);
  *(byte *)(iVar1 + 0x7c) = *(byte *)(iVar1 + 0x7c) & 0xf7;
  fn_0021e484(param_1);
  fn_0021c9f8(param_1,0xff,1);
  return;
}


