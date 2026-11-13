#include "005dc028_005dc88c.h"



void fn_005dc88c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_005fc714();
  if (*(int *)(param_1 + 0x104) == 0xd) {
    fn_007492a8(param_1);
    fn_002d6808(*(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10));
    uVar2 = 0xe;
  }
  else {
    if (*(int *)(param_1 + 0x104) != 0xf) goto LAB_005dc8d4;
    fn_005f6270(*(undefined4 *)(param_1 + 0x174));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x174) + 0x14))();
    if (iVar1 != 0) goto LAB_005dc8d4;
    if (*(int *)(*(int *)(param_1 + 0x174) + 0x44) != 0) {
      *(undefined4 *)(param_1 + 0x104) = 0x10;
      goto LAB_005dc8d4;
    }
    if (*(int *)(*(int *)(param_1 + 0x174) + 0xac) == 0) {
      fn_00749130(param_1,DAT_00898214,(char *)&DAT_005dc9a8,0,1,1,0);
      *(undefined4 *)(param_1 + 0x104) = 0x10;
      goto LAB_005dc8d4;
    }
    uVar2 = 7;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar2;
LAB_005dc8d4:
  iVar1 = fn_006896fc(param_1,0xe7);
  if (iVar1 != 0) {
    iVar1 = fn_007622a4(param_1);
    if (iVar1 == 0) {
      iVar1 = fn_00762308(param_1);
      if (iVar1 != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x16c) + 0x18) = 2;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x16c) + 0x18) = 1;
    }
  }
  return;
}



undefined4 * fn_005dc85c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = fn_00145b00(0x178,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_005fc914(iVar1,param_1,(char *)&DAT_005dce28,0xf7,unaff_r4);
  *puVar2 = &DAT_0084d604;
  *(undefined1 *)((int)puVar2 + 0x14f) = 0;
  *(undefined1 *)(puVar2 + 0x54) = 0;
  puVar2[0x55] = 0;
  *(undefined1 *)(puVar2 + 0x56) = 0;
  puVar2[0x57] = 0;
  *(undefined1 *)(puVar2 + 0x58) = 0;
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_005f62c0();
    puVar6[8] = &DAT_00859420;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *puVar6 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar6 + 0x10);
    puVar6 = (undefined4 *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexRankingDownloadStats_008c707e);
    *puVar6 = &DAT_0085a4f8;
    fn_0067a718(puVar6);
  }
  puVar2[0x59] = puVar6;
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_005f62c0();
    puVar6[9] = 0;
    puVar6[8] = &DAT_00859420;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    *puVar6 = &DAT_00859b38;
    puVar6[0xd] = 0;
    iVar1 = fn_00119b40(puVar6 + 0x10);
    puVar6 = (undefined4 *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexRankingDownloadList_008c7047);
    *puVar6 = &DAT_0085a48c;
    fn_0067a1f0(puVar6);
  }
  puVar2[0x5b] = 0;
  puVar2[0x5a] = puVar6;
  puVar2[0x5c] = 0;
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_005f62c0();
    puVar6[8] = &DAT_00859420;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *puVar6 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar6 + 0x10);
    puVar6 = (undefined4 *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexGatheringFindById_008c6f5a);
    piVar5 = (int *)(iVar1 + 0x58);
    *puVar6 = &DAT_0085a240;
    *piVar5 = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    piVar3 = (int *)fn_0015ece0(0xc);
    iVar4 = fn_0015ece0(0x78);
    piVar3[2] = iVar4;
    *piVar3 = *piVar5;
    piVar3[1] = 1;
    *piVar5 = (int)piVar3;
    iVar4 = piVar3[2];
    *(int *)(iVar1 + 0x60) = iVar4;
    *(int *)(iVar1 + 100) = iVar4 + 0x78;
    *(int *)(iVar1 + 0x68) = iVar4;
    *(int *)(iVar1 + 0x60) = iVar4 + 0x78;
    *(int *)iVar4 = iVar4;
    *(int *)(*(int *)(iVar1 + 0x68) + 4) = *(int *)(iVar1 + 0x68);
    *puVar6 = &DAT_0085a26c;
    fn_00679240(puVar6);
  }
  puVar2[0x5d] = puVar6;
  *(undefined1 *)((int)puVar2 + 0x14f) = 0;
  *(undefined1 *)(puVar2 + 0x54) = 0;
  puVar2[0x55] = 0;
  *(undefined1 *)(puVar2 + 0x56) = 0;
  puVar2[0x57] = 0;
  *(undefined1 *)(puVar2 + 0x58) = 0;
  return puVar2;
}



void fn_005dc774(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005dc81c,0,1,0,0);
  iVar1 = fn_006c41e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x120) + 0x3c) + 8));
  if (iVar1 == 2) {
    fn_0068993c(param_1,0xe7,0x3a,0,0);
  }
  else {
    fn_0068993c(param_1,0xe7,0x39,0,0);
  }
  *(undefined4 *)(param_1 + 0x104) = 3;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005dc710(undefined4 param_1)

{
  fn_005fc5c8();
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005dc754,1,1,1,0);
  return;
}



void fn_005dc594(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_s0;
  undefined4 uVar6;
  undefined4 in_s1;
  
  uVar5 = 0;
  if ((*(char *)(param_1 + 0x150) == '\0') && (*(int *)(param_1 + 0x164) != 0)) {
    fn_005f6270();
    iVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x14))();
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x164) + 0x44) == 0) {
        fn_006f5f30(*(int *)(param_1 + 0x164),2);
        uVar6 = VectorFloatToUnsigned(CONCAT44(in_s1,in_s0),3);
        *(undefined1 *)(param_1 + 0x150) = 1;
        *(undefined4 *)(param_1 + 0x154) = uVar6;
      }
    }
  }
  if ((*(char *)(param_1 + 0x158) == '\0') && (*(int *)(param_1 + 0x168) != 0)) {
    fn_005f6270();
    iVar1 = (**(code **)(**(int **)(param_1 + 0x168) + 0x14))();
    if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x168), *(int *)(iVar1 + 0x44) == 0)) {
      if ((iVar1 != 0) && (iVar2 = fn_0067a1d0(iVar1), 0 < iVar2)) {
        iVar3 = fn_002fecec(iVar2 * 0x128);
        fn_00101a1c(iVar3,&LAB_0066e074,0x128,iVar2);
        fn_0067a1a8(iVar1,iVar3);
        iVar1 = 0;
        do {
          iVar4 = fn_006f5dec(DAT_00898840);
          if (iVar4 == *(int *)(iVar3 + iVar1 * 0x128 + 0x20)) {
            uVar5 = *(undefined4 *)(iVar3 + iVar1 * 0x128 + 4);
            fn_0030233c(iVar3);
            goto LAB_005dc6ec;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar2);
        fn_0030233c(iVar3);
      }
LAB_005dc6ec:
      *(undefined4 *)(param_1 + 0x15c) = uVar5;
      *(undefined1 *)(param_1 + 0x158) = 1;
    }
  }
  return;
}



void fn_005dc4bc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x144);
  if (iVar1 == 4 || iVar1 == 5) {
    *(undefined4 *)(param_1 + 0x144) = 5;
  }
  else if ((iVar1 != 1 && iVar1 != 2) && iVar1 != 3) {
    *param_2 = 6;
    *(undefined2 *)(param_2 + 1) = 2;
    *(undefined1 *)((int)param_2 + 6) = 5;
    iVar1 = fn_0023c2a8();
    param_2[2] = *(undefined4 *)(iVar1 + 0x38);
    fn_0066e5f0(DAT_00898840,2);
    return;
  }
  return;
}



void fn_005dc450(undefined4 param_1)

{
  fn_005fc69c();
  fn_005fc5c8(param_1);
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005dc49c,0,1,0,0);
  return;
}



undefined4 fn_005dc028(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x148);
  if (iVar1 == 1) {
    fn_005fc41c(param_1,0);
    *(undefined4 *)(param_1 + 0x148) = 2;
  }
  else if (iVar1 == 2 || iVar1 == 3) {
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    if (*(int *)(param_1 + 0x144) == 1) {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x120) + 0x44) + 0x14))();
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x120) + 0x44) + 0x44);
      iVar3 = fn_0076222c(param_1);
      if ((iVar3 != 0) && (*(char *)(param_1 + 0x14e) == '\0')) {
        *(undefined1 *)(param_1 + 0x14e) = 1;
        fn_00749218(param_1,DAT_00898214,(char *)&DAT_005dc24c);
      }
      if (*(char *)(param_1 + 0x14e) == '\x01') {
        iVar1 = fn_0066e4e8(DAT_00898840);
        if (((iVar1 == 0) || (iVar1 = fn_0066e58c(DAT_00898840), iVar1 != 0)) &&
           (iVar1 = fn_0066e58c(DAT_00898840), iVar1 == 0)) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x14e) = 0;
        *(undefined4 *)(param_1 + 0x140) = 0;
        fn_00689824(param_1,1);
        fn_005fbae8(param_1);
        uVar4 = 4;
      }
      else {
        if (*(int *)(param_1 + 0x148) != 2) {
          if (*(int *)(param_1 + 0x148) != 3) {
            return 0;
          }
          iVar1 = fn_0066e224(DAT_00897850);
          if (iVar1 == 0) {
            return 0;
          }
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          fn_0066e368(DAT_00898840,(int)*(char *)(DAT_00898840 + 0x4d),&local_40);
          fn_0015b0dc(&local_40);
          fn_00749218(param_1,DAT_00898214,(char *)&DAT_005dc270);
          fn_0066eb90(DAT_00897850);
          uVar5 = fn_0066e3bc(DAT_00897850);
          fn_0066e6f0(DAT_00897850,1,uVar5);
          *(undefined4 *)(param_1 + 0x144) = 2;
          *(undefined4 *)(param_1 + 0x148) = 6;
          return 0;
        }
        if (iVar1 != 0 || iVar2 != 0) {
          return 0;
        }
        uVar4 = 3;
      }
      *(undefined4 *)(param_1 + 0x148) = uVar4;
    }
  }
  else {
    uVar5 = fn_005fbe00(param_1);
  }
  return uVar5;
}


