#include "00671630_00671e8c.h"



void fn_00671e8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00301a9c(param_1 + 0x385);
  *(undefined4 *)(param_1 + 0x450) = param_3;
  return;
}



void fn_00671e04(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 7;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc50);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc4c);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



bool fn_00671d74(int *param_1)

{
  bool bVar1;
  
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,5);
    return true;
  }
  fn_00673ce8(param_1,5);
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



bool fn_00671d38(int *param_1)

{
  bool bVar1;
  
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  *(undefined1 *)(param_1 + 0x315) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



void fn_00671928(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_00145b00(0x90,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688();
    fn_002fec40(puVar1 + 1,s_NetworkCommandSILUploadPrivateDa_008c7215);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a7bc;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    fn_0067b814(puVar1);
  }
  *(undefined4 **)(param_1 + 0x1e8) = puVar1;
  puVar1 = (undefined4 *)fn_00145b00(0xb8,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688();
    fn_002fec40(puVar1 + 1,s_NetworkCommandSILDownloadPrivate_008c727f);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60(puVar1);
    *puVar1 = &DAT_0085a850;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    fn_0067bd54(puVar1);
  }
  *(undefined4 **)(param_1 + 0x1ec) = puVar1;
  puVar1 = (undefined4 *)fn_00145b00(0x90,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688();
    fn_002fec40(puVar1 + 1,s_NetworkCommandSILDownloadPublicD_008c725b);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a81c;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    fn_0067bc0c(puVar1);
  }
  *(undefined4 **)(param_1 + 0x1f0) = puVar1;
  puVar3 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  puVar1 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00859b90;
    fn_00129688();
    fn_002fec40(puVar3 + 1,s_NetworkCommandSILGetPropertiesPu_008c72ef);
    *puVar3 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar3 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a904;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  *(undefined4 **)(param_1 + 500) = puVar1;
  puVar1 = (undefined4 *)fn_00145b00(0x8c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688();
    fn_002fec40(puVar1 + 1,s_NetworkCommandSILUploadPublicDat_008c71af);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a71c;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  *(undefined4 **)(param_1 + 0x1f8) = puVar1;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  return;
}



void fn_006718b4(int *param_1,int *param_2,int *param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[0x26] = *param_2;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar2;
  param_1[0x29] = iVar3;
  param_1[0x2a] = iVar4;
  param_1[0x2b] = iVar5;
  param_1[0x2c] = iVar6;
  param_1[0x2d] = iVar7;
  iVar1 = param_2[9];
  param_1[0x2e] = param_2[8];
  param_1[0x2f] = iVar1;
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = param_3[4];
  iVar5 = param_3[5];
  iVar6 = param_3[6];
  iVar7 = param_3[7];
  param_1[0x30] = *param_3;
  param_1[0x31] = iVar1;
  param_1[0x32] = iVar2;
  param_1[0x33] = iVar3;
  param_1[0x34] = iVar4;
  param_1[0x35] = iVar5;
  param_1[0x36] = iVar6;
  param_1[0x37] = iVar7;
  iVar1 = param_3[9];
  param_1[0x38] = param_3[8];
  param_1[0x39] = iVar1;
  *(undefined1 *)(param_1 + 0x7f) = param_4;
                    /* WARNING: Could not recover jumptable at 0x006718e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,3);
  return;
}



void fn_00671630(int *param_1,int param_2)

{
  int iVar1;
  
  fn_0066dd80();
  iVar1 = param_1[9];
  if (iVar1 == 2) {
    if (param_2 == 0) {
      fn_0067b86c(param_1[0x7a],param_1 + 0x26,(int)(char)param_1[0x7f]);
      fn_0066ddc8(param_1,param_1[0x7a]);
      return;
    }
    if ((param_2 == 1) && (*(char *)(param_1[0x7a] + 0x48) == '\0')) {
      iVar1 = *(int *)(param_1[0x7a] + 0x50);
joined_r0x006716d0:
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0066df14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))();
        return;
      }
      fn_0066de3c(param_1);
      return;
    }
  }
  else if (iVar1 == 3) {
    if (param_2 == 0) {
      fn_0067bdac(param_1[0x7b],param_1 + 0x26,param_1 + 0x30,(int)(char)param_1[0x7f]);
      fn_0066ddc8(param_1,param_1[0x7b]);
      return;
    }
    if ((param_2 == 1) && (*(char *)(param_1[0x7b] + 0x48) == '\0')) {
      iVar1 = *(int *)(param_1[0x7b] + 0x50);
      goto joined_r0x006716d0;
    }
  }
  else if (iVar1 == 4) {
    if (param_2 == 0) {
      fn_0067bc64(param_1[0x7c],param_1 + 0x26,(int)(char)param_1[0x7f]);
      fn_0066ddc8(param_1,param_1[0x7c]);
      return;
    }
    if ((param_2 == 1) && (*(char *)(param_1[0x7c] + 0x48) == '\0')) {
      iVar1 = *(int *)(param_1[0x7c] + 0x50);
      goto joined_r0x006716d0;
    }
  }
  else if (iVar1 == 5) {
    if (param_2 == 0) {
      *(int **)(param_1[0x7d] + 100) = param_1 + 0x3a;
      fn_0066ddc8(param_1,param_1[0x7d]);
      return;
    }
    if ((param_2 == 1) && (*(char *)(param_1[0x7d] + 0x48) == '\0')) {
      iVar1 = *(int *)(param_1[0x7d] + 0x50);
      goto joined_r0x006716d0;
    }
  }
  else if (iVar1 == 6) {
    if (param_2 == 0) {
      fn_0067b458(param_1[0x7e],param_1 + 0x26);
      fn_0066ddc8(param_1,param_1[0x7e]);
      return;
    }
    if ((param_2 == 1) && (*(char *)(param_1[0x7e] + 0x48) == '\0')) {
      iVar1 = *(int *)(param_1[0x7e] + 0x50);
      goto joined_r0x006716d0;
    }
  }
  return;
}


