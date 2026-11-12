#include "002ab3a0_002abbf4.h"



void fn_002aba84(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float in_s0;
  float in_s1;
  float fVar9;
  uint in_s2;
  float local_30;
  float fStack_2c;
  uint uStack_28;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar5 = iVar6;
  if (iVar6 == -1) {
    in_s2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
    iVar1 = (int)((longlong)(int)in_s2 * -0x6db6db6d + ((ulonglong)in_s2 << 0x20) >> 0x20);
    iVar4 = 0;
    iVar1 = (iVar1 >> 4) - (iVar1 >> 0x1f);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x1c) + iVar4 * 0x1c;
        if (*(char *)(iVar2 + 0x15) != '\0') {
          fVar9 = *(float *)(iVar2 + 8) - 200.0;
          in_s0 = *(float *)(iVar2 + 0xc) - 120.0;
          in_s1 = fVar9 * fVar9 + in_s0 * in_s0;
          if ((int)in_s1 < 0x44610000) {
            if (iVar5 != -1) {
              in_s1 = *(float *)(iVar2 + 0x10);
              bVar7 = iVar5 < 0;
              bVar8 = iVar5 == 0;
              iVar2 = (int)((longlong)(int)in_s2 * -0x6db6db6d + ((ulonglong)in_s2 << 0x20) >> 0x20)
              ;
              iVar2 = (iVar2 >> 4) - (iVar2 >> 0x1f);
              if (!bVar7) {
                bVar8 = iVar2 == iVar5;
              }
              if (bVar8 || (bVar7 || iVar2 < iVar5)) {
                in_s0 = 0.0;
              }
              if (!bVar8 && (!bVar7 && iVar5 <= iVar2)) {
                in_s0 = *(float *)(*(int *)(param_1 + 0x1c) + iVar5 * 0x1c + 0x10);
              }
              if (in_s0 <= in_s1) goto LAB_002abb6c;
            }
            iVar5 = iVar4;
          }
        }
LAB_002abb6c:
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  if (iVar5 != -1) {
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(int *)(param_1 + 0xc) = iVar5;
    fn_006a99dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 * 0x1c + 4));
    local_30 = in_s0;
    fStack_2c = in_s1;
    uStack_28 = in_s2;
    uVar3 = fn_006f7a5c(DAT_008977e0);
    fn_001d6660(uVar3,&local_30);
  }
  return;
}



void fn_002aba28(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(0x10c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00276d70(iVar1,param_1);
  }
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 8) = piVar2;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}



void fn_002ab9e8(int param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void fn_002ab774(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar2 = fn_006f75ac(DAT_008977e0);
  iVar3 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
  if ((iVar3 != 0) && (iVar3 = fn_006b5374(iVar2), iVar3 == 0)) {
    fn_00291664(*(undefined4 *)(*(int *)(iVar2 + 8) + 0x80));
  }
  iVar3 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar3;
  if (iVar3 == 0x1a) {
    fn_006f72b4(DAT_008977e0);
    fn_0021a4cc();
  }
  if (((7 < *(int *)(param_1 + 0x10)) &&
      (fVar5 = *(float *)(param_1 + 0x14) + 0.1, *(float *)(param_1 + 0x14) = fVar5,
      0x3f7fffff < (int)fVar5)) && (iVar3 = fn_006b7654(*(undefined4 *)(param_1 + 8)), iVar3 == 0))
  {
    *(undefined4 *)(param_1 + 0x10) = 0x1a;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined1 *)(param_1 + 5) = 0;
    iVar3 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
    if (iVar3 != 0) {
      fn_0016b40c(iVar2);
    }
    if (((**(int **)(DAT_008977e0 + 0x40) == 0) && (iVar2 = fn_00154ac8(0x9e), iVar2 != 0)) &&
       (iVar2 = fn_00154ac8(0x9f), iVar2 == 0)) {
      fn_00144834(0x9f,1);
      uVar1 = DAT_00897800;
      iVar2 = fn_006f75ac(DAT_008977e0);
      fn_00121838(uVar1,DAT_008987a8,1);
      fn_0038ff40(iVar2,0,0,0,0);
      *(undefined1 *)(*(int *)(*(int *)(iVar2 + 8) + 0x80) + 0x1f) = 4;
      uVar4 = fn_0025f988(uVar1,(char *)&DAT_002acfd8);
      fn_0016b4ec(iVar2,uVar4);
      uVar4 = fn_0016ba34(uVar1,DAT_008987a8,(char *)&DAT_002acfec,0);
      fn_0038fee8(iVar2,uVar4);
      fn_001218d4(uVar1,DAT_008987a8);
      fn_00270664(*(undefined4 *)(param_1 + 8),0);
      *(undefined1 *)(param_1 + 4) = 0xf;
      return;
    }
    fn_002abbf4(param_1);
    iVar2 = fn_00154ac8(0x35);
    if ((iVar2 == 0) || (iVar2 = fn_00154ac8(0x4d), iVar2 != 0)) {
      fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),9,0);
    }
    else {
      fn_00144834(0x4d,1);
      fn_006945fc(DAT_008977e0,(char *)&DAT_002ab9dc);
      fn_005fecfc();
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



void fn_002abbf4(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_134 [64];
  float local_f4;
  undefined4 uStack_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  undefined1 auStack_d0 [48];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined1 auStack_70 [76];
  
  puVar8 = *(undefined4 **)(param_1 + 0x20);
  puVar9 = *(undefined4 **)(param_1 + 0x1c);
  puVar7 = puVar9;
  if (puVar9 != puVar8) {
    do {
      (**(code **)*puVar7)(puVar7);
      puVar7 = puVar7 + 7;
    } while (puVar7 != puVar8);
    iVar4 = (int)((longlong)((int)puVar8 - (int)puVar9) * -0x6db6db6d +
                  ((ulonglong)(uint)((int)puVar8 - (int)puVar9) << 0x20) >> 0x20);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * -0x1c;
  }
  iVar4 = fn_006f7a5c(DAT_008977e0);
  iVar4 = fn_00176d68(*(undefined4 *)(iVar4 + 4));
  fn_001694c0(auStack_70,iVar4 + 0x1a8);
  fn_001781f0(auStack_d0,iVar4 + 0x148);
  uVar10 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_94 = 0x3f800000;
  fn_00184220(auStack_134,auStack_70,auStack_d0);
  local_f4 = *(float *)(iVar4 + 0x58);
  uStack_f0 = *(undefined4 *)(iVar4 + 0x68);
  local_ec = *(float *)(iVar4 + 0x78);
  fn_001562b4(iVar4);
  local_e8 = uVar10;
  fn_00156298(iVar4);
  local_e0 = 0x43b40000;
  local_e4 = uVar10;
  iVar1 = fn_006f7358(DAT_008977e0);
  if (iVar1 != 0) {
    local_e0 = 0x45cb2000;
  }
  pfVar2 = (float *)fn_006dcd40(iVar4);
  local_dc = *pfVar2 - local_f4;
  fStack_d8 = pfVar2[2] - local_ec;
  local_d4 = SQRT(local_dc * local_dc + fStack_d8 * fStack_d8);
  fn_002ae4f8(param_1,auStack_134);
  fn_002ad084(param_1,auStack_134);
  fn_002acd78(param_1,auStack_134);
  fn_002ae2c0(param_1,auStack_134);
  fn_002adab8(param_1,auStack_134);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar4 != iVar1) {
    uVar5 = iVar1 - iVar4;
    iVar6 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
    fn_007a8ce0(iVar4,iVar1,(iVar6 >> 4) - (iVar6 >> 0x1f),fn_005fed78);
    if ((int)uVar5 < 0x1c1) {
      fn_007a2e88(iVar4,iVar1,fn_005fed78);
    }
    else {
      fn_007a2e88(iVar4,iVar4 + 0x1c0,fn_005fed78);
      iVar4 = iVar4 + 0x1c0;
      if (iVar4 != iVar1) {
        do {
          local_88 = *(undefined4 *)(iVar4 + 4);
          local_84 = *(undefined4 *)(iVar4 + 8);
          uStack_80 = *(undefined4 *)(iVar4 + 0xc);
          local_7c = *(undefined4 *)(iVar4 + 0x10);
          local_78 = *(undefined1 *)(iVar4 + 0x14);
          local_77 = *(undefined1 *)(iVar4 + 0x15);
          local_74 = *(undefined4 *)(iVar4 + 0x18);
          local_8c = &DAT_00851808;
          iVar3 = fn_005fed78(&local_8c);
          iVar6 = iVar4;
          while (iVar3 != 0) {
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar6 + -0x18);
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar6 + -0x14);
            *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar6 + -0x10);
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + -0xc);
            *(undefined1 *)(iVar6 + 0x14) = *(undefined1 *)(iVar6 + -8);
            *(undefined1 *)(iVar6 + 0x15) = *(undefined1 *)(iVar6 + -7);
            *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + -4);
            iVar3 = fn_005fed78(&local_8c);
            iVar6 = iVar6 + -0x1c;
          }
          iVar4 = iVar4 + 0x1c;
          *(undefined4 *)(iVar6 + 4) = local_88;
          *(undefined4 *)(iVar6 + 8) = local_84;
          *(undefined4 *)(iVar6 + 0xc) = uStack_80;
          *(undefined4 *)(iVar6 + 0x10) = local_7c;
          *(undefined1 *)(iVar6 + 0x14) = local_78;
          *(undefined1 *)(iVar6 + 0x15) = local_77;
          *(undefined4 *)(iVar6 + 0x18) = local_74;
        } while (iVar4 != iVar1);
      }
    }
  }
  uVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar4 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
  fn_002715b0(*(undefined4 *)(param_1 + 8),(iVar4 >> 4) - (iVar4 >> 0x1f));
  return;
}



void fn_002ab3a0(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x14))();
  pcVar2 = *(code **)(**(int **)(param_1 + 0x54) + 0x44);
  if (iVar1 != 0) {
    iVar1 = (*pcVar2)();
    if (iVar1 == 0) {
      fn_006f7ab8(DAT_008977e0);
      fn_001f6464();
      *(undefined1 *)(param_1 + 4) = 10;
      fn_00271248(*(undefined4 *)(param_1 + 8),1);
      (**(code **)(**(int **)(param_1 + 0x54) + 0x40))();
      (**(code **)(**(int **)(param_1 + 0x54) + 0x58))();
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(undefined1 *)(param_1 + 4) = 9;
    fn_00274270(*(undefined4 *)(param_1 + 8));
    fn_006f7ab8(DAT_008977e0);
    fn_001f6464();
    return;
  }
  iVar1 = (*pcVar2)();
  if (iVar1 == 0) {
    fn_006f7ab8(DAT_008977e0);
    fn_001f6464();
    *(undefined1 *)(param_1 + 4) = 10;
    fn_00271248(*(undefined4 *)(param_1 + 8),1);
    (**(code **)(**(int **)(param_1 + 0x54) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x54) + 0x58))();
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 4) = 0xb;
    fn_00271248(*(undefined4 *)(param_1 + 8),1);
    *(undefined1 *)(param_1 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar1 = fn_006f7a5c(DAT_008977e0);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  uVar4 = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  return;
}


