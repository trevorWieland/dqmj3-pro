#include "0034b42c_0038f640.h"



undefined4 fn_0038f640(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_r10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00891c84) goto LAB_0038f68c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0038f68c:
  param_1[0x2c] = (int)puVar4;
  iVar2 = fn_006e6820(puVar4);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar2 = fn_006b83e4(uVar6);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        local_28 = 0;
        local_24 = 0;
        local_28 = fn_00144df4(uVar6,iVar3);
        fn_00567670(param_1[0x2c],&local_28);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    iVar2 = fn_006b84b0(uVar6);
    if (0 < iVar2) {
      unaff_r10 = &DAT_007c0da8;
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        local_28 = *unaff_r10;
        local_24 = unaff_r10[1];
        local_28 = fn_006b8538(uVar6,iVar3);
        fn_00567670(param_1[0x2c],&local_28);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  fn_002c330c(&local_60);
  local_60 = DAT_00891c9c;
  local_5c = DAT_00891ca0;
  local_58 = fn_006e6820(param_1[0x2c]);
  local_54 = *(undefined4 *)(param_1[0x2c] + 0xc);
  uVar6 = fn_0022f584((char *)&DAT_0038f8d0,0);
  fn_00147974(auStack_44,uVar6);
  uVar6 = fn_0022f584((char *)&DAT_0038f8ec,0);
  fn_00147974(auStack_40,uVar6);
  local_34 = 0;
  local_33 = 1;
  uVar6 = fn_0022f750(&DAT_0038f908);
  fn_00147974(auStack_38,uVar6);
  local_32 = 1;
  fn_002c29a0(param_1,&local_60);
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008951dc) goto LAB_0038f810;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0038f810:
  param_1[0x2d] = (int)puVar4;
  fn_00689efc(param_1,0x2d,0);
  (**(code **)(*param_1 + 0x124))(param_1);
  uVar6 = 0;
  uVar5 = *(undefined4 *)(param_1[0x2c] + 0xc);
  iVar2 = fn_006ba220(param_1,uVar5);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)fn_006e6814(param_1[0x2c],uVar5);
    uVar6 = *puVar4;
  }
  fn_0025f354(param_1[0x2d],uVar6);
  fn_0038f500(param_1);
  iVar2 = fn_001588d4(auStack_38);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}



undefined4 fn_00387238(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  wchar16 *pwStack_94;
  char *pcStack_90;
  undefined4 local_8c;
  int iStack_88;
  undefined4 local_80;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [4];
  undefined1 local_68;
  undefined1 local_67;
  undefined4 local_60;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined4 *local_4c [5];
  undefined4 *local_38 [2];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_00387288;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00387288:
  *(undefined4 **)(param_1 + 0xe8) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_003872cc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003872cc:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  *(undefined4 *)(param_1 + 0x104) = puVar1[7];
  fn_0020bbc4(auStack_30);
  iVar3 = fn_006bf0f0(auStack_2c);
  fn_00397774(&pwStack_94);
  local_80 = 6;
  local_8c = 6;
  pwStack_94 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_90 = (char *)&DAT_003875e0;
  iStack_88 = iVar3;
  uVar4 = fn_0022f750((char *)&DAT_00866ea8);
  fn_00147974(auStack_78,uVar4);
  local_68 = 0;
  local_67 = 0;
  local_60 = 2;
  uVar4 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c769c + *(int *)(*(int *)(param_1 + 0xe4) + 0x10) * 4));
  fn_00147974(auStack_54,uVar4);
  fn_00231074(local_38,*(undefined4 *)(param_1 + 0x104),0);
  piVar5 = local_38[0] + -3;
  if (*piVar5 == -1) {
    if (local_4c != local_38) {
      fn_00177c88(local_4c,0,local_4c[0][-1],local_38[0],local_38[0][-1],0,local_38[0][-1]);
    }
  }
  else {
    if (piVar5 != &DAT_008f9ce8) {
      *piVar5 = *piVar5 + 1;
    }
    if (local_4c[0] != &DAT_008f9cf4) {
      piVar5 = local_4c[0] + -3;
      iVar8 = *piVar5;
      if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(local_4c[0] + -3,local_4c[0][-2] + 8,0);
      }
    }
    local_4c[0] = local_38[0];
  }
  uVar4 = fn_0022f584((&DAT_00895aa8)[iVar3],0);
  fn_00147974(auStack_50,uVar4);
  fn_00397618(param_1,&pwStack_94);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar3 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar3 + 0x81) = 1;
  fn_0031f3f4(iVar3,0);
  fn_001588d4(local_38);
  fn_00100414(auStack_58,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_6c);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  uVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  iVar3 = 0;
  do {
    piVar5 = (int *)fn_00172c98(uVar4,(&DAT_00895a90)[iVar3]);
    uVar6 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_00387614,1);
    iVar9 = param_1 + iVar3 * 4;
    iVar8 = fn_00145b00(0x74,&DAT_00812c8c);
    if (iVar8 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_002cbd7c(iVar8,*(undefined4 *)(param_1 + 4));
    }
    piVar7 = *(int **)(iVar9 + 0xec);
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      *(int **)(iVar9 + 0xec) = piVar5;
    }
    *(undefined4 *)(*(int *)(iVar9 + 0xec) + 0x30) = uVar6;
    (**(code **)(**(int **)(iVar9 + 0xec) + 0x10))
              (*(int **)(iVar9 + 0xec),*(undefined4 *)(param_1 + 0x48));
    fn_002cb48c(*(undefined4 *)(iVar9 + 0xec),(&DAT_007c7694)[iVar3]);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar3 = 0;
  do {
    uVar4 = fn_0022f584((&DAT_00895aa8)[iVar3],0);
    fn_0031b78c(param_1,iVar3,2,uVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return 1;
}



void fn_0037f918(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x90) == -1) {
    uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x8c),param_2,&DAT_0037faf0,1,1);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x94) == -1) {
    uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),param_3,
                         &DAT_0037faf4,0,1,4);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  if ((*(int *)(param_1 + 0x98) == -1) && (param_4 != 0)) {
    uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x8c),param_4,*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x8c),uVar1);
    (**(code **)(*piVar2 + 0x50))(piVar2,0);
  }
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94));
  uVar1 = fn_00689210(*(undefined4 *)(iVar3 + 0x10),DAT_00893d7c);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  iVar3 = fn_00172c98(iVar3,(char *)&DAT_0037fb00);
  if (iVar3 != 0) {
    iVar4 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar4 != 0) {
      piVar2 = (int *)fn_0031cb44(iVar4,*(undefined4 *)(param_1 + 4),iVar3,1,
                                   *(undefined4 *)(param_1 + 0x48));
    }
    piVar5 = *(int **)(param_1 + 0xb8);
    if (piVar5 != piVar2) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      *(int **)(param_1 + 0xb8) = piVar2;
    }
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x10))();
    fn_0031cab4(*(undefined4 *)(param_1 + 0xb8),2);
    fn_0031c080(*(undefined4 *)(param_1 + 0xb8),0);
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = fn_0022f750((&PTR_s_coursename1_1_007c6d44)
                           [(uint)*(byte *)(*(int *)(param_1 + 0xac) + 8) * 2 +
                            (uint)*(byte *)(*(int *)(param_1 + 0xac) + 9)]);
      fn_0031c0e0(*(undefined4 *)(param_1 + 0xb8),uVar1);
      if (*(int *)(param_1 + 0xb8) != 0) {
        fn_0031c810(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xa8),2,0,1);
      }
    }
  }
  return;
}



void fn_00378060(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 8) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(), iVar1 == 0)) {
    return;
  }
  *(undefined1 *)(*DAT_008977e4 + 0x50) = 1;
  return;
}



void fn_0034b42c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),
                       *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc));
  iVar2 = fn_006ba220(param_1,param_2);
  if (iVar2 == 0) {
    iVar1 = (int)*(short *)(iVar1 + param_2 * 2 + 8);
    uVar3 = fn_0016a82c(iVar1);
    uVar4 = fn_0022ee7c(iVar1);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar4);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}


