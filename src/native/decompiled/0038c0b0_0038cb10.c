#include "0038c0b0_0038cb10.h"



undefined * fn_0038cb10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  fn_0017d96c(&local_50,0x28,0x27,(&PTR_s_A_03d_00890690)[param_2],param_3);
  local_28[0] = DAT_00898204;
  local_28[1] = DAT_00898214;
  local_28[3] = DAT_00898214;
  local_18 = DAT_00898214;
  local_14 = DAT_00898214;
  local_10 = DAT_00898214;
  local_28[2] = DAT_00898218;
  uVar1 = fn_0016ba34(DAT_00897800,local_28[param_2],&local_50,0);
  fn_0018a618(&DAT_008c7a1c,0x28,0x27,L"%ls%ls",param_4,uVar1);
  return &DAT_008c7a1c;
}



void fn_0038cad8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ed51c(param_1,param_2,0);
  puVar1[4] = 0;
  *puVar1 = &DAT_0082ac00;
  puVar1[5] = 0;
  return;
}



void fn_0038c8b4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_980 [336];
  int local_830;
  int local_1c0 [7];
  undefined2 local_1a4;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined1 auStack_f0 [32];
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [96];
  int local_48 [5];
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  int local_28;
  
  iVar5 = fn_0066e158(DAT_00898840);
  if (iVar5 != 0) {
    return;
  }
  fn_003ed4ac(param_1);
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4);
  uVar6 = *(undefined4 *)(iVar5 + 8);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 2:
    iVar9 = 0;
    goto LAB_0038c48c;
  case 3:
    iVar9 = 1;
LAB_0038c48c:
    local_28 = iVar9;
    local_2c = uVar6;
    iStack_30 = iVar5;
    iStack_34 = param_1;
    if (iVar9 == 0) {
      local_48[0] = 4;
      local_48[1] = 0x85;
      local_48[2] = 0x106;
      local_48[3] = 0x187;
      iVar11 = local_48[*(int *)(param_1 + 0x10)] + *(int *)(param_1 + 0x14);
      iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else {
      local_48[0] = 0x208;
      local_48[1] = 0x289;
      local_48[2] = 0x30a;
      local_48[3] = 0x38b;
      iVar11 = local_48[*(int *)(param_1 + 0x10)] + *(int *)(param_1 + 0x14);
      iVar2 = fn_0028b348(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    if (iVar2 == 0) {
      local_1c0[0] = 0;
      local_1a4 = 0;
    }
    else {
      fn_0017821c(local_1c0,iVar2,0xf0);
    }
    local_d0 = *(undefined4 *)(param_1 + 0x10);
    iVar2 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
    if ((iVar2 == 0) || (local_1c0[0] != iVar2)) {
      local_cc = 0;
    }
    else {
      local_cc = 1;
    }
    fn_0044409c(auStack_c8);
    fn_004440a4(auStack_c8,local_1c0,param_1 + 0x14);
    fn_003dcea4(local_2c,auStack_c8,iVar11);
    iVar5 = fn_00443e84(iVar5,iVar11);
    if (iVar5 != 0) {
      iVar5 = 0;
      do {
        while( true ) {
          iVar2 = fn_002043cc(DAT_00897840,iVar5);
          iVar11 = *(int *)(iVar2 + 8);
          piVar7 = (int *)fn_0013d4ec();
          if (*piVar7 != iVar11) break;
          iVar5 = (int)(char)((char)iVar5 + '\x01');
          if (7 < iVar5) goto LAB_0038c68c;
        }
        iVar8 = 0;
        iVar10 = param_1 + iVar5 * 0xf8;
        do {
          iVar1 = fn_0066e28c(DAT_00898840,iVar8,1);
          if ((iVar1 == iVar11) && (iVar1 = fn_006cb150(local_2c,iVar8), iVar1 == 3)) {
            uVar6 = fn_006cb20c(local_2c,iVar8);
            fn_006ce7f8(uVar6,iVar10 + 0xaa0,param_1 + 0x14);
            if (1 < *(int *)(param_1 + 0x14)) {
              if (iVar9 == 0) {
                fn_002fa370(iVar2,iVar10 + 0xaa0);
              }
              else {
                fn_002fa3c8();
              }
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 8);
        iVar5 = (int)(char)((char)iVar5 + '\x01');
      } while (iVar5 < 8);
LAB_0038c68c:
      iVar5 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar5;
      if (1 < iVar5) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      if (*(int *)(param_1 + 0x10) == 4) {
        if (iVar9 == 0) {
          uVar6 = 3;
          *(undefined4 *)(param_1 + 4) = 3;
        }
        else {
          uVar6 = 4;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (iVar9 != 0) {
          *(undefined4 *)(param_1 + 4) = uVar6;
        }
      }
    }
    return;
  case 4:
    fn_006f94bc(&local_f8);
    fn_0017821c(auStack_f0,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),0xcc);
    local_f8 = (undefined1)local_2c;
    local_f7 = ((unsigned int)(local_2c) >> 8) & 0xff;
    local_f6 = ((unsigned int)(local_2c) >> 16) & 0xff;
    local_f5 = ((unsigned int)(local_2c) >> 24) & 0xff;
    local_f4 = (undefined1)local_28;
    fn_003dce58(uVar6,&local_f8,0x40c);
    iVar5 = fn_00443e84(iVar5,0x40c);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = 0;
    do {
      while( true ) {
        iVar9 = fn_002043cc(DAT_00897840,iVar5);
        iVar2 = *(int *)(iVar9 + 8);
        piVar7 = (int *)fn_0013d4ec();
        if (*piVar7 != iVar2) break;
        iVar5 = (int)(char)((char)iVar5 + '\x01');
        if (7 < iVar5) goto LAB_0038ca74;
      }
      iVar11 = 0;
      do {
        iVar8 = fn_0066e28c(DAT_00898840,iVar11,1);
        if ((iVar8 == iVar2) && (iVar8 = fn_006cb150(uVar6,iVar2), iVar8 == 6)) {
          uVar3 = fn_006cb1e4(uVar6,iVar2);
          fn_00176fa8(iVar9,uVar3);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < 8);
LAB_0038ca74:
    uVar6 = 5;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x14) = 0;
    fn_00301f50(param_1 + 0x18,0xa88);
    fn_00290734(param_1 + 0x1c);
    uVar6 = 6;
    break;
  case 6:
    iVar9 = *(int *)(param_1 + 0x14) + 0x40d;
    fn_00443f74(auStack_a8,param_1 + 0x18,param_1 + 0x14);
    fn_003dcd14(uVar6,auStack_a8,iVar9);
    iVar9 = fn_00443e84(iVar5,iVar9);
    if (iVar9 != 0) {
      iVar9 = 0;
      do {
        iVar2 = fn_006ce63c(iVar5,iVar9);
        if (((iVar2 != 0) && (iVar2 = fn_006cb150(uVar6,iVar9), iVar2 == 5)) &&
           (iVar2 = fn_00204414(DAT_00897840,iVar9), iVar2 != 0)) {
          uVar3 = fn_006cb1bc(uVar6,iVar9);
          iVar11 = param_1 + iVar9 * 0xa88;
          fn_006ce670(uVar3,iVar11 + 0x1260,param_1 + 0x14);
          if (1 < *(int *)(param_1 + 0x14)) {
            fn_002fa42c(iVar2,iVar11 + 0x1264);
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 8);
      iVar5 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar5;
      if (0x15 < iVar5) {
        iVar5 = 0;
        do {
          iVar9 = fn_002043cc(DAT_00897840,iVar5);
          if (((iVar9 != 0) && (*(char *)(iVar9 + 0x10) == '\x01')) &&
             (fn_0017821c(auStack_980,iVar9 + 0x7a8,0x8d8), local_830 == 0)) {
            *(undefined1 *)(iVar9 + 0x10) = 2;
            puVar4 = (undefined4 *)fn_0013d4ec();
            *(undefined4 *)(iVar9 + 8) = *puVar4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        *(undefined4 *)(param_1 + 4) = 999;
      }
    }
    return;
  default:
    goto switchD_0038c900_default;
  }
  *(undefined4 *)(param_1 + 4) = uVar6;
switchD_0038c900_default:
  return;
}



void fn_0038c408(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_003ed3ac();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_00301f50(param_1 + 0xaa0,0x7c0);
  fn_00301f50(param_1 + 0x1260,0x5440);
  iVar2 = 0;
  do {
    uVar1 = fn_002043cc(DAT_00897840,iVar2);
    fn_002fa40c();
    fn_002fa490(uVar1);
    fn_002fa47c(uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}



void fn_0038c3bc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x4a];
  *param_1 = &DAT_0082aa78;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    param_1[0x4a] = 0;
  }
  fn_00593528(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0038c0b0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 unaff_r4;
  undefined4 *puVar7;
  
  iVar1 = fn_00145b00(0x130,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_005934d4(iVar1,param_1,(char *)&DAT_0038c3a0,0xdc,1,unaff_r4);
  *puVar2 = &DAT_0082aa78;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  puVar7 = (undefined4 *)puVar2[1];
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_0038c2bc;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0038c2bc:
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0xfe);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892cf0) goto LAB_0038c304;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0038c304:
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)fn_005ce1f4(iVar1,puVar7,puVar3);
  }
  piVar5 = (int *)puVar2[0x4a];
  if (piVar5 != piVar6) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    puVar2[0x4a] = piVar6;
  }
  puVar7 = (undefined4 *)fn_001f74d8(puVar2,0xfe);
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_00892cf0) goto LAB_0038c394;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0038c394:
  puVar2[0x4b] = puVar7;
  return puVar2;
}


