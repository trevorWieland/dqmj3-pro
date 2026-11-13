#include "00581bb0_0058e5d0.h"



void fn_0058e5d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0xb8));
  piVar5 = *(int **)(param_1 + 0xac);
  for (piVar4 = *(int **)(param_1 + 0xa8); piVar4 != piVar5; piVar4 = piVar4 + 1) {
    (**(code **)(*(int *)*piVar4 + 0x18))();
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 4))();
    }
    *piVar4 = 0;
  }
  if ((*(int *)(param_1 + 0x90) != 0) && (fn_00289c54(), *(int *)(param_1 + 0x90) != 0)) {
    fn_00289ca8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != -1) {
    fn_0025fa58(DAT_00897800);
  }
  if (*(int *)(param_1 + 0x9c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x98) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x94) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0xbc) != -1) {
    iVar2 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
    fn_0018911c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar2 + 0x14),0);
  }
  if (*(int *)(param_1 + 0xb4) != -1) {
    iVar2 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
    fn_0018911c(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar2 + 0x14),0);
  }
  if (*(int *)(param_1 + 0xc0) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xbc) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xb8) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xb4) != -1) {
    fn_002b1810(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  }
  fn_0023d3f4(*(undefined4 *)(param_1 + 0x88),0xc754);
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar1 = fn_00176d68(uVar3);
  uVar6 = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  uVar3 = fn_00176d68(uVar3);
  local_28 = 0xc1c80000;
  local_30 = uVar6;
  local_2c = uVar6;
  fn_005456f4(uVar3,&local_30);
  return;
}



undefined4 *
fn_005888f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  puVar1 = (undefined4 *)
           fn_00579a04(param_1,param_2,param_3,param_5,param_4,(&DAT_007ba9cc)[param_4]);
  uVar6 = 0;
  *puVar1 = &DAT_008435e4;
  local_38 = 0x120d0a06;
  do {
    uVar2 = fn_001828f0(puVar1[0x35],(&DAT_007ba9d4)[uVar6 * 3]);
    puVar1[uVar6 * 0xc + 9] = uVar2;
    uVar2 = fn_001828f0(puVar1[0x35],(&DAT_007ba9d8)[uVar6 * 3]);
    puVar1[uVar6 * 0xc + 10] = uVar2;
    uVar2 = fn_001828f0(puVar1[0x35],(&DAT_007ba9dc)[uVar6 * 3]);
    puVar1[uVar6 * 0xc + 0xb] = uVar2;
    uVar2 = fn_00313844(local_2c,0xb,1,1,*(undefined1 *)((int)&local_38 + uVar6));
    puVar1[uVar6 * 0xc + 4] = uVar2;
    uVar2 = fn_00178f9c(local_2c,uVar2);
    puVar1[uVar6 * 0xc + 5] = uVar2;
    piVar3 = (int *)fn_0017dd54(uVar2,(&DAT_007baa10)[uVar6 * 7],0);
    puVar1[uVar6 * 0xc + 0xc] = piVar3;
    (**(code **)(*piVar3 + 100))();
    piVar3 = (int *)fn_0017dd54(puVar1[uVar6 * 0xc + 5],(&DAT_007baa18)[uVar6 * 7],0);
    puVar1[uVar6 * 0xc + 0xd] = piVar3;
    (**(code **)(*piVar3 + 100))();
    piVar3 = (int *)fn_0017dd54(puVar1[uVar6 * 0xc + 5],(&DAT_007baa14)[uVar6 * 7],0);
    puVar1[uVar6 * 0xc + 0xe] = piVar3;
    (**(code **)(*piVar3 + 100))();
    piVar3 = (int *)fn_0017dd54(puVar1[uVar6 * 0xc + 5],
                                 (&PTR_s_scout_arrow_anime_00_007baa1c)[uVar6 * 7],0);
    puVar1[uVar6 * 0xc + 0xf] = piVar3;
    (**(code **)(*piVar3 + 100))();
    uVar5 = 0;
    do {
      piVar3 = (int *)fn_001828f0(puVar1[uVar6 * 0xc + 5],(&DAT_007baa08)[uVar6 * 7]);
      if (piVar3 != (int *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
        do {
          if (puVar4 == &DAT_0089a92c) goto LAB_00588a80;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      piVar3 = (int *)0x0;
LAB_00588a80:
      *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) & 0xfe;
      if (uVar5 == uVar6) {
        puVar1[uVar5 * 0xc + 7] = piVar3;
      }
      piVar3 = (int *)fn_001828f0(puVar1[uVar6 * 0xc + 5],(&DAT_007baa0c)[uVar6 * 7]);
      if (piVar3 != (int *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
        do {
          if (puVar4 == &DAT_0089a92c) goto LAB_00588ae4;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      piVar3 = (int *)0x0;
LAB_00588ae4:
      *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) & 0xfe;
      if (uVar5 == uVar6) {
        puVar1[uVar5 * 0xc + 8] = piVar3;
        uVar2 = fn_001828f0(puVar1[uVar5 * 0xc + 5],(&DAT_007baa04)[uVar5 * 7]);
        puVar1[uVar5 * 0xc + 6] = uVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    uVar6 = uVar6 + 1;
    if (3 < uVar6) {
      return puVar1;
    }
  } while( true );
}



undefined4 fn_00581bb0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_68;
  uint uStack_64;
  int local_60;
  undefined1 local_5c;
  undefined1 local_5a;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  puVar11 = (undefined4 *)param_1[6];
  if (puVar11 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar11)(puVar11);
    do {
      if (puVar1 == &DAT_008944c0) goto LAB_00581bfc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar11 = (undefined4 *)0x0;
LAB_00581bfc:
  param_1[0x3f] = puVar11[6];
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  (**(code **)(*param_1 + 0x11c))(param_1,&local_34,puVar11[5],0);
  if ((uint)((int)(local_30 - local_34) >> 2) <= (uint)(puVar11[4] * 0x14)) {
    puVar11[3] = 0;
    puVar11[4] = 0;
  }
  fn_00430b08(&local_98);
  local_98 = DAT_008945f0;
  local_94 = DAT_008945f4;
  local_50 = 4;
  local_4c = puVar11[3];
  local_48 = 0;
  local_5a = 1;
  local_5c = 1;
  local_58 = 0;
  puVar1 = (undefined4 *)fn_00231cb8((&DAT_007c6fe0)[param_1[0x3f] * 2]);
  uVar2 = fn_00100b58();
  puVar13 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar5 = local_44 + -3;
    iVar9 = *piVar5;
    if (iVar9 == 0) {
      local_44[-1] = 0;
      *(undefined2 *)local_44 = 0;
    }
    else {
      if ((local_44 != &DAT_008f9cf4) &&
         ((iVar9 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar9 + -1, iVar9 == 0)))))) {
        fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
      }
      local_44 = &DAT_008f9cf4;
    }
    goto LAB_00581ed0;
  }
  if ((local_44[-3] + 1 < 2) && (uVar2 <= (uint)local_44[-2])) {
    if (puVar1 != (undefined4 *)0x0) {
      bVar14 = puVar1 <= local_44;
      if (local_44 <= puVar1) {
        bVar14 = (undefined4 *)((int)local_44 + local_44[-1] * 2) <= puVar1;
      }
      if (!bVar14) goto LAB_00581d10;
    }
    fn_001006ac(local_44,puVar1,uVar2);
    local_44[-1] = uVar2;
    *(undefined2 *)((int)local_44 + uVar2 * 2) = 0;
  }
  else {
LAB_00581d10:
    uVar6 = local_44[-1];
    local_9c = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (local_9c < uVar6 + 0x80) {
      local_9c = uVar6 + 0x80;
    }
    puVar7 = &local_9c;
    if (local_9c < uVar2) {
      puVar7 = &local_38;
    }
    local_38 = uVar2;
    uVar6 = *puVar7;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 != 0) {
      puVar13 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
      }
      puVar8 = (undefined2 *)((int)puVar13 + uVar2 * 2 + 0xc);
      *puVar13 = 0;
      puVar13[1] = uVar6;
      puVar13[2] = uVar2;
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
      }
    }
    fn_00301a9c(puVar13 + 3,puVar1,uVar2 << 1);
    if (local_44 != &DAT_008f9cf4) {
      piVar5 = local_44 + -3;
      iVar9 = *piVar5;
      if ((iVar9 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar9 + -1, iVar9 == 0)))) {
        fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
      }
    }
    local_44 = puVar13 + 3;
  }
LAB_00581ed0:
  local_40 = 0x46;
  fn_0042fa70(param_1,&local_98);
  iVar9 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  uVar12 = *(undefined4 *)(iVar9 + 0x10);
  iVar3 = fn_0068897c(uVar12,(char *)&DAT_0058220c);
  param_1[0x3d] = iVar3;
  uVar12 = fn_0068897c(uVar12,(char *)&DAT_00582220);
  uVar4 = fn_0022f750((char *)&DAT_00582230);
  fn_00190d50(uVar12,uVar4);
  uVar12 = fn_00172c98(iVar9,(char *)&DAT_00582244);
  iVar9 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar9 != 0) {
    piVar5 = (int *)fn_0031fee0(iVar9,param_1[1],uVar12,1,param_1[0x12]);
  }
  piVar10 = (int *)param_1[0x3e];
  if (piVar10 != piVar5) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    param_1[0x3e] = (int)piVar5;
  }
  (**(code **)(*(int *)param_1[0x3e] + 0x10))();
  fn_0031f8fc(param_1[0x3e],1,0,0,0xffffffff);
  iVar9 = param_1[0x3e];
  *(undefined1 *)(iVar9 + 0x83) = 0;
  fn_0031f954(iVar9,0);
  if (0 < (int)puVar11[6]) {
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    (*(code *)**(undefined4 **)param_1[0x2d])((undefined4 *)param_1[0x2d],0);
  }
  if (0 < (int)puVar11[5]) {
    (**(code **)(*(int *)param_1[0x38] + 0x2c))((int *)param_1[0x38],0);
    (**(code **)(*(int *)param_1[0x38] + 0x14))();
    (**(code **)(*param_1 + 0x19c))(param_1,puVar11[5]);
  }
  iVar9 = 0;
  if (0 < (int)puVar11[4]) {
    do {
      fn_00430f14(param_1,puVar11[3],0);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)puVar11[4]);
  }
  if (0 < (int)puVar11[3]) {
    fn_002e3fac(param_1[0x2d]);
    (**(code **)(*param_1 + 0x110))(param_1,4,puVar11[3],0,0);
  }
  (**(code **)(*param_1 + 0x1b4))(param_1);
  if (local_44 != &DAT_008f9cf4) {
    piVar5 = local_44 + -3;
    iVar9 = *piVar5;
    if ((iVar9 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar9 + -1, iVar9 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  uVar2 = local_68;
  if (uStack_64 < local_68) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uStack_64);
  }
  fn_001008c4(local_68,(int)(local_60 - local_68) >> 2,0);
  uVar2 = local_7c;
  if (local_78 < local_7c) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_78);
  }
  fn_001008c4(local_7c,(int)(local_74 - local_7c) >> 2,0);
  uVar2 = local_90;
  if (local_8c < local_90) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_8c);
  }
  fn_001008c4(local_90,(int)(local_88 - local_90) >> 2,0);
  uVar2 = local_34;
  if (local_30 < local_34) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_30);
  }
  fn_001008c4(local_34,(int)(local_2c - local_34) >> 2,0);
  return 1;
}


