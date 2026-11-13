#include "001e4fe8_001e5b80.h"



void fn_001e5b80(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38 [5];
  
  uVar1 = fn_006f7358(DAT_008977e0);
  bVar9 = uVar1 == 0;
  if (bVar9) {
    uVar1 = (uint)*(byte *)(param_1 + 0x1b1);
  }
  if (bVar9 && uVar1 == 0) {
    uVar6 = *(undefined4 *)(DAT_00897804 + 0x1c);
    iVar2 = fn_00154ac8(0x23);
    if (iVar2 != 0) {
      fn_00144834(0x23,0);
      iVar2 = 0;
      do {
        iVar3 = fn_006b51d8(uVar6,iVar2);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + iVar2 * 4 + 0x1f8) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    local_38[0] = fn_006b51d8(uVar6,0);
    local_38[1] = fn_006b51d8(uVar6,1);
    local_38[2] = fn_006b51d8(uVar6,2);
    local_38[3] = fn_006b51d8(uVar6,3);
    iVar2 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + iVar2 * 4 + 0x1f8);
      bVar9 = local_38[iVar2] != iVar3;
      if (bVar9) {
        iVar3 = (int)*(char *)(param_1 + 0x208);
      }
      if (bVar9 && iVar3 != -1) break;
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        uVar6 = fn_006f7a9c(DAT_008977e0);
        iVar2 = 0;
        do {
          if ((local_38[iVar2] != *(int *)(param_1 + iVar2 * 4 + 0x1f8)) &&
             (iVar3 = fn_006a7f8c(param_1 + iVar2 * 0xc + 0x230), iVar3 != 0)) {
            fn_001e11b0(param_1,(int)(char)iVar2);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 3);
        uVar7 = 0;
        iVar2 = 0;
        do {
          iVar3 = param_1 + iVar2 * 4;
          if ((*(int *)(iVar3 + 0x17c) == 0) && (local_38[iVar2] != 0)) {
            uVar7 = 1;
            iVar8 = param_1 + iVar2 * 0xc;
            iVar4 = fn_006a7f8c(iVar8 + 0x230);
            if (iVar4 == 0) {
              iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_38[iVar2]);
              fn_001c6c54(&local_44,uVar6,(int)*(short *)(iVar4 + 0x1c),1);
              *(undefined4 *)(iVar8 + 0x230) = local_44;
              *(undefined4 *)(iVar8 + 0x234) = uStack_40;
              *(undefined4 *)(iVar8 + 0x238) = uStack_3c;
              *(int *)(iVar3 + 0x1f8) = local_38[iVar2];
            }
            else {
              uVar5 = fn_006f7a9c(DAT_008977e0);
              iVar3 = fn_00278bc8(uVar5,iVar8 + 0x230);
              if (iVar3 != 0) {
                fn_001e1268(param_1,(int)(char)iVar2);
                uVar7 = 0;
              }
            }
          }
          else {
            *(int *)(iVar3 + 0x1f8) = local_38[iVar2];
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 3);
        *(undefined1 *)(param_1 + 0x260) = uVar7;
        return;
      }
    }
    fn_001ea230(param_1,param_2);
  }
  return;
}



void fn_001e5a18(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [12];
  
  iVar2 = param_1[0xc2];
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)fn_00171634();
    local_2c = *puVar1;
    uStack_28 = puVar1[1];
    uStack_24 = puVar1[2];
    fn_006a8048(param_1);
    fn_0023f0f4(param_1[100],&local_2c,local_20);
    fn_001e49d4(param_1,&local_2c);
    (**(code **)(*param_1 + 0x30))(param_1,&local_2c,1,1,0);
    (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
    return;
  }
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x001e5b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,0,4);
    return;
  }
  if (iVar2 == 2) {
    puVar1 = (undefined4 *)fn_00171634();
    local_2c = *puVar1;
    uStack_28 = puVar1[1];
    uStack_24 = puVar1[2];
    fn_006a8048(param_1);
    fn_0023f0f4(param_1[100],&local_2c,local_20);
    fn_001e49d4(param_1,&local_2c);
    (**(code **)(*param_1 + 0x30))(param_1,&local_2c,1,1,0);
    (**(code **)(*param_1 + 0x44))(param_1,5,4,0);
  }
  return;
}



void fn_001e59a4(int param_1,undefined4 param_2,float *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  *(float *)(param_1 + 0x1c0) = param_3[2] * in_s0;
  *(float *)(param_1 + 0x1b8) = fVar2 * in_s0;
  *(float *)(param_1 + 0x1bc) = fVar3 * in_s0;
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  *(char *)(param_1 + 0x1c8) = (char)param_4;
  *(undefined1 *)(param_1 + 0x1d0) = param_5;
  fn_0023f3dc(*(undefined4 *)(param_1 + 400));
  *(undefined1 *)(*(int *)(param_1 + 400) + 0x3d) = 1;
  if (param_4 == 0) {
    uVar1 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar1,0xffffffff);
    return;
  }
  return;
}



void fn_001e56f4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_008977e0 + 0x229) != '\0') {
    if (param_1[0xee] != -1) {
      fn_001c5388(param_1,param_1[99]);
      param_1[0xee] = -1;
    }
    fn_001da428(param_1);
    iVar2 = (int)(char)param_1[0x82];
    if (iVar2 != -1) {
      fn_001ea230(param_1,1);
    }
    if ((int *)param_1[99] != (int *)0x0) {
      (**(code **)(*(int *)param_1[99] + 4))();
      param_1[99] = 0;
    }
    param_1[0x38] = -1;
    param_1[0x38] = 0;
    fn_001e3658(param_1,0);
    iVar1 = fn_001c54d0(param_1,param_1[99],(char *)&DAT_00860e9c);
    param_1[0xee] = iVar1;
    fn_006f7a20(DAT_008977e0);
    fn_001c5180(param_1,param_1[99]);
    if (iVar2 != -1) {
      fn_001e8ef0(param_1,iVar2,1);
    }
  }
  if (*(char *)(DAT_008977e0 + 0x22a) == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001e5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x54))(param_1,*(char *)(DAT_008977e0 + 0x22a) != '\0');
  return;
}



void fn_001e5690(void)

{
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0x10))(*(int **)(DAT_008977e0 + 0x2c),0x80f3);
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0x10))(*(int **)(DAT_008977e0 + 0x2c),0x80f4);
                    /* WARNING: Could not recover jumptable at 0x001e56e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0x10))(*(int **)(DAT_008977e0 + 0x2c),0x80e9);
  return;
}



void fn_001e55a8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x438) = 1;
  fn_006f751c(DAT_008977e0);
  fn_0033f7b0();
  fn_001ea890(param_1,0xb);
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_006f72c8(DAT_008977e0);
    (**(code **)(*piVar2 + 0x54))(piVar2,0);
  }
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x454) = 3;
  *(undefined4 *)(param_1 + 0x458) = 0xf;
  iVar1 = fn_006f751c(DAT_008977e0);
  fn_00342010(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(param_1 + 0x454));
  *(undefined4 *)(param_1 + 0x45c) = 0;
  fn_001da640(param_1);
  if (*(char *)(param_1 + 0x208) != -1) {
    fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
  }
  fn_006887c8(param_1 + 0x460);
  return;
}



void fn_001e552c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x378);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x3ac) == '\0') {
      iVar1 = *(int *)(param_1 + 0x18c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3b4);
    }
  }
  fn_001da65c(param_1,iVar1,param_2);
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar1 * 4 + 0x17c);
    if (iVar2 != 0) {
      fn_001da65c(param_1,iVar2,*(char *)(param_1 + 0x418) == '\0' & param_2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}



undefined4 fn_001e4fe8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar1 = fn_0028aad0(param_3,*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  fn_0020bbc4(auStack_28,uVar1);
  if (*(char *)(param_1 + 0x434) != '\0') {
    uVar2 = fn_006f756c(DAT_008977e0);
    fn_002da538(uVar2,1);
  }
  iVar3 = fn_006bfffc(auStack_24);
  if (iVar3 != 0) {
    uVar1 = fn_006945fc(DAT_008977e0,(char *)&DAT_001e51f0);
    fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar1);
    return 0;
  }
  uVar2 = fn_0024f870(uVar1);
  fn_0015b0f8(param_2);
  uVar5 = fn_002469ac(uVar1,param_2,uVar2);
  if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (param_4 < 2) {
    pcVar4 = (char *)&DAT_00860ed0;
  }
  else {
    fn_0015b0f8(param_4,(int)((ulonglong)uVar5 >> 0x20));
    pcVar4 = (char *)&DAT_00860eb8;
  }
  uVar1 = fn_006945fc(DAT_008977e0,pcVar4);
  fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar1);
  return 1;
}


