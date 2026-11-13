#include "005bd8fc_005be8a0.h"



undefined4 fn_005be8a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_80 [8];
  char local_78;
  undefined1 auStack_20 [16];
  
  fn_003a4080();
  fn_00689930(param_1,0,0);
  iVar2 = DAT_00897840;
  if (*(char *)(DAT_00897840 + 0x36) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 1;
    fn_00562078(*(undefined4 *)(iVar2 + 0x2c));
  }
  else if (*(char *)(DAT_00897840 + 0x36) == '\x01') {
    fn_003c1f64(*(undefined4 *)(param_1 + 0x70));
    uVar1 = fn_001c232c(DAT_008977e4);
    fn_00205da0(auStack_80,uVar1);
    if (local_78 == '\x01') {
      uVar1 = fn_006e6648(*(undefined4 *)(DAT_00897840 + 0x2c));
      iVar2 = fn_002043cc(DAT_00897840,uVar1);
      fn_0015b0dc(*(undefined4 *)(iVar2 + 0xc));
      iVar2 = fn_00204404(*(undefined4 *)(param_1 + 0x74));
      fn_0015b0f8(*(int *)(iVar2 + 0x798) + 1);
      *(undefined1 *)(*(int *)(param_1 + 0x7c) + 8) = 0;
      fn_00689930(param_1,0x7e,0,0);
    }
    else if (local_78 == '\x02' || local_78 == '\x06') {
      uVar1 = fn_006e6648(*(undefined4 *)(DAT_00897840 + 0x2c));
      iVar2 = fn_002043cc(DAT_00897840,uVar1);
      fn_0015b0dc(*(undefined4 *)(iVar2 + 0xc));
      *(undefined1 *)(*(int *)(param_1 + 0x7c) + 8) = 2;
      fn_00689930(param_1,0x7e,0);
    }
    *(undefined4 *)(param_1 + 0x68) = 0xe;
    fn_00120ec8(auStack_20);
  }
  fn_002525fc();
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00561f24(iVar2,*(undefined4 *)(param_1 + 0x70));
  }
  piVar4 = *(int **)(param_1 + 0x84);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x84) = piVar3;
  }
  iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0044180c(iVar2,*(undefined4 *)(param_1 + 0x70),0);
  }
  piVar4 = *(int **)(param_1 + 0x88);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x88) = piVar3;
  }
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(DAT_00897840 + 0x2c);
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x3c),0);
  return 1;
}



undefined4 fn_005be760(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar5 = *param_1;
  if ((uVar5 & 0x80000000) == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = (uVar5 & 0x3fc00) >> 10;
    if (((uVar1 == 0x11) && (uVar2 = uVar5 & 0x3ff, 99 < uVar2)) && (uVar2 < 0xb4)) {
      if (uVar2 < 0x82) {
        uVar4 = 0xf8;
      }
      else {
        uVar4 = 0xff;
      }
    }
    else if (((uVar1 == 0x11) && (0xb3 < (uVar5 & 0x3ff))) && ((uVar5 & 0x3ff) < 200)) {
      uVar4 = 0xf7;
    }
    else if (((uVar1 == 0x11) && (0x185 < (uVar5 & 0x3ff))) && ((uVar5 & 0x3ff) < 400)) {
      uVar4 = 0xf5;
    }
    else if (((uVar1 == 0x11) && (0xdb < (uVar5 & 0x3ff))) && ((uVar5 & 0x3ff) < 0xe6)) {
      uVar4 = 0xf6;
    }
    else if (((uVar1 == 0x11) && (uVar2 = uVar5 & 0x3ff, 0xe5 < uVar2)) && (uVar2 < 0x154)) {
      if ((uVar2 < 0x104) || (0x117 < uVar2)) {
        bVar7 = SBORROW4(uVar2,0x118);
        iVar3 = uVar2 - 0x118;
        if (0x117 < uVar2) {
          bVar7 = SBORROW4(0x14e,uVar2);
          iVar3 = 0x14e - uVar2;
        }
        if (iVar3 < 0 == bVar7) {
          uVar4 = 0xfc;
        }
        else {
          uVar4 = 0xfb;
        }
      }
      else {
        uVar4 = 0xfd;
      }
    }
    else if (((uVar1 == 0x11) && (199 < (uVar5 & 0x3ff))) && ((uVar5 & 0x3ff) < 0xdc)) {
      uVar4 = 0xfa;
    }
    else {
      uVar4 = 0x80;
    }
    *param_2 = uVar4;
    uVar6 = 1;
  }
  return uVar6;
}



undefined4 fn_005be698(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [52];
  
  if (*(int *)(param_1 + 4) == param_3) {
    fn_001781f0(auStack_40,*(int *)(param_2 + 0x14) + param_3 * 0x30);
    uVar2 = 0;
    if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3 != 0) {
      do {
        local_80 = *(undefined4 *)(param_1 + 0x14);
        local_7c = local_80;
        local_78 = local_80;
        fn_001ad150(&local_70,auStack_40,&local_80);
        iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 8);
        *(undefined4 *)(iVar1 + 0x8c) = local_70;
        *(undefined4 *)(iVar1 + 0x90) = uStack_6c;
        *(undefined4 *)(iVar1 + 0x94) = uStack_68;
        *(undefined4 *)(iVar1 + 0x98) = local_64;
        *(undefined4 *)(iVar1 + 0x9c) = uStack_60;
        *(undefined4 *)(iVar1 + 0xa0) = uStack_5c;
        *(undefined4 *)(iVar1 + 0xa4) = uStack_58;
        *(undefined4 *)(iVar1 + 0xa8) = uStack_54;
        *(undefined4 *)(iVar1 + 0xac) = local_50;
        *(undefined4 *)(iVar1 + 0xb0) = uStack_4c;
        *(undefined4 *)(iVar1 + 0xb4) = uStack_48;
        *(undefined4 *)(iVar1 + 0xb8) = uStack_44;
        fn_005434c8(*(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3));
    }
  }
  return 0;
}



void fn_005be3cc(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint local_c0 [2];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  
  fn_005bd84c();
  iVar3 = fn_006e902c(param_1);
  cVar1 = *(char *)(iVar3 + 0xb03);
  cVar2 = *(char *)(iVar3 + 0xb02);
  uVar4 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be5f4);
  uVar5 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be610);
  uVar6 = (uint)*(ushort *)(iVar3 + 0x720);
  if (uVar6 == 0) {
    if (cVar2 == '\0') {
      fn_00688a74(uVar4);
      fn_00688a74(uVar5);
    }
  }
  else {
    local_c0[0] = uVar6;
    puVar10 = local_c0;
    if (9999999 < uVar6) {
      puVar10 = &DAT_007d5240;
    }
    puVar7 = local_c0;
    if (999999 < (int)*(uint *)(iVar3 + 0x73c)) {
      puVar7 = &DAT_007d5244;
    }
    local_c0[0] = *(uint *)(iVar3 + 0x73c);
    uVar6 = *puVar7;
    fn_00688c04(uVar4,*puVar10,0);
    fn_00688c04(uVar5,uVar6,0);
  }
  iVar11 = 0;
  do {
    iVar12 = iVar11 + 1;
    iVar8 = iVar3 + iVar11 * 0x20;
    fn_001028d4(auStack_b8,(char *)&DAT_005be634,iVar12);
    local_c0[0] = fn_001827b0(*(undefined4 *)(param_1 + 0x74),auStack_b8);
    fn_001028d4(auStack_98,(char *)&DAT_005be648,iVar12);
    iVar9 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),auStack_98);
    fn_001028d4(auStack_78,(char *)&DAT_005be654,iVar12);
    local_2c = fn_001827b0(*(undefined4 *)(param_1 + 0x74),auStack_78);
    fn_001028d4(auStack_58,(char *)&DAT_005be660,iVar12);
    uVar4 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),auStack_58);
    iVar12 = fn_00100b58(iVar8 + 0x744);
    if (iVar12 == 0) {
      if (cVar1 == '\0') {
        if (iVar9 != 0) {
          *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe;
        }
        fn_00688a74(local_c0[0]);
        fn_00688a74(local_2c);
        fn_00688a74(uVar4);
      }
    }
    else {
      if (iVar9 != 0) {
        *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe | 1;
      }
      fn_0023c2e0(*(undefined4 *)(param_1 + 0x74),*(undefined2 *)(iVar8 + 0x742),auStack_b8,
                   auStack_98);
      fn_00190d50(local_2c,iVar8 + 0x744);
      puVar10 = local_c0;
      if (999999 < (int)*(uint *)(iVar8 + 0x75c)) {
        puVar10 = &DAT_007d5244;
      }
      local_c0[0] = *(uint *)(iVar8 + 0x75c);
      fn_00688c04(uVar4,*puVar10,0);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 5);
  return;
}



void fn_005bdc24(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00849918;
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  fn_0022d118(param_1);
  fn_002feef8();
  return;
}



void fn_005bd8fc(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_78;
  int local_74;
  int local_6c;
  uint local_68;
  int iStack_64;
  int local_4c;
  int local_48 [2];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  uint local_30;
  int local_2c;
  
  puVar12 = *(undefined4 **)(param_1 + 0x98);
  if (puVar12 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar12)(puVar12);
    do {
      if (puVar4 == &DAT_00899218) goto LAB_005bd944;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar12 = (undefined4 *)0x0;
LAB_005bd944:
  fn_004b9b4c(auStack_40,puVar12 + 0x1c4);
  iVar5 = fn_006d3ecc(auStack_40,DAT_008b64f8);
  if (iVar5 != 0) {
    fn_006d3d30(&local_30,auStack_40);
    local_6c = local_2c;
    local_78 = local_30 + 32400000;
    local_74 = local_2c + (uint)(0xfe119d7f < local_30);
    fn_006f5e08(auStack_38,DAT_00898840);
    fn_006d3d30(&local_68,auStack_38);
    local_4c = fn_0011a36c(&local_78);
    local_48[0] = 9999;
    piVar9 = &local_4c;
    if (9999 < local_4c) {
      piVar9 = local_48;
    }
    iVar5 = *piVar9;
    uVar6 = fn_0011a3c4(&local_78);
    uVar7 = fn_0011a314(&local_78);
    fn_00688ad4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdba8,iVar5,0);
    fn_00688ad4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdbbc,uVar6,0);
    fn_00688ad4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdbcc,uVar7,0);
    uVar1 = (ulonglong)(local_68 - local_78) * 1000000;
    uVar8 = (iStack_64 - (local_74 + (uint)(local_68 < local_78))) * 1000000 + (int)(uVar1 >> 0x20);
    local_48[0] = (int)uVar8 >> 0x1f;
    lVar3 = (ulonglong)uVar8 * 0x48f948e3 +
            CONCAT44(local_48[0] * 0x48f948e3,(int)((uVar1 & 0xffffffff) * 0x48f948e3 >> 0x20));
    uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
    lVar2 = (uVar1 & 0xffffffff) * 0x683fff6f;
    uVar10 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar2);
    local_48[0] = ((int)(local_48[0] * 0x683fff6f + (int)((ulonglong)uVar8 * 0x683fff6f >> 0x20) +
                         ((int)uVar10 >> 0x1f) + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar10,uVar11)
                        + (uint)CARRY4(uVar10 + uVar11,(uint)((ulonglong)uVar8 * 0x683fff6f))) >>
                  0xd) - local_48[0];
    local_4c = 999;
    piVar9 = &local_4c;
    if (local_48[0] < 1000) {
      piVar9 = local_48;
    }
    fn_00688ad4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdbec,*piVar9,0);
  }
  return;
}


