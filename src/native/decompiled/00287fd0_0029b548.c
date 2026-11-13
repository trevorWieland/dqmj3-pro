#include "00287fd0_0029b548.h"



void fn_0029b548(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined4 uVar10;
  char local_4c [20];
  undefined4 local_38;
  undefined4 local_34;
  
  uVar10 = 0xc2c80000;
  uVar9 = 0x3f800000;
  iVar6 = *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x14) * 0xc4 + 0xf68;
  if (*(char *)(iVar6 + 6) == '\t') {
    iVar3 = fn_001667c8(iVar6 + 0x38,1);
    if (iVar3 != 0) {
      uVar4 = fn_00182994(DAT_008977e4);
      local_4c[4] = fn_001752ec(uVar4,1,(int)*(char *)(iVar6 + 5));
      iVar3 = (int)*(char *)(iVar6 + 5);
      local_4c[4] = local_4c[4] + *(char *)(iVar6 + 0x5a);
      if (*(char *)(iVar6 + 0x5a) < '\x01') {
        uVar4 = 4;
      }
      else {
        uVar4 = 3;
      }
      local_4c[0xc] = fn_00182944(1);
      iVar7 = fn_00182924(1);
      local_4c[0] = (char)iVar7;
      if (iVar7 < local_4c[0xc]) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if ((int)local_4c[4] < (int)local_4c[0xc]) {
        pcVar5 = local_4c + 0xc;
      }
      else {
        pcVar5 = local_4c + 4;
      }
      if (iVar7 < *pcVar5) {
        pcVar5 = local_4c;
      }
      cVar2 = *pcVar5;
      iVar7 = fn_0061be08(iVar3);
      if (iVar7 == 0) {
        iVar3 = (*(int *)(&DAT_0085ae44 + (uint)*(byte *)(param_1 + 3) * 4) - iVar3) + 0x14;
      }
      else {
        iVar3 = iVar3 + -0x10;
      }
      iVar7 = fn_00174858(DAT_008977e4);
      iVar7 = *(int *)(iVar7 + 0x50);
      local_38 = VectorSignedToFloat(*(undefined4 *)
                                      (&UNK_0085adc4 +
                                      iVar3 * 4 + (uint)*(byte *)(param_1 + 3) * 0x10),
                                     (byte)(in_fpscr >> 0x16) & 3);
      local_34 = uVar10;
      fn_0016e824(iVar7,&local_38,uVar4,(int)cVar2);
      *(undefined4 *)(iVar7 + 0x10) = uVar9;
    }
  }
  else {
    fn_0029a9e4(param_1,(int)*(char *)(iVar6 + 5),(int)*(short *)(iVar6 + 0x1c));
    sVar8 = *(short *)(iVar6 + 0x1c);
    iVar7 = (int)*(char *)(iVar6 + 5);
    uVar1 = *(undefined1 *)(iVar6 + 6);
    iVar3 = fn_0061be08(iVar7);
    uVar4 = 7;
    switch(uVar1) {
    case 3:
      if (sVar8 < 0) {
        uVar4 = 5;
      }
      else if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      break;
    case 4:
      if (sVar8 < 0) {
        uVar4 = 6;
      }
      else {
        uVar4 = 2;
      }
    }
    if (sVar8 < 0) {
      sVar8 = -sVar8;
    }
    iVar3 = fn_0061be08(iVar7);
    if (iVar3 == 0) {
      iVar7 = (*(int *)(&DAT_0085ae44 + (uint)*(byte *)(param_1 + 3) * 4) - iVar7) + 0x14;
    }
    else {
      iVar7 = iVar7 + -0x10;
    }
    iVar3 = fn_00174858(DAT_008977e4);
    iVar3 = *(int *)(iVar3 + 0x50);
    local_38 = VectorSignedToFloat(*(undefined4 *)
                                    (&UNK_0085adc4 + iVar7 * 4 + (uint)*(byte *)(param_1 + 3) * 0x10
                                    ),(byte)(in_fpscr >> 0x16) & 3);
    local_34 = uVar10;
    fn_0016e824(iVar3,&local_38,uVar4,(int)sVar8);
    *(undefined4 *)(iVar3 + 0x10) = uVar9;
  }
  uVar9 = fn_00182994(DAT_008977e4);
  fn_006adebc(uVar9,iVar6);
  uVar9 = fn_00182994(DAT_008977e4);
  fn_00159df4(uVar9,*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18));
  iVar3 = fn_001667e0(iVar6 + 10,2);
  if (iVar3 != 0) {
    fn_0029b844(param_1,(int)*(char *)(iVar6 + 5));
    iVar6 = fn_001c2540(iVar6 + 10);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



undefined4 fn_0028ce10(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar1 != 0) {
    iVar4 = *(int *)(*(int *)(iVar1 + 0x34) + 0xc);
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x14) < 0x1e) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    else if (iVar4 != 0) {
      fn_00174858(DAT_008977e4);
      fn_0015c948();
      fn_0017f8e0();
      *(undefined4 *)(param_1 + 0x14) = 0;
      if ((uint)(*(int *)(*(int *)(param_1 + 4) + 0x18) - *(int *)(*(int *)(param_1 + 4) + 0x14) >>
                1) <= (uint)(int)*(short *)(param_1 + 0x10)) {
        return 4;
      }
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    uVar6 = (uint)*(short *)(param_1 + 0x10);
    piVar5 = (int *)(*(int *)(param_1 + 4) + 0x14);
    uVar7 = *(int *)(*(int *)(param_1 + 4) + 0x18) - *piVar5 >> 1;
    if (uVar7 <= uVar6) {
      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar7);
      param_4 = uVar7;
    }
    uVar2 = fn_0022fd80((int)*(short *)(*piVar5 + uVar6 * 2),1,0,0,param_4);
    uVar6 = (uint)*(short *)(param_1 + 0x10);
    piVar5 = (int *)(*(int *)(param_1 + 4) + 0x14);
    uVar7 = *(int *)(*(int *)(param_1 + 4) + 0x18) - *piVar5 >> 1;
    if (uVar7 <= uVar6) {
      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar7);
    }
    fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(*piVar5 + uVar6 * 2),1);
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    fn_00174858(DAT_008977e4);
    uVar3 = fn_0015c948();
    fn_0017faa8(uVar3,uVar2,1,0);
    *(undefined1 *)(param_1 + 0xe) = 0;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0xd;
}



undefined4 fn_00288994(undefined4 param_1)

{
  undefined4 local_10;
  undefined1 local_c [12];
  
  fn_001488c4(param_1,&local_10,local_c);
  fn_001f5a08(DAT_00898898,local_10);
  return 0;
}



undefined4 fn_002884d0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = fn_006ad6cc(DAT_00898898);
  fn_001580cc(param_1,(int)sVar1);
  return 1;
}



undefined4 fn_002883b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  short local_10 [2];
  short local_c [2];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00288484,(char *)&DAT_00288470,(char *)&DAT_007c2f56,0xd31);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00288484,(char *)&DAT_00288470,(char *)&DAT_007c2f56,0xd34);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f542c(DAT_00898898,(int)local_10[0],(int)local_c[0]);
  return 0;
}



undefined4 fn_00288188(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028821c,(char *)&DAT_00288208,(char *)&DAT_007c1f58,0x1cf);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00148924(auStack_14,param_1,0xffffffff);
  fn_001f52f0(DAT_00898898,local_18,auStack_14);
  return 0;
}



undefined4 fn_00287fd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char local_10 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffc,&local_1c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028812c,(char *)&DAT_00288118,(char *)&DAT_007c1f70,0x38a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffd,&uStack_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028812c,(char *)&DAT_00288118,(char *)&DAT_007c1f70,0x38d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xfffffffe,&uStack_14);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028812c,(char *)&DAT_00288118,(char *)&DAT_007c1f70,0x390);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f58(param_1,0xffffffff,local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028812c,(char *)&DAT_00288118,(char *)&DAT_007c1f70,0x393);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_001f502c(DAT_00898898,local_1c,uStack_18,uStack_14,(int)local_10[0]);
  return 0;
}


