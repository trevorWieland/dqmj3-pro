#include "00221654_00221918.h"



/* WARNING: Removing unreachable block (ram,0x00221f14) */
/* WARNING: Removing unreachable block (ram,0x00221f28) */
/* WARNING: Removing unreachable block (ram,0x00221f3c) */
/* WARNING: Removing unreachable block (ram,0x00221f4c) */
/* WARNING: Removing unreachable block (ram,0x00221f54) */
/* WARNING: Removing unreachable block (ram,0x00221f58) */
/* WARNING: Removing unreachable block (ram,0x00221fb4) */
/* WARNING: Removing unreachable block (ram,0x00221fc0) */
/* WARNING: Removing unreachable block (ram,0x00221fc8) */
/* WARNING: Removing unreachable block (ram,0x00221fec) */
/* WARNING: Removing unreachable block (ram,0x00221ff0) */
/* WARNING: Removing unreachable block (ram,0x00221ff4) */
/* WARNING: Removing unreachable block (ram,0x00221ff8) */
/* WARNING: Removing unreachable block (ram,0x00221ffc) */
/* WARNING: Removing unreachable block (ram,0x00222000) */
/* WARNING: Removing unreachable block (ram,0x00222004) */
/* WARNING: Removing unreachable block (ram,0x00222008) */
/* WARNING: Removing unreachable block (ram,0x0022200c) */
/* WARNING: Removing unreachable block (ram,0x00221f5c) */
/* WARNING: Removing unreachable block (ram,0x00221f6c) */
/* WARNING: Removing unreachable block (ram,0x002599f0) */
/* WARNING: Removing unreachable block (ram,0x00259a08) */
/* WARNING: Removing unreachable block (ram,0x00259a10) */
/* WARNING: Removing unreachable block (ram,0x00259a14) */
/* WARNING: Removing unreachable block (ram,0x00259a34) */
/* WARNING: Removing unreachable block (ram,0x00259a24) */

void fn_00221918(int *param_1,float *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  if ((char)param_1[0x65] == -1) {
    iVar3 = 0;
  }
  else {
    if (param_1[100] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar3 = (int)*(short *)(iVar3 + 0x1c);
    }
    iVar3 = fn_00242b6c(iVar3);
  }
  if (*(char *)((int)param_1 + 0x23f) != '\0') {
    if (((DAT_008912b4 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008912b4), iVar3 != 0)) {
      DAT_008912b8 = (float)VectorSignedToFloat(8,(byte)(in_fpscr >> 0x16) & 3);
    }
    if (!NAN(param_2[1])) {
                    /* WARNING: Could not recover jumptable at 0x002599bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,2,(int)DAT_008912b8,0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x002599ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,3,(int)DAT_008912b8,0);
    return;
  }
  iVar4 = fn_006a9960();
  if (iVar4 != 0) {
    fVar7 = *param_2;
    fVar8 = 0.0;
    bVar1 = fVar7 == 0.0;
    if (bVar1) {
      fVar7 = param_2[2];
    }
    if (bVar1 && (bVar1 && fVar7 == 0.0)) {
      iVar3 = fn_006a99b0(param_1);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 4;
      }
    }
    else {
      uVar5 = 1;
      iVar3 = fn_006a99b0(param_1);
      if (iVar3 == 0) {
        fVar7 = (float)param_1[0x8b];
        if ((fVar7 != fVar8 || (fVar7 != fVar8 || (float)param_1[0x8c] != fVar8)) &&
           ((int)(ABS(fVar7) + ABS((float)param_1[0x8c])) < 0x3f4ccccd)) {
          uVar5 = 6;
        }
      }
      else {
        uVar5 = 5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x002219f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar5,4,0);
    return;
  }
  if (iVar3 != 2) {
    fVar7 = *param_2;
    fVar8 = 0.0;
    bVar1 = fVar7 == 0.0;
    if (bVar1) {
      fVar7 = param_2[1];
    }
    bVar6 = false;
    if (bVar1 && (bVar1 && fVar7 == 0.0)) {
      bVar6 = param_2[2] == 0.0;
    }
    if ((bVar6) &&
       ((iVar3 = fn_006a9938(), iVar3 != 0 || (iVar3 = fn_006a99b0(param_1), iVar3 != 0)))) {
      iVar3 = fn_006a99b0(param_1);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 4;
      }
                    /* WARNING: Could not recover jumptable at 0x00221fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,uVar5,4,0);
      return;
    }
    if (!(NAN(param_2[1]) || NAN(fVar8))) {
                    /* WARNING: Could not recover jumptable at 0x00221f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00221f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,3,8,0);
    return;
  }
  fVar7 = *param_2;
  fVar8 = 0.0;
  bVar1 = fVar7 == 0.0;
  if (bVar1) {
    fVar7 = param_2[1];
  }
  bVar6 = false;
  if (bVar1 && (bVar1 && fVar7 == 0.0)) {
    bVar6 = param_2[2] == 0.0;
  }
  if ((!bVar6) ||
     ((iVar3 = fn_006a9938(), iVar3 == 0 && (iVar3 = fn_006a99b0(param_1), iVar3 == 0)))) {
    if (param_2[1] < fVar8) {
      fVar7 = *param_2;
      iVar3 = param_1[100];
      bVar1 = fVar7 == fVar8;
      piVar2 = param_1 + 0x40;
      if (bVar1) {
        fVar7 = param_2[2];
      }
      if (!(bVar1 && (bVar1 && fVar7 == fVar8))) {
        if (iVar3 != 0) {
          piVar2 = (int *)(int)(char)param_1[0x65];
        }
        if (iVar3 != 0 && piVar2 != (int *)&DAT_ffffffff) {
          iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          iVar3 = (int)*(short *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        iVar3 = fn_00242b0c(iVar3);
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00221458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x44))(param_1,5,8,0);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00221444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x44))(param_1,3);
        return;
      }
      if (iVar3 != 0) {
        piVar2 = (int *)(int)(char)param_1[0x65];
      }
      if (iVar3 != 0 && piVar2 != (int *)&DAT_ffffffff) {
        iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        iVar3 = (int)*(short *)(iVar3 + 0x1c);
      }
      else {
        iVar3 = 0;
      }
      iVar3 = fn_00242b0c(iVar3);
      if (iVar3 == 0) {
        fn_001dbe2c(param_1,3,4,0);
        return;
      }
      iVar3 = fn_006a99b0(param_1);
      uVar5 = 0;
      if (iVar3 != 0) {
        uVar5 = 4;
      }
      fn_001dbe2c(param_1,uVar5,4,0);
      return;
    }
    iVar3 = fn_006a9938(param_1);
    if ((iVar3 == 0) && (iVar3 = fn_006a99b0(param_1), iVar3 == 0)) {
      return;
    }
    uVar5 = 1;
    iVar3 = fn_006a99b0(param_1);
    if (iVar3 == 0) {
      fVar7 = (float)param_1[0x8b];
      if ((fVar7 != fVar8 || (fVar7 != fVar8 || (float)param_1[0x8c] != fVar8)) &&
         ((int)(ABS(fVar7) + ABS((float)param_1[0x8c])) < 0x3f4ccccd)) {
        uVar5 = 6;
      }
    }
    else {
      uVar5 = 5;
    }
  }
  else {
    iVar3 = fn_006a99b0(param_1);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00221330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))(param_1,uVar5,4,0);
  return;
}



void fn_00221828(int *param_1)

{
  int iVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  
  fVar2 = 1.0;
  if ((char)param_1[0x65] == -1) {
    iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    if (iVar1 != 1) {
      fn_002cd59c(1);
      fVar2 = in_s0;
    }
  }
  else {
    fn_0025988c(param_1[100]);
    fn_002cd59c();
    fVar2 = in_s0;
  }
  fVar3 = fVar2;
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((char)param_1[0x65] == -1) {
    iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    fn_002cd59c(iVar1 != 1);
    fVar3 = fVar2;
  }
  uStack_20 = 0;
  local_28 = fVar3 * 15.0;
  local_24 = fVar3 * 60.0;
  fn_001d9bb4(param_1,&local_28);
  return;
}



void fn_00221654(int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      return;
    }
    goto LAB_002217fc;
  }
  uVar2 = fn_006f7388(DAT_008977e0);
  iVar1 = fn_006b4240(uVar2,param_2);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x194) == -1) {
      iVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
joined_r0x002217f4:
      iVar1 = 0x1000972;
      if (iVar3 == 1) {
        iVar1 = 0x1000962;
      }
      goto LAB_002217fc;
    }
    if (*(int *)(param_1 + 400) != 0) goto LAB_00221798;
LAB_00221790:
    iVar1 = 0;
  }
  else {
    iVar3 = fn_006bab38();
    if ((iVar3 == 0xc || iVar3 == 0xd) || iVar3 == 0xe) {
      if (*(char *)(param_1 + 0x194) != -1) {
        if (*(int *)(param_1 + 400) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
          iVar3 = (int)*(short *)(iVar3 + 0x1c);
        }
        iVar3 = fn_00242b0c(iVar3);
        if (iVar3 != 0) {
          bVar5 = *(int *)(param_1 + 400) != 0;
          if (bVar5) {
            iVar3 = (int)*(char *)(param_1 + 0x194);
          }
          if (bVar5 && iVar3 != -1) {
            iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
            iVar1 = (int)*(short *)(iVar1 + 0x1c);
          }
          else {
            iVar1 = 0;
          }
          piVar4 = (int *)fn_00242b4c(iVar1);
          iVar1 = *piVar4;
          goto LAB_002217fc;
        }
      }
      iVar1 = fn_006baaf4(iVar1,(int)param_3);
      goto LAB_002217fc;
    }
    if (*(char *)(param_1 + 0x194) == -1) {
      iVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      goto joined_r0x002217f4;
    }
    if (*(int *)(param_1 + 400) == 0) goto LAB_00221790;
LAB_00221798:
    iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    iVar1 = (int)*(short *)(iVar1 + 0x1c);
  }
  piVar4 = (int *)fn_00242b4c(iVar1);
  iVar1 = *piVar4;
LAB_002217fc:
  if (*(char *)(param_1 + 0x243) != '\0') {
    iVar1 = 0x1000975;
  }
  fn_00225a6c(param_1,iVar1);
  return;
}


