#include "003f2f54_003f4634.h"



void fn_003f4634(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = &DAT_00834eb4;
  return;
}



undefined4 fn_003f448c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar4 = (undefined4 *)fn_006f7770(DAT_008977e0);
  local_38 = *puVar4;
  uStack_34 = puVar4[1];
  uStack_30 = puVar4[2];
  iVar5 = fn_002d8370(0xffffffff);
  if ((iVar5 == 0) || (iVar5 = fn_002dbd0c(), iVar5 != 0)) {
    iVar10 = 0;
    iVar5 = (param_1[2] - param_1[1]) / 0x34;
    if (0 < iVar5) {
      do {
        psVar9 = (short *)(param_1[1] + iVar10 * 0x34);
        if (((char)psVar9[2] != '\0') && (iVar6 = fn_00368c90(param_2,(int)*psVar9), iVar6 == 0)) {
          if (*(char *)((int)psVar9 + 0xb) == -1) {
            uVar3 = (**(code **)(*param_1 + 0x44))(param_1,(int)*psVar9);
            *(undefined1 *)((int)psVar9 + 0xb) = uVar3;
          }
          fn_005f1940(&local_38,psVar9 + 8);
          fVar11 = in_s0;
          uVar7 = (**(code **)(*param_1 + 0x1c))(param_1,(int)*(char *)((int)psVar9 + 0xb),0);
          in_s0 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
          uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 < in_s0) << 0x1f |
                  (uint)(fVar11 == in_s0) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar11) || NAN(in_s0)) << 0x1c;
          bVar2 = (byte)(uVar1 >> 0x18);
          if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
             (iVar6 = (**(code **)(*param_1 + 0x40))(param_1,(int)*psVar9), iVar6 != 0)) {
            uVar7 = fn_006f7508(DAT_008977e0);
            iVar8 = fn_006c32a8(uVar7,(int)*(short *)(iVar6 + 4));
            if (iVar8 == 0) {
              uVar7 = fn_006f7508(DAT_008977e0);
              fn_006c3400(uVar7,(int)*(short *)(iVar6 + 4));
            }
            else {
              (**(code **)(*param_1 + 0x6c))(param_1,iVar6,0,iVar10);
              in_s0 = fVar11;
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x003f42a4) */
/* WARNING: Removing unreachable block (ram,0x003f42a8) */
/* WARNING: Removing unreachable block (ram,0x003f42ac) */
/* WARNING: Removing unreachable block (ram,0x003f42b0) */
/* WARNING: Removing unreachable block (ram,0x003f42b4) */
/* WARNING: Removing unreachable block (ram,0x003f4240) */
/* WARNING: Removing unreachable block (ram,0x003f4244) */
/* WARNING: Removing unreachable block (ram,0x003f4248) */
/* WARNING: Removing unreachable block (ram,0x003f424c) */
/* WARNING: Removing unreachable block (ram,0x003f4250) */
/* WARNING: Removing unreachable block (ram,0x003f42d8) */

void fn_003f4190(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  puVar7 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  iVar6 = (*(int *)(*(int *)(param_1 + 0x28) + 8) - *(int *)(*(int *)(param_1 + 0x28) + 4)) / 0x28;
  local_2c = 0;
  uVar1 = param_2[1] - *param_2 >> 2;
  if (uVar1 != 0) {
    local_38 = uVar1;
    puVar2 = &local_30;
    if (0x1f < uVar1) {
      puVar2 = &local_38;
    }
    local_30 = 0x20;
    local_34 = *puVar2;
    puVar7 = (undefined4 *)fn_00100fc6(local_34 << 2,0);
    puVar10 = puVar7;
    for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = local_2c;
      }
      puVar10 = puVar10 + 1;
    }
    fn_001008c4(0,0,0);
    local_3c = puVar7 + local_34;
    puVar10 = puVar7 + uVar1;
  }
  iVar8 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar9 = 0;
      puVar7[iVar8] = 0;
      if (0 < iVar6) {
        do {
          iVar3 = fn_003b3780(*(undefined4 *)(param_1 + 0x28),iVar9);
          if (*(short *)(iVar3 + 10) == **(short **)(*param_2 + iVar8 * 4)) {
            puVar7[iVar8] = (int)*(short *)(iVar3 + 6);
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar1);
  }
  iVar8 = fn_00163868(100);
  iVar6 = -1;
  iVar9 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar8 = iVar8 - puVar7[iVar9];
      if (((iVar8 < 0) || ((iVar6 < 0 && (0 < (int)puVar7[iVar9])))) && (iVar6 = iVar9, iVar8 < 0))
      break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar1);
  }
  iVar8 = 0;
  if (0 < (int)uVar1) {
    do {
      bVar11 = iVar8 == iVar6;
      iVar9 = *(int *)(*param_2 + iVar8 * 4);
      iVar8 = iVar8 + 1;
      if (bVar11) {
        *(undefined1 *)(iVar9 + 4) = 1;
      }
      else {
        *(undefined1 *)(iVar9 + 4) = 0;
      }
    } while (iVar8 < (int)uVar1);
  }
  puVar4 = puVar7;
  if (puVar10 < puVar7) {
    do {
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar10);
  }
  fn_002feef8(puVar7,(int)local_3c - (int)puVar7 >> 2,0);
  return;
}



void fn_003f33d8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = fn_002d8370(0xffffffff);
  if ((iVar2 != 0) && (iVar2 = fn_002dbc64(), iVar2 != 0)) {
    iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = iVar3 + 1;
        iVar3 = *(int *)(param_1 + 4) + iVar3 * 0x34;
        cVar1 = *(char *)(iVar3 + 4);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar3 + 6);
        }
        if (bVar5 && cVar1 == '\x01') {
          *(undefined1 *)(iVar3 + 4) = 1;
          *(undefined1 *)(iVar3 + 6) = 0;
        }
        iVar3 = iVar4;
      } while (iVar4 < iVar2);
    }
  }
  return;
}



void fn_003f3224(int *param_1)

{
  int iVar1;
  int iVar2;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1U;
  if ((uint)(param_1[0x16] * 0x1e) < iVar1 + 1U) {
    (**(code **)(*param_1 + 0x2c))(param_1,4);
  }
  else {
    (**(code **)(*(int *)param_1[1] + 0x28))((int *)param_1[1],param_1 + 0x1a);
  }
  iVar1 = fn_006aff38(param_1[5],0);
  if (iVar1 == 0) {
    fn_003f2fd8(param_1,*(int *)(param_1[5] + 0x170) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x003f333c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))(param_1,6);
    return;
  }
  if ((*(byte *)(param_1[5] + 0x39c) & 8) != 0) {
    iVar1 = param_1[1];
    iVar2 = param_1[1];
    local_18 = (*(float *)(iVar1 + 0x20) - (float)param_1[0x1a]) + *(float *)(iVar2 + 0x20);
    local_14 = (*(float *)(iVar1 + 0x24) - (float)param_1[0x1b]) + *(float *)(iVar2 + 0x24);
    local_10 = (*(float *)(iVar1 + 0x28) - (float)param_1[0x1c]) + *(float *)(iVar2 + 0x28);
    fn_003f2fd8(param_1,&local_18);
    (**(code **)(*param_1 + 0x2c))(param_1,6);
  }
  return;
}



void fn_003f31cc(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x24))((int *)param_1[1],param_1 + 0x1a);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_00163868(param_1[0x17]);
  param_1[0x16] = iVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x003f3218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,5);
  return;
}



void fn_003f3174(int *param_1)

{
  fn_00215cb4(param_1[5],param_1 + 0x19,param_1[0x18]);
  if (*(byte *)(param_1 + 0x19) < 2) {
    return;
  }
  fn_003f2fd8(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x003f31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,6);
  return;
}



void fn_003f2fd8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_2f8 [740];
  
  if (param_2 == (undefined4 *)0x0) {
    fVar12 = 2.0;
    fVar5 = 1.0;
    do {
      fn_005f65fc();
      fVar6 = in_s0 * fVar12 - fVar5;
      fn_005f65fc();
      fVar7 = in_s0 * fVar12 - fVar5;
      fn_005f65fc();
      fVar8 = in_s0 * fVar12 - fVar5;
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
      fVar11 = *(float *)(iVar1 + 0x28);
      fVar9 = (float)VectorSignedToFloat(*(undefined4 *)
                                          (*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xe8),
                                         (byte)(in_fpscr >> 0x16) & 3);
      fVar10 = fVar5 / SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
      in_s0 = *(float *)(iVar1 + 0x24) + fVar7 * fVar10 * fVar9;
      *(float *)(param_1 + 0x68) = *(float *)(iVar1 + 0x20) + fVar6 * fVar10 * fVar9;
      *(float *)(param_1 + 0x6c) = in_s0;
      *(float *)(param_1 + 0x70) = fVar11 + fVar8 * fVar10 * fVar9;
      fn_00101a1c(auStack_2f8,&DAT_005f4c78,0x48,10);
      piVar2 = (int *)fn_006f7388(DAT_008977e0);
      iVar1 = (**(code **)(*piVar2 + 0x10))
                        (piVar2,4,auStack_2f8,10,param_1 + 0x68,
                         *(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0x20,0);
    } while (iVar1 != 0);
  }
  else {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    *(undefined4 *)(param_1 + 0x68) = *param_2;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = uVar4;
  }
  fVar5 = *(float *)(param_1 + 0x68) - *(float *)(*(int *)(param_1 + 0x14) + 0x20);
  fn_00525bd0();
  *(float *)(param_1 + 0x1c) = fVar5 * 0.024543693;
  return;
}



void fn_003f2f54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003432cc();
  puVar1[5] = 0xffffffff;
  *puVar1 = &DAT_00834e54;
  return;
}


