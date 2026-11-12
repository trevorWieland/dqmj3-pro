#include "00343558_00343ca8.h"



void fn_0034394c(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float in_s1;
  float in_s2;
  undefined8 uVar9;
  ulonglong uVar10;
  uint local_d8;
  uint local_d4;
  int local_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_48 [36];
  
  puVar1 = (undefined8 *)fn_006f7770(DAT_008977e0);
  uVar9 = *puVar1;
  uVar10 = (ulonglong)*(uint *)(puVar1 + 1);
  iVar2 = fn_002afe44();
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  fVar8 = 0.0;
  fn_0079b3c0(&local_d8,iVar2);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      fn_002afe84((int)(short)iVar7);
      fVar8 = (float)uVar9 - fVar8;
      in_s1 = (float)((ulonglong)uVar9 >> 0x20) - in_s1;
      in_s2 = (float)uVar10 - in_s2;
      fVar8 = fVar8 * fVar8 + in_s1 * in_s1 + in_s2 * in_s2;
      *(float *)(local_d8 + iVar7 * 4) = fVar8;
      in_s1 = *(float *)(param_1 + 0x1c);
      if (in_s1 <= fVar8) {
        iVar6 = 0x14;
        do {
          piVar3 = (int *)(*(int *)(param_1 + 8) + iVar6 * 0x28);
          if ((*piVar3 != 0) && (piVar3[2] == iVar7)) {
            if (iVar6 != -1) {
              fn_00343ca8(param_1);
            }
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x29);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      fVar8 = *(float *)(param_1 + 0x18);
      in_s1 = *(float *)(local_d8 + iVar7 * 4);
      if (in_s1 <= fVar8) {
        iVar6 = 0x14;
        do {
          piVar3 = (int *)(*(int *)(param_1 + 8) + iVar6 * 0x28);
          if ((*piVar3 != 0) && (piVar3[2] == iVar7)) {
            if (iVar6 != -1) goto LAB_00343b3c;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x29);
        if (*(char *)(param_1 + 0x24) == '\0') {
          uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 4));
          fn_00102908(auStack_48,0x10,&DAT_003433c0,uVar4);
        }
        else {
          uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 4));
          fn_00102908(auStack_48,0x10,(char *)&DAT_003433b8,uVar4);
        }
        iVar6 = 0x14;
        do {
          if (*(int *)(*(int *)(param_1 + 8) + iVar6 * 0x28) == 0) goto LAB_00343b08;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x29);
        iVar6 = -1;
LAB_00343b08:
        fn_00101a50(&fStack_c8,0x80,L"rom:/data/Field/Hit/%s/%s_W_%03d.bin",auStack_48,auStack_48,
                     iVar7);
        fn_003433c4(param_1,iVar6,&fStack_c8,0,iVar7,1);
      }
LAB_00343b3c:
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  uVar9 = 0x3fddb3d7;
  iVar2 = 0x14;
  do {
    piVar3 = (int *)(*(int *)(param_1 + 8) + iVar2 * 0x28);
    if ((*piVar3 != 0) && ((short)piVar3[1] == 1)) {
      iVar7 = fn_00145aac();
      if (iVar7 == 1) {
        *(undefined2 *)(piVar3 + 1) = 2;
        fn_002afe84((int)*(short *)(*(int *)(param_1 + 8) + iVar2 * 0x28 + 8));
        piVar3 = (int *)(*(int *)(param_1 + 8) + iVar2 * 0x28);
        local_cc = fVar8;
        fStack_c8 = in_s1;
        fStack_c4 = in_s2;
        if (*piVar3 == 0) {
          iVar7 = piVar3[4];
        }
        else {
          iVar7 = fn_00145ac0();
        }
        uVar4 = fn_00257da8(*(undefined4 *)(param_1 + 0x14),0,iVar7,&local_cc);
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 0x28 + 0xc) = uVar4;
        fn_002afd48();
        fVar8 = fVar8 * (float)uVar9;
        fn_00239ffc(*(undefined4 *)(param_1 + 0x14),0,
                     *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 0x28 + 0xc),&local_cc);
      }
      else {
        piVar3[8] = piVar3[8] + 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  uVar5 = local_d8;
  if (local_d4 < local_d8) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != local_d4);
  }
  fn_001008c4(local_d8,(int)(local_d0 - local_d8) >> 2,0);
  return;
}



void fn_00343880(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  float in_s0;
  float fVar2;
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(char *)(param_1 + 0x24) = (char)param_3;
  if (param_3 == 0) {
    uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00102908(auStack_20,0x10,&DAT_003433c0,uVar1);
  }
  else {
    uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00102908(auStack_20,0x10,(char *)&DAT_003433b8,uVar1);
  }
  fn_002afd5c(auStack_20,*(undefined4 *)(param_1 + 0x20));
  fn_002afd48();
  fVar2 = in_s0 * 1.7320508 + 200.0;
  *(float *)(param_1 + 0x18) = fVar2 * fVar2;
  *(float *)(param_1 + 0x1c) = (fVar2 + 300.0) * (fVar2 + 300.0);
  return;
}



void fn_00343558(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float in_s2;
  uint local_e0;
  uint local_dc;
  int local_d8;
  undefined1 auStack_d0 [128];
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_40 [28];
  
  uVar1 = fn_002afe44();
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  fVar7 = 0.0;
  fn_0079b3c0(&local_e0,uVar1);
  iVar6 = 0;
  iVar2 = fn_002afe44();
  if (0 < iVar2) {
    do {
      fn_002afe84((int)(short)iVar6);
      fVar8 = param_2[1] - in_s1;
      in_s1 = param_2[2] - in_s2;
      in_s2 = (*param_2 - fVar7) * (*param_2 - fVar7) + fVar8 * fVar8 + in_s1 * in_s1;
      *(float *)(local_e0 + iVar6 * 4) = in_s2;
      fVar7 = *(float *)(param_1 + 0x1c);
      if (fVar7 <= in_s2) {
        iVar2 = 0x14;
        do {
          piVar5 = (int *)(*(int *)(param_1 + 8) + iVar2 * 0x28);
          if ((*piVar5 != 0) && (piVar5[2] == iVar6)) {
            if (iVar2 != -1) {
              fn_00343ca8(param_1);
            }
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x29);
      }
      iVar6 = iVar6 + 1;
      iVar2 = fn_002afe44();
    } while (iVar6 < iVar2);
  }
  iVar6 = 0;
  iVar2 = fn_002afe44();
  if (0 < iVar2) {
    do {
      fVar8 = *(float *)(param_1 + 0x18);
      fVar7 = *(float *)(local_e0 + iVar6 * 4);
      if (fVar7 <= fVar8) {
        iVar2 = 0x14;
        do {
          piVar5 = (int *)(*(int *)(param_1 + 8) + iVar2 * 0x28);
          if ((*piVar5 != 0) && (piVar5[2] == iVar6)) {
            if (iVar2 != -1) goto LAB_003436a8;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x29);
        if (*(char *)(param_1 + 0x24) == '\0') {
          uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 4));
          fn_00102908(auStack_40,0x10,&DAT_003433c0,uVar1);
        }
        else {
          uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 4));
          fn_00102908(auStack_40,0x10,(char *)&DAT_003433b8,uVar1);
        }
        iVar2 = 0x14;
        do {
          if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 0x28) == 0) goto LAB_0034377c;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x29);
        iVar2 = -1;
LAB_0034377c:
        fn_00101a50(auStack_d0,0x80,L"rom:/data/Field/Hit/%s/%s_W_%03d.bin",auStack_40,auStack_40,
                     iVar6);
        fn_003433c4(param_1,iVar2,auStack_d0,0,iVar6,0);
        fn_002afe84((int)*(short *)(*(int *)(param_1 + 8) + iVar2 * 0x28 + 8));
        piVar5 = (int *)(*(int *)(param_1 + 8) + iVar2 * 0x28);
        local_50 = fVar7;
        fStack_4c = fVar8;
        fStack_48 = in_s2;
        if (*piVar5 == 0) {
          iVar4 = piVar5[4];
        }
        else {
          iVar4 = fn_00145ac0();
        }
        uVar1 = fn_00257da8(*(undefined4 *)(param_1 + 0x14),0,iVar4,&local_50);
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 0x28 + 0xc) = uVar1;
        fn_002afd48();
        fn_00239ffc(*(undefined4 *)(param_1 + 0x14),0,
                     *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 0x28 + 0xc),&local_50);
      }
LAB_003436a8:
      iVar6 = iVar6 + 1;
      iVar2 = fn_002afe44();
    } while (iVar6 < iVar2);
  }
  uVar3 = local_e0;
  if (local_dc < local_e0) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != local_dc);
  }
  fn_001008c4(local_e0,(int)(local_d8 - local_e0) >> 2,0);
  return;
}



void fn_00343ca8(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(param_1 + 8) + param_2 * 0x28 + 0xc) != -1) {
    fn_00257de0(*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(*(int *)(param_1 + 8) + param_2 * 0x28) != 0) {
    fn_0012d73c();
    *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 0x28) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 8) + param_2 * 0x28 + 0x10) != 0) {
    fn_00143b48();
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + param_2 * 0x28);
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 3;
  return;
}


