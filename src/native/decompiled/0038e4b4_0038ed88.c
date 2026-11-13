#include "0038e4b4_0038ed88.h"



void fn_0038ed88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar1 = fn_006b5db4(*(undefined4 *)(param_1 + 0x30),iVar3), iVar1 == 0) {
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      return;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc),0,iVar3);
  iVar1 = 0;
  do {
    fn_0031e04c(*(undefined4 *)(param_1 + 0x1c),iVar1,0);
    iVar2 = iVar1;
    while( true ) {
      iVar1 = iVar2 + 1;
      if (6 < iVar1) {
        fn_0031e04c(*(undefined4 *)(param_1 + 0x1c),iVar3,1);
        return;
      }
      if (iVar1 < 2) break;
      fn_0031df20(*(undefined4 *)(param_1 + 0x1c),iVar2 + -1,0);
      iVar2 = iVar1;
    }
  } while( true );
}



void fn_0038ece8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = *(int **)(param_1 + 0x1c);
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0038ed68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2,0);
    return;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4) + param_2 * 4);
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2,iVar4);
  iVar2 = -1;
  if ((iVar4 != 0) && (iVar2 = fn_0028b860(*(undefined4 *)(DAT_00897804 + 0xc),iVar4), iVar2 == 2))
  {
    iVar2 = -1;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 * 4 + 0x14);
  iVar1 = fn_00230a84(iVar2,0);
  bVar3 = *(byte *)(*(int *)(iVar4 + 0x18) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar4 + 0x18) + 0x44) = iVar1 != 0 | bVar3;
  if (iVar1 != 0) {
    fn_00190d50(*(undefined4 *)(iVar4 + 0x18),iVar1,iVar1,bVar3,unaff_r4,unaff_r5,unaff_r6,in_lr);
  }
  *(char *)(iVar4 + 0x20) = (char)iVar2;
  return;
}



void fn_0038ec2c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x10);
    if (param_2 < (uint)((*(int *)(*(int *)(param_1 + 0x30) + 0x14) - iVar1) / 0x104)) {
      iVar1 = iVar1 + param_2 * 0x104;
      fn_0038ee98(param_1,param_2,iVar1 + 0x10,(int)*(char *)(iVar1 + 0x101));
      return;
    }
  }
  fn_0039452c(*(undefined4 *)(param_1 + 0x1c),param_2,1);
  fn_00394550(*(undefined4 *)(param_1 + 0x1c),param_2,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),param_2,0);
  fn_002cb420(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  fn_002cbcb8(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  return;
}



void fn_0038ebe8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  *(undefined4 *)(param_1[3] + 0xe4) = uVar1;
  fn_002cb154(param_1);
  return;
}



void fn_0038ea30(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0082ad98;
  if ((*(char *)(param_1 + 2) == '\x01') && (iVar1 = fn_0066e158(DAT_00898840), iVar1 == 0)) {
    while (iVar1 = (**(code **)(*(int *)param_1[1] + 0x14))(), iVar1 != 0) {
      fn_0012d6a4(10000000,0);
      fn_005f6270(param_1[1]);
      fn_00119854(DAT_00898840);
    }
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0038e974(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_0082ad98;
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_005f62c0();
    puVar2[8] = &DAT_00859420;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar2 + 0x10);
    puVar2 = (undefined4 *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexRankingDownloadList_008c7047);
    *puVar2 = &DAT_0085a48c;
    fn_0067a1f0(puVar2);
  }
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[3] = 0;
  return param_1;
}



void fn_0038e594(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined4 local_558;
  uint local_554;
  uint local_550;
  uint local_54c;
  uint local_548;
  uint local_544;
  uint local_540;
  uint local_53c;
  uint local_538;
  uint local_534;
  uint local_530;
  uint local_52c;
  uint local_528;
  uint local_524;
  uint local_520;
  uint local_51c;
  undefined4 local_518;
  undefined1 auStack_514 [255];
  undefined1 local_415;
  uint local_410 [241];
  uint local_4c [2];
  uint *local_44;
  uint *local_3c;
  uint local_38 [4];
  
  if (*(char *)(param_1 + 8) == '\x01') {
    fn_005f6270(*(undefined4 *)(param_1 + 4));
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    if ((iVar1 == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x44) == 0)) {
      uVar2 = fn_0067a1d0();
      local_4c[0] = uVar2;
      if (*(char *)(param_1 + 9) == '\0') {
        fn_00101a1c(local_410,&LAB_0020c1dc,0x20,0x1e);
        uVar2 = local_4c[0];
        if (0 < (int)local_4c[0]) {
          fn_00301f50(&local_538,0x128);
          fn_00124be8(&local_520);
          puVar4 = &local_548;
          if (0x1f < uVar2) {
            puVar4 = &local_558;
          }
          local_558 = uVar2;
          local_548 = 0x20;
          uVar10 = *puVar4;
          puVar3 = (uint *)fn_00100fc6(uVar10 * 0x128,0);
          puVar4 = puVar3;
          for (uVar2 = local_558; uVar2 != 0; uVar2 = uVar2 - 1) {
            if (puVar4 != (uint *)0x0) {
              *puVar4 = local_538;
              puVar4[1] = local_534;
              *(undefined2 *)(puVar4 + 2) = (undefined2)local_530;
              puVar4[4] = local_528;
              puVar4[5] = local_524;
              iVar1 = fn_004b9b4c(puVar4 + 6,&local_520);
              *(undefined4 *)(iVar1 + 8) = local_518;
              fn_0017821c(iVar1 + 0xc,auStack_514,0xff);
              *(undefined1 *)(iVar1 + 0x10b) = local_415;
            }
            puVar4 = puVar4 + 0x4a;
          }
          local_44 = puVar3 + uVar10 * 0x4a;
          local_3c = puVar3 + local_558 * 0x4a;
          fn_0067a1a8(*(undefined4 *)(param_1 + 4),puVar3);
          local_38[0] = 0x1e;
          iVar1 = 0;
          if ((int)local_4c[0] < 0x1f) {
            puVar4 = local_4c;
          }
          else {
            puVar4 = local_38;
          }
          uVar2 = *puVar4;
          if (0 < (int)uVar2) {
            do {
              puVar4 = puVar3 + iVar1 * 0x4a;
              local_554 = 0;
              local_550 = 0;
              local_54c = 0;
              local_548 = 0;
              local_544 = 0;
              local_540 = 0;
              local_53c = 0;
              local_558 = CONCAT22(*(undefined2 *)((int)puVar4 + 0x6e),(short)*puVar4);
              fn_001003e0(&local_554,puVar4 + 0x1c);
              local_53c = puVar4[1];
              iVar8 = iVar1 + 1;
              local_410[iVar1 * 8 + 7] = local_53c;
              local_410[iVar1 * 8] = local_558;
              local_410[iVar1 * 8 + 1] = local_554;
              local_410[iVar1 * 8 + 2] = local_550;
              local_410[iVar1 * 8 + 3] = local_54c;
              local_410[iVar1 * 8 + 4] = local_548;
              local_410[iVar1 * 8 + 5] = local_544;
              local_410[iVar1 * 8 + 6] = local_540;
              iVar1 = iVar8;
            } while (iVar8 < (int)uVar2);
          }
          puVar4 = puVar3;
          if (local_3c < puVar3) {
            do {
              puVar4 = puVar4 + 0x4a;
            } while (puVar4 != local_3c);
          }
          iVar1 = (int)((longlong)((int)local_44 - (int)puVar3) * -0x22983759 +
                        ((ulonglong)(uint)((int)local_44 - (int)puVar3) << 0x20) >> 0x20);
          fn_001008c4(puVar3,(iVar1 >> 8) - (iVar1 >> 0x1f),0);
        }
        uVar7 = *(undefined4 *)(param_1 + 0xc);
        uVar6 = fn_0023c2a8();
        fn_002a335c(uVar6,uVar7,local_410);
      }
      else if (*(char *)(param_1 + 9) == '\x01') {
        local_538 = 0;
        local_534 = 0;
        local_530 = 0;
        local_52c = 0;
        local_528 = 0;
        local_524 = 0;
        local_520 = 0;
        local_51c = 0;
        if (0 < (int)uVar2) {
          iVar1 = fn_002fecec(uVar2 * 0x128);
          fn_00101a1c(iVar1,&LAB_0066e074,0x128,uVar2);
          fn_0067a1a8(*(undefined4 *)(param_1 + 4),iVar1);
          iVar8 = 0;
          if (0 < (int)local_4c[0]) {
            do {
              iVar5 = fn_006f5dec(DAT_00898840);
              if (iVar5 == *(int *)(iVar1 + iVar8 * 0x128 + 0x20)) {
                puVar9 = (undefined2 *)(iVar1 + iVar8 * 0x128);
                local_554 = 0;
                local_550 = 0;
                local_54c = 0;
                local_548 = 0;
                local_544 = 0;
                local_540 = 0;
                local_53c = 0;
                local_558 = CONCAT22(puVar9[0x37],*puVar9);
                fn_001003e0(&local_554,puVar9 + 0x38);
                local_53c = *(uint *)(puVar9 + 2);
                local_538 = local_558;
                local_534 = local_554;
                local_530 = local_550;
                local_52c = local_54c;
                local_528 = local_548;
                local_524 = local_544;
                local_520 = local_540;
                local_51c = local_53c;
                break;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)local_4c[0]);
          }
          fn_0030233c(iVar1);
        }
        uVar7 = *(undefined4 *)(param_1 + 0xc);
        uVar6 = fn_0023c2a8();
        fn_002a346c(uVar6,uVar7,&local_538);
      }
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return;
}



void fn_0038e520(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 8) == '\x01') && (iVar1 = fn_0066e158(DAT_00898840), iVar1 == 0)) {
    while (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x14))(), iVar1 != 0) {
      fn_0012d6a4(10000000,0);
      fn_005f6270(*(undefined4 *)(param_1 + 4));
      fn_00119854(DAT_00898840);
    }
  }
  return;
}



void fn_0038e4b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0023c2a8();
  iVar2 = fn_006b8c0c(uVar1,param_2);
  if (iVar2 == 0) {
    iVar2 = fn_0023c2a8(0);
    uVar1 = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = fn_006f5e30(uVar1);
    if (iVar2 != 0) {
      fn_00673354(uVar1);
      fn_0067a104(*(undefined4 *)(param_1 + 4),1,param_2,2);
      *(undefined4 *)(param_1 + 0xc) = param_2;
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  return;
}


