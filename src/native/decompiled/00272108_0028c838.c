#include "00272108_0028c838.h"



void fn_0028c838(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &DAT_0081e18c;
  puVar1[2] = 0;
  return;
}



void fn_0028b690(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar7 = 0;
  iVar6 = 0;
  iVar1 = fn_006b83e4();
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar6 * 4 + 4);
      if (iVar1 == -0x1194d800) {
        piVar2 = (int *)fn_001c2350(DAT_008977e4);
LAB_0028b6dc:
        if (piVar2 != (int *)0x0) {
          fn_0020bbc4(auStack_40);
          uVar3 = fn_006bff0c(auStack_3c);
          uVar4 = fn_006c01f4(auStack_3c);
          local_30 = fn_006bed98(auStack_3c);
          local_34 = fn_006c09b4(auStack_3c);
          local_38 = fn_006c0114(auStack_3c);
          uVar5 = fn_006c0028(auStack_3c);
          iVar1 = fn_001f88e8(uVar5,local_38,local_34,local_30,uVar4,uVar3);
          iVar7 = iVar7 + iVar1;
        }
      }
      else {
        uVar8 = fn_0077f008(iVar1,*(int *)(param_1 + 4) + 0x2c,500);
        iVar1 = (int)((ulonglong)uVar8 >> 0x20);
        piVar2 = (int *)uVar8;
        if (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
        }
        if (piVar2 != (int *)0x0 && iVar1 != 0) goto LAB_0028b6dc;
      }
      iVar6 = iVar6 + 1;
      iVar1 = fn_006b83e4(param_1);
    } while (iVar6 < iVar1);
  }
  uVar3 = fn_006b83e4(param_1);
  fn_00300f74(iVar7,uVar3);
  return;
}



void fn_002899cc(undefined4 *param_1)

{
  *param_1 = &DAT_0081e12c;
  param_1[1] = 0;
  param_1[2] = &DAT_00859030;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  return;
}



void fn_002894a4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00102908(auStack_88,0x80,(char *)&DAT_002894e4,param_2);
  fn_0016ba34(param_1,DAT_0089824c,auStack_88,0);
  return;
}



void fn_00276c78(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0xc) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
  }
  if (param_3 == 0) {
    *(undefined1 *)(param_2 + 0x11) = 4;
    *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
    uVar1 = 0;
  }
  else if (param_3 == 1) {
    iVar2 = fn_00270fc0(param_1,*(undefined4 *)(param_2 + 4));
    *(char *)(param_2 + 0x11) = (char)iVar2;
    uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),
                         (&PTR_s_reactor_target_target_mon_on_bfl_0089220c)[iVar2],
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    uVar1 = 1;
  }
  else if (param_3 == 2) {
    iVar2 = fn_00270fc0(param_1,*(undefined4 *)(param_2 + 4));
    *(char *)(param_2 + 0x11) = (char)iVar2;
    uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),
                         (&PTR_s_reactor_target_target_mon_loop_b_0089221c)[iVar2],
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    uVar1 = 2;
  }
  else {
    if (param_3 != 3) {
      return;
    }
    iVar2 = fn_00270fc0(param_1,*(undefined4 *)(param_2 + 4));
    *(char *)(param_2 + 0x11) = (char)iVar2;
    uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),
                         (&PTR_s_reactor_target_target_mon_off_bf_0089222c)[iVar2],
                         *(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  return;
}



void fn_00275cd8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = 0;
  do {
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
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
    local_28 = 0;
    local_24 = 0;
    fn_00102908(&local_60,0x20,(char *)&DAT_00275dec,iVar2);
    fn_00102908(&local_40,0x20,(char *)&DAT_00275dfc,iVar2);
    if (param_2 == 0) {
      uVar1 = fn_0026fcd0(param_1,&local_60);
      iVar3 = param_1 + iVar2 * 4;
      fn_00688c04(uVar1,*(undefined4 *)(iVar3 + 0xa8),0);
      uVar1 = fn_0026fcd0(param_1,&local_40);
      fn_00688c04(uVar1,*(undefined4 *)(iVar3 + 0xc0),0);
    }
    else {
      uVar1 = fn_0026fcd0(param_1,&local_60);
      iVar3 = param_1 + iVar2 * 4;
      fn_00688c04(uVar1,*(undefined4 *)(iVar3 + 0xd8),0);
      uVar1 = fn_0026fcd0(param_1,&local_40);
      fn_00688c04(uVar1,*(undefined4 *)(iVar3 + 0xf0),0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}



void fn_00273bc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_0032d718();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_0032d6f4(param_2);
  uVar2 = fn_003c1ba8();
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d10);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1b48();
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d20);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1c08();
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d30);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1ae8();
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d40);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1c68(*(undefined1 *)(iVar1 + 0x1c));
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d50);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1ab0(*(undefined1 *)(iVar1 + 0x1d));
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d60);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_003c1ca0();
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d70);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_00230d70(*(undefined1 *)(iVar1 + 0x1e));
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d80);
  fn_00190d50(uVar3,uVar2);
  uVar2 = fn_00230d70(*(undefined1 *)(iVar1 + 0x1f));
  uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00273d94);
  fn_00190d50(uVar3,uVar2);
  fn_00122c04();
  return;
}



void fn_00272108(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  iVar3 = (**(code **)(*piVar2 + 0x54))(piVar2);
  uVar4 = (**(code **)(*piVar2 + 0x50))(piVar2);
  iVar5 = (**(code **)(*piVar2 + 0x44))(piVar2);
  uVar15 = 0;
  iVar13 = 0;
  do {
    iVar6 = param_1 + iVar13 * 0x10;
    bVar12 = 0;
    pbVar11 = (byte *)(iVar6 + 0x78);
    if (iVar5 + -1 < iVar13) {
      bVar12 = 4;
    }
    if (iVar5 + -1 == iVar13) {
      uVar7 = (**(code **)(*piVar2 + 0x4c))(piVar2);
      if (uVar4 >> 2 < uVar7) {
        if (uVar4 >> 1 < uVar7) {
          if (uVar7 <= (uVar4 >> 2) * 3) {
            bVar12 = 1;
          }
        }
        else {
          bVar12 = 2;
        }
      }
      else {
        bVar12 = 3;
      }
    }
    bVar1 = *pbVar11;
    *pbVar11 = bVar12;
    if (bVar1 != bVar12) {
      fn_00159f34();
      uVar8 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),
                           (&PTR_s_reactor_battery_battery_00_bflan_0089223c)[*pbVar11],
                           *(undefined4 *)(iVar6 + 0x7c));
      *(undefined4 *)(iVar6 + 0x80) = uVar8;
    }
    else {
      fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar6 + 0x80));
      fn_00154a6c();
    }
    if (*(int *)(iVar6 + 0x84) == -1) {
      if (iVar3 != 0) {
        uVar8 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),DAT_00892134,
                             *(undefined4 *)(iVar6 + 0x7c));
LAB_002722e8:
        *(undefined4 *)(iVar6 + 0x84) = uVar8;
      }
    }
    else {
      iVar9 = fn_001088e0(*(undefined4 *)(param_1 + 0xc));
      if (bVar1 != bVar12) {
        uVar14 = *(undefined4 *)(iVar9 + 0x10);
        fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar6 + 0x84));
        uVar8 = fn_001c804c(*(undefined4 *)(param_1 + 0xc),DAT_00892134,
                             *(undefined4 *)(iVar6 + 0x7c));
        *(undefined4 *)(iVar6 + 0x84) = uVar8;
        iVar9 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),uVar8);
        *(undefined4 *)(iVar9 + 0x10) = uVar14;
      }
      iVar10 = fn_00154a6c();
      if (iVar10 != 0) {
        if (iVar3 == 0) {
          fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar6 + 0x84));
          uVar8 = 0xffffffff;
          goto LAB_002722e8;
        }
        *(int *)(iVar9 + 0x10) = (int)uVar15;
      }
    }
    iVar13 = iVar13 + 1;
    if (2 < iVar13) {
      return;
    }
  } while( true );
}


