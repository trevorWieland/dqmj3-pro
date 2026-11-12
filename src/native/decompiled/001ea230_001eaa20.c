#include "001ea230_001eaa20.h"



void fn_001eaa20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x58) != param_2) {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x208) != -1) {
        fn_001e21b0(param_1);
      }
      fn_001e448c(param_1,0);
    }
    else {
      iVar1 = (int)*(char *)(param_1 + 0x208);
      if ((iVar1 != -1) && (*(char *)(param_1 + iVar1 + 0x3bc) == '\0')) {
        uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + iVar1 * 4 + 0x17c));
        fn_00547174(*(undefined4 *)(param_1 + 0x194),uVar2);
        *(undefined1 *)(param_1 + iVar1 + 0x3bc) = 1;
      }
      if (*(char *)(param_1 + 0x3c0) == '\0') {
        iVar1 = *(int *)(param_1 + 0x378);
        if (iVar1 == 0) {
          if (*(char *)(param_1 + 0x3ac) == '\0') {
            iVar1 = *(int *)(param_1 + 0x18c);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x3b4);
          }
        }
        uVar2 = fn_0017fde4(iVar1);
        fn_00547174(*(undefined4 *)(param_1 + 0x19c),uVar2);
        *(undefined1 *)(param_1 + 0x3c0) = 1;
      }
    }
    if (*(int *)(param_1 + 0x40c) != -1) {
      fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x40c),param_2);
    }
    if (*(int *)(param_1 + 0x414) != -1) {
      fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x414),param_2);
    }
    fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    *(char *)(param_1 + 0x58) = (char)param_2;
  }
  return;
}



void fn_001ea9c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 400) != 0) {
    fn_0023f3dc();
  }
  puVar1 = (undefined4 *)fn_00171634();
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 0x344) = *puVar1;
  *(undefined4 *)(param_1 + 0x348) = uVar2;
  *(undefined4 *)(param_1 + 0x34c) = uVar3;
  puVar1 = (undefined4 *)fn_00171634();
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(param_1 + 0x368) = *puVar1;
  *(undefined4 *)(param_1 + 0x36c) = uVar2;
  *(undefined4 *)(param_1 + 0x370) = uVar3;
  *(undefined1 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  fn_00259728(param_1 + 0x1e8,1);
  return;
}



void fn_001ea890(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x22d);
  if (uVar3 == param_2) goto LAB_001ea9a4;
  uVar6 = 0;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      iVar2 = fn_006f7a5c();
      *(undefined1 *)(iVar2 + 0xf1) = 0;
      iVar2 = fn_006f7a5c(DAT_008977e0);
      *(undefined1 *)(iVar2 + 0xc) = 0;
      uVar6 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar6,0);
      goto LAB_001ea9a4;
    }
    if (uVar3 == 6) {
      fn_001da640(param_1);
      if (*(char *)(param_1 + 0x208) != -1) {
        fn_001747e8(*(undefined4 *)(param_1 + 0x18c));
      }
      goto LAB_001ea9a4;
    }
    if ((uVar3 != 8) || (*(int *)(param_1 + 0x394) == -1)) goto LAB_001ea9a4;
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x394) = 0xffffffff;
  }
  puVar1 = (undefined4 *)fn_00171634();
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  *(undefined4 *)(param_1 + 0x1b8) = *puVar1;
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  *(undefined4 *)(param_1 + 0x1c0) = uVar5;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = uVar6;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(*(int *)(param_1 + 400) + 0x3d) = 0;
LAB_001ea9a4:
  *(char *)(param_1 + 0x22d) = (char)param_2;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  return;
}



void fn_001ea80c(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = *(int *)(param_1 + 0x378);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x3ac) == '\0') {
      iVar1 = *(int *)(param_1 + 0x18c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3b4);
    }
  }
  if (iVar1 != 0) {
    fn_0017fde4();
    fn_0017fc3c();
  }
  if ((*(char *)(param_1 + 0x208) != -1) &&
     (*(int *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x17c) != 0)) {
    fn_0017fde4();
    fn_0017fc3c();
  }
  *(undefined4 *)(param_1 + 0xf8) = in_s0;
  return;
}



void fn_001ea5b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = fn_00154ac8(0x18);
  if ((iVar1 != 0) && (iVar1 = fn_006f7a20(DAT_008977e0), iVar1 == 0)) {
    piVar5 = param_1 + 0xdf;
    iVar1 = fn_006a7f8c(piVar5);
    if (iVar1 == 0) {
      uVar2 = fn_006f7a9c(DAT_008977e0);
      fn_0027932c(&local_20,uVar2);
      *piVar5 = local_20;
      param_1[0xe0] = iStack_1c;
      param_1[0xe1] = iStack_18;
    }
    if (param_1[0xde] == 0) {
      iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
      piVar3 = (int *)0x0;
      if (iVar1 != 0) {
        piVar3 = (int *)fn_005e846c();
      }
      piVar4 = (int *)param_1[0xde];
      if (piVar4 != piVar3) {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        param_1[0xde] = (int)piVar3;
        piVar4 = piVar3;
      }
      uVar2 = fn_006f7a9c(DAT_008977e0);
      uVar2 = fn_00241d90(uVar2,*piVar5);
      iVar1 = fn_0069ee38(piVar4,uVar2,0);
      if (iVar1 == 0) {
        return;
      }
      if (param_1[0xe0] != -1) {
        uVar2 = fn_006f7a9c(DAT_008977e0);
        uVar2 = fn_00241d90(uVar2,param_1[0xe0]);
        fn_0069eb10(piVar4,uVar2,0);
      }
      uVar2 = fn_0017fde4(param_1[0xde]);
      fn_0017fc28(uVar2,1);
    }
    if (param_1[0x39] == param_1[99]) {
      uVar2 = fn_0017fde4(param_1[0xde]);
      fn_002cd6b0(uVar2,1);
      fn_001cac64(1);
      (**(code **)(*param_1 + 0x20))(param_1);
      if ((char)param_1[0x16] != '\0') {
        uVar2 = fn_0017fde4(param_1[99]);
        fn_001e448c(param_1,uVar2);
        iVar1 = fn_0017fde4(param_1[0xde]);
        if ((char)param_1[0xf0] == '\0') {
          if (iVar1 == 0) {
            iVar1 = param_1[0xde];
            if (iVar1 == 0) {
              if ((char)param_1[0xeb] == '\0') {
                iVar1 = param_1[99];
              }
              else {
                iVar1 = param_1[0xed];
              }
            }
            iVar1 = fn_0017fde4(iVar1);
          }
          fn_00547174(param_1[0x67],iVar1);
          *(undefined1 *)(param_1 + 0xf0) = 1;
        }
        fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
      }
      iVar1 = param_1[0xde];
      uVar2 = fn_00242bd4(0x18c);
      iVar6 = param_1[0xdf];
      param_1[0x39] = iVar1;
      fn_001fa164(param_1[0xe2]);
      fn_001fa18c(param_1[0xe2],uVar2);
      fn_001e8380(param_1,iVar6,0);
      return;
    }
  }
  return;
}



void fn_001ea42c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_28 [16];
  
  if ((param_1[0xde] != 0) && (param_1[0xde] == param_1[0x39])) {
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((char)param_1[0x16] != '\0') {
      uVar1 = fn_0017fde4(param_1[0xde]);
      fn_001e448c(param_1,uVar1);
      iVar2 = fn_0017fde4(param_1[99]);
      if ((char)param_1[0xf0] == '\0') {
        if (iVar2 == 0) {
          iVar2 = param_1[0xde];
          if (iVar2 == 0) {
            if ((char)param_1[0xeb] == '\0') {
              iVar2 = param_1[99];
            }
            else {
              iVar2 = param_1[0xed];
            }
          }
          iVar2 = fn_0017fde4(iVar2);
        }
        fn_00547174(param_1[0x67],iVar2);
        *(undefined1 *)(param_1 + 0xf0) = 1;
      }
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
    }
    iVar2 = param_1[0x38];
    param_1[0x39] = param_1[99];
    fn_001fa164(param_1[0xe2]);
    fn_001fa18c(param_1[0xe2],(char *)&DAT_001e805c);
    fn_001e8380(param_1,iVar2,1);
  }
  iVar2 = fn_00154ac8(0x18);
  if (iVar2 == 0) {
    if ((int *)param_1[0xde] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xde] + 4))();
      param_1[0xde] = 0;
    }
    iVar2 = fn_006a7f8c(param_1 + 0xdf);
    if (iVar2 != 0) {
      fn_006f7a9c(DAT_008977e0);
      fn_002796d4();
      piVar3 = (int *)fn_001c6d34(auStack_28);
      iVar2 = piVar3[1];
      iVar4 = piVar3[2];
      param_1[0xdf] = *piVar3;
      param_1[0xe0] = iVar2;
      param_1[0xe1] = iVar4;
    }
  }
  return;
}



void fn_001ea230(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    iVar1 = fn_006aa6ec(param_1,0xffffffff,param_3,param_4,param_4);
    if ((iVar1 == 0) || (uVar2 = fn_006ab190(param_1,0xffffffff,0,0,0), (~(uVar2 >> 4) & 1) == 0))
    {
      fn_001e3914(param_1);
      iVar1 = fn_00154ac8(0x3d);
      if (iVar1 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x1b1) == '\0') {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      return;
    }
    if (*(int *)(param_1 + 0x1f0) != -1) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (*(char *)(param_1 + 0x208) != -1) {
    fn_001e25e4(param_1,0xffffffff,param_2);
    *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_1 + 0x208);
    *(undefined1 *)(param_1 + 0x208) = 0xff;
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0xf8);
    if ((*(char *)(param_1 + 0x1b0) != -1) &&
       (*(int *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x17c) != 0)) {
      if (param_2 != 0) {
        fn_001e21b0(param_1);
      }
      fn_001e2804(param_1,0,(int)*(char *)(param_1 + 0x1b0));
    }
    if (param_2 == 0) {
      fn_001e3bc4(param_1);
    }
    iVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x1b0) * 4 + 0x1f8));
    if (2 < iVar1) {
      *(undefined4 *)(param_1 + 0x228) = 6;
    }
    fn_0025b2f8(*(undefined4 *)(DAT_00897804 + 8));
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x18c);
      fn_001fa164(*(undefined4 *)(param_1 + 0x388));
      fn_001fa18c(*(undefined4 *)(param_1 + 0x388),(char *)&DAT_001e805c);
      fn_001e8380(param_1,uVar3,1);
      fn_001e1598(param_1,param_2);
    }
    if (0 < *(short *)(param_1 + 0x410)) {
      fn_001e4914(param_1);
    }
    if (*(int *)(param_1 + 0x40c) != -1) {
      fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x40c),1);
      *(undefined4 *)(param_1 + 0x40c) = 0xffffffff;
    }
  }
  return;
}


