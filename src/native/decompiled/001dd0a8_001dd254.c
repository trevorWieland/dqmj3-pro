#include "001dd0a8_001dd254.h"



void fn_001dd254(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_s0;
  float fVar4;
  int local_28;
  int iStack_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  
  if (((DAT_008917c0 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008917c0), iVar2 != 0)) {
    fVar4 = 5.0;
    fn_0017fe34();
    DAT_008917c4 = fVar4;
  }
  if (((DAT_008917bc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008917bc), iVar2 != 0)) {
    fVar4 = 3.0;
    fn_0017fe34();
    DAT_008917c8 = fVar4;
  }
  fVar4 = 0.0;
  local_28 = param_1[0xb];
  iStack_24 = param_1[0xc];
  local_20 = (float)param_1[0xd];
  if ((float)param_1[200] == 0.0) {
    local_20 = 0.0;
    goto LAB_001dd3dc;
  }
  iVar2 = fn_006a99b0(param_1);
  if ((iVar2 == 0) && ((0x3e4ccccd < (int)in_s0 || (0xbe4ccccd < (uint)in_s0)))) {
    local_20 = local_20 + in_s0 * DAT_008917c4;
    fn_0017fe34();
    fn_0017fe34();
    fn_00764608();
    goto LAB_001dd3dc;
  }
  if (NAN(local_20) || NAN(fVar4)) {
    pfVar3 = local_18;
    local_1c = local_20 + DAT_008917c8;
    local_18[0] = fVar4;
    pfVar1 = &local_1c;
    if (local_20 + DAT_008917c8 <= fVar4) goto LAB_001dd39c;
  }
  else {
    pfVar3 = &local_1c;
    local_1c = local_20 - DAT_008917c8;
    local_18[0] = fVar4;
    pfVar1 = local_18;
    if (local_20 - DAT_008917c8 < fVar4) {
LAB_001dd39c:
      pfVar3 = pfVar1;
      local_18[0] = fVar4;
    }
  }
  local_20 = *pfVar3;
LAB_001dd3dc:
  (**(code **)(*param_1 + 0x14))(param_1,&local_28);
  return;
}



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

void fn_001dd0a8(int *param_1,float *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
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
  iVar5 = fn_006a9960();
  if (iVar5 != 0) {
    if (*(char *)((int)param_1 + 0x325) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001dd180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
      return;
    }
    fVar8 = *param_2;
    bVar1 = fVar8 == 0.0;
    if (bVar1) {
      fVar8 = param_2[2];
    }
    if (bVar1 && (bVar1 && fVar8 == 0.0)) {
      iVar4 = fn_006a99b0(param_1);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar6 = 1;
      iVar4 = fn_006a99b0(param_1);
      if (iVar4 == 0) {
        iVar4 = fn_006f7a84(DAT_008977e0);
        if (((*(char *)(iVar4 + 0x22d) != '\v') || (*(int *)(iVar4 + 0x438) == 5)) &&
           (iVar4 = fn_005defbc(), iVar4 != 0)) {
          uVar6 = 6;
        }
      }
      else {
        uVar6 = 5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001dd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar6,4,0);
    return;
  }
  if (iVar4 != 2) {
    fVar8 = *param_2;
    fVar9 = 0.0;
    bVar1 = fVar8 == 0.0;
    if (bVar1) {
      fVar8 = param_2[1];
    }
    bVar7 = false;
    if (bVar1 && (bVar1 && fVar8 == 0.0)) {
      fVar8 = param_2[2];
      bVar7 = fVar8 == 0.0;
    }
    if (((!bVar7) || (*(char *)(param_1[100] + 0x3c) != '\0')) ||
       ((iVar4 = fn_006a9938(param_1), iVar4 == 0 && (iVar4 = fn_006a99b0(param_1), iVar4 == 0))))
    {
      if (!(NAN(param_2[1]) || NAN(fVar9))) {
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
      if (fVar8 != fVar9) {
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
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x001dee8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar6,4,0);
    return;
  }
  fVar8 = *param_2;
  fVar9 = 0.0;
  bVar1 = fVar8 == 0.0;
  if (bVar1) {
    fVar8 = param_2[1];
  }
  bVar7 = false;
  if (bVar1 && (bVar1 && fVar8 == 0.0)) {
    fVar8 = param_2[2];
    bVar7 = fVar8 == 0.0;
  }
  if (((bVar7) && (*(char *)(param_1[100] + 0x3c) == '\0')) &&
     ((iVar4 = fn_006a9938(param_1), iVar4 != 0 || (iVar4 = fn_006a99b0(param_1), iVar4 != 0)))) {
    iVar4 = fn_006a99b0(param_1);
    if ((iVar4 == 0) && (iVar4 = (**(code **)(*param_1 + 0x134))(param_1), iVar4 != 0)) {
      fn_006f7a48(DAT_008977e0);
      fn_006a7e74();
      if (fVar8 != fVar9) {
        (**(code **)(*param_1 + 0x44))(param_1,6,4,0);
                    /* WARNING: Could not recover jumptable at 0x001dc69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x108))(param_1);
        return;
      }
    }
    iVar4 = fn_006a99b0(param_1);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
    }
LAB_001dc6b4:
                    /* WARNING: Could not recover jumptable at 0x001dc6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,uVar6,4,0);
    return;
  }
  if (((char)param_1[0xbf] != '\0') && (iVar4 = (**(code **)(*param_1 + 300))(param_1), iVar4 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x001dc724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,2,4,1);
    return;
  }
  if (fVar9 <= param_2[1]) {
    if ((*(char *)(param_1[100] + 0x3c) == '\0') &&
       ((iVar4 = fn_006a9938(param_1), iVar4 != 0 || (iVar4 = fn_006a99b0(param_1), iVar4 != 0))))
    {
      uVar6 = 1;
      iVar4 = fn_006a99b0(param_1);
      if (iVar4 == 0) {
        iVar4 = fn_006f7a84(DAT_008977e0);
        if (((*(char *)(iVar4 + 0x22d) != '\v') || (*(int *)(iVar4 + 0x438) == 5)) &&
           (iVar4 = fn_005defbc(), iVar4 != 0)) {
          uVar6 = 6;
        }
      }
      else {
        uVar6 = 5;
      }
      goto LAB_001dc6b4;
    }
    fVar8 = *param_2;
    bVar1 = fVar8 == fVar9;
    if (bVar1) {
      fVar8 = param_2[2];
    }
    if (bVar1 && (bVar1 && fVar8 == fVar9)) {
                    /* WARNING: Could not recover jumptable at 0x001dc960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
      return;
    }
    fn_006aa538(param_1,(int)(char)param_1[0x82]);
    iVar4 = fn_00242b0c();
  }
  else {
    fVar8 = *param_2;
    bVar1 = fVar8 == fVar9;
    if (bVar1) {
      fVar8 = param_2[2];
    }
    if (bVar1 && (bVar1 && fVar8 == fVar9)) {
      fn_006aa538(param_1,(int)(char)param_1[0x82]);
      iVar4 = fn_00242b0c();
      if (iVar4 == 0) {
        fn_001dbe2c(param_1,3,4,0);
      }
      else {
        iVar4 = fn_006a99b0(param_1);
        uVar6 = 0;
        if (iVar4 != 0) {
          uVar6 = 4;
        }
        fn_001dbe2c(param_1,uVar6,4,0);
      }
      if (((char)param_1[0x82] != -1) && (*(char *)((int)param_1 + 0x1b1) == '\0')) {
        uVar6 = fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
        uVar3 = fn_006aa538(param_1,(int)(char)param_1[0x82]);
        uVar6 = fn_0016dc08(uVar3,uVar6);
        uVar3 = fn_00241d90(DAT_00897844,param_1[0x38]);
        uVar6 = fn_0017b118(uVar6,uVar3);
        fn_0025968c(param_1[99],3,4,0,*(byte *)(param_1 + 0x4e) & 1,uVar6);
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


