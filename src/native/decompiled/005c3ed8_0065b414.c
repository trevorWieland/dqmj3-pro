#include "005c3ed8_0065b414.h"



void fn_0065b414(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x19c) == -1) {
    if (param_2 == 0) goto LAB_0065b488;
    uVar1 = fn_006f72b4(DAT_008977e0);
    uVar1 = fn_0021ed50(uVar1,2,param_1 + 0x20,0);
  }
  else {
    if (param_2 != 0) goto LAB_0065b488;
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x19c));
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
LAB_0065b488:
  fn_001dbb48(param_1,param_2);
  return;
}



void fn_0065b1f8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a4) == -1) {
    if (param_2 == 0) goto LAB_0065b26c;
    uVar1 = fn_006f72b4(DAT_008977e0);
    uVar1 = fn_0021ed50(uVar1,2,param_1 + 0x20,0);
  }
  else {
    if (param_2 != 0) goto LAB_0065b26c;
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x1a4));
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
LAB_0065b26c:
  fn_001dbb48(param_1,param_2);
  return;
}



undefined4 *
fn_0065924c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  *param_1 = &DAT_00859a18;
  if (param_1 == DAT_008c06e4) {
    DAT_008c06e4 = (undefined4 *)0x0;
    (**(code **)*DAT_008c06e0)();
    DAT_008c06e0 = (undefined4 *)0x0;
  }
  *param_1 = &DAT_00859a08;
  iVar1 = param_1[1];
  if (iVar1 != DAT_008c3634) {
    if (iVar1 != 0) {
      fn_00656f08(iVar1,param_1,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
    }
    param_1[1] = DAT_008c3634;
  }
  return param_1;
}



void fn_005f9a84(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x78);
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 1:
    if ((iVar2 != 0) || (*(undefined **)(param_1 + 0x70) == &DAT_00898f58)) goto LAB_005f9c14;
    uVar3 = *(undefined4 *)(param_1 + 0x68);
LAB_005f9ad8:
    fn_0015b0f8(uVar3);
    break;
  case 2:
    if (iVar2 == 1) {
      fn_0015b0f8(*(undefined4 *)(param_1 + 0x68));
      uVar3 = fn_00268a04(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 100));
      fn_0015b0f8();
      fn_0025ba9c(*(undefined4 *)(DAT_00897804 + 8),uVar3);
    }
    break;
  case 3:
    if (iVar2 == 1) {
      *(undefined2 *)(param_1 + 0x88) = 0x4f1;
      fn_002ea524();
      fn_0015b064();
      fn_0015b0dc();
    }
    break;
  case 4:
    if (iVar2 == 1) {
      *(undefined2 *)(param_1 + 0x88) = 0x4f2;
      fn_002ea524();
      fn_0015b064();
      fn_0015b0dc();
    }
    break;
  case 5:
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x6c);
      goto LAB_005f9ad8;
    }
    iVar2 = fn_00163868(4);
    sVar1 = *(short *)(&DAT_007d47c8 + iVar2 * 2);
    fn_0016a82c((int)sVar1);
    fn_0015b0dc();
    fn_0015b0f8(4);
    fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),(int)sVar1,4);
  }
  if ((*(int *)(param_1 + 0x78) == 0) &&
     (iVar2 = *(int *)(param_1 + 0x7c), (iVar2 == 3 || iVar2 == 4) || iVar2 == 5)) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  }
LAB_005f9c14:
  uVar3 = fn_0022f584(*(undefined4 *)(*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x78) * 4),0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_005d2e9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_68 [68];
  
  uVar8 = 0x100094b;
  iVar9 = *(int *)(&DAT_007c6ff0 + param_2 * 0xc);
  iVar1 = fn_005d34e0(param_1,param_2);
  if (iVar9 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  *(int *)(*(int *)(param_1 + 0xe4) + 8) = param_2;
  puVar7 = (undefined4 *)0x0;
  if (iVar9 == 0x4c) {
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xec) = 1;
      puVar2 = (undefined4 *)fn_001f7510(param_1,0x4c);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_008946d4) {
            puVar7 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      *(undefined1 *)(puVar7 + 2) = 2;
      *(undefined1 *)(puVar7 + 7) = 0;
      iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc));
      fn_00231700(auStack_68,0x20,(int)*(short *)(iVar1 + 0x1c),0);
      uVar4 = fn_0022f750((char *)&DAT_005d32f4);
      uVar5 = fn_00100b58();
      fn_00231d04(auStack_68,0x20,uVar4,uVar5);
      fn_003212cc(puVar7,auStack_68);
      fn_003212bc(puVar7,iVar1 + 4);
      puVar7[0x11] = *(undefined4 *)(param_1 + 0xe8);
      fn_00689bd0(param_1,0x4c,0,1);
      goto LAB_005d31e8;
    }
LAB_005d3088:
    uVar8 = 0x100094d;
  }
  else {
    if (iVar9 == 0x54) {
      if (iVar1 == 0) {
        uVar8 = fn_0022f584((char *)&DAT_005d330c,0);
        puVar7 = (undefined4 *)fn_001f7510(param_1,0x48);
        if (puVar7 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar2 == &DAT_008942d0) goto LAB_005d3134;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
LAB_005d32c0:
        puVar7 = (undefined4 *)0x0;
LAB_005d3134:
        fn_0036c5f4(puVar7,uVar8,1,0,1,1,0,0,1);
        puVar7[0xe] = 0x100094d;
        fn_00689bd0(param_1,0x48,0);
        return;
      }
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0x54);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_008944e4) {
            puVar7 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
    }
    else {
      if (iVar9 != 0x55) {
        if (iVar9 != 0x5a) goto LAB_005d31e8;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)fn_001f74ec(param_1,0x5a);
          if (puVar2 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
            do {
              if (puVar3 == &DAT_00891c90) {
                puVar7 = puVar2;
                break;
              }
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
          }
          puVar7[2] = 0x53;
          puVar7[3] = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc);
          fn_006899f4(param_1,0x5a,0);
          goto LAB_005d31e8;
        }
        goto LAB_005d3088;
      }
      if (iVar1 == 0) {
        iVar1 = fn_00154ac8(0x1b5);
        if ((iVar1 == 0) ||
           (iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                                 *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc)),
           *(short *)(iVar1 + 0x1c) != 0x9d)) {
          iVar9 = *(int *)(*(int *)(param_1 + 0xe4) + 0xc);
          iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
          if ((iVar1 < 2) &&
             (iVar1 = fn_00144df4(*(undefined4 *)(DAT_00897804 + 0xc),0), iVar1 == iVar9)) {
            pcVar6 = (char *)&DAT_005d335c;
          }
          else {
            pcVar6 = (char *)&DAT_005d3384;
          }
        }
        else {
          pcVar6 = (char *)&DAT_005d3334;
        }
        uVar8 = fn_0022f584(pcVar6,0);
        puVar7 = (undefined4 *)fn_001f7510(param_1,0x48);
        if (puVar7 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar2 == &DAT_008942d0) goto LAB_005d3134;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
        goto LAB_005d32c0;
      }
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0x55);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_008944d8) {
            puVar7 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
    }
    puVar7[2] = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc);
    fn_006899f4(param_1,iVar9,0);
  }
LAB_005d31e8:
  fn_0068ab44(param_1,uVar8);
  return;
}



void fn_005c3ed8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_58;
  wchar16 *local_54;
  char *pcStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [4];
  undefined1 local_28;
  undefined1 local_27;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00898f44) goto LAB_005c3f28;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c3f28:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  fn_002c330c(&local_54);
  local_54 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_50 = (char *)&DAT_005c4254;
  iVar3 = fn_00154ac8(0x1de);
  if (iVar3 == 0) {
    local_40 = 2;
  }
  else {
    local_40 = 3;
  }
  local_4c = 10;
  local_48 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8);
  uVar4 = fn_0022f584((char *)&DAT_006e9378,0);
  fn_00147974(auStack_38,uVar4);
  local_28 = 0;
  local_27 = 1;
  uVar4 = fn_0022f750(&DAT_005c4270);
  fn_00147974(auStack_2c,uVar4);
  fn_002c29a0(param_1,&local_54);
  local_58 = 0xffffffff;
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0);
  iVar3 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar3 + 0x81) = 1;
  fn_0031f3f4(iVar3,0);
  iVar3 = fn_006b627c(*(undefined4 *)(DAT_00897804 + 8),0);
  iVar5 = 0;
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  fn_00154ac8(0x1de);
LAB_005c4030:
  if (*(char *)(param_1 + 0xb4) == '\0') goto LAB_005c4074;
  do {
    local_58 = DAT_00898f08;
    fn_002c37e0(param_1,iVar5,&local_58);
LAB_005c4074:
    do {
      uVar4 = fn_0022f584((&DAT_00898f2c)[iVar5],0);
      fn_0031b78c(param_1,iVar5,0,uVar4);
      iVar5 = iVar5 + 1;
      iVar3 = fn_00154ac8(0x1de);
      if (iVar3 == 0) {
        iVar3 = 2;
      }
      else {
        iVar3 = 3;
      }
      if (iVar3 <= iVar5) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (iVar5 == 0) goto LAB_005c4030;
    } while ((iVar5 != 2) ||
            (iVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3b3), 0 < iVar3));
  } while( true );
}


