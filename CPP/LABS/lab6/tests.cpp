#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decryption.h"


TEST_CASE("Task B"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("WAY TO GO!", 5) == "BFD YT LT!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}
TEST_CASE("Task C"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, astnd!");
    CHECK(encryptVigenere("Hello, World!", "bake") != "Jevpq, astnd!");
    CHECK(encryptVigenere("Hello, World!", "ran") == "Yeyc, hryu!");

}
TEST_CASE("Task D"){
    CHECK(decryptCaesar("Bfd yt Lt!", 5) != "Hello, World!");
    CHECK(decryptCaesar("Mtb fwj dtz?", 5) == "Ho] are _ou?");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) != "Hrllo, World!");
}

