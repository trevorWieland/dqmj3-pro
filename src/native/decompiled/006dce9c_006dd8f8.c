#include "006dce9c_006dd8f8.h"



undefined2 fn_006dd8f8(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  
  uVar4 = (uint)*(ushort *)(param_3 + 0x22);
  pcVar7 = (char *)(*(int *)(param_4 + 8) + uVar4 * 0x218);
  pcVar3 = (char *)(*(int *)(param_4 + 8) + uVar4 * 0x218);
  cVar1 = *pcVar7;
  puVar5 = (uint *)*param_2;
  cVar2 = pcVar7[1];
  if (uVar4 == param_5) {
    uVar4 = 0;
    if (cVar1 != '\0') {
      uVar4 = 5;
    }
    *puVar5 = uVar4 | (uint)(cVar2 != '\0') << 0x10;
    puVar5[1] = 0x500e0;
    puVar5[2] = *(uint *)(pcVar3 + 2) & 0xffffff;
    puVar5[3] = 0xf00e1;
    *param_2 = puVar5 + 4;
  }
  else {
    uVar4 = 0;
    if (cVar1 != '\0') {
      uVar4 = 5;
    }
    *puVar5 = uVar4 | (uint)(cVar2 != '\0') << 0x10;
    puVar5[1] = 0x500e0;
    puVar5[2] = *(uint *)(pcVar3 + 2) & 0xffffff;
    puVar5[3] = 0xf00e1;
    puVar6 = puVar5 + 4;
    if (*pcVar3 != '\0') {
      fn_0017821c(puVar6,pcVar3 + 8,0x210);
      puVar6 = puVar5 + 0x88;
    }
    *param_2 = puVar6;
  }
  return *(undefined2 *)(param_3 + 0x22);
}



void fn_006dd3dc(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((*param_3 & 1) == 0) {
    puVar4 = (undefined4 *)fn_0016fe54(*param_2,1);
    *param_2 = (int)puVar4;
    if ((*param_3 & 0x20) == 0) {
      *puVar4 = 0;
      puVar3 = puVar4 + 2;
      puVar4[1] = 0xf004e;
    }
    else {
      puVar3 = (undefined4 *)fn_006dd1a4(param_4 + 0x2f,puVar4);
    }
    *param_2 = (int)puVar3;
  }
  else {
    iVar6 = *param_4 + (uint)param_3[0x10] * 0x278 + 4;
    fn_006de298(param_1,param_2,iVar6);
    fn_0044ee24(param_2,*(undefined4 *)(param_3 + 6),*(int *)(param_3 + 8) << 2);
    iVar2 = 0;
    do {
      if (*(char *)(iVar6 + iVar2 + 0x164) != '\0') {
        iVar5 = iVar6 + iVar2 * 0x2c;
        puVar4 = (undefined4 *)*param_2;
        bVar1 = *(byte *)(iVar5 + 4);
        *puVar4 = *(undefined4 *)(iVar5 + 0x14);
        puVar4[1] = (uint)bVar1 * 0x10 + 0x144 | 0x803f0000;
        puVar4[2] = *(undefined4 *)(iVar5 + 0x18);
        puVar4[3] = *(undefined4 *)(iVar5 + 0x28);
        puVar4[4] = *(undefined4 *)(iVar5 + 0x2c);
        puVar4[5] = 0;
        *param_2 = (int)(puVar4 + 6);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  fn_0044ee24(param_2,*(undefined4 *)(*param_1 + 200),*(int *)(*param_1 + 0xcc) << 2);
  fn_0044ee24(param_2,param_1[4],param_1[5] << 2);
  fn_0044ee24(param_2,*(undefined4 *)(param_3 + 0xa0),*(int *)(param_3 + 0xa2) << 2);
  fn_0044ee24(param_2,*(undefined4 *)(param_3 + 0xa4),*(int *)(param_3 + 0xa6) << 2);
  fn_0044ee24(param_2,*(undefined4 *)(param_3 + 0xa8),*(int *)(param_3 + 0xaa) << 2);
  return;
}



uint * fn_006dd37c(char *param_1,uint *param_2)

{
  *param_2 = (uint)(byte)param_1[3] << 8 | (uint)(byte)param_1[4] << 0x10 |
             (uint)(byte)param_1[1] | (uint)(byte)param_1[2] << 4 | (uint)(byte)param_1[5] << 0x14 |
             (uint)(byte)param_1[6] << 0x18;
  param_2[1] = *(ushort *)(&DAT_007e43a4 + *param_1 * 2) | 0xf0000;
  return param_2 + 2;
}



uint * fn_006dd340(char *param_1,uint *param_2)

{
  *param_2 = (uint)(byte)param_1[1] | (uint)(byte)param_1[2] << 0x10;
  param_2[1] = *(ushort *)(&DAT_007e43a4 + *param_1 * 2) + 4 | 0xf0000;
  return param_2 + 2;
}



uint * fn_006dd2dc(char *param_1,uint *param_2)

{
  *param_2 = (uint)(byte)param_1[3] << 8 | (uint)(byte)param_1[4] << 0xc |
             (uint)(byte)param_1[1] | (uint)(byte)param_1[2] << 4 | (uint)(byte)param_1[5] << 0x10 |
             (uint)(byte)param_1[6] << 0x14;
  param_2[1] = *(ushort *)(&DAT_007e43a4 + *param_1 * 2) + 1 | 0xf0000;
  return param_2 + 2;
}



uint * fn_006dd2a0(char *param_1,uint *param_2)

{
  *param_2 = (uint)(byte)param_1[1] | (uint)(byte)param_1[2] << 0x10;
  param_2[1] = *(ushort *)(&DAT_007e43a4 + *param_1 * 2) + 2 | 0xf0000;
  return param_2 + 2;
}



uint * fn_006dd0a0(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = param_1[2];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (param_1[4] == '\f') {
    iVar3 = 2;
  }
  else {
    iVar3 = 0;
  }
  *param_2 = iVar2 << 2 | (uint)(byte)param_1[1] << 1 | iVar3 << 4 |
             (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18 | (uint)(byte)param_1[3] << 0x1c;
  param_2[1] = *(ushort *)(&DAT_007e4398 + *param_1 * 2) | 0x90000;
  return param_2 + 2;
}



uint * fn_006dd02c(char *param_1,uint *param_2)

{
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[1] << 4 | (uint)(byte)param_1[2] << 8 |
             (uint)(byte)param_1[3] << 0x10 | (uint)(byte)param_1[4] << 0x18;
  param_2[1] = 0xf0105;
  param_2[2] = (uint)(byte)param_1[6] << 4 | (uint)(byte)param_1[7] << 8 | (uint)(byte)param_1[5];
  param_2[3] = 0xf0106;
  return param_2 + 4;
}



uint * fn_006dcfe8(char *param_1,uint *param_2)

{
  *param_2 = (uint)(byte)param_1[2] << 0x10 | (uint)(byte)param_1[1] << 0x18 |
             *(uint *)(param_1 + 4);
  param_2[1] = *(ushort *)(&DAT_007e439e + *param_1 * 2) | 0xf0000;
  return param_2 + 2;
}



uint * fn_006dcfbc(char *param_1,uint *param_2)

{
  *param_2 = (uint)(*param_1 != '\0') | (uint)(byte)param_1[1] << 4;
  param_2[1] = 0x10107;
  return param_2 + 2;
}



undefined * fn_006dcf2c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006dcf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    return puVar1;
  }
  if (((DAT_008c6308 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6308), iVar2 != 0)) {
    uVar3 = fn_00171688();
    fn_001781f0(&DAT_008f9ea8,uVar3);
    DAT_008f9ed8 = 0x3f800000;
    DAT_008f9edc = 0x3f800000;
    DAT_008f9ee0 = 0x3f800000;
    DAT_008f9ee4 = 0x7e1;
  }
  return &DAT_008f9ea8;
}



undefined * fn_006dce9c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006dceb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
    return puVar1;
  }
  if (((DAT_008c6308 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6308), iVar2 != 0)) {
    uVar3 = fn_00171688();
    fn_001781f0(&DAT_008f9ea8,uVar3);
    DAT_008f9ed8 = 0x3f800000;
    DAT_008f9edc = 0x3f800000;
    DAT_008f9ee0 = 0x3f800000;
    DAT_008f9ee4 = 0x7e1;
  }
  return &DAT_008f9ea8;
}


