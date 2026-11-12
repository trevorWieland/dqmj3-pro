#include "003ed4ac_003ef450.h"



void fn_003ef450(int param_1)

{
  fn_00190cdc(*(undefined4 *)(param_1 + 100),0);
  fn_00190cdc(*(undefined4 *)(param_1 + 0x6c),0);
  fn_00190e00(*(undefined4 *)(param_1 + 0x68));
  *(undefined1 *)(param_1 + 0x88) = 1;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_003ef408(int param_1)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_1 + 0x88) == '\0') && (*(float *)(*(int *)(param_1 + 0x68) + 0x24) == 0.0))
     && (*(float *)(*(int *)(param_1 + 0x6c) + 0x24) == 0.0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_003ef3e8(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 8 + param_3 * 4 + 0x78);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_4;
  return;
}



void fn_003ef380(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    piVar3 = (int *)(param_1 + iVar2 * 4 + 0x70);
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar2 = iVar2 + 1;
    *piVar3 = 0;
  } while (iVar2 < 2);
  return;
}



undefined4 fn_003ef1fc(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_00404164(*(undefined4 *)(param_1 + 100));
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x18))(*(int **)(param_1 + 100),0,1);
  return 1;
}



undefined4 *
fn_003ef0ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1);
  *puVar2 = &DAT_00834374;
  puVar2[0x19] = 0;
  iVar1 = fn_00145b00(0x54,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)puVar2[1];
    uVar5 = puVar2[0x12];
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar3 == &DAT_00890360) goto LAB_003ef18c;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_003ef18c:
    uVar5 = fn_00404020(iVar1,puVar4,uVar5,param_4,unaff_r4);
  }
  puVar2[0x19] = uVar5;
  return puVar2;
}



undefined4 fn_003ef09c(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  return 1;
}



undefined4 * fn_003eec0c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  
  iVar1 = fn_00145b00(0x120,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0043d350(iVar1,param_1,(char *)&DAT_003ef074,1,unaff_r4);
  puVar5 = (undefined4 *)0x0;
  *puVar2 = &DAT_00834208;
  *(undefined1 *)(puVar2 + 0x41) = 0;
  *(undefined1 *)((int)puVar2 + 0x105) = 0;
  *(undefined1 *)((int)puVar2 + 0x106) = 0;
  *(undefined1 *)((int)puVar2 + 0x107) = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  *(undefined1 *)(puVar2 + 0x45) = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*param_1)(param_1);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_003ef01c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  param_1 = (undefined4 *)0x0;
LAB_003ef01c:
  puVar2[0x47] = 0;
  puVar2[0x46] = param_1;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0xfe);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892cf0) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[0x47] = puVar5;
  return puVar2;
}



void fn_003ed644(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  piVar1 = DAT_00892dfc;
  if (*(int *)(param_1 + 0xa4) == 0) {
    bVar6 = false;
    iVar8 = 0;
    if (0 < DAT_00892dfc[5]) {
      do {
        piVar3 = *(int **)(piVar1[2] + iVar8 * 0x34 + 0x30);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x50))(piVar3,0);
          bVar6 = true;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < piVar1[5]);
      if (bVar6) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    return;
  }
  iVar8 = 0;
  if (0 < DAT_00892dfc[5]) {
    uVar9 = 0;
    do {
      iVar2 = piVar1[2] + iVar8 * 0x34;
      if ((*(char *)(iVar2 + 0x10) == '\0') &&
         (piVar3 = *(int **)(iVar2 + 0x30), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0xc))();
        iVar2 = piVar1[2] + iVar8 * 0x34;
        uVar4 = *(uint *)(iVar2 + 0x30);
        bVar6 = *(float *)(uVar4 + 0x24) == (float)((ulonglong)uVar9 >> 0x20);
        if (bVar6) {
          uVar4 = (uint)*(byte *)(iVar2 + 0x10);
        }
        if (bVar6 && uVar4 == 0) {
          iVar2 = (**(code **)(*(int *)piVar1[1] + 0x10))
                            ((int *)piVar1[1],iVar8,*(undefined4 *)(iVar2 + 0x24));
          iVar5 = piVar1[2] + iVar8 * 0x34;
          iVar7 = *(int *)(iVar5 + 0x28) + 1;
          *(int *)(iVar5 + 0x28) = iVar7;
          if (iVar7 < iVar2) {
            iVar2 = (**(code **)(*(int *)piVar1[1] + 0x14))
                              ((int *)piVar1[1],iVar8,
                               *(undefined4 *)(piVar1[2] + iVar8 * 0x34 + 0x24));
            *(int *)(piVar1[2] + iVar8 * 0x34 + 0x2c) = iVar2;
            if (iVar2 == 999) goto LAB_003ed7ec;
            piVar3 = *(int **)(*(int *)(*piVar1 + 0x10) + iVar2 * 8 + 4);
            *(int **)(piVar1[2] + iVar8 * 0x34 + 0x30) = piVar3;
joined_r0x003ed870:
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x50))(piVar3,0);
            }
          }
          else {
LAB_003ed7ec:
            iVar2 = piVar1[2] + iVar8 * 0x34;
            iVar5 = *(int *)(iVar2 + 0x24) + 1;
            *(int *)(iVar2 + 0x24) = iVar5;
            iVar2 = piVar1[2] + iVar8 * 0x34;
            if (iVar5 <= *(int *)(iVar2 + 0x20)) {
              *(undefined4 *)(iVar2 + 0x28) = 0;
              iVar2 = (**(code **)(*(int *)piVar1[1] + 0x14))
                                ((int *)piVar1[1],iVar8,
                                 *(undefined4 *)(piVar1[2] + iVar8 * 0x34 + 0x24),0);
              *(int *)(piVar1[2] + iVar8 * 0x34 + 0x2c) = iVar2;
              if (iVar2 != 999) {
                piVar3 = *(int **)(*(int *)(*piVar1 + 0x10) + iVar2 * 8 + 4);
                *(int **)(piVar1[2] + iVar8 * 0x34 + 0x30) = piVar3;
                goto joined_r0x003ed870;
              }
            }
            *(undefined1 *)(piVar1[2] + iVar8 * 0x34 + 0x10) = 1;
            *(undefined4 *)(piVar1[2] + iVar8 * 0x34 + 0x30) = 0;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < piVar1[5]);
  }
  iVar8 = 0;
  if (0 < DAT_00892dfc[5]) {
    do {
      if (*(char *)(DAT_00892dfc[2] + iVar8 * 0x34 + 0x10) == '\0') {
        return;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < DAT_00892dfc[5]);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_003ed538(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar3 = (**(code **)(*param_1 + 8))(param_1);
  puVar2 = DAT_00892df8;
  uVar7 = *(undefined4 *)(iVar3 + 8);
  puVar4 = &DAT_00892df8;
  if (DAT_00892df8 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(uint)*(byte *)(DAT_00892df8 + 7);
  }
  if (DAT_00892df8 != (undefined4 *)0x0 && puVar4 != (undefined4 *)0x0) {
    iVar3 = (int)(DAT_00892df8[5] - DAT_00892df8[4]) >> 3;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      fn_00159f34(*puVar2,*(undefined4 *)(puVar2[4] + iVar3 * 8));
    }
    uVar6 = puVar2[4];
    puVar2[4] = 0;
    uVar5 = puVar2[5];
    puVar2[5] = 0;
    iVar3 = puVar2[6];
    puVar2[6] = 0;
    uVar1 = uVar6;
    if (uVar5 <= uVar6) {
      for (; uVar1 != uVar5; uVar1 = uVar1 + 8) {
      }
    }
    fn_001008c4(uVar6,(int)(iVar3 - uVar6) >> 3,0);
    *(undefined1 *)(puVar2 + 7) = 0;
  }
  if (param_1[0x23] != -1) {
    fn_00159f34(uVar7);
  }
  if (param_1[0x22] != -1) {
    fn_00159f34(uVar7);
  }
  if (param_1[0x21] != -1) {
    fn_0016a43c(uVar7);
  }
  if (param_1[0x20] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar7);
  }
  return;
}



void fn_003ed51c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  *param_1 = &DAT_008340d8;
  param_1[1] = param_3;
  param_1[2] = 0;
  return;
}



void fn_003ed4ac(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x003ed510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
    if (param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x003ed4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x14))(param_1);
      return;
    }
  }
  return;
}


