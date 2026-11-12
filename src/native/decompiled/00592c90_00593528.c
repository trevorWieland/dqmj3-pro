#include "00592c90_00593528.h"



void fn_00593528(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0082d14c;
  if (param_1[0x40] != 0) {
    fn_002feef8(param_1[0x40]);
  }
  uVar1 = param_1[0x3c];
  uVar2 = uVar1;
  if ((uint)param_1[0x3d] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x3d]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x3e] - uVar1) >> 4,0);
  fn_00397a78(param_1);
  return;
}



void fn_005934d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d370();
  puVar1[0x42] = 0;
  *puVar1 = &PTR_FUN_00844de0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  *(undefined1 *)(puVar1 + 0x47) = 0;
  puVar1[0x48] = 0;
  *(undefined1 *)(puVar1 + 0x49) = 0;
  *(undefined1 *)((int)puVar1 + 0x125) = 0;
  return;
}



void fn_00592c90(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_00748e14();
  (**(code **)(*param_1 + 0x164))(param_1);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_00592cf8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00592cf8:
  uVar4 = puVar2[0x12];
  piVar12 = (int *)puVar2[0x11];
  if (1 < *(byte *)(param_1 + 0x47)) {
    fn_005f6270(piVar12);
  }
  fn_005f6270(uVar4);
  switch((char)param_1[0x47]) {
  case '\0':
    iVar8 = fn_0066eb80(DAT_00898840,8);
    if ((*(byte *)(iVar8 + 0x4c) & 4) == 0) {
      param_1[0x46] = 0;
    }
    else {
      iVar5 = fn_00673170(uVar4);
      param_1[0x46] = iVar5;
    }
    if ((*(byte *)(iVar8 + 0x4c) & 4) != 0) {
      uVar7 = 0;
      if (param_1[0x3d] - param_1[0x3c] >> 4 != 0) {
        do {
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          if (uVar7 < (uint)param_1[0x46]) {
            fn_0067303c(uVar4,uVar7,&local_6c);
          }
          else {
            psVar6 = (short *)fn_0022f750((char *)&DAT_00593164);
            uVar11 = 0;
            psVar9 = (short *)&local_6c;
            do {
              uVar11 = uVar11 + 1;
              psVar10 = psVar9 + 1;
              *psVar9 = *psVar6;
              bVar13 = psVar6[1] == 0;
              psVar6 = psVar6 + 1;
              psVar9 = psVar10;
            } while ((bVar13 || uVar11 < 0xb) && (!bVar13 && uVar11 != 10));
            *psVar10 = 0;
          }
          fn_0031b7c4(*(undefined4 *)(param_1[0x1e] + uVar7 * 4),0,&local_6c);
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)(param_1[0x3d] - param_1[0x3c] >> 4));
      }
      uVar7 = (**(code **)(*(int *)param_1[0x27] + 0x5c))();
      if (((int)uVar7 < 0) || ((uint)param_1[0x46] <= uVar7)) {
        if (param_1[0x43] != 0) {
          *(undefined1 *)(param_1[0x43] + 0xc) = 0;
        }
        *(undefined1 *)((int)param_1 + 0x125) = 0;
      }
      else {
        if (param_1[0x43] != 0) {
          fn_00113c58(&local_6c);
          fn_00673140(uVar4,uVar7,&local_6c);
          local_54 = local_6c;
          uStack_50 = local_68;
          uStack_4c = local_64;
          uStack_48 = local_60;
          uStack_44 = local_5c;
          uStack_40 = local_58;
          fn_0040f5f8(puVar2[0xf],&local_54);
          if (*(char *)(param_1[0x43] + 0xc) == '\0') {
            *(undefined1 *)(param_1[0x43] + 0xc) = 1;
          }
          piVar12 = (int *)fn_006896fc(param_1,0x7a);
          if (piVar12 != (int *)0x0) {
            puVar3 = (undefined4 *)(**(code **)(*piVar12 + 0xc))(piVar12);
            do {
              if (puVar3 == &DAT_00893c88) {
                if (piVar12 != (int *)0x0) {
                  local_3c = local_6c;
                  uStack_38 = local_68;
                  uStack_34 = local_64;
                  uStack_30 = local_60;
                  uStack_2c = local_5c;
                  uStack_28 = local_58;
                  fn_00307d64(piVar12,&local_3c);
                }
                break;
              }
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
          }
        }
        *(undefined1 *)((int)param_1 + 0x125) = 1;
      }
    }
    if (0xd2 < param_1[0x45]) {
      fn_006732a0(uVar4,puVar2[0xd],*(undefined1 *)(puVar2 + 0xe),
                   *(undefined4 *)(param_1[0x41] + 0x10));
      param_1[0x45] = 0;
    }
    param_1[0x45] = param_1[0x45] + 1;
    break;
  case '\x01':
    iVar8 = fn_0066eb80(DAT_00898840,8);
    if ((*(byte *)(iVar8 + 0x4c) & 4) == 0) {
      return;
    }
    uVar7 = fn_00673170(puVar2[0x12]);
    param_1[0x46] = uVar7;
    if (uVar7 <= (uint)param_1[0x44]) {
      uVar4 = fn_0022f584(*(undefined4 *)(param_1[0x41] + 0x1c),0);
      fn_00748898(param_1,uVar4);
LAB_00593150:
      *(undefined1 *)(param_1 + 0x47) = 6;
      return;
    }
    fn_003dcc90(*(undefined4 *)(*(int *)(puVar2[0xf] + 4) + 8));
    fn_00675a7c(puVar2[0x11],puVar2[0xd],param_1[0x44],*(undefined4 *)(param_1[0x41] + 0x10),0);
    fn_0040f564(puVar2[0xf],0);
    uVar1 = 2;
    goto LAB_00593074;
  case '\x02':
    iVar8 = (**(code **)(*piVar12 + 0x14))(piVar12);
    if (iVar8 != 0) {
      return;
    }
    if (piVar12[0x11] == 0) {
      iVar8 = fn_0066e224(DAT_00898840);
      if (iVar8 == 0) {
        return;
      }
      fn_0066eb90(DAT_00898840);
      (**(code **)(*param_1 + 0x168))(param_1);
      uVar1 = 3;
      goto LAB_00593074;
    }
    goto LAB_005931c0;
  case '\x03':
    iVar8 = fn_001296d0(DAT_00898840);
    if (iVar8 == 0) {
      fn_0040f564(puVar2[0xf],0);
      iVar8 = fn_006ce5b8(*(undefined4 *)(puVar2[0xf] + 4),1);
      if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005931a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x178))(param_1,param_1[0x41]);
        return;
      }
      iVar8 = fn_0040f628(puVar2[0xf]);
      if (iVar8 == 0) {
        *(undefined1 *)(param_1 + 0x47) = 4;
        fn_0040f564(puVar2[0xf],1);
        return;
      }
      iVar8 = fn_0040f628(puVar2[0xf]);
      if (iVar8 != 2) {
        return;
      }
      fn_0040f564(puVar2[0xf],2);
      uVar4 = fn_0022f584(*(undefined4 *)(param_1[0x41] + 0x1c),0);
      fn_00748898(param_1,uVar4);
      (**(code **)(*param_1 + 0x16c))(param_1);
      goto LAB_00593150;
    }
    goto LAB_005931c0;
  case '\x04':
    iVar8 = fn_001296d0(DAT_00898840);
    if (iVar8 == 0) {
      fn_0040f564(puVar2[0xf],1);
      iVar8 = fn_0077f7d0(*(undefined4 *)(puVar2[0xf] + 4),1);
      if (iVar8 == 0) {
        return;
      }
      iVar8 = fn_0040f628(puVar2[0xf]);
      if (iVar8 == 2) {
        fn_0040f564(puVar2[0xf],2);
        *(undefined4 *)(param_1[0x17] + 0x38) = 0x1000950;
        uVar4 = fn_0022f584(*(undefined4 *)(param_1[0x41] + 0x1c),0);
        fn_00748898(param_1,uVar4);
        *(undefined1 *)(param_1 + 0x47) = 6;
                    /* WARNING: Could not recover jumptable at 0x00593270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x16c))(param_1);
        return;
      }
      if (iVar8 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00593220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x17c))(param_1);
        return;
      }
      uVar11 = param_1[0x44];
      uVar7 = param_1[0x3d] - param_1[0x3c] >> 4;
      if (uVar7 <= uVar11) {
        fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,uVar11,uVar7);
      }
      uVar4 = *(undefined4 *)(param_1[0x3c] + uVar11 * 0x10 + 8);
      fn_006899f4(param_1,uVar4,1);
      (**(code **)(*param_1 + 0x144))(param_1,uVar4);
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      fn_00689bd0(param_1,0,0,0);
      *(undefined4 *)(param_1[0x42] + 0x10) = 0xda;
      *(undefined1 *)(param_1 + 0x47) = 8;
      return;
    }
LAB_005931c0:
    uVar1 = 7;
LAB_00593074:
    *(undefined1 *)(param_1 + 0x47) = uVar1;
    return;
  case '\x05':
    if ((char)param_1[0x49] == '\0') {
      iVar8 = fn_0066eb80(DAT_00898840,8);
      if ((*(byte *)(iVar8 + 0x4c) & 4) == 0) {
        return;
      }
      *(undefined1 *)(param_1[0x42] + 8) = 0;
      fn_001296e8(DAT_00898840);
      *(undefined1 *)(param_1 + 0x49) = 1;
      (**(code **)(*param_1 + 0x16c))(param_1);
    }
    iVar8 = param_1[0x48];
    param_1[0x48] = iVar8 + 1;
    if ((0x1d < iVar8 + 1) && (iVar8 = fn_001296d0(DAT_00898840), iVar8 == 0)) {
      if (param_1[0x39] == 0) {
        fn_00689878(param_1,0);
      }
      fn_006899f4(param_1,param_1[0x39],1);
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      fn_00689bd0(param_1,0,0,0);
      goto LAB_005933d4;
    }
    break;
  case '\x06':
    if ((char)param_1[0x49] == '\0') {
      iVar8 = fn_0066eb80(DAT_00898840,8);
      if ((*(byte *)(iVar8 + 0x4c) & 4) == 0) {
        return;
      }
      *(undefined1 *)(param_1[0x42] + 8) = 0;
      fn_001296e8(DAT_00898840);
      *(undefined1 *)(param_1 + 0x49) = 1;
      (**(code **)(*param_1 + 0x16c))(param_1);
      if ((char)param_1[0x49] == '\0') {
        return;
      }
    }
    iVar8 = fn_001296d0(DAT_00898840);
    if (iVar8 == 0) {
      if (param_1[0x39] == 0) {
        fn_00689878(param_1,0);
      }
      fn_006899f4(param_1,param_1[0x39],1);
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
      fn_00689bd0(param_1,0,0,0);
      *(undefined1 *)(param_1 + 0x47) = 8;
      fn_0068ab44(param_1,0x100094b);
      return;
    }
    break;
  case '\a':
    (**(code **)(*param_1 + 0x16c))(param_1);
LAB_005933d4:
    *(undefined1 *)(param_1 + 0x47) = 8;
    return;
  }
  return;
}


