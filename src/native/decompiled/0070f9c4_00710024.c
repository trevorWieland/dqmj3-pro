#include "0070f9c4_00710024.h"



void fn_00710024(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  DAT_008aec70 = &DAT_00853a38;
  DAT_008aec74 = 0;
  fn_004745d8(&DAT_008e69b0,0x20000000,0x100000);
  fn_004745d8(&DAT_008e6a0c,0x20000000,0x100000);
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e69d8,&LAB_00474660);
  *puVar1 = &DAT_00853e5c;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_00855780;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_00855780;
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
      fn_00101a1c(puVar2 + 2,&LAB_004b2414,0x14,0xffffffff);
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
          *puVar2 = &DAT_00855780;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  fn_00303b10(puVar1 + -8,fn_0074d9cc,0x100000);
  return;
}



void fn_0070fed4(void)

{
  DAT_00892964 = 0x42300000;
  DAT_00892968 = 0x42300000;
  DAT_008c9a10 = 0;
  DAT_008c9a08 = 0xc1200000;
  DAT_008c9a0c = 0x41200000;
  DAT_008c9a14 = 0xc1b00000;
  DAT_008c9a18 = 0x41b00000;
  DAT_008c9a1c = 0;
  DAT_00892940 = 0xff;
  DAT_00892941 = 0xff;
  DAT_00892942 = 0xff;
  DAT_00892943 = 0xff;
  DAT_00892944 = 0;
  DAT_00892945 = 0;
  DAT_00892946 = 0;
  DAT_00892947 = 0xff;
  DAT_00892948 = 0xb4;
  DAT_00892949 = 0xb4;
  DAT_0089294a = 0xb4;
  DAT_0089294b = 0xff;
  DAT_0089294c = 0xff;
  DAT_0089294d = 0;
  DAT_0089294e = 0;
  DAT_0089294f = 0xff;
  DAT_00892950 = 0;
  DAT_00892951 = 0xff;
  DAT_00892952 = 0;
  DAT_00892953 = 0xff;
  DAT_00892954 = 0;
  DAT_00892955 = 0;
  DAT_00892956 = 0xff;
  DAT_00892957 = 0xff;
  DAT_00892958 = 0x52;
  DAT_00892959 = 0xbc;
  DAT_0089295a = 0xde;
  DAT_0089295b = 0xff;
  DAT_0089295c = 0xff;
  DAT_0089295d = 0xff;
  DAT_0089295e = 0;
  DAT_0089295f = 0xff;
  DAT_00892960 = 0;
  DAT_00892961 = 0xff;
  DAT_00892962 = 0xff;
  DAT_00892963 = 0xff;
  DAT_0089293c = &DAT_008929a4;
  return;
}



void fn_0070fe70(void)

{
  DAT_00892924 = 0x42300000;
  DAT_00892928 = 0x42300000;
  DAT_008c99f0 = 0xc1200000;
  DAT_008c99f4 = 0x41200000;
  DAT_008c99f8 = 0;
  DAT_008c9a04 = 0;
  DAT_008c99fc = 0xc1b00000;
  DAT_008c9a00 = 0x41b00000;
  return;
}



void fn_0070fde4(void)

{
  undefined4 uVar1;
  
  DAT_0089190c = 0x42300000;
  DAT_00891910 = 0x42300000;
  DAT_008c8f14 = 0xc1200000;
  DAT_008c8f18 = 0x41200000;
  DAT_008c8f1c = 0;
  DAT_008c8f28 = 0;
  DAT_008c8f20 = 0xc1b00000;
  DAT_008c8f24 = 0x41b00000;
  DAT_008c8f2c = 0;
  DAT_008c8f30 = 0x41200000;
  DAT_008c8f34 = 0;
  uVar1 = 0x43b40000;
  fn_0017fe34();
  DAT_00891908 = uVar1;
  return;
}



void fn_0070fd80(void)

{
  DAT_008918f4 = 0x42300000;
  DAT_008918f8 = 0x42300000;
  DAT_008c8ee4 = 0xc1200000;
  DAT_008c8ee8 = 0x41200000;
  DAT_008c8eec = 0;
  DAT_008c8ef8 = 0;
  DAT_008c8ef0 = 0xc1b00000;
  DAT_008c8ef4 = 0x41b00000;
  return;
}



void fn_0070fd1c(void)

{
  DAT_008918c0 = 0x42300000;
  DAT_008918c4 = 0x42300000;
  DAT_008c8e9c = 0xc1200000;
  DAT_008c8ea0 = 0x41200000;
  DAT_008c8ea4 = 0;
  DAT_008c8eb0 = 0;
  DAT_008c8ea8 = 0xc1b00000;
  DAT_008c8eac = 0x41b00000;
  return;
}



void fn_0070fc70(void)

{
  DAT_00891894 = 0x42300000;
  DAT_00891898 = 0x42300000;
  DAT_008c8e18 = 0xc1200000;
  DAT_008c8e1c = 0x41200000;
  DAT_008c8e20 = 0;
  DAT_008c8e24 = 0xc1b00000;
  DAT_008c8e28 = 0x41b00000;
  DAT_008c8e2c = 0;
  DAT_008c8e30 = 0x43960000;
  DAT_008c8e34 = 0x44160000;
  DAT_008c8e38 = 0x40000000;
  DAT_008c8e3c = 0x44160000;
  DAT_008c8e40 = 0x44960000;
  DAT_008c8e44 = 0x40800000;
  return;
}



void fn_0070fc0c(void)

{
  DAT_008988c4 = 0x42300000;
  DAT_008988c8 = 0x42300000;
  DAT_008d010c = 0xc1200000;
  DAT_008d0110 = 0x41200000;
  DAT_008d0114 = 0;
  DAT_008d0120 = 0;
  DAT_008d0118 = 0xc1b00000;
  DAT_008d011c = 0x41b00000;
  return;
}



void fn_0070fb94(void)

{
  DAT_008909d0 = 0x42300000;
  DAT_008909d4 = 0x42300000;
  DAT_008c7f9c = 0xc1200000;
  DAT_008c7fa0 = 0x41200000;
  DAT_008c7fa4 = 0;
  DAT_008c7fb0 = 0;
  DAT_008c7fa8 = 0xc1b00000;
  DAT_008c7fac = 0x41b00000;
  DAT_008909cc = &DAT_00893210;
  return;
}



void fn_0070fb7c(void)

{
  DAT_008909c8 = &DAT_00893204;
  return;
}



void fn_0070fb04(void)

{
  DAT_0089092c = 0x42300000;
  DAT_00890930 = 0x42300000;
  DAT_008c7d84 = 0xc1200000;
  DAT_008c7d88 = 0x41200000;
  DAT_008c7d8c = 0;
  DAT_008c7d98 = 0;
  DAT_008c7d90 = 0xc1b00000;
  DAT_008c7d94 = 0x41b00000;
  DAT_00890928 = &DAT_0089466c;
  return;
}



void fn_0070fa8c(void)

{
  DAT_008908c4 = 0x42300000;
  DAT_008908c8 = 0x42300000;
  DAT_008c7d24 = 0xc1200000;
  DAT_008c7d28 = 0x41200000;
  DAT_008c7d2c = 0;
  DAT_008c7d38 = 0;
  DAT_008c7d30 = 0xc1b00000;
  DAT_008c7d34 = 0x41b00000;
  DAT_008908c0 = &DAT_0089466c;
  return;
}



void fn_0070fa14(void)

{
  DAT_00890848 = 0x42300000;
  DAT_0089084c = 0x42300000;
  DAT_008c7cf4 = 0xc1200000;
  DAT_008c7cf8 = 0x41200000;
  DAT_008c7cfc = 0;
  DAT_008c7d08 = 0;
  DAT_008c7d00 = 0xc1b00000;
  DAT_008c7d04 = 0x41b00000;
  DAT_00890844 = &DAT_0089466c;
  return;
}



void fn_0070f9fc(void)

{
  DAT_00890f3c = &DAT_00894678;
  return;
}



void fn_0070f9c4(void)

{
  DAT_008f34bc = 0;
  DAT_008f34f0 = 0;
  DAT_008f34f4 = 0;
  DAT_008f34f8 = 0xffffffff;
  fn_00303b10(&DAT_008f34bc,&DAT_0051e3d8,0x100000);
  return;
}


