#include "0029eb2c_0029f72c.h"



void fn_0029f72c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  ulonglong uVar11;
  
  uVar5 = 0x10;
  uVar8 = param_1 ^ 1;
  uVar9 = 0x14;
  if (uVar8 == 0) {
    uVar5 = 0x14;
    uVar9 = 0x18;
  }
  iVar1 = fn_0016c0d0(uVar8);
  fVar10 = 0.0;
  if (uVar8 != 0) {
    fVar10 = 180.0;
  }
  iVar7 = 0;
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar2,1);
  if (uVar5 < uVar9) {
    uVar11 = (ulonglong)(uint)(int)fVar10;
    do {
      uVar2 = fn_00182994(DAT_008977e4);
      iVar3 = fn_00174a8c(uVar2,uVar5 & 0xff);
      if (iVar3 != 2) {
        iVar3 = iVar7;
        if (uVar8 == 0) {
          iVar3 = iVar7 + 4;
        }
        fn_0029e6fc(uVar5,(&PTR_s_move_001_S01S4target_007bb730)[iVar1 * 8 + iVar3],(int)uVar11);
        uVar2 = fn_00182994(DAT_008977e4);
        fn_001749e8(uVar2,uVar5 & 0xff,0);
        iVar7 = iVar7 + 1;
      }
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
    } while ((int)uVar5 < (int)uVar9);
  }
  iVar1 = fn_00174828(DAT_008977e4);
  if (param_1 == 0) {
    iVar7 = 0x21;
  }
  else {
    iVar7 = 0x20;
  }
  if (*(char *)(iVar1 + iVar7 * 8 + 0x4182) != '\0') {
    return;
  }
  iVar1 = fn_0016c0d0(param_1);
  if (param_1 == 0) {
    uVar2 = 0;
    uVar6 = 0x21;
  }
  else {
    uVar2 = 0xb4;
    uVar6 = 0x20;
  }
  uVar4 = fn_00182994(DAT_008977e4);
  fn_0015af10(uVar4,uVar6,(&PTR_s_move_000_S01S4master_007bc1f0)[iVar1 * 2 + (param_1 ^ 1)]);
  uVar4 = fn_00182994(DAT_008977e4);
  fn_001749e8(uVar4,uVar6,1);
  uVar4 = fn_00182994(DAT_008977e4);
  VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fn_0017554c(uVar4,uVar6);
  return;
}



void fn_0029f704(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00164c80(uVar1,param_1,1);
  return;
}



void fn_0029f1a0(char param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  uint in_fpscr;
  float in_s0;
  int iVar6;
  
  iVar1 = fn_0016c0d0(param_2);
  puVar5 = (&PTR_s_pos_301_ALLYEffectS_007bc1b0)[iVar1 * 2 + (param_2 ^ 1)];
  if ((iVar1 == 4 || iVar1 == 5) || iVar1 == 6) {
    in_s0 = 2.0;
  }
  if ((iVar1 != 4 && iVar1 != 5) && iVar1 != 6) {
    if (iVar1 == 7) {
      in_s0 = 3.0;
    }
    else {
      in_s0 = 1.0;
    }
  }
  iVar6 = (int)in_s0;
  uVar2 = fn_00182994(DAT_008977e4);
  iVar1 = fn_00174c80(uVar2,(int)param_1,0);
  if (iVar1 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00149880(uVar2,1);
    iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f4e4);
    if (iVar3 == 0) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar2 = fn_00149844(uVar2,iVar1,puVar5);
      piVar4 = (int *)fn_00182994(DAT_008977e4);
      (**(code **)(*piVar4 + 100))(piVar4,uVar2);
      piVar4 = (int *)fn_00182994(DAT_008977e4);
      VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
      piVar4 = (int *)fn_00182994(DAT_008977e4);
      (**(code **)(*piVar4 + 0x58))(piVar4,uVar2);
    }
    else {
      iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f4f8);
      if (iVar3 == 0) {
        uVar2 = fn_00182994(DAT_008977e4);
        uVar2 = fn_00149844(uVar2,iVar1,puVar5);
        piVar4 = (int *)fn_00182994(DAT_008977e4);
        (**(code **)(*piVar4 + 100))(piVar4,uVar2);
        piVar4 = (int *)fn_00182994(DAT_008977e4);
        VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
        (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
        piVar4 = (int *)fn_00182994(DAT_008977e4);
        (**(code **)(*piVar4 + 0x58))(piVar4,uVar2);
      }
      else {
        iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f50c);
        if (iVar3 == 0) {
          uVar2 = fn_00182994(DAT_008977e4);
          uVar2 = fn_00149844(uVar2,iVar1,puVar5);
          piVar4 = (int *)fn_00182994(DAT_008977e4);
          (**(code **)(*piVar4 + 100))(piVar4,uVar2);
          piVar4 = (int *)fn_00182994(DAT_008977e4);
          VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
          piVar4 = (int *)fn_00182994(DAT_008977e4);
          (**(code **)(*piVar4 + 0x58))(piVar4,uVar2);
        }
        else {
          iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f520);
          if (iVar3 == 0) {
            piVar4 = (int *)fn_00182994(DAT_008977e4);
            (**(code **)(*piVar4 + 0x50))(piVar4,(char *)&DAT_0029f520);
          }
          else {
            uVar2 = fn_00182994(DAT_008977e4);
            uVar2 = fn_00149844(uVar2,iVar1,puVar5);
            piVar4 = (int *)fn_00182994(DAT_008977e4);
            VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
            (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
          }
        }
      }
    }
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar1 = fn_00174c80(uVar2,(int)param_1,1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar2,1);
  iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f53c);
  if (iVar3 == 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    uVar2 = fn_00149844(uVar2,iVar1,puVar5);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
    (**(code **)(*piVar4 + 100))(piVar4,uVar2);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
    VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x0029f60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0x58))(piVar4,uVar2);
    return;
  }
  iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f550);
  if (iVar3 == 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    uVar2 = fn_00149844(uVar2,iVar1,puVar5);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
    (**(code **)(*piVar4 + 100))(piVar4,uVar2);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
    VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x0029f680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0x58))(piVar4,uVar2);
    return;
  }
  iVar3 = fn_003035b0(iVar1,(char *)&DAT_0029f568);
  if (iVar3 == 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    uVar2 = fn_00149844(uVar2,iVar1,puVar5);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
    (**(code **)(*piVar4 + 100))(piVar4,uVar2);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
    VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
    piVar4 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x0029f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0x58))(piVar4,uVar2);
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_00149844(uVar2,iVar1,puVar5);
  piVar4 = (int *)fn_00182994(DAT_008977e4);
  VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
                    /* WARNING: Could not recover jumptable at 0x0029f370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x54))(piVar4,uVar2);
  return;
}



undefined4 fn_0029f0d8(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 - 1;
  if (4 < uVar1) {
    bVar2 = 8 < param_1;
    if (param_1 != 9) {
      uVar1 = param_1 - 0x10;
      bVar2 = 1 < uVar1;
    }
    if ((bVar2 && (param_1 != 9 && uVar1 != 2)) && (param_1 != 0x14)) {
      return 0;
    }
  }
  return 1;
}



void fn_0029f030(void)

{
  return;
}



undefined * fn_0029f004(int param_1,int param_2)

{
  return (&PTR_s_pos_301_ALLYEffectS_007bc1b0)[param_2 * 2 + param_1];
}



void fn_0029efb8(undefined4 param_1)

{
  switch(param_1) {
  default:
    return;
  case 4:
  case 5:
  case 6:
    return;
  case 7:
    return;
  }
}



undefined4 fn_0029ef7c(undefined1 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    uVar1 = fn_00179990(uVar1,param_2,param_1);
  }
  return uVar1;
}



undefined4 fn_0029eeb8(undefined4 param_1,int param_2,undefined4 param_3,short param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)(char)param_3,(int)(char)param_1);
  piVar3 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar3 + 0x14))(piVar3,(char *)&DAT_0029ef6c);
  if (param_2 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_001550fc(uVar2,param_3,param_1,(int)param_4);
    if (0 < iVar4) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00182c40(uVar2,uVar1,7,4);
      uVar2 = fn_00182994(DAT_008977e4);
      uVar5 = fn_0016a6d0(uVar2,uVar1,0);
    }
  }
  return uVar5;
}



undefined4 fn_0029eb2c(undefined1 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_00179990(uVar2,(char *)&DAT_0029ec78,param_1);
  piVar3 = (int *)fn_00182994(DAT_008977e4);
  (**(code **)(*piVar3 + 0x68))(piVar3,uVar2,0);
  if (param_2 != 0) {
    piVar3 = (int *)fn_00182994(DAT_008977e4);
    fn_00182994(DAT_008977e4);
    cVar1 = fn_006ba994();
    if (7 < (int)cVar1 - 0x10U) {
      uVar2 = fn_00182994(DAT_008977e4);
      cVar1 = fn_001657c8(uVar2,(int)param_4);
    }
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_001754ac(uVar2,cVar1);
    if (iVar4 == 0) {
      pcVar5 = (char *)&DAT_0029e284;
    }
    else {
      pcVar5 = (char *)&DAT_0029e290;
    }
    (**(code **)(*piVar3 + 0x14))(piVar3,pcVar5);
  }
  fn_00182994(DAT_008977e4);
  fn_001552cc();
  uVar2 = fn_00182994(DAT_008977e4);
  fn_001553b0(uVar2,0x14,5,10);
  if (param_3 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00182c40(uVar2,param_1,7,4);
    uVar2 = fn_00182994(DAT_008977e4);
    uVar6 = fn_0016a6d0(uVar2,param_1,0);
  }
  return uVar6;
}


