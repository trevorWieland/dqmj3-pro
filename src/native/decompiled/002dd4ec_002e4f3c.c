#include "002dd4ec_002e4f3c.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_002e4f3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_28;
  
  local_28 = param_4;
  fn_002c3e78();
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
  iVar3 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar3 != iVar3) {
    do {
      uVar2 = fn_0022f750(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar5 * 0xc));
      fn_0031b78c(param_1,uVar5,0,uVar2);
      iVar3 = fn_006ba220(param_1,uVar5);
      if (iVar3 != 0) goto switchD_002e4fc0_caseD_83;
      switch(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar5 * 0xc + 4)) {
      case 0x82:
        iVar3 = fn_0036bb48();
        goto joined_r0x002e5030;
      case 0x84:
        iVar3 = fn_0036bb20();
joined_r0x002e5030:
        if (iVar3 != 0) {
LAB_002e50cc:
          local_28 = _DAT_008938f4;
          fn_002c37e0(param_1,uVar5,&local_28);
        }
        break;
      case 0x85:
        iVar3 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
        if (iVar3 < 1) goto LAB_002e50cc;
        break;
      case 0x86:
        uVar2 = *(undefined4 *)(DAT_00897804 + 0x18);
        iVar3 = fn_006b4f84(uVar2);
        iVar1 = 0;
        if (0 < iVar3) {
          do {
            iVar4 = fn_0024222c(uVar2,iVar1);
            if (*(char *)(iVar4 + 6) != '\0') {
              iVar3 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
              goto joined_r0x002e50c8;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar3);
        }
        goto LAB_002e50cc;
      case 0x89:
        iVar3 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
        goto joined_r0x002e50c8;
      case 0x8a:
        iVar3 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
joined_r0x002e50c8:
        if (0 < iVar3) break;
        goto LAB_002e50cc;
      }
switchD_002e4fc0_caseD_83:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4)) / 0xc));
  }
  return;
}



void fn_002e3334(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_002e32fc();
  fn_0025fa84(DAT_00897800,*(undefined4 *)(iVar1 + 4),param_3);
  return;
}



int fn_002dd4ec(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  uStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  iVar4 = fn_00660ec0(param_3);
  iVar10 = -1;
  if ((param_4 != 0) && (iVar5 = fn_002dd188(param_1,param_2,local_2c), iVar5 == 0)) {
    return -1;
  }
  local_40 = fn_0020e5dc(param_2,0);
  iVar5 = fn_0020e5dc(param_2,1);
  iVar6 = fn_0020e5dc(param_2,2);
  iVar7 = fn_0020e5dc(param_2,3);
  iVar8 = fn_0020e5dc(param_2,4);
  iVar9 = fn_0020e5dc(param_2,5);
  local_3c = fn_0024e350(param_2);
  fn_0020bbc4(auStack_48,param_2);
  sVar2 = 0;
  if (iVar4 == 0xe) {
    sVar1 = fn_00660f40(local_2c);
    sVar3 = fn_00660f28(local_2c);
    if ((short)(sVar3 - sVar1) != -1) {
      sVar2 = fn_00163868();
    }
    sVar2 = sVar2 + sVar1;
    sVar1 = *(short *)(param_2 + 0x88) + sVar2;
    *(short *)(param_2 + 0x88) = sVar1;
    if (iVar6 < sVar1) {
      sVar2 = sVar2 - (sVar1 - (short)iVar6);
      *(short *)(param_2 + 0x88) = (short)iVar6;
    }
    iVar10 = (int)sVar2;
    fn_0020e634(param_2,2);
  }
  else if (iVar4 < 0xf) {
    if (iVar4 == 0xb) {
      sVar1 = fn_00660f40(local_2c);
      sVar3 = fn_00660f28(local_2c);
      if ((short)(sVar3 - sVar1) != -1) {
        sVar2 = fn_00163868();
      }
      sVar2 = sVar2 + sVar1;
      sVar1 = *(short *)(param_2 + 0x3a) + sVar2;
      *(short *)(param_2 + 0x3a) = sVar1;
      if (999 < sVar1) {
        sVar2 = (sVar2 - sVar1) + 999;
        *(undefined2 *)(param_2 + 0x3a) = 999;
      }
      iVar10 = (int)sVar2;
      fn_00144834(0x204,1);
    }
    else if (iVar4 < 0xc) {
      if (iVar4 == 1) {
        iVar4 = fn_006c0028(auStack_44);
        iVar10 = fn_00660f40(local_2c);
        if (iVar10 != 0xff) {
          sVar1 = fn_00660f28(local_2c);
          if ((short)(sVar1 - (short)iVar10) != -1) {
            sVar2 = fn_00163868();
          }
          sVar2 = sVar2 + (short)iVar10;
          iVar10 = (int)sVar2;
          sVar2 = *(short *)(param_2 + 0x22) + sVar2;
          *(short *)(param_2 + 0x22) = sVar2;
          if (sVar2 <= iVar4) goto LAB_002ddab0;
        }
        *(short *)(param_2 + 0x22) = (short)iVar4;
      }
      else if (iVar4 == 2) {
        iVar4 = fn_006c0114(auStack_44);
        iVar10 = fn_00660f40(local_2c);
        if (iVar10 != 0xff) {
          sVar1 = fn_00660f28(local_2c);
          if ((short)(sVar1 - (short)iVar10) != -1) {
            sVar2 = fn_00163868();
          }
          sVar2 = sVar2 + (short)iVar10;
          iVar10 = (int)sVar2;
          sVar2 = *(short *)(param_2 + 0x24) + sVar2;
          if (sVar2 <= iVar4) {
            iVar4 = (int)sVar2;
          }
          *(short *)(param_2 + 0x24) = sVar2;
        }
        *(short *)(param_2 + 0x24) = (short)iVar4;
      }
    }
    else if (iVar4 == 0xc) {
      sVar1 = fn_00660f40(local_2c);
      sVar3 = fn_00660f28(local_2c);
      if ((short)(sVar3 - sVar1) != -1) {
        sVar2 = fn_00163868();
      }
      sVar2 = sVar2 + sVar1;
      sVar1 = *(short *)(param_2 + 0x84) + sVar2;
      *(short *)(param_2 + 0x84) = sVar1;
      if (local_40 < sVar1) {
        *(short *)(param_2 + 0x84) = (short)local_40;
        sVar2 = sVar2 - (sVar1 - (short)local_40);
      }
      iVar10 = (int)sVar2;
      fn_0020e634(param_2,0);
      *(short *)(param_2 + 0x22) = *(short *)(param_2 + 0x22) + sVar2;
    }
    else if (iVar4 == 0xd) {
      sVar1 = fn_00660f40(local_2c);
      sVar3 = fn_00660f28(local_2c);
      if ((short)(sVar3 - sVar1) != -1) {
        sVar2 = fn_00163868();
      }
      sVar2 = sVar2 + sVar1;
      sVar1 = *(short *)(param_2 + 0x86) + sVar2;
      *(short *)(param_2 + 0x86) = sVar1;
      if (iVar5 < sVar1) {
        sVar2 = sVar2 - (sVar1 - (short)iVar5);
        *(short *)(param_2 + 0x86) = (short)iVar5;
      }
      iVar10 = (int)sVar2;
      fn_0020e634(param_2,1);
      *(short *)(param_2 + 0x24) = *(short *)(param_2 + 0x24) + sVar2;
    }
  }
  else if (iVar4 == 0x11) {
    sVar1 = fn_00660f40(local_2c);
    sVar3 = fn_00660f28(local_2c);
    if ((short)(sVar3 - sVar1) != -1) {
      sVar2 = fn_00163868();
    }
    sVar2 = sVar2 + sVar1;
    sVar1 = *(short *)(param_2 + 0x8e) + sVar2;
    *(short *)(param_2 + 0x8e) = sVar1;
    if (iVar9 < sVar1) {
      sVar2 = sVar2 - (sVar1 - (short)iVar9);
      *(short *)(param_2 + 0x8e) = (short)iVar9;
    }
    iVar10 = (int)sVar2;
    fn_0020e634(param_2,5);
  }
  else if (iVar4 < 0x12) {
    if (iVar4 == 0xf) {
      sVar1 = fn_00660f40(local_2c);
      sVar3 = fn_00660f28(local_2c);
      if ((short)(sVar3 - sVar1) != -1) {
        sVar2 = fn_00163868();
      }
      sVar2 = sVar2 + sVar1;
      sVar1 = *(short *)(param_2 + 0x8a) + sVar2;
      *(short *)(param_2 + 0x8a) = sVar1;
      if (iVar7 < sVar1) {
        sVar2 = sVar2 - (sVar1 - (short)iVar7);
        *(short *)(param_2 + 0x8a) = (short)iVar7;
      }
      iVar10 = (int)sVar2;
      fn_0020e634(param_2,3);
    }
    else if (iVar4 == 0x10) {
      sVar1 = fn_00660f40(local_2c);
      sVar3 = fn_00660f28(local_2c);
      if ((short)(sVar3 - sVar1) != -1) {
        sVar2 = fn_00163868();
      }
      sVar2 = sVar2 + sVar1;
      sVar1 = *(short *)(param_2 + 0x8c) + sVar2;
      *(short *)(param_2 + 0x8c) = sVar1;
      if (iVar8 < sVar1) {
        sVar2 = sVar2 - (sVar1 - (short)iVar8);
        *(short *)(param_2 + 0x8c) = (short)iVar8;
      }
      iVar10 = (int)sVar2;
      fn_0020e634(param_2,4);
    }
  }
  else if (iVar4 == 0x12) {
    iVar10 = 1;
    fn_00246c0c(param_2,1,0);
  }
  else if (iVar4 == 0x23) {
    iVar10 = fn_00660d60(local_2c);
    fn_0020b760(auStack_48,iVar10);
    fn_00289ec0(*(undefined4 *)(DAT_00897804 + 0x24),iVar10,0);
  }
LAB_002ddab0:
  fn_0024f108(param_2,local_3c);
  return iVar10;
}


