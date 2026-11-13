#include "00210af8_002113c8.h"



undefined4 fn_002113c8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float in_s0;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar4 = 1;
  if (0 < param_2) {
    uVar4 = fn_001d99a0(param_1,param_2,0);
    uVar1 = fn_006f7a9c(DAT_008977e0);
    iVar2 = fn_006b77dc(uVar1,param_2);
    if (iVar2 != 0) {
      uVar1 = fn_006f7a9c(DAT_008977e0);
      iVar2 = fn_00279bbc(uVar1,param_2 + 1);
      if (iVar2 != 0) {
        fn_001d962c(param_1,param_2 + 1,param_2 + 2,param_2 + 3,0);
        iVar2 = *(int *)(param_1[0x56] + 0xc);
        if (-1 < iVar2) {
          uVar1 = fn_006f7388(DAT_008977e0);
          fn_006b4c0c(uVar1,1,iVar2);
          in_s0 = in_s0 * 0.5;
          if ((int)in_s0 < 0x43c80000) {
            in_s0 = 160000.0;
          }
          else {
            in_s0 = in_s0 * in_s0;
          }
          param_1[0x66] = (int)in_s0;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x54))(param_1,1);
  local_34 = 0x43b40000;
  uStack_30 = 0x43cd0000;
  uStack_2c = 0x3dcccccd;
  iVar2 = fn_006f7358(DAT_008977e0);
  if (iVar2 != 0) {
    local_34 = 0x463b8000;
    uStack_30 = 0x47ea6000;
    param_1[0x4e] = param_1[0x4e] | 8;
  }
  fn_001d96a0(param_1,&local_34);
  switch((char)param_1[0x5f]) {
  case '\0':
  case '\x01':
  case '\x04':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\x10':
  case '\x11':
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    fn_001d9bb4(param_1,&local_28);
  }
  fn_0021107c(param_1,param_2);
  uVar3 = (uint)((char)param_1[0x5f] == '\x10');
  param_1[0x4e] = param_1[0x4e] & 0xffffffdfU | uVar3 << 5;
  (**(code **)(*param_1 + 0x10c))(param_1,uVar3);
  param_1[99] = 0x43b40000;
  return uVar4;
}



void fn_0021107c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_34 [4];
  
  if (param_2 == 0xffffffff) {
    return;
  }
  iVar2 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= param_2))
  {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4) + param_2 * 0x34;
  }
  local_34[0] = fn_006eb378(iVar2);
  local_34[1] = fn_006eb368(iVar2);
  local_34[2] = fn_006eb388(iVar2);
  if ((local_34[0] != 0 || local_34[1] != 0) || local_34[2] != 0) {
    uVar14 = local_34[0];
    if (0 < (int)local_34[0]) {
      uVar14 = local_34[1];
    }
    if (((int)uVar14 < 1) || (local_34[0] == local_34[1])) {
      puVar7 = local_34;
      if ((int)local_34[0] < (int)local_34[1]) {
        puVar7 = local_34 + 1;
      }
      if ((int)*puVar7 < (int)local_34[2]) {
        puVar7 = local_34 + 2;
      }
      uVar14 = *puVar7;
      if ((int)uVar14 < 10) {
        piVar15 = (int *)(param_1 + 0x148);
        iVar2 = (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c)) / 0xc;
        if ((int)uVar14 < iVar2) {
          uVar12 = uVar14;
          uVar5 = uVar14;
          if ((int)uVar14 < 0) {
            uVar12 = 0;
            uVar5 = uVar12;
          }
          for (; (int)uVar12 < iVar2; uVar12 = uVar12 + 1) {
          }
          iVar2 = *(int *)(param_1 + 0x14c) + uVar5 * 0xc;
        }
        else {
          uVar12 = uVar14;
          if ((int)(*(uint *)(param_1 + 0x154) & 0x3fffffff) < (int)uVar14) {
            if (((*piVar15 == 0) || ((*(uint *)(param_1 + 0x154) & 0xc0000000) != 0x40000000)) ||
               (puVar3 = (undefined4 *)
                         (**(code **)(*(int *)*piVar15 + 8))((int *)*piVar15,uVar14 * 0xc),
               puVar3 == (undefined4 *)0x0)) {
              uVar12 = *(uint *)(param_1 + 0x154) & 0x3fffffff;
            }
            else {
              iVar2 = 0;
              puVar8 = *(undefined4 **)(param_1 + 0x14c);
              puVar9 = *(undefined4 **)(param_1 + 0x150);
              puVar4 = puVar3;
              if (puVar8 != puVar9) {
                do {
                  if (puVar4 != (undefined4 *)0x0) {
                    uVar16 = puVar8[1];
                    uVar17 = puVar8[2];
                    *puVar4 = *puVar8;
                    puVar4[1] = uVar16;
                    puVar4[2] = uVar17;
                  }
                  puVar8 = puVar8 + 3;
                  puVar4 = puVar4 + 3;
                } while (puVar8 != puVar9);
                iVar2 = (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c)) / 0xc;
              }
              uVar5 = *(uint *)(param_1 + 0x14c);
              if (uVar5 != 0) {
                uVar10 = *(uint *)(param_1 + 0x150);
                uVar1 = uVar5;
                if (uVar5 < uVar10) {
                  iVar13 = 1;
                  if (1 < (int)(uVar10 - uVar5) / 0xc + 1) {
                    do {
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < (int)(uVar10 - uVar5) / 0xc + 1);
                  }
                }
                else {
                  for (; uVar1 != uVar10; uVar1 = uVar1 + 0xc) {
                  }
                }
                *(uint *)(param_1 + 0x150) = uVar5;
                (**(code **)(*(int *)*piVar15 + 0xc))
                          ((int *)*piVar15,*(undefined4 *)(param_1 + 0x14c));
              }
              *(undefined4 **)(param_1 + 0x14c) = puVar3;
              *(undefined4 **)(param_1 + 0x150) = puVar3 + iVar2 * 3;
              *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xc0000000 | uVar14;
            }
          }
          for (iVar2 = (*(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x14c)) / 0xc;
              iVar2 < (int)uVar12; iVar2 = iVar2 + 1) {
            puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14c) + iVar2 * 0xc);
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = 0xffffffff;
              puVar3[1] = 0xffffffff;
              puVar3[2] = 0xffffffff;
            }
          }
          iVar2 = *(int *)(param_1 + 0x14c) + uVar12 * 0xc;
        }
        iVar13 = 0;
        *(int *)(param_1 + 0x150) = iVar2;
        if (0 < (int)uVar14) {
          do {
            iVar2 = -1;
            if (iVar13 < (int)local_34[0]) {
              iVar2 = iVar13;
            }
            iVar11 = -1;
            if (iVar13 < (int)local_34[1]) {
              iVar11 = iVar13;
            }
            iVar6 = -1;
            if (iVar13 < (int)local_34[2]) {
              iVar6 = iVar13;
            }
            fn_001da490(param_1,iVar13,iVar2,iVar11,iVar6);
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)uVar14);
        }
      }
    }
  }
  return;
}



void fn_00211070(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x184) = param_2;
  *(undefined4 *)(param_1 + 0x194) = param_3;
  return;
}



void fn_00210fdc(int param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = fn_006aa2c4();
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x58);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    return;
  }
  fVar3 = *(float *)(param_1 + 0x20) - *param_2;
  fVar5 = *(float *)(param_1 + 0x24) - param_2[1];
  fVar4 = *(float *)(param_1 + 0x28) - param_2[2];
  if (fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 <= *(float *)(param_1 + 0x198)) {
    fn_001dbc6c(param_1,1);
    return;
  }
  fn_001dbc6c(param_1,0);
  return;
}



void fn_00210f78(int *param_1)

{
  int *piVar1;
  
  if ((char)param_1[0x5f] == '\x01') {
    piVar1 = (int *)fn_006f72e0(DAT_008977e0);
    (**(code **)(*piVar1 + 0x3c))();
                    /* WARNING: Could not recover jumptable at 0x00210fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
  fn_001d9bc8(param_1);
  return;
}



void fn_00210f28(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081c540;
  fn_002feef8(param_1[2]);
  *param_1 = &DAT_0081e074;
  if (param_1[1] != 0) {
    iVar1 = fn_001588d4(param_1[1] + 4);
    fn_002feef8(iVar1 + -4);
  }
  fn_002feef8(param_1);
  return;
}



void fn_00210c18(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081c52c;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  *param_1 = &DAT_0081e074;
  if (param_1[1] != 0) {
    iVar1 = fn_001588d4(param_1[1] + 4);
    fn_002feef8(iVar1 + -4);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 *
fn_00210af8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined8 param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = CONCAT44(param_6,param_8);
  uVar6 = CONCAT44(param_5,param_7);
  *param_1 = &DAT_0081e074;
  param_1[1] = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0026e47c(iVar1,param_2);
  }
  iVar2 = param_1[1];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      iVar2 = fn_001588d4(iVar2 + 4);
      fn_002feef8(iVar2 + -4);
    }
    param_1[1] = iVar1;
  }
  param_1[2] = 0;
  *param_1 = &DAT_0081c52c;
  piVar3 = (int *)fn_00145b00(0x30,&DAT_00812c8c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = param_3;
    *(undefined1 *)(piVar3 + 10) = 0;
    *piVar3 = (int)&DAT_008517e8;
    piVar3[2] = (int)((ulonglong)uVar6 >> 0x20);
    piVar3[3] = (int)((ulonglong)uVar5 >> 0x20);
    piVar3[6] = (int)uVar6;
    piVar3[7] = (int)uVar5;
    piVar3[8] = (int)param_9;
    piVar3[9] = (int)((ulonglong)param_9 >> 0x20);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    param_1[2] = piVar3;
  }
  return param_1;
}


