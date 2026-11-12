#include "001e956c_001ea070.h"



undefined4 fn_001ea070(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x54))(param_1,1);
  fn_001ea5b8(param_1);
  fn_001e9d48(param_1);
  param_1[0x4e] = param_1[0x4e] & 0xfffffffd;
  fn_001da640(param_1);
  fn_001e3748(param_1);
  if (*(char *)(DAT_008977e0 + 0xac) == '\x06') {
    fn_001de7e8(param_1);
  }
  iVar2 = fn_00154ac8(0x21);
  if (iVar2 == 0) {
    iVar2 = fn_00154ac8(0x1a);
    fn_001da54c(param_1,param_1[99],(char *)&DAT_001e60a4,iVar2 == 0);
  }
  if ((char)param_1[0xeb] == '\0') {
    fn_006f7a20(DAT_008977e0);
    fn_001c5180(param_1,param_1[99]);
  }
  uVar1 = fn_002122ac(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  *(undefined1 *)(param_1 + 0x10a) = uVar1;
  uVar1 = fn_00212298(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  *(undefined1 *)(param_1 + 0x10d) = uVar1;
  return 1;
}



void fn_001e9d48(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 auStack_40 [32];
  
  iVar1 = fn_00154ac8(0x21);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x3b0) == -1) {
    fn_006f7a9c(DAT_008977e0);
    iVar1 = fn_00277a14();
    *(int *)(param_1 + 0x3b0) = iVar1;
    if (iVar1 == -1) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x3b4) == 0) {
    iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_005e846c();
    }
    piVar7 = *(int **)(param_1 + 0x3b4);
    if (piVar7 != piVar2) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *(int **)(param_1 + 0x3b4) = piVar2;
      piVar7 = piVar2;
    }
    if (piVar7 == (int *)0x0) {
      return;
    }
    uVar3 = fn_006f7a9c(DAT_008977e0);
    uVar3 = fn_00241d90(uVar3,*(undefined4 *)(param_1 + 0x3b0));
    iVar1 = fn_0069ee38(piVar7,uVar3,0);
    if (iVar1 == 0) {
      return;
    }
    uVar3 = fn_0017fde4(piVar7);
    fn_0017fc28(uVar3,1);
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 1;
    uVar3 = *(undefined4 *)(param_1 + 0x3b0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x3b4);
    fn_001fa164(*(undefined4 *)(param_1 + 0x388));
    fn_001fa18c(*(undefined4 *)(param_1 + 0x388),&DAT_001e6b40);
    fn_001e8380(param_1,uVar3,0);
    if (*(int *)(param_1 + 0x3b4) == 0) goto LAB_001e9ef0;
  }
  uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x18c));
  fn_001e448c(param_1,uVar3);
  iVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x3b4));
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x378);
      if (iVar1 == 0) {
        if (*(char *)(param_1 + 0x3ac) == '\0') {
          iVar1 = *(int *)(param_1 + 0x18c);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x3b4);
        }
      }
      iVar1 = fn_0017fde4(iVar1);
    }
    fn_00547174(*(undefined4 *)(param_1 + 0x19c),iVar1);
    *(undefined1 *)(param_1 + 0x3c0) = 1;
  }
  fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
LAB_001e9ef0:
  *(undefined1 *)(param_1 + 0x3ac) = 1;
  iVar1 = fn_006f72b4(DAT_008977e0);
  if (iVar1 != 0) {
    fn_0021b1b8(iVar1,0);
  }
  fn_00301a9c(auStack_40,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_40);
  if (*(char *)(param_1 + 0x3ac) != '\0') {
    iVar1 = fn_006f7a9c(DAT_008977e0);
    uVar3 = fn_002789b0();
    iVar4 = fn_00279bbc(iVar1,uVar3);
    if (iVar4 != 0) {
      uVar5 = fn_006b7664(iVar1,uVar3);
      uVar6 = *(uint *)(param_1 + 0x3b0);
      if (((int)uVar6 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar6))
      {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + uVar6 * 4);
      }
      if (((int)uVar6 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar6))
      {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 4) + uVar6 * 0x34;
      }
      fn_00294440(iVar4,uVar8,uVar5,auStack_40);
      fn_00279ae4(iVar1,uVar3);
    }
    iVar4 = fn_002798a0(iVar1,uVar3);
    if (iVar4 != 0) {
      fn_00279ae4(iVar1,uVar3);
    }
  }
  return;
}



void fn_001e9b24(int param_1)

{
  if (*(int *)(param_1 + 0x408) != 0) {
    *(undefined4 *)(param_1 + 0x408) = 0;
    fn_001de97c(param_1);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001e99c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x3ac) != '\0') {
    fn_00259728(param_1 + 0x1e8,1);
    uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x3b4));
    fn_001e448c(param_1,uVar1);
    iVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0x18c));
    if (*(char *)(param_1 + 0x3c0) == '\0') {
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x378);
        if (iVar2 == 0) {
          if (*(char *)(param_1 + 0x3ac) == '\0') {
            iVar2 = *(int *)(param_1 + 0x18c);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x3b4);
          }
        }
        iVar2 = fn_0017fde4(iVar2);
      }
      fn_00547174(*(undefined4 *)(param_1 + 0x19c),iVar2);
      *(undefined1 *)(param_1 + 0x3c0) = 1;
    }
    fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    uVar1 = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x18c);
    fn_001fa164(*(undefined4 *)(param_1 + 0x388));
    fn_001fa18c(*(undefined4 *)(param_1 + 0x388),(char *)&DAT_001e805c);
    fn_001e8380(param_1,uVar1,1);
    *(undefined1 *)(param_1 + 0x3ac) = 0;
  }
  if (*(int **)(param_1 + 0x3b4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3b4) + 4))();
    *(undefined4 *)(param_1 + 0x3b4) = 0;
  }
  if (*(int *)(param_1 + 0x3b0) != -1) {
    fn_006f7a9c(DAT_008977e0);
    fn_00278778();
    *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  }
  iVar2 = fn_006f72b4(DAT_008977e0);
  if (iVar2 == 0) {
    return;
  }
  fn_0021b1b8(iVar2,1);
  return;
}



void fn_001e956c(int *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float in_s0;
  float fVar9;
  float fVar10;
  
  iVar3 = fn_006f72e0(DAT_008977e0);
  if (iVar3 != 0) {
    piVar4 = (int *)fn_006f72e0(DAT_008977e0);
    iVar3 = (**(code **)(*piVar4 + 0x3c))();
    if (iVar3 != 0) {
      fn_001e3a28(param_1);
      uVar5 = fn_006f7a70(DAT_008977e0);
      piVar4 = (int *)fn_003003f8(uVar5,param_1);
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0xcc))(piVar4), iVar3 != 0)) {
        (**(code **)(*piVar4 + 200))(piVar4,0);
      }
      piVar4 = (int *)fn_006f72e0(DAT_008977e0);
      iVar3 = (**(code **)(*piVar4 + 0x68))();
      if (iVar3 == 0) {
        return;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x261) != '\0') {
    return;
  }
  fn_001e5b80(param_1,0);
  if (0 < param_1[0xcd]) {
    iVar8 = param_1[0xcd];
    iVar3 = param_1[0xcc] + 1;
    param_1[0xcc] = iVar3;
    if (iVar8 < iVar3) {
      param_1[0xcc] = 0;
      param_1[0xcd] = 0;
    }
    else {
      fVar10 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar9 = (float)VectorSignedToFloat(iVar8 - iVar3,(byte)(in_fpscr >> 0x16) & 3);
      in_s0 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
      in_s0 = (fVar9 * (float)param_1[0xce] + (float)param_1[0xcf] * fVar10) / in_s0;
      (**(code **)(*param_1 + 0xd8))();
    }
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  fn_001e3ee4(param_1);
  if ((char)param_1[0x82] == -1) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
  }
  iVar3 = (int)(char)param_1[0x82];
  if (iVar3 == -1) {
    fVar9 = 10.0;
  }
  else {
    uVar6 = fn_006aa538(param_1,iVar3);
    iVar8 = fn_00242b6c();
    iVar7 = fn_00242b0c(uVar6);
    if ((iVar8 == 1 || iVar7 == 0 && iVar8 == 0) ||
       ((*(char *)((int)param_1 + 0x2fd) != '\0' && (iVar8 = fn_00154ac8(0x3e), iVar8 != 0)))) {
      fVar9 = (float)param_1[iVar3 + 0x86];
    }
    else {
      fVar9 = 0.0;
    }
    fn_002cd59c(uVar5);
    fVar9 = fVar9 * in_s0;
  }
  param_1[0x43] = (int)fVar9;
  cVar1 = *(char *)((int)param_1 + 0x1b1);
  if (cVar1 == '\0') {
    fn_001db0c4(param_1);
  }
  else if (cVar1 == '\x01') {
    iVar3 = fn_001e2448(param_1);
    if (iVar3 == 0) {
      param_1[0x4e] = param_1[0x4e] & 0xfffffffd;
      if (((char)param_1[0x6c] != -1) && (param_1[(char)param_1[0x6c] + 0x5f] != 0)) {
        fn_001e21b0(param_1);
        fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
      }
      iVar3 = (int)(char)param_1[0x82];
      if ((iVar3 != -1) && (param_1[iVar3 + 0x5f] != 0)) {
        fn_001e2804(param_1,1,iVar3,0);
        iVar3 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
        if (iVar3 == 0) {
          fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0xc,0);
        }
      }
      *(undefined1 *)((int)param_1 + 0x1b1) = 2;
    }
    else {
      fn_001e2308(param_1);
    }
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)((int)param_1 + 0x1b1) = 0;
  }
  if ((param_1[0x7c] != -1) && (iVar3 = param_1[0x7d], param_1[0x7d] = iVar3 + -1, iVar3 + -1 < 1))
  {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[0x7d] = 0;
    param_1[0x7c] = -1;
  }
  fn_001de97c(param_1);
  fn_001e3a28(param_1);
  fn_001c5164(param_1);
  if (1 < *(byte *)(DAT_008977e0 + 0x170)) {
    if ((0 < (short)param_1[0x104]) && (iVar3 = fn_006f733c(), iVar3 == 0)) {
      sVar2 = (short)param_1[0x104] + -1;
      *(short *)(param_1 + 0x104) = sVar2;
      if (sVar2 == 0x1c2) {
        uVar5 = fn_00230098((char)param_1[0x108]);
        fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar5);
      }
      if ((short)param_1[0x104] < 1) {
        uVar5 = fn_0022fa84((char)param_1[0x108]);
        fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar5);
        fn_001e7ec0(param_1,1);
      }
    }
    if (param_1[0x85] < 1) {
      if (-1 < param_1[0x84]) {
        param_1[0x85] = 0;
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        param_1[0x84] = -1;
      }
    }
    else {
      param_1[0x85] = param_1[0x85] + -1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001e99ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x101] + 8))();
  return;
}


