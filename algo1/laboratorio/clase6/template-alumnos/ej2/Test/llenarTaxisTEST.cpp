#include "gtest/gtest.h"
#include "../llenarTaxis.h"

TEST(llenarTaxis1Test, gruposPar) {
    int k = 3;
    //exercise
    int result = llenarTaxis1(k,k,k);
    // check
    EXPECT_EQ(result,5);
}

TEST(llenarTaxis1Test, gruposImpar) {
    int k = 4;
    //exercise
    int result = llenarTaxis1(k,k,k);
    // check
    EXPECT_EQ(result,6);
}

//TESTING CASO 2 ---------------------------------------------------------------------

TEST(llenarTaxis2Test, g3Mayor) {
    int result = llenarTaxis2(1,2,3);

    EXPECT_EQ(result,4);
    // lleno 1 con un grupo de 3 + uno de 1
    // lleno 1 con dos grupos de 2
    // lleno 2 con los grupos de 3 que quedan
}
TEST(llenarTaxis2Test, g1Mayor) {
    int result = llenarTaxis2(3,2,1);

    EXPECT_EQ(result,3);
    // lleno 1 juntando un grupo de 3 + uno de 1
    // lleno 1 con 2 grupos de 2
    // lleno 1 con dos grupos de 1
}

//TESTING CASO 3 ---------------------------------------------------------------------

TEST(llenarTaxis3Test, modResta1o2) {
    int result = llenarTaxis3(2,3,1);
    // check
    EXPECT_EQ(result,3);
    // 1 para un grupo de 1 y uno de 3
    // 1 para 2 grupos de 2
    // 1 para un grupo de 2 y el 1 que sobra
}

TEST(llenarTaxis3Test, modRestaNo1o2) {
    int result = llenarTaxis3(4,3,1);
                // 1 + llenarTaxis3(3,3,0)
                // 2 + llenarTaxis(3,1,0)
                // 3 + llenarTaxis(1,0,0)
    EXPECT_EQ(result,3);
    // 1 para un grupo de 1 y uno de 3
    // 1 para 2 grupos de 2
    // 1 para un grupo de 2 y los 2 que sobran
}

TEST(llenarTaxis3Test, modRestaNo1o2_2) {
    int result = llenarTaxis3(5,3,2);
                // 2 + llenarTaxis3(3,3,0)
                // 3 + llenarTaxis(3,1,0)
                // 4 + llenarTaxis(1,0,0)

    EXPECT_EQ(result,5);
    // 2 para dos grupos de 1 y dos de 3
    // 1 para 2 grupos de 2
    // 1 para un grupo de 2 y el que sobra
}

TEST(llenarTaxis3Test, modRestaNo1o2_3) {
    int result = llenarTaxis3(3,1,0);
                // 1 + llenarTaxis(3,0,0)

    EXPECT_EQ(result,2);
            // 1 para el grupo de 2 y 2 grupos de 1
            // 1 para 3 grupos de 1
}
