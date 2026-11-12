#include "002ce2d0_002ceb1c.h"



int * fn_002ceb1c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,0);
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *param_1 = (int)piVar2;
  }
  *(int *)(*param_1 + 4) = param_1[1];
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_002ceeb4);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_002ceeb4);
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_002ceeb4);
  }
  piVar4 = (int *)param_1[4];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_002ceeb4);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[6];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[7];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001f7350(iVar1,0);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = param_1[1];
  *(int *)(param_1[8] + 0x14) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003a039c(iVar1,param_1[8]);
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar2;
  }
  iVar1 = param_1[1];
  uVar5 = *(undefined4 *)(*param_1 + 0x3c);
  uVar3 = fn_00129004();
  fn_002419f4(uVar3,iVar1,uVar5);
  iVar1 = param_1[2];
  iVar6 = param_1[3];
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,iVar1,iVar6);
  iVar1 = param_1[4];
  iVar6 = param_1[5];
  uVar3 = fn_00129004();
  fn_00241948(uVar3,iVar1,iVar6);
  return param_1;
}



void fn_002ce8dc(int param_1,int param_2)

{
  *(char *)(param_1 + 0x14) = (char)param_2;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if ((param_2 == 1) || (param_2 != 2)) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return;
}



undefined4 * fn_002ce868(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  *puVar1 = &DAT_0081fcec;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0xff;
  return puVar1;
}



undefined4 fn_002ce5d8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  param_1[0x16] = param_2;
  param_1[0x12] = 0x41200000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x41200000;
  param_1[0x11] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  iVar5 = param_1[4];
  fn_00260640(param_1,0xa02b);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x21] = 0;
  fn_0026009c(param_1,param_2,1);
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar2 = *(int *)(iVar1 + 0x4c);
  bVar3 = SBORROW4(iVar2,param_3);
  iVar4 = iVar2 - param_3;
  if (iVar2 <= param_3) {
    bVar3 = SBORROW4(param_3,*(int *)(iVar1 + 0x50));
    iVar4 = param_3 - *(int *)(iVar1 + 0x50);
  }
  if (iVar4 < 0 == bVar3) {
    if (param_3 < *(int *)(iVar1 + 0x50)) {
      iVar2 = *(int *)(iVar1 + 0x60);
      iVar4 = *(int *)(iVar1 + 0x54);
      fn_006b658c(param_1);
      param_1[0x1e] = iVar4;
      param_1[0x1f] = iVar2;
      param_1[0x20] = iVar5;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x68);
      iVar4 = *(int *)(iVar1 + 0x5c);
      fn_006b658c(param_1);
      param_1[0x1e] = iVar4;
      param_1[0x1f] = iVar2;
      param_1[0x20] = iVar5;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 100);
    iVar4 = *(int *)(iVar1 + 0x58);
    fn_006b658c(param_1);
    param_1[0x1e] = iVar4;
    param_1[0x1f] = iVar2;
    param_1[0x20] = iVar5;
  }
  return 1;
}



void fn_002ce3d4(undefined4 *param_1)

{
  *param_1 = &DAT_0081fc80;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_002ce38c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  *puVar1 = &DAT_0081fc80;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0xff;
  puVar1[0x23] = 0;
  return puVar1;
}



void fn_002ce2d0(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float in_s2;
  float fVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  float local_38;
  
  if ((char)param_1[0x22] != -1) {
    fn_001cc890(param_1);
    if ((char)param_1[0x22] == '\0') {
      iVar6 = fn_0068cafc(DAT_008977e8);
      fVar9 = *(float *)(iVar6 + 0x24);
      fVar8 = *(float *)(iVar6 + 0x28);
      fn_00260288(param_1);
      fVar10 = (float)param_1[0x23];
      param_1[0x23] = (int)(fVar10 - 0.4);
      local_40 = (float)param_1[2] + fVar8;
      local_38 = (float)param_1[4] + in_s2;
      local_3c = (float)param_1[3] + fVar9 + (fVar10 - 0.4);
      uVar7 = (**(code **)(*param_1 + 0x3c))(param_1);
      fn_0068e960(DAT_008977e8);
      uVar1 = fn_00664c4c();
      uVar2 = fn_001cc480(param_1,&local_40,uVar1,uVar7);
      iVar3 = param_1[0x15];
      uVar7 = fn_0068c7e8(DAT_008977e8);
      fn_0023e574(uVar7,iVar3);
      uVar7 = fn_0068c7e8(DAT_008977e8);
      fn_0023e6a8(uVar7,iVar3);
      iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
      if (iVar3 != 0) {
        param_1[0x23] = 0;
      }
      if ((uVar2 & 2) == 0) {
        fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b6bc4();
        uVar2 = 0;
        if (0 < iVar3) {
          do {
            uVar7 = fn_0014481c(DAT_008977e8);
            iVar4 = fn_006b71a8(uVar7,uVar2 & 0xff);
            iVar5 = fn_0026005c(param_1,iVar4);
            if (iVar5 == 0) {
              local_50 = *(undefined4 *)(iVar4 + 0x3c);
              uStack_4c = *(undefined4 *)(iVar4 + 0x40);
              uStack_48 = *(undefined4 *)(iVar4 + 0x44);
              uStack_44 = *(undefined4 *)(iVar4 + 0x48);
              iVar4 = fn_006a8a84(param_1,&local_50,iVar4 + 8,1);
              if (iVar4 != 0) {
                fn_00260014(param_1,1);
                (**(code **)(*param_1 + 0x44))(param_1,0xa02a,1);
                fn_0014481c(DAT_008977e8);
                iVar6 = fn_00263814();
                fn_00660790(0xf,iVar6 + 8,param_1 + 2);
                *(undefined1 *)(param_1 + 0x22) = 1;
                param_1[0x21] = 0;
                return;
              }
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < iVar3);
        }
        iVar3 = param_1[0x21];
        param_1[0x21] = iVar3 + 1;
        if (iVar3 + 1 < *(int *)(iVar6 + 0x2c)) {
          return;
        }
      }
      fn_002ce1a4(param_1);
      return;
    }
    if ((char)param_1[0x22] == '\x01') {
      param_1[0x12] = 0x42200000;
      iVar6 = fn_0025ff70(param_1);
      if (iVar6 != 0) {
        fn_0026009c(param_1,iVar6,1);
        fn_0069f70c(iVar6,param_1);
        return;
      }
      iVar6 = param_1[0x21];
      param_1[0x21] = iVar6 + 1;
      if (0x13 < iVar6 + 1) {
        uVar7 = fn_0014481c(DAT_008977e8);
        fn_002625d0(uVar7,param_1);
        *(undefined1 *)(param_1 + 0x22) = 0xff;
        param_1[0x21] = 0;
      }
    }
  }
  return;
}


