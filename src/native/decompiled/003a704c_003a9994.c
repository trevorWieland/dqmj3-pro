#include "003a704c_003a9994.h"



void fn_003a9994(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_3) {
  case 0:
    uVar1 = fn_0022f2b0();
    break;
  case 1:
    uVar1 = fn_0022ee7c((int)(short)param_4);
    break;
  case 2:
    uVar1 = fn_0022eefc((int)*(short *)(&DAT_007bb434 + param_4 * 2),0,0);
    break;
  case 3:
    uVar1 = fn_0022eefc((int)*(short *)(&DAT_007bb440 + param_4 * 2),0,0);
    break;
  case 4:
    uVar1 = fn_0022eefc((int)*(short *)(&DAT_007bb42c + param_4 * 2),0,0);
    break;
  case 5:
    return;
  case 6:
    uVar1 = fn_0022eefc((int)*(short *)(&DAT_007bb430 + param_4 * 2),0,0);
  }
  fn_00321118(*(undefined4 *)(param_1 + 0x58),param_2,uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x19) = 0;
  fn_00689bd0(param_1,0x49,0,0);
  return;
}



void fn_003a90fc(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar1 = fn_006f6a5c();
  (**(code **)(**(int **)(param_1 + 0x78) + 0x14))();
  iVar2 = fn_00159d14();
  if ((iVar2 != 0) && (iVar2 = fn_00165d3c(), iVar2 != 0)) {
switchD_003a9148_caseD_0:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x80)) {
  default:
    goto switchD_003a9148_caseD_0;
  case 1:
    (**(code **)(**(int **)(param_1 + 0x78) + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x003a9190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x78) + 0x20))();
    return;
  case 4:
    if ((*(byte *)(*(int *)(param_1 + 0xf0) + 0x44) & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        fn_003a6d3c(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83),1,0);
      }
      if ((uVar1 & 1) != 0) {
        fn_003a6c48(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83),1,0);
      }
    }
    else {
      if ((uVar1 & 2) != 0) {
        fn_003a786c(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83));
      }
      if ((uVar1 & 1) != 0) {
        fn_003a7700(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83));
      }
      if (*(char *)(param_1 + 0xe3) != '\0') {
        return;
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7d));
    fn_0025e868(uVar4,(int)*(char *)(iVar2 + 0x4c));
    fn_0025e7cc(uVar4,*(int *)(iVar2 + 0xa0) + 0x1c);
    return;
  case 5:
    if (*(char *)(param_1 + 0x85) == '\0') {
      if ((uVar1 & 10) != 0) {
        fn_003a6d3c(param_1,param_1 + 0x7e,0x10,*(undefined1 *)(param_1 + 0x83),1,0);
      }
      if ((uVar1 & 5) != 0) {
        fn_003a6c48(param_1,param_1 + 0x7e,0x10,*(undefined1 *)(param_1 + 0x83),1,0);
      }
    }
    else if (*(char *)(param_1 + 0x85) == '\x01') {
      if ((uVar1 & 10) != 0) {
        fn_003a6d3c(param_1,param_1 + 0x7e,0x14,*(undefined1 *)(param_1 + 0x84),1,1);
      }
      if ((uVar1 & 5) != 0) {
        fn_003a6c48(param_1,param_1 + 0x7e,0x14,*(undefined1 *)(param_1 + 0x84),1,1);
      }
    }
    goto LAB_003a95fc;
  case 6:
    break;
  }
  if (*(char *)(param_1 + 0x85) == '\0') {
    if ((uVar1 & 2) != 0) {
      fn_003a6d3c(param_1,param_1 + 0x7e,0x10,*(undefined1 *)(param_1 + 0x83),1,0);
    }
    if ((uVar1 & 1) != 0) {
      fn_003a6c48(param_1,param_1 + 0x7e,0x10,*(undefined1 *)(param_1 + 0x83),1,0);
    }
    if ((uVar1 & 4) != 0) {
      if (*(char *)(param_1 + 0x85) == '\0') {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          *(undefined1 *)(param_1 + 0x85) = 2;
          fn_003a5bbc(param_1,1);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        *(undefined1 *)(param_1 + 0x85) = 1;
        uVar4 = 0;
        cVar3 = *(char *)(param_1 + 0x7e) + '\x04';
      }
      else {
        if (*(char *)(param_1 + 0x85) != '\x01') goto LAB_003a9440;
        *(undefined1 *)(param_1 + 0x85) = 0;
        uVar4 = 1;
        cVar3 = *(char *)(param_1 + 0x7e) + -4;
      }
      fn_003a7964(param_1,(int)cVar3,uVar4,1,0);
    }
LAB_003a9440:
    if ((uVar1 & 8) == 0) goto LAB_003a95fc;
    if (*(char *)(param_1 + 0x85) == '\0') goto LAB_003a9588;
    if (*(char *)(param_1 + 0x85) != '\x01') goto LAB_003a95fc;
    cVar3 = *(char *)(param_1 + 0xe0);
joined_r0x003a9468:
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x85) = 2;
      fn_003a5bbc(param_1,1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(undefined1 *)(param_1 + 0x85) = 0;
    uVar4 = 1;
    cVar3 = *(char *)(param_1 + 0x7e) + -4;
  }
  else {
    if (*(char *)(param_1 + 0x85) != '\x01') goto LAB_003a95fc;
    if ((uVar1 & 2) != 0) {
      fn_003a6d3c(param_1,param_1 + 0x7e,0x14,*(undefined1 *)(param_1 + 0x84),1,0);
    }
    if ((uVar1 & 1) != 0) {
      fn_003a6c48(param_1,param_1 + 0x7e,0x14,*(undefined1 *)(param_1 + 0x84),1,0);
    }
    if ((uVar1 & 4) != 0) {
      if (*(char *)(param_1 + 0x85) == '\0') {
        if (*(char *)(param_1 + 0xe0) == '\0') {
          *(undefined1 *)(param_1 + 0x85) = 2;
          fn_003a5bbc(param_1,1);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        *(undefined1 *)(param_1 + 0x85) = 1;
        uVar4 = 0;
        cVar3 = *(char *)(param_1 + 0x7e) + '\x04';
      }
      else {
        if (*(char *)(param_1 + 0x85) != '\x01') goto LAB_003a9564;
        *(undefined1 *)(param_1 + 0x85) = 0;
        uVar4 = 1;
        cVar3 = *(char *)(param_1 + 0x7e) + -4;
      }
      fn_003a7964(param_1,(int)cVar3,uVar4,1,0);
    }
LAB_003a9564:
    if ((uVar1 & 8) == 0) goto LAB_003a95fc;
    if (*(char *)(param_1 + 0x85) != '\0') {
      if (*(char *)(param_1 + 0x85) != '\x01') goto LAB_003a95fc;
      cVar3 = *(char *)(param_1 + 0xe0);
      goto joined_r0x003a9468;
    }
LAB_003a9588:
    *(undefined1 *)(param_1 + 0x85) = 1;
    uVar4 = 0;
    cVar3 = *(char *)(param_1 + 0x7e) + '\x04';
  }
  fn_003a7964(param_1,(int)cVar3,uVar4,1,0);
LAB_003a95fc:
  uVar4 = *(undefined4 *)(param_1 + 0xd0);
  iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7e));
  fn_0025e868(uVar4,(int)*(char *)(iVar2 + 0x4c));
  fn_0025e7cc(uVar4,*(int *)(iVar2 + 0xa0) + 0x1c);
  return;
}



void fn_003a8efc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  fn_006f37f0(iVar1 + *(char *)(param_1 + 0x7d) * 0x418 + -0x4080);
  return;
}



void fn_003a8de0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= param_2) {
    fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,param_2);
  }
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x98) + param_2 * 4) + 0xc);
  if (piVar3 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar1 == &DAT_0089a930) goto LAB_003a8e60;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003a8e60:
  uVar2 = fn_0022f750((char *)&DAT_003a8e80);
  fn_00190d50(piVar3,uVar2);
  return;
}



void fn_003a7cf0(int param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  *param_2 = (char)param_3;
  iVar1 = fn_00154ac8(0x32);
  if ((iVar1 != 0) || (iVar1 = fn_00154ac8(0x31), iVar1 != 0)) {
    uVar2 = 0;
  }
  switch(param_3) {
  default:
    return;
  case 1:
    fn_003a8e88(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
    fn_003a74ac(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
    return;
  case 2:
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x48);
    if (*(char *)(iVar1 + 0xe3) != '\0') {
      fn_003a8858(iVar1,1);
      fn_003a6e34(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
      return;
    }
    break;
  case 3:
  case 6:
  case 9:
  case 10:
  case 0xc:
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x48);
    break;
  case 5:
  case 7:
    fn_003a698c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar2);
    fn_003a8858(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
    return;
  case 8:
  case 0xb:
  case 0xe:
    fn_003a698c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar2);
    fn_003a8e88(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x48);
    *(byte *)(*(int *)(iVar1 + 0xb8) + 0x44) = *(byte *)(*(int *)(iVar1 + 0xb8) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(iVar1 + 0xbc) + 0x44) = *(byte *)(*(int *)(iVar1 + 0xbc) + 0x44) & 0xfe;
    fn_00353aa4(*(undefined4 *)(iVar1 + 0x70));
    *(byte *)(*(int *)(iVar1 + 0xb8) + 0x44) = *(byte *)(*(int *)(iVar1 + 0xb8) + 0x44) & 0xfe;
    *(byte *)(*(int *)(iVar1 + 0xbc) + 0x44) = *(byte *)(*(int *)(iVar1 + 0xbc) + 0x44) & 0xfe | 1;
    return;
  }
  fn_003a6e34(iVar1);
  fn_003a8858(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
  return;
}



void fn_003a704c(int param_1,uint param_2,byte param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  iVar4 = *(int *)(param_1 + 0x104);
  iVar6 = *(int *)(param_1 + 0x100);
  uVar5 = iVar4 - iVar6;
  bVar8 = iVar4 != iVar6;
  if (bVar8) {
    iVar6 = *(int *)(param_1 + 0x100);
  }
  uVar1 = 0;
  if (bVar8) {
    do {
      if (*(byte *)(iVar6 + uVar1) == param_2) {
        uVar5 = (uint)(char)uVar1;
        if (uVar5 == 0xffffffff) {
          return;
        }
        if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar5) {
          fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar5);
        }
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar5 * 4) + 4);
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | param_3;
        if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar5) {
          fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar5);
        }
        iVar4 = **(int **)(*(int *)(param_1 + 0x98) + uVar5 * 4);
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | (byte)param_4;
        if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar5) {
          fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar5);
        }
        piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x98) + uVar5 * 4) + 0xc);
        if (piVar7 == (int *)0x0) goto LAB_003a719c;
        puVar2 = (undefined4 *)(**(code **)(*piVar7 + 8))(piVar7);
        goto LAB_003a7188;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < uVar5);
  }
  return;
  while (puVar2 = (undefined4 *)*puVar2, puVar2 != (undefined4 *)0x0) {
LAB_003a7188:
    if (puVar2 == &DAT_0089a930) goto LAB_003a71a0;
  }
LAB_003a719c:
  piVar7 = (int *)0x0;
LAB_003a71a0:
  uVar3 = fn_0022f750((&PTR_s_tatakau_007bb45c)[param_2 * 3 + param_5]);
  fn_00190d50(piVar7,uVar3);
  if (param_4 == 0) {
    fn_00688fd8(piVar7);
    return;
  }
  fn_00689080();
  return;
}


