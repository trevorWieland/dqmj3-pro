#include "003220fc_00322d70.h"



void fn_00322d70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895b24) goto LAB_00322dbc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00322dbc:
  if (*(int *)(param_1 + 0xe0) == 0) {
    fn_0066ec10(DAT_00897850);
    *(undefined1 *)((int)puVar1 + 0xb) = 1;
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
    fn_00689930(param_1,0x5e,0);
    return;
  }
  if (*(char *)(puVar1 + 2) != '\0') {
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    iVar3 = fn_00445fb8(puVar1);
    iVar5 = DAT_00897850;
    if (iVar3 == 0) {
      if ((((DAT_00897850 != 0) && (iVar3 = fn_0066eb04(DAT_00897850), iVar3 != 0)) &&
          (iVar3 = fn_0066e4c0(iVar5), iVar3 == 0)) ||
         (iVar5 = *(int *)(iVar5 + 0x20), iVar5 == 10)) {
        *(undefined4 *)(param_1 + 0x100) = DAT_00895b6c;
        *(undefined1 *)(param_1 + 0x104) = 1;
        *(undefined4 *)(param_1 + 0xe4) = 0x1c;
        *(undefined4 *)(param_1 + 0xd8) = 0x1a;
        return;
      }
      if (((*(char *)((int)puVar1 + 10) != '\0') && (iVar5 == 0)) || (*(char *)(puVar1 + 3) == '\0')
         ) {
        *(undefined1 *)(param_1 + 0x104) = 1;
        *(undefined4 *)(param_1 + 0xe4) = 0x1e;
        *(undefined4 *)(param_1 + 0xd8) = 0x1a;
        return;
      }
      *(undefined1 *)(param_1 + 0x104) = 0;
      uVar4 = 0x1b;
    }
    else {
      uVar4 = 0xd;
    }
    *(undefined4 *)(param_1 + 0xd8) = uVar4;
  }
  return;
}



void fn_00322b70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_1c [2];
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  do {
    iVar1 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar5);
    if (iVar1 != 0) {
      local_1c[0] = 0;
      uVar2 = fn_0030e2cc(*(undefined4 *)(param_1 + 0xec),uVar5);
      iVar1 = fn_0030ded0(*(undefined4 *)(param_1 + 0xec),uVar2,local_1c);
      uVar2 = *(undefined4 *)(param_1 + 0xec);
      if (iVar1 == 0) {
        uVar4 = 0;
        uVar3 = 6;
      }
      else {
        uVar3 = fn_0030e880(uVar2,local_1c[0]);
        uVar2 = *(undefined4 *)(param_1 + 0xec);
        uVar4 = local_1c[0];
      }
      fn_00388ef0(uVar2,uVar5,uVar4,iVar1 != 0,uVar3);
    }
    iVar1 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar5);
    if ((iVar1 != 0) && (iVar1 = fn_0030de48(*(undefined4 *)(param_1 + 0xec),uVar5), iVar1 != 0)) {
      *(uint *)(param_1 + *(int *)(param_1 + 0x110) * 4 + 0x114) = uVar5;
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  iVar1 = fn_0030e498(*(undefined4 *)(param_1 + 0xec));
  if (iVar1 == 0) {
    iVar1 = fn_0030e334(*(undefined4 *)(param_1 + 0xec));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xd8) = 0xc;
      return;
    }
    uVar2 = 0xb;
  }
  else {
    uVar2 = 10;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  return;
}



void fn_003225d4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x138);
    puVar5 = *(undefined4 **)(param_1 + 0x13c);
    if (puVar1 != puVar5) {
      puVar4 = puVar1 + 1;
      if (puVar5 != puVar4) {
        if (puVar5 < puVar4) {
          for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
            *puVar1 = *puVar4;
            puVar1 = puVar1 + 1;
          }
        }
        else {
          uVar2 = (int)puVar5 - (int)puVar4;
          if (0 < (int)uVar2) {
            uVar6 = (uVar2 & 7) >> 2;
            if (uVar6 != 0) {
              *puVar1 = *puVar4;
            }
            uVar7 = (uint)(uVar6 != 0);
            for (; (int)uVar6 < (int)uVar2 >> 2; uVar6 = uVar6 + 2) {
              puVar1[uVar7] = puVar4[uVar7];
              puVar1[uVar7 + 1] = puVar4[uVar7 + 1];
              uVar7 = uVar7 + 2;
            }
          }
        }
      }
      *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -4;
    }
    uVar2 = 0;
    do {
      if (*(int *)(param_1 + uVar2 * 4 + 0x114) != -1) {
        iVar8 = param_1 + uVar2 * 4;
        uVar9 = *(undefined4 *)(iVar8 + 0x114);
        iVar3 = fn_0030e2e0(*(undefined4 *)(param_1 + 0xec),uVar9);
        if ((iVar3 != 0) &&
           (iVar3 = fn_0030de48(*(undefined4 *)(param_1 + 0xec),uVar9), iVar3 != 0)) {
          uVar9 = *(undefined4 *)(iVar8 + 0x114);
          fn_0031b78c(param_1,uVar9,0,&DAT_00324ef8);
          fn_0030e38c(*(undefined4 *)(param_1 + 0xec),uVar9);
        }
        *(undefined4 *)(iVar8 + 0x114) = 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 5);
    if (*(int *)(param_1 + 0x13c) - (int)*(undefined4 **)(param_1 + 0x138) >> 2 == 0) {
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0xe4) = 0;
      return;
    }
    fn_00328be0(param_1,**(undefined4 **)(param_1 + 0x138),0,1,1,0);
  }
  return;
}



void fn_003223e4(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_30 [24];
  
  iVar1 = fn_006c4918(param_2);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_2 + 0x14);
    *(int *)(param_1 + 0x108) = iVar1;
    if (iVar1 == 0) {
      fn_00615e18(auStack_30,*(undefined4 *)(param_2 + 0x28));
      uVar3 = fn_00230604(auStack_30);
      fn_0016ba84(DAT_00897800,uVar3);
      uVar3 = fn_0022f584((char *)&DAT_00322578,0);
      *(undefined4 *)(param_1 + 0xf0) = uVar3;
      return;
    }
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_2 + 0x34);
      puVar5 = &DAT_00322590;
      iVar4 = fn_006c4918(param_2);
      if (iVar4 != 0) {
        uVar3 = fn_006bc7ec(*(undefined4 *)(DAT_00897804 + 0x5c),(int)*(char *)(iVar1 + 1));
        puVar5 = (undefined *)fn_0025f988(DAT_00897800,uVar3);
      }
      fn_0016ba84(DAT_00897800,puVar5);
      uVar3 = fn_0022f584((char *)&DAT_003225a0,0);
      *(undefined4 *)(param_1 + 0xf0) = uVar3;
      return;
    }
    if (iVar1 == 2) {
      psVar2 = *(short **)(param_2 + 0x38);
      if (psVar2[1] < 2) {
        uVar3 = fn_0016a82c((int)*psVar2);
        fn_0016ba84(DAT_00897800,uVar3);
        uVar3 = fn_0022f584((char *)&DAT_003225bc,0);
        *(undefined4 *)(param_1 + 0xf0) = uVar3;
        return;
      }
      uVar3 = fn_0016a82c((int)*psVar2);
      fn_0016ba84(DAT_00897800,uVar3);
      fn_0016bad4(DAT_00897800,(int)psVar2[1]);
      uVar3 = fn_0022f584((char *)&DAT_0032255c,0);
      *(undefined4 *)(param_1 + 0xf0) = uVar3;
    }
  }
  return;
}



void fn_0032239c(int param_1)

{
  fn_00328bb4();
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))();
  }
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xec) + 4))();
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0030e8c4) */
/* WARNING: Removing unreachable block (ram,0x0030e9e0) */

void fn_003221d0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  short *psVar3;
  uint uVar4;
  undefined1 auStack_38 [24];
  
  iVar1 = fn_006c4918(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (9999 < *(short *)(iVar1 + 2)) {
      fn_006c4998(param_2);
      fn_002ea1d4();
    }
    uVar4 = 0;
    do {
      if (9999 < *(short *)(iVar1 + uVar4 * 2 + 4)) {
        fn_006c4998(param_2);
        fn_002ea1d4();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    fn_00615e18(auStack_38,iVar1);
    fn_00229248(*(undefined4 *)(DAT_00897804 + 0x28),auStack_38);
  }
  else if (iVar1 == 1) {
    pcVar2 = *(char **)(param_2 + 0x34);
    iVar1 = fn_006b5694();
    if (iVar1 != 0) {
      fn_001223cc(*(undefined4 *)(DAT_00897804 + 0x5c),(int)pcVar2[1],(int)*pcVar2,1);
    }
  }
  else if (iVar1 == 2) {
    psVar3 = *(short **)(param_2 + 0x38);
    iVar1 = fn_00660ec0((int)*psVar3);
    if (iVar1 == 0x22) {
      iVar1 = 0;
      if (0 < psVar3[1]) {
        do {
          fn_00242324(*(undefined4 *)(DAT_00897804 + 0x18),(int)*psVar3,(int)(char)psVar3[2]);
          iVar1 = iVar1 + 1;
        } while (iVar1 < psVar3[1]);
      }
    }
    else {
      fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),(int)*psVar3,(int)psVar3[1]);
    }
  }
  if (*(int *)(param_2 + 0x18) == 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 4);
    *(uint *)(iVar1 + (param_3 >> 5) * 4) =
         *(uint *)(iVar1 + (param_3 >> 5) * 4) | 1 << (param_3 & 0x1f);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 4);
  *(uint *)(iVar1 + 0x20 + (param_3 >> 5) * 4) =
       *(uint *)(iVar1 + 0x20 + (param_3 >> 5) * 4) | 1 << (param_3 & 0x1f);
  return;
}



void fn_003220fc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894444) goto LAB_00322144;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00322144:
  if (*(char *)(puVar2 + 5) != '\0') {
    fn_00321fec(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_00894444) goto LAB_0032218c;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0032218c:
    *(undefined1 *)(puVar2 + 5) = 0;
  }
  return;
}


