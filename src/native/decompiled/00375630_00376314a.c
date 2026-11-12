#include "00375630_00376314a.h"



void fn_00375d48(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((uint)param_1[0x36] < 2) {
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    fn_002d6808(DAT_00897830);
    fn_0037040c(DAT_00897830);
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x144))(param_1);
    fn_006899f4(param_1,param_1[0x2c],uVar2,uVar1);
    param_1[0x36] = 3;
    iVar3 = fn_00445fb8(param_1[0x35]);
    if ((iVar3 != 0) && (*(char *)(param_1[0x35] + 10) == '\0')) {
      fn_0068ab44(param_1,0x100094c);
      return;
    }
  }
  return;
}



undefined4 * fn_003758f4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00828624;
  fn_0028e434(puVar1[4],&DAT_007d5368);
  fn_0028e434(puVar1[5],&DAT_007d578c);
  fn_0028e434(puVar1[3],&DAT_007d5c78);
  fn_0028e434(puVar1[6],&DAT_007d5cc8);
  return puVar1;
}



void fn_003758c4(undefined4 param_1)

{
  fn_001f7624();
  fn_001f748c(param_1,*(undefined4 *)(DAT_00897830 + 0x68),1);
  return;
}



void fn_00375794(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = fn_0029e4e0(*(undefined4 *)(param_1 + 4));
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_0016561c(uVar3,(int)*(char *)(param_1 + 4));
  if (*(int *)(param_1 + 8) < iVar2) {
    do {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (0 < iVar4) {
        do {
          uVar3 = fn_00182994(DAT_008977e4);
          iVar5 = fn_00174a74(uVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
          if (*(int *)(param_1 + 8) < iVar5) {
            fn_0029e160(iVar5,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
            uVar3 = fn_00182994(DAT_008977e4);
            iVar5 = fn_001659c0(uVar3,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 0xc));
            if (iVar5 - 0x10U < 8) {
              fn_0029eca0(*(undefined4 *)(param_1 + 0xc),1,1,*(undefined4 *)(param_1 + 4),
                           *(undefined4 *)(param_1 + 8),0,param_1 + 0x1c,param_1 + 0x1d);
            }
          }
          iVar5 = *(int *)(param_1 + 0xc) + 1;
          *(int *)(param_1 + 0xc) = iVar5;
        } while (iVar5 < iVar4);
      }
      if (1 < iVar2) {
        uVar1 = 1;
        *(undefined4 *)(param_1 + 0x18) = 0xf;
        goto LAB_003758a4;
      }
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
    } while (iVar5 < iVar2);
  }
  uVar1 = 2;
LAB_003758a4:
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  return;
}



void fn_003756e4(undefined4 *param_1)

{
  *param_1 = &DAT_008285fc;
  fn_001f5bac(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1],param_1[3],4);
  fn_002feef8(param_1);
  return;
}



undefined4 *
fn_003756a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &DAT_008285fc;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  fn_001f5bac(*(undefined4 *)(DAT_008977e0 + 0x30),param_2,param_3,4);
  return param_1;
}



undefined4 *
fn_00375630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  
  puVar1 = (undefined4 *)fn_0016dc6c(param_1,param_4);
  *puVar1 = &DAT_008285c8;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = in_s0;
  return puVar1;
}


