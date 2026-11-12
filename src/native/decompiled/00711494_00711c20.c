#include "00711494_00711c20.h"



void fn_00711c20(void)

{
  DAT_008933e4 = 0x42300000;
  DAT_008933e8 = 0x42300000;
  DAT_008ca648 = 0xc1200000;
  DAT_008ca64c = 0x41200000;
  DAT_008ca650 = 0;
  DAT_008ca65c = 0;
  DAT_008ca654 = 0xc1b00000;
  DAT_008ca658 = 0x41b00000;
  DAT_008933e0 = &DAT_00893278;
  return;
}



void fn_00711bbc(void)

{
  DAT_008931dc = 0x42300000;
  DAT_008931e0 = 0x42300000;
  DAT_008ca4c8 = 0xc1200000;
  DAT_008ca4cc = 0x41200000;
  DAT_008ca4d0 = 0;
  DAT_008ca4dc = 0;
  DAT_008ca4d4 = 0xc1b00000;
  DAT_008ca4d8 = 0x41b00000;
  return;
}



void fn_00711b58(void)

{
  DAT_008931bc = 0x42300000;
  DAT_008931c0 = 0x42300000;
  DAT_008ca468 = 0xc1200000;
  DAT_008ca46c = 0x41200000;
  DAT_008ca470 = 0;
  DAT_008ca47c = 0;
  DAT_008ca474 = 0xc1b00000;
  DAT_008ca478 = 0x41b00000;
  return;
}



void fn_00711ae0(void)

{
  DAT_0089305c = 0x42300000;
  DAT_00893060 = 0x42300000;
  DAT_008ca1b0 = 0xc1200000;
  DAT_008ca1b4 = 0x41200000;
  DAT_008ca1b8 = 0;
  DAT_008ca1c4 = 0;
  DAT_008ca1bc = 0xc1b00000;
  DAT_008ca1c0 = 0x41b00000;
  DAT_00893058 = &DAT_0089466c;
  return;
}



void fn_00711a68(void)

{
  DAT_00892edc = 0x42300000;
  DAT_00892ee0 = 0x42300000;
  DAT_008c9f18 = 0xc1200000;
  DAT_008c9f1c = 0x41200000;
  DAT_008c9f20 = 0;
  DAT_008c9f2c = 0;
  DAT_008c9f24 = 0xc1b00000;
  DAT_008c9f28 = 0x41b00000;
  DAT_00892ed8 = &DAT_00893210;
  return;
}



void fn_00711910(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)fn_004a1a00(&DAT_008e68ac);
  *puVar1 = &DAT_00853da8;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 3,1);
  *puVar1 = &DAT_008544b8;
  puVar1 = (undefined4 *)fn_00474678(puVar1 + 5,1);
  *puVar1 = &DAT_008544b8;
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
      fn_00101a1c(puVar2 + 2,&LAB_00494ea0,0x14,0xffffffff);
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
          *puVar2 = &DAT_008544b8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < DAT_008b6400);
    }
  }
  fn_00303b10(puVar1 + -8,fn_0074d670,0x100000);
  return;
}



void fn_007118ac(void)

{
  DAT_00892524 = 0x42300000;
  DAT_00892528 = 0x42300000;
  DAT_008c96d0 = 0xc1200000;
  DAT_008c96d4 = 0x41200000;
  DAT_008c96d8 = 0;
  DAT_008c96e4 = 0;
  DAT_008c96dc = 0xc1b00000;
  DAT_008c96e0 = 0x41b00000;
  return;
}



void fn_00711848(void)

{
  DAT_00891ed4 = 0x42300000;
  DAT_00891ed8 = 0x42300000;
  DAT_008c9308 = 0xc1200000;
  DAT_008c930c = 0x41200000;
  DAT_008c9310 = 0;
  DAT_008c931c = 0;
  DAT_008c9314 = 0xc1b00000;
  DAT_008c9318 = 0x41b00000;
  return;
}



void fn_007117e4(void)

{
  DAT_008913a0 = 0x42300000;
  DAT_008913a4 = 0x42300000;
  DAT_008c8c68 = 0xc1200000;
  DAT_008c8c6c = 0x41200000;
  DAT_008c8c70 = 0;
  DAT_008c8c7c = 0;
  DAT_008c8c74 = 0xc1b00000;
  DAT_008c8c78 = 0x41b00000;
  return;
}



void fn_0071176c(void)

{
  DAT_00891cb0 = 0x42300000;
  DAT_00891cb4 = 0x42300000;
  DAT_008c9184 = 0xc1200000;
  DAT_008c9188 = 0x41200000;
  DAT_008c918c = 0;
  DAT_008c9198 = 0;
  DAT_008c9190 = 0xc1b00000;
  DAT_008c9194 = 0x41b00000;
  DAT_00891ca4 = &DAT_0089466c;
  return;
}



void fn_00711754(void)

{
  DAT_00891e28 = &DAT_00894678;
  return;
}



void fn_007116f0(void)

{
  DAT_00890c58 = 0x42300000;
  DAT_00890c5c = 0x42300000;
  DAT_008c82cc = 0xc1200000;
  DAT_008c82d0 = 0x41200000;
  DAT_008c82d4 = 0;
  DAT_008c82e0 = 0;
  DAT_008c82d8 = 0xc1b00000;
  DAT_008c82dc = 0x41b00000;
  return;
}



void fn_0071168c(void)

{
  DAT_008992a0 = 0x42300000;
  DAT_008992a4 = 0x42300000;
  DAT_008d1820 = 0xc1200000;
  DAT_008d1824 = 0x41200000;
  DAT_008d1828 = 0;
  DAT_008d1834 = 0;
  DAT_008d182c = 0xc1b00000;
  DAT_008d1830 = 0x41b00000;
  return;
}



void fn_00711628(void)

{
  DAT_008923c4 = 0x42300000;
  DAT_008923c8 = 0x42300000;
  DAT_008c955c = 0xc1200000;
  DAT_008c9560 = 0x41200000;
  DAT_008c9564 = 0;
  DAT_008c9570 = 0;
  DAT_008c9568 = 0xc1b00000;
  DAT_008c956c = 0x41b00000;
  return;
}



void fn_007115b0(void)

{
  DAT_008907ec = 0x42300000;
  DAT_008907f0 = 0x42300000;
  DAT_008c7cdc = 0xc1200000;
  DAT_008c7ce0 = 0x41200000;
  DAT_008c7ce4 = 0;
  DAT_008c7cf0 = 0;
  DAT_008c7ce8 = 0xc1b00000;
  DAT_008c7cec = 0x41b00000;
  DAT_008907e8 = &DAT_0089466c;
  return;
}



void fn_0071154c(void)

{
  DAT_00893130 = 0x42300000;
  DAT_00893134 = 0x42300000;
  DAT_008ca390 = 0xc1200000;
  DAT_008ca394 = 0x41200000;
  DAT_008ca398 = 0;
  DAT_008ca3a4 = 0;
  DAT_008ca39c = 0xc1b00000;
  DAT_008ca3a0 = 0x41b00000;
  return;
}



void fn_007114d4(void)

{
  DAT_00892d90 = 0x42300000;
  DAT_00892d94 = 0x42300000;
  DAT_008c9dc8 = 0xc1200000;
  DAT_008c9dcc = 0x41200000;
  DAT_008c9dd0 = 0;
  DAT_008c9ddc = 0;
  DAT_008c9dd4 = 0xc1b00000;
  DAT_008c9dd8 = 0x41b00000;
  DAT_00892d8c = &DAT_00893b64;
  return;
}



void fn_007114ac(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_0015f180(&DAT_008c06c4);
  fn_00303b10(uVar1,&DAT_004ed460,0x100000);
  return;
}



void fn_00711494(void)

{
  DAT_008c3d30 = &DAT_008c3404;
  return;
}


