#include "00476a94_00477130.h"



void fn_00477130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_008b637e == '\0') {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)fn_001775e8(DAT_008b63d8,DAT_008b637e,param_3);
    uVar2 = *puVar1;
  }
  puVar1 = (undefined4 *)fn_00474e88(param_1,param_2,uVar2);
  *puVar1 = &DAT_0085344c;
  return;
}



undefined4 fn_00476a94(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int *local_a8;
  int iStack_a4;
  uint local_a0;
  int *local_9c;
  undefined *puStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int **local_74;
  uint local_68;
  uint local_64;
  undefined1 auStack_58 [8];
  int local_50;
  int local_4c;
  int iStack_30;
  undefined4 *local_2c;
  int iStack_28;
  
  uVar14 = 0x3f800000;
  uVar15 = 0x37800000;
  fVar13 = 0.0;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  while ((fn_0013d0fc(&local_68), *(int *)(param_1 + 0x20) != 0 &&
         (uVar4 = *(uint *)(**(int **)(param_1 + 0x1c) + 0x34),
         uVar4 < local_64 ||
         local_64 - uVar4 < (uint)(*(uint *)(**(int **)(param_1 + 0x1c) + 0x30) <= local_68)))) {
    fVar10 = fVar13;
    fn_0013d0fc(auStack_58);
    iVar5 = **(int **)(param_1 + 0x1c);
    puStack_98 = &DAT_008528bc;
    local_9c = *(int **)(iVar5 + 8);
    piVar7 = local_9c + 1;
    do {
      bVar8 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar8);
    *piVar7 = *piVar7 + 1;
    local_94 = *(undefined4 *)(iVar5 + 0x10);
    local_90 = *(undefined4 *)(iVar5 + 0x14);
    uStack_8c = *(undefined4 *)(iVar5 + 0x18);
    uStack_88 = *(undefined4 *)(iVar5 + 0x1c);
    uStack_84 = *(undefined4 *)(iVar5 + 0x20);
    uStack_80 = *(undefined4 *)(iVar5 + 0x24);
    uStack_7c = *(undefined4 *)(iVar5 + 0x28);
    local_74 = &local_9c;
    fn_0013d0fc(&local_a8);
    uVar11 = CONCAT44(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x18),uVar14);
    if (((unsigned int)(DAT_008b6378) >> 24) & 0xff == '\0') {
      DAT_008e6c94 = fn_004ba5ac();
      if (DAT_008e6c94 == 0) {
        DAT_008e6c94 = 0x1105;
      }
      DAT_008e7654 = 1;
      do {
        (&DAT_008e6c94)[DAT_008e7654] = (&DAT_008e6c90)[DAT_008e7654] * 0x10dcd;
        DAT_008e7654 = DAT_008e7654 + 1;
      } while (DAT_008e7654 < 0x270);
      DAT_008b6378 = (DAT_008b6378 & ~((unsigned int)0xff << 24)) | (((unsigned int)('\x01') & 0xff) << 24);
    }
    fVar13 = (float)uVar11;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar10) << 0x1f |
            (uint)(fVar13 == fVar10) << 0x1e;
    uVar9 = uVar4 | (uint)(NAN(fVar13) || NAN(fVar10)) << 0x1c;
    bVar1 = (byte)(uVar4 >> 0x18);
    fVar13 = fVar10;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
      uVar2 = fn_00491a34(&DAT_008e6c94,0x10000);
      fVar10 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar9 >> 0x16) & 3);
      fVar10 = fVar10 * (float)uVar15 * (float)uVar11;
    }
    fVar12 = (float)((ulonglong)uVar11 >> 0x20);
    uVar4 = uVar9 & 0xfffffff | (uint)(fVar10 < fVar12) << 0x1f;
    in_fpscr = uVar4 | (uint)(NAN(fVar10) || NAN(fVar12)) << 0x1c;
    if ((byte)(uVar4 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      uVar4 = *(uint *)(*(int *)(param_1 + 0x4c) + 0x10);
      if (*(int *)(*(int *)(param_1 + 0x4c) + 0x14) == 0) {
        if ((int)uVar4 < 0) {
          local_50 = (int)local_a8 + uVar4;
          local_4c = iStack_a4 - (((int)-uVar4 >> 0x1f) + (uint)(local_a8 < (int *)-uVar4));
        }
        else {
          local_50 = uVar4 + (int)local_a8;
          local_4c = ((int)uVar4 >> 0x1f) + iStack_a4 + (uint)CARRY4(uVar4,(uint)local_a8);
        }
      }
      else {
        if ((int)uVar4 < 0) {
          iVar5 = iStack_a4 - (((int)-uVar4 >> 0x1f) + (uint)(local_a8 < (int *)-uVar4));
        }
        else {
          iVar5 = iStack_a4 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,(uint)local_a8);
        }
        local_a0 = (int)local_a8 + uVar4;
        uVar4 = fn_004ba724();
        if ((int)uVar4 < 0) {
          local_4c = iVar5 - (((int)-uVar4 >> 0x1f) + (uint)(local_a0 < -uVar4));
        }
        else {
          local_4c = iVar5 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,local_a0);
        }
        local_50 = local_a0 + uVar4;
      }
      fn_0074a6d0(param_1 + 0x30,local_74,&local_50);
    }
    puVar3 = (uint *)(local_9c + 1);
    do {
      uVar4 = *puVar3 - 1;
      bVar8 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar8);
    *puVar3 = uVar4;
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(local_9c + 2);
    }
    if (bVar8 && uVar4 == 0) {
      *(undefined1 *)(local_9c + 2) = 1;
      (**(code **)(*local_9c + 4))(local_9c);
    }
    fn_0013d0fc(&local_a8);
    iVar5 = **(int **)(param_1 + 0x1c);
    puStack_98 = &DAT_008528bc;
    local_9c = *(int **)(iVar5 + 8);
    piVar7 = local_9c + 1;
    do {
      bVar8 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar8);
    *piVar7 = *piVar7 + 1;
    local_94 = *(undefined4 *)(iVar5 + 0x10);
    local_90 = *(undefined4 *)(iVar5 + 0x14);
    uStack_8c = *(undefined4 *)(iVar5 + 0x18);
    uStack_88 = *(undefined4 *)(iVar5 + 0x1c);
    uStack_84 = *(undefined4 *)(iVar5 + 0x20);
    uStack_80 = *(undefined4 *)(iVar5 + 0x24);
    uStack_7c = *(undefined4 *)(iVar5 + 0x28);
    piVar7 = (int *)**(int **)(param_1 + 0x1c);
    if (piVar7 != *(int **)(param_1 + 0x1c)) {
      *(int *)piVar7[1] = *piVar7;
      *(int *)(*piVar7 + 4) = piVar7[1];
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      piVar6 = (int *)piVar7[2];
      puVar3 = (uint *)(piVar6 + 1);
      do {
        uVar4 = *puVar3 - 1;
        bVar8 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar8);
      *puVar3 = uVar4;
      bVar8 = uVar4 == 0;
      if (bVar8) {
        uVar4 = (uint)*(byte *)(piVar6 + 2);
      }
      if (bVar8 && uVar4 == 0) {
        *(undefined1 *)(piVar6 + 2) = 1;
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *piVar7 = *(int *)(param_1 + 0x10);
      *(int **)(param_1 + 0x10) = piVar7;
    }
    puVar3 = (uint *)(local_9c + 1);
    do {
      uVar4 = *puVar3 - 1;
      bVar8 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar8);
    *puVar3 = uVar4;
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(local_9c + 2);
    }
    if (bVar8 && uVar4 == 0) {
      *(undefined1 *)(local_9c + 2) = 1;
      (**(code **)(*local_9c + 4))(local_9c);
    }
  }
  fn_0013d0fc(&local_68);
  if ((*(int *)(param_1 + 0x48) == 0) ||
     (uVar9 = *(uint *)(**(int **)(param_1 + 0x44) + 0x30),
     uVar4 = *(uint *)(**(int **)(param_1 + 0x44) + 0x34),
     local_64 <= uVar4 && (uint)(uVar9 <= local_68) <= local_64 - uVar4)) {
    uVar14 = 0;
  }
  else {
    fn_0013d0fc(&uStack_80,local_68 - uVar9);
    fn_0074a8dc(&local_a8,param_1 + 0x30,&uStack_80);
    if (local_2c != (undefined4 *)0x0) {
      *local_2c = local_a8;
    }
    if (param_3 != 0) {
      *(uint *)(param_3 + 4) = local_a0;
      *(int **)(param_3 + 8) = local_9c;
      *(undefined **)(param_3 + 0xc) = puStack_98;
      *(undefined4 *)(param_3 + 0x10) = local_94;
      *(undefined4 *)(param_3 + 0x14) = local_90;
      *(undefined4 *)(param_3 + 0x18) = uStack_8c;
      *(undefined4 *)(param_3 + 0x1c) = uStack_88;
    }
    puVar3 = (uint *)(local_a8 + 1);
    do {
      uVar4 = *puVar3 - 1;
      bVar8 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar8);
    *puVar3 = uVar4;
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(local_a8 + 2);
    }
    if (bVar8 && uVar4 == 0) {
      *(undefined1 *)(local_a8 + 2) = 1;
      (**(code **)(*local_a8 + 4))();
    }
    uVar14 = 1;
  }
  return uVar14;
}


