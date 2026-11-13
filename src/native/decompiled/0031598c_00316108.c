#include "0031598c_00316108.h"



void fn_00316108(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_00316170,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 * fn_00316094(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00822954;
  fn_0028e434(puVar1[4],&DAT_007bd0b8);
  fn_0028e434(puVar1[5],&DAT_007bd248);
  fn_0028e434(puVar1[3],&DAT_007bd5b8);
  fn_0028e434(puVar1[6],&DAT_007bd608);
  return puVar1;
}



void fn_00316070(undefined4 param_1)

{
  fn_001f7624();
  fn_001f748c(param_1,0xd4,1);
  return;
}



void fn_00316048(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_00822940;
  return;
}



void fn_00315fd0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008228f8;
  uVar2 = param_1[0xc];
  uVar1 = uVar2;
  if ((uint)param_1[0xd] <= uVar2) {
    for (; uVar1 != param_1[0xd]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0xe] - uVar2) >> 2,0);
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  fn_002cb3ec(param_1);
  return;
}



void fn_00315f18(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002cb3c0();
  *puVar1 = &DAT_008228f8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  return;
}



void fn_00315f08(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00315f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  return;
}



void fn_00315e18(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 in_lr;
  
  if (param_5 == 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x30) + param_4 * 4);
    if (iVar5 != 0) {
      iVar6 = 0;
      do {
        iVar3 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),iVar6);
        if (iVar3 == iVar5) {
          uVar7 = 0;
          goto LAB_00315eb4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      iVar6 = 0;
      do {
        iVar3 = fn_006b8538(*(undefined4 *)(DAT_00897804 + 0xc),iVar6);
        if (iVar3 == iVar5) {
          uVar7 = 1;
          goto LAB_00315eb4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    uVar7 = 0xffffffff;
LAB_00315eb4:
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x28))(*(int **)(param_1 + 0x1c),param_3,iVar5);
    fn_002b245c(*(undefined4 *)(param_1 + 0x1c),param_3,uVar7);
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = 1;
  }
  uVar1 = *(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 2;
  if (uVar1 <= param_3) {
    fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_3,uVar1,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                 in_lr);
  }
  piVar4 = *(int **)(*(int *)(iVar5 + 0x14) + param_3 * 4);
  if (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
    do {
      if (puVar2 == &DAT_008938a4) goto LAB_002b2210;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_002b2210:
                    /* WARNING: Could not recover jumptable at 0x002b2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x20))(piVar4,uVar7);
  return;
}



undefined4 fn_00315e00(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))();
  return 0;
}



void fn_00315ddc(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x00315dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_00315dbc(int param_1)

{
  fn_003d2f50(*(undefined4 *)(param_1 + 0x40),0);
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x00315dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_00315bb4(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 0x1c) = param_2;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00315c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_00315b2c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(byte *)(param_1 + 0x3c) + 1) % 4;
  *(char *)(param_1 + 0x3c) = (char)uVar1;
  fn_0022da78(param_1 + 0x30,(&DAT_007bd668)[uVar1 * 8],0);
  fn_002cb154(param_1);
  uVar2 = fn_0016ba34(DAT_00897800,DAT_00898228,
                       *(undefined4 *)(&DAT_007bd66c + (uint)*(byte *)(param_1 + 0x3c) * 8),0);
  fn_00243548(*(undefined4 *)(param_1 + 0x1c),uVar2);
  return;
}



void fn_00315b0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



void fn_00315a3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c,(undefined4 *)(param_1 + 0x28),param_4,param_4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002b24f4(iVar1,param_3,param_5,1,param_4);
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x1c) = piVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00315ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



undefined4 fn_003159fc(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (DAT_00892444 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0031598c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((param_1 != 0) && ((int)(uint)(param_3 == 0) <= param_4)) &&
     (iVar1 = fn_00147e6c(param_1,&DAT_003159f0,4), iVar1 == 0)) {
    iVar2 = param_1 + 4;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892444 = 0;
  }
  else {
    DAT_00892444 = param_3 - 4;
  }
  DAT_00892440 = iVar2;
  return 1;
}


