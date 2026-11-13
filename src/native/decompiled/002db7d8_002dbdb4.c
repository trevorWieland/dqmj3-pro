#include "002db7d8_002dbdb4.h"



undefined4 fn_002dbdb4(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 != 0) && (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 1)) {
    fn_006f756c(DAT_008977e0);
    iVar1 = fn_006bb17c();
    if (iVar1 == 2) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_002dbdb0(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 != 0) && (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 1)) {
    fn_006f756c(DAT_008977e0);
    iVar1 = fn_006bb17c();
    if (iVar1 == 2) {
      return 1;
    }
  }
  return 0;
}



void fn_002dbd7c(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if (iVar1 == 0) {
    return;
  }
  fn_006f756c(DAT_008977e0);
  fn_002d9f78();
  return;
}



void fn_002dbd60(undefined4 param_1,undefined4 param_2)

{
  fn_001782b8(&DAT_008c8764,param_2,0x1f);
  return;
}



undefined4 fn_002dbd0c(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if (iVar1 != 0) {
    iVar1 = fn_006f756c(DAT_008977e0);
    if ((*(int *)(iVar1 + 0x20) == 1) ||
       (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 4)) {
      return 1;
    }
  }
  return 0;
}



undefined * fn_002dbcfc(void)

{
  return &DAT_008c8764;
}



undefined4 fn_002dbca0(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 != 0) && (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 4)) {
    fn_006f756c(DAT_008977e0);
    iVar1 = fn_006bb17c();
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_002dbc64(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_002dbc28(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_002dbbf8(undefined4 param_1,int param_2,undefined4 param_3)

{
  fn_001782b8(param_2 * 0x20 + 0x8c8784,param_3,0x1f);
  return;
}



int fn_002dbbe0(undefined4 param_1,int param_2)

{
  return param_2 * 0x20 + 0x8c8784;
}



void fn_002dbbb8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f756c(DAT_008977e0);
  *(undefined1 *)(iVar1 + 0x3d) = param_2;
  return;
}



undefined4 fn_002dbb4c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = fn_006f7a70(DAT_008977e0);
  iVar4 = 0;
  iVar2 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
  if (0 < iVar2) {
    do {
      iVar3 = fn_006f7a70(DAT_008977e0);
      iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + iVar4 * 4);
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + 0x169);
      }
      if (iVar3 != 0 && cVar1 != '\x05') {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}



void fn_002dba64(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &DAT_00820264;
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 4))();
    param_1[0x16] = 0;
  }
  uVar1 = param_1[0x19];
  uVar2 = uVar1;
  if ((uint)param_1[0x1a] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[0x1a]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x1b] - uVar1) >> 3,0);
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 4))();
  }
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] <= uVar1) {
    for (; uVar2 != param_1[2]; uVar2 = uVar2 + 0x38) {
    }
  }
  iVar3 = (int)((longlong)(int)(param_1[3] - uVar1) * -0x6db6db6d +
                ((ulonglong)(param_1[3] - uVar1) << 0x20) >> 0x20);
  fn_001008c4(uVar1,(iVar3 >> 5) - (iVar3 >> 0x1f),0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_002db95c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_00820264;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xffffffff;
  puVar1[9] = 0xffffffff;
  puVar1[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0xffffffff;
  puVar1[0xe] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  *(undefined1 *)((int)puVar1 + 0x3e) = 0;
  *(undefined1 *)((int)puVar1 + 0x3f) = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0xffffffff;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0xffffffff;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 1;
  *(undefined1 *)((int)puVar1 + 0x71) = 0;
  *(undefined1 *)((int)puVar1 + 0x72) = 0;
  *(undefined1 *)((int)puVar1 + 0x73) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0x1b;
  iVar2 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)fn_001c7e78();
  }
  piVar3 = (int *)puVar1[0x17];
  if (piVar3 != piVar4) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    puVar1[0x17] = piVar4;
  }
  return puVar1;
}



void fn_002db7d8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = fn_002d8370(0xffffffff);
  if (iVar1 == 0) {
    fn_002dace8(param_1);
  }
  else {
    fn_002d8e50();
  }
  iVar1 = (int)((longlong)(param_1[2] - param_1[1]) * -0x6db6db6d +
                ((ulonglong)(uint)(param_1[2] - param_1[1]) << 0x20) >> 0x20);
  iVar6 = 0;
  iVar1 = (iVar1 >> 5) - (iVar1 >> 0x1f);
  if (0 < iVar1) {
    do {
      iVar7 = param_1[1] + iVar6 * 0x38;
      if (((*(uint *)(iVar7 + 8) & 1) == 0 && (*(uint *)(iVar7 + 8) & 2) == 0) &&
         (iVar2 = (**(code **)(*param_1 + 0x4c))(param_1), iVar2 == 0)) {
        *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  iVar6 = 0;
  iVar1 = (int)((longlong)(param_1[2] - param_1[1]) * -0x6db6db6d +
                ((ulonglong)(uint)(param_1[2] - param_1[1]) << 0x20) >> 0x20);
  iVar1 = (iVar1 >> 5) - (iVar1 >> 0x1f);
  if (0 < iVar1) {
    do {
      iVar7 = param_1[1] + iVar6 * 0x38;
      uVar3 = *(uint *)(iVar7 + 8);
      if ((((uVar3 & 1) == 0 && (uVar3 & 0x10) == 0) && ((uVar3 & 4) == 0 && (uVar3 & 2) == 0)) &&
         ((char)param_1[0x1c] != '\0')) {
        iVar2 = fn_00145b00(0x184,&DAT_00812c8c);
        piVar4 = (int *)0x0;
        if (iVar2 != 0) {
          piVar4 = (int *)fn_001c5034(iVar2,iVar7);
        }
        uVar5 = fn_006f7a70(DAT_008977e0);
        uVar5 = fn_003023b0(uVar5,piVar4,0x7549);
        *(undefined4 *)(iVar7 + 0x14) = uVar5;
        *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffdf;
        (**(code **)(*piVar4 + 0x10))(piVar4,iVar7 + 0x2c);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}


