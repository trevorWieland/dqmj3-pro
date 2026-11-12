#include "004777c0_004803cc.h"



void fn_004803cc(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  bool bVar12;
  longlong lVar13;
  int local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int iStack_74;
  int local_70 [3];
  undefined4 local_64;
  int local_60;
  undefined1 auStack_58 [36];
  undefined4 *local_34;
  int local_2c;
  
  local_60 = 0;
  iVar4 = fn_00169c08(&local_90,0xffff8000);
  if (iVar4 < 0) {
    fn_0015e294();
  }
  bVar11 = 0;
  *(int *)(param_1 + 0x10c8) = local_90;
  local_34 = (undefined4 *)(param_1 + 0x1050);
  local_2c = param_1 + 0x1090;
  bVar2 = false;
  piVar7 = (int *)(param_1 + 0x105c);
  piVar10 = (int *)(param_1 + 0x10b8);
LAB_00480434:
  do {
    if (((bVar2) && (*(int *)(param_1 + 0x10b8) == *(int *)(param_1 + 0x10bc))) ||
       (*(char *)(param_1 + 0x1085) != '\0')) goto LAB_0048073c;
    fn_00735640(1000000,0);
    lVar13 = (ulonglong)extraout_r1 << 0x20;
    if ((*(char *)(param_1 + 0xc) == '\0') ||
       (lVar13 = CONCAT44(extraout_r1,(uint)*(byte *)(param_1 + 0x1087)),
       *(byte *)(param_1 + 0x1087) != 0)) goto LAB_004805f0;
    (**(code **)(*piVar7 + 8))(piVar7);
    iVar4 = *(int *)(*(int *)(param_1 + 0x10b4) + 0x18);
    if (iVar4 != 0) {
      fn_0079c308(piVar10,iVar4,0);
      iVar5 = *piVar10;
      iVar8 = *(int *)(param_1 + 0x10b4);
      uVar9 = *(int *)(param_1 + 0x10bc) - iVar5;
      iVar4 = *(int *)(iVar8 + 0x14);
      uVar6 = *(int *)(iVar8 + 0x1c) - iVar4;
      local_90 = iVar5;
      if (uVar9 < uVar6) {
        iVar4 = *(int *)(iVar8 + 4) + iVar4;
LAB_00480510:
        fn_00301a9c(iVar5,iVar4,uVar9);
      }
      else {
        local_84 = uVar6;
        fn_00301a9c(iVar5,*(int *)(iVar8 + 4) + iVar4);
        uVar9 = uVar9 - local_84;
        if (uVar9 != 0) {
          iVar4 = *(int *)(iVar8 + 4);
          iVar5 = local_90 + local_84;
          goto LAB_00480510;
        }
      }
      iVar4 = *(int *)(param_1 + 0x10b4);
      iVar5 = *(int *)(param_1 + 0x10bc) - *piVar10;
      fn_00169f1c(*(int *)(iVar4 + 0x14) + iVar5,*(undefined4 *)(iVar4 + 0x1c));
      *(undefined4 *)(iVar4 + 0x14) = extraout_r1_00;
      *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) - iVar5;
      iVar4 = *(int *)(param_1 + 0x10b4);
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    *(undefined1 *)(param_1 + 0x1087) = *(undefined1 *)(param_1 + 0x1086);
    (**(code **)(*piVar7 + 0xc))(piVar7);
    iVar4 = *(int *)(param_1 + 0x10b8);
    if (iVar4 == *(int *)(param_1 + 0x10bc)) goto LAB_004805dc;
    iVar4 = fn_00524724(param_1 + 0x38,iVar4,*(int *)(param_1 + 0x10bc) - iVar4);
    if (iVar4 < 0) goto LAB_00480594;
    if (*piVar10 != *(int *)(param_1 + 0x10bc)) {
      *(int *)(param_1 + 0x10bc) = *piVar10;
    }
LAB_004805dc:
  } while (*(char *)(param_1 + 0x1087) == '\0');
  lVar13 = fn_0052480c(param_1 + 0x38);
LAB_004805f0:
  if (!bVar2) {
    lVar13 = *(longlong *)(param_1 + 0x10b8);
  }
  iVar5 = -0x181c0001;
  bVar12 = (int)lVar13 == (int)((ulonglong)lVar13 >> 0x20);
  if (!bVar2 && bVar12) {
    fn_0079c308(piVar10,*(undefined4 *)(param_1 + 0x10b0),0);
    iVar5 = fn_0052482c(param_1 + 0x38,*piVar10,*(int *)(param_1 + 0x10bc) - *piVar10);
  }
  if ((bool)((!bVar2 && bVar12) & ~bVar11)) {
    iVar4 = 0;
    if (iVar5 < 0) {
      iVar4 = -0x27bf5fd5;
    }
    if (iVar5 >= 0 || iVar5 == iVar4) {
      local_70[0] = 0;
      iVar4 = fn_006dc404(param_1 + 0x38,local_70);
      if (iVar4 < 0) goto LAB_00480594;
      local_90 = 0;
      iVar4 = fn_006dc488(param_1 + 0x38,(char *)&DAT_00480968,auStack_58,0x20);
      if (-1 < iVar4) {
        (**(code **)(*piVar7 + 8))(piVar7);
        fn_001782b8(local_2c,auStack_58,0x20);
        *(undefined1 *)(param_1 + 0x10af) = 0;
        (**(code **)(*piVar7 + 0xc))(piVar7);
      }
      bVar11 = 1;
      (**(code **)(*piVar7 + 8))(piVar7);
      *(undefined1 *)(param_1 + 0x1088) = 1;
      *(int *)(param_1 + 0x108c) = local_70[0];
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
  }
  (**(code **)(*piVar7 + 8))(piVar7);
  if (!bVar2 && bVar12) {
    iVar4 = 0;
    if (iVar5 < 0) {
      iVar4 = -0x27bf5fd5;
    }
    if (iVar5 < 0 && iVar5 != iVar4) {
      if (*(char *)(param_1 + 0x1085) == '\0') {
        if (iVar5 == -0x275f5fc4) {
          local_90 = 0;
          fn_006dc2b0(param_1 + 0x38,&local_90);
        }
        puVar3 = local_34;
        fn_0048029c(&local_8c,iVar5);
        *puVar3 = local_8c;
        puVar3[1] = local_88;
        puVar3[2] = local_84;
      }
      (**(code **)(*piVar7 + 0xc))(piVar7);
      goto LAB_0048073c;
    }
    local_64 = 0;
    local_70[0] = 0;
    fn_006dc254(param_1 + 0x38,local_70,&local_64);
    iVar4 = local_60;
    local_60 = local_70[0];
    fn_0079c308(piVar10,local_70[0] - iVar4,0);
    if (-1 < iVar5) {
      bVar2 = true;
    }
  }
  iVar4 = *piVar10;
  if (iVar4 != *(int *)(param_1 + 0x10bc)) {
    iVar5 = *(int *)(param_1 + 0x10b4);
    uVar6 = *(int *)(param_1 + 0x10bc) - iVar4;
    if (uVar6 <= (uint)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18))) {
      iVar8 = *(int *)(iVar5 + 0x10);
      uVar9 = *(int *)(iVar5 + 0x1c) - iVar8;
      local_70[0] = iVar4;
      if (uVar6 < uVar9) {
        fn_00301a9c(iVar8 + *(int *)(iVar5 + 4),iVar4,uVar6);
        *(uint *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + uVar6;
        *(uint *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + uVar6;
      }
      else {
        local_88 = uVar9;
        fn_00301a9c(iVar8 + *(int *)(iVar5 + 4),iVar4,uVar9);
        *(uint *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + local_88;
        fn_00169f1c(*(int *)(iVar5 + 0x10) + local_88,*(undefined4 *)(iVar5 + 0x1c));
        *(undefined4 *)(iVar5 + 0x10) = extraout_r1_01;
        iVar4 = uVar6 - local_88;
        if (iVar4 != 0) {
          fn_00301a9c(*(undefined4 *)(iVar5 + 4),local_70[0] + local_88,iVar4);
          *(int *)(iVar5 + 0x10) = iVar4;
          *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + iVar4;
        }
      }
      if (*piVar10 != *(int *)(param_1 + 0x10bc)) {
        *(int *)(param_1 + 0x10bc) = *piVar10;
      }
    }
  }
  (**(code **)(*piVar7 + 0xc))(piVar7);
  goto LAB_00480434;
LAB_00480594:
  puVar3 = local_34;
  fn_0048029c(&local_8c,iVar4);
  *puVar3 = local_8c;
  puVar3[1] = local_88;
  puVar3[2] = local_84;
LAB_0048073c:
  fn_0013d0fc(&local_78);
  fn_0013d0fc(&local_80);
  if ((int)(local_7c - (iStack_74 + (uint)(local_80 < local_78))) <
      (int)(uint)(local_80 - local_78 < 100)) {
    do {
      (**(code **)(*piVar7 + 8))(piVar7);
      cVar1 = *(char *)(param_1 + 0x10ce);
      (**(code **)(*piVar7 + 0xc))(piVar7);
      if (cVar1 != '\0') {
        fn_00524920(param_1 + 0x38);
        *(undefined1 *)(param_1 + 0x10cd) = 1;
        break;
      }
      fn_00735640(1000000,0);
      fn_0013d0fc(&local_80);
    } while ((int)(local_7c - (iStack_74 + (uint)(local_80 < local_78))) <
             (int)(uint)(local_80 - local_78 < 100));
  }
  *(undefined1 *)(param_1 + 0x1084) = 1;
  return;
}



undefined4 fn_004777c0(int param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined1 auStack_50 [4];
  int *local_4c;
  int *local_40;
  int local_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  int iStack_2c;
  uint local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  piVar5 = (int *)fn_004790f8(param_1,local_28 & 0xffff);
  if (piVar5 == (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return 0;
  }
  if (piVar5[0x11] != 1) {
    piVar5[0x11] = piVar5[0x11] + -1;
    (**(code **)(*piVar4 + 0xc))(piVar4);
    return 1;
  }
  piVar6 = *(int **)(param_1 + 0x138);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x14))(piVar6,local_28 & 0xffff);
  }
  fn_0074c034(param_1 + 0x140,&local_28);
  piVar6 = (int *)(uint)*(byte *)(piVar5 + 1);
  bVar11 = piVar6 != (int *)0x3;
  if (bVar11) {
    piVar6 = (int *)piVar5[0xf];
  }
  if (bVar11 && piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
    *(undefined1 *)(piVar5 + 1) = 3;
  }
  (**(code **)(*piVar5 + 4))(piVar5);
  iVar3 = fn_004b7748();
  if ((iVar3 != 0) && (DAT_008b6404 != (int *)0x0)) {
    fn_004b4c44(auStack_50);
    (**(code **)(*DAT_008b6404 + 8))(DAT_008b6404,auStack_50);
    while (uVar8 = local_28, local_3c != 0) {
      uVar1 = (ushort)local_28;
      iVar3 = *local_40;
      fn_0017695c(iVar3 + 8);
      *(ushort *)(*(int *)(iVar3 + 0xc) + 6) = (ushort)((uVar8 & 0xff) << 8) | uVar1 >> 8;
      *(undefined1 *)(iVar3 + 0x6d) = 0;
      if (DAT_008b637e == '\0') {
LAB_00477988:
        iVar3 = DAT_008e76a8;
LAB_00477990:
        iVar9 = 0;
        if (iVar3 != 0) goto LAB_00477998;
      }
      else {
        puVar7 = (uint *)fn_001775e8(DAT_008b63d8);
        uVar8 = *puVar7;
        if (uVar8 == 0) goto LAB_00477988;
        if (uVar8 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
          iVar3 = *(int *)(*(int *)(*DAT_008e76e4 + uVar8 * 4) + 8);
          goto LAB_00477990;
        }
        fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                     ,0x48,0xe0000003,0);
        iVar3 = -1;
LAB_00477998:
        iVar9 = *(int *)(iVar3 + 0xc);
      }
      piVar5 = (int *)(iVar9 + 0x50);
      (**(code **)(*piVar5 + 8))();
      if (DAT_008b637e == '\0') {
LAB_00477a18:
        iVar3 = DAT_008e76a8;
LAB_00477a20:
        if (iVar3 != 0) goto LAB_00477a2c;
        iVar3 = 0;
      }
      else {
        puVar7 = (uint *)fn_001775e8(DAT_008b63d8);
        uVar8 = *puVar7;
        if (uVar8 == 0) goto LAB_00477a18;
        if (uVar8 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
          iVar3 = *(int *)(*(int *)(*DAT_008e76e4 + uVar8 * 4) + 8);
          goto LAB_00477a20;
        }
        fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                     ,0x48,0xe0000003,0);
        iVar3 = -1;
LAB_00477a2c:
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      iVar9 = *local_40;
      (**(code **)(*(int *)(iVar3 + 0x50) + 8))();
      for (piVar6 = (int *)**(undefined4 **)(iVar3 + 0x88); piVar6 != *(int **)(iVar3 + 0x88);
          piVar6 = (int *)*piVar6) {
        fn_006d0734(auStack_38,piVar6 + 2);
        fn_006d0734(auStack_58,iVar9 + 8);
        iVar10 = fn_004b626c(local_34,local_54);
        if (iVar10 == 0) {
LAB_00477ae0:
          bVar11 = false;
        }
        else {
          if ((char)piVar6[0x1b] == '\0') {
            fn_0014ea80(piVar6 + 2);
          }
          uVar1 = *(ushort *)(piVar6[3] + 6);
          if (*(char *)(iVar9 + 0x6c) == '\0') {
            fn_0014ea80(iVar9 + 8);
          }
          uVar2 = *(ushort *)(*(int *)(iVar9 + 0xc) + 6);
          if ((ushort)(uVar1 << 8 | uVar1 >> 8) != (ushort)(uVar2 << 8 | uVar2 >> 8))
          goto LAB_00477ae0;
          bVar11 = true;
        }
        fn_00170f54(auStack_58);
        fn_00170f54(auStack_38);
        if (bVar11) {
          if (piVar6 != *(int **)(iVar3 + 0x88)) {
            *(int *)piVar6[1] = *piVar6;
            *(int *)(*piVar6 + 4) = piVar6[1];
            *(int *)(iVar3 + 0x8c) = *(int *)(iVar3 + 0x8c) + -1;
            (**(code **)piVar6[2])(piVar6 + 2);
            *piVar6 = *(int *)(iVar3 + 0x7c);
            *(int **)(iVar3 + 0x7c) = piVar6;
          }
          break;
        }
      }
      (**(code **)(*(int *)(iVar3 + 0x50) + 0xc))((int *)(iVar3 + 0x50));
      piVar6 = (int *)*local_40;
      if (piVar6 != local_40) {
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
        local_3c = local_3c + -1;
        (**(code **)piVar6[2])(piVar6 + 2);
        *piVar6 = (int)local_4c;
        local_4c = piVar6;
      }
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    fn_00786480(auStack_50);
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return 1;
}


