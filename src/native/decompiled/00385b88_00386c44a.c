#include "00385b88_00386c44a.h"



void fn_00386854(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003868d0(iVar1,param_1);
  return;
}



void fn_00385f68(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [44];
  
  iVar3 = fn_0022cdf0();
  if (iVar3 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  sVar2 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  bVar8 = *(short *)(param_1 + 0xc4) != sVar2;
  if (bVar8) {
    fn_0022cdb4(param_1,sVar2 != 0);
    *(short *)(param_1 + 0xc4) = sVar2;
  }
  iVar3 = fn_003492bc(*(undefined4 *)(param_1 + 0x98));
  if (iVar3 == 1) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    fn_0022cecc(param_1);
    bVar8 = true;
    fn_0068ab44(param_1,0x100094f);
  }
  else if (iVar3 == 2) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    fn_0022cecc(param_1);
    bVar8 = true;
    fn_0068ab44(param_1,0x100094f);
  }
  if ((*(short *)(param_1 + 0xc4) == 0) ||
     (uVar4 = (uint)((short)(*(byte *)(*(int *)(param_1 + 0x98) + 0x464) + 9) * 0xcd) >> 0xb,
     uVar4 + 1 < 2)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uVar4 + 1) / 2;
  }
  if (*(uint *)(param_1 + 0x80) != uVar4) {
    *(uint *)(param_1 + 0x80) = uVar4;
    *(undefined4 *)(param_1 + 0x84) = 0;
    fn_0022cecc(param_1);
    bVar8 = true;
  }
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == *(char *)(param_1 + 0xc6)) {
    iVar3 = 0;
    goto LAB_003860e0;
  }
  bVar8 = true;
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x338);
  do {
    iVar6 = 0;
    do {
      fn_00190d50(*(undefined4 *)(param_1 + iVar6 * 8 + iVar3 * 4 + 200),&DAT_00385f30);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 10);
    if (*(short *)(param_1 + 0xc4) != 0) {
      iVar6 = *(int *)(param_1 + 0x84) * 0x14 + iVar3 * 10;
      bVar1 = *(byte *)(*(int *)(param_1 + 0x98) + 0x464);
      iVar7 = 0;
      do {
        if (iVar6 < (int)(uint)bVar1) {
          iVar5 = (int)*(short *)(*(int *)(param_1 + 0x98) + iVar6 * 2 + 0x468);
          if (iVar5 != 0) {
            fn_0022f818(auStack_48,0x15,iVar5,0);
            fn_00190d50(*(undefined4 *)(param_1 + iVar7 * 8 + iVar3 * 4 + 200),auStack_48);
          }
          iVar6 = iVar6 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
    do {
      iVar3 = iVar3 + 1;
      if (1 < iVar3) {
        fn_003bbde0(param_1);
        iVar3 = fn_00688920(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"ic_guest");
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
        return;
      }
LAB_003860e0:
    } while (!bVar8);
  } while( true );
}



void fn_00385e6c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [48];
  
  iVar3 = 0;
  do {
    fn_00190d50(*(undefined4 *)(param_1 + iVar3 * 8 + param_2 * 4 + 200),&DAT_00385f30);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  if (*(short *)(param_1 + 0xc4) != 0) {
    iVar3 = *(int *)(param_1 + 0x84) * 0x14 + param_2 * 10;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x98) + 0x464);
    iVar4 = 0;
    do {
      if (iVar3 < (int)(uint)bVar1) {
        iVar2 = (int)*(short *)(*(int *)(param_1 + 0x98) + iVar3 * 2 + 0x468);
        if (iVar2 != 0) {
          fn_0022f818(auStack_48,0x15,iVar2,0);
          fn_00190d50(*(undefined4 *)(param_1 + iVar4 * 8 + param_2 * 4 + 200),auStack_48);
        }
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
  }
  return;
}



void fn_00385b88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0022cfac();
  *puVar1 = &PTR_FUN_00829c48;
  return;
}


