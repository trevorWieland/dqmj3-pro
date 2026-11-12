#include "005b7ae0_005bfeb4.h"



void fn_005bfeb4(undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_002fdf94(param_1,param_2,0x30);
  *puVar2 = &DAT_00849d94;
  puVar2[0x16] = 0;
  sVar1 = *param_3;
  puVar2[0x18] = 0xffffffff;
  puVar2[0x17] = (int)sVar1;
  return;
}



void fn_005bfd68(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x14) + 0x39c) & 8) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
    if (0x3c < uVar3) goto LAB_005bfe4c;
  }
  iVar1 = fn_006b0d10(*(int *)(param_1 + 0x14),0);
  if (iVar1 != 0) {
    iVar2 = fn_006bd500(param_1,iVar1,0);
    if (iVar2 == 0) {
      fn_001c7764(*(undefined4 *)(param_1 + 0x14),iVar1 + 0x20);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
                    /* WARNING: Could not recover jumptable at 0x005bfea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
      return;
    }
    iVar1 = fn_00214640(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c),2,0x25);
    if (iVar1 != 0) {
      fn_00216784(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0x17,4,0);
      fn_0069eed8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe4),0);
      fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
LAB_005bfe4c:
  fn_0021718c(param_1,1,0x3c);
  return;
}



void fn_005bcf78(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f750(param_2);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,uVar1);
  if (param_3 == 0) {
    return;
  }
  uVar1 = fn_0022f750(param_3);
                    /* WARNING: Could not recover jumptable at 0x005bcfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x13c))(param_1,1,0,uVar1);
  return;
}



void fn_005bbb78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_008493b0;
  if ((int *)param_1[0x67] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x67] + 4))();
  }
  iVar1 = fn_00170f54(param_1 + 100);
  iVar1 = fn_00170f54(iVar1 + -8);
  iVar1 = fn_0048c938(iVar1 + -0x70);
  if (*(int **)(iVar1 + -4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + -4) + 4))();
  }
  fn_005bd474(iVar1 + -0x118);
  fn_002feef8();
  return;
}



void fn_005b9594(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[0x21] == 0) {
    fn_002f6100(param_1);
    fn_0015b0dc();
    fn_002f8914();
    iVar1 = fn_002f7e84();
    fn_0015b0f8(*(undefined1 *)(iVar1 + 0x3c2));
    fn_002f6100(param_1);
    fn_0015b0dc();
    uVar2 = fn_0022f584((char *)&DAT_005b96c8,0);
    fn_0068974c(param_1,uVar2,1);
    return;
  }
  iVar1 = fn_001f7424(param_1,0x48);
  if (iVar1 == 0) {
    if (*(char *)(param_1[0x17] + 0x31) == '\x02') {
      puVar4 = (undefined4 *)param_1[6];
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
        do {
          if (puVar3 == &DAT_0089704c) goto LAB_005b969c;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar4 = (undefined4 *)0x0;
LAB_005b969c:
      *(undefined1 *)(puVar4 + 4) = 2;
                    /* WARNING: Could not recover jumptable at 0x005b96c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
    if (*(char *)(param_1[0x17] + 0x31) == '\x03') {
      param_1[0x1e] = (int)fn_005b96e8;
      param_1[0x1f] = 0;
    }
  }
  return;
}



void fn_005b96e8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0xfa);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897100) goto LAB_005b9738;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b9738:
  if (param_1[0x21] == 0) {
    uVar4 = fn_0022f584((char *)&DAT_005b9844,0);
    fn_0068974c(param_1,uVar4,0,1);
    *(undefined1 *)(param_1[0x17] + 0x51) = 1;
    *(undefined1 *)(param_1[0x17] + 0x30) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 1;
    fn_00689878(param_1,0xfa);
    return;
  }
  iVar3 = fn_001f7e04(param_1,0xfa);
  if (iVar3 == 0) {
    if (*(char *)(puVar1 + 4) == '\x01') {
      param_1[0x1e] = (int)fn_005b9464;
      param_1[0x1f] = 0;
    }
    else if (*(char *)(puVar1 + 4) == '\x03') {
      puVar1 = (undefined4 *)param_1[6];
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
        do {
          if (puVar2 == &DAT_0089704c) goto LAB_005b97b0;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar1 = (undefined4 *)0x0;
LAB_005b97b0:
      *(undefined1 *)(puVar1 + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x005b97d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
  }
  return;
}



undefined4 fn_005b8d24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  wchar16 *pwStack_80;
  char *pcStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [28];
  undefined4 local_24 [2];
  
  iVar1 = fn_002f88b4();
  fn_00397774(&pwStack_80);
  local_6c = 3;
  local_78 = 3;
  pwStack_80 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_7c = (char *)&DAT_005b8edc;
  local_74 = fn_002f70cc(param_1);
  uVar2 = fn_0022f750(*(undefined4 *)(&DAT_007ca188 + iVar1 * 4));
  fn_00147974(auStack_64,uVar2);
  local_4c = 1;
  uVar2 = fn_0022f750(*(undefined4 *)(&DAT_007ca190 + iVar1 * 4));
  fn_00147974(auStack_40,uVar2);
  fn_00397618(param_1,&pwStack_80);
  uVar4 = 0;
  do {
    uVar2 = fn_0022f750((&DAT_007ca1b0)[uVar4]);
    fn_0031b78c(param_1,uVar4,0,uVar2);
    uVar2 = fn_002f8914();
    uVar3 = fn_002f6fa8();
    iVar1 = fn_0041fe24(uVar3,uVar2);
    if (*(int *)(iVar1 + 0x40) == 0) {
LAB_005b8e40:
      local_24[0] = DAT_008970b0;
    }
    else {
      if ((uVar4 & 0xff) == 1) {
        if (*(int *)(iVar1 + 0x3c) != 0) goto LAB_005b8e40;
      }
      else if (((uVar4 & 0xff) != 2) || (*(int *)(iVar1 + 0x3c) != *(int *)(iVar1 + 0x40) + -1))
      goto LAB_005b8e40;
      local_24[0] = DAT_008970b8;
    }
    fn_002c37b4(param_1,uVar4,0,local_24);
    uVar4 = uVar4 + 1;
    if (2 < uVar4) {
      *(undefined **)(param_1 + 0xf8) = &DAT_005b8f08;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined **)(param_1 + 0xf0) = &DAT_005b8f08;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined **)(param_1 + 0xe8) = &DAT_005b8f08;
      *(undefined4 *)(param_1 + 0xec) = 0;
      fn_00100414(auStack_44,&LAB_0059e0e0,8,4);
      iVar1 = fn_001588d4(auStack_58);
      iVar1 = fn_001588d4(iVar1 + -4);
      iVar1 = fn_001588d4(iVar1 + -4);
      fn_001588d4(iVar1 + -4);
      return 1;
    }
  } while( true );
}



void fn_005b8744(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  do {
    iVar5 = param_1 + uVar6 * 0x18;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    piVar4 = (int *)(iVar5 + 0x18);
    iVar1 = fn_00100b58(&DAT_005b8840);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)*piVar4;
      piVar3 = puVar2 + -3;
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        puVar2[-1] = 0;
        *(undefined2 *)*piVar4 = 0;
      }
      else {
        if (puVar2 != &DAT_008f9cf4) {
          if (iVar1 == -1) {
LAB_005b880c:
            fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
          }
          else if (piVar3 != &DAT_008f9ce8) {
            *piVar3 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_005b880c;
          }
        }
        *piVar4 = (int)&DAT_008f9cf4;
      }
    }
    else {
      fn_00177c88(piVar4,0,*(undefined4 *)(*piVar4 + -4),&DAT_005b8840,iVar1,0,iVar1);
    }
    *(undefined4 *)(iVar5 + 0x20) = 0;
    uVar6 = uVar6 + 1;
    *(undefined4 *)(iVar5 + 0x1c) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x28) = 0;
    if (9 < uVar6) {
      return;
    }
  } while( true );
}



void fn_005b7ff8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,5);
  *puVar1 = &DAT_00848a94;
  return;
}



void fn_005b7ae0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xf);
  *puVar1 = &DAT_00848a6c;
  return;
}


