#include "004c9410_004ca0d0.h"



void fn_004ca0d0(int param_1)

{
  if ((*(char **)(param_1 + 0x40) != (char *)0x0) && (**(char **)(param_1 + 0x40) == '\x01')) {
    fn_004ed068();
  }
  (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



uint fn_004c9ee8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = fn_004c7eb8(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepComplete";
    *(code **)(param_1 + 0x24) = fn_004c9fdc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return param_4 & 0xff00 | 6;
  }
  iVar1 = fn_004c566c(*(undefined4 *)(param_1 + 0x44));
  if (iVar1 < 0) {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),iVar1);
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
    *(undefined4 *)(param_1 + 0x44) = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  *(code **)(param_1 + 0x24) = fn_004ca6f8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepStart";
  return unaff_r5 & 0xff00;
}



uint fn_004c9fdc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r7;
  
  iVar1 = fn_004c7eb8(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x70) == '\0') {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))();
      iVar2 = *(int *)(DAT_008bf4f4 + 0x20);
      iVar3 = iVar2 + 0x80;
      if (iVar2 + 0x78 + *(int *)(iVar2 + 0x7c) * 8 + 8 != iVar3) {
        do {
          fn_004cb374(iVar3);
          iVar3 = iVar3 + 8;
        } while (iVar2 + 0x78 + *(int *)(iVar2 + 0x7c) * 8 + 8 != iVar3);
      }
      if (iVar1 != 0) {
        fn_004ed0e4(*(undefined4 *)(param_1 + 0x40),0);
        goto LAB_004ca088;
      }
    }
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),0xd8a148c1);
  }
  else {
    fn_004ed098(*(undefined4 *)(param_1 + 0x40),0xd9214824);
  }
LAB_004ca088:
  (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return unaff_r7 & 0xff00 | 1;
}



void fn_004c9eac(int *param_1)

{
  *param_1 = (int)(param_1 + 1);
  fn_0012a2d8();
  *(undefined1 *)(*param_1 + 1) = 2;
  *(undefined1 *)*param_1 = 8;
  return;
}



void fn_004c9e80(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *(uint *)(*param_1 + 4) =
       ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
       ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
  *(ushort *)(*param_1 + 2) = (ushort)param_2[1] << 8 | (ushort)param_2[1] >> 8;
  return;
}



void fn_004c9e40(int *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 + -0x40000 < (uint *)0x3ff00000) {
    uVar1 = *(uint *)(*param_1 + 4);
    *param_2 = ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
               ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
    *(ushort *)(param_2 + 1) = *(ushort *)(*param_1 + 2) << 8 | *(ushort *)(*param_1 + 2) >> 8;
  }
  return;
}



bool fn_004c9df4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  iVar1 = fn_00527f40(param_2,param_3,param_4,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_1 + 4) = *(undefined4 *)(*(int *)(local_10 + 0x18) + 4);
    fn_00527f7c();
  }
  return iVar1 == 0;
}



void fn_004c9de4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return;
}



void fn_004c9dd4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)*param_2)[1];
  *param_1 = *(undefined4 *)*param_2;
  param_1[1] = uVar1;
  return;
}



int fn_004c9db4(void)

{
  return (int)DAT_008bf4ed;
}



undefined4 fn_004c9ccc(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,1);
  if (DAT_008bf4f0 == '\0') {
    param_1[0xb] = (int)"CreateMeshJob::SetupSystemProtocols";
    param_1[9] = (int)fn_004f88c0;
    param_1[10] = 0;
  }
  else {
    param_1[9] = (int)fn_004f88c0;
    param_1[10] = 0;
    param_1[0xb] = (int)"CreateMeshJob::SetupSystemProtocols";
  }
  DAT_008ed91c = *(undefined4 *)(DAT_008bf4f4 + 0x10);
  return 0;
}



undefined1 * fn_004c9870(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 4) == 0) &&
       (*(undefined4 *)(param_1 + 4) = param_2,
       *(int *)(param_1 + 0xa0) != 0 || DAT_008bf4f0 != '\0')) &&
      (*(char *)(param_1 + 0x890) != '\x01')) &&
     ((*(char *)(param_1 + 0x8a4) != '\x01' && (*(char *)(param_1 + 0x8b8) != '\x01')))) {
    iVar1 = fn_004ed050(param_2);
    if (iVar1 != 0) {
      if (DAT_008bf4f0 == '\0') {
        iVar1 = fn_004c7bd4(param_1);
        if (iVar1 < 0) {
          fn_004ed098(*(undefined4 *)(param_1 + 4),iVar1);
          *(undefined4 *)(param_1 + 4) = 0;
          return (undefined1 *)0x0;
        }
      }
      else {
        fn_004c87f0();
      }
      return (undefined1 *)0x0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return &DAT_e0a14827;
}



undefined8 fn_004c95c8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if (DAT_008c0630 == 0) {
      return 0x8c0630;
    }
    uVar2 = 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    uVar3 = iVar1 - 0x100000;
    if (uVar3 < 0x3ff00000) {
      if (*(char *)(param_1 + 0x890) == '\x04') {
        if (DAT_008c0630 != 0) {
          uVar3 = 0;
        }
        uVar4 = fn_004ed13c(param_1 + 0x890,4,uVar3);
        return uVar4;
      }
      if (*(int *)(param_1 + 0x894) < 0) {
        if (DAT_008c0630 != 0) {
          param_4 = (uint)*(byte *)(param_1 + 0x890);
          uVar3 = 0;
        }
        if (*(int *)(param_1 + 0x894) == -0x26deb7dc) {
          fn_004ed068();
        }
        else {
          fn_004ed098(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x894),uVar3,param_4);
        }
      }
      else {
        if (*(char *)(iVar1 + 0x10) == '\0') {
          if (*(char *)(param_1 + 0x10) == '\0') {
            iVar1 = fn_004c925c(param_1);
          }
          else {
            iVar1 = fn_004c7ecc();
          }
          if (iVar1 < 0) {
            uVar4 = fn_004ed098(*(undefined4 *)(param_1 + 4),iVar1);
            *(undefined4 *)(param_1 + 4) = 0;
            return uVar4;
          }
          return CONCAT44(iVar1,iVar1);
        }
        fn_004ed068();
      }
      *(undefined4 *)(param_1 + 4) = 0;
      uVar4 = fn_004ed13c(param_1 + 0x890);
      return uVar4;
    }
    if (DAT_008c0630 == 0) {
      return CONCAT44(0x3ff00000,iVar1);
    }
    uVar2 = 8;
  }
  return CONCAT44(uVar2,DAT_008c0630);
}



undefined8 fn_004c9410(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_008c0630;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if (DAT_008c0630 == 0) goto LAB_004c959c;
    uVar2 = 2;
  }
  else {
    puVar1 = (undefined4 *)0x3ff00000;
    uVar3 = *(int *)(param_1 + 4) - 0x100000;
    if (uVar3 < 0x3ff00000) {
      if (param_2 != 0) {
        if (*(char *)(param_1 + 0x8a4) == '\x04') {
          if (DAT_008c0630 != 0) {
            param_2 = 4;
            uVar3 = 0;
          }
          uVar4 = fn_004ed13c(param_1 + 0x8a4,param_2,uVar3);
          return uVar4;
        }
        if (*(int *)(param_1 + 0x8a8) < 0) {
          if (DAT_008c0630 != 0) {
            param_4 = (uint)*(byte *)(param_1 + 0x8a4);
            uVar3 = 0;
          }
          if (*(int *)(param_1 + 0x8a8) == -0x26deb7dc) {
            fn_004ed068();
          }
          else {
            fn_004ed098(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x8a8),uVar3,param_4);
          }
          *(undefined4 *)(param_1 + 4) = 0;
          uVar4 = fn_004ed13c(param_1 + 0x8a4);
          return uVar4;
        }
      }
      uVar4 = fn_004c87f0(param_1);
      return uVar4;
    }
    if (DAT_008c0630 == 0) {
LAB_004c959c:
      return CONCAT44(param_2,puVar1);
    }
    uVar2 = 8;
  }
  return CONCAT44(uVar2,DAT_008c0630);
}


