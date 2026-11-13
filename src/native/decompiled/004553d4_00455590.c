#include "004553d4_00455590.h"



void fn_00455590(int param_1)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 auStack_838 [2048];
  undefined1 auStack_38 [24];
  
  cVar1 = *(char *)(param_1 + 8);
  iVar10 = 0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar10 = fn_00101a50(auStack_838,0x400,&DAT_004558d0);
    }
    else if (cVar1 == '\x02') {
      iVar10 = fn_00101a50(auStack_838,0x400,L"prudps:/");
    }
    else if (cVar1 == '\x03') {
      iVar10 = fn_00101a50(auStack_838,0x400,L"udp:/");
    }
  }
  bVar3 = false;
  uVar6 = *(uint *)(*(int *)(param_1 + 4) + 8);
  if ((((uVar6 & 0xff) != 0 || (uVar6 >> 8 & 0xff) != 0) || (uVar6 >> 0x10 & 0xff) != 0) ||
      uVar6 >> 0x18 != 0) {
    iVar4 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,L"%ls%ls",L"address",&DAT_004558f4);
    iVar4 = iVar4 + iVar10;
    puVar11 = auStack_838 + iVar4 * 2;
    if (0x1f < 0x400U - iVar4) {
      fn_0017d82c(2,*(int *)(param_1 + 4) + 8,auStack_38,0x14);
      fn_0017fe44(auStack_38,puVar11,0x400U - iVar4);
    }
    iVar10 = fn_00100b58(puVar11);
    iVar10 = iVar10 + iVar4;
    bVar3 = true;
  }
  uVar2 = *(ushort *)(*(int *)(param_1 + 4) + 6);
  if ((uVar2 & 0xff) != 0 || uVar2 >> 8 != 0) {
    if (bVar3) {
      iVar4 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,&DAT_0045590c);
      iVar10 = iVar10 + iVar4;
    }
    uVar2 = *(ushort *)(*(int *)(param_1 + 4) + 6);
    iVar4 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,L"%ls%ls%u",L"port",&DAT_004558f4,
                         uVar2 << 8 | uVar2 >> 8);
    iVar10 = iVar10 + iVar4;
    bVar3 = true;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x38) + 8);
  iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  do {
    iVar7 = *(int *)(param_1 + 0x38);
    bVar13 = iVar4 == iVar7;
    if (bVar13) {
      iVar7 = *(int *)(param_1 + 0x1c);
    }
    if (bVar13 && iVar9 == iVar7) {
      if (*(int *)(param_1 + 0x58) != 0) {
        iVar4 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,&DAT_00455928);
        iVar4 = iVar4 + iVar10;
        iVar10 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        if (iVar10 != *(int *)(param_1 + 0x54)) {
          while( true ) {
            iVar7 = fn_00101a50(auStack_838 + iVar4 * 2,0x400,L"%ls%ls%ls",
                                 *(undefined4 *)(iVar10 + 0x14),&DAT_004558f4,
                                 *(undefined4 *)(iVar10 + 0x1c));
            iVar9 = *(int *)(iVar10 + 0xc);
            if (*(int *)(iVar10 + 0xc) == 0) {
              iVar9 = *(int *)(iVar10 + 4);
              if (iVar10 == *(int *)(iVar9 + 0xc)) {
                do {
                  iVar10 = iVar9;
                  iVar9 = *(int *)(iVar10 + 4);
                } while (iVar10 == *(int *)(iVar9 + 0xc));
              }
              if (*(int *)(iVar10 + 0xc) != iVar9) {
                iVar10 = iVar9;
              }
            }
            else {
              do {
                iVar10 = iVar9;
                iVar9 = *(int *)(iVar10 + 8);
              } while (*(int *)(iVar10 + 8) != 0);
            }
            if (iVar10 == *(int *)(param_1 + 0x54)) break;
            iVar9 = fn_00101a50(auStack_838 + (iVar4 + iVar7) * 2,0x400,&DAT_0045590c);
            iVar4 = iVar4 + iVar7 + iVar9;
          }
        }
      }
      fn_0015e9d8(param_1,auStack_838);
      *(undefined1 *)(param_1 + 0x66) = 1;
      *(undefined1 *)(param_1 + 100) = 1;
      return;
    }
    if (bVar3) {
      iVar7 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,&DAT_0045590c);
      iVar10 = iVar10 + iVar7;
    }
    uVar12 = 0;
    if (iVar4 == *(int *)(param_1 + 0x38)) {
      uVar8 = *(undefined4 *)(iVar9 + 0x14);
      uVar12 = *(undefined4 *)(iVar9 + 0x18);
      iVar7 = *(int *)(iVar9 + 0xc);
      if (*(int *)(iVar9 + 0xc) == 0) {
        iVar7 = *(int *)(iVar9 + 4);
        if (iVar9 == *(int *)(iVar7 + 0xc)) {
          do {
            iVar9 = iVar7;
            iVar7 = *(int *)(iVar9 + 4);
          } while (iVar9 == *(int *)(iVar7 + 0xc));
        }
        if (*(int *)(iVar9 + 0xc) != iVar7) {
LAB_004559fc:
          iVar9 = iVar7;
        }
      }
      else {
        do {
          iVar9 = iVar7;
          iVar7 = *(int *)(iVar9 + 8);
        } while (*(int *)(iVar9 + 8) != 0);
      }
LAB_00455a00:
      iVar7 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,L"%ls%ls%u",uVar8,&DAT_004558f4,uVar12);
    }
    else {
      if (iVar9 == *(int *)(param_1 + 0x1c)) {
        uVar8 = *(undefined4 *)(iVar4 + 0x14);
        iVar5 = *(int *)(iVar4 + 0x1c);
        iVar7 = *(int *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) == 0) {
          iVar7 = *(int *)(iVar4 + 4);
          if (iVar4 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar4 = iVar7;
              iVar7 = *(int *)(iVar4 + 4);
            } while (iVar4 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar4 + 0xc) != iVar7) {
LAB_00455970:
            iVar4 = iVar7;
          }
        }
        else {
          do {
            iVar4 = iVar7;
            iVar7 = *(int *)(iVar4 + 8);
          } while (*(int *)(iVar4 + 8) != 0);
        }
      }
      else {
        iVar7 = fn_00190ef0(iVar4 + 0x10,iVar9 + 0x10);
        if (iVar7 == 0) {
          uVar8 = *(undefined4 *)(iVar9 + 0x14);
          uVar12 = *(undefined4 *)(iVar9 + 0x18);
          iVar7 = *(int *)(iVar9 + 0xc);
          if (*(int *)(iVar9 + 0xc) == 0) {
            iVar7 = *(int *)(iVar9 + 4);
            if (iVar9 == *(int *)(iVar7 + 0xc)) {
              do {
                iVar9 = iVar7;
                iVar7 = *(int *)(iVar9 + 4);
              } while (iVar9 == *(int *)(iVar7 + 0xc));
            }
            if (*(int *)(iVar9 + 0xc) != iVar7) goto LAB_004559fc;
          }
          else {
            do {
              iVar9 = iVar7;
              iVar7 = *(int *)(iVar9 + 8);
            } while (*(int *)(iVar9 + 8) != 0);
          }
          goto LAB_00455a00;
        }
        iVar5 = *(int *)(iVar4 + 0x1c);
        uVar8 = *(undefined4 *)(iVar4 + 0x14);
        iVar7 = *(int *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) == 0) {
          iVar7 = *(int *)(iVar4 + 4);
          if (iVar4 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar4 = iVar7;
              iVar7 = *(int *)(iVar4 + 4);
            } while (iVar4 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar4 + 0xc) != iVar7) goto LAB_00455970;
        }
        else {
          do {
            iVar4 = iVar7;
            iVar7 = *(int *)(iVar4 + 8);
          } while (*(int *)(iVar4 + 8) != 0);
        }
      }
      if (iVar5 == 0) goto LAB_00455a00;
      iVar7 = fn_00101a50(auStack_838 + iVar10 * 2,0x400,L"%ls%ls%ls",uVar8,&DAT_004558f4,iVar5);
    }
    iVar10 = iVar10 + iVar7;
    bVar3 = true;
  } while( true );
}



void fn_00455568(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"probeinit",param_2);
  return;
}



void fn_004554ec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_20;
  undefined1 auStack_1c [8];
  
  local_20 = &DAT_00855a94;
  fn_0015e6f0(auStack_1c,&DAT_007d9e50);
  fn_00785b1c(param_1 + 0x28,&local_20);
  fn_00170f54(&local_20);
  local_20 = &DAT_00855a94;
  fn_0015e6f0(auStack_1c,&DAT_007d9e50);
  uVar1 = fn_00177f50(param_1 + 0x28,&local_20);
  fn_00170fa4(uVar1,param_2);
  fn_00170f54(&local_20);
  return;
}



void fn_004554c4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"RVCID",param_2);
  return;
}



void fn_0045549c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,&DAT_007d9e48,param_2);
  return;
}



void fn_00455474(undefined4 param_1)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,&DAT_007d9c58,1);
  return;
}



void fn_0045544c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"natf",param_2);
  return;
}



void fn_00455424(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,&DAT_007d9e40,param_2);
  return;
}



void fn_004553fc(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,L"upnp",param_2);
  return;
}



void fn_004553d4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [16];
  
  fn_00455124(auStack_10,param_1,&DAT_007d9e38,param_2);
  return;
}


