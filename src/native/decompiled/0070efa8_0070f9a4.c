#include "0070efa8_0070f9a4.h"



void fn_0070f9a4(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = 4;
    uVar1 = uVar2;
    do {
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 7;
      }
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 7;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(char *)(uVar2 + 0x8f314d) = (char)uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



void fn_0070f98c(void)

{
  DAT_008c0458 = &DAT_008c044c;
  return;
}



void fn_0070f974(void)

{
  DAT_008c3c54 = &DAT_008c3d2c;
  return;
}



void fn_0070f918(void)

{
  DAT_008c044c = 0;
  DAT_008ecaec = 0;
  DAT_008ecaf0 = 0;
  DAT_008ecaf4 = 0xbf800000;
  DAT_008ecaf8 = 0;
  DAT_008ecafc = 0x3f800000;
  DAT_008ecb00 = 0;
  DAT_008ecb04 = 0;
  DAT_008ecb08 = 0;
  DAT_008ecb0c = 0;
  return;
}



void fn_0070f900(void)

{
  DAT_008c33d8 = &DAT_008c33d4;
  return;
}



void fn_0070f8e0(void)

{
  DAT_008c3de4 = 0;
  DAT_008c3de8 = 0;
  return;
}



void fn_0070f87c(void)

{
  DAT_00895ee4 = 0x42300000;
  DAT_00895ee8 = 0x42300000;
  DAT_008cc694 = 0xc1200000;
  DAT_008cc698 = 0x41200000;
  DAT_008cc69c = 0;
  DAT_008cc6a8 = 0;
  DAT_008cc6a0 = 0xc1b00000;
  DAT_008cc6a4 = 0x41b00000;
  return;
}



void fn_0070f804(void)

{
  DAT_00899264 = 0x42300000;
  DAT_00899268 = 0x42300000;
  DAT_008d17a8 = 0xc1200000;
  DAT_008d17ac = 0x41200000;
  DAT_008d17b0 = 0;
  DAT_008d17bc = 0;
  DAT_008d17b4 = 0xc1b00000;
  DAT_008d17b8 = 0x41b00000;
  DAT_00899260 = &DAT_0089466c;
  return;
}



void fn_0070f78c(void)

{
  DAT_00899270 = 0x42300000;
  DAT_00899274 = 0x42300000;
  DAT_008d17c0 = 0xc1200000;
  DAT_008d17c4 = 0x41200000;
  DAT_008d17c8 = 0;
  DAT_008d17d4 = 0;
  DAT_008d17cc = 0xc1b00000;
  DAT_008d17d0 = 0x41b00000;
  DAT_0089926c = &DAT_00893210;
  return;
}



void fn_0070f728(void)

{
  DAT_00897790 = 0x42300000;
  DAT_00897794 = 0x42300000;
  DAT_008cdcdc = 0xc1200000;
  DAT_008cdce0 = 0x41200000;
  DAT_008cdce4 = 0;
  DAT_008cdcf0 = 0;
  DAT_008cdce8 = 0xc1b00000;
  DAT_008cdcec = 0x41b00000;
  return;
}



void fn_0070f6c4(void)

{
  DAT_0089741c = 0x42300000;
  DAT_00897420 = 0x42300000;
  DAT_008cdbbc = 0xc1200000;
  DAT_008cdbc0 = 0x41200000;
  DAT_008cdbc4 = 0;
  DAT_008cdbd0 = 0;
  DAT_008cdbc8 = 0xc1b00000;
  DAT_008cdbcc = 0x41b00000;
  return;
}



void fn_0070efa8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  DAT_008bad5c = &DAT_00852fe8;
  fn_004745d8(&DAT_008e968c,0x20000000,0x100000);
  DAT_008e9408 = 65000;
  DAT_008e940c = 0x400;
  DAT_008e9404 = &DAT_00853698;
  fn_0046c7f0(&DAT_008e9510,L"UseDistinctPortForStreamManager",0);
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e9588,fn_0046c860,0x100000);
  *puVar1 = &DAT_00853e38;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_00855210;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_00855210;
  puVar1[-4] = puVar1[1];
  *(undefined1 *)(puVar1 + -3) = *(undefined1 *)(puVar1 + 2);
  puVar1[-2] = puVar1[3];
  *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(puVar1 + 4);
  puVar1[-6] = 0;
  fn_004a18ac(&DAT_008b6508,puVar1 + -8);
  if (1 < DAT_008b6400) {
    if ((DAT_008b6400 == 0xffffffff) &&
       (puVar2 = (undefined4 *)fn_0045503c(0xfffffff4), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = 0x14;
      puVar2[1] = 0xffffffff;
      fn_00101a1c(puVar2 + 2,&LAB_004a6dec,0x14,0xffffffff);
    }
    uVar3 = fn_0015ece0(DAT_008b6400 * 0x14);
    puVar1[-6] = uVar3;
    uVar4 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar2 = (undefined4 *)(puVar1[-6] + uVar4 * 0x14);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &DAT_00853418;
          puVar2[1] = puVar1[1];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
          puVar2[3] = puVar1[3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
          *puVar2 = &DAT_00855210;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e95bc,fn_0074d91c,0x100000);
  *puVar1 = &DAT_00853ea4;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_008557a8;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_008557a8;
  puVar1[-4] = puVar1[1];
  *(undefined1 *)(puVar1 + -3) = *(undefined1 *)(puVar1 + 2);
  puVar1[-2] = puVar1[3];
  *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(puVar1 + 4);
  puVar1[-6] = 0;
  fn_004a18ac(&DAT_008b6508,puVar1 + -8);
  if (1 < DAT_008b6400) {
    if ((DAT_008b6400 == 0xffffffff) &&
       (puVar2 = (undefined4 *)fn_0045503c(0xfffffff4), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = 0x14;
      puVar2[1] = 0xffffffff;
      fn_00101a1c(puVar2 + 2,&LAB_004b2454,0x14,0xffffffff);
    }
    uVar3 = fn_0015ece0(DAT_008b6400 * 0x14);
    puVar1[-6] = uVar3;
    uVar4 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar2 = (undefined4 *)(puVar1[-6] + uVar4 * 0x14);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &DAT_00853418;
          puVar2[1] = puVar1[1];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
          puVar2[3] = puVar1[3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
          *puVar2 = &DAT_008557a8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e95f0,fn_0074db2c,0x100000);
  *puVar1 = &DAT_00853f34;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_00855868;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_00855868;
  puVar1[-4] = puVar1[1];
  *(undefined1 *)(puVar1 + -3) = *(undefined1 *)(puVar1 + 2);
  puVar1[-2] = puVar1[3];
  *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(puVar1 + 4);
  puVar1[-6] = 0;
  fn_004a18ac(&DAT_008b6508,puVar1 + -8);
  if (1 < DAT_008b6400) {
    if ((DAT_008b6400 == 0xffffffff) &&
       (puVar2 = (undefined4 *)fn_0045503c(0xfffffff4), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = 0x14;
      puVar2[1] = 0xffffffff;
      fn_00101a1c(puVar2 + 2,&LAB_004b2e2c,0x14,0xffffffff);
    }
    uVar3 = fn_0015ece0(DAT_008b6400 * 0x14);
    puVar1[-6] = uVar3;
    uVar4 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar2 = (undefined4 *)(puVar1[-6] + uVar4 * 0x14);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &DAT_00853418;
          puVar2[1] = puVar1[1];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
          puVar2[3] = puVar1[3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
          *puVar2 = &DAT_00855868;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e9624,fn_0074ddec,0x100000);
  *puVar1 = &DAT_00853eec;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_00855840;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_00855840;
  puVar1[-4] = puVar1[1];
  *(undefined1 *)(puVar1 + -3) = *(undefined1 *)(puVar1 + 2);
  puVar1[-2] = puVar1[3];
  *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(puVar1 + 4);
  puVar1[-6] = 0;
  fn_004a18ac(&DAT_008b6508,puVar1 + -8);
  if (1 < DAT_008b6400) {
    if ((DAT_008b6400 == 0xffffffff) &&
       (puVar2 = (undefined4 *)fn_0045503c(0xfffffff4), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = 0x14;
      puVar2[1] = 0xffffffff;
      fn_00101a1c(puVar2 + 2,&LAB_004b2dec,0x14,0xffffffff);
    }
    uVar3 = fn_0015ece0(DAT_008b6400 * 0x14);
    puVar1[-6] = uVar3;
    uVar4 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar2 = (undefined4 *)(puVar1[-6] + uVar4 * 0x14);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &DAT_00853418;
          puVar2[1] = puVar1[1];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
          puVar2[3] = puVar1[3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
          *puVar2 = &DAT_00855840;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e9658,fn_0074dc8c,0x100000);
  *puVar1 = &DAT_00853f58;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_00855974;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_00855974;
  puVar1[-4] = puVar1[1];
  *(undefined1 *)(puVar1 + -3) = *(undefined1 *)(puVar1 + 2);
  puVar1[-2] = puVar1[3];
  *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(puVar1 + 4);
  puVar1[-6] = 0;
  fn_004a18ac(&DAT_008b6508,puVar1 + -8);
  if (1 < DAT_008b6400) {
    if ((DAT_008b6400 == 0xffffffff) &&
       (puVar2 = (undefined4 *)fn_0045503c(0xfffffff4), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = 0x14;
      puVar2[1] = 0xffffffff;
      fn_00101a1c(puVar2 + 2,&LAB_004b3530,0x14,0xffffffff);
    }
    uVar3 = fn_0015ece0(DAT_008b6400 * 0x14);
    puVar1[-6] = uVar3;
    uVar4 = 0;
    if (DAT_008b6400 != 0) {
      do {
        puVar2 = (undefined4 *)(puVar1[-6] + uVar4 * 0x14);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = &DAT_00853418;
          puVar2[1] = puVar1[1];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
          puVar2[3] = puVar1[3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
          *puVar2 = &DAT_00855974;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  fn_00303b10(puVar1 + -8,fn_0074de9c,0x100000);
  return;
}


