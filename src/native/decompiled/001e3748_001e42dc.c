#include "001e3748_001e42dc.h"



void fn_001e42dc(int *param_1)

{
  bool bVar1;
  int iVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = 1.0;
  fVar4 = fVar3;
  fn_006f7a48(DAT_008977e0);
  fn_006a7cb0();
  fVar5 = 0.0;
  if (in_s0 == 0.0) {
    fn_006f7a48(DAT_008977e0);
    fn_006a7cbc();
    if (in_s0 != fVar5) goto LAB_001e432c;
    bVar1 = false;
  }
  else {
LAB_001e432c:
    bVar1 = true;
  }
  fn_006aa538(param_1,(int)(char)param_1[0x82]);
  iVar2 = fn_001a46f4();
  if (iVar2 == 0) goto LAB_001e43b4;
  if ((char)param_1[0x82] == -1) {
LAB_001e4388:
    fn_006aa538(param_1,(int)(char)param_1[0x82]);
    iVar2 = fn_00242b0c();
    if (iVar2 != 1) goto LAB_001e43b4;
  }
  else {
    fn_006aa538(param_1);
    iVar2 = fn_00242b6c();
    if (iVar2 != 2) goto LAB_001e4388;
  }
  if (bVar1) {
    fVar3 = 0.2;
  }
LAB_001e43b4:
  if (*(char *)(param_1[100] + 0x3c) == '\0') {
    if (*(char *)((int)param_1 + 0x325) != '\0') {
      fn_0023f454();
    }
  }
  else {
    if (bVar1) {
      fn_0023f3a8();
      fVar3 = fVar4;
    }
    else {
      fVar3 = fVar4;
      if (*(char *)((int)param_1 + 0x325) == '\0') {
        fn_0023f454();
      }
    }
    iVar2 = fn_006a9960(param_1);
    if (iVar2 == 0) {
      if ((bVar1) || (iVar2 = (**(code **)(*param_1 + 300))(param_1), iVar2 != 0)) {
        *(undefined1 *)((int)param_1 + 0x325) = 0;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x325) = 1;
      fn_0023f3a8(param_1[100]);
    }
  }
  if (*(float *)(param_1[100] + 0x20) == fVar3) {
    return;
  }
  fn_0023f02c();
  return;
}



void fn_001e3dd8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = fn_00154ac8(0x3e);
  if ((iVar1 != 0) && ((char)param_1[0x82] != -1)) {
    iVar2 = param_1[100];
    uVar3 = 0x3da3d70a;
    uVar4 = 0x4099999a;
    uVar6 = 0x3e4ccccd;
    uVar5 = 0x442a0000;
    iVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (iVar1 != 0) {
      uVar3 = uVar6;
    }
    *(undefined4 *)(iVar2 + 0x18) = uVar3;
    *(undefined1 *)(param_1[100] + 0x3c) = 1;
    iVar2 = param_1[100];
    iVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (iVar1 != 0) {
      uVar4 = uVar5;
    }
    *(undefined4 *)(iVar2 + 0x1c) = uVar4;
    if (param_2 != 0) {
      fn_0025988c(param_1[(char)param_1[0x82] + 0x7e]);
      fn_0023f040(param_1[100]);
    }
    iVar1 = fn_006f7a5c(DAT_008977e0);
    *(undefined4 *)(iVar1 + 0x144) = 4;
  }
  return;
}



void fn_001e3bc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = (int)*(char *)(param_1 + 0x208);
  if (iVar1 == -1) {
    uVar2 = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x18c);
    fn_001fa164(*(undefined4 *)(param_1 + 0x388));
    fn_001fa18c(*(undefined4 *)(param_1 + 0x388),(char *)&DAT_001e805c);
    fn_001e8380(param_1,uVar2,1);
  }
  else {
    iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x17c);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + iVar1 + 0x3bc) == '\0') {
        uVar2 = fn_0017fde4(iVar3);
        fn_00547174(*(undefined4 *)(param_1 + 0x194),uVar2);
        *(undefined1 *)(param_1 + iVar1 + 0x3bc) = 1;
      }
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
      iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
      uVar5 = *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c);
      uVar2 = fn_00242bd4((int)*(short *)(iVar1 + 0x1c));
      uVar4 = *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 0xc + 0x234);
      *(undefined4 *)(param_1 + 0xe4) = uVar5;
      fn_001fa164(*(undefined4 *)(param_1 + 0x388));
      fn_001fa18c(*(undefined4 *)(param_1 + 0x388),uVar2);
      fn_001e8380(param_1,uVar4,0);
    }
  }
  fn_001e1598(param_1,0);
  iVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x18c));
  uVar2 = *(undefined4 *)(iVar1 + 0x98);
  uVar4 = *(undefined4 *)(iVar1 + 0xa8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(iVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x6c);
  iVar1 = fn_00191284(*(undefined4 *)(param_1 + 0x18c),uVar2);
  if (iVar1 == 0) {
    fn_0018d060(*(undefined4 *)(param_1 + 0x18c),uVar2,4);
    *(undefined1 *)(param_1 + 0x110) = 9;
  }
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
  if (*(char *)(param_1 + 0x208) == -1) {
    fn_001eab44(param_1,0xf,param_1 + 0x1a4);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  fn_001eab44(param_1,5,param_1 + 0x1a4);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001e3a28(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_008977e0 + 0x2c);
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,0);
  if ((iVar1 == 0) || (param_1[0x7c] != -1)) {
LAB_001e3b8c:
    if (-1 < param_1[0x83]) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
      param_1[0x83] = -1;
    }
  }
  else {
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd784(uVar2,param_1);
    if (iVar1 == 0) {
      uVar2 = fn_006f7a70(DAT_008977e0);
      iVar1 = fn_006bd7f4(uVar2,param_1);
      if ((iVar1 == 0) &&
         (iVar1 = fn_006acefc(*(undefined4 *)(DAT_008977e0 + 0x30),param_1), iVar1 == 0))
      goto LAB_001e3b8c;
    }
    if (param_1[0x83] == -1) {
      iVar1 = param_1[0xde];
      if (iVar1 == 0) {
        if ((char)param_1[0xeb] == '\0') {
          iVar1 = param_1[99];
        }
        else {
          iVar1 = param_1[0xed];
        }
      }
      uVar2 = fn_0017fde4(iVar1);
      iVar1 = fn_0016a9b0(piVar3,0x753f,uVar2,1);
      param_1[0x83] = iVar1;
    }
    else {
      iVar1 = fn_006b4cd0(piVar3);
      if (iVar1 != 0) {
        iVar1 = param_1[0xde];
        if (iVar1 == 0) {
          if ((char)param_1[0xeb] == '\0') {
            iVar1 = param_1[99];
          }
          else {
            iVar1 = param_1[0xed];
          }
        }
        uVar2 = fn_0017fde4(iVar1);
        iVar1 = fn_0016a9b0(piVar3,0x7541,uVar2,1);
        param_1[0x83] = iVar1;
      }
    }
    if ((param_1[0x83] != -1) && (iVar1 = fn_006f7358(DAT_008977e0), iVar1 != 0)) {
      fn_0023dd30(piVar3,param_1[0x83]);
      return;
    }
  }
  return;
}



void fn_001e3914(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x1f0) == -1) ||
     (iVar1 = fn_006b4cd0(*(undefined4 *)(DAT_008977e0 + 0x2c)), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x378);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x3ac) == '\0') {
        iVar1 = *(int *)(param_1 + 0x18c);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x3b4);
      }
    }
    uVar2 = fn_0017fde4(iVar1);
    uVar2 = fn_0016a9b0(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7581,uVar2,2);
    *(undefined4 *)(param_1 + 0x1f0) = uVar2;
    if (*(char *)(param_1 + 0x208) != -1) {
      iVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
      if (iVar1 == 2) {
        fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1f0));
      }
      else {
        if (iVar1 == 3) {
          uVar3 = *(undefined4 *)(param_1 + 0x1f0);
          uVar2 = *(undefined4 *)(DAT_008977e0 + 0x2c);
        }
        else {
          if (iVar1 != 4) goto LAB_001e3a08;
          uVar3 = *(undefined4 *)(param_1 + 0x1f0);
          uVar2 = *(undefined4 *)(DAT_008977e0 + 0x2c);
        }
        fn_0023dd30(uVar2,uVar3);
      }
    }
  }
LAB_001e3a08:
  *(undefined4 *)(param_1 + 500) = 0x1e;
  return;
}



void fn_001e3748(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x1c);
  do {
    iVar1 = fn_006b51d8(uVar5,iVar4);
    if (iVar1 != 0) {
      *(int *)(param_1 + iVar4 * 4 + 0x1f8) = iVar1;
      iVar6 = param_1 + iVar4 * 0xc;
      iVar2 = fn_006a7f8c(iVar6 + 0x230);
      if (iVar2 == 0) {
        iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar1);
        uVar3 = fn_006f7a9c(DAT_008977e0);
        fn_001c6c54(&local_30,uVar3,(int)*(short *)(iVar1 + 0x1c),0);
        *(undefined4 *)(iVar6 + 0x230) = local_30;
        *(undefined4 *)(iVar6 + 0x234) = uStack_2c;
        *(undefined4 *)(iVar6 + 0x238) = uStack_28;
        fn_001e1268(param_1,(int)(char)iVar4);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = fn_006b51ec(uVar5);
  iVar1 = fn_006f7530(DAT_008977e0);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x3f0);
  }
  iVar1 = fn_006f7a20(DAT_008977e0);
  bVar7 = iVar1 == 0;
  if (bVar7) {
    iVar1 = *(int *)(param_1 + 0x378);
  }
  if (((bVar7 && iVar1 == 0) && (-1 < iVar4)) && (iVar1 = fn_006b51d8(uVar5,iVar4), iVar1 != 0)) {
    fn_001e8ef0(param_1,(int)(char)iVar4,1);
    return;
  }
  return;
}


