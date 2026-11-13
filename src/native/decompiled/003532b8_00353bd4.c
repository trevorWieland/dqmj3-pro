#include "003532b8_00353bd4.h"



void fn_00353bd4(int param_1)

{
  char cVar1;
  
  cVar1 = '\x10';
  do {
    if (*(int *)(param_1 + cVar1 * 4 + -0x3c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x65) = 0;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '\x14');
  return;
}



void fn_00353b88(int param_1)

{
  char cVar1;
  
  cVar1 = '\x10';
  do {
    if (*(int *)(param_1 + cVar1 * 4 + -0x3c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x93) = 0;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '\x18');
  return;
}



void fn_00353b58(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x10';
  do {
    iVar2 = (int)cVar1;
    cVar1 = cVar1 + '\x01';
    if (*(char *)(iVar2 + param_1 + 0x14) != '\0') {
      *(undefined1 *)(iVar2 + param_1 + 0x14) = 0;
    }
  } while (cVar1 < '\x14');
  return;
}



void fn_00353b08(int param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = '\x10';
  do {
    if (*(int *)(param_1 + cVar1 * 4 + -0x3c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x5b) = param_2;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '\x14');
  return;
}



void fn_00353af4(void)

{
  fn_003532d4();
  return;
}



bool fn_00353aa4(int param_1)

{
  return *(char *)(param_1 + 0x27) != '\0' ||
         ((*(char *)(param_1 + 0x24) != '\0' || *(char *)(param_1 + 0x25) != '\0') ||
         *(char *)(param_1 + 0x26) != '\0');
}



void fn_00353a90(int param_1,char param_2)

{
  *(undefined1 *)((int)param_2 + param_1 + 0x14) = 0;
  return;
}



void fn_00353a48(int param_1)

{
  char cVar1;
  
  cVar1 = '\x10';
  do {
    if (*(int *)(param_1 + cVar1 * 4 + -0x3c) != 0) {
      fn_003095fc(*(undefined4 *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4));
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '\x18');
  return;
}



undefined4 fn_00353a38(int param_1,char param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + -0x3c);
}



void fn_003532d4(int param_1,undefined4 param_2,int *param_3,char *param_4,char *param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  short *psVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int local_90;
  undefined4 local_8c;
  char local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
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
  int iStack_34;
  undefined4 local_30;
  int *piStack_2c;
  char *pcStack_28;
  
  local_80 = 0xffffffff;
  local_7c = 0xffffffff;
  local_88[0] = '\x10';
  iStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  pcStack_28 = param_4;
  do {
    iVar3 = fn_00174828(DAT_008977e4);
    iVar3 = iVar3 + local_88[0] * 0x418;
    psVar8 = (short *)(iVar3 + -0x4080);
    bVar11 = psVar8 == (short *)0x0;
    iVar4 = 0;
    iVar1 = iVar3;
    if (!bVar11) {
      iVar4 = (int)*psVar8;
      iVar1 = iVar4;
    }
    if ((!bVar11 && iVar1 != 0) && iVar4 < 0 == (bVar11 && SBORROW4(iVar3 + -0x4000,0x80))) {
      iVar4 = fn_00145b00(0x218,&DAT_00812c8c);
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = fn_0030b918(iVar4,local_30);
      }
      *(undefined4 *)(param_1 + local_88[0] * 4 + -0x3c) = uVar5;
      fn_00308f94(*(undefined4 *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4),(int)*psVar8);
      fn_0030b018(*(undefined4 *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4),
                   (int)*(char *)(iVar3 + -0x4027));
      if (*(char *)(iVar3 + -0x3c6c) == '\0') {
        uVar5 = fn_00182988(DAT_008977e4);
        iVar4 = fn_0026a548(uVar5,local_88);
        bVar11 = *(char *)(iVar4 + 0x1c) != '\0';
      }
      else {
        bVar11 = false;
      }
      *(bool *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x4f) = bVar11;
      if (*(char *)(iVar3 + -0x3c6c) == '\0') {
        uVar5 = fn_00182988(DAT_008977e4);
        iVar4 = fn_0026a548(uVar5,local_88);
        bVar11 = *(char *)(iVar4 + 0x1d) != '\0';
      }
      else {
        bVar11 = false;
      }
      *(bool *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x50) = bVar11;
      if (*(char *)(iVar3 + -0x3c6c) == '\0') {
        uVar5 = fn_00182988(DAT_008977e4);
        fn_0026a548(uVar5,local_88);
        iVar4 = fn_001f84ac();
        bVar11 = iVar4 != 0;
      }
      else {
        bVar11 = false;
      }
      iVar4 = param_1 + (char)(local_88[0] + -0x10) * 4;
      *(bool *)(*(int *)(iVar4 + 4) + 0x51) = bVar11;
      *(bool *)(*(int *)(iVar4 + 4) + 0x55) = *(char *)(iVar3 + -0x4019) == '\0';
      *(undefined1 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x93) = 0;
      iVar4 = param_1 + (char)(local_88[0] + -0x10) * 4;
      *(undefined1 *)(*(int *)(iVar4 + 4) + 0x53) = *(undefined1 *)(iVar3 + -0x3c6c);
      if (local_88[0] < '\x14') {
        *(undefined1 *)(*(int *)(iVar4 + 4) + 0x59) = *(undefined1 *)(iVar3 + -0x4026);
        *(undefined1 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x5b) = 1;
        uVar2 = fn_00166804(psVar8);
        *(undefined1 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x97) = uVar2;
        uVar2 = fn_001667f0(psVar8);
        *(undefined1 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x99) = uVar2;
        fn_00309624(*(undefined4 *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4),&DAT_00353878);
        *(undefined1 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x4e) = 0;
        *param_4 = *param_4 + '\x01';
      }
      else {
        *(undefined1 *)(*(int *)(iVar4 + 4) + 0x5b) = 0;
        iVar4 = param_1 + (char)(local_88[0] + -0x10) * 4;
        *(undefined1 *)(*(int *)(iVar4 + 4) + 0x89) = 0;
        fn_00309624(*(undefined4 *)(iVar4 + 4),&DAT_00353878);
        *(undefined1 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x4e) = 1;
        local_90 = (int)*psVar8;
        local_84 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),local_90);
        if (local_84 == 0) {
          local_90 = fn_00661518(local_90);
          iVar4 = fn_001a46f4();
          if (iVar4 != 0) {
            local_84 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),local_90);
          }
        }
        *(char *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x95) = (char)local_84;
        *param_5 = *param_5 + '\x01';
      }
      uVar5 = fn_00176dc0(psVar8);
      fn_0017b99c(*(undefined4 *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4),uVar5);
      *(undefined2 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x8c) =
           *(undefined2 *)(iVar3 + -0x4064);
      uVar5 = fn_00176e70(psVar8);
      fn_0017b9a8(*(undefined4 *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4),uVar5);
      *(undefined2 *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x90) =
           *(undefined2 *)(iVar3 + -0x4062);
      local_88[local_88[0] + -8] =
           *(char *)(*(int *)(param_1 + (char)(local_88[0] + -0x10) * 4 + 4) + 0x4c);
    }
    local_88[0] = local_88[0] + '\x01';
  } while (local_88[0] < '\x18');
  local_6c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  if ((int)((unsigned int)(local_80) >> 24) & 0xff + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar5 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar5 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  if ((int)((unsigned int)(local_80) >> 16) & 0xff + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar9 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar9 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  if ((int)((unsigned int)(local_80) >> 8) & 0xff + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar10 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar10 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  if ((int)(char)local_80 + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar6 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar6 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  local_90 = uVar9;
  local_8c = uVar5;
  fn_001028d4(param_1 + 0x28,(char *)&DAT_00353884,uVar6,uVar10);
  if ((int)((unsigned int)(local_7c) >> 24) & 0xff + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar5 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar5 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  if ((int)((unsigned int)(local_7c) >> 16) & 0xff + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar9 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar9 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  if ((int)((unsigned int)(local_7c) >> 8) & 0xff + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar10 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar10 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  if ((int)(char)local_7c + 1U < 6) {
    iVar4 = fn_001cab7c();
    uVar6 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  else {
    iVar4 = fn_001cab7c(0xffffffff);
    uVar6 = *(undefined4 *)(&DAT_00890394 + iVar4 * 4);
  }
  local_90 = uVar9;
  local_8c = uVar5;
  fn_001028d4(&local_78,(char *)&DAT_00353a24,uVar6,uVar10);
  cVar7 = '\x10';
  do {
    iVar4 = (int)cVar7;
    if (*(int *)(param_1 + iVar4 * 4 + -0x3c) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      if (iVar4 < 0x14) {
        fn_001028d4(&local_58,(char *)&DAT_00353a30,param_1 + 0x28,iVar4 + -0x10);
      }
      else {
        fn_001028d4(&local_58,(char *)&DAT_00353a30,&local_78,iVar4 + -0x14);
      }
      uVar5 = (**(code **)(*param_3 + 0x2c))(param_3,&local_58,1);
      *(undefined4 *)(*(int *)(param_1 + (char)(cVar7 + -0x10) * 4 + 4) + 0xa0) = uVar5;
      (**(code **)(**(int **)(param_1 + cVar7 * 4 + -0x3c) + 0x10))
                (*(undefined4 *)(param_1 + (char)(cVar7 + -0x10) * 4 + 4),0);
    }
    cVar7 = cVar7 + '\x01';
  } while (cVar7 < '\x18');
  return;
}



void fn_003532b8(int param_1,char *param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x5b) = param_3;
  return;
}


