#include "001dd0a0_001dd0a0.h"



/* WARNING: Removing unreachable block (ram,0x001dede0) */
/* WARNING: Removing unreachable block (ram,0x001dedf0) */
/* WARNING: Removing unreachable block (ram,0x001dee04) */
/* WARNING: Removing unreachable block (ram,0x001dee18) */
/* WARNING: Removing unreachable block (ram,0x001dee28) */
/* WARNING: Removing unreachable block (ram,0x001dee30) */
/* WARNING: Removing unreachable block (ram,0x001dee34) */
/* WARNING: Removing unreachable block (ram,0x001dee90) */
/* WARNING: Removing unreachable block (ram,0x001dee9c) */
/* WARNING: Removing unreachable block (ram,0x001deea4) */
/* WARNING: Removing unreachable block (ram,0x001deeb8) */
/* WARNING: Removing unreachable block (ram,0x001deec8) */
/* WARNING: Removing unreachable block (ram,0x001deed0) */
/* WARNING: Removing unreachable block (ram,0x001deed4) */
/* WARNING: Removing unreachable block (ram,0x001dee38) */
/* WARNING: Removing unreachable block (ram,0x001dee48) */
/* WARNING: Removing unreachable block (ram,0x002599f0) */
/* WARNING: Removing unreachable block (ram,0x00259a08) */
/* WARNING: Removing unreachable block (ram,0x00259a10) */
/* WARNING: Removing unreachable block (ram,0x00259a14) */
/* WARNING: Removing unreachable block (ram,0x00259a34) */
/* WARNING: Removing unreachable block (ram,0x00259a24) */

void fn_001dd0a0(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  
  pfVar6 = (float *)(param_1 + 0x11);
  if (((((char)param_1[0x82] == -1) && (*(char *)((int)param_1 + 0x1b1) != '\0')) ||
      (cVar2 = *(char *)((int)param_1 + 0x22d), cVar2 == '\x03' || cVar2 == '\x06')) ||
     (((cVar2 == '\b' || cVar2 == '\n') || cVar2 == '\r' || (0 < param_1[0x71])))) {
    return;
  }
  if ((char)param_1[0x82] == -1) {
    iVar4 = 0;
  }
  else {
    fn_006aa538(param_1);
    iVar4 = fn_00242b6c();
  }
  if (*(char *)(param_1[100] + 0x3c) != '\0') {
    if (((DAT_008912b4 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008912b4), iVar4 != 0)) {
      DAT_008912b8 = (float)VectorSignedToFloat(8,(byte)(in_fpscr >> 0x16) & 3);
    }
    if (!NAN((float)param_1[0x12])) {
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
  iVar5 = fn_006a9960();
  if (iVar5 != 0) {
    if (*(char *)((int)param_1 + 0x325) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001dd180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
      return;
    }
    fVar9 = *pfVar6;
    bVar1 = fVar9 == 0.0;
    if (bVar1) {
      fVar9 = (float)param_1[0x13];
    }
    if (bVar1 && (bVar1 && fVar9 == 0.0)) {
      iVar4 = fn_006a99b0(param_1);
      if (iVar4 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
      }
    }
    else {
      uVar7 = 1;
      iVar4 = fn_006a99b0(param_1);
      if (iVar4 == 0) {
        iVar4 = fn_006f7a84(DAT_008977e0);
        if (((*(char *)(iVar4 + 0x22d) != '\v') || (*(int *)(iVar4 + 0x438) == 5)) &&
           (iVar4 = fn_005defbc(), iVar4 != 0)) {
          uVar7 = 6;
        }
      }
      else {
        uVar7 = 5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001dd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar7,4,0);
    return;
  }
  if (iVar4 != 2) {
    fVar9 = *pfVar6;
    fVar10 = 0.0;
    bVar1 = fVar9 == 0.0;
    if (bVar1) {
      fVar9 = (float)param_1[0x12];
    }
    bVar8 = false;
    if (bVar1 && (bVar1 && fVar9 == 0.0)) {
      fVar9 = (float)param_1[0x13];
      bVar8 = fVar9 == 0.0;
    }
    if (((!bVar8) || (*(char *)(param_1[100] + 0x3c) != '\0')) ||
       ((iVar4 = fn_006a9938(param_1), iVar4 == 0 && (iVar4 = fn_006a99b0(param_1), iVar4 == 0))))
    {
      if (!(NAN((float)param_1[0x12]) || NAN(fVar10))) {
                    /* WARNING: Could not recover jumptable at 0x001dedd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001dee6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,3,8,0);
      return;
    }
    iVar4 = fn_006a99b0(param_1);
    if ((iVar4 == 0) && (iVar4 = (**(code **)(*param_1 + 0x134))(param_1), iVar4 != 0)) {
      fn_006f7a48(DAT_008977e0);
      fn_006a7e74();
      if (fVar9 != fVar10) {
        (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
                    /* WARNING: Could not recover jumptable at 0x001ded64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x108))(param_1);
        return;
      }
    }
    if ((char)param_1[0xdd] == '\x01') {
      return;
    }
    iVar4 = fn_006a99b0(param_1);
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x001dee8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar7,4,0);
    return;
  }
  fVar9 = *pfVar6;
  fVar10 = 0.0;
  bVar1 = fVar9 == 0.0;
  if (bVar1) {
    fVar9 = (float)param_1[0x12];
  }
  bVar8 = false;
  if (bVar1 && (bVar1 && fVar9 == 0.0)) {
    fVar9 = (float)param_1[0x13];
    bVar8 = fVar9 == 0.0;
  }
  if (((bVar8) && (*(char *)(param_1[100] + 0x3c) == '\0')) &&
     ((iVar4 = fn_006a9938(param_1), iVar4 != 0 || (iVar4 = fn_006a99b0(param_1), iVar4 != 0)))) {
    iVar4 = fn_006a99b0(param_1);
    if ((iVar4 == 0) && (iVar4 = (**(code **)(*param_1 + 0x134))(param_1), iVar4 != 0)) {
      fn_006f7a48(DAT_008977e0);
      fn_006a7e74();
      if (fVar9 != fVar10) {
        (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
                    /* WARNING: Could not recover jumptable at 0x001dc69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x108))(param_1);
        return;
      }
    }
    iVar4 = fn_006a99b0(param_1);
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 4;
    }
LAB_001dc6b4:
                    /* WARNING: Could not recover jumptable at 0x001dc6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar7,4,0);
    return;
  }
  if (((char)param_1[0xbf] != '\0') && (iVar4 = (**(code **)(*param_1 + 300))(param_1), iVar4 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x001dc724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,2,4,1);
    return;
  }
  if (fVar10 <= (float)param_1[0x12]) {
    if ((*(char *)(param_1[100] + 0x3c) == '\0') &&
       ((iVar4 = fn_006a9938(param_1), iVar4 != 0 || (iVar4 = fn_006a99b0(param_1), iVar4 != 0))))
    {
      uVar7 = 1;
      iVar4 = fn_006a99b0(param_1);
      if (iVar4 == 0) {
        iVar4 = fn_006f7a84(DAT_008977e0);
        if (((*(char *)(iVar4 + 0x22d) != '\v') || (*(int *)(iVar4 + 0x438) == 5)) &&
           (iVar4 = fn_005defbc(), iVar4 != 0)) {
          uVar7 = 6;
        }
      }
      else {
        uVar7 = 5;
      }
      goto LAB_001dc6b4;
    }
    fVar9 = *pfVar6;
    bVar1 = fVar9 == fVar10;
    if (bVar1) {
      fVar9 = (float)param_1[0x13];
    }
    if (bVar1 && (bVar1 && fVar9 == fVar10)) {
                    /* WARNING: Could not recover jumptable at 0x001dc960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
      return;
    }
    fn_006aa538(param_1,(int)(char)param_1[0x82]);
    iVar4 = fn_00242b0c();
  }
  else {
    fVar9 = *pfVar6;
    bVar1 = fVar9 == fVar10;
    if (bVar1) {
      fVar9 = (float)param_1[0x13];
    }
    if (bVar1 && (bVar1 && fVar9 == fVar10)) {
      fn_006aa538(param_1,(int)(char)param_1[0x82]);
      iVar4 = fn_00242b0c();
      if (iVar4 == 0) {
        fn_001dbe2c(param_1,3,4,0);
      }
      else {
        iVar4 = fn_006a99b0(param_1);
        uVar7 = 0;
        if (iVar4 != 0) {
          uVar7 = 4;
        }
        fn_001dbe2c(param_1,uVar7,4,0);
      }
      if (((char)param_1[0x82] != -1) && (*(char *)((int)param_1 + 0x1b1) == '\0')) {
        uVar7 = fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
        uVar3 = fn_006aa538(param_1,(int)(char)param_1[0x82]);
        uVar7 = fn_0016dc08(uVar3,uVar7);
        uVar3 = fn_00241d90(DAT_00897844,param_1[0x38]);
        uVar7 = fn_0017b118(uVar7,uVar3);
        fn_0025968c(param_1[99],3,4,0,*(byte *)(param_1 + 0x4e) & 1,uVar7);
      }
      return;
    }
    fn_006aa538(param_1,(int)(char)param_1[0x82]);
    iVar4 = fn_00242b0c();
  }
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001dc9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,5,8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001dc9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))(param_1,3,8,0);
  return;
}


