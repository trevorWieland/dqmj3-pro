#include "00122c9c_00123520ba.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


int fn_001231e8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_60 [3];
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48 [2];
  undefined4 ***local_40;
  undefined4 local_3c;
  int local_38 [2];
  int local_30;
  int local_28;
  int local_20;
  
  local_40 = &local_40;
  local_48[0] = 0;
  local_48[1] = 1;
  local_3c = 1;
  local_38[0] = DAT_0089a670;
  local_50 = 1;
  uStack_4c = 0;
  local_60[0] = 1;
  local_60[1] = 2;
  uStack_54 = 0xc;
  local_60[2] = param_4;
  iVar1 = fn_0013b294(local_38,local_48,0,3,1,local_40);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x123258);
  }
  iVar1 = local_48[0];
  piVar2 = (int *)fn_001587b0(&DAT_008e33e8);
  if (piVar2 == (int *)0x0) {
    svc_0x23();
    fn_0015e590(0xf96047a2,0x1232e8);
  }
  else {
    *piVar2 = (int)&DAT_008524d8;
    piVar2[1] = iVar1;
  }
  iVar1 = 0;
  if (param_3 == 0) {
LAB_00123314:
    iVar3 = param_1 * 0x20 + param_2 * 0x18 + iVar1;
LAB_00123324:
    if (0 < iVar3) goto LAB_00123340;
  }
  else {
    iVar1 = (**(code **)*piVar2)(piVar2,local_60,0,0,&local_40,0x28);
    iVar3 = -1;
    if ((iVar1 < 0) || (local_60[0] != 0x28)) goto LAB_00123324;
    iVar1 = local_28 + local_20 + local_38[0] + local_30;
    if (-1 < iVar1) goto LAB_00123314;
  }
  svc_0x23();
  fn_0015e590(0xf96047a2,0x123340);
LAB_00123340:
  (**(code **)(*piVar2 + 0x30))(piVar2);
  return iVar3;
}



undefined4 fn_00123070(undefined4 param_1)

{
  int iVar1;
  int *unaff_r4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 *puVar2;
  int *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_24 = (int *)0x0;
  local_20 = 5;
  uStack_1c = 0;
  puVar2 = &local_20;
  local_18 = 0;
  iVar1 = fn_0013b134(&local_24);
  if (-1 < iVar1) {
    iVar1 = 0;
    unaff_r4 = local_24;
  }
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x1230c4);
  }
  iVar1 = fn_001233c4(param_1,unaff_r4,0,0,in_stack_00000000,in_stack_00000004,puVar2);
  if ((iVar1 < 0) && ((**(code **)(*unaff_r4 + 0x30))(unaff_r4), iVar1 < 0)) {
    fn_0015e590(iVar1,0x123104);
  }
  return 0;
}


