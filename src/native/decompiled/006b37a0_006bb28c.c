#include "006b37a0_006bb28c.h"



void fn_006bb28c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  fn_001028d4(auStack_20,(char *)&DAT_006bb328,param_2);
  iVar1 = fn_005f6e60(*(undefined4 *)(param_1 + 4),auStack_20);
  if (iVar1 != 0) {
    fn_00128eac(*(undefined4 *)(param_1 + 4),auStack_20,2);
  }
  return;
}



int fn_006bb150(void)

{
  int iVar1;
  
  iVar1 = fn_00163d44(0x3c);
  if (iVar1 == 0) {
    iVar1 = 1;
    fn_00163d68(0x3c,1);
  }
  return iVar1 + -1;
}



int fn_006bac00(undefined4 param_1,char *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  iVar1 = fn_00163d44(0x3c);
  if (iVar1 == 0) {
    iVar1 = 1;
    fn_00163d68(0x3c,1);
  }
  uVar4 = (uint)*param_2;
  if ((int)DAT_00891200 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = DAT_00891200 & 1;
    if (uVar2 != 0) {
      param_4 = DAT_008911fc;
    }
    iVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (*(byte *)(param_4 + iVar3 * 0x30) == uVar4) {
          param_4 = param_4 + iVar3 * 0x30;
          goto LAB_006bacd8;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
  }
  do {
    if ((int)DAT_00891200 <= (int)uVar2) {
      param_4 = 0;
LAB_006bacd8:
      return param_4 + (iVar1 + -1) * 0x10;
    }
    pbVar5 = (byte *)(DAT_008911fc + uVar2 * 0x30);
    if (*pbVar5 == uVar4) {
      param_4 = DAT_008911fc + uVar2 * 0x30;
      goto LAB_006bacd8;
    }
    if (pbVar5[0x30] == uVar4) {
      param_4 = DAT_008911fc + uVar2 * 0x30 + 0x30;
      goto LAB_006bacd8;
    }
    uVar2 = uVar2 + 2;
  } while( true );
}



void fn_006ba8bc(int param_1)

{
  if (*(int **)(param_1 + 0x8c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ba8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))();
  return;
}



void fn_006ba7d4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006ba7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x74) + 0xc))();
  return;
}



void fn_006b8370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00661714(param_2);
  fn_00154ac8(*(undefined4 *)(&DAT_007c44a8 + iVar1 * 8));
  return;
}



int fn_006b8130(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  do {
    iVar1 = fn_0028bcb0((int)(short)uVar2);
    if (iVar1 != 0) {
      iVar1 = fn_006a7ae8(uVar2 & 0xff);
      if ((iVar1 == param_2) && (iVar1 = fn_00289500(uVar2 & 0xff), iVar1 != 0)) {
        iVar3 = iVar3 + 1;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xf8);
  return iVar3;
}



void fn_006b7a48(undefined4 param_1,short param_2)

{
  fn_006b771c(param_1,0x1ef,0x206,(int)param_2);
  return;
}



void fn_006b7948(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00101a50(auStack_88,0x80,L"patch:/data/Model/%s.bch",param_2);
  fn_006b7674(param_1,0x156,0x17d,auStack_88);
  return;
}



void fn_006b78d8(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00101a50(auStack_88,0x80,L"rom:/data/Motion/%s.bch",param_2);
  fn_006b7674(param_1,0x1ba,0x1c3,auStack_88);
  return;
}



void fn_006b7868(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00101a50(auStack_88,0x80,L"rom:/data/Motion/%s.bch",param_2);
  fn_006b7674(param_1,0x188,0x1b9,auStack_88);
  return;
}



void fn_006b77f0(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00101a50(auStack_88,0x80,L"rom:/data/Field/Obj/%s.bch",param_2);
  fn_006b7674(param_1,0xbe,0x135,auStack_88);
  return;
}



void fn_006b776c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_88 [128];
  
  fn_00101a50(auStack_88,0x80,L"rom:/data/Model/%s.bch",param_2);
  fn_006b7674(param_1,0x142,0x155,auStack_88);
  return;
}



void fn_006b7664(int param_1,int param_2)

{
  fn_00145ac0(*(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14));
  return;
}



undefined4 fn_006b627c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint local_20;
  int iStack_1c;
  
  fn_00114248(&local_20);
  iVar2 = iStack_1c;
  uVar1 = local_20;
  piVar3 = (int *)(*(int *)(param_1 + 4) + param_2 * 8 + 0x280);
  if ((*piVar3 == 0 && piVar3[1] == 0) ||
     (fn_006915dc(&local_20),
     (int)(iVar2 - (iStack_1c + (uint)(uVar1 < local_20))) < 0 ==
     (SBORROW4(iVar2,iStack_1c) != SBORROW4(iVar2 - iStack_1c,(uint)(uVar1 < local_20))))) {
    return 1;
  }
  return 0;
}



void fn_006b5e20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  fn_006b44e4(param_1,param_3,param_4,param_5,param_6,param_7,param_1 + param_2 * 0x24 + 0x28);
  return;
}



void fn_006b561c(int *param_1,int param_2)

{
  if (*(int *)(*(int *)(*param_1 + 0x24) + param_2 * 4) == -1) {
    return;
  }
  fn_006f6e30(*param_1 + 0xc);
  return;
}



void fn_006b55f8(int *param_1,int param_2)

{
  if (*(int *)(*(int *)(*param_1 + 0x30) + param_2 * 4) == -1) {
    return;
  }
  fn_006f6e30(*param_1 + 0xc);
  return;
}



void fn_006b5374(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 8) + 7) == '\0') {
    fn_006b8970(*(undefined4 *)(*(int *)(param_1 + 8) + 0x80));
    return;
  }
  return;
}



void fn_006b4ef8(void)

{
  return;
}



undefined1 * fn_006b37a0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  
  puVar3 = auStack_28;
  puVar1 = (undefined1 *)(uint)*(byte *)(*(int *)(param_1 + 4) + 9);
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = fn_00235ba0(auStack_20);
    fn_006b3494(param_1,param_2,uVar2);
    puVar3 = auStack_20;
  }
  else {
    if (puVar1 == &DAT_00000001) {
      uVar2 = fn_00235c3c(auStack_18);
      fn_006b3494(param_1,param_2,uVar2);
      return auStack_18;
    }
    if (puVar1 != (undefined1 *)0x2) {
      return puVar1;
    }
    uVar2 = fn_00235bb4(auStack_28);
    fn_006b3494(param_1,param_2,uVar2);
  }
  return puVar3;
}


