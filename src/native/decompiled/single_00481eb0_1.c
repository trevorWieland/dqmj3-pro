#include "single_00481eb0_1.h"



void fn_00481eb0(undefined4 param_1,int param_2,wchar16 *param_3,wchar16 *param_4,int param_5,
                 int param_6,undefined1 param_7)

{
  wchar16 *pwVar1;
  int iVar2;
  undefined4 *puVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  undefined4 uVar6;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined *local_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  undefined *local_54;
  undefined4 local_3c [2];
  undefined4 local_34;
  int iStack_30;
  wchar16 *pwStack_2c;
  wchar16 *pwStack_28;
  
  pwVar1 = (wchar16 *)&DAT_008a6454;
  if (DAT_008a6454 <= param_4) {
    pwVar1 = DAT_008a6458;
  }
  pwVar4 = DAT_008a6454;
  pwVar5 = param_3;
  if (DAT_008a6454 <= param_4 && param_4 <= pwVar1) {
    pwVar4 = L"0x%08x is the game server ID for NEX sample demo server. ";
    pwVar1 = (wchar16 *)0x3;
    pwVar5 = param_4;
  }
  local_34 = param_1;
  iStack_30 = param_2;
  pwStack_2c = param_3;
  pwStack_28 = param_4;
  if ((param_3 == (wchar16 *)0x0 || param_5 == 0) || param_6 == 0) {
    local_68 = 0x8001000a;
    fn_004b8d4c(param_1,&local_68,pwVar5);
    return;
  }
  iVar2 = fn_0052c6ec(pwVar1,pwVar4);
  if (iVar2 == 0) {
    local_68 = 0x80650000;
    fn_004b8d4c(local_34,&local_68);
    return;
  }
  iVar2 = fn_00455e10(param_3);
  if (iVar2 == 0) {
    local_68 = 0x8001000d;
    fn_004b8d4c(local_34,&local_68);
    return;
  }
  iVar2 = fn_0015ecdc(0x90);
  uVar6 = 0;
  puVar3 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)fn_00479cd8(iVar2,2,auStack_64);
    *puVar3 = &DAT_00853ca0;
    puVar3[0x22] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1b] = 0;
    *(undefined1 *)(puVar3 + 0x21) = 1;
  }
  puVar3[0x1a] = *(undefined4 *)(param_3 + 0x22);
  puVar3[0x1b] = param_2;
  puVar3[0x1c] = param_4;
  puVar3[0x1d] = param_5;
  puVar3[0x1e] = param_6;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)(puVar3 + 0x21) = param_7;
  pcStack_5c = fn_0048e250;
  uStack_58 = 0;
  local_54 = &DAT_007d9270;
  local_60 = &DAT_00853500;
  fn_00479c98(puVar3,&local_60);
  iVar2 = fn_001249d0();
  if (iVar2 != 0) {
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
  }
  fn_004bdba4(uVar6,puVar3,0);
  local_3c[0] = 0x10001;
  fn_004b8d4c(local_34,local_3c);
  return;
}


