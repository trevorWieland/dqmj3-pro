#include "0053fb28_00541328.h"



void fn_00541328(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar1 = uVar5 & 0x3fffffff;
  if ((int)uVar1 <= *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2) {
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 << 1;
    }
    if ((uVar5 & 0x3fffffff) < uVar1) {
      piVar2 = *(int **)(param_1 + 8);
      if (piVar2 == (int *)0x0) {
        return;
      }
      if ((uVar5 & 0xc0000000) != 0x40000000) {
        return;
      }
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2,uVar1 << 2,0x20);
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      iVar7 = 0;
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      puVar8 = puVar3;
      if (puVar4 != puVar6) {
        do {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar6);
        iVar7 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
        (**(code **)(**(int **)(param_1 + 8) + 0xc))();
      }
      *(undefined4 **)(param_1 + 0x10) = puVar3 + iVar7;
      *(undefined4 **)(param_1 + 0xc) = puVar3;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xc0000000 | uVar1;
    }
  }
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x10) = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
  return;
}



undefined4 * fn_005412b8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  
  *param_1 = &DAT_008576e8;
  iVar2 = param_1[7];
  param_1[8] = iVar2;
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = param_1[7];
  }
  if (piVar1 != (int *)0x0 && iVar2 != 0) {
    (**(code **)(*piVar1 + 0xc))();
    iVar2 = extraout_r1;
  }
  param_1[4] = param_1[3];
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    iVar2 = param_1[3];
  }
  if (piVar1 != (int *)0x0 && iVar2 != 0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return param_1;
}



undefined4 fn_0054105c(int param_1,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0x18) + param_2 * 0x3c + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + param_2 * 0x3c + 0x28);
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)(iVar3 + uVar2 * 4);
      if (((((*(char *)(iVar1 + 0x10) == *param_3) && (*(char *)(iVar1 + 0x11) == param_3[1])) &&
           (*(char *)(iVar1 + 0x12) == param_3[2])) &&
          (((*(int *)(iVar1 + 0x14) == *(int *)(param_3 + 4) &&
            (*(char *)(iVar1 + 0x18) == *param_4)) &&
           ((*(char *)(iVar1 + 0x19) == param_4[1] &&
            ((*(char *)(iVar1 + 0x1a) == param_4[2] && (*(char *)(iVar1 + 0x1b) == param_4[3])))))))
          ) && ((*(char *)(iVar1 + 0x1c) == param_4[4] &&
                (((((*(char *)(iVar1 + 0x1d) == param_4[5] &&
                    (*(char *)(iVar1 + 0x1e) == param_4[6])) &&
                   (*(char *)(iVar1 + 0x1f) == param_4[7])) &&
                  ((*(char *)(iVar1 + 0x20) == param_4[8] && (*(char *)(iVar1 + 0x21) == param_4[9])
                   ))) && (*(int *)(iVar1 + 0x24) == *(int *)(param_4 + 0xc))))))) {
        return *(undefined4 *)(iVar3 + uVar2 * 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  return 0;
}



undefined4 * fn_0053fbe0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  *param_1 = &DAT_008576c4;
  if (param_1[0x128] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[0x129] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[0xcf] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[0x12a] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[299] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[300] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[200] != 0) {
    uVar2 = 0;
    if (param_1[0x112] != 0) {
      do {
        fn_0053a474(param_1[200] + uVar2 * 0x298 + 0x240);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x112]);
    }
    (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],param_1[200]);
  }
  if (param_1[0xcb] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[0xce] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  if (param_1[0xcd] != 0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
  }
  fn_0052dfac(param_1[2]);
  fn_00532fac(param_1[2]);
  iVar1 = DAT_008c3474;
  DAT_008c0464 = 0;
  piVar3 = (int *)param_1[2];
  if (DAT_008c3474 != 0) {
    fn_0053a494(DAT_008c3474);
    iVar1 = fn_0053fe1c(iVar1 + 0x970);
    iVar1 = fn_0053fe1c(iVar1 + -0xc);
    iVar1 = fn_0053fe1c(iVar1 + -0xc);
    fn_00100414(iVar1 + -0x924,fn_0053fe1c,0xc,0x1e);
    iVar1 = fn_0053fe1c(iVar1 + -0x930);
    iVar1 = fn_0053fe1c(iVar1 + -0xc);
    fn_0053fe1c(iVar1 + -0xc);
    (**(code **)(*piVar3 + 0xc))(piVar3,DAT_008c3474);
    DAT_008c3474 = 0;
  }
  return param_1;
}



int * fn_0053fe1c(int *param_1)

{
  if ((int *)param_1[2] != (int *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(*(int *)param_1[2] + 0xc))();
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



int fn_0053fb48(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = *(int *)(param_1 + 0x330) + 1U & *(uint *)(param_1 + 0x458);
    *(uint *)(param_1 + 0x330) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x32c) + uVar2 * 0x168 + 0x144) == 0) {
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + *(int *)(param_1 + 0x330) * 0x168 + 0x158) =
           param_2;
      return *(int *)(param_1 + 0x32c) + *(int *)(param_1 + 0x330) * 0x168;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(param_1 + 0x44c));
  return 0;
}



undefined4 fn_0053fb28(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0xdc) + 0x34);
  if (iVar1 == -1) {
    return 0;
  }
  return *(undefined4 *)(param_1 + iVar1 * 4 + 0x4b8);
}


