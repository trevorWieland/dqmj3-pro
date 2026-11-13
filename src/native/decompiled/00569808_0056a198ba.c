#include "00569808_0056a198ba.h"



void fn_00569f04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x78) + 0x18))();
  iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x38))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x34))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x5c))();
      iVar1 = iVar1 + 8;
      fn_0056a198(param_1,iVar1);
      (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
                (*(int **)(param_1 + 0x78),iVar1 % 4,
                 (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2,1);
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x5c))();
    iVar1 = iVar1 + -8;
    fn_0056a198(param_1,iVar1);
    (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
              (*(int **)(param_1 + 0x78),iVar1 % 4,
               (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2,1);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x3c))();
  if ((iVar1 == 0) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x40))(), iVar1 == 0)) {
    return;
  }
  fn_001ca2b8(*(int *)(param_1 + 0x78),(*(int *)(*(int *)(param_1 + 0x78) + 0xcc) + 1) % 2);
  iVar1 = 0;
  do {
    uVar2 = fn_006c3c2c(*(undefined4 *)(param_1 + 0xa8),
                         iVar1 + *(int *)(*(int *)(param_1 + 0x78) + 0xcc) * 0xc);
    fn_003f7cdc(*(undefined4 *)(param_1 + 0xa8),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + iVar1 * 4),uVar2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x5c))();
  switch(iVar1) {
  case 0:
  case 4:
  case 8:
    iVar1 = iVar1 + 3;
    break;
  case 3:
  case 7:
  case 0xb:
    iVar1 = iVar1 + -3;
  }
  fn_0056a198(param_1,iVar1);
                    /* WARNING: Could not recover jumptable at 0x0056a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
            (*(int **)(param_1 + 0x78),iVar1 % 4,(int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2
             ,1);
  return;
}



void fn_00569c2c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = fn_001481c8(param_1[0x19],DAT_00890a10,&DAT_00569ee4,1,1);
  param_1[0x1a] = iVar1;
  iVar1 = fn_001480d0(param_1[0x19],iVar1,DAT_00890a14,&DAT_00569eec,1,1,0);
  param_1[0x1b] = iVar1;
  iVar1 = fn_00178f9c(param_1[0x19],iVar1);
  *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 0xfe | 1;
  uVar2 = fn_00689220(iVar1,DAT_00890a18);
  iVar3 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar3 != 0) {
    iVar7 = param_1[0x12];
    uVar4 = (**(code **)(*param_1 + 8))(param_1);
    piVar5 = (int *)fn_0031fee0(iVar3,uVar4,uVar2,1,iVar7);
  }
  piVar6 = (int *)param_1[0x1d];
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x1d] = (int)piVar5;
  }
  (**(code **)(*(int *)param_1[0x1d] + 0x10))();
  uVar2 = fn_0022f584((&PTR_s_MenuMessageChangeColorParts000_007bd07c)
                       [*(char *)(param_1[0x2a] + 0x10)],0);
  fn_0031fe38(param_1[0x1d],uVar2);
  fn_0031f8fc(param_1[0x1d],1,0,0,0xffffffff);
  iVar3 = param_1[0x1d];
  *(undefined1 *)(iVar3 + 0x7f) = 5;
  fn_0031ef00(iVar3,0,0);
  iVar3 = param_1[0x1d];
  *(undefined1 *)(iVar3 + 0x83) = 1;
  fn_0031f954(iVar3,0);
  iVar3 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar3 != 0) {
    piVar5 = (int *)fn_001caa80(iVar3,param_1[1],0);
  }
  piVar6 = (int *)param_1[0x1e];
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x1e] = (int)piVar5;
  }
  *(int **)(param_1[0x1e] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x1e] + 0x24))((int *)param_1[0x1e],4,3);
  *(undefined1 *)(param_1[0x1e] + 0x45) = 0;
  *(undefined1 *)(param_1[0x1e] + 0x44) = 0;
  *(undefined4 *)(param_1[0x1e] + 0x10) = 0x100094e;
  fn_001ca2b8(param_1[0x1e],0);
  *(undefined4 *)(param_1[0x1e] + 200) = 2;
  iVar3 = 0;
  do {
    iVar7 = param_1[0x22];
    uVar2 = fn_001828f0(iVar1,(&DAT_00890a34)[iVar3]);
    *(undefined4 *)(iVar7 + iVar3 * 4) = uVar2;
    iVar7 = param_1[0x26];
    uVar2 = fn_006888c0(iVar1,(&PTR_s_color_box_00_00890a64)[iVar3]);
    *(undefined4 *)(iVar7 + iVar3 * 4) = uVar2;
    iVar7 = iVar3 + 1;
    iVar3 = *(int *)(param_1[0x26] + iVar3 * 4);
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
    iVar3 = iVar7;
  } while (iVar7 < 0xc);
  iVar3 = fn_001828f0(iVar1,DAT_00890a24);
  param_1[0x25] = iVar3;
  uVar2 = fn_00689220(iVar1,DAT_00890a1c);
  iVar1 = fn_00689210(uVar2,DAT_00890a20);
  param_1[0x29] = iVar1;
  return;
}


