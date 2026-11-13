#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893b64; extern undefined4 DAT_00893b98; extern undefined4 DAT_008942c4; extern undefined4 DAT_008942c8;
extern undefined4 DAT_008942cc; extern undefined4 DAT_0089466c; extern undefined4 DAT_00895010; extern undefined4 DAT_00895014;
extern undefined4 DAT_00895015; extern undefined4 DAT_00895016; extern undefined4 DAT_00895017; extern undefined4 DAT_00895018;
extern undefined4 DAT_00895019; extern undefined4 DAT_0089501a; extern undefined4 DAT_0089501b; extern undefined4 DAT_0089501c;
extern undefined4 DAT_0089501d; extern undefined4 DAT_0089501e; extern undefined4 DAT_0089501f; extern undefined4 DAT_00895020;
extern undefined4 DAT_00895021; extern undefined4 DAT_00895022; extern undefined4 DAT_00895023; extern undefined4 DAT_00895024;
extern undefined4 DAT_00895025; extern undefined4 DAT_00895026; extern undefined4 DAT_00895027; extern undefined4 DAT_00895028;
extern undefined4 DAT_00895029; extern undefined4 DAT_0089502a; extern undefined4 DAT_0089502b; extern undefined4 DAT_0089502c;
extern undefined4 DAT_0089502d; extern undefined4 DAT_0089502e; extern undefined4 DAT_0089502f; extern undefined4 DAT_00895030;
extern undefined4 DAT_00895031; extern undefined4 DAT_00895032; extern undefined4 DAT_00895033; extern undefined4 DAT_00895034;
extern undefined4 DAT_00895035; extern undefined4 DAT_00895036; extern undefined4 DAT_00895037; extern undefined4 DAT_00895038;
extern undefined4 DAT_0089503c; extern undefined4 DAT_00895040; extern undefined4 DAT_00895120; extern undefined4 DAT_00895124;
extern undefined4 DAT_00895125; extern undefined4 DAT_00895126; extern undefined4 DAT_00895127; extern undefined4 DAT_00895128;
extern undefined4 DAT_00895129; extern undefined4 DAT_0089512a; extern undefined4 DAT_0089512b; extern undefined4 DAT_0089512c;
extern undefined4 DAT_0089512d; extern undefined4 DAT_0089512e; extern undefined4 DAT_0089512f; extern undefined4 DAT_00895130;
extern undefined4 DAT_00895131; extern undefined4 DAT_00895132; extern undefined4 DAT_00895133; extern undefined4 DAT_00895134;
extern undefined4 DAT_00895135; extern undefined4 DAT_00895136; extern undefined4 DAT_00895137; extern undefined4 DAT_00895138;
extern undefined4 DAT_00895139; extern undefined4 DAT_0089513a; extern undefined4 DAT_0089513b; extern undefined4 DAT_0089513c;
extern undefined4 DAT_0089513d; extern undefined4 DAT_0089513e; extern undefined4 DAT_0089513f; extern undefined4 DAT_00895140;
extern undefined4 DAT_00895141; extern undefined4 DAT_00895142; extern undefined4 DAT_00895143; extern undefined4 DAT_00895144;
extern undefined4 DAT_00895145; extern undefined4 DAT_00895146; extern undefined4 DAT_00895147; extern undefined4 DAT_00895148;
extern undefined4 DAT_0089514c; extern undefined4 DAT_00895150; extern undefined4 DAT_008951fc; extern undefined4 DAT_00895bf8;
extern undefined4 DAT_00895bfc; extern undefined4 DAT_00895c00; extern undefined4 DAT_00895eec; extern undefined4 DAT_0089610c;
extern undefined4 DAT_00896118; extern undefined4 DAT_0089611c; extern undefined4 DAT_008963c0; extern undefined4 DAT_008963c4;
extern undefined4 DAT_00896514; extern undefined4 DAT_00896518; extern undefined4 DAT_00896519; extern undefined4 DAT_0089651a;
extern undefined4 DAT_0089651b; extern undefined4 DAT_0089651c; extern undefined4 DAT_0089651d; extern undefined4 DAT_0089651e;
extern undefined4 DAT_0089651f; extern undefined4 DAT_00896520; extern undefined4 DAT_00896521; extern undefined4 DAT_00896522;
extern undefined4 DAT_00896523; extern undefined4 DAT_00896524; extern undefined4 DAT_00896525; extern undefined4 DAT_00896526;
extern undefined4 DAT_00896527; extern undefined4 DAT_00896528; extern undefined4 DAT_00896529; extern undefined4 DAT_0089652a;
extern undefined4 DAT_0089652b; extern undefined4 DAT_0089652c; extern undefined4 DAT_0089652d; extern undefined4 DAT_0089652e;
extern undefined4 DAT_0089652f; extern undefined4 DAT_00896530; extern undefined4 DAT_00896531; extern undefined4 DAT_00896532;
extern undefined4 DAT_00896533; extern undefined4 DAT_00896534; extern undefined4 DAT_00896535; extern undefined4 DAT_00896536;
extern undefined4 DAT_00896537; extern undefined4 DAT_00896538; extern undefined4 DAT_00896539; extern undefined4 DAT_0089653a;
extern undefined4 DAT_0089653b; extern undefined4 DAT_0089653c; extern undefined4 DAT_00896540; extern undefined4 DAT_00896544;
extern undefined4 DAT_00896548; extern undefined4 DAT_00896549; extern undefined4 DAT_0089654a; extern undefined4 DAT_0089654b;
extern undefined4 DAT_0089654c; extern undefined4 DAT_0089654d; extern undefined4 DAT_0089654e; extern undefined4 DAT_0089654f;
extern undefined4 DAT_00896550; extern undefined4 DAT_00896551; extern undefined4 DAT_00896552; extern undefined4 DAT_00896553;
extern undefined4 DAT_00896554; extern undefined4 DAT_00896555; extern undefined4 DAT_00896556; extern undefined4 DAT_00896557;
extern undefined4 DAT_00896558; extern undefined4 DAT_00896559; extern undefined4 DAT_0089655a; extern undefined4 DAT_0089655b;
extern undefined4 DAT_0089655c; extern undefined4 DAT_0089655d; extern undefined4 DAT_0089655e; extern undefined4 DAT_0089655f;
extern undefined4 DAT_00896560; extern undefined4 DAT_00896561; extern undefined4 DAT_00896562; extern undefined4 DAT_00896563;
extern undefined4 DAT_00896564; extern undefined4 DAT_00896565; extern undefined4 DAT_00896566; extern undefined4 DAT_00896567;
extern undefined4 DAT_00896568; extern undefined4 DAT_00896569; extern undefined4 DAT_0089656a; extern undefined4 DAT_0089656b;
extern undefined4 DAT_0089656c; extern undefined4 DAT_00896570; extern undefined4 DAT_00896610; extern undefined4 DAT_00896614;
extern undefined4 DAT_00896618; extern undefined4 DAT_00896784; extern undefined4 DAT_00896788; extern undefined4 DAT_0089678c;
extern undefined4 DAT_00896790; extern undefined4 DAT_008967b8; extern undefined4 DAT_008967bc; extern undefined4 DAT_008967bd;
extern undefined4 DAT_008967be; extern undefined4 DAT_008967bf; extern undefined4 DAT_008967c0; extern undefined4 DAT_008967c1;
extern undefined4 DAT_008967c2; extern undefined4 DAT_008967c3; extern undefined4 DAT_008967c4; extern undefined4 DAT_008967c5;
extern undefined4 DAT_008967c6; extern undefined4 DAT_008967c7; extern undefined4 DAT_008967c8; extern undefined4 DAT_008967c9;
extern undefined4 DAT_008967ca; extern undefined4 DAT_008967cb; extern undefined4 DAT_008967cc; extern undefined4 DAT_008967cd;
extern undefined4 DAT_008967ce; extern undefined4 DAT_008967cf; extern undefined4 DAT_008967d0; extern undefined4 DAT_008967d1;
extern undefined4 DAT_008967d2; extern undefined4 DAT_008967d3; extern undefined4 DAT_008967d4; extern undefined4 DAT_008967d5;
extern undefined4 DAT_008967d6; extern undefined4 DAT_008967d7; extern undefined4 DAT_008967d8; extern undefined4 DAT_008967d9;
extern undefined4 DAT_008967da; extern undefined4 DAT_008967db; extern undefined4 DAT_008967dc; extern undefined4 DAT_008967dd;
extern undefined4 DAT_008967de; extern undefined4 DAT_008967df; extern undefined4 DAT_008967e8; extern undefined4 DAT_008967ec;
extern undefined4 DAT_008972c0; extern undefined4 DAT_008972c4; extern undefined4 DAT_008cb0f0; extern undefined4 DAT_008cb0f4;
extern undefined4 DAT_008cb0f8; extern undefined4 DAT_008cb0fc; extern undefined4 DAT_008cb100; extern undefined4 DAT_008cb104;
extern undefined4 DAT_008cba5c; extern undefined4 DAT_008cba60; extern undefined4 DAT_008cba64; extern undefined4 DAT_008cba68;
extern undefined4 DAT_008cba6c; extern undefined4 DAT_008cba70; extern undefined4 DAT_008cbb04; extern undefined4 DAT_008cbb08;
extern undefined4 DAT_008cbb0c; extern undefined4 DAT_008cbb10; extern undefined4 DAT_008cbb14; extern undefined4 DAT_008cbb18;
extern undefined4 DAT_008cc34c; extern undefined4 DAT_008cc350; extern undefined4 DAT_008cc354; extern undefined4 DAT_008cc358;
extern undefined4 DAT_008cc35c; extern undefined4 DAT_008cc360; extern undefined4 DAT_008cc73c; extern undefined4 DAT_008cc740;
extern undefined4 DAT_008cc744; extern undefined4 DAT_008cc748; extern undefined4 DAT_008cc74c; extern undefined4 DAT_008cc750;
extern undefined4 DAT_008cc9a0; extern undefined4 DAT_008cc9a4; extern undefined4 DAT_008cc9a8; extern undefined4 DAT_008cc9ac;
extern undefined4 DAT_008cc9b0; extern undefined4 DAT_008cc9b4; extern undefined4 DAT_008ccaa8; extern undefined4 DAT_008ccaac;
extern undefined4 DAT_008ccab0; extern undefined4 DAT_008ccab4; extern undefined4 DAT_008ccab8; extern undefined4 DAT_008ccabc;
extern undefined4 DAT_008ccac0; extern undefined4 DAT_008ccac4; extern undefined4 DAT_008ccac8; extern undefined4 DAT_008ccacc;
extern undefined4 DAT_008ccad0; extern undefined4 DAT_008ccad4; extern undefined4 DAT_008ccb68; extern undefined4 DAT_008ccb6c;
extern undefined4 DAT_008ccb70; extern undefined4 DAT_008ccb74; extern undefined4 DAT_008ccb78; extern undefined4 DAT_008ccb7c;
extern undefined4 DAT_008cccd0; extern undefined4 DAT_008cccd4; extern undefined4 DAT_008cccd8; extern undefined4 DAT_008cccdc;
extern undefined4 DAT_008ccce0; extern undefined4 DAT_008ccce4; extern undefined4 DAT_008ccd18; extern undefined4 DAT_008ccd1c;
extern undefined4 DAT_008ccd20; extern undefined4 DAT_008ccd24; extern undefined4 DAT_008ccd28; extern undefined4 DAT_008ccd2c;
extern undefined4 DAT_008cdadc; extern undefined4 DAT_008cdae0; extern undefined4 DAT_008cdae4; extern undefined4 DAT_008cdae8;
extern undefined4 DAT_008cdaec; extern undefined4 DAT_008cdaf0;
