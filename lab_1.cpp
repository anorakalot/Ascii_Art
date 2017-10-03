#include <iostream>
#include <string>
int main(){

//std::cout << "which one do you want to print";
int choose;
int times;
bool looper = true;
std::string string_art;
std::cout << "Which string do you want to print 1,2,3"<< std::endl
	<< "1.(^._.^)~ <(o.o )>"<< std::endl<<"2.@( * O * )@"<<std::endl<<"3.(-.-)Zzz..."<<std::endl;
std::cout<< "OR YOU COULD CHOOSE THE BIG KAHUNA"<<std::endl
<<"4.                                       .....'',;;::cccllllllllllllcccc:::;;,,,''...'',,'..\n"
"                            ..';cldkO00KXNNNNXXXKK000OOkkkkkxxxxxddoooddddddxxxxkkkkOO0XXKx:.\n"
"                     .':ok0KXXXNXK0kxolc:;;,,,,,,,,,,,;;,,,''''''',,''..              .'lOXKd'\n"
"                 .,lx00Oxl:,'............''''''...................    ...,;;'.             .oKXd.\n"
"             .ckKKkc'...'',:::;,'.........'',;;::::;,'..........'',;;;,'.. .';;'.           'kNKc.\n"
"          .:kXXk:.    ..       ..................          .............,:c:'...;:'.         .dNNx.\n"
"         :0NKd,          .....''',,,,''..               ',...........',,,'',,::,...,,.        .dNNx.\n"
"        .xXd.         .:;'..         ..,'             .;,.               ...,,'';;'. ...       .oNNo\n"
"         .0K.         .;.              ;'              ';                      .'...'.           .oXX:\n"
"        .oNO.         .                 ,.              .     ..',::ccc:;,..     ..                lXX:\n"
"       .dNX:               ......       ;.                'cxOKK0OXWWWWWWWNX0kc.                    :KXd.\n"
"     .l0N0;             ;d0KKKKKXK0ko:...              .l0X0xc,...lXWWWWWWWWKO0Kx'                   ,ONKo.\n"
"   .lKNKl...'......'. .dXWN0kkk0NWWWWWN0o.            :KN0;.  .,cokXWWNNNNWNKkxONK: .,:c:.      .';;;;:lk0XXx;\n"
"  :KN0l';ll:'.         .,:lodxxkO00KXNWWWX000k.       oXNx;:okKX0kdl:::;'',;coxkkd, ...'. ...'''.......',:lxKO:.\n"
" oNNk,;c,'',.                      ...;xNNOc,.         ,d0X0xc,.     .dOd,           ..;dOKXK00000Ox:.   ..''dKO,\n"
"'KW0,:,.,:..,oxkkkdl;'.                'KK'              ..           .dXX0o:'....,:oOXNN0d;.'. ..,lOKd.   .. ;KXl.\n"
";XNd,;  ;. l00kxoooxKXKx:..ld:         ;KK'                             .:dkO000000Okxl;.   c0;      :KK;   .  ;XXc\n"
"'XXdc.  :. ..    '' 'kNNNKKKk,      .,dKNO.                                   ....       .'c0NO'      :X0.  ,.  xN0.\n"
".kNOc'  ,.      .00. ..''...      .l0X0d;.             'dOkxo;...                    .;okKXK0KNXx;.   .0X:  ,.  lNX'\n"
" ,KKdl  .c,    .dNK,            .;xXWKc.                .;:coOXO,,'.......       .,lx0XXOo;...oNWNXKk:.'KX;  '   dNX.\n"
"  :XXkc'....  .dNWXl        .';l0NXNKl.          ,lxkkkxo' .cK0.          ..;lx0XNX0xc.     ,0Nx'.','.kXo  .,  ,KNx.\n"
"   cXXd,,;:, .oXWNNKo'    .'..  .'.'dKk;        .cooollox;.xXXl     ..,cdOKXXX00NXc.      'oKWK'     ;k:  .l. ,0Nk.\n"
"    cXNx.  . ,KWX0NNNXOl'.           .o0Ooldk;            .:c;.':lxOKKK0xo:,.. ;XX:   .,lOXWWXd.      . .':,.lKXd.\n"
"     lXNo    cXWWWXooNWNXKko;'..       .lk0x;       ...,:ldk0KXNNOo:,..       ,OWNOxO0KXXNWNO,        ....'l0Xk,\n"
"     .dNK.   oNWWNo.cXK;;oOXNNXK0kxdolllllooooddxk00KKKK0kdoc:c0No        .'ckXWWWNXkc,;kNKl.          .,kXXk,\n"
"      'KXc  .dNWWX;.xNk.  .kNO::lodxkOXWN0OkxdlcxNKl,..        oN0'..,:ox0XNWWNNWXo.  ,ONO'           .o0Xk;\n"
"      .ONo    oNWWN0xXWK, .oNKc       .ONx.      ;X0.          .:XNKKNNWWWWNKkl;kNk. .cKXo.           .ON0;\n"
"      .xNd   cNWWWWWWWWKOkKNXxl:,'...;0Xo'.....'lXK;...',:lxk0KNWWWWNNKOd:..   lXKclON0:            .xNk.\n"
"      .dXd   ;XWWWWWWWWWWWWWWWWWWNNNNNWWNNNNNNNNNWWNNNNNNWWWWWNXKNNk;..        .dNWWXd.             cXO.\n"
"      .xXo   .ONWNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNK0ko:'..OXo          'l0NXx,              :KK,\n"
"      .OXc    :XNk0NWXKNWWWWWWWWWWWWWWWWWWWWWNNNX00NNx:'..       lXKc.     'lONN0l.              .oXK:\n"
"      .KX;    .dNKoON0;lXNkcld0NXo::cd0NNO:;,,'.. .0Xc            lXXo..'l0NNKd,.              .c0Nk,\n"
"      :XK.     .xNX0NKc.cXXl  ;KXl    .dN0.       .0No            .xNXOKNXOo,.               .l0Xk;.\n"
"     .dXk.      .lKWN0d::OWK;  lXXc    .OX:       .ONx.     . .,cdk0XNXOd;.   .'''....;c:'..;xKXx,\n"
"     .0No         .:dOKNNNWNKOxkXWXo:,,;ONk;,,,,,;c0NXOxxkO0XXNXKOdc,.  ..;::,...;lol;..:xKXOl.\n"
"     ,XX:             ..';cldxkOO0KKKXXXXXXXXXXKKKKK00Okxdol:;'..   .';::,..':llc,..'lkKXkc.\n"
"     :NX'    .     ''            ..................             .,;:;,',;ccc;'..'lkKX0d;.\n"
"     lNK.   .;      ,lc,.         ................        ..,,;;;;;;:::,....,lkKX0d:.\n"
"    .oN0.    .'.      .;ccc;,'....              ....'',;;;;;;;;;;'..   .;oOXX0d:.\n"
"    .dN0.      .;;,..       ....                ..''''''''....     .:dOKKko;.\n"
"     lNK'         ..,;::;;,'.........................           .;d0X0kc'.\n"
"     .xXO'                                                 .;oOK0x:.\n"
"      .cKKo.                                    .,:oxkkkxk0K0xc'.\n"
"        .oKKkc,.                         .';cok0XNNNX0Oxoc,.\n"
"          .;d0XX0kdlc:;,,,',,,;;:clodkO0KK0Okdl:,'..\n"
"              .,coxO0KXXXXXXXKK0OOxdoc:,..\n"
"                        ...\n";

while (looper){
	std::cin >> choose;
	if(choose == 1){
		string_art = "(^._.^)~ <(o.o )>";
		looper = false;
	}
	else if (choose == 2){
		string_art = "@( * O * )@";
		looper = false;
	}
	else if(choose == 3){
		string_art = "(-.-)Zzz...";
		looper = false;
	}
	else if(choose == 4){
		string_art = ".....'',;;::cccllllllllllllcccc:::;;,,,''...'',,'..\n"
"                            ..';cldkO00KXNNNNXXXKK000OOkkkkkxxxxxddoooddddddxxxxkkkkOO0XXKx:.\n"
"                     .':ok0KXXXNXK0kxolc:;;,,,,,,,,,,,;;,,,''''''',,''..              .'lOXKd'\n"
"                 .,lx00Oxl:,'............''''''...................    ...,;;'.             .oKXd.\n"
"             .ckKKkc'...'',:::;,'.........'',;;::::;,'..........'',;;;,'.. .';;'.           'kNKc.\n"
"          .:kXXk:.    ..       ..................          .............,:c:'...;:'.         .dNNx.\n"
"         :0NKd,          .....''',,,,''..               ',...........',,,'',,::,...,,.        .dNNx.\n"
"        .xXd.         .:;'..         ..,'             .;,.               ...,,'';;'. ...       .oNNo\n"
"         .0K.         .;.              ;'              ';                      .'...'.           .oXX:\n"
"        .oNO.         .                 ,.              .     ..',::ccc:;,..     ..                lXX:\n"
"       .dNX:               ......       ;.                'cxOKK0OXWWWWWWWNX0kc.                    :KXd.\n"
"     .l0N0;             ;d0KKKKKXK0ko:...              .l0X0xc,...lXWWWWWWWWKO0Kx'                   ,ONKo.\n"
"   .lKNKl...'......'. .dXWN0kkk0NWWWWWN0o.            :KN0;.  .,cokXWWNNNNWNKkxONK: .,:c:.      .';;;;:lk0XXx;\n"
"  :KN0l';ll:'.         .,:lodxxkO00KXNWWWX000k.       oXNx;:okKX0kdl:::;'',;coxkkd, ...'. ...'''.......',:lxKO:.\n"
" oNNk,;c,'',.                      ...;xNNOc,.         ,d0X0xc,.     .dOd,           ..;dOKXK00000Ox:.   ..''dKO,\n"
"'KW0,:,.,:..,oxkkkdl;'.                'KK'              ..           .dXX0o:'....,:oOXNN0d;.'. ..,lOKd.   .. ;KXl.\n"
";XNd,;  ;. l00kxoooxKXKx:..ld:         ;KK'                             .:dkO000000Okxl;.   c0;      :KK;   .  ;XXc\n"
"'XXdc.  :. ..    '' 'kNNNKKKk,      .,dKNO.                                   ....       .'c0NO'      :X0.  ,.  xN0.\n"
".kNOc'  ,.      .00. ..''...      .l0X0d;.             'dOkxo;...                    .;okKXK0KNXx;.   .0X:  ,.  lNX'\n"
" ,KKdl  .c,    .dNK,            .;xXWKc.                .;:coOXO,,'.......       .,lx0XXOo;...oNWNXKk:.'KX;  '   dNX.\n"
"  :XXkc'....  .dNWXl        .';l0NXNKl.          ,lxkkkxo' .cK0.          ..;lx0XNX0xc.     ,0Nx'.','.kXo  .,  ,KNx.\n"
"   cXXd,,;:, .oXWNNKo'    .'..  .'.'dKk;        .cooollox;.xXXl     ..,cdOKXXX00NXc.      'oKWK'     ;k:  .l. ,0Nk.\n"
"    cXNx.  . ,KWX0NNNXOl'.           .o0Ooldk;            .:c;.':lxOKKK0xo:,.. ;XX:   .,lOXWWXd.      . .':,.lKXd.\n"
"     lXNo    cXWWWXooNWNXKko;'..       .lk0x;       ...,:ldk0KXNNOo:,..       ,OWNOxO0KXXNWNO,        ....'l0Xk,\n"
"     .dNK.   oNWWNo.cXK;;oOXNNXK0kxdolllllooooddxk00KKKK0kdoc:c0No        .'ckXWWWNXkc,;kNKl.          .,kXXk,\n"
"      'KXc  .dNWWX;.xNk.  .kNO::lodxkOXWN0OkxdlcxNKl,..        oN0'..,:ox0XNWWNNWXo.  ,ONO'           .o0Xk;\n"
"      .ONo    oNWWN0xXWK, .oNKc       .ONx.      ;X0.          .:XNKKNNWWWWNKkl;kNk. .cKXo.           .ON0;\n"
"      .xNd   cNWWWWWWWWKOkKNXxl:,'...;0Xo'.....'lXK;...',:lxk0KNWWWWNNKOd:..   lXKclON0:            .xNk.\n"
"      .dXd   ;XWWWWWWWWWWWWWWWWWWNNNNNWWNNNNNNNNNWWNNNNNNWWWWWNXKNNk;..        .dNWWXd.             cXO.\n"
"      .xXo   .ONWNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNK0ko:'..OXo          'l0NXx,              :KK,\n"
"      .OXc    :XNk0NWXKNWWWWWWWWWWWWWWWWWWWWWNNNX00NNx:'..       lXKc.     'lONN0l.              .oXK:\n"
"      .KX;    .dNKoON0;lXNkcld0NXo::cd0NNO:;,,'.. .0Xc            lXXo..'l0NNKd,.              .c0Nk,\n"
"      :XK.     .xNX0NKc.cXXl  ;KXl    .dN0.       .0No            .xNXOKNXOo,.               .l0Xk;.\n"
"     .dXk.      .lKWN0d::OWK;  lXXc    .OX:       .ONx.     . .,cdk0XNXOd;.   .'''....;c:'..;xKXx,\n"
"     .0No         .:dOKNNNWNKOxkXWXo:,,;ONk;,,,,,;c0NXOxxkO0XXNXKOdc,.  ..;::,...;lol;..:xKXOl.\n"
"     ,XX:             ..';cldxkOO0KKKXXXXXXXXXXKKKKK00Okxdol:;'..   .';::,..':llc,..'lkKXkc.\n"
"     :NX'    .     ''            ..................             .,;:;,',;ccc;'..'lkKX0d;.\n"
"     lNK.   .;      ,lc,.         ................        ..,,;;;;;;:::,....,lkKX0d:.\n"
"    .oN0.    .'.      .;ccc;,'....              ....'',;;;;;;;;;;'..   .;oOXX0d:.\n"
"    .dN0.      .;;,..       ....                ..''''''''....     .:dOKKko;.\n"
"     lNK'         ..,;::;;,'.........................           .;d0X0kc'.\n"
"     .xXO'                                                 .;oOK0x:.\n"
"      .cKKo.                                    .,:oxkkkxk0K0xc'.\n"
"        .oKKkc,.                         .';cok0XNNNX0Oxoc,.\n"
"          .;d0XX0kdlc:;,,,',,,;;:clodkO0KK0Okdl:,'..\n"
"              .,coxO0KXXXXXXXKK0OOxdoc:,..\n"
"                        ...\n";
		looper= false;
}
	else{
		std::cout << "Valid Inputs are 1,2,3";
	}
}

// NO CHANGES
std::cout << "how many times do you want to print"<<std::endl;
std::cin >> times;

for (int y= 0; y<times; y++){
std::cout << string_art<<std::endl;
}



return 0;
}
