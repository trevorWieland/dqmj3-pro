#include "00365758_00365f20.h"



void fn_00365f20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar1 != iVar1) {
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x18) + uVar4 * 0x2c);
      if ((*(char *)((int)piVar3 + 0x17) != '\x06') && (*piVar3 == param_2)) {
        fn_002df424(piVar3[2]);
        *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar4 * 0x2c + 0x17) = 6;
        *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar4 * 0x2c + 0x16) = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



void fn_00365e98(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x2c + iVar1 != iVar1) {
    do {
      uVar4 = uVar5 * 0xb;
      piVar3 = *(int **)(*(int *)(param_1 + 0x18) + uVar5 * 0x2c + 8);
      if (piVar3 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(piVar3 + 0x16);
      }
      if (piVar3 != (int *)0x0 && uVar4 != 0) {
        (**(code **)(*piVar3 + 0xb0))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



undefined4 fn_00365da8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 == 0) {
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (**(int **)(DAT_008977e0 + 0x40) != 0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



void fn_00365c9c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar6 = iVar1 >> 0x1f;
  if (iVar1 / 0x2c + iVar6 != iVar6) {
    uVar7 = 0;
    uVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x18) + uVar4 * 0x2c + 8);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xa4))();
        iVar6 = *(int *)(param_1 + 0x18) + uVar4 * 0x2c;
        piVar2 = *(int **)(iVar6 + 8);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined4 *)(iVar6 + 8) = 0;
      }
      uVar5 = uVar4 + 1;
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x18) + uVar4 * 0x2c);
      *puVar3 = 0xffffffff;
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      puVar3[2] = 0;
      puVar3[3] = (int)uVar7;
      *(undefined1 *)((int)puVar3 + 0x16) = 0;
      *(undefined1 *)((int)puVar3 + 0x17) = 0;
      *(undefined1 *)(puVar3 + 6) = 0xff;
      *(undefined1 *)((int)puVar3 + 0x19) = 0;
      *(undefined2 *)((int)puVar3 + 6) = 0xffff;
      *(undefined2 *)(puVar3 + 4) = 0xffff;
      *(undefined2 *)((int)puVar3 + 0x12) = 0xffff;
      *(undefined1 *)((int)puVar3 + 0x1b) = 0xff;
      *(undefined1 *)(puVar3 + 7) = 0xff;
      *(undefined1 *)((int)puVar3 + 0x1f) = 0xff;
      puVar3[10] = 0xffffffff;
      *(undefined1 *)((int)puVar3 + 0x1a) = 0xff;
      *(undefined1 *)((int)puVar3 + 0x1d) = 0xff;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      uVar4 = uVar5;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



void fn_00365c70(void)

{
  int iVar1;
  
  iVar1 = 700;
  do {
    fn_00144834(iVar1,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2d3);
  return;
}



undefined4 fn_00365a1c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint local_28;
  uint local_24;
  int local_20;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  uVar2 = (**(code **)(*piVar1 + 0x90))();
  iVar3 = fn_00145b00(0x1b0,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)fn_002e1154(iVar3,(int)*(short *)((int)param_2 + 0x12),DAT_008914d8);
  }
  DAT_008914d8 = DAT_008914d8 + 1;
  param_2[2] = (int)piVar1;
  *param_2 = piVar1[0x3f];
  *(undefined1 *)((int)param_2 + 0x17) = 2;
  *(undefined1 *)(param_2 + 6) = 2;
  if ((short)param_2[1] != -1) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))
                      (*(int **)(param_1 + 0x24),(int)(short)param_2[1],0);
    fn_002df4e8(piVar1,uVar4);
  }
  if (0 < (short)param_2[4]) {
    iVar3 = fn_003b2e54(uVar2);
    fn_003694fc(piVar1,iVar3 + 0xc);
    fn_00369548(piVar1,iVar3 + 4);
  }
  *(short *)(piVar1 + 0x3d) = (short)param_2[5];
  if (*(char *)((int)param_2 + 0x1d) == '\x04') {
    *(undefined1 *)((int)piVar1 + 0x10e) = 1;
  }
  *(short *)((int)piVar1 + 0x10a) = (short)*(char *)((int)param_2 + 0x1d);
  if (*(short *)((int)param_2 + 6) != -1) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    (**(code **)(**(int **)(param_1 + 0x24) + 0x2c))
              (*(int **)(param_1 + 0x24),&local_28,(int)*(short *)((int)param_2 + 6),0);
    fn_003692c0(piVar1,(int)*(short *)((int)param_2 + 6),&local_28);
    uVar5 = local_28;
    if (local_24 < local_28) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != local_24);
    }
    fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
  }
  if ((char)param_2[7] != -1) {
    fn_002df6f8(piVar1);
  }
  iVar3 = fn_003b237c(*(undefined4 *)(param_1 + 0x28),(int)*(short *)((int)param_2 + 0x12));
  iVar8 = 0;
  do {
    iVar7 = (int)*(short *)(iVar3 + iVar8 * 8 + 0xc);
    if (iVar7 != 0) {
      fn_002defe0(piVar1,iVar7,(int)*(char *)((int)param_2 + 0x1a));
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 10);
  (**(code **)(*piVar1 + 0xa0))(piVar1);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    *(undefined1 *)(piVar1 + 0x44) = 1;
  }
  if ((*(char *)((int)param_2 + 0x1d) == '\x02') && (iVar3 = 0, 0 < piVar1[0x40])) {
    do {
      piVar6 = (int *)fn_006bb544(piVar1,iVar3);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x188))(piVar6,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[0x40]);
  }
  return 1;
}



void fn_00365974(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar3 = 0;
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0x2c + iVar2 != iVar2) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + uVar3 * 0x2c + 8);
      if (iVar2 != 0) {
        iVar2 = fn_006bb544(iVar2,param_2);
        if (iVar2 != 0) {
          return;
        }
        param_2 = param_2 - *(int *)(*(int *)(*(int *)(param_1 + 0x18) + uVar3 * 0x2c + 8) + 0x100);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x2c));
  }
  return;
}



int fn_00365890(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0x2c + iVar1;
  if (iVar4 != iVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0x18) + uVar3 * 0x2c;
      iVar5 = *(int *)(iVar2 + 8);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0xfc) == param_2)) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(iVar4 - iVar1));
  }
  return 0;
}



void fn_00365758(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5
                 )

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_50 [2];
  short local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  fn_00368d50(auStack_50);
  local_4c = 4;
  local_44 = *param_4;
  uStack_40 = param_4[1];
  uStack_3c = param_4[2];
  local_38 = *param_5;
  uStack_34 = param_5[1];
  uStack_30 = param_5[2];
  uVar2 = local_38;
  if (param_2 == 6) {
    uVar2 = 999;
  }
  sVar1 = (short)uVar2;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  if (param_2 != 6) {
    if (param_2 != 7) {
      if (param_2 == 9) {
        local_4e = 0x3e5;
      }
      goto LAB_003657dc;
    }
    sVar1 = 0x3e6;
  }
  local_4e = sVar1;
LAB_003657dc:
  local_48 = param_3;
  iVar3 = fn_003b237c(*(undefined4 *)(param_1 + 0x28),(int)local_4e);
  if (iVar3 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(int **)(param_1 + 0x24),auStack_50,1)
    ;
    iVar3 = fn_003b37b0(*(undefined4 *)(param_1 + 0x28),uVar2);
    iVar5 = 0;
    do {
      iVar4 = iVar3 + iVar5 * 0xe;
      *(undefined2 *)(iVar4 + 0xc) = 1;
      *(undefined2 *)(iVar4 + 0xe) = 0;
      fVar6 = (float)param_5[1];
      fn_00163890();
      iVar5 = iVar5 + 1;
      *(short *)(iVar4 + 0x10) = (short)(int)fVar6;
      *(undefined1 *)(iVar4 + 0x12) = 5;
      *(undefined2 *)(iVar4 + 0x14) = 0;
      *(undefined1 *)(iVar4 + 0x13) = 0;
      *(undefined1 *)(iVar4 + 0x16) = 5;
      *(undefined2 *)(iVar4 + 0x18) = 0;
      *(undefined1 *)(iVar4 + 0x17) = 0;
    } while (iVar5 < 2);
  }
  return;
}


