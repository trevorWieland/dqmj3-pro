#include "002c4850_002c4850.h"



void fn_002c4850(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined2 *puVar15;
  uint *puVar16;
  undefined2 *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_64;
  undefined4 local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint *local_30;
  
  iVar6 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
  if (iVar6 != 0) {
    return;
  }
  uVar7 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  piVar8 = (int *)fn_006f72e0(DAT_008977e0);
  piVar8 = (int *)(**(code **)(*piVar8 + 0x80))();
  piVar8 = (int *)(**(code **)(*piVar8 + 8))();
  local_98 = (piVar8[1] - *piVar8) / 0x12;
  local_94 = 0x20;
  puVar14 = &local_94;
  if (0x1f < local_98) {
    puVar14 = &local_98;
  }
  uVar19 = *puVar14;
  puVar9 = (uint *)fn_00100fc6(uVar19 * 0x12,0);
  puVar16 = (uint *)piVar8[1];
  puVar10 = puVar9;
  for (puVar14 = (uint *)*piVar8; puVar14 != puVar16; puVar14 = (uint *)((int)puVar14 + 0x12)) {
    if (puVar10 != (uint *)0x0) {
      *puVar10 = *puVar14;
      puVar10[1] = puVar14[1];
      puVar10[2] = puVar14[2];
      puVar10[3] = puVar14[3];
      *(short *)(puVar10 + 4) = (short)puVar14[4];
    }
    puVar10 = (uint *)((int)puVar10 + 0x12);
  }
  local_64 = (int)puVar9 + uVar19 * 0x12;
  puVar14 = (uint *)((int)puVar9 + ((piVar8[1] - *piVar8) / 0x12) * 0x12);
  local_30 = puVar14;
  if (puVar9 != puVar14) {
    fn_007ab19c(puVar9,puVar14,((int)puVar14 - (int)puVar9) / 0x12);
    if ((int)puVar14 - (int)puVar9 < 0x121) {
      fn_007a36c0(puVar9,puVar14,fn_0060b950);
    }
    else {
      fn_007a36c0(puVar9,puVar9 + 0x48,fn_0060b950);
      for (puVar10 = puVar9 + 0x48; puVar10 != puVar14; puVar10 = (uint *)((int)puVar10 + 0x12)) {
        local_98 = *puVar10;
        local_94 = puVar10[1];
        local_90 = puVar10[2];
        local_8c = puVar10[3];
        uVar19 = (uint)local_88 >> 0x10;
        local_88 = CONCAT22((short)uVar19,(short)puVar10[4]);
        iVar6 = fn_0060b950(&local_98,(uint *)((int)puVar10 + -0x12));
        puVar5 = (uint *)((int)puVar10 + -0x12);
        puVar16 = puVar10;
        while (puVar4 = puVar5, iVar6 != 0) {
          *puVar16 = *puVar4;
          puVar16[1] = puVar4[1];
          puVar16[2] = puVar4[2];
          puVar16[3] = puVar4[3];
          *(short *)(puVar16 + 4) = (short)puVar4[4];
          iVar6 = fn_0060b950(&local_98,(uint *)((int)puVar4 + -0x12));
          puVar5 = (uint *)((int)puVar4 + -0x12);
          puVar16 = puVar4;
        }
        *puVar16 = local_98;
        puVar16[1] = local_94;
        puVar16[2] = local_90;
        puVar16[3] = local_8c;
        *(undefined2 *)(puVar16 + 4) = (undefined2)local_88;
      }
    }
  }
  iVar6 = ((int)local_30 - (int)puVar9) / 0x12;
  cVar1 = *(char *)(param_1 + 0xb9);
  if (cVar1 == '\0') {
    iVar18 = 0;
    if (0 < iVar6) {
      do {
        sVar2 = 0x6ac;
        iVar20 = (int)puVar9 + iVar18 * 0x12;
        sVar3 = *(short *)(iVar20 + 6);
        if (sVar3 != 0x6ac) {
          sVar2 = 0x6ad;
        }
        if (sVar3 == 0x6ac || sVar2 == sVar3) {
LAB_002c4cac:
          iVar11 = fn_00154ac8(0x9e);
          if (iVar11 != 0) goto LAB_002c4cc0;
        }
        else {
          sVar2 = 0x6ae;
          if (sVar3 != 0x6ae) {
            sVar2 = 0x6af;
          }
          if (sVar3 == 0x6ae || sVar2 == sVar3) goto LAB_002c4cac;
          sVar2 = 0x6b0;
          if (sVar3 != 0x6b0) {
            sVar2 = 0x6b1;
          }
          if (sVar3 == 0x6b0 || sVar2 == sVar3) goto LAB_002c4cac;
LAB_002c4cc0:
          local_98 = (uint)*(short *)(iVar20 + 0x10);
          sVar2 = *(short *)(iVar20 + 6);
          fn_0060b968(&local_60,uVar7,iVar20,(int)sVar2,*(char *)(iVar20 + 0xc) == '\x01',
                       (int)*(short *)(iVar20 + 0xe));
          local_80 = local_60;
          iStack_7c = iStack_5c;
          iStack_78 = iStack_58;
          uStack_74 = uStack_54;
          uStack_70 = uStack_50;
          uStack_6c = uStack_4c;
          if ((sVar2 != 0x5b7) || (iVar20 = fn_00154ac8(0x7aa), iVar20 != 0)) {
            fn_00395760(*(undefined4 *)(param_1 + 0xb0),&local_80);
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
  }
  else if (cVar1 == '\x01') {
    iVar20 = 0;
    iVar18 = 0;
    if (0 < iVar6) {
      do {
        puVar15 = &DAT_007c7268;
        iVar11 = (int)puVar9 + iVar18 * 0x12;
        puVar17 = (undefined2 *)0x6ac;
        puVar12 = (undefined2 *)(int)*(short *)(iVar11 + 6);
        if (puVar12 != (undefined2 *)0x6ac) {
          puVar17 = (undefined2 *)0x6ad;
        }
        if (puVar12 == (undefined2 *)0x6ac || puVar17 == puVar12) {
LAB_002c4d98:
          iVar13 = fn_00154ac8(0x9e);
          if (iVar13 != 0) goto LAB_002c4dac;
        }
        else {
          puVar17 = (undefined2 *)0x6ae;
          if (puVar12 != (undefined2 *)0x6ae) {
            puVar17 = (undefined2 *)0x6af;
          }
          if (puVar12 == (undefined2 *)0x6ae || puVar17 == puVar12) goto LAB_002c4d98;
          if (puVar12 != (undefined2 *)0x6b0) {
            puVar15 = (undefined2 *)0x6b1;
          }
          if (puVar12 == (undefined2 *)0x6b0 || puVar15 == puVar12) goto LAB_002c4d98;
LAB_002c4dac:
          iVar13 = (int)*(short *)(iVar11 + 6);
          local_98 = (uint)*(short *)(iVar11 + 0x10);
          fn_0060b968(&local_60,uVar7,iVar11,iVar13,*(char *)(iVar11 + 0xc) == '\x01',
                       (int)*(short *)(iVar11 + 0xe));
          local_48 = local_60;
          local_44 = iStack_5c;
          local_40 = iStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uVar19 = fn_00163d44(0x32);
          if (iVar13 == 0x22) {
            local_40 = iVar20 + 0x26ad;
            iVar20 = iVar20 + 1;
            local_44 = (uint)CONCAT21(((unsigned int)(local_44) >> 16) & 0xffff,6 < uVar19) << 8;
          }
          else if (((7 < iVar13 - 0x7acU) && (iVar11 = fn_00163d44(0), iVar11 == 0x32)) &&
                  (uVar19 < 7)) goto LAB_002c4e70;
          fn_00395760(*(undefined4 *)(param_1 + 0xb0),&local_48);
        }
LAB_002c4e70:
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
  }
  else if (cVar1 == '\x02') {
    iVar18 = 0;
    if (0 < iVar6) {
      do {
        sVar2 = 0x6ac;
        iVar20 = (int)puVar9 + iVar18 * 0x12;
        sVar3 = *(short *)(iVar20 + 6);
        if (sVar3 != 0x6ac) {
          sVar2 = 0x6ad;
        }
        if (sVar3 == 0x6ac || sVar2 == sVar3) {
LAB_002c4ed4:
          iVar11 = fn_00154ac8(0x9e);
          if (iVar11 != 0) goto LAB_002c4ee8;
        }
        else {
          sVar2 = 0x6ae;
          if (sVar3 != 0x6ae) {
            sVar2 = 0x6af;
          }
          if (sVar3 == 0x6ae || sVar2 == sVar3) goto LAB_002c4ed4;
          sVar2 = 0x6b0;
          if (sVar3 != 0x6b0) {
            sVar2 = 0x6b1;
          }
          if (sVar3 == 0x6b0 || sVar2 == sVar3) goto LAB_002c4ed4;
LAB_002c4ee8:
          local_98 = (uint)*(short *)(iVar20 + 0x10);
          fn_0060b968(&local_60,uVar7,iVar20,(int)*(short *)(iVar20 + 6),
                       *(char *)(iVar20 + 0xc) == '\x01',(int)*(short *)(iVar20 + 0xe));
          local_48 = local_60;
          local_44 = iStack_5c;
          local_40 = iStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          iVar20 = fn_00147e6c(uVar7,iVar20,6);
          if (iVar20 == 0) {
            fn_00395760(*(undefined4 *)(param_1 + 0xb0),&local_48);
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
  }
  else {
    iVar18 = 0;
    if (0 < iVar6) {
      do {
        sVar2 = 0x6ac;
        iVar20 = (int)puVar9 + iVar18 * 0x12;
        sVar3 = *(short *)(iVar20 + 6);
        if (sVar3 != 0x6ac) {
          sVar2 = 0x6ad;
        }
        if (sVar3 == 0x6ac || sVar2 == sVar3) {
LAB_002c4b30:
          iVar11 = fn_00154ac8(0x9e);
          if (iVar11 != 0) goto LAB_002c4b44;
        }
        else {
          sVar2 = 0x6ae;
          if (sVar3 != 0x6ae) {
            sVar2 = 0x6af;
          }
          if (sVar3 == 0x6ae || sVar2 == sVar3) goto LAB_002c4b30;
          sVar2 = 0x6b0;
          if (sVar3 != 0x6b0) {
            sVar2 = 0x6b1;
          }
          if (sVar3 == 0x6b0 || sVar2 == sVar3) goto LAB_002c4b30;
LAB_002c4b44:
          local_98 = (uint)*(short *)(iVar20 + 0x10);
          fn_0060b968(&local_80,uVar7,iVar20,(int)*(short *)(iVar20 + 6),
                       *(char *)(iVar20 + 0xc) == '\x01',(int)*(short *)(iVar20 + 0xe));
          local_60 = local_80;
          iStack_5c = iStack_7c;
          iStack_58 = iStack_78;
          uStack_54 = uStack_74;
          uStack_50 = uStack_70;
          uStack_4c = uStack_6c;
          fn_0017821c(&local_48,&local_60,0x16);
          fn_00395760(*(undefined4 *)(param_1 + 0xb0),&local_48);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
  }
  iVar6 = fn_00154ac8(0x30);
  iVar18 = 0;
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  do {
    local_94 = local_94 & 0xffff0000;
    local_8c = local_8c & 0xffffff00;
    local_88 = 0;
    local_84 = 0;
    local_98 = (uint)(short)(&DAT_007c7264)[iVar18];
    local_90 = local_98;
    fn_00395760(*(undefined4 *)(param_1 + 0xb0),&local_98);
    iVar18 = iVar18 + 1;
  } while (iVar18 < iVar6);
  puVar14 = puVar9;
  if (local_30 < puVar9) {
    do {
      puVar14 = (uint *)((int)puVar14 + 0x12);
    } while (puVar14 != local_30);
  }
  fn_002feef8(puVar9,(local_64 - (int)puVar9) / 0x12,0);
  return;
}


