#include "0070e9d8_0070ee28.h"



void fn_0070ee28(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  DAT_008b68a4 = &DAT_008533c0;
  DAT_008b68a8 = 0;
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e93d0,fn_0074cd10);
  *puVar1 = &DAT_00853f10;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_00855854;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_00855854;
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
      fn_00101a1c(puVar2 + 2,&LAB_004b2e0c,0x14,0xffffffff);
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
          *puVar2 = &DAT_00855854;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  fn_00303b10(puVar1 + -8,fn_0074dd3c,0x100000);
  return;
}



void fn_0070edc4(void)

{
  DAT_00895d94 = 0x42300000;
  DAT_00895d98 = 0x42300000;
  DAT_008cc544 = 0xc1200000;
  DAT_008cc548 = 0x41200000;
  DAT_008cc54c = 0;
  DAT_008cc558 = 0;
  DAT_008cc550 = 0xc1b00000;
  DAT_008cc554 = 0x41b00000;
  return;
}



void fn_0070ed60(void)

{
  DAT_00895cb4 = 0x42300000;
  DAT_00895cb8 = 0x42300000;
  DAT_008cc49c = 0xc1200000;
  DAT_008cc4a0 = 0x41200000;
  DAT_008cc4a4 = 0;
  DAT_008cc4b0 = 0;
  DAT_008cc4a8 = 0xc1b00000;
  DAT_008cc4ac = 0x41b00000;
  return;
}



void fn_0070ecfc(void)

{
  DAT_0089890c = 0x42300000;
  DAT_00898910 = 0x42300000;
  DAT_008d01e4 = 0xc1200000;
  DAT_008d01e8 = 0x41200000;
  DAT_008d01ec = 0;
  DAT_008d01f8 = 0;
  DAT_008d01f0 = 0xc1b00000;
  DAT_008d01f4 = 0x41b00000;
  return;
}



void fn_0070ecd4(void)

{
  DAT_008ccfb8 = 0;
  DAT_008ccfbc = 0;
  fn_00303b10(&DAT_008ccfb8,fn_0077efd0,0x100000);
  return;
}



void fn_0070ec70(void)

{
  DAT_008988fc = 0x42300000;
  DAT_00898900 = 0x42300000;
  DAT_008d01b4 = 0xc1200000;
  DAT_008d01b8 = 0x41200000;
  DAT_008d01bc = 0;
  DAT_008d01c8 = 0;
  DAT_008d01c0 = 0xc1b00000;
  DAT_008d01c4 = 0x41b00000;
  return;
}



void fn_0070ebf8(void)

{
  DAT_008963a4 = 0x42300000;
  DAT_008963a8 = 0x42300000;
  DAT_008cc958 = 0xc1200000;
  DAT_008cc95c = 0x41200000;
  DAT_008cc960 = 0;
  DAT_008cc964 = 0xc1b00000;
  DAT_008cc968 = 0x41b00000;
  DAT_008cc96c = 0;
  DAT_008963a0 = 0;
  return;
}



void fn_0070eb94(void)

{
  DAT_008988ec = 0x42300000;
  DAT_008988f0 = 0x42300000;
  DAT_008d0184 = 0xc1200000;
  DAT_008d0188 = 0x41200000;
  DAT_008d018c = 0;
  DAT_008d0198 = 0;
  DAT_008d0190 = 0xc1b00000;
  DAT_008d0194 = 0x41b00000;
  return;
}



void fn_0070ea50(void)

{
  DAT_00896250 = 0x42300000;
  DAT_00896254 = 0x42300000;
  DAT_008cc898 = 0xc1200000;
  DAT_008cc89c = 0x41200000;
  DAT_008cc8a0 = 0;
  DAT_008cc8a4 = 0xc1b00000;
  DAT_008cc8a8 = 0x41b00000;
  DAT_008cc8ac = 0;
  DAT_0089622c = 0xff;
  DAT_0089622d = 0xff;
  DAT_0089622e = 0xff;
  DAT_0089622f = 0xff;
  DAT_00896230 = 0;
  DAT_00896231 = 0;
  DAT_00896232 = 0;
  DAT_00896233 = 0xff;
  DAT_00896234 = 0xb4;
  DAT_00896235 = 0xb4;
  DAT_00896236 = 0xb4;
  DAT_00896237 = 0xff;
  DAT_00896238 = 0xff;
  DAT_00896239 = 0;
  DAT_0089623a = 0;
  DAT_0089623b = 0xff;
  DAT_0089623c = 0;
  DAT_0089623d = 0xff;
  DAT_0089623e = 0;
  DAT_0089623f = 0xff;
  DAT_00896240 = 0;
  DAT_00896241 = 0;
  DAT_00896242 = 0xff;
  DAT_00896243 = 0xff;
  DAT_00896244 = 0x52;
  DAT_00896245 = 0xbc;
  DAT_00896246 = 0xde;
  DAT_00896247 = 0xff;
  DAT_00896248 = 0xff;
  DAT_00896249 = 0xff;
  DAT_0089624a = 0;
  DAT_0089624b = 0xff;
  DAT_0089624c = 0;
  DAT_0089624d = 0xff;
  DAT_0089624e = 0xff;
  DAT_0089624f = 0xff;
  return;
}



void fn_0070e9d8(void)

{
  DAT_00894d54 = 0x42300000;
  DAT_00894d58 = 0x42300000;
  DAT_008cb840 = 0xc1200000;
  DAT_008cb844 = 0x41200000;
  DAT_008cb848 = 0;
  DAT_008cb854 = 0;
  DAT_008cb84c = 0xc1b00000;
  DAT_008cb850 = 0x41b00000;
  DAT_00894d50 = &DAT_008951fc;
  return;
}


