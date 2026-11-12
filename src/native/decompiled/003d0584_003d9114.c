#include "003d0584_003d9114.h"



void fn_003d9114(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xe);
  *puVar1 = &DAT_00831a40;
  return;
}



int fn_003d9010(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xc);
  *puVar1 = &DAT_00831a18;
  iVar2 = fn_002fe2dc(puVar1 + 0x1c);
  return iVar2 + -0x70;
}



void fn_003d8ddc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x1a);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_008319f0;
  puVar1[0x17] = 0;
  return;
}



void fn_003d8a8c(undefined4 param_1,undefined4 param_2,ushort *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xb);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_008319c8;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)((int)puVar1 + 0x6d) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0xffffffff;
  if (param_3 != (ushort *)0x0) {
    puVar1[0x16] = (uint)*param_3;
    *(ushort *)(puVar1 + 0x17) = param_3[2];
    puVar1[0x1a] = (uint)(byte)param_3[1];
    *(undefined1 *)((int)puVar1 + 0x6d) = *(undefined1 *)((int)param_3 + 3);
  }
  return;
}



void fn_003d824c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,3);
  *puVar1 = &DAT_00831974;
  if (param_3 == (undefined1 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *param_3;
  }
  *(undefined1 *)(puVar1 + 0x16) = uVar2;
  return;
}



void fn_003d76c0(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  return;
}



void fn_003d7564(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x28] = 0;
  return;
}



void fn_003d35c0(undefined4 *param_1)

{
  *param_1 = &DAT_0083133c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void fn_003d276c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_0083131c;
  return;
}



void fn_003d0bac(undefined4 *param_1)

{
  *param_1 = &DAT_008311bc;
  return;
}



/* WARNING: Removing unreachable block (ram,0x003d0a5c) */

void fn_003d0584(int param_1,uint param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *local_d4;
  undefined4 *local_d0 [2];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),1);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x34),1);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar4 = fn_00174828(DAT_008977e4);
  iVar4 = iVar4 + param_2 * 0x418;
  *(int *)(param_1 + 0x4c) = iVar4 + -0x4080;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar4 + -0x4062);
  uVar5 = fn_002d399c(param_1 + 0x40,param_2 & 0xff);
  fn_003cfaac(param_1,(int)(char)uVar5);
  fn_003d0478(*(undefined4 *)(param_1 + 8),uVar5 & 0xff);
  iVar4 = *(int *)(param_1 + 4);
  uVar12 = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar10 = *(undefined4 *)(iVar8 + 0x20);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar8 + 0x1c);
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  do {
    if ((uVar5 & 0xff) <= uVar12 || 9 < uVar12) {
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)(param_1 + 0x15) = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar4 = *(int *)(param_1 + 4);
      if (*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 2 == 0) {
        fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,0,0);
      }
      fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),*(int *)**(undefined4 **)(iVar4 + 0x18) + 0x1c);
      *(undefined1 *)(param_1 + 0x22) = 1;
      fn_003d0ab4(*(undefined4 *)(param_1 + 8));
      iVar4 = *(int *)(param_1 + 8);
      uVar10 = fn_0022f584((char *)&DAT_003d0a78,0);
      fn_00190d50(*(undefined4 *)(iVar4 + 8),uVar10);
      return;
    }
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    iVar8 = (int)*(short *)(*(int *)(param_1 + 0x40) + uVar12 * 2);
    iVar4 = fn_0026a960(iVar8);
    if (iVar4 != 0) {
      local_48 = &DAT_0010ffff;
      uStack_44 = 0x120011;
      uStack_40 = 0x13;
      uStack_3c = 0xffffffff;
      uStack_38 = 1;
      local_34 = 0x3ffff;
      uStack_30 = 0x50004;
      uStack_2c = 0x70006;
      uStack_28 = 0xffff0002;
      iVar4 = fn_00163a00(iVar8);
      iVar8 = fn_00163c80(iVar8);
      local_d4 = (undefined4 *)0x0;
      local_d0[0] = (undefined4 *)0x0;
      iVar4 = (int)*(short *)((int)&local_48 + iVar4 * 2);
      if (iVar4 != -1) {
        uVar10 = fn_00231ca0(iVar4,0);
        fn_00101a50(&local_d4,2,&DAT_003d09e0,uVar10);
      }
      iVar4 = (int)*(short *)((int)&local_34 + iVar8 * 2);
      if (iVar4 != -1) {
        uVar10 = fn_00231ca0(iVar4,0);
        fn_00101a50(local_d0,2,&DAT_003d09e0,uVar10);
      }
      fn_00101a50(&local_c8,0x20,L"%ls%ls",&local_d4,local_d0);
    }
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    if ((0 < *(short *)(*(int *)(param_1 + 0x40) + uVar12 * 2)) &&
       (iVar4 = fn_006f4114(*(undefined4 *)(param_1 + 0x4c)), 0 < iVar4)) {
      fn_00101a50(&local_88,0x20);
    }
    sVar1 = *(short *)(param_1 + 0x50);
    iVar4 = (int)*(short *)(*(int *)(param_1 + 0x40) + uVar12 * 2);
    if (iVar4 < 1) {
LAB_003d0954:
      uVar10 = 0;
    }
    else {
      if (iVar4 == 0x175) {
        iVar4 = fn_00166804(*(undefined4 *)(param_1 + 0x4c));
        if ((iVar4 == 0) ||
           (iVar4 = fn_00182924(1), iVar4 != *(char *)(*(int *)(param_1 + 0x4c) + 0x5c)))
        goto LAB_003d0954;
      }
      else {
        local_d4 = (undefined4 *)0x0;
        iVar8 = fn_00163a00(iVar4);
        uVar13 = 0;
        iVar6 = fn_006f4114(*(undefined4 *)(param_1 + 0x4c),iVar4);
        puVar3 = local_d4;
        iVar7 = *(int *)(param_1 + 0x4c);
        uVar11 = (uint)*(byte *)(iVar7 + 0x120);
        if (uVar11 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar11 & 1;
          if ((*(byte *)(iVar7 + 0x120) & 1) != 0) {
            do {
              if (*(short *)(iVar7 + uVar13 * 2 + 0x124) == iVar4) goto LAB_003d090c;
              uVar13 = (uint)(short)((short)uVar13 + 1);
            } while ((int)uVar13 < (int)uVar9);
          }
        }
        uVar13 = uVar9;
        if (uVar9 < uVar11) {
          do {
            if (*(short *)(iVar7 + uVar13 * 2 + 0x124) == iVar4) break;
            if (*(short *)(iVar7 + uVar13 * 2 + 0x126) == iVar4) {
              uVar13 = (uint)(short)((short)uVar13 + 1);
              break;
            }
            uVar13 = (uint)(short)((short)uVar13 + 2);
          } while ((int)uVar13 < (int)uVar11);
        }
LAB_003d090c:
        if ((iVar8 == 2) && ('\0' < *(char *)(iVar7 + 0xba))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((sVar1 < iVar6) ||
           (iVar4 = fn_006f4938(iVar7 + 0x120,uVar13),
           iVar4 != 0 || (bVar2 || puVar3 != (undefined4 *)0x0))) goto LAB_003d0954;
      }
      uVar10 = 1;
    }
    local_d0[0] = &local_88;
    local_d4 = &local_c8;
    fn_0038dad0(*(undefined4 *)(param_1 + 4),uVar12,0,
                 (int)*(short *)(*(int *)(param_1 + 0x40) + uVar12 * 2),uVar10);
    uVar12 = uVar12 + 1 & 0xff;
  } while( true );
}


