#include "002be0c4_002be0c4.h"



undefined4 fn_002be0c4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  
  iVar1 = fn_001481c8(param_1[0x20],*param_2,&DAT_002be458,1,1);
  param_1[0x21] = iVar1;
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = fn_001480d0(param_1[0x20],iVar1,param_2[1],&DAT_002be45c,1,1,0);
  param_1[0x22] = iVar1;
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = fn_00178f9c(param_1[0x20],iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)((int)param_2 + 0x52);
  if (*(char *)((int)param_2 + 0x16) != '\0') {
    (**(code **)(*param_1 + 0x114))(param_1,param_2 + 2);
  }
  if (*(char *)((int)param_2 + 0x2a) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1,param_2 + 7);
  }
  iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c0aac);
  if (iVar2 == 0) {
    fn_002c00ac(param_1,iVar1,param_2);
  }
  else {
    iVar3 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)fn_0042c214(iVar3,uVar4);
    }
    piVar6 = (int *)param_1[0x27];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x20))();
      }
      param_1[0x27] = (int)piVar5;
    }
    fn_0042bbf4(param_1[0x27],iVar2,param_1,param_1[0x12],param_2 + 2,(int)*(char *)(param_2 + 6),
                 (int)*(char *)(param_2 + 5));
  }
  if ((char)param_1[0x32] == '\x01') {
    iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c0e10);
    if (iVar2 != 0) {
      iVar3 = fn_00145b00(0x38,&DAT_00812c8c);
      piVar5 = (int *)0x0;
      if (iVar3 != 0) {
        uVar4 = (**(code **)(*param_1 + 8))(param_1);
        piVar5 = (int *)fn_00393a3c(iVar3,uVar4);
      }
      piVar6 = (int *)param_1[0x2f];
      if (piVar6 != piVar5) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))();
        }
        param_1[0x2f] = (int)piVar5;
      }
      fn_00393360(param_1[0x2f],iVar2,param_1,param_1[0x12],param_2 + 2,(int)*(char *)(param_2 + 6)
                   ,(int)*(char *)(param_2 + 5),(int)*(char *)((int)param_2 + 0x15),
                   (int)*(char *)((int)param_2 + 0x17),(int)*(char *)((int)param_2 + 0x19));
    }
  }
  if (*(char *)((int)param_2 + 0x3e) != '\0') {
    (**(code **)(*param_1 + 0x11c))(param_1,param_2 + 0xc,0,param_2[0x11]);
  }
  if (((char)param_1[0x32] == '\x01') && (uVar7 = 0, (int)(param_2[0xd] - param_2[0xc]) >> 2 != 0))
  {
    do {
      piVar5 = *(int **)(param_2[0xc] + uVar7 * 4);
      if (piVar5 != (int *)0x0) {
        piVar6 = (int *)param_2[2];
        piVar10 = (int *)*piVar6;
        if (piVar10 != piVar5) {
          piVar6 = (int *)piVar6[1];
        }
        if (piVar10 == piVar5 || piVar6 == piVar5) {
          *(undefined4 *)(param_2[0xc] + uVar7 * 4) = 0;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)(param_2[0xd] - param_2[0xc]) >> 2));
  }
  iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c0578);
  if (iVar2 == 0) {
    iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c065c);
    if (iVar2 == 0) {
      iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c0740);
      if (iVar2 != 0) {
        iVar3 = fn_00145b00(0x38,&DAT_00812c8c);
        piVar5 = (int *)0x0;
        if (iVar3 != 0) {
          uVar4 = (**(code **)(*param_1 + 8))(param_1);
          piVar5 = (int *)fn_003470c8(iVar3,uVar4);
        }
        piVar6 = (int *)param_1[0x2d];
        if (piVar6 != piVar5) {
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x20))();
          }
          param_1[0x2d] = (int)piVar5;
        }
        fn_00346ab0(param_1[0x2d],iVar2,param_1,param_1[0x12],param_2 + 0xc,
                     (int)*(char *)(param_2 + 0x10),(int)*(char *)(param_2 + 0xf),
                     (int)*(char *)((int)param_2 + 0x3d),(int)*(char *)((int)param_2 + 0x51),
                     (int)*(char *)((int)param_2 + 0x3f),(int)*(char *)((int)param_2 + 0x41));
      }
    }
    else {
      iVar3 = fn_00145b00(0x3c,&DAT_00812c8c);
      piVar5 = (int *)0x0;
      if (iVar3 != 0) {
        uVar4 = (**(code **)(*param_1 + 8))(param_1);
        piVar5 = (int *)fn_00346a20(iVar3,uVar4);
      }
      piVar6 = (int *)param_1[0x2c];
      if (piVar6 != piVar5) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))();
        }
        param_1[0x2c] = (int)piVar5;
      }
      fn_003463b4(param_1[0x2c],iVar2,param_1,param_1[0x12],param_2 + 0xc,
                   (int)*(char *)(param_2 + 0x10),(int)*(char *)(param_2 + 0xf),
                   (int)*(char *)((int)param_2 + 0x3d),(int)*(char *)((int)param_2 + 0x51),
                   (int)*(char *)((int)param_2 + 0x3f),(int)*(char *)((int)param_2 + 0x41));
    }
  }
  else {
    iVar3 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)fn_0034632c(iVar3,uVar4);
    }
    piVar6 = (int *)param_1[0x2b];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x20))();
      }
      param_1[0x2b] = (int)piVar5;
    }
    fn_00345db8(param_1[0x2b],iVar2,param_1,param_1[0x12],param_2 + 0xc,
                 (int)*(char *)(param_2 + 0x10),(int)*(char *)(param_2 + 0xf),
                 (int)*(char *)((int)param_2 + 0x3d),(int)*(char *)((int)param_2 + 0x3f),
                 (int)*(char *)((int)param_2 + 0x41));
  }
  iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c0ee4);
  if (iVar2 != 0) {
    iVar3 = fn_00145b00(0x2c,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)fn_00393e00(iVar3,uVar4);
    }
    piVar6 = (int *)param_1[0x2e];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x20))();
      }
      param_1[0x2e] = (int)piVar5;
    }
    fn_00393b30(param_1[0x2e],iVar2,param_1,param_1[0x12],(int)*(char *)(param_2 + 0x10),
                 (int)*(char *)(param_2 + 0xf),(int)*(char *)((int)param_2 + 0x3d),
                 (int)*(char *)((int)param_2 + 0x3f),(int)*(char *)((int)param_2 + 0x41));
  }
  if ((*(char *)(param_2 + 0x14) != '\0') && (iVar2 = fn_00172c98(iVar1,(char *)&DAT_002c0bb4), iVar2 != 0)) {
    iVar3 = fn_00145b00(0xd4,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar3 != 0) {
      iVar9 = param_1[0x12];
      uVar4 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)fn_002b44c0(iVar3,uVar4,iVar2,0,iVar9);
    }
    piVar6 = (int *)param_1[0x25];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      param_1[0x25] = (int)piVar5;
    }
    (**(code **)(*(int *)param_1[0x25] + 0x10))();
    fn_002b427c(param_1[0x25],0);
    fn_002b4348(param_1[0x25],0);
    *(undefined1 *)(param_1[0x25] + 0x3d) = 0;
    *(undefined1 *)(param_1[0x25] + 0x3f) = 0;
    *(undefined1 *)(param_1[0x25] + 0x2f) = 1;
    *(undefined1 *)(param_1[0x25] + 0x43) = 0;
    param_1[0x24] = *(int *)(iVar2 + 0xc);
  }
  if ((char)param_1[0x32] == '\x01') {
    fn_002c1a7c(param_1,0);
  }
  iVar2 = fn_001828f0(iVar1,(char *)&DAT_002be8b0);
  if (iVar2 == 0) {
    iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uVar8 = *(undefined4 *)(iVar1 + 0x10);
      uVar4 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)fn_0025e920(iVar2,uVar4,uVar8);
    }
    piVar6 = (int *)param_1[0x26];
    if (piVar6 == piVar5) goto LAB_002be860;
  }
  else {
    iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      uVar4 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)fn_0025e920(iVar1,uVar4,iVar2);
    }
    piVar6 = (int *)param_1[0x26];
    if (piVar6 == piVar5) goto LAB_002be860;
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  param_1[0x26] = (int)piVar5;
LAB_002be860:
  (**(code **)(*(int *)param_1[0x26] + 0x10))((int *)param_1[0x26],param_1[0x12]);
  (**(code **)(*param_1 + 0x110))(param_1,param_2[0x12],param_2[0x13],0,0);
  return 1;
}


