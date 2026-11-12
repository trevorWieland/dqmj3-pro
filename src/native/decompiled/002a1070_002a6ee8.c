#include "002a1070_002a6ee8.h"



void fn_002a6ee8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  switch(*param_1) {
  case 1:
    iVar4 = fn_006f75ac();
    iVar4 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
    if (iVar4 != 0) break;
    iVar4 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
    iVar5 = fn_006c89fc();
    if (iVar5 == 1) {
      uVar2 = fn_0035afb4(*(char *)(iVar4 + 0x20) == '\x01');
      fn_0035af2c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0xc),uVar2);
    }
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar2,0,0,1);
    uVar3 = fn_006ca2f4(iVar4);
    fn_0038fee8(uVar2,uVar3);
    uVar1 = 2;
    goto LAB_002a7054;
  case 2:
    iVar4 = fn_006f75ac();
    iVar4 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
    if (iVar4 != 0) break;
    iVar5 = *(int *)(DAT_008977e0 + 0x40);
    iVar4 = fn_006f6e40(iVar5);
    if ((iVar4 == 3) && (*(char *)(*(int *)(iVar5 + 4) + 0x20) != '\x01')) {
      fn_00318d30(*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    uVar1 = 3;
LAB_002a7054:
    *param_1 = uVar1;
    break;
  case 3:
    iVar4 = fn_00318ddc(*(undefined4 *)(param_1 + 0x18));
    if (iVar4 == 0) {
      fn_00698fb8(DAT_008977e0,0xffffffff);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = 900;
      fn_001c7e38(*(undefined4 *)(param_1 + 0x14));
      fn_00110c80(*(undefined4 *)(DAT_008977e0 + 0x58));
      *param_1 = 5;
    }
    break;
  case 4:
    if (*(char *)(DAT_008977e0 + 0x170) == -1) {
      *param_1 = 5;
    }
    break;
  case 5:
    fn_002a54ac(param_1);
    break;
  case 6:
    fn_002a6154(param_1);
    break;
  case 7:
    iVar4 = fn_006f75ac();
    iVar4 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
    if (iVar4 == 0) {
      fn_00697b84(DAT_008977e0);
      *param_1 = 0;
    }
    break;
  case 8:
    piVar6 = (int *)fn_006f72e0();
    iVar4 = (**(code **)(*piVar6 + 0x50))();
    if (iVar4 == 0) {
      fn_002a69bc(param_1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((*(int *)(iVar4 + 0x10) != 0) && (*(int *)(iVar4 + 0x10) == 1)) &&
     (iVar5 = fn_001854ac(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 0x14)),
     *(float *)(iVar5 + 0x24) == 0.0)) {
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  if (*(int *)(iVar4 + 0x14) == -1) {
    return;
  }
  piVar6 = (int *)fn_001854ac(*(undefined4 *)(iVar4 + 4));
                    /* WARNING: Could not recover jumptable at 0x00318dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0xc))();
  return;
}



undefined4 fn_002a17e8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00174a74(uVar3,param_1,param_2);
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = fn_00182994(DAT_008977e4);
      iVar5 = fn_00155a74(uVar3,param_1,param_2,(int)(short)iVar6);
      if (iVar5 == 0) {
        bVar1 = false;
        goto LAB_002a1850;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  bVar1 = true;
LAB_002a1850:
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00155560(uVar3,param_1,param_2);
  uVar3 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar3,(int)(char)param_1,(int)(char)param_2);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar6 = fn_00174aec(uVar3,param_1,param_2);
  if (iVar6 != 3) {
    if (iVar6 < 4) {
      if (iVar6 != 1 && iVar6 != 2) {
        return 0;
      }
    }
    else if (iVar6 != 4 && iVar6 != 10) {
      return 0;
    }
  }
  if (!bVar1) {
    uVar3 = fn_00182994(DAT_008977e4);
    iVar6 = fn_0017591c(uVar3,param_1,param_2);
    if (iVar6 == 0) {
      uVar3 = fn_00182994(DAT_008977e4);
      fn_00179990(uVar3,(char *)&DAT_002a1990,uVar2);
      if (0 < iVar4) {
        uVar3 = fn_00182994(DAT_008977e4);
        fn_00182c40(uVar3,uVar2,7,4);
        uVar3 = fn_00182994(DAT_008977e4);
        uVar7 = fn_0016a6d0(uVar3,uVar2,0);
      }
    }
    else {
      uVar3 = fn_00182994(DAT_008977e4);
      fn_00179990(uVar3,(char *)&DAT_002a197c,uVar2);
    }
  }
  return uVar7;
}



undefined4
fn_002a1070(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  char *pcVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  
  uVar3 = fn_00182994(DAT_008977e4);
  iVar18 = (int)(short)param_5;
  iVar4 = fn_00154c7c(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  uVar5 = fn_00155a74(uVar3,param_4,param_1,iVar18);
  uVar3 = fn_00182994(DAT_008977e4);
  uVar6 = fn_001754f0(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar7 = fn_00155ac8(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar8 = fn_00155c70(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  uVar9 = fn_0017591c(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar10 = fn_00154e38(uVar3,param_4,param_1,iVar18);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar11 = fn_00154c7c(uVar3,param_4,param_1,iVar18);
  if (iVar11 != 0) {
    uVar3 = fn_00182994(DAT_008977e4);
    iVar11 = fn_00155348(uVar3,param_4,param_1);
    if (iVar11 != 0) {
      bVar1 = true;
      goto LAB_002a1198;
    }
  }
  bVar1 = false;
LAB_002a1198:
  uVar3 = fn_00182994(DAT_008977e4);
  iVar11 = fn_00163a1c(uVar3,param_4);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar12 = fn_00174aec(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  uVar13 = fn_00154f50(uVar3,param_4);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar14 = fn_00174c34(uVar3,0xc,param_4,param_1);
  if (((uVar6 & ~uVar13) == 0) || (iVar14 != 0)) {
    if ((uVar5 & ~uVar9) == 0) {
      iVar20 = (int)(char)param_1;
      iVar14 = (int)(char)param_4;
      if (iVar7 == 0) {
        if (iVar8 == 0) {
          bVar22 = uVar9 == 0;
          iVar7 = 0;
          if (bVar22) {
            iVar7 = iVar10;
          }
          bVar21 = bVar22 && iVar7 == 0;
          if (bVar22 && iVar7 == 0) {
            bVar21 = !bVar1;
          }
          if (!bVar21) {
            fn_0017a2fc(param_1,param_2,param_4);
            return 0xffffffff;
          }
          if (iVar4 == 0) {
            if (iVar11 == 2) {
              if (iVar12 != 4) {
                return 0xffffffff;
              }
              uVar19 = 0;
              uVar3 = fn_00182994(DAT_008977e4);
              uVar2 = fn_001659c0(uVar3,iVar14,iVar20);
              piVar15 = (int *)fn_00182994(DAT_008977e4);
              (**(code **)(*piVar15 + 0x14))(piVar15,(char *)&DAT_0029ef6c);
              if (param_3 != 0) {
                uVar3 = fn_00182994(DAT_008977e4);
                iVar4 = fn_001550fc(uVar3,param_4,param_1,iVar18);
                if (0 < iVar4) {
                  uVar3 = fn_00182994(DAT_008977e4);
                  fn_00182c40(uVar3,uVar2,7,4);
                  uVar3 = fn_00182994(DAT_008977e4);
                  uVar19 = fn_0016a6d0(uVar3,uVar2,0);
                }
              }
              return uVar19;
            }
            uVar3 = fn_0029f9f4(param_1,param_3,param_4,param_5);
          }
          else {
            uVar3 = fn_00182994(DAT_008977e4);
            uVar3 = fn_001659c0(uVar3,iVar14,iVar20);
            uVar3 = fn_0029eb2c(uVar3,param_2,param_3,param_4);
          }
          return uVar3;
        }
        if (param_2 == 0) {
          return 0xffffffff;
        }
        piVar15 = (int *)fn_00182994(DAT_008977e4);
        pcVar17 = *(code **)(*piVar15 + 0x14);
        pcVar16 = (char *)&DAT_0029f188;
      }
      else {
        uVar3 = fn_00182994(DAT_008977e4);
        uVar2 = fn_001659c0(uVar3,iVar14,iVar20);
        uVar3 = fn_00182994(DAT_008977e4);
        fn_00179990(uVar3,(char *)&DAT_00188948,uVar2);
        if (param_2 == 0) {
          return 0xffffffff;
        }
        piVar15 = (int *)fn_00182994(DAT_008977e4);
        pcVar17 = *(code **)(*piVar15 + 0x14);
        pcVar16 = (char *)&DAT_0018895c;
      }
      (*pcVar17)(piVar15,pcVar16);
    }
    else if (param_2 != 0) {
      piVar15 = (int *)fn_00182994(DAT_008977e4);
      (**(code **)(*piVar15 + 0x14))(piVar15,(char *)&DAT_0029e4b0);
    }
  }
  else {
    fn_0029e29c(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return 0xffffffff;
}


