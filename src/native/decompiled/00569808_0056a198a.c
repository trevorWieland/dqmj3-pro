#include "00569808_0056a198a.h"



void fn_00569bfc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a220(iVar1,param_1);
  return;
}



void fn_00569b10(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  fn_006899f4(param_1,0xa6,0);
  return;
}



void fn_00569a04(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [68];
  
  fn_0068ab44(param_1,0x100094b);
  cVar1 = *(char *)(*(int *)(param_1 + 0xa8) + 0x10);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x78) + 0x5c))();
  iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x78) + 0xcc) * 0xc;
  cVar2 = (char)iVar3;
  switch(cVar1) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    *(char *)(*(int *)(param_1 + 0xa8) + (int)cVar1 + 0x25) = cVar2 + '\x01';
    break;
  case '\x05':
    cVar2 = cVar2 + '\x01';
    *(char *)(*(int *)(param_1 + 0xa8) + 0x25) = cVar2;
    *(char *)(*(int *)(param_1 + 0xa8) + 0x26) = cVar2;
    *(char *)(*(int *)(param_1 + 0xa8) + 0x27) = cVar2;
    *(char *)(*(int *)(param_1 + 0xa8) + 0x28) = cVar2;
    *(char *)(*(int *)(param_1 + 0xa8) + 0x29) = cVar2;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x11) = 1;
  if (iVar3 < 0) {
    fn_001028d4(auStack_50,(char *)&DAT_0085fb98);
  }
  else {
    fn_001028d4(auStack_50,(char *)&DAT_0085f89c);
  }
  uVar4 = fn_0022f584(auStack_50,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa4),uVar4);
  return;
}



void fn_00569808(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_50 [64];
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0025e920(iVar2,*(undefined4 *)(param_1 + 4),uVar7);
  }
  piVar5 = *(int **)(param_1 + 0x7c);
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x7c) = piVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))
            (*(int **)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x48));
  iVar1 = fn_001828f0(iVar1,DAT_00890a34);
  uVar7 = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  fn_0025e378(*(undefined4 *)(param_1 + 0x7c),param_1 + 0x80);
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      iVar6 = iVar2 + iVar1 * 4;
      fn_001c9d44(*(undefined4 *)(param_1 + 0x78),iVar6,
                   *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar6 * 4),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  uVar4 = (uint)*(char *)(*(int *)(param_1 + 0xa8) + 0x10);
  if (uVar4 < 5) {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 0xa8) + uVar4 + 0x25);
    if (-1 < iVar1 + -1) {
      fn_001028d4(auStack_50,(char *)&DAT_0085f89c);
      goto LAB_00569934;
    }
  }
  fn_001028d4(auStack_50,(char *)&DAT_0085fb98);
LAB_00569934:
  uVar7 = fn_0022f584(auStack_50,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0xa4),uVar7);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)(char)((char)iVar1 + -1);
    if (0xb < iVar2) {
      iVar2 = (int)(char)((char)iVar1 + -0xd);
      fn_001ca2b8(*(undefined4 *)(param_1 + 0x78),1);
    }
  }
  iVar1 = 0;
  do {
    uVar7 = fn_006c3c2c(*(undefined4 *)(param_1 + 0xa8),
                         iVar1 + *(int *)(*(int *)(param_1 + 0x78) + 0xcc) * 0xc);
    fn_003f7cdc(*(undefined4 *)(param_1 + 0xa8),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + iVar1 * 4),uVar7);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  fn_0056a198(param_1,iVar2);
                    /* WARNING: Could not recover jumptable at 0x005699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
            (*(int **)(param_1 + 0x78),iVar2 % 4,(int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2
             ,0);
  return;
}


