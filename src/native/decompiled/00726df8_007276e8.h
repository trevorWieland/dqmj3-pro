#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890b08; extern undefined4 DAT_00890b0c; extern undefined4 DAT_00890b10; extern undefined4 DAT_00890b14;
extern undefined4 DAT_00890b18; extern undefined4 DAT_00890b1c; extern undefined4 DAT_00890c8c; extern undefined4 DAT_00890d5c;
extern undefined4 DAT_00890d60; extern undefined4 DAT_00890d64; extern undefined4 DAT_00890d65; extern undefined4 DAT_00890d66;
extern undefined4 DAT_00890d67; extern undefined4 DAT_00890d68; extern undefined4 DAT_00890d6c; extern undefined4 DAT_00890d6d;
extern undefined4 DAT_00890d6e; extern undefined4 DAT_00890d6f; extern undefined4 DAT_00890d70; extern undefined4 DAT_00890d71;
extern undefined4 DAT_00890d72; extern undefined4 DAT_00890d73; extern undefined4 DAT_00890d74; extern undefined4 DAT_00890d75;
extern undefined4 DAT_00890d76; extern undefined4 DAT_00890d77; extern undefined4 DAT_00890d78; extern undefined4 DAT_00890d79;
extern undefined4 DAT_00890d7a; extern undefined4 DAT_00890d7b; extern undefined4 DAT_00890d7c; extern undefined4 DAT_00890d7d;
extern undefined4 DAT_00890d7e; extern undefined4 DAT_00890d7f; extern undefined4 DAT_00890d80; extern undefined4 DAT_00890d81;
extern undefined4 DAT_00890d82; extern undefined4 DAT_00890d83; extern undefined4 DAT_00890d84; extern undefined4 DAT_00890d88;
extern undefined4 DAT_00891ac8; extern undefined4 DAT_00891b90; extern undefined4 DAT_00891b94; extern undefined4 DAT_00891b98;
extern undefined4 DAT_00891b99; extern undefined4 DAT_00891b9a; extern undefined4 DAT_00891b9b; extern undefined4 DAT_00891b9c;
extern undefined4 DAT_00891ba0; extern undefined4 DAT_00891ba1; extern undefined4 DAT_00891ba2; extern undefined4 DAT_00891ba3;
extern undefined4 DAT_00891ba4; extern undefined4 DAT_00891ba5; extern undefined4 DAT_00891ba6; extern undefined4 DAT_00891ba7;
extern undefined4 DAT_00891ba8; extern undefined4 DAT_00891ba9; extern undefined4 DAT_00891baa; extern undefined4 DAT_00891bab;
extern undefined4 DAT_00891bac; extern undefined4 DAT_00891bad; extern undefined4 DAT_00891bae; extern undefined4 DAT_00891baf;
extern undefined4 DAT_00891bb0; extern undefined4 DAT_00891bb1; extern undefined4 DAT_00891bb2; extern undefined4 DAT_00891bb3;
extern undefined4 DAT_00891bb4; extern undefined4 DAT_00891bb5; extern undefined4 DAT_00891bb6; extern undefined4 DAT_00891bb7;
extern undefined4 DAT_00891bb8; extern undefined4 DAT_00891bbc; extern undefined4 DAT_00892b14; extern undefined4 DAT_00893b10;
extern undefined4 DAT_00893b64; extern undefined4 DAT_0089446c; extern undefined4 DAT_008944a4; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_008951bc; extern undefined4 DAT_008951c0; extern undefined4 DAT_00896fe4;
extern undefined4 DAT_00897080; extern undefined4 DAT_00897084; extern undefined4 DAT_00897088; extern undefined4 DAT_008970f4;
extern undefined4 DAT_008970f8; extern undefined4 DAT_008970fc; extern undefined4 DAT_00897134; extern undefined4 DAT_0089714c;
extern undefined4 DAT_00897150; extern undefined4 DAT_00897154; extern undefined4 DAT_00898f5c; extern undefined4 DAT_00898fa0;
extern undefined4 DAT_00898fa4; extern undefined4 DAT_00898ffc; extern undefined4 DAT_00899000; extern undefined4 DAT_0089902c;
extern undefined4 DAT_00899030; extern undefined4 DAT_00899034; extern undefined4 DAT_00899074; extern undefined4 DAT_00899098;
extern undefined4 DAT_0089909c; extern undefined4 DAT_008990a0; extern undefined4 DAT_00899108; extern undefined4 DAT_0089910c;
extern undefined4 DAT_00899110; extern undefined4 DAT_00899150; extern undefined4 DAT_00899154; extern undefined4 DAT_00899158;
extern undefined4 DAT_00899180; extern undefined4 DAT_00899184; extern undefined4 DAT_00899188; extern undefined4 DAT_0089918c;
extern undefined4 DAT_00899190; extern undefined4 DAT_00899218; extern undefined4 DAT_0089921c; extern undefined4 DAT_00899220;
extern undefined4 DAT_008c80bc; extern undefined4 DAT_008c80c0; extern undefined4 DAT_008c80c4; extern undefined4 DAT_008c80c8;
extern undefined4 DAT_008c80cc; extern undefined4 DAT_008c80d0; extern undefined4 DAT_008c80d4; extern undefined4 DAT_008c80d8;
extern undefined4 DAT_008c80dc; extern undefined4 DAT_008c80e0; extern undefined4 DAT_008c80e4; extern undefined4 DAT_008c80e8;
extern undefined4 DAT_008c8344; extern undefined4 DAT_008c8348; extern undefined4 DAT_008c834c; extern undefined4 DAT_008c8350;
extern undefined4 DAT_008c8354; extern undefined4 DAT_008c8358; extern undefined4 DAT_008c90f4; extern undefined4 DAT_008c90f8;
extern undefined4 DAT_008c90fc; extern undefined4 DAT_008c9100; extern undefined4 DAT_008c9104; extern undefined4 DAT_008c9108;
extern undefined4 DAT_008cd764; extern undefined4 DAT_008cd768; extern undefined4 DAT_008cd76c; extern undefined4 DAT_008cd770;
extern undefined4 DAT_008cd774; extern undefined4 DAT_008cd778; extern undefined4 DAT_008cd7dc; extern undefined4 DAT_008cd7e0;
extern undefined4 DAT_008cd7e4; extern undefined4 DAT_008cd7e8; extern undefined4 DAT_008cd7ec; extern undefined4 DAT_008cd7f0;
extern undefined4 DAT_008cd884; extern undefined4 DAT_008cd888; extern undefined4 DAT_008cd88c; extern undefined4 DAT_008cd890;
extern undefined4 DAT_008cd894; extern undefined4 DAT_008cd898; extern undefined4 DAT_008d1344; extern undefined4 DAT_008d1348;
extern undefined4 DAT_008d134c; extern undefined4 DAT_008d1350; extern undefined4 DAT_008d1354; extern undefined4 DAT_008d1358;
extern undefined4 DAT_008d13a4; extern undefined4 DAT_008d13a8; extern undefined4 DAT_008d13ac; extern undefined4 DAT_008d13b0;
extern undefined4 DAT_008d13b4; extern undefined4 DAT_008d13b8; extern undefined4 DAT_008d13ec; extern undefined4 DAT_008d13f0;
extern undefined4 DAT_008d13f4; extern undefined4 DAT_008d13f8; extern undefined4 DAT_008d13fc; extern undefined4 DAT_008d1400;
extern undefined4 DAT_008d14c4; extern undefined4 DAT_008d14c8; extern undefined4 DAT_008d14cc; extern undefined4 DAT_008d14d0;
extern undefined4 DAT_008d14d4; extern undefined4 DAT_008d14d8; extern undefined4 DAT_008d156c; extern undefined4 DAT_008d1570;
extern undefined4 DAT_008d1574; extern undefined4 DAT_008d1578; extern undefined4 DAT_008d157c; extern undefined4 DAT_008d1580;
extern undefined4 DAT_008d15e4; extern undefined4 DAT_008d15e8; extern undefined4 DAT_008d15ec; extern undefined4 DAT_008d15f0;
extern undefined4 DAT_008d15f4; extern undefined4 DAT_008d15f8; extern undefined4 DAT_008d1644; extern undefined4 DAT_008d1648;
extern undefined4 DAT_008d164c; extern undefined4 DAT_008d1650; extern undefined4 DAT_008d1654; extern undefined4 DAT_008d1658;
extern undefined4 DAT_008d1704; extern undefined4 DAT_008d1708; extern undefined4 DAT_008d170c; extern undefined4 DAT_008d1710;
extern undefined4 DAT_008d1714; extern undefined4 DAT_008d1718;
