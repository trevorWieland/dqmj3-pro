#include "005ab920_005abd70.h"



undefined4 fn_005abd70(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined1 auStack_38 [32];
  
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_005abdc0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005abdc0:
  param_1[0x28] = (int)puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xd0);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893d34) goto LAB_005abe04;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005abe04:
  param_1[0x29] = (int)puVar2;
  fn_003d3c40(&local_4c);
  local_4c = DAT_00890b8c;
  uStack_48 = DAT_00890b90;
  uStack_44 = 1;
  fn_003d363c(param_1,&local_4c);
  iVar4 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar9 = *(undefined4 *)(iVar4 + 0x10);
  iVar4 = fn_00688920(uVar9,(char *)&DAT_005abf70);
  uVar8 = *(undefined4 *)(iVar4 + 0xc);
  fn_00151954(uVar8,iVar4);
  fn_0018a69c(uVar8,iVar4);
  iVar4 = fn_0068897c(uVar9,(char *)&DAT_005abf7c);
  uVar7 = 0;
  param_1[0x2b] = iVar4;
  do {
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_005abf8c,uVar7);
    uVar1 = param_1[0x2d] - param_1[0x2c] >> 2;
    if (uVar1 <= uVar7) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar7,uVar1);
    }
    iVar5 = param_1[0x2c];
    iVar4 = uVar7 * 4;
    uVar8 = fn_0068897c(uVar9,auStack_38);
    uVar7 = uVar7 + 1;
    *(undefined4 *)(iVar5 + iVar4) = uVar8;
  } while ((int)uVar7 < 7);
  (**(code **)(*param_1 + 0x120))(param_1);
  fn_005ac384(param_1);
  if (local_40 != &DAT_008f9cf4) {
    piVar6 = local_40 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  return 1;
}



void fn_005abb50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_304 [4];
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 auStack_2f4 [28];
  short local_2d8;
  undefined1 auStack_282 [130];
  undefined4 local_200 [7];
  short local_1e4;
  undefined1 auStack_18e [126];
  undefined4 local_110 [7];
  short local_f4;
  undefined1 auStack_9e [130];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xdb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b14) goto LAB_005abba0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005abba0:
  fn_0017821c(auStack_304,puVar1 + 2,0x104);
  uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar3 = fn_0028aad0(uVar7,local_300);
  fn_0017821c(local_200,uVar3,0xf0);
  uVar3 = fn_0028aad0(uVar7,local_2fc);
  fn_0017821c(local_110,uVar3,0xf0);
  uVar4 = fn_0024e350(local_200);
  uVar5 = fn_0024e350(local_110);
  fn_00210524(auStack_2f4,auStack_2f4,local_200,local_110);
  iVar6 = fn_0020dfbc(param_1 + 200,auStack_304);
  if (iVar6 != 0) {
    *(char *)(param_1 + 0xc4) = (char)iVar6;
    *(char *)(param_1 + 0x1b8) = (char)(uVar4 | uVar5);
    fn_005fdabc(param_1 + 200);
  }
  fn_0028a68c(uVar7,local_200[0],1);
  fn_0028a68c(uVar7,local_110[0],1);
  uVar3 = fn_0028a284(uVar7,auStack_2f4);
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  uVar3 = fn_0028aad0(uVar7,uVar3);
  fn_0024f108(uVar3,uVar4 | uVar5);
  fn_00144834(0x224,1);
  fn_00144834(0x225);
  fn_0025b538(*(undefined4 *)(DAT_00897804 + 8),1);
  fn_0044523c(*(undefined4 *)(param_1 + 0xa4),(int)local_2d8,auStack_282,(int)local_1e4,auStack_18e
               ,(int)local_f4,auStack_9e);
  fn_00689efc(param_1,0xd0,0);
  iVar6 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  iVar6 = fn_00688920(*(undefined4 *)(iVar6 + 0x10),(char *)&DAT_005abd64);
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  fn_0028fb24(*(undefined4 *)(param_1 + 0x48));
  fn_003d3c74(param_1,0);
  *(undefined1 *)(param_1 + 0xbc) = 1;
  return;
}



undefined4 fn_005aba44(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  int local_18;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xdb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b14) goto LAB_005aba94;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005aba94:
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_0060183c(puVar1,&local_20);
  uVar3 = local_20;
  while( true ) {
    if (local_1c == uVar3) {
      uVar3 = local_20;
      if (local_1c < local_20) {
        do {
          uVar3 = uVar3 + 8;
        } while (uVar3 != local_1c);
      }
      fn_001008c4(local_20,(int)(local_18 - local_20) >> 3,0);
      return 0;
    }
    if (*(short *)(uVar3 + 4) != 0) break;
    uVar3 = uVar3 + 8;
  }
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 3,0);
  return 1;
}



void fn_005ab9f4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008474d0;
  fn_001218d4(DAT_00897800,L"rom:/data/Message/CouplingSearch.mes");
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 4))();
  }
  fn_00397a78(param_1);
  return;
}



void fn_005ab99c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008474d0;
  fn_001218d4(DAT_00897800,L"rom:/data/Message/CouplingSearch.mes");
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 4))();
  }
  fn_00397a78(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005ab93c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &PTR_FUN_008474d0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  *(undefined1 *)(puVar1 + 0x40) = 0xd;
  fn_00121838(DAT_00897800,L"rom:/data/Message/CouplingSearch.mes",1);
  return puVar1;
}



void fn_005ab938(int param_1)

{
  fn_0059e110(param_1 + 0xb0);
  fn_002c4304(param_1);
  return;
}



void fn_005ab934(void)

{
  return;
}



void fn_005ab930(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint auStack_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,auStack_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == auStack_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_005ab924(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



void fn_005ab920(void)

{
  return;
}


