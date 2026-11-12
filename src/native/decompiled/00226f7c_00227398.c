#include "00226f7c_00227398.h"



bool fn_00227398(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00682ae8();
    *puVar2 = &PTR_FUN_0081ca44;
  }
  DAT_00897894 = puVar2;
  iVar1 = fn_00681c7c();
  if (iVar1 == 0) {
    fn_00682a8c();
  }
  return DAT_00897894 != (undefined4 *)0x0;
}



bool fn_0022735c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  fn_00114248(&local_10);
  *(undefined4 *)(param_1 + 8) = local_10;
  *(undefined4 *)(param_1 + 0xc) = uStack_c;
  *(undefined1 *)(param_1 + 4) = 1;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00682ae8();
    *puVar2 = &PTR_FUN_0081ca44;
  }
  DAT_00897894 = puVar2;
  iVar1 = fn_00681c7c();
  if (iVar1 == 0) {
    fn_00682a8c();
  }
  return DAT_00897894 != (undefined4 *)0x0;
}



void fn_00227344(void)

{
  DAT_008994bc = 0;
  DAT_008994c0 = 0;
  return;
}



int fn_00227328(int param_1)

{
  return (int)*(short *)(DAT_008994bc + param_1 * 6 + 4);
}



int fn_0022730c(int param_1)

{
  return (int)*(short *)(DAT_008994bc + param_1 * 6 + 2);
}



undefined4 fn_0022727c(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00227300,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 6;
  iVar2 = 0;
  DAT_008994c0 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008994c0 = 0;
  }
  DAT_008994bc = param_1;
  return 1;
}



undefined4 * fn_00227180(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = &DAT_0081ca34;
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = fn_00145b00(0x80,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_00110518();
    }
    *puVar1 = uVar3;
    iVar2 = fn_00145b00(0x50,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_0069c558();
    }
    puVar1[1] = uVar3;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_00226fe4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar6;
  undefined8 in_d8;
  
  iVar5 = *(int *)(param_1 + 4);
  if (*(int *)(iVar5 + 4) != 0) {
    fn_006f7a84(DAT_008977e0);
    iVar4 = fn_006aab6c();
    if (*(int *)(iVar5 + 0xc) != iVar4) {
      *(int *)(iVar5 + 0xc) = iVar4;
      fn_0069c3c0(*(undefined4 *)(iVar5 + 4),iVar4);
    }
    if (((1 < *(byte *)(DAT_008977e0 + 0x170)) &&
        (iVar4 = fn_006f7a48(), *(char *)(iVar4 + 4) == '\0')) &&
       (iVar4 = fn_006f7358(DAT_008977e0), iVar4 == 0)) {
      fn_006f7a84(DAT_008977e0);
      iVar4 = fn_006a9938();
      if (iVar4 == 0) {
        fn_006f7a84(DAT_008977e0);
        iVar4 = fn_006a99b0();
        if (iVar4 == 0) {
          fn_006f7a84(DAT_008977e0);
          iVar4 = fn_006a9960();
          if (iVar4 == 0) {
            fn_006f7a84(DAT_008977e0);
            iVar4 = fn_006aa6e0();
            if ((iVar4 == 0) && (iVar4 = fn_006f7a84(DAT_008977e0), *(int *)(iVar4 + 0x228) != 0))
            {
              iVar4 = fn_006f7a84(DAT_008977e0);
              iVar6 = *(int *)(iVar4 + 0x228);
              fn_006f7a84(DAT_008977e0);
              iVar4 = fn_006aab6c();
              if (iVar6 < iVar4) {
                fn_0069c304(*(undefined4 *)(iVar5 + 4),1);
                iVar4 = fn_006f7a84(DAT_008977e0);
                fn_0069c510(*(undefined4 *)(iVar5 + 4),
                             *(int *)(iVar5 + 0xc) - *(int *)(iVar4 + 0x228));
                goto LAB_00227164;
              }
            }
          }
        }
      }
    }
    fn_0069c304(*(undefined4 *)(iVar5 + 4),0);
  }
LAB_00227164:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
    return;
  }
  cVar1 = *(char *)(iVar5 + 0x14);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if ((*(int *)(iVar5 + 0x10) == -1) ||
         (iVar4 = fn_001854ac(*(undefined4 *)(iVar5 + 4)), (*(byte *)(iVar4 + 0x2c) & 1) != 0)) {
        uVar2 = DAT_0088fef4;
        if (*(int *)(iVar5 + 0x10) != -1) {
          fn_00159f34(*(undefined4 *)(iVar5 + 4));
          *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
        }
        uVar2 = fn_001853ec(*(undefined4 *)(iVar5 + 4),uVar2,*(undefined4 *)(iVar5 + 0xc),param_4,
                             in_d8,unaff_r4,unaff_r5,unaff_r6);
        *(undefined4 *)(iVar5 + 0x10) = uVar2;
        piVar3 = (int *)fn_001854ac(*(undefined4 *)(iVar5 + 4),uVar2);
        (**(code **)(*piVar3 + 0x50))(piVar3,1);
        *(undefined1 *)(iVar5 + 0x14) = 2;
      }
    }
    else if ((cVar1 != '\x02') && (cVar1 == '\x03')) {
      if (*(int *)(iVar5 + 0x10) != -1) {
        iVar4 = fn_001854ac(*(undefined4 *)(iVar5 + 4));
        if ((*(byte *)(iVar4 + 0x2c) & 1) == 0) goto LAB_001cf7ec;
        if (*(int *)(iVar5 + 0x10) != -1) {
          fn_00159f34(*(undefined4 *)(iVar5 + 4));
          *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
        }
      }
      *(undefined1 *)(iVar5 + 0x14) = 0;
      return;
    }
  }
LAB_001cf7ec:
  if (*(int *)(iVar5 + 0x10) == -1) {
    return;
  }
  piVar3 = (int *)fn_001854ac(*(undefined4 *)(iVar5 + 4));
                    /* WARNING: Could not recover jumptable at 0x001cf814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))();
  return;
}



void fn_00226f7c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 != 0) {
    fn_0011050c(*piVar1,*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14));
    if (piVar1[1] != 0) {
      fn_0069c324(piVar1[1],*piVar1);
      fn_0069c3c0(piVar1[1],piVar1[3]);
    }
    if (piVar1[2] != 0) {
      fn_001cf63c(piVar1[2],*piVar1);
      return;
    }
  }
  return;
}


