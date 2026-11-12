#include "0031e264_0031eba4.h"



void fn_0031eb8c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uStack_18;
  uint auStack_14 [2];
  
  fn_0069e748();
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + -4);
  if (uVar2 == *(uint *)(*(int *)(param_1 + 0x78) + -4)) {
    uStack_18 = uVar2;
    auStack_14[0] = *(uint *)(*(int *)(param_1 + 0x78) + -4);
    puVar3 = &uStack_18;
    if (auStack_14[0] < uVar2) {
      puVar3 = auStack_14;
    }
    iVar1 = fn_001006de(*(int *)(param_1 + 0x74),*(int *)(param_1 + 0x78),*puVar3);
    if ((iVar1 == 0) &&
       (*(int *)(*(int *)(param_1 + 0x74) + -4) == *(int *)(*(int *)(param_1 + 0x78) + -4)))
    goto LAB_0031ec24;
  }
  fn_007854f8((int *)(param_1 + 0x74),param_1 + 0x78);
LAB_0031ec24:
  if (*(char *)(param_1 + 0x7c) != *(char *)(param_1 + 0x7d)) {
    *(char *)(param_1 + 0x7c) = *(char *)(param_1 + 0x7d);
  }
  if (*(char *)(param_1 + 0x7e) != *(char *)(param_1 + 0x7f)) {
    *(char *)(param_1 + 0x7e) = *(char *)(param_1 + 0x7f);
  }
  if (*(char *)(param_1 + 0x80) != *(char *)(param_1 + 0x81)) {
    *(char *)(param_1 + 0x80) = *(char *)(param_1 + 0x81);
  }
  if (*(char *)(param_1 + 0x82) != *(char *)(param_1 + 0x83)) {
    *(char *)(param_1 + 0x82) = *(char *)(param_1 + 0x83);
  }
  return;
}



void fn_0031e7f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = fn_003035b0(*(int *)(param_1 + 8) + 0x80,(char *)&DAT_0031eb38,param_3,param_4,param_4);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x86) = 1;
  }
  else {
    iVar1 = fn_003035b0(*(int *)(param_1 + 8) + 0x80,(char *)&DAT_0031eb4c);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x87) = 1;
    }
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_008937f8,1);
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a928) goto LAB_0031e890;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0031e890:
  *(int **)(param_1 + 0x14) = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                              (*(int **)(param_1 + 8),DAT_008937fc,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a928) goto LAB_0031e8e8;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_0031e8e8:
    *(int **)(param_1 + 0x14) = piVar2;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))(*(int **)(param_1 + 0x14),DAT_00893810,1)
  ;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                            (*(int **)(param_1 + 0x14),DAT_00893804,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_0031e960;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0031e960:
  *(int **)(param_1 + 0x1c) = piVar2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                            (*(int **)(param_1 + 0x14),DAT_00893808,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a934) goto LAB_0031e9b4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0031e9b4:
  *(int **)(param_1 + 0x20) = piVar2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x14) + 0x2c))
                            (*(int **)(param_1 + 0x14),DAT_0089380c,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a934) goto LAB_0031ea00;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0031ea00:
  *(int **)(param_1 + 0x24) = piVar2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893800,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a928) {
        piVar4 = piVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  *(int **)(param_1 + 0x18) = piVar4;
  fn_0031fb1c(param_1,piVar4,param_1 + 0x28,&PTR_s_Null_guide_00_00893820,4);
  fn_0031fb1c(param_1,*(undefined4 *)(param_1 + 0x18),param_1 + 0x34,&DAT_00893830,3);
  fn_0031fb1c(param_1,*(undefined4 *)(param_1 + 0x18),param_1 + 0x40,
               &PTR_s_x_battle_ride_set_00_0089383c,0xd);
  fn_0031fb1c(param_1,*(undefined4 *)(param_1 + 0x18),param_1 + 0x4c,&DAT_00893870,3);
  fn_0031fb1c(param_1,*(undefined4 *)(param_1 + 0x18),param_1 + 0x58,&DAT_0089387c);
  fn_0069e710(param_1);
  fn_0031ec6c(param_1,1);
  fn_0031f684(param_1,1);
  fn_0031ef00(param_1,1,0);
  fn_0031f3f4(param_1,1);
  fn_0031f954(param_1,1);
  fn_0031eba4(param_1);
  return;
}



void fn_0031eba4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_18;
  uint local_14;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + -4);
  if (uVar2 == *(uint *)(*(int *)(param_1 + 0x78) + -4)) {
    local_18 = uVar2;
    local_14 = *(uint *)(*(int *)(param_1 + 0x78) + -4);
    puVar3 = &local_18;
    if (local_14 < uVar2) {
      puVar3 = &local_14;
    }
    iVar1 = fn_001006de(*(int *)(param_1 + 0x74),*(int *)(param_1 + 0x78),*puVar3);
    if ((iVar1 == 0) &&
       (*(int *)(*(int *)(param_1 + 0x74) + -4) == *(int *)(*(int *)(param_1 + 0x78) + -4)))
    goto LAB_0031ec24;
  }
  fn_007854f8((int *)(param_1 + 0x74),param_1 + 0x78);
LAB_0031ec24:
  if (*(char *)(param_1 + 0x7c) != *(char *)(param_1 + 0x7d)) {
    *(char *)(param_1 + 0x7c) = *(char *)(param_1 + 0x7d);
  }
  if (*(char *)(param_1 + 0x7e) != *(char *)(param_1 + 0x7f)) {
    *(char *)(param_1 + 0x7e) = *(char *)(param_1 + 0x7f);
  }
  if (*(char *)(param_1 + 0x80) != *(char *)(param_1 + 0x81)) {
    *(char *)(param_1 + 0x80) = *(char *)(param_1 + 0x81);
  }
  if (*(char *)(param_1 + 0x82) != *(char *)(param_1 + 0x83)) {
    *(char *)(param_1 + 0x82) = *(char *)(param_1 + 0x83);
  }
  return;
}



void fn_0031e75c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008230a4;
  fn_00100414(param_1 + 0xe,fn_0079ed94,4,5);
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
  }
  fn_00100414(param_1 + 7,fn_0079ee34,4,5);
  fn_00100414(param_1 + 5,fn_0079ee0c,4,2);
  fn_0069e808(param_1);
  return;
}



void fn_0031e6b4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008230a4;
  fn_00100414(param_1 + 0xe,fn_0079ed94,4,5);
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
  }
  fn_00100414(param_1 + 7,fn_0079ee34,4,5);
  fn_00100414(param_1 + 5,fn_0079ee0c,4,2);
  fn_0069e808(param_1);
  fn_002feef8();
  return;
}



int * fn_0031e264(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  uStack_28 = param_4;
  puVar1 = (undefined4 *)fn_0069e7cc(param_1,param_2,param_3,param_4,param_5);
  *puVar1 = &PTR_FUN_008230a4;
  iVar2 = fn_00101a1c(puVar1 + 5,&LAB_001ad818,4,2);
  iVar2 = fn_00101a1c(iVar2 + 8,&LAB_001ad8f4,4,5);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  piVar3 = (int *)fn_00101a1c(iVar2 + 0x1c,&LAB_001ad91c,4,5);
  iVar2 = 0;
  piVar8 = piVar3 + -0xe;
  do {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    fn_0017d96c(&local_58,0x20,0x1f,(char *)&DAT_0031e664,iVar2);
    piVar4 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,&local_58,1);
    if (piVar4 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
      do {
        if (puVar1 == &DAT_0089a928) goto LAB_0031e368;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    piVar4 = (int *)0x0;
LAB_0031e368:
    iVar5 = fn_00145b00(0x24,&DAT_00812c8c);
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_0037d370(iVar5,local_30,piVar4,1,piVar3[-10]);
    }
    piVar6 = (int *)piVar8[iVar2 + 5];
    if (piVar6 != piVar4) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      piVar8[iVar2 + 5] = (int)piVar4;
    }
    (**(code **)(*(int *)piVar8[iVar2 + 5] + 0x10))();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 0;
  do {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    fn_0017d96c(&local_58,0x20,0x1f,(char *)&DAT_0031e67c,iVar2);
    piVar4 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,&local_58,1);
    if (piVar4 != (int *)0x0) {
      puVar1 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
      do {
        if (puVar1 == &DAT_0089a928) goto LAB_0031e474;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    piVar4 = (int *)0x0;
LAB_0031e474:
    iVar5 = fn_00145b00(0x20,&DAT_00812c8c);
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_003945c8(iVar5,local_30,piVar4,1,piVar3[-10]);
    }
    piVar6 = (int *)piVar8[iVar2 + 7];
    if (piVar6 != piVar4) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      piVar8[iVar2 + 7] = (int)piVar4;
    }
    (**(code **)(*(int *)piVar8[iVar2 + 7] + 0x10))();
    iVar5 = fn_00145b00(0x74,&DAT_00812c8c);
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_002cbd7c(iVar5,local_30);
    }
    piVar6 = (int *)piVar8[iVar2 + 0xe];
    if (piVar6 != piVar4) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      piVar8[iVar2 + 0xe] = (int)piVar4;
    }
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      uVar7 = (**(code **)(*param_3 + 0x2c))(param_3,(char *)&DAT_0031e690,1);
      iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)fn_0025e920(iVar2,local_30,uVar7);
      }
      piVar6 = (int *)piVar3[-2];
      if (piVar6 != piVar4) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
        piVar3[-2] = (int)piVar4;
      }
      iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)fn_0025e920(iVar2,local_30,uVar7);
      }
      piVar6 = (int *)piVar3[-1];
      if (piVar6 != piVar4) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
        piVar3[-1] = (int)piVar4;
      }
      uVar7 = (**(code **)(*param_3 + 0x2c))(param_3,(char *)&DAT_0031e6a0,1);
      *(undefined4 *)(*piVar3 + 0x30) = uVar7;
      *(undefined4 *)(piVar3[1] + 0x30) = uVar7;
      *(undefined4 *)(piVar3[2] + 0x30) = uVar7;
      *(undefined4 *)(piVar3[3] + 0x30) = uVar7;
      *(undefined4 *)(piVar3[4] + 0x30) = uVar7;
      return piVar8;
    }
  } while( true );
}


