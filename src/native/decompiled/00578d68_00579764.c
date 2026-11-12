#include "00578d68_00579764.h"



void fn_00579764(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00579794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + param_2 * 0x30 + 0x34) + 0xc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x9c) + 0xc))();
  return;
}



void fn_00579668(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_1 = param_1 + param_2 * 0x30;
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe | 1;
    if (*(int *)(param_1 + 0x38) != 0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(int **)(param_1 + 0x3c),0);
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(*(int **)(param_1 + 0x34),1);
                    /* WARNING: Could not recover jumptable at 0x0057975c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x34) + 0x50))(*(int **)(param_1 + 0x34),1);
    return;
  }
  if (*(char *)(param_1 + 0xe9) == '\0') {
    *(byte *)(*(int *)(param_1 + 0x80) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x80) + 0x44) & 0xfe | 1;
    (**(code **)(**(int **)(param_1 + 0x94) + 0x10))(*(int **)(param_1 + 0x94),0);
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x10))(*(int **)(param_1 + 0x9c),1);
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x50))(*(int **)(param_1 + 0x9c),1);
    *(undefined1 *)(param_1 + 0xe9) = 1;
  }
  return;
}



void fn_00579630(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00579660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + param_2 * 0x30 + 0x30) + 0xc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00579648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x98) + 0xc))();
  return;
}



bool fn_005795e0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x30;
  iVar2 = *(int *)(param_1 + 0x38);
  bVar1 = *(float *)(*(int *)(param_1 + 0x30) + 0x24) == 0.0;
  if (iVar2 != 0) {
    bVar1 = bVar1 && *(float *)(iVar2 + 0x24) == 0.0;
  }
  return bVar1;
}



void fn_00579518(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    param_1 = param_1 + param_2 * 0x30;
    piVar1 = *(int **)(param_1 + 0x38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,0);
    }
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))(*(int **)(param_1 + 0x30),1);
                    /* WARNING: Could not recover jumptable at 0x005795d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x10))(*(int **)(param_1 + 0x90),0);
    (**(code **)(**(int **)(param_1 + 0x98) + 0x10))(*(int **)(param_1 + 0x98),1);
    (**(code **)(**(int **)(param_1 + 0x98) + 0x54))();
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  return;
}



void fn_00579428(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + param_2 + 0xd0) = 0;
  iVar2 = param_1 + param_2 * 0x30;
  (**(code **)(**(int **)(iVar2 + 0x30) + 0x10))(*(int **)(iVar2 + 0x30),0);
  (**(code **)(**(int **)(iVar2 + 0x30) + 100))();
  (**(code **)(**(int **)(iVar2 + 0x34) + 0x10))(*(int **)(iVar2 + 0x34),0);
  (**(code **)(**(int **)(iVar2 + 0x34) + 100))();
  piVar1 = *(int **)(iVar2 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,0);
    (**(code **)(**(int **)(iVar2 + 0x38) + 100))();
  }
  piVar1 = *(int **)(iVar2 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,0);
    (**(code **)(**(int **)(iVar2 + 0x3c) + 100))();
  }
  *(byte *)(*(int *)(iVar2 + 0x1c) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x1c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar2 + 0x20) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x20) + 0x44) & 0xfe;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  return;
}



void fn_00579314(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = &DAT_00841620;
  do {
    uVar1 = 0;
    do {
      if (param_1[uVar2 * 9 + uVar1 + 0x3f] != -1) {
        fn_0016a43c(param_1[0x39]);
        param_1[uVar2 * 9 + uVar1 + 0x3f] = 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  fn_00579ad0(param_1);
  fn_002feef8();
  return;
}



int fn_00578de8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  puVar1 = (undefined4 *)
           fn_00579a04(param_1,param_2,param_3,param_5,param_4,(&DAT_007ba8a4)[param_4]);
  *puVar1 = &DAT_00841620;
  iVar2 = fn_00101a1c(puVar1 + 0x3f,&LAB_00578b28,0x24,2);
  iVar7 = iVar2 + -0xfc;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  uVar11 = 0;
  local_40 = 0x130f0b07;
  do {
    uVar3 = fn_0016dcdc(local_2c,*(undefined4 *)(iVar2 + -0x24),10,1,1,
                         *(undefined1 *)((int)&local_40 + uVar11));
    iVar12 = uVar11 * 3;
    iVar9 = iVar7 + uVar11 * 0x30;
    *(undefined4 *)(iVar9 + 0x10) = uVar3;
    uVar3 = fn_00178f9c(local_2c,uVar3);
    *(undefined4 *)(iVar9 + 0x14) = uVar3;
    puVar1 = &DAT_007ba92c + uVar11 * 7;
    uVar8 = 0;
    do {
      piVar4 = (int *)fn_001828f0(*(undefined4 *)(iVar9 + 0x14),(&DAT_007ba930)[uVar8 * 7]);
      if (piVar4 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar5 == &DAT_0089a92c) goto LAB_00578eec;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_00578eec:
      *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe;
      if (uVar8 == uVar11) {
        *(int **)(iVar7 + uVar8 * 0x30 + 0x1c) = piVar4;
      }
      piVar4 = (int *)fn_001828f0(*(undefined4 *)(iVar9 + 0x14),puVar1[2]);
      if (piVar4 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar5 == &DAT_0089a92c) goto LAB_00578f5c;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_00578f5c:
      *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe;
      if (uVar8 == uVar11) {
        iVar10 = iVar7 + uVar8 * 0x30;
        *(int **)(iVar10 + 0x20) = piVar4;
        uVar3 = fn_001828f0(*(undefined4 *)(iVar10 + 0x14),(&DAT_007ba92c)[uVar8 * 7]);
        *(undefined4 *)(iVar10 + 0x18) = uVar3;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    uVar3 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),*(undefined4 *)(&DAT_007ba8fc + iVar12 * 4))
    ;
    *(undefined4 *)(iVar9 + 0x24) = uVar3;
    uVar3 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),*(undefined4 *)(&DAT_007ba900 + iVar12 * 4))
    ;
    *(undefined4 *)(iVar9 + 0x28) = uVar3;
    uVar3 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),(&PTR_s_Null_corner_08_007ba904)[iVar12]);
    *(undefined4 *)(iVar9 + 0x2c) = uVar3;
    piVar4 = (int *)fn_0017dd54(*(undefined4 *)(iVar9 + 0x14),puVar1[3],1);
    *(int **)(iVar9 + 0x30) = piVar4;
    (**(code **)(*piVar4 + 100))();
    piVar4 = (int *)fn_00194f08(*(undefined4 *)(iVar9 + 0x14),puVar1[5],0,1);
    *(int **)(iVar9 + 0x34) = piVar4;
    (**(code **)(*piVar4 + 100))();
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  uVar11 = 0;
  local_3c = 0x130f0b07;
  local_38 = 0x120d0a06;
  do {
    uVar3 = fn_0016dcdc(local_2c,*(undefined4 *)(iVar2 + -0x24),0xf,1,1,
                         *(undefined1 *)((int)&local_38 + uVar11));
    *(undefined4 *)(iVar7 + uVar11 * 4 + 0xfc) = uVar3;
    uVar3 = fn_00178f9c(local_2c,uVar3);
    piVar4 = (int *)fn_001828f0(uVar3,(&DAT_007ba8cc)[uVar11]);
    if (piVar4 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
      do {
        if (puVar1 == &DAT_0089a92c) goto LAB_005790d0;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    piVar4 = (int *)0x0;
LAB_005790d0:
    *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe;
    if (uVar11 == local_28) {
      *(int **)(iVar2 + 0x14) = piVar4;
      piVar4 = (int *)fn_0017dd54(uVar3,(&PTR_s_to_enemy_00_007ba99c)[local_28],0);
      *(int **)(iVar2 + 0x20) = piVar4;
      (**(code **)(*piVar4 + 100))();
      uVar6 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),
                           *(undefined4 *)(&DAT_007ba8dc + local_28 * 4));
      *(undefined4 *)(iVar2 + 0x18) = uVar6;
      uVar6 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),(char *)&DAT_0085c57c);
      *(undefined4 *)(iVar2 + 0x1c) = uVar6;
      piVar4 = (int *)fn_0017dd54(uVar3,(char *)&DAT_0085c72c,0);
      *(int **)(iVar2 + 0x54) = piVar4;
      (**(code **)(*piVar4 + 100))();
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      piVar4 = (int *)fn_001828f0(uVar3,(char *)&DAT_0085c760);
      if (piVar4 != (int *)0x0) {
        puVar1 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar1 == &DAT_0089a92c) goto LAB_005791a4;
          puVar1 = (undefined4 *)*puVar1;
        } while (puVar1 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_005791a4:
      *(int **)(iVar2 + 0x48) = piVar4;
      uVar3 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),(char *)&DAT_0085c71c);
      *(undefined4 *)(iVar2 + 0x50) = uVar3;
      uVar3 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),(char *)&DAT_0085c57c);
      *(undefined4 *)(iVar2 + 0x4c) = uVar3;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  uVar11 = 0;
  do {
    uVar3 = fn_0016dcdc(local_2c,*(undefined4 *)(iVar2 + -0x24),0xe,1,1,
                         *(undefined1 *)((int)&local_3c + uVar11));
    *(undefined4 *)(iVar7 + uVar11 * 4 + 0x120) = uVar3;
    uVar3 = fn_00178f9c(local_2c,uVar3);
    piVar4 = (int *)fn_001828f0(uVar3,(&PTR_s_to_ally_00_007ba8bc)[uVar11]);
    if (piVar4 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
      do {
        if (puVar1 == &DAT_0089a92c) goto LAB_00579258;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    piVar4 = (int *)0x0;
LAB_00579258:
    *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe;
    if (uVar11 == local_28) {
      *(int **)(iVar2 + 0x38) = piVar4;
      piVar4 = (int *)fn_0017dd54(uVar3,(&PTR_s_to_ally_00_007ba9bc)[local_28],1);
      *(int **)(iVar2 + 0x44) = piVar4;
      (**(code **)(*piVar4 + 100))();
      uVar6 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),(&PTR_s_Null_corner_04_007ba8ec)[local_28]
                          );
      *(undefined4 *)(iVar2 + 0x3c) = uVar6;
      uVar6 = fn_001828f0(*(undefined4 *)(iVar2 + -0x28),(char *)&DAT_0085c560);
      *(undefined4 *)(iVar2 + 0x40) = uVar6;
      *(undefined4 *)(iVar2 + 0x34) = uVar3;
    }
    uVar11 = uVar11 + 1;
    if (3 < uVar11) {
      return iVar7;
    }
  } while( true );
}



void fn_00578d68(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fn_00579968();
  uVar1 = 0;
  do {
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar2 = uVar1 + 1;
    iVar3 = param_1 + uVar1 * 0x24;
    iVar4 = *(int *)(*(int *)(iVar3 + 0x10c) + 0x10);
    *(undefined4 *)(iVar4 + 0x1c) = *param_2;
    *(undefined4 *)(iVar4 + 0x20) = uVar5;
    *(undefined4 *)(iVar4 + 0x24) = uVar6;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
    iVar4 = *(int *)(iVar3 + 0x118);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x110) + 0xc);
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    uVar6 = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar3 + 0x20) = uVar5;
    *(undefined4 *)(iVar3 + 0x24) = uVar6;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    uVar1 = uVar2;
  } while (uVar2 < 2);
  return;
}


