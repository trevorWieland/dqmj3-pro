#include "0040311c_00404020.h"



undefined4 * fn_00404020(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003cfe94();
  *puVar1 = &DAT_008378c4;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined2 *)(puVar1 + 0x14) = 0;
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x0038d7f4) */

undefined4 fn_00404014(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
  while( true ) {
    if (*(int **)(*(int *)(param_1 + 4) + 0x1c) == piVar1) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x24) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(*piVar1 + 0x14) + 0xa4);
}



void fn_00403adc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0 [6];
  undefined1 auStack_c8 [88];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  (**(code **)(**(int **)(param_1 + 0x68) + 0xc))();
  if (*(char *)(DAT_00898840 + 0x4d) == '\0') {
    iVar9 = *(int *)(param_1 + 0x7c);
    if (*(char *)(iVar9 + 8) != '\0') {
      iVar9 = fn_00204610(DAT_00897840);
      if (iVar9 != 0) {
        fn_00101a1c(local_e0,fn_0067408c,0xc,8);
        iVar9 = fn_0066e728(DAT_00898840,local_e0,0x60);
        piVar6 = (int *)fn_0013d4ec();
        if (*piVar6 != local_e0[0] && iVar9 != 0) {
          iVar9 = 0;
          iVar10 = 0;
          do {
            iVar3 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
            iVar4 = fn_002043cc(DAT_00897840,iVar9);
            iVar11 = local_e0[iVar10 * 3];
            iVar7 = fn_0066e510(DAT_00897850,iVar11);
            if ((iVar7 == 0) && (iVar7 = fn_0066e530(DAT_00897850), iVar7 != iVar11)) {
              *(undefined1 *)(iVar4 + 0x10) = 0;
              fn_00147974(iVar4 + 0xc,&LAB_00403aa8);
              puVar8 = (undefined4 *)fn_0013d4ec();
              uVar2 = *puVar8;
              *(int *)(iVar4 + 4) = iVar10;
              *(undefined4 *)(iVar4 + 8) = uVar2;
            }
            else {
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
              local_48 = 0;
              local_44 = 0;
              local_40 = 0;
              local_3c = 0;
              local_38 = 0;
              local_34 = 0;
              fn_0066e368(DAT_00897850,iVar11,&local_70);
              uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
              fn_00190d50(uVar2,&local_70);
              *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
              *(undefined1 *)(iVar4 + 0x10) = 1;
              fn_00147974(iVar4 + 0xc,&local_70);
              iVar9 = iVar9 + 1;
              *(int *)(iVar4 + 4) = iVar10;
              *(int *)(iVar4 + 8) = iVar11;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 8);
          for (; iVar9 < 8; iVar9 = iVar9 + 1) {
            iVar10 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
            *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
          }
        }
        uVar2 = fn_0066e3bc(DAT_00897850);
        *(undefined4 *)(param_1 + 0x74) = uVar2;
      }
      return;
    }
    if (*(char *)(iVar9 + 9) == '\0') {
      if ((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(iVar9 + 10) != '\0')) {
        iVar9 = 0;
        iVar10 = 0;
        *(undefined1 *)(param_1 + 0x78) = 1;
        do {
          iVar3 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
          iVar4 = fn_0066e3bc(DAT_00897850);
          if (iVar9 < iVar4) {
            iVar4 = fn_006e82bc(*(undefined4 *)(param_1 + 0x7c),iVar10);
            iVar7 = fn_0066e510(DAT_00897850,iVar4);
            if ((iVar7 != 0) || (iVar7 = fn_0066e530(DAT_00897850), iVar7 == iVar4)) {
              fn_0066e368(DAT_00897850,iVar4,&local_60);
              uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
              fn_00190d50(uVar2,&local_60);
              iVar9 = iVar9 + 1;
              *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 8);
        for (; iVar9 < 8; iVar9 = iVar9 + 1) {
          iVar10 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
          *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
        }
      }
      return;
    }
  }
  else {
    if ((*(char *)(*(int *)(param_1 + 0x7c) + 8) != '\0') &&
       (iVar9 = fn_0066e3bc(DAT_00897850), iVar9 != *(int *)(param_1 + 0x74))) {
      fn_004034e0(param_1);
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0x7c) + 9) == '\0') {
      return;
    }
  }
  iVar9 = fn_00204610(DAT_00897840);
  if (iVar9 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 9) = 0;
    uVar2 = fn_0066eb80(DAT_00898840,0xb);
    fn_00101a1c(auStack_c8,fn_0067408c,0xc,8);
    fn_00674f6c(uVar2,auStack_c8,8);
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar3 = fn_002043cc(DAT_00897840,iVar9);
      iVar4 = fn_0066e510(DAT_00898840,*(undefined4 *)(iVar3 + 8));
      if (iVar4 != 0) {
        *(int *)(iVar3 + 4) = iVar9;
        iVar4 = *(int *)(iVar3 + 8);
        *(int *)(iVar3 + 0x14) = iVar10 % 6 + 1;
        cVar1 = fn_0066e530(DAT_00897850,iVar10 * 0x2aaaaaab);
        if (cVar1 == iVar4) {
          *(char *)(DAT_00897840 + 4) = (char)iVar9;
        }
        iVar9 = iVar9 + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    iVar10 = 0;
    uVar2 = *(undefined4 *)(DAT_00897840 + 0x28);
    iVar9 = *(int *)(param_1 + 0x74);
    if (iVar9 < 8) {
      iVar3 = 0;
      do {
        iVar4 = fn_002043cc(DAT_00897840,iVar9);
        uVar5 = fn_00338380(uVar2,iVar10 % 6);
        *(undefined4 *)(iVar4 + 0x14) = uVar5;
        local_108 = iVar3;
        local_104 = iVar3;
        local_100 = iVar3;
        local_fc = iVar3;
        local_f8 = iVar3;
        local_f4 = iVar3;
        local_f0 = iVar3;
        local_ec = iVar3;
        local_e8 = iVar3;
        local_e4 = iVar3;
        local_e0[0] = iVar3;
        local_e0[1] = iVar3;
        local_e0[2] = iVar3;
        local_e0[3] = iVar3;
        local_e0[4] = iVar3;
        local_e0[5] = iVar3;
        uVar5 = fn_006885e4(uVar5);
        fn_00101a50(&local_108,0x20,&LAB_00403484,uVar5);
        fn_00147974(iVar4 + 0xc,&local_108);
        *(int *)(iVar4 + 4) = iVar9;
        *(undefined1 *)(iVar4 + 0x10) = 2;
        iVar10 = iVar10 + 1;
        iVar4 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
        local_68 = iVar3;
        local_64 = iVar3;
        local_60 = iVar3;
        local_5c = iVar3;
        local_58 = iVar3;
        local_54 = iVar3;
        local_50 = iVar3;
        local_4c = iVar3;
        local_48 = iVar3;
        local_44 = iVar3;
        local_40 = iVar3;
        local_3c = iVar3;
        local_38 = iVar3;
        local_34 = iVar3;
        local_30 = iVar3;
        local_2c = iVar3;
        fn_00338380(uVar2,iVar9 - *(int *)(param_1 + 0x74));
        uVar5 = fn_006885e4();
        fn_00101a50(&local_68,0x20,&LAB_00403484,uVar5);
        uVar5 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar9]);
        fn_00190d50(uVar5,&local_68);
        iVar9 = iVar9 + 1;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
      } while (iVar9 < 8);
    }
  }
  return;
}



undefined4 fn_004037f4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  iVar1 = fn_001481c8(uVar2,DAT_00892cf4,&DAT_00403898,1,1);
  param_1[0x1b] = iVar1;
  iVar1 = fn_001480d0(uVar2,iVar1,DAT_00892cf8,&DAT_004038a0,0,1,0);
  param_1[0x1c] = iVar1;
  iVar1 = fn_00178f9c(uVar2,iVar1);
  param_1[0x19] = iVar1;
  iVar1 = fn_0017dd54(iVar1,&DAT_004038a4,1);
  param_1[0x1a] = iVar1;
  fn_00190e00();
  fn_004034e0(param_1);
  return 1;
}



void fn_004034e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_c8 [24];
  undefined1 auStack_68 [64];
  int local_28;
  
  iVar1 = fn_00204610(DAT_00897840);
  if (iVar1 != 0) {
    iVar1 = 0;
    uVar2 = fn_0066eb80(DAT_00898840,0xb);
    fn_00101a1c(local_c8,fn_0067408c,0xc,8);
    fn_00674f6c(uVar2,local_c8,8);
    iVar6 = 0;
    do {
      local_28 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar1]);
      iVar3 = fn_002043cc(DAT_00897840,iVar1);
      iVar4 = fn_0066e3bc(DAT_00897850);
      if (iVar1 < iVar4) {
        iVar7 = local_c8[iVar6 * 3];
        iVar4 = fn_0066e510(DAT_00897850,iVar7);
        if ((iVar4 == 0) && (iVar4 = fn_0066e530(DAT_00897850), iVar4 != iVar7)) {
          *(undefined1 *)(iVar3 + 0x10) = 0;
          fn_00147974(iVar3 + 0xc,&DAT_00403694);
          puVar5 = (undefined4 *)fn_0013d4ec();
          *(undefined4 *)(iVar3 + 8) = *puVar5;
        }
        else {
          fn_0066e368(DAT_00897850,iVar7,auStack_68);
          uVar2 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar1]);
          fn_00190d50(uVar2,auStack_68);
          *(byte *)(local_28 + 0x44) = *(byte *)(local_28 + 0x44) & 0xfe | 1;
          *(undefined1 *)(iVar3 + 0x10) = 1;
          fn_00147974(iVar3 + 0xc,auStack_68);
          iVar1 = iVar1 + 1;
          *(int *)(iVar3 + 8) = iVar7;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    for (; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_00892d08)[iVar1]);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    }
    uVar2 = fn_0066e3bc(DAT_00897850);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
  }
  return;
}



void fn_0040311c(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_0016561c(uVar2,(int)*(char *)(param_1 + 4));
    if (*(int *)(param_1 + 0x10) < iVar3) {
      iVar3 = fn_00145b00(0x18,&DAT_00812c8c);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = fn_0015c90c(iVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),1);
      }
      uVar4 = fn_00182994(DAT_008977e4);
      uVar2 = fn_0015a130(uVar4,uVar2);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 9) = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return;
    }
    uVar1 = 2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\x01') {
      return;
    }
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_00154b54(uVar2,*(undefined4 *)(param_1 + 0xc));
    if (iVar3 == 0) {
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 9);
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}


