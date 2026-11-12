#include "00178fb8_00179728bba.h"



void fn_001794fc(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  int in_s0;
  int in_s1;
  int in_s2;
  undefined1 local_2c [8];
  
  fn_00179728();
  param_1[0x16] = param_2;
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,0xb,4);
    *(undefined1 *)((int)param_1 + 0x86) = 0;
    goto LAB_0017970c;
  }
  param_1[0x14] = param_2;
  fn_00179a80(param_2,*(undefined1 *)((int)param_1 + 0x35));
  iVar8 = param_1[1];
  uVar9 = *(undefined4 *)(param_1[0x14] + 4);
  iVar2 = (int)*(char *)((int)param_1 + 0x35);
  uVar5 = iVar2 - 0x10;
  bVar10 = uVar5 < 4;
  if (!bVar10) {
    uVar5 = iVar2 - 0x18;
  }
  if ((bVar10 || uVar5 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
    local_2c[0] = 0x20;
  }
  else {
    local_2c[0] = 0x21;
  }
  uVar3 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_00175dcc(uVar3,local_2c);
  iVar4 = fn_00174828(DAT_008977e4);
  iVar4 = iVar4 + *(char *)(param_1[0x16] + 0x35) * 0x418;
  psVar7 = (short *)(iVar4 + -0x4080);
  cVar1 = *(char *)((int)param_1 + 0x35);
  if (*(char *)(iVar4 + -0x4027) < '\x02') {
    if (1 < (int)cVar1 - 0x20U) goto LAB_001796a0;
  }
  else if (1 < (int)cVar1 - 0x20U) {
    iVar6 = param_1[0x14];
    if (((((iVar6 != 0 && psVar7 != (short *)0x0) && iVar2 != 0) && ((int)cVar1 - 0x22U < 2)) &&
        (*(char *)(iVar4 + -0x4027) == '\x02')) &&
       ((*(int *)(iVar2 + 0x50) != 0 &&
        (*(char *)(iVar6 + 0x35) == *(char *)(*(int *)(iVar2 + 0x50) + 0x35))))) {
      uVar9 = fn_001797c4(param_1);
      fn_00188f58(iVar8,*(undefined4 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 0x68),uVar9,iVar6 + 0x1c
                   ,0);
      *(undefined1 *)((int)param_1 + 0x86) = 1;
      goto LAB_0017970c;
    }
LAB_001796a0:
    uVar3 = fn_001797c4(param_1);
    fn_0017b048(iVar8,uVar9,uVar3,(char)param_1[0x1a],(int)*(char *)(iVar4 + -0x4027),(int)*psVar7,
                 0);
    goto LAB_0017970c;
  }
  uVar3 = fn_001797c4(param_1);
  fn_0017aec0(iVar8,uVar9,uVar3,(char)param_1[0x1a],(int)*(char *)(iVar4 + -0x4027),(int)*psVar7,0)
  ;
LAB_0017970c:
  fn_001829a0(param_1);
  param_1[3] = in_s0;
  param_1[4] = in_s1;
  param_1[5] = in_s2;
  return;
}


