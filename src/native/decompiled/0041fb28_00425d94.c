#include "0041fb28_00425d94.h"



void fn_00425d94(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



undefined1 * fn_00425628(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_138;
  undefined4 *local_134;
  short local_130 [110];
  undefined1 auStack_54 [4];
  undefined4 local_50 [2];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 *local_40;
  undefined1 auStack_3c [8];
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  fn_0020bbc4(auStack_48,*(int *)(param_2 + 0xf8) + 0x10);
  iVar1 = fn_0068f7c4((int)(short)param_3,param_4);
  if (iVar1 == 0) {
    fn_0068f7f8((int)(short)param_3,param_4);
    uVar4 = fn_0016a7c4();
    uVar6 = fn_006bf5e0(auStack_44);
    fn_00231210(&local_138,uVar6,0);
    fn_0015b0dc(local_138);
    fn_001588d4(&local_138);
    fn_0015b0dc(uVar4);
    uVar4 = fn_0022f584((char *)&DAT_00425ae8,0);
    fn_00168a24(local_34,uVar4,&local_134);
    return auStack_48;
  }
  fn_0022fa1c(&local_40,iVar1,0);
  local_138 = 1;
  local_134 = (undefined4 *)0x1;
  iVar2 = fn_006c0354(auStack_44,local_130,0x6e,1);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      iVar8 = 0;
      do {
        iVar3 = fn_00310b08((int)local_130[iVar7],iVar8);
        if (iVar3 == 0) break;
        if (iVar3 == iVar1) {
          fn_0022fa1c(&local_134,(int)local_130[iVar7],0);
          uVar4 = fn_006bf5e0(auStack_44);
          fn_00231210(local_50,uVar4,0);
          fn_0015b0dc(local_50[0]);
          fn_001588d4(local_50);
          fn_0015b0dc(local_134);
          uVar4 = fn_0022f584((char *)&DAT_00425a7c,0);
          fn_00168a24(local_34,uVar4,auStack_54);
          if (local_134 != &DAT_008f9cf4) {
            piVar5 = local_134 + -3;
            iVar1 = *piVar5;
            if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0))))
            {
              fn_001008c4(local_134 + -3,local_134[-2] + 8,0);
            }
          }
          if (local_40 == &DAT_008f9cf4) goto LAB_004259d4;
          piVar5 = local_40 + -3;
          iVar1 = *piVar5;
          if (iVar1 == -1) goto LAB_004257b8;
          if (piVar5 == &DAT_008f9ce8) goto LAB_004259d4;
          *piVar5 = iVar1 + -1;
          goto joined_r0x004257b4;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      if (local_130[iVar7] == iVar1) {
        uVar4 = fn_006bf5e0(auStack_44);
        fn_00231210(&local_134,uVar4,0);
        fn_0015b0dc(local_134);
        fn_001588d4(&local_134);
        fn_0015b0dc(local_40);
        uVar4 = fn_0022f584((char *)&DAT_00425aa0,0);
        fn_00168a24(local_34,uVar4,auStack_54);
        if (local_40 == &DAT_008f9cf4) goto LAB_004259d4;
        piVar5 = local_40 + -3;
        iVar1 = *piVar5;
        if (iVar1 == -1) goto LAB_004257b8;
        if (piVar5 != &DAT_008f9ce8) {
          *piVar5 = iVar1 + -1;
joined_r0x004257b4:
          if (iVar1 == 0) {
LAB_004257b8:
            iVar1 = local_40[-2];
LAB_004259d0:
            fn_001008c4(local_40 + -3,iVar1 + 8,0);
          }
        }
LAB_004259d4:
        return auStack_48;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar7 = 0;
  do {
    iVar8 = fn_00310b08(iVar1,iVar7);
    if (iVar8 == 0) break;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (local_130[iVar3] == iVar8) {
          fn_0022fa1c(&local_134,iVar8,0);
          uVar4 = fn_006bf5e0(auStack_44);
          fn_00231210(local_50,uVar4,0);
          fn_0015b0dc(local_50[0]);
          fn_001588d4(local_50);
          fn_0015b0dc(local_134);
          fn_0015b0dc(local_40);
          uVar4 = fn_0022f584((char *)&DAT_00425ac4,0);
          fn_00168a24(local_34,uVar4,auStack_54);
          if (local_134 != &DAT_008f9cf4) {
            piVar5 = local_134 + -3;
            iVar1 = *piVar5;
            if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0))))
            {
              fn_001008c4(local_134 + -3,local_134[-2] + 8,0);
            }
          }
          if (local_40 == &DAT_008f9cf4) goto LAB_004259d4;
          piVar5 = local_40 + -3;
          iVar1 = *piVar5;
          if ((iVar1 != -1) && ((piVar5 == &DAT_008f9ce8 || (*piVar5 = iVar1 + -1, iVar1 != 0))))
          goto LAB_004259d4;
          iVar1 = local_40[-2];
          goto LAB_004259d0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  uVar4 = fn_006bf5e0(auStack_44);
  fn_00231210(&local_138,uVar4,0);
  fn_0015b0dc(local_138);
  fn_001588d4(&local_138);
  fn_0015b0dc(local_40);
  uVar4 = fn_0022f584((char *)&DAT_00425ae8,0);
  fn_00168a24(local_34,uVar4,auStack_3c);
  fn_001588d4(&local_40);
  return auStack_48;
}



void fn_00423558(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 100) + 8) != '\x01') {
    iVar1 = fn_00154a6c(*(undefined4 *)(param_1 + 0x7c));
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
      iVar1 = *(int *)(param_1 + 0x78) + 1;
      *(int *)(param_1 + 0x78) = iVar1;
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      if (iVar1 == 1) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 1;
      }
      iVar1 = *(int *)(param_1 + 0x78);
      if (3 < iVar1) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        uVar2 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                             PTR_s_staff_roll_logo_title_logo_in_bf_0089106c,
                             *(undefined4 *)(param_1 + 0x70));
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar2);
        *(undefined4 *)(param_1 + 0x7c) = uVar2;
        *(undefined1 *)(param_1 + 0x80) = 1;
        *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 1;
        return;
      }
      if ((iVar1 != 3) || (*(char *)(param_1 + 0x80) == '\0')) {
        uVar2 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                             (&PTR_s_staff_roll_logo_title_logo_in_bf_0089106c)[iVar1],
                             *(undefined4 *)(param_1 + 0x70));
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar2);
        *(undefined4 *)(param_1 + 0x7c) = uVar2;
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 1;
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
  }
  return;
}



undefined4 fn_00423448(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089104c) goto LAB_00423498;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00423498:
  *(undefined4 **)(param_1 + 100) = puVar1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00891058,&DAT_0042351c,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,DAT_0089105c,&LAB_00423524,0,1,0);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                       (&PTR_s_staff_roll_logo_title_logo_in_bf_0089106c)[*(int *)(param_1 + 0x78)],
                       uVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar3);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return 1;
}



void fn_004233e8(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0083af1c;
  return;
}



void fn_0042289c(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x30))(param_2,0x31,0);
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



void fn_00422814(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x30))(param_2,0x2f,0);
  (**(code **)(*param_2 + 0x30))(param_2,0x30,0);
  (**(code **)(*param_2 + 0x30))(param_2,0x31,0);
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



void fn_0042260c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003cfe94();
  *puVar1 = &DAT_0083ac50;
  return;
}



void fn_0041fb28(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_lr;
  
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x7f);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893bf0) goto LAB_0041fb70;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0041fb70:
  if (*(int *)(param_1 + 0x84) == 0) {
    *(undefined1 *)((int)puVar2 + 9) = 0;
    fn_0015a480();
    return;
  }
  if (*(char *)(puVar2 + 2) != '\0') {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00896fe0) goto LAB_0041fbc0;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0041fbc0:
    cVar1 = *(char *)(puVar2 + 4);
    if (cVar1 == '\0') {
      uVar4 = fn_002f8364();
      puVar2 = (undefined4 *)fn_001f74f8(uVar4,0xe1);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00896fe0) goto LAB_002f869c;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_002f869c:
      fn_002f873c(param_1,puVar2[5],puVar2[5],0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,in_lr);
      return;
    }
    if (cVar1 == '\x01') {
      uVar4 = fn_002f68a4(param_1);
      fn_002f86bc(param_1,uVar4);
      fn_006899f4(param_1,0xe2,1);
      fn_00689930(param_1,0,1);
      return;
    }
    if (cVar1 == '\x02') {
      fn_002f86bc(param_1,3);
      fn_002f6c2c(param_1,3);
      fn_006899f4(param_1,0xe2,1);
      fn_00689930(param_1,0,1);
      return;
    }
  }
  return;
}


