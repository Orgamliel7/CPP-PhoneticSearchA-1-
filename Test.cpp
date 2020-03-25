//
// Created by tzach on 25/03/2020.
//

#include "doctest.h"
#include "PhoneticFinder.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
TEST_CASE("letters test") {
    string str_letters_test = "g c s d o q w y u p H j k l z X n v b  I A e r t";
            CHECK(phonetic::find(str_letters_test, "g").compare("g") == 0);
            CHECK(phonetic::find(str_letters_test, "G").compare("g") == 0);
            CHECK(phonetic::find(str_letters_test, "j").compare("g") == 0);
            CHECK(phonetic::find(str_letters_test, "J").compare("g") == 0);
            CHECK(phonetic::find(str_letters_test, "c").compare("c") == 0);
            CHECK(phonetic::find(str_letters_test, "C").compare("c") == 0);
            CHECK(phonetic::find(str_letters_test, "k").compare("c") == 0);
            CHECK(phonetic::find(str_letters_test, "K").compare("c") == 0);
            CHECK(phonetic::find(str_letters_test, "q").compare("c") == 0);
            CHECK(phonetic::find(str_letters_test, "Q").compare("c") == 0);
            CHECK(phonetic::find(str_letters_test, "s").compare("s") == 0);
            CHECK(phonetic::find(str_letters_test, "S").compare("s") == 0);
            CHECK(phonetic::find(str_letters_test, "z").compare("s") == 0);
            CHECK(phonetic::find(str_letters_test, "Z").compare("s") == 0);
            CHECK(phonetic::find(str_letters_test, "d").compare("d") == 0);
            CHECK(phonetic::find(str_letters_test, "D").compare("d") == 0);
            CHECK(phonetic::find(str_letters_test, "t").compare("d") == 0);
            CHECK(phonetic::find(str_letters_test, "T").compare("d") == 0);
            CHECK(phonetic::find(str_letters_test, "o").compare("o") == 0);
            CHECK(phonetic::find(str_letters_test, "O").compare("o") == 0);
            CHECK(phonetic::find(str_letters_test, "u").compare("o") == 0);
            CHECK(phonetic::find(str_letters_test, "U").compare("o") == 0);
            CHECK(phonetic::find(str_letters_test, "v").compare("v") == 0);
            CHECK(phonetic::find(str_letters_test, "V").compare("v") == 0);
            CHECK(phonetic::find(str_letters_test, "w").compare("v") == 0);
            CHECK(phonetic::find(str_letters_test, "W").compare("v") == 0);
            CHECK(phonetic::find(str_letters_test, "b").compare("b") == 0);
            CHECK(phonetic::find(str_letters_test, "B").compare("b") == 0);
            CHECK(phonetic::find(str_letters_test, "f").compare("b") == 0);
            CHECK(phonetic::find(str_letters_test, "F").compare("b") == 0);
            CHECK(phonetic::find(str_letters_test, "p").compare("b") == 0);
            CHECK(phonetic::find(str_letters_test, "P").compare("b") == 0);
            CHECK(phonetic::find(str_letters_test, "i").compare("I") == 0);
            CHECK(phonetic::find(str_letters_test, "I").compare("I") == 0);
            CHECK(phonetic::find(str_letters_test, "y").compare("I") == 0);
            CHECK(phonetic::find(str_letters_test, "Y").compare("I") == 0);
            CHECK(phonetic::find(str_letters_test, "a").compare("A") == 0);
            CHECK(phonetic::find(str_letters_test, "A").compare("A") == 0);
            CHECK(phonetic::find(str_letters_test, "q").compare("q") == 0);
            CHECK(phonetic::find(str_letters_test, "Q").compare("q") == 0);
            CHECK(phonetic::find(str_letters_test, "K").compare("q") == 0);
            CHECK(phonetic::find(str_letters_test, "k").compare("q") == 0);
            CHECK(phonetic::find(str_letters_test, "w").compare("w") == 0);
            CHECK(phonetic::find(str_letters_test, "W").compare("w") == 0);
            CHECK(phonetic::find(str_letters_test, "r").compare("r") == 0);
            CHECK(phonetic::find(str_letters_test, "R").compare("r") == 0);
            CHECK(phonetic::find(str_letters_test, "k").compare("k") == 0);
            CHECK(phonetic::find(str_letters_test, "K").compare("k") == 0);
            CHECK(phonetic::find(str_letters_test, "c").compare("k") == 0);
            CHECK(phonetic::find(str_letters_test, "C").compare("k") == 0);
            CHECK(phonetic::find(str_letters_test, "q").compare("k") == 0);
            CHECK(phonetic::find(str_letters_test, "Q").compare("k") == 0);
            CHECK(phonetic::find(str_letters_test, "l").compare("l") == 0);
            CHECK(phonetic::find(str_letters_test, "L").compare("l") == 0);
            CHECK(phonetic::find(str_letters_test, "x").compare("X") == 0);
            CHECK(phonetic::find(str_letters_test, "X").compare("X") == 0);
            CHECK(phonetic::find(str_letters_test, "n").compare("n") == 0);
            CHECK(phonetic::find(str_letters_test, "N").compare("n") == 0);
            CHECK(phonetic::find(str_letters_test, "v").compare("w") == 0);
            CHECK(phonetic::find(str_letters_test, "V").compare("w") == 0);
            CHECK(phonetic::find(str_letters_test, "e").compare("e") == 0);
            CHECK(phonetic::find(str_letters_test, "E").compare("e") == 0);
            CHECK(phonetic::find(str_letters_test, "t").compare("t") == 0);
            CHECK(phonetic::find(str_letters_test, "T").compare("t") == 0);
            CHECK(phonetic::find(str_letters_test, "d").compare("t") == 0);
            CHECK(phonetic::find(str_letters_test, "D").compare("t") == 0);
            CHECK(phonetic::find(str_letters_test, "y").compare("y") == 0);
            CHECK(phonetic::find(str_letters_test, "Y").compare("y") == 0);
            CHECK(phonetic::find(str_letters_test, "i").compare("y") == 0);
            CHECK(phonetic::find(str_letters_test, "I").compare("y") == 0);
            CHECK(phonetic::find(str_letters_test, "u").compare("u") == 0);
            CHECK(phonetic::find(str_letters_test, "U").compare("u") == 0);
            CHECK(phonetic::find(str_letters_test, "o").compare("u") == 0);
            CHECK(phonetic::find(str_letters_test, "O").compare("u") == 0);
            CHECK(phonetic::find(str_letters_test, "p").compare("p") == 0);
            CHECK(phonetic::find(str_letters_test, "P").compare("p") == 0);
            CHECK(phonetic::find(str_letters_test, "f").compare("p") == 0);
            CHECK(phonetic::find(str_letters_test, "F").compare("p") == 0);
            CHECK(phonetic::find(str_letters_test, "h").compare("H") == 0);
            CHECK(phonetic::find(str_letters_test, "H").compare("H") == 0);
            CHECK(phonetic::find(str_letters_test, "z").compare("z") == 0);
            CHECK(phonetic::find(str_letters_test, "s").compare("z") == 0);
            CHECK(phonetic::find(str_letters_test, "Z").compare("z") == 0);
            CHECK(phonetic::find(str_letters_test, "S").compare("z") == 0);
            CHECK(phonetic::find(str_letters_test, "j").compare("j") == 0);
            CHECK(phonetic::find(str_letters_test, "G").compare("j") == 0);
            CHECK(phonetic::find(str_letters_test, "g").compare("j") == 0);
            CHECK(phonetic::find(str_letters_test, "J").compare("j") == 0);
}

TEST_CASE("f&b&p")
{
    string str_words_test = "falafel is better than pancake";
            CHECK(phonetic::find(str_words_test, "FalaFel").compare("falafel") == 0);
            CHECK(phonetic::find(str_words_test, "balabel").compare("falafel") == 0);
            CHECK(phonetic::find(str_words_test, "palapel").compare("falafel") == 0);
            CHECK(phonetic::find(str_words_test, "petter").compare("better") == 0);
            CHECK(phonetic::find(str_words_test, "fetter").compare("better") == 0);
            CHECK(phonetic::find(str_words_test, "Better").compare("better") == 0);
            CHECK(phonetic::find(str_words_test, "bancake").compare("pancake") == 0);
            CHECK(phonetic::find(str_words_test, "Pancake").compare("pancake") == 0);
            CHECK(phonetic::find(str_words_test, "fancake").compare("pancake") == 0);
}


TEST_CASE("w&v")
{
    string str_words_test = "waves are wonderful";
            CHECK(phonetic::find(str_words_test, "vaves").compare("waves") == 0);
            CHECK(phonetic::find(str_words_test, "wawes").compare("waves") == 0);
            CHECK(phonetic::find(str_words_test, "Waves").compare("waves") == 0);
            CHECK(phonetic::find(str_words_test, "waVes").compare("waves") == 0);
            CHECK(phonetic::find(str_words_test, "vawes").compare("waves") == 0);
            CHECK(phonetic::find(str_words_test, "Wonderful").compare("wonderful") == 0);
            CHECK(phonetic::find(str_words_test, "vonderful").compare("wonderful") == 0);
            CHECK(phonetic::find(str_words_test, "Vonderful").compare("wonderful") == 0);
}


TEST_CASE("z&s")
{
    string str_words_test = "zoo season is summer";
            CHECK(phonetic::find(str_words_test, "soo").compare("zoo") == 0);
            CHECK(phonetic::find(str_words_test, "Zoo").compare("zoo") == 0);
            CHECK(phonetic::find(str_words_test, "Soo").compare("zoo") == 0);
            CHECK(phonetic::find(str_words_test, "sOO").compare("zoo") == 0);
            CHECK(phonetic::find(str_words_test, "Season").compare("season") == 0);
            CHECK(phonetic::find(str_words_test, "seaSon").compare("season") == 0);
            CHECK(phonetic::find(str_words_test, "SeaSon").compare("season") == 0);
            CHECK(phonetic::find(str_words_test, "zeason").compare("season") == 0);
            CHECK(phonetic::find(str_words_test, "zeazon").compare("season") == 0);
            CHECK(phonetic::find(str_words_test, "Zummer").compare("summer") == 0);
            CHECK(phonetic::find(str_words_test, "zummer").compare("summer") == 0);
            CHECK(phonetic::find(str_words_test, "Summer").compare("summer") == 0);
}
TEST_CASE("t&d")
{
    string str_words_test = "today is wednesday";
            CHECK(phonetic::find(str_words_test, "Today").compare("today") == 0);
            CHECK(phonetic::find(str_words_test, "totay").compare("today") == 0);
            CHECK(phonetic::find(str_words_test, "doday").compare("today") == 0);
            CHECK(phonetic::find(str_words_test, "Doday").compare("today") == 0);
            CHECK(phonetic::find(str_words_test, "toTay").compare("today") == 0);
            CHECK(phonetic::find(str_words_test, "toDay").compare("today") == 0);
            CHECK(phonetic::find(str_words_test, "WeDneSday").compare("wednesday") == 0);
            CHECK(phonetic::find(str_words_test, "weTnesTay").compare("wednesday") == 0);
            CHECK(phonetic::find(str_words_test, "wetnestay").compare("wednesday") == 0);
            CHECK(phonetic::find(str_words_test, "wednestay").compare("wednesday") == 0);


}
TEST_CASE("u&o")
{
    string str_words_test = "Ubunto Counter project";
            CHECK(phonetic::find(str_words_test, "ubunto").compare("Ubunto") == 0);
            CHECK(phonetic::find(str_words_test, "obonto").compare("Ubunto") == 0);
            CHECK(phonetic::find(str_words_test, "Ubuntu").compare("Ubunto") == 0);
            CHECK(phonetic::find(str_words_test, "UbuntO").compare("Ubunto") == 0);
            CHECK(phonetic::find(str_words_test, "Obunto").compare("Ubunto") == 0);
            CHECK(phonetic::find(str_words_test, "CoCnter").compare("Counter") == 0);
            CHECK(phonetic::find(str_words_test, "UoUnter").compare("Counter") == 0);
            CHECK(phonetic::find(str_words_test, "Uocnter").compare("Counter") == 0);
            CHECK(phonetic::find(str_words_test, "counter").compare("Counter") == 0);
            CHECK(phonetic::find(str_words_test, "prOject").compare("project") == 0);
            CHECK(phonetic::find(str_words_test, "pruject").compare("project") == 0);

}
TEST_CASE("y&i")
{
    string str_words_test = "yaniv is yellow";
            CHECK(phonetic::find(str_words_test, "ianiv").compare("yaniv") == 0);
            CHECK(phonetic::find(str_words_test, "ianyv").compare("yaniv") == 0);
            CHECK(phonetic::find(str_words_test, "Ianiv").compare("yaniv") == 0);
            CHECK(phonetic::find(str_words_test, "YanYv").compare("yaniv") == 0);
            CHECK(phonetic::find(str_words_test, "Ys").compare("is") == 0);
            CHECK(phonetic::find(str_words_test, "Is").compare("is") == 0);
            CHECK(phonetic::find(str_words_test, "iellow").compare("yellow") == 0);
            CHECK(phonetic::find(str_words_test, "Yellow").compare("yellow") == 0);
            CHECK(phonetic::find(str_words_test, "Iellow").compare("yellow") == 0);

}

TEST_CASE("j&g")
{
    string str_words_test = "jogging is good";
            CHECK(phonetic::find(str_words_test, "Jojging").compare("jogging") == 0);
            CHECK(phonetic::find(str_words_test, "gojjinj").compare("jogging") == 0);
            CHECK(phonetic::find(str_words_test, "Gogging").compare("jogging") == 0);
            CHECK(phonetic::find(str_words_test, "jojjinj").compare("jogging") == 0);
            CHECK(phonetic::find(str_words_test, "gogging").compare("jogging") == 0);
            CHECK(phonetic::find(str_words_test, "jood").compare("good") == 0);
            CHECK(phonetic::find(str_words_test, "Jood").compare("good") == 0);
            CHECK(phonetic::find(str_words_test, "Good").compare("good") == 0);


}
TEST_CASE("k&q&c")
{
    string str_words_test = "kkk headquarters are not cool";
            CHECK(phonetic::find(str_words_test, "KKk").compare("kkk") == 0);
            CHECK(phonetic::find(str_words_test, "qkc").compare("kkk") == 0);
            CHECK(phonetic::find(str_words_test, "ccc").compare("kkk") == 0);
            CHECK(phonetic::find(str_words_test, "QQQ").compare("kkk") == 0);
            CHECK(phonetic::find(str_words_test, "Ckk").compare("kkk") == 0);
            CHECK(phonetic::find(str_words_test, "headCuarters").compare("headquarters") == 0);
            CHECK(phonetic::find(str_words_test, "headkuarters").compare("headquarters") == 0);
            CHECK(phonetic::find(str_words_test, "headQuarters").compare("headquarters") == 0);
            CHECK(phonetic::find(str_words_test, "qool").compare("cool") == 0);
            CHECK(phonetic::find(str_words_test, "Kool").compare("cool") == 0);

}

