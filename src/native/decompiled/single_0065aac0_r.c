#include "single_0065aac0_r.h"


extern undefined4 _local_38;
extern undefined4 _local_34;

void fn_0065aac0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int extraout_r1;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_40;
  int local_3c;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined1 local_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  
  if ((char)param_1[0x16] != '\0') {
    fn_001db0c0(param_1);
    switch((char)param_1[0x68]) {
    case '\x02':
      param_1[0x6a] = param_1[0x6a] + 1;
      iVar9 = fn_006f733c(DAT_008977e0);
      pfVar1 = (float *)fn_006f7770(DAT_008977e0);
      fVar13 = (float)param_1[8] - *pfVar1;
      fVar11 = (float)param_1[9] - pfVar1[1];
      fVar12 = (float)param_1[10] - pfVar1[2];
      if (((DAT_008918b8 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008918b8), iVar2 != 0)) {
        fVar10 = 50.0;
        fn_001a4a80();
        DAT_008918bc = fVar10;
      }
      if ((iVar9 != 0) &&
         (in_fpscr = in_fpscr & 0xfffffff,
         fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12 < DAT_008918bc)) {
        fn_00318bf4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8),1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      iVar9 = (int)(300.0 - SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12));
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      (**(code **)(*param_1 + 0x44))(param_1,0,4);
      iVar2 = fn_006ec21c(param_1[0x39],0);
      fn_00300f74(param_1[0x6a],(int)*(float *)(iVar2 + 0xc));
      param_1[0x6a] = extraout_r1;
      VectorSignedToFloat(extraout_r1,(byte)(in_fpscr >> 0x16) & 3);
      fn_005ef320(param_1[0x39]);
      fn_005eeda8(param_1[0x39]);
      uVar3 = fn_0017fde4(param_1[0x39]);
      uVar3 = fn_006ebf30(uVar3,0);
      uVar4 = fn_0017fde4(param_1[0x39]);
      uVar4 = fn_006ebf30(uVar4,1,0);
      uVar5 = fn_0017fde4(param_1[0x39]);
      puVar6 = (uint *)fn_006ebef8(uVar5,0);
      uVar7 = *puVar6;
      local_40 = (uVar7 >> 8 & 0xff) - iVar9;
      piVar8 = &local_3c;
      if (-1 < local_40) {
        piVar8 = &local_40;
      }
      local_3c = 0;
      uStack_36 = (undefined2)(uVar7 >> 0x10);
      _local_38 = CONCAT11((char)*piVar8,(char)uVar7);
      uVar5 = fn_0017fde4(param_1[0x39]);
      puVar6 = (uint *)fn_006ebef8(uVar5,1);
      uVar7 = *puVar6;
      local_40 = 0;
      local_3c = (uVar7 >> 8 & 0xff) - iVar9;
      piVar8 = &local_40;
      if (-1 < local_3c) {
        piVar8 = &local_3c;
      }
      uStack_32 = (undefined2)(uVar7 >> 0x10);
      _local_34 = CONCAT11((char)*piVar8,(char)uVar7);
      (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
      uVar5 = fn_0017fde4(param_1[0x39]);
      fn_005ea590(uVar5,0,0,uVar3);
      uVar3 = fn_0017fde4(param_1[0x39]);
      fn_005ea590(uVar3,1,0,uVar4);
      uVar3 = fn_0017fde4(param_1[0x39]);
      fn_005ea354(uVar3,0,&local_38);
      uVar3 = fn_0017fde4(param_1[0x39]);
      fn_005ea354(uVar3,1,&local_34);
      return;
    case '\x03':
      iVar9 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar9 != 0) {
        *(undefined1 *)(param_1 + 0x68) = 4;
                    /* WARNING: Could not recover jumptable at 0x0065ae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x54))(param_1,0);
        return;
      }
    }
  }
  return;
}


