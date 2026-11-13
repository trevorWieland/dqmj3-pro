#include "00603a10_00603a10.h"



void fn_00603a10(undefined1 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 *local_1c0 [2];
  undefined1 auStack_1b8 [256];
  ulonglong local_b8;
  longlong local_b0 [10];
  undefined1 local_60 [16];
  int local_50;
  undefined1 auStack_4c [16];
  int local_3c [3];
  undefined1 local_30 [16];
  
  uVar12 = 0;
  local_3c[0] = 0;
  iVar2 = fn_001b4970();
  bVar13 = iVar2 != 0;
  uVar3 = fn_00524a44(0);
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    pcVar9 = "nn::http::Initialize() returns \n";
    goto LAB_006040d0;
  }
  fn_001b4fd4();
  iVar2 = fn_002febd8();
  uVar14 = fn_002febd8(param_1 + 0x28);
  pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
  if (0xff < (uint)((int)uVar14 + iVar2)) {
    uVar4 = 0xfffffe6b;
LAB_006040cc:
    *(undefined4 *)(param_1 + 4) = uVar4;
    goto LAB_006040d0;
  }
  uVar4 = fn_001b4fd4();
  fn_002fec40(auStack_1b8,uVar4);
  fn_001003f2(auStack_1b8,param_1 + 0x28);
  uVar3 = fn_00524500(param_1 + 0x68,auStack_1b8,2,1);
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    pcVar9 = "itf->httpCon.Initialize() returns \n";
    goto LAB_006040d0;
  }
  iVar2 = fn_001bdd44();
  fn_005246b4(param_1 + 0x68,(char *)&DAT_00603d98,(char *)&DAT_00603d7c);
  fn_005246b4(param_1 + 0x68,(char *)&DAT_00603dac,&DAT_00603da8);
  fn_005246b4(param_1 + 0x68,(char *)&DAT_00603dc0,&DAT_00603dbc);
  uVar4 = fn_001bce24();
  fn_005246b4(param_1 + 0x68,(char *)&DAT_00603dd0,uVar4);
  if (iVar2 != 0) {
    fn_005246b4(param_1 + 0x68,(char *)&DAT_00603de4,iVar2);
  }
  iVar2 = fn_001c19bc();
  if (iVar2 != 0) {
    fn_001b24a0(&local_b8);
    for (piVar10 = *(int **)(param_1 + 0x20); piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
      iVar2 = piVar10[1];
      if (iVar2 == 0) {
        iVar2 = piVar10[2];
      }
      fn_003019f0(&local_b8,iVar2,piVar10[3]);
    }
    uVar4 = fn_001c19bc();
    fn_003019f0(&local_b8,uVar4,0x10);
    uVar4 = fn_001b490c();
    fn_003019f0(&local_b8,uVar4,0x10);
    fn_001b2214(&local_b8,local_30);
    iVar2 = 0;
    do {
      fn_001028d4(local_60 + iVar2 * 2,&DAT_00603df8,local_30[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    fn_005246b4(param_1 + 0x68,(char *)&DAT_00603e00,local_60);
  }
  iVar2 = fn_001b358c();
  if (iVar2 == 0) {
    uVar4 = fn_001b35ac();
    uVar15 = fn_005249a8(param_1 + 0x68,uVar4);
  }
  else {
    uVar4 = fn_001b59f8();
    uVar5 = fn_001b358c();
    uVar15 = fn_0052497c(param_1 + 0x68,uVar5,uVar4);
  }
  bVar1 = (uVar15 & 0x80000000) != 0;
  if (bVar1) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    uVar15 = 0x603e1000000002;
  }
  iVar2 = fn_001b5a14((int)uVar15,(int)(uVar15 >> 0x20));
  if ((iVar2 == 0) || (iVar2 = fn_001bb1c4(), iVar2 == 0)) {
    uVar15 = fn_00524690(param_1 + 0x68,0x40);
  }
  else {
    puVar6 = (undefined1 *)fn_001bf0cc();
    uVar4 = fn_001bb1c4();
    uVar5 = fn_001bb1e0();
    uVar7 = fn_001b5a14();
    local_1c0[0] = puVar6;
    uVar15 = fn_00524648(param_1 + 0x68,uVar7,uVar5,uVar4);
  }
  pcVar9 = (char *)(uVar15 >> 0x20);
  if ((uVar15 & 0x80000000) != 0) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    pcVar9 = "SetClientCert failed\n";
    goto LAB_006040d0;
  }
  if (bVar1) goto LAB_006040d0;
  if (*(int *)(param_1 + 0x24) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    uVar3 = fn_005247b8(param_1 + 0x68,2);
    if ((uVar3 & 0x80000000) != 0) {
      uVar4 = fn_001ba538();
      *(undefined4 *)(param_1 + 4) = uVar4;
      pcVar9 = "itf->httpCon.SetLazyPostDataSetting() returns \n";
      goto LAB_006040d0;
    }
  }
  uVar3 = fn_00524900(param_1 + 0x68);
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    pcVar9 = "itf->httpCon.Connect() returns \n";
    goto LAB_006040d0;
  }
  puVar11 = *(undefined4 **)(param_1 + 0x20);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &DAT_007d5f8c;
  }
  for (; puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
    iVar2 = puVar11[1];
    if (iVar2 == 0) {
      iVar2 = puVar11[2];
    }
    if (bVar1) {
      if (bVar13) {
        uVar3 = fn_001b4970();
        local_b0[0] = (ulonglong)uVar3 * 1000;
        iVar2 = fn_00524764(param_1 + 0x68,iVar2,puVar11[3],local_b0);
      }
      else {
        iVar2 = fn_00524724(param_1 + 0x68,iVar2,puVar11[3]);
      }
      if (iVar2 < 0) {
        uVar4 = fn_001ba538();
        *(undefined4 *)(param_1 + 4) = uVar4;
        pcVar9 = "itf->httpCon.SendPostDataRaw() returns \n";
        goto LAB_006040d0;
      }
    }
  }
  if ((bVar1) && (uVar3 = fn_0052480c(param_1 + 0x68), (uVar3 & 0x80000000) != 0)) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    pcVar9 = "itf->httpCon.NotifyFinishSendPostData() returns \n";
    goto LAB_006040d0;
  }
  piVar10 = (int *)*(int *)(param_1 + 0x20);
  while (piVar10 != (int *)0x0) {
    iVar2 = *piVar10;
    fn_007407d4(piVar10[1]);
    fn_007407d4(piVar10);
    piVar10 = (int *)iVar2;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *param_1 = 2;
  if (bVar13) {
    uVar3 = fn_001b4970();
    local_b8 = (ulonglong)uVar3 * 1000;
    uVar3 = fn_006dc43c(param_1 + 0x68,local_3c);
  }
  else {
    uVar3 = fn_006dc404(param_1 + 0x68,local_3c);
  }
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
    pcVar9 = "itf->httpCon.GetStatusCode() returns \n";
    goto LAB_006040d0;
  }
  pcVar9 = "HTTP response code = %d\n";
  if (local_3c[0] != 200) {
    uVar4 = 0xffffff38;
    goto LAB_006040cc;
  }
  if (bVar13) {
    uVar3 = fn_001b4970(200,"HTTP response code = %d\n",200);
    local_b0[0] = (ulonglong)uVar3 * 1000;
    local_1c0[0] = param_1 + 0x14;
    uVar3 = fn_006dc37c(param_1 + 0x68,0,0,local_b0);
  }
  else {
    uVar3 = fn_006dc304(param_1 + 0x68,0,0,param_1 + 0x14);
  }
  if ((uVar3 & 0x80000000) == 0) {
    uVar14 = fn_00741220(*(undefined4 *)(param_1 + 0x14));
    pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
    iVar2 = (int)uVar14;
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 == 0) {
LAB_006043d4:
      *(undefined4 *)(param_1 + 4) = 0xfffffe6f;
      goto LAB_006040d0;
    }
    if (bVar13) {
      uVar3 = fn_001b4970();
      local_b0[0] = (ulonglong)uVar3 * 1000;
      local_1c0[0] = (undefined1 *)0x0;
      uVar3 = fn_006dc37c(param_1 + 0x68,*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0x14),local_b0);
    }
    else {
      uVar3 = fn_006dc304(param_1 + 0x68,iVar2,*(undefined4 *)(param_1 + 0x14),0);
    }
    if ((uVar3 & 0x80000000) == 0) {
      local_b8 = local_b8 & 0xffffffff00000000;
      uVar3 = fn_006dc254(param_1 + 0x68,&local_b8,param_1 + 0x1c);
      if ((uVar3 & 0x80000000) != 0) {
        uVar4 = fn_001ba538();
        *(undefined4 *)(param_1 + 4) = uVar4;
        pcVar9 = "itf->httpCon.GetProgress() returns \n";
        goto LAB_006040d0;
      }
      pcVar9 = "Content-Length %d bytes\n";
      if (*(int *)(param_1 + 0x1c) != 0) {
        uVar14 = fn_00741220(*(int *)(param_1 + 0x1c),"Content-Length %d bytes\n",
                              *(undefined4 *)(param_1 + 0x1c));
        pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
        iVar2 = (int)uVar14;
        *(int *)(param_1 + 0x18) = iVar2;
        if (iVar2 == 0) goto LAB_006043d4;
        if (bVar13) {
          uVar3 = fn_001b4970();
          local_b0[0] = (ulonglong)uVar3 * 1000;
          uVar15 = fn_0052486c(param_1 + 0x68,*(undefined4 *)(param_1 + 0x18),
                                *(undefined4 *)(param_1 + 0x1c),local_b0);
        }
        else {
          uVar15 = fn_0052482c(param_1 + 0x68,iVar2,*(undefined4 *)(param_1 + 0x1c));
        }
        pcVar9 = (char *)(uVar15 >> 0x20);
        if ((uVar15 & 0x80000000) != 0) {
          uVar4 = fn_001ba538();
          *(undefined4 *)(param_1 + 4) = uVar4;
          pcVar9 = "itf->httpCon.Read() returns \n";
          goto LAB_006040d0;
        }
      }
      *param_1 = 3;
      goto LAB_006040d0;
    }
  }
  uVar4 = fn_001ba538();
  *(undefined4 *)(param_1 + 4) = uVar4;
  pcVar9 = "itf->httpCon.GetHeaderAll() returns \n";
LAB_006040d0:
  uVar3 = fn_005248c4(param_1 + 0x68,pcVar9);
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar4;
  }
  if (*(int *)(param_1 + 4) == -200) {
    local_1c0[0] = (undefined1 *)((uint)local_1c0[0] & 0xffff0000);
    fn_006dc2b0(param_1 + 0x68,local_1c0);
    if (((uint)local_1c0[0] & 0xffff) != 0) {
      uVar4 = fn_001bd660();
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
  }
  pcVar9 = (char *)(*(int *)(param_1 + 4) + 0x385);
  if (pcVar9 == (char *)0x0) {
    uVar14 = fn_001c19bc();
    pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
    local_1c0[0] = (undefined1 *)0x0;
    local_50 = 0;
    if ((int)uVar14 != 0) {
      iVar8 = fn_00740c1c(param_1,(char *)&DAT_00603e00,local_1c0,&local_50);
      iVar2 = iVar8;
      if (iVar8 == 0) {
        iVar2 = local_50;
      }
      if (iVar8 == 0 && iVar2 == 0x20) {
        fn_001b24a0(&local_b8);
        if (*(int *)(param_1 + 0x18) != 0) {
          fn_003019f0(&local_b8,*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
        }
        fn_003019f0(&local_b8,(int)uVar14,0x10);
        uVar4 = fn_001b490c();
        fn_003019f0(&local_b8,uVar4,0x10);
        fn_001b2214(&local_b8,local_60);
        iVar2 = 0;
        do {
          fn_001028d4(auStack_4c,&DAT_00603df8,local_60[iVar2]);
          uVar14 = fn_001010c8(auStack_4c,local_1c0[0] + iVar2 * 2,2);
          pcVar9 = (char *)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 != 0) {
            pcVar9 = "MD5 digest check failed (received data)\n";
            uVar12 = 0xfffffed0;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x10);
      }
      else {
        pcVar9 = "MD5 digest wasn\'t found in received data\n";
        uVar12 = 0xfffffed0;
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar12;
  }
  uVar15 = fn_00524920(param_1 + 0x68,pcVar9);
  if ((uVar15 & 0x80000000) != 0) {
    uVar12 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar12;
    uVar15 = 0x6046e400000002;
  }
  uVar3 = fn_005252ec((int)uVar15,(int)(uVar15 >> 0x20));
  if ((uVar3 & 0x80000000) != 0) {
    uVar12 = fn_001ba538();
    *(undefined4 *)(param_1 + 4) = uVar12;
  }
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_1);
  }
  return;
}


