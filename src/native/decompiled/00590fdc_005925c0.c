#include "00590fdc_005925c0.h"



void fn_005925c0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  fn_00112e64(*(undefined4 *)(DAT_00897804 + 8),param_2 == 0);
  fn_0068ab44(param_1,0x100094b);
  uVar3 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_008959f4)[uVar3]);
    fn_0031b78c(param_1,uVar3,2,uVar1);
    uVar2 = fn_006b6268(*(undefined4 *)(DAT_00897804 + 8));
    if (uVar2 == (uVar3 ^ 1)) {
      uVar1 = 0x31;
    }
    else {
      uVar1 = 0x30;
    }
    uVar1 = fn_00192cb4(DAT_00897800,uVar1,0);
    fn_0031b78c(param_1,uVar3,8,uVar1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}



undefined4 fn_00592304(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar16 *pwStack_74;
  char *pcStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [4];
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [20];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_00592354;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00592354:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  fn_00397774(&pwStack_74);
  local_60 = 2;
  pwStack_74 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_70 = (char *)&DAT_005924ec;
  uStack_6c = 2;
  uStack_68 = 0;
  uVar3 = fn_0022f750((char *)&DAT_00866ea8);
  fn_00147974(auStack_58,uVar3);
  local_48 = 0;
  local_47 = 0;
  local_40 = 2;
  uVar3 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7650 + *(int *)(*(int *)(param_1 + 0xe4) + 0x10) * 4));
  fn_00147974(auStack_34,uVar3);
  uVar3 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7648 + *(int *)(*(int *)(param_1 + 0xe4) + 0x18) * 4));
  fn_00147974(auStack_2c,uVar3);
  fn_00397618(param_1,&pwStack_74);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar4 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar4 + 0x81) = 1;
  fn_0031f3f4(iVar4,0);
  fn_00100414(auStack_38,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_4c);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  uVar6 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_008959f4)[uVar6]);
    fn_0031b78c(param_1,uVar6,2,uVar3);
    uVar5 = fn_006b6268(*(undefined4 *)(DAT_00897804 + 8));
    if (uVar5 == (uVar6 ^ 1)) {
      uVar3 = 0x31;
    }
    else {
      uVar3 = 0x30;
    }
    uVar3 = fn_00192cb4(DAT_00897800,uVar3,0);
    fn_0031b78c(param_1,uVar6,8,uVar3);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  return 1;
}



void fn_00590fdc(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar5 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895df0) goto LAB_00591028;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00591028:
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895df0) goto LAB_00591064;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00591064:
  uVar7 = puVar1[0x43];
  if (param_1[0x21] == 0) {
    puVar5 = (undefined4 *)param_1[6];
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar6 == &DAT_00895df0) goto LAB_0059112c;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_0059112c:
    puVar6 = (undefined4 *)param_1[6];
    if (puVar6 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar1 == &DAT_00895df0) goto LAB_00591164;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_00591164:
    fn_006f5bec(puVar6[0x43],puVar5 + 5,&local_30);
    local_28 = local_30;
    uStack_24 = local_2c;
    fn_00662950(uVar7,&local_28,1);
  }
  else {
    fn_006626ac(uVar7);
    iVar3 = fn_00682bb4(uVar7);
    if (iVar3 != 0) {
      iVar3 = fn_006b4ed4(puVar6 + 3);
      if (iVar3 == 0) {
        iVar3 = fn_006b4ee4(puVar6 + 3);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*param_1 + 8))(param_1);
          piVar8 = *(int **)(iVar3 + 0x18);
          if (piVar8 != (int *)0x0) {
            puVar1 = (undefined4 *)(**(code **)(*piVar8 + 0xc))(piVar8);
            do {
              if (puVar1 == &DAT_00891a14) {
                if (piVar8 != (int *)0x0) {
                  puVar1 = (undefined4 *)param_1[6];
                  if (puVar1 == (undefined4 *)0x0) goto LAB_00591278;
                  puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
                  goto LAB_0059124c;
                }
                break;
              }
              puVar1 = (undefined4 *)*puVar1;
            } while (puVar1 != (undefined4 *)0x0);
          }
        }
      }
      else {
        iVar4 = (int)*(short *)(puVar6 + 4);
        iVar3 = fn_00660ec0(iVar4);
        if (iVar3 == 0x21) {
          fn_00241f00(*(undefined4 *)(DAT_00897804 + 0x18),iVar4);
        }
        else if (iVar3 == 0x22) {
          fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),iVar4,0);
        }
        else {
          fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),iVar4,1);
        }
      }
      goto LAB_0059128c;
    }
  }
  return;
  while (puVar2 = (undefined4 *)*puVar2, puVar2 != (undefined4 *)0x0) {
LAB_0059124c:
    if (puVar2 == &DAT_00895df0) {
      puVar5 = puVar1;
      break;
    }
  }
LAB_00591278:
  fn_002a829c(piVar8,puVar6 + 7,puVar5[2],0);
LAB_0059128c:
  fn_00689878(param_1,0);
  param_1[0x1e] = (int)&DAT_00590fa0;
  param_1[0x1f] = 0;
  return;
}


