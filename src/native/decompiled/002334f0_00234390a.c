#include "002334f0_00234390a.h"



/* WARNING: Removing unreachable block (ram,0x00233a90) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00233a94 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_002339e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_18;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  puVar1[0x15] = 0;
  *puVar1 = &DAT_0081cfc0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0xffffffff;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = 0;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  puVar1[0x1e] = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 0xff;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)((int)puVar1 + 0x8d) = 0;
  puVar1[0x24] = 0xffffffff;
  puVar1[0x25] = &DAT_00859260;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  *(undefined1 *)((int)puVar1 + 0x99) = 0;
  *(undefined1 *)((int)puVar1 + 0x9a) = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0xffffffff;
  piVar3 = puVar1 + 0x2b;
  puVar1[0x2a] = 0xffffffff;
  *piVar3 = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  local_18 = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar3 = (int)puVar2;
  for (; local_18 != 0; local_18 = local_18 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x2d] = *piVar3 + 0x80;
  puVar1[0x2c] = *piVar3;
  return puVar1;
}



void fn_0023362c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [5];
  
  fVar3 = 0.0;
  if ((char)param_1[0x1d] == '\0') {
    if ((char)param_1[0x23] != '\0') {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = fVar3;
        DAT_008f9e30 = fVar3;
        DAT_008f9e34 = fVar3;
      }
      in_fpscr = in_fpscr & 0xfffffff;
      if ((((float)param_1[0x20] == DAT_008f9e2c) && ((float)param_1[0x21] == DAT_008f9e30)) &&
         (in_s0 = (float)param_1[0x22], in_s1 = DAT_008f9e34, in_s0 == DAT_008f9e34))
      goto LAB_002337ac;
    }
    local_30 = (float)param_1[2] + (float)param_1[0x20];
    in_s2 = (float)param_1[3] + (float)param_1[0x21];
    local_28 = (float)param_1[4] + (float)param_1[0x22];
    in_s1 = 0.4;
    in_s0 = (float)param_1[0x21] - 0.4;
    param_1[0x21] = (int)in_s0;
    local_2c = in_s2;
    fn_0068e960(DAT_008977e8);
    uVar2 = fn_00664c4c();
    fn_001cc480(param_1,&local_30,uVar2,1);
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
    *(char *)(param_1 + 0x23) = (char)iVar1;
    if (iVar1 != 0) {
      param_1[0x21] = (int)fVar3;
    }
    if (0xc47a0000 < (uint)param_1[3]) {
      fn_00144810(DAT_008977e8);
      iVar1 = fn_001cc324();
      in_s0 = 100.0;
      local_24[0] = fVar3;
      if (iVar1 == 3) {
        in_s1 = -350.0;
        local_24[1] = 100.0;
        local_24[2] = -350.0;
        (**(code **)(*param_1 + 0x1c))(param_1,local_24);
      }
      else {
        local_24[1] = 100.0;
        local_24[2] = fVar3;
        (**(code **)(*param_1 + 0x1c))();
      }
      param_1[0x21] = (int)fVar3;
    }
  }
LAB_002337ac:
  if (param_1[0x15] != 0) {
    fn_0068f4ac(param_1[0x15],param_1 + 2,param_1[0x16]);
    param_1[2] = (int)((float)param_1[2] + in_s0);
    param_1[3] = (int)((float)param_1[3] + in_s1);
    param_1[4] = (int)((float)param_1[4] + in_s2);
  }
  fn_00232e34(param_1);
  (**(code **)(*(int *)param_1[1] + 0x18))((int *)param_1[1],0);
  if ((char)param_1[0x17] != '\0') {
    if ((char)param_1[0x1d] != '\x02') {
      local_2c = (float)VectorSignedToFloat(0x1e - param_1[0x1a],(byte)(in_fpscr >> 0x16) & 3);
      local_2c = local_2c * 0.033333335;
      local_30 = fVar3;
      (**(code **)(*param_1 + 0x34))();
    }
    fn_00144810(DAT_008977e8);
    iVar1 = fn_006a8708();
    if ((iVar1 != param_1[0x18]) &&
       (iVar1 = param_1[0x1a], param_1[0x1a] = iVar1 + 1, 0x1d < iVar1 + 1)) {
      uVar2 = fn_0017fde4(param_1[1]);
      fn_0017fcfc(uVar2,1);
    }
  }
  if (param_1[0x24] != -1) {
    uVar2 = fn_0068c7e8(DAT_008977e8);
    iVar1 = fn_006b4cd0(uVar2,param_1[0x24]);
    if (iVar1 != 0) {
      param_1[0x24] = -1;
    }
  }
  fn_00233014(param_1);
  fn_001cc890(param_1);
  return;
}



void fn_002334f0(int *param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float local_8c [4];
  int local_7c;
  float local_78;
  int local_74;
  int local_70;
  float local_6c;
  int local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  undefined1 auStack_58 [76];
  
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  local_8c[1] = 0.0;
  local_8c[2] = 0.0;
  local_8c[3] = 0.0;
  local_70 = 0;
  local_6c = 100.0;
  local_68 = 0;
  local_64 = (float)param_1[2] + 0.0;
  fStack_5c = (float)param_1[4] + 0.0;
  local_60 = (float)param_1[3] + 100.0;
  fn_0068e960(DAT_008977e8);
  uVar1 = fn_00664c4c();
  fn_0023b858(uVar1,0,&local_64,local_8c + 1,auStack_58);
  local_74 = param_1[4];
  local_70 = param_1[2];
  local_7c = local_70;
  local_78 = (float)param_1[3];
  local_8c[0] = local_8c[2] + 1.0;
  pfVar2 = local_8c;
  if (local_8c[2] + 1.0 <= (float)param_1[3]) {
    pfVar2 = &local_78;
  }
  local_6c = *pfVar2;
  local_68 = local_74;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_70);
  return;
}


