#include "003a6c48_003a760ca.h"



void fn_003a745c(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x7d) = 0x10;
  iVar1 = fn_00353250(*(undefined4 *)(param_1 + 0x70),param_1 + 0x7d);
  if (iVar1 == 0) {
    fn_003a6d3c(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83),1,1);
  }
  return;
}



void fn_003a7414(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar2 + 0xe4);
  pcVar3 = (char *)fn_00174828(DAT_008977e4);
  if (cVar1 + -1 == (int)*pcVar3) {
    fn_003a563c(param_1,5);
    return;
  }
  return;
}



void fn_003a6e94(undefined4 param_1,undefined4 param_2)

{
  fn_003a704c();
  fn_003a704c(param_1,2,0,1,0);
  fn_003a704c(param_1,4,0,1,0);
  fn_003a704c(param_1,3,0,1,0);
  fn_003a74ac(param_1,0);
  fn_003a760c(param_1);
  switch(param_2) {
  case 0:
    fn_003a704c(param_1,0,0,1,0);
    fn_003a704c(param_1,5,0,1,0);
    fn_003a704c(param_1,6,1,0,0);
    break;
  case 1:
  case 3:
  case 4:
    fn_003a704c(param_1,6,0,1,0);
    fn_003a704c(param_1,5,0,1,0);
    fn_003a704c(param_1,0,1,0,0);
    return;
  case 2:
    fn_003a704c(param_1,0,0,1,0);
    fn_003a704c(param_1,5,0,1,0);
    fn_003a704c(param_1,6,1,0,1);
    return;
  }
  return;
}



void fn_003a6e34(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0xac) + 0x44) =
       param_2 ^ 1 | *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) & 0xfe;
  return;
}



void fn_003a6d3c(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar5 = 0;
  cVar1 = *param_2;
  if (0 < param_4) {
    do {
      iVar4 = (int)(char)((char)param_3 + (char)param_4);
      iVar3 = (int)*param_2;
      if ((param_3 < iVar4) && (iVar3 = (int)(char)(*param_2 + '\x01'), iVar4 <= iVar3)) {
        iVar3 = param_3;
      }
      *param_2 = (char)iVar3;
      if (param_6 == 0) break;
      iVar3 = fn_00174828(DAT_008977e4);
      iVar3 = iVar3 + *param_2 * 0x418;
      if (0 < *(short *)(iVar3 + -0x4080)) {
        cVar2 = *(char *)(iVar3 + -0x4019);
        bVar6 = cVar2 == '\0';
        if (bVar6) {
          cVar2 = *(char *)(iVar3 + -0x400a);
        }
        bVar7 = bVar6 && cVar2 == '\0';
        if (bVar6 && cVar2 == '\0') {
          bVar7 = *(char *)(iVar3 + -0x4018) == '\0';
        }
        if (bVar7) break;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < param_4);
  }
  if ((param_5 != 0) && (cVar1 != *param_2)) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_003a6c48(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar5 = 0;
  cVar2 = *param_2;
  if (0 < param_4) {
    cVar1 = (char)param_3 + (char)param_4;
    do {
      cVar3 = *param_2;
      if ((param_3 < cVar1) && (cVar3 = *param_2 + -1, cVar3 < param_3)) {
        cVar3 = cVar1 + -1;
      }
      *param_2 = cVar3;
      if (param_6 == 0) break;
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + *param_2 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar3 = *(char *)(iVar4 + -0x4019);
        bVar6 = cVar3 == '\0';
        if (bVar6) {
          cVar3 = *(char *)(iVar4 + -0x400a);
        }
        bVar7 = bVar6 && cVar3 == '\0';
        if (bVar6 && cVar3 == '\0') {
          bVar7 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar7) break;
      }
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < param_4);
  }
  if ((param_5 != 0) && (cVar2 != *param_2)) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


