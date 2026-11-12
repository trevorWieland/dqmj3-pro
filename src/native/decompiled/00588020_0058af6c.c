#include "00588020_0058af6c.h"



void fn_0058af6c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x160))(param_1,param_3);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x46) = 0;
    uVar2 = fn_0022f750((char *)&DAT_0058b018);
    fn_0039ae28(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0058b004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1,param_2,param_3);
    return;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar2 = fn_0022f750((char *)&DAT_0058b008);
  fn_0039ae28(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0058afcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x154))(param_1,param_2,param_3);
  return;
}



undefined4 fn_0058aeec(int param_1)

{
  undefined4 uVar1;
  
  fn_0039a744();
  uVar1 = fn_0022f750((char *)&DAT_0058af4c);
  fn_0022cd58(param_1,uVar1);
  if (*(char *)(param_1 + 0x118) == '\0') {
    uVar1 = fn_0022f750((char *)&DAT_0058af64);
    fn_0039ae28(param_1,uVar1);
  }
  else {
    uVar1 = fn_0022f750((char *)&DAT_0058af54);
    fn_0039ae28(param_1,uVar1);
  }
  return 1;
}



void fn_0058a3e0(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = fn_002fdf94(param_1,param_2,0xf);
  puVar2 = (undefined4 *)fn_003f4e40(iVar1 + 0x58);
  puVar2[0xb] = 0;
  *puVar2 = &DAT_00843874;
  puVar2[-0x16] = &DAT_00843838;
  if (param_3 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
  }
  puVar2[0xb] = uVar3;
  return;
}



int fn_00589b08(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x27);
  *puVar1 = &DAT_008437fc;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  iVar2 = fn_002fe2dc(puVar1 + 0x22);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + -0x7c) = 4;
  *(undefined4 *)(iVar2 + -0x78) = 0;
  return iVar2 + -0x88;
}



void fn_00589654(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  fn_002fe008(param_1 + 0x88,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
  uVar1 = *(uint *)(param_1 + 0xa8);
  uVar2 = *(int *)(param_1 + 0x18) + 1;
  *(uint *)(param_1 + 0x18) = uVar2;
  if (uVar2 <= uVar1) {
    return;
  }
  if ((int)uVar1 < 0x18) {
    if (*(int *)(param_1 + 0xac) == 0) {
      *(uint *)(param_1 + 0xa8) = uVar1 + 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0xac) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    piVar3 = *(int **)(param_1 + 0x14);
    (**(code **)(*(int *)piVar3[0x5c] + 0x8c))();
    (**(code **)(*piVar3 + 0x88))(piVar3);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),6,4,0);
    *(undefined4 *)(param_1 + 0xc) = 8;
    *(undefined4 *)(param_1 + 0x10) = 0;
    goto LAB_005896d4;
  }
  fn_006bd68c(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x7c) = in_s0;
  *(undefined4 *)(param_1 + 0x80) = in_s1;
  *(undefined4 *)(param_1 + 0x84) = in_s2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_005896d4:
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
  return;
}



void fn_0058953c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,8);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_008437d4;
  return;
}



void fn_00588e54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003cfe94();
  *puVar1 = &DAT_0084361c;
  *(undefined1 *)((int)puVar1 + 0x3e) = 0;
  *(undefined1 *)((int)puVar1 + 0x3f) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((int)puVar1 + 0x41) = 0;
  *(undefined1 *)((int)puVar1 + 0x42) = 0;
  puVar1[0x11] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x12) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xff;
  puVar1[0x13] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x14) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x51) = 0xff;
  puVar1[0x15] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x16) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x59) = 0xff;
  return;
}



void fn_00588414(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar9 = *(undefined4 *)(iVar2 + 8);
  iVar2 = fn_001481c8(uVar9,L"rom:/data/Layout/menu/grand_prix/elimination_round.arc",&DAT_005886ec
                       ,1,1);
  param_1[0x1c] = iVar2;
  iVar2 = fn_001480d0(uVar9,iVar2,(char *)&DAT_00862594,&DAT_005886f4,0,1,0);
  param_1[0x1d] = iVar2;
  iVar2 = fn_001c8a44(uVar9,&DAT_005886f8,&DAT_005886f8,iVar2);
  param_1[0x1e] = iVar2;
  iVar2 = fn_001854ac(uVar9,iVar2);
  param_1[0x1b] = iVar2;
  iVar2 = *(int *)(param_1[0x19] + 0xc) - *(int *)(param_1[0x19] + 8) >> 2;
  uVar3 = fn_00178f9c(uVar9,param_1[0x1d]);
  iVar4 = fn_00178f9c(uVar9,param_1[0x1d]);
  piVar12 = *(int **)(iVar4 + 0x10);
  iVar4 = fn_006e9b50(param_1[0x19],0);
  bVar1 = *(byte *)(iVar4 + 6);
  piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))(piVar12,DAT_00892d9c,1);
  if (piVar5 != (int *)0x0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar6 == &DAT_0089a930) goto LAB_00588538;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_00588538:
  uVar9 = fn_0022f750(*(undefined4 *)(&DAT_00892da4 + (uint)bVar1 * 4));
  fn_00190d50(piVar5,uVar9);
  uVar10 = 0xffffffff;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar7 = fn_006e9b50(param_1[0x19],iVar4);
      iVar4 = iVar4 + 1;
      if ((int)uVar10 < (int)(uint)*(byte *)(iVar7 + 4)) {
        uVar10 = (uint)*(byte *)(iVar7 + 4);
      }
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      puVar6 = (undefined4 *)fn_006e9b50(param_1[0x19],iVar4);
      uVar11 = (uint)*(byte *)(puVar6 + 1);
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      fn_00101a50(&local_48,0x20,&DAT_0058870c,uVar11);
      piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))
                                (piVar12,(&PTR_s_tb_group_x_score_00_00892dc4)[iVar4],1);
      if (piVar5 != (int *)0x0) {
        puVar8 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
        do {
          if (puVar8 == &DAT_0089a930) goto LAB_00588640;
          puVar8 = (undefined4 *)*puVar8;
        } while (puVar8 != (undefined4 *)0x0);
      }
      piVar5 = (int *)0x0;
LAB_00588640:
      fn_00190d50(piVar5,&local_48);
      bVar13 = uVar11 == uVar10;
      if ((int)uVar10 <= (int)uVar11) {
        bVar13 = uVar11 == 0;
      }
      piVar5 = (int *)(**(code **)(*piVar12 + 0x2c))
                                (piVar12,(&PTR_s_tb_group_x_00_00892dd4)[iVar4],1);
      if (piVar5 != (int *)0x0) {
        puVar8 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
        do {
          if (puVar8 == &DAT_0089a930) goto LAB_005886b0;
          puVar8 = (undefined4 *)*puVar8;
        } while (puVar8 != (undefined4 *)0x0);
      }
      piVar5 = (int *)0x0;
LAB_005886b0:
      fn_00190d50(piVar5,*puVar6);
      fn_006889d8(uVar3,(&PTR_s_gpx_first_00_00892db4)[iVar4],!bVar13 && (int)uVar10 <= (int)uVar11
                  );
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  param_1[0x22] = 1;
  return;
}



void fn_00588020(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fn_00748d08();
  iVar4 = 0;
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10);
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0077f968(param_1,iVar4);
      if ((-1 < (int)uVar2) &&
         (uVar2 < (uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4))) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar4 * 4);
        fn_0031b6ec(uVar6,4,0);
        switch(uVar2) {
        case 0:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7ac8(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 1:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7b30(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 2:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7ae8(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 3:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7af8(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 4:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7b40(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 5:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7ad8(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 6:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7a80(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 7:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_0023c368(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
          break;
        case 8:
          fn_0031b6ec(uVar6,4,1);
          uVar3 = fn_002d7b50(uVar5);
          fn_0031b7c4(uVar6,4,uVar3);
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar4 < iVar1);
  }
  return;
}


