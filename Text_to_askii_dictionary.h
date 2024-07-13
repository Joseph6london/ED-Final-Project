#ifndef TEXT_TO_ASKII_DICTIONARY_H
#define TEXT_TO_ASKII_DICTIONARY_H
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<char, vector<string>> getDictionary(){
    map<char, vector<string>> dictionary;

    dictionary.insert(make_pair('A', vector<string> {R"(      db      )",R"(     ;MM:     )",R"(    ,V^MM.    )",
                                                     R"(   ,M  `MM    )",R"(   AbmmmqMA   )",R"(  A'     VML  )",
                                                     R"(.AMA.   .AMMA.)"}));

    dictionary.insert(make_pair('B', vector<string> {R"(`7MM"""Yp,)",R"(  MM    Yb)",R"(  MM    dP)",
                                                     R"(  MM"""bg.)",R"(  MM    `Y)",R"(  MM    ,9)",
                                                     R"(.JMMmmmd9 )"}));

    dictionary.insert(make_pair('C', vector<string> {R"(  .g8"""bgd)",R"(.dP'     `M)",R"(dM'       `)",
                                                     R"(MM         )",R"(MM.        )",R"(`Mb.     ,')",
                                                     R"(  `"bmmmd' )"}));

    dictionary.insert(make_pair('D', vector<string> {R"(`7MM"""Yb.  )",R"(  MM    `Yb.)",R"(  MM     `Mb)",
                                                     R"(  MM      MM)",R"(  MM     ,MP)",R"(  MM    ,dP')",
                                                     R"(.JMMmmmdP'  )"}));

    dictionary.insert(make_pair('E', vector<string> {R"(`7MM"""YMM )",R"(  MM    `7 )",R"(  MM   d   )",
                                                     R"(  MMmmMM   )",R"(  MM   Y  ,)",R"(  MM     ,M)",
                                                     R"(.JMMmmmmMMM)"}));

    dictionary.insert(make_pair('F', vector<string> {R"(`7MM"""YMM)",R"(  MM    `7)",R"(  MM   d  )",
                                                     R"(  MM""MM  )",R"(  MM   Y  )",R"(  MM      )",
                                                     R"(.JMML.    )"}));

    dictionary.insert(make_pair('G', vector<string> {R"(  .g8"""bgd  )",R"(.dP'     `M  )",R"(dM'       `  )",
                                                     R"(MM           )",R"(MM.    `7MMF')",R"(`Mb.     MM  )",
                                                     R"(  `"bmmmdPY  )"}));

    dictionary.insert(make_pair('H', vector<string> {R"(`7MMF'  `7MMF')",R"(  MM      MM  )",R"(  MM      MM  )",
                                                     R"(  MMmmmmmmMM  )",R"(  MM      MM  )",R"(  MM      MM  )",
                                                     R"(.JMML.  .JMML.)"}));

    dictionary.insert(make_pair('I', vector<string> {R"(`7MMF')",R"(  MM  )",R"(  MM  )",
                                                     R"(  MM  )",R"(  MM  )",R"(  MM  )",
                                                     R"(.JMML.)"}));

    dictionary.insert(make_pair('J', vector<string> {R"(   `7MMF')",R"(     MM  )",R"(     MM  )",
                                                     R"(     MM  )",R"(     MM  )",R"((O)  MM  )",
                                                     R"( Ymmm9   )"}));

    dictionary.insert(make_pair('K', vector<string> {R"(`7MMF' `YMM' )",R"(  MM   .M'   )",R"(  MM .d"     )",
                                                     R"(  MMMMM.     )",R"(  MM  VMA    )",R"(  MM   `MM.  )",
                                                     R"(.JMML.   MMb.)"}));

    dictionary.insert(make_pair('L', vector<string> {R"(`7MMF'     )",R"(  MM       )",R"(  MM       )",
                                                     R"(  MM       )",R"(  MM      ,)",R"(  MM     ,M)",
                                                     R"(.JMMmmmmMMM)"}));

    dictionary.insert(make_pair('M', vector<string> {R"(`7MMM.     ,MMF')",R"(  MMMb    dPMM  )",R"(  M YM   ,M MM  )",
                                                     R"(  M  Mb  M' MM  )",R"(  M  YM.P'  MM  )",R"(  M  `YM'   MM  )",
                                                     R"(.JML. `'  .JMML.)"}));

    dictionary.insert(make_pair('N', vector<string> {R"(`7MN.   `7MF')",R"(  MMN.    M  )",R"(  M YMb   M  )",
                                                     R"(  M  `MN. M  )",R"(  M   `MM.M  )",R"(  M     YMM  )",
                                                     R"(.JML.    YM  )"}));

    dictionary.insert(make_pair('O', vector<string> {R"(  .g8""8q.  )",R"(.dP'    `YM.)",R"(dM'      `MM)",
                                                     R"(MM        MM)",R"(MM.      ,MP)",R"(`Mb.    ,dP')",
                                                     R"(  `"bmmd"'  )"}));

    dictionary.insert(make_pair('P', vector<string> {R"(`7MM"""Mq. )",R"(  MM   `MM.)",R"(  MM   ,M9 )",
                                                     R"(  MMmmdM9  )",R"(  MM       )",R"(  MM       )",
                                                     R"(.JMML.     )"}));

    dictionary.insert(make_pair('Q', vector<string> {R"(  .g8""8q.   )",R"(.dP'    `YM. )",R"(dM'      `MM )",
                                                     R"(`Mb.    ,dP' )",R"(  `"bmmd"'   )",R"(      MMb    )",
                                                     R"(       `bood')"}));

    dictionary.insert(make_pair('R', vector<string> {R"(`7MM"""Mq.  )",R"(  MM   `MM. )",R"(  MM   ,M9  )",
                                                     R"(  MMmmdM9   )",R"(  MM  YM.   )",R"(  MM   `Mb. )",
                                                     R"(.JMML. .JMM.)"}));

    dictionary.insert(make_pair('S', vector<string> {R"( .M"""bgd)",R"(,MI    "Y)",R"(`MMb.    )",
                                                     R"(  `YMMNq.)",R"(.     `MM)",R"(Mb     dM)",
                                                     R"(P"Ybmmd" )"}));

    dictionary.insert(make_pair('T', vector<string> {R"(MMP""MM""YMM)",R"(P'   MM   `7)",R"(     MM     )",
                                                     R"(     MM     )",R"(     MM     )",R"(     MM     )",
                                                     R"(   .JMML.   )"}));

    dictionary.insert(make_pair('U', vector<string> {R"(`7MMF'   `7MF')",R"(  MM       M  )",R"(  MM       M  )",
                                                     R"(  MM       M  )",R"(  MM       M  )",R"(  YM.     ,M  )",
                                                     R"(   `bmmmmd"'  )"}));

    dictionary.insert(make_pair('V', vector<string> {R"(`7MMF'   `7MF')",R"(  `MA     ,V  )",R"(   VM:   ,V   )",
                                                     R"(    MM.  M'   )",R"(    `MM A'    )",R"(     :MM;     )",
                                                     R"(      VF      )"}));

    dictionary.insert(make_pair('W', vector<string> {R"(`7MMF'     A     `7MF')",R"(  `MA     ,MA     ,V  )",R"(   VM:   ,VVM:   ,V   )",
                                                     R"(    MM.  M' MM.  M'   )",R"(    `MM A'  `MM A'    )",
                                                     R"(     :MM;    :MM;     )",R"(      VF      VF      )"}));

    dictionary.insert(make_pair('X', vector<string> {R"(`YMM'   `MP' )",R"(  VMb.  ,P   )",R"(   `MM.M'    )",
                                                     R"(     MMb     )",R"(   ,M'`Mb.   )",R"(  ,P   `MM.  )",
                                                     R"(.MM:.  .:MMa.)"}));

    dictionary.insert(make_pair('Y', vector<string> {R"(`YMM'   `MM')",R"(  VMA   ,V  )",R"(   VMA ,V   )",
                                                     R"(    VMMP    )",R"(     MM     )",R"(     MM     )",
                                                     R"(   .JMML.   )"}));

    dictionary.insert(make_pair('Z', vector<string> {R"(MMM"""AMV)",R"(M'   AMV )",R"('   AMV  )",
                                                     R"(   AMV   )",R"(  AMV   ,)",R"( AMV   ,M)",
                                                     R"(AMVmmmmMM)"}));



    dictionary.insert(make_pair('a', vector<string> {R"(         )",R"(         )",R"( ,6"Yb.  )",
                                                    R"(8)   MM  )",R"( ,pm9MM  )",R"(8M   MM  )",
                                                    R"(`Moo9^Yo.)"}));

    dictionary.insert(make_pair('b', vector<string> {R"(*MM       )",R"( MM       )",R"( MM,dMMb. )",
                                                     R"( MM    `Mb)",R"( MM     M8)",R"( MM.   ,M9)",
                                                     R"( P^YbmdP' )"}));

    dictionary.insert(make_pair('c', vector<string> {R"(        )",R"(        )",R"( ,p6"bo )",
                                                     R"(6M'  OO )",R"(8M      )",R"(YM.    ,)",
                                                     R"( YMbmd' )"}));

    dictionary.insert(make_pair('d', vector<string> {R"(     `7MM )",R"(       MM )",R"(  ,M""bMM )",
                                                   R"(,AP    MM )",R"(8MI    MM )",R"(`Mb    MM )",
                                                   R"( `Wbmd"MML)"}));

    dictionary.insert(make_pair('e', vector<string> {R"(        )",R"(        )",R"( .gP"Ya )",
                                                   R"(,M'   Yb)",R"(8M"""""")",R"(YM.    ,)",
                                                   R"( `Mbmmd')"}));

    dictionary.insert(make_pair('f', vector<string> {R"(   ,... )",R"(  .d' "")",R"(  dM`   )",
                                                   R"( mMMmm  )",R"(  MM    )",R"(  MM    )",
                                                   R"(.JMML.  )"}));

    dictionary.insert(make_pair('g', vector<string> {R"( .d*"*bg.)",R"(6MP    Mb)",R"(YMb    MM)",
                                                   R"( `MbmmdM9)",R"(      .M')",R"( m   .d9 )",
                                                   R"(  mmmm"' )"}));

    dictionary.insert(make_pair('h', vector<string> {R"(`7MM        )",R"(  MM        )",R"(  MMpMMMb.  )",
                                                     R"(  MM    MM  )",R"(  MM    MM  )",R"(  MM    MM  )",
                                                     R"(.JMML  JMML.)"}));

    dictionary.insert(make_pair('i', vector<string> {R"(  ,,  )",R"(  db  )",R"(      )",
                                                     R"(  MM  )",R"(  MM  )",R"(  MM  )",
                                                     R"(.JMML.)"}));

    dictionary.insert(make_pair('j', vector<string> {R"(   ,,)",R"(   db)",R"(     )",
                                                     R"( `7MM)",R"(   MM)",R"(QO MP)",
                                                     R"(`bmP )"}));

    dictionary.insert(make_pair('k', vector<string> {R"(`7MM      )",R"(  MM      )",R"(  MM  ,MP')",
                                                     R"(  MM ;Y   )",R"(  MM;Mm   )",R"(  MM `Mb. )",
                                                     R"(.JMML. YA.)"}));

    dictionary.insert(make_pair('l', vector<string> {R"(___ )",R"(`MM )",R"( MM )",
                                                     R"( MM )",R"( MM )",R"( MM )",
                                                     R"(_MM_)"}));

    dictionary.insert(make_pair('m', vector<string> {R"(                  )",R"(                  )",R"(`7MMpMMMb.pMMMb.  )",
                                                     R"(  MM    MM    MM  )",R"(  MM    MM    MM  )",R"(  MM    MM    MM  )",
                                                     R"(.JMML  JMML  JMML.)"}));

    dictionary.insert(make_pair('n', vector<string> {R"(            )",R"(            )",R"(`7MMpMMMb.  )",
                                                     R"(  MM    MM  )",R"(  MM    MM  )",R"(  MM    MM  )",
                                                     R"(.JMML  JMML.)"}));

    dictionary.insert(make_pair('o', vector<string> {R"(         )",R"(         )",R"( ,pW"Wq. )",
                                                     R"(6W'   `Wb)",R"(8M     M8)",R"(YA.   ,A9)",
                                                     R"( `Ybmd9' )"}));

    dictionary.insert(make_pair('p', vector<string> {R"(`7MMpdMAo.)",R"(  MM   `Wb)",R"(  MM    M8)",
                                                     R"(  MM   ,AP)",R"(  MMbmmd' )",R"(  MM      )",
                                                     R"(.JMML.    )"}));

    dictionary.insert(make_pair('q', vector<string> {R"( ,dW"Yvd  )",R"(,W'   MM  )",R"(8M    MM  )",
                                                     R"(YA.   MM  )",R"( `MbmdMM  )",R"(      MM  )",
                                                     R"(    .JMML.)"}));

    dictionary.insert(make_pair('r', vector<string> {R"(        )",R"(        )",R"(`7Mb,od8)",
                                                     R"(  MM' "')",R"(  MM    )",R"(  MM    )",
                                                     R"(.JMML.  )"}));

    dictionary.insert(make_pair('s', vector<string> {R"(       )",R"(       )",R"(,pP"Ybd)",
                                                     R"(8I   `")",R"(`YMMMa.)",R"(L.   I8)",
                                                     R"(M9mmmP')"}));

    dictionary.insert(make_pair('t', vector<string> {R"(  mm   )",R"(  MM   )",R"(mmMMmm )",
                                                     R"(  MM   )",R"(  MM   )",R"(  MM   )",
                                                     R"(  `Mbmo)"}));

    dictionary.insert(make_pair('u', vector<string> {R"(            )",R"(            )",R"(`7MM  `7MM  )",
                                                     R"(  MM    MM  )",R"(  MM    MM  )",R"(  MM    MM  )",
                                                     R"(  `Mbod"YML.)"}));

    dictionary.insert(make_pair('v', vector<string> {R"(           )",R"(           )",R"(`7M'   `MF')",
                                                     R"(  VA   ,V  )",R"(   VA ,V   )",R"(    VVV    )",
                                                     R"(     W     )"}));

    dictionary.insert(make_pair('w', vector<string> {R"(                  )",R"(                  )",R"(`7M'    ,A    `MF')",
                                                     R"(  VA   ,VAA   ,V  )",R"(   VA ,V  VA ,V   )",R"(    VVV    VVV    )",
                                                     R"(     W      W     )"}));

    dictionary.insert(make_pair('x', vector<string> {R"(           )",R"(           )",R"(`7M'   `MF')",
                                                     R"(  `VA ,V'  )",R"(    XMX    )",R"(  ,V' VA.  )",
                                                     R"(.AM.   .MA.)"}));

    dictionary.insert(make_pair('y', vector<string> {R"(`7M'   `MF')",R"(  VA   ,V  )",R"(   VA ,V   )",
                                                     R"(    VVV    )",R"(    ,V     )",R"(   ,V      )",
                                                     R"(OOb"       )"}));

    dictionary.insert(make_pair('z', vector<string> {R"(       )",R"(       )",R"(M"""MMV)",
                                                     R"('  AMV )",R"(  AMV  )",R"( AMV  ,)",
                                                     R"(AMMmmmM)"}));

/*
    dictionary.insert(make_pair('0', vector<string> {R"(  .g8""8q.  )",R"(.dP'    _YM.)",R"(dM'      `MM)",
                                                     R"(MM--------MM)",R"(MM.      ,MP)",R"(`Mb.    ,dP')",
                                                     R"(  `"bmmd"'  )"}));
*/
    dictionary.insert(make_pair('0', vector<string> {R"( 6MMMMb )",R"(6M'  `Mb)",R"(MM    MM)",
                                                     R"(MM    MM)",R"(MM    MM)",R"(YM.  ,M9)",
                                                     R"( YMMMM9 )"}));

/*
  .g8""8q.
.dP'    _YM.
dM'      `MM
MM--------MM
MM.      ,MP
`Mb.    ,dP'
  `"bmmd"'


 6MMMMb
6M'  `Mb
MM    MM
MM    MM
MM    MM
YM.  ,M9
 YMMMM9
*/


    dictionary.insert(make_pair('1', vector<string> {R"(____,   )",R"(``7MM   )",R"(   MM   )",
                                                     R"(   MM   )",R"(   MM   )",R"(   MM   )",
                                                     R"(..JMML..)"}));

    dictionary.insert(make_pair('2', vector<string> {R"( pd*"*bV.)",R"((O)    j8)",R"(      ,j9)",
                                                     R"(    ,-=  )",R"(   **    )",R"( **      )",
                                                     R"(Ammmmmmmm)"}));

    dictionary.insert(make_pair('3', vector<string> {R"( pd""b. )",R"((O)  `8b)",R"(     ,89)",
                                                     R"(   ""Yb.)",R"(      88)",R"((O)  .M')",
                                                     R"( bmmmd' )"}));

    dictionary.insert(make_pair('4', vector<string> {R"(     ,AM  )",R"(    AVMM  )",R"(  ,W' MM  )",
                                                    R"(,W'   MM  )",R"(AmmmmmMMmm)",R"(      MM  )",
                                                    R"(      MM  )"}));

    dictionary.insert(make_pair('5', vector<string> {R"( M******)",R"(.M      )",R"(|bMMAg. )",
                                                    R"(     `Mb)",R"(      jM)",R"((O)  ,M9)",
                                                    R"( 6mmm9  )"}));

    dictionary.insert(make_pair('6', vector<string> {R"(   .6*"  )",R"( ,M'     )",R"(,Mbmmm.  )",
                                                     R"(6M'  `Mb.)",R"(MI     M8)",R"(WM.   ,M9)",
                                                     R"( WMbmmd9 )"}));

    dictionary.insert(make_pair('7', vector<string> {R"(M******A')",R"(Y     A' )",R"(     A'  )",
                                                     R"(    A'   )",R"(   A'    )",R"(  A'     )",
                                                     R"( A'      )"}));

    dictionary.insert(make_pair('8', vector<string> {R"( ,6*"*VA.)",R"(dN     V8)",R"(`MN.  ,g9)",
                                                     R"( ,MMMMq. )",R"(6P   `YMb)",R"(8b    `M9)",
                                                     R"(`MmmmmM9 )"}));

    dictionary.insert(make_pair('9', vector<string> {R"( .d*"*bg.)",R"(6MP    Mb)",R"(YMb    MM)",
                                                    R"( `MbmmdM9)",R"(      .M')",R"(    .d9  )",
                                                    R"(  m"'    )"}));

    dictionary.insert(make_pair('.', vector<string> {R"(   )",R"(   )",R"(   )",
                                                    R"(   )",R"(   )",R"(68b)",
                                                    R"(Y89)"}));

    dictionary.insert(make_pair(':', vector<string> {R"(68b)",R"(Y89)",R"(   )",
                                                   R"(   )",R"(   )",R"(68b)",
                                                   R"(Y89)"}));

    dictionary.insert(make_pair(' ', vector<string> {R"(   )",R"(   )",R"(   )",
                                                    R"(   )",R"(   )",R"(   )",
                                                    R"(   )"}));

/*
    dictionary.insert(make_pair('', vector<string> {R"()",R"()",R"()",
                                                    R"()",R"()",R"()",
                                                    R"()"}));
*/
    return dictionary;
}


void printAskii(vector<string> character){
    for(string str : character){
        cout<< str << endl;
    }
}


void printAskii(vector<vector<string>> character){
    for(int j = 0; j < character[0].size(); j++){
        cout<<endl;
        for(int i = 0; i < character.size(); i++){
            cout<< character[i][j] << "  ";
        }
    }
}


void printAskii(string text){
    map<char, vector<string>> dictionary = getDictionary();
    vector<vector<string>> chars;
    for(char key : text){
        chars.push_back(dictionary[key]);
    }
    for(int j = 0; j < chars[0].size(); j++){
        cout<<endl;
        for(int i = 0; i < chars.size(); i++){
            cout<< chars[i][j] << "  ";
        }
    }
}

void bigSpace(int spaces = 3){
    for(int i = 0; i < spaces; i++){
        cout<<endl;
    }
}
#endif // TEXT_TO_ASKII_DICTIONARY_H
