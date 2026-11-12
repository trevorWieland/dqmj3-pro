#include "0034d614_003523b8.h"



void fn_003523b8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_24 [4];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    if ((*(char *)(param_1 + 0x88) == '\0') &&
       (iVar2 = fn_00154a6c(*(undefined4 *)(param_1 + 0x84)), iVar2 != 0)) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
      iVar2 = *(int *)(param_1 + 0x7c) + 1;
      *(int *)(param_1 + 0x7c) = iVar2;
      if (iVar2 < *(int *)(param_1 + 0x80)) {
        uVar5 = fn_001c804c(*(undefined4 *)(param_1 + 0x70),
                             (&PTR_s_title_company_logo_attention_in__00898c80)[iVar2],
                             *(undefined4 *)(param_1 + 0x74));
        *(undefined4 *)(param_1 + 0x78) = uVar5;
        uVar5 = fn_001088e0(*(undefined4 *)(param_1 + 0x70),uVar5);
        *(undefined4 *)(param_1 + 0x84) = uVar5;
      }
      else {
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
    }
    if ((*(char *)(param_1 + 0xa0) == '\0') &&
       (iVar2 = fn_00154a6c(*(undefined4 *)(param_1 + 0x9c)), iVar2 != 0)) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x90));
      iVar2 = *(int *)(param_1 + 0x94) + 1;
      *(int *)(param_1 + 0x94) = iVar2;
      if (iVar2 < *(int *)(param_1 + 0x98)) {
        uVar5 = fn_001c804c(*(undefined4 *)(param_1 + 0x70),
                             (&PTR_s_title_copyright_attention_in_bfl_00898ca8)[iVar2],
                             *(undefined4 *)(param_1 + 0x8c));
        *(undefined4 *)(param_1 + 0x90) = uVar5;
        uVar5 = fn_001088e0(*(undefined4 *)(param_1 + 0x70),uVar5);
        *(undefined4 *)(param_1 + 0x9c) = uVar5;
      }
      else {
        *(undefined1 *)(param_1 + 0xa0) = 1;
      }
    }
    bVar6 = *(char *)(param_1 + 0x88) != '\0';
    cVar1 = '\0';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar6 && cVar1 != '\0') {
      local_24[0] = 0xffffffff;
      fn_0068aa48(param_1,local_24,10,1,1);
      *(undefined4 *)(param_1 + 0x68) = 1;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x68) == 1) && (iVar2 = fn_006f6a08(param_1,1), iVar2 != 0)) {
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd6);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00898c58) goto LAB_00352440;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_00352440:
    puVar3[3] = 4;
    fn_006899f4(param_1,0xd5,0);
    return;
  }
  return;
}



undefined4 fn_00352250(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 10;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x70),DAT_00898c64,&DAT_00352374,1,1);
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x70),uVar1,DAT_00898c6c,&DAT_0035237c,0,1,0);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = fn_001c804c(*(undefined4 *)(param_1 + 0x70),
                       (&PTR_s_title_company_logo_attention_in__00898c80)[*(int *)(param_1 + 0x7c)],
                       uVar1);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0x70),uVar1);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 10;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x70),DAT_00898c68,&DAT_00352374,1,1);
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x70),uVar1,DAT_00898c70,&DAT_0035237c,1,1,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar1 = fn_001c804c(*(undefined4 *)(param_1 + 0x70),
                       (&PTR_s_title_copyright_attention_in_bfl_00898ca8)[*(int *)(param_1 + 0x94)],
                       uVar1);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0x70),uVar1);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  DAT_00898964 = 1;
  return 1;
}



void fn_003519f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
    break;
  case 1:
    goto switchD_00351a20_caseD_1;
  case 2:
    goto switchD_00351a20_caseD_2;
  case 3:
    goto switchD_00351a20_caseD_3;
  case 4:
    uVar2 = fn_00182994(DAT_008977e4);
    iVar5 = fn_00154b54(uVar2,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34));
    if (iVar5 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar5;
    if (iVar5 < *(int *)(param_1 + 8)) {
      *(undefined1 *)(param_1 + 0x24) = 5;
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      fn_00182994(DAT_008977e4);
      fn_001552cc();
      iVar5 = fn_0029e4e0(*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_1 + 0x18) < iVar5) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      *(undefined1 *)(param_1 + 0x24) = 5;
      if (*(int *)(param_1 + 0x18) < iVar5) {
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x25) = 6;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar4 = uVar3;
    if (uVar3 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 0x25);
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x25);
    }
    if (0 < (int)uVar3) {
      if (*(char *)(param_1 + 0xc) != '\x01') {
        return;
      }
      iVar5 = (int)uVar4 / 2;
      goto LAB_00351b78;
    }
    goto LAB_00351d28;
  case 5:
    iVar5 = *(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = iVar5;
    if (0 < iVar5) {
      return;
    }
    goto LAB_00351d28;
  default:
    goto switchD_00351a20_default;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x1c)) {
    *(undefined1 *)(param_1 + 0x24) = 6;
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar2,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 0x1c));
  uVar1 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00175044(uVar1,(int)*(char *)(param_1 + 4),0);
  if (iVar5 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    uVar1 = fn_00175044(uVar1,(int)*(char *)(param_1 + 4),0);
    fn_0029ef7c(uVar2,uVar1);
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00175044(uVar1,(int)*(char *)(param_1 + 4),1);
  if (iVar5 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    uVar1 = fn_00175044(uVar1,(int)*(char *)(param_1 + 4),1);
    fn_0029ef7c(uVar2,uVar1);
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00174aec(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c));
  if ((*(char *)(param_1 + 0xc) == '\x01') && (iVar5 == 3 || iVar5 == 4)) {
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x24) = 5;
    *(undefined1 *)(param_1 + 0x25) = 1;
LAB_00351b78:
    *(int *)(param_1 + 0x20) = iVar5;
    return;
  }
switchD_00351a20_caseD_1:
  fn_003517d8(param_1);
  *(undefined1 *)(param_1 + 0x24) = 2;
switchD_00351a20_caseD_2:
  uVar2 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00154b54(uVar2,*(undefined4 *)(param_1 + 0x28));
  if (iVar5 != 0) {
    if ((*(char *)(param_1 + 0xc) == '\x01') && (0 < *(int *)(param_1 + 0x14))) {
      *(undefined1 *)(param_1 + 0x24) = 5;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x25) = 3;
      return;
    }
switchD_00351a20_caseD_3:
    if (*(char *)(param_1 + 0x2c) == '\x01') {
      uVar2 = fn_002a0868(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),
                           *(undefined4 *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34),
                           param_1 + 0x54,param_1 + 0x55);
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x34) = uVar2;
    }
    if ((0 < *(int *)(param_1 + 0x20)) && (*(char *)(param_1 + 0xc) == '\x01')) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) / 2;
    }
    iVar5 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar5;
    if (iVar5 < *(int *)(param_1 + 8)) {
      *(undefined1 *)(param_1 + 0x24) = 5;
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      fn_00182994(DAT_008977e4);
      fn_001552cc();
      iVar5 = fn_0029e4e0(*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_1 + 0x18) < iVar5) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      *(undefined1 *)(param_1 + 0x24) = 5;
      if (*(int *)(param_1 + 0x18) < iVar5) {
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x25) = 6;
      }
    }
    if (*(int *)(param_1 + 0x20) == 0) {
LAB_00351d28:
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x25);
      return;
    }
  }
switchD_00351a20_default:
  return;
}



void fn_00350954(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(&DAT_007c79fc + param_2 * 8) < 1) {
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_003509b4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003509b4:
  uVar3 = fn_0022eefc((int)*(short *)(&DAT_007c79fc + param_2 * 8),0);
  uVar4 = fn_0022f750((&DAT_007c79f8)[param_2 * 2]);
  fn_00321118(puVar1,uVar4,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0034ef9c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  *puVar1 = &DAT_008262f4;
  *(undefined1 *)(puVar1 + 0x1e) = 0xff;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  return;
}



void fn_0034ec4c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_00826288;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_0034e5e0(int param_1)

{
  undefined *local_8 [2];
  
  local_8[0] = &DAT_007bd7b8;
  fn_005ed74c(*(undefined4 *)(param_1 + 0x14),local_8);
  return;
}



void fn_0034d614(int param_1,short param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_90 [128];
  
  sVar1 = fn_006ba284();
  sVar1 = fn_002b1390(*(undefined4 *)(param_1 + 0xb4),(int)(short)(param_2 + sVar1 * 8));
  fn_0023097c(auStack_90 + 0x80,(int)sVar1,0);
  uVar2 = fn_0022ee7c((int)sVar1);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),param_4,uVar2);
  fn_00689bd0(param_1,0x49,0);
  if (param_4 != &DAT_008f9cf4) {
    piVar3 = param_4 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(param_4 + -3,param_4[-2] + 8,0);
    }
  }
  return;
}


